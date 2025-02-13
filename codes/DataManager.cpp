void __fastcall DataManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  void *v15; // x1
  struct DataManager_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDC06F & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC06F = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v1, v2, v3, v4, v5, v6);
  v8 = DataManager_TypeInfo->static_fields;
  v8->webViewData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->webViewData, 0LL, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  v16 = DataManager_TypeInfo->static_fields;
  v16->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->serverHash, (int64_t)v15, v17, v18, v19, v20, v21, v22);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDC06E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long____TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4BDC06E = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.saveNameList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.saveDataMapList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (Il2CppObject *)sub_1C22084(object_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields.lockCountObj = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.lockCountObj, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool __fastcall DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float v4; // s2

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v4 = realtimeSinceStartup - this->fields.lastFrameTime;
  if ( v4 > 0.1 )
    this->fields.lastFrameTime = realtimeSinceStartup;
  return v4 > 0.1;
}


void __fastcall DataManager__ClearCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDC04C & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC04C = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(CachePath, v3);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4BDC04D & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC04D = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
}


void __fastcall DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BDC04B & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC04B = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v3);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v9; // w2
  int v10; // w9

  if ( (byte_4BDC065 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4BDC065 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v7 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1C22094(v3, method);
  v9 = saveDataMapList->fields._size;
  v10 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v9, 0LL);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  DataMasterBase_array *v1; // x19
  ServantMaster_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  ServantCommentMaster_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ServantProfileMaster_o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  WarMaster_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UserMaster_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UserGameMaster_o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  TblUserMaster_o *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UserItemMaster_o *v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  UserServantMaster_o *v68; // x20
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UserServantStorageMaster_o *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  UserAccessaryMaster_o *v82; // x20
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  UserQuestMaster_o *v89; // x20
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  BattleMaster_o *v96; // x20
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  OtherUserGameMaster_o *v103; // x20
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  TblFriendMaster_o *v110; // x20
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  AreaMaster_o *v117; // x20
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  ServantCardMaster_o *v124; // x20
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  EventMaster_o *v131; // x20
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  ItemMaster_o *v138; // x20
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  QuestMaster_o *v145; // x20
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  QuestAddMaster_o *v152; // x20
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  QuestReleaseMaster_o *v159; // x20
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  QuestDateRangeMaster_o *v166; // x20
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  QuestPhaseMaster_o *v173; // x20
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  QuestPhaseDetailMaster_o *v180; // x20
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  QuestGroupMaster_o *v187; // x20
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  QuestRandomGroupMaster_o *v194; // x20
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  QuestConsumeItemMaster_o *v201; // x20
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  QuestMessageMaster_o *v208; // x20
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  UserQuestInfoMaster_o *v215; // x20
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  UserQuestRecordMaster_o *v222; // x20
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  ViewQuestInfoMaster_o *v229; // x20
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  ViewEnemyMaster_o *v236; // x20
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  ViewQuestEnemyInfoMaster_o *v243; // x20
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  BlankEarthSpotMaster_o *v250; // x20
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  BlankEarthSpotAddMaster_o *v257; // x20
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  SpotMaster_o *v264; // x20
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  SpotImageMaster_o *v271; // x20
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  SpotRoadMaster_o *v278; // x20
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  SpotPathMaster_o *v285; // x20
  int64_t v286; // x2
  int32_t v287; // w3
  System_String_o *v288; // x4
  BattleSetupInfo_o *v289; // x5
  FollowerInfo_o *v290; // x6
  PartyListViewItem_o *v291; // x7
  SpotAddMaster_o *v292; // x20
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  MapGimmickMaster_o *v299; // x20
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  GiftMaster_o *v306; // x20
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  GiftAddMaster_o *v313; // x20
  int64_t v314; // x2
  int32_t v315; // w3
  System_String_o *v316; // x4
  BattleSetupInfo_o *v317; // x5
  FollowerInfo_o *v318; // x6
  PartyListViewItem_o *v319; // x7
  ShopMaster_o *v320; // x20
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  StoneShopMaster_o *v327; // x20
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  BankShopMaster_o *v334; // x20
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  ShopScriptMaster_o *v341; // x20
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  StageMaster_o *v348; // x20
  int64_t v349; // x2
  int32_t v350; // w3
  System_String_o *v351; // x4
  BattleSetupInfo_o *v352; // x5
  FollowerInfo_o *v353; // x6
  PartyListViewItem_o *v354; // x7
  ServantGroupMaster_o *v355; // x20
  int64_t v356; // x2
  int32_t v357; // w3
  System_String_o *v358; // x4
  BattleSetupInfo_o *v359; // x5
  FollowerInfo_o *v360; // x6
  PartyListViewItem_o *v361; // x7
  ServantLimitMaster_o *v362; // x20
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  ServantLimitAddMaster_o *v369; // x20
  int64_t v370; // x2
  int32_t v371; // w3
  System_String_o *v372; // x4
  BattleSetupInfo_o *v373; // x5
  FollowerInfo_o *v374; // x6
  PartyListViewItem_o *v375; // x7
  ServantSkillMaster_o *v376; // x20
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  ServantPassiveSkillMaster_o *v383; // x20
  int64_t v384; // x2
  int32_t v385; // w3
  System_String_o *v386; // x4
  BattleSetupInfo_o *v387; // x5
  FollowerInfo_o *v388; // x6
  PartyListViewItem_o *v389; // x7
  BgmMaster_o *v390; // x20
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  ServantScriptMaster_o *v397; // x20
  int64_t v398; // x2
  int32_t v399; // w3
  System_String_o *v400; // x4
  BattleSetupInfo_o *v401; // x5
  FollowerInfo_o *v402; // x6
  PartyListViewItem_o *v403; // x7
  NewsMaster_o *v404; // x20
  int64_t v405; // x2
  int32_t v406; // w3
  System_String_o *v407; // x4
  BattleSetupInfo_o *v408; // x5
  FollowerInfo_o *v409; // x6
  PartyListViewItem_o *v410; // x7
  TelopMaster_o *v411; // x20
  int64_t v412; // x2
  int32_t v413; // w3
  System_String_o *v414; // x4
  BattleSetupInfo_o *v415; // x5
  FollowerInfo_o *v416; // x6
  PartyListViewItem_o *v417; // x7
  UserExpMaster_o *v418; // x20
  int64_t v419; // x2
  int32_t v420; // w3
  System_String_o *v421; // x4
  BattleSetupInfo_o *v422; // x5
  FollowerInfo_o *v423; // x6
  PartyListViewItem_o *v424; // x7
  TreasureDvcMaster_o *v425; // x20
  int64_t v426; // x2
  int32_t v427; // w3
  System_String_o *v428; // x4
  BattleSetupInfo_o *v429; // x5
  FollowerInfo_o *v430; // x6
  PartyListViewItem_o *v431; // x7
  ServantTreasureDvcMaster_o *v432; // x20
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  SkillMaster_o *v439; // x20
  int64_t v440; // x2
  int32_t v441; // w3
  System_String_o *v442; // x4
  BattleSetupInfo_o *v443; // x5
  FollowerInfo_o *v444; // x6
  PartyListViewItem_o *v445; // x7
  SkillLvMaster_o *v446; // x20
  int64_t v447; // x2
  int32_t v448; // w3
  System_String_o *v449; // x4
  BattleSetupInfo_o *v450; // x5
  FollowerInfo_o *v451; // x6
  PartyListViewItem_o *v452; // x7
  SkillDetailMaster_o *v453; // x20
  int64_t v454; // x2
  int32_t v455; // w3
  System_String_o *v456; // x4
  BattleSetupInfo_o *v457; // x5
  FollowerInfo_o *v458; // x6
  PartyListViewItem_o *v459; // x7
  CommandSpellMaster_o *v460; // x20
  int64_t v461; // x2
  int32_t v462; // w3
  System_String_o *v463; // x4
  BattleSetupInfo_o *v464; // x5
  FollowerInfo_o *v465; // x6
  PartyListViewItem_o *v466; // x7
  EquipMaster_o *v467; // x20
  int64_t v468; // x2
  int32_t v469; // w3
  System_String_o *v470; // x4
  BattleSetupInfo_o *v471; // x5
  FollowerInfo_o *v472; // x6
  PartyListViewItem_o *v473; // x7
  EquipExpMaster_o *v474; // x20
  int64_t v475; // x2
  int32_t v476; // w3
  System_String_o *v477; // x4
  BattleSetupInfo_o *v478; // x5
  FollowerInfo_o *v479; // x6
  PartyListViewItem_o *v480; // x7
  EquipSkillMaster_o *v481; // x20
  int64_t v482; // x2
  int32_t v483; // w3
  System_String_o *v484; // x4
  BattleSetupInfo_o *v485; // x5
  FollowerInfo_o *v486; // x6
  PartyListViewItem_o *v487; // x7
  SubEquipMaster_o *v488; // x20
  int64_t v489; // x2
  int32_t v490; // w3
  System_String_o *v491; // x4
  BattleSetupInfo_o *v492; // x5
  FollowerInfo_o *v493; // x6
  PartyListViewItem_o *v494; // x7
  AccessaryMaster_o *v495; // x20
  int64_t v496; // x2
  int32_t v497; // w3
  System_String_o *v498; // x4
  BattleSetupInfo_o *v499; // x5
  FollowerInfo_o *v500; // x6
  PartyListViewItem_o *v501; // x7
  UserPresentBoxMaster_o *v502; // x20
  int64_t v503; // x2
  int32_t v504; // w3
  System_String_o *v505; // x4
  BattleSetupInfo_o *v506; // x5
  FollowerInfo_o *v507; // x6
  PartyListViewItem_o *v508; // x7
  UserDeckMaster_o *v509; // x20
  int64_t v510; // x2
  int32_t v511; // w3
  System_String_o *v512; // x4
  BattleSetupInfo_o *v513; // x5
  FollowerInfo_o *v514; // x6
  PartyListViewItem_o *v515; // x7
  UserSubEquipMaster_o *v516; // x20
  int64_t v517; // x2
  int32_t v518; // w3
  System_String_o *v519; // x4
  BattleSetupInfo_o *v520; // x5
  FollowerInfo_o *v521; // x6
  PartyListViewItem_o *v522; // x7
  GachaMaster_o *v523; // x20
  int64_t v524; // x2
  int32_t v525; // w3
  System_String_o *v526; // x4
  BattleSetupInfo_o *v527; // x5
  FollowerInfo_o *v528; // x6
  PartyListViewItem_o *v529; // x7
  GachaImageMaster_o *v530; // x20
  int64_t v531; // x2
  int32_t v532; // w3
  System_String_o *v533; // x4
  BattleSetupInfo_o *v534; // x5
  FollowerInfo_o *v535; // x6
  PartyListViewItem_o *v536; // x7
  UserGachaMaster_o *v537; // x20
  int64_t v538; // x2
  int32_t v539; // w3
  System_String_o *v540; // x4
  BattleSetupInfo_o *v541; // x5
  FollowerInfo_o *v542; // x6
  PartyListViewItem_o *v543; // x7
  UserEquipMaster_o *v544; // x20
  int64_t v545; // x2
  int32_t v546; // w3
  System_String_o *v547; // x4
  BattleSetupInfo_o *v548; // x5
  FollowerInfo_o *v549; // x6
  PartyListViewItem_o *v550; // x7
  UserServantCollectionMaster_o *v551; // x20
  int64_t v552; // x2
  int32_t v553; // w3
  System_String_o *v554; // x4
  BattleSetupInfo_o *v555; // x5
  FollowerInfo_o *v556; // x6
  PartyListViewItem_o *v557; // x7
  FriendshipMaster_o *v558; // x20
  int64_t v559; // x2
  int32_t v560; // w3
  System_String_o *v561; // x4
  BattleSetupInfo_o *v562; // x5
  FollowerInfo_o *v563; // x6
  PartyListViewItem_o *v564; // x7
  GachaTicketMaster_o *v565; // x20
  int64_t v566; // x2
  int32_t v567; // w3
  System_String_o *v568; // x4
  BattleSetupInfo_o *v569; // x5
  FollowerInfo_o *v570; // x6
  PartyListViewItem_o *v571; // x7
  UserFormationMaster_o *v572; // x20
  int64_t v573; // x2
  int32_t v574; // w3
  System_String_o *v575; // x4
  BattleSetupInfo_o *v576; // x5
  FollowerInfo_o *v577; // x6
  PartyListViewItem_o *v578; // x7
  FunctionMaster_o *v579; // x20
  int64_t v580; // x2
  int32_t v581; // w3
  System_String_o *v582; // x4
  BattleSetupInfo_o *v583; // x5
  FollowerInfo_o *v584; // x6
  PartyListViewItem_o *v585; // x7
  BuffMaster_o *v586; // x20
  int64_t v587; // x2
  int32_t v588; // w3
  System_String_o *v589; // x4
  BattleSetupInfo_o *v590; // x5
  FollowerInfo_o *v591; // x6
  PartyListViewItem_o *v592; // x7
  GachaReleaseMaster_o *v593; // x20
  int64_t v594; // x2
  int32_t v595; // w3
  System_String_o *v596; // x4
  BattleSetupInfo_o *v597; // x5
  FollowerInfo_o *v598; // x6
  PartyListViewItem_o *v599; // x7
  CombineQpMaster_o *v600; // x20
  int64_t v601; // x2
  int32_t v602; // w3
  System_String_o *v603; // x4
  BattleSetupInfo_o *v604; // x5
  FollowerInfo_o *v605; // x6
  PartyListViewItem_o *v606; // x7
  CombineMaterialMaster_o *v607; // x20
  int64_t v608; // x2
  int32_t v609; // w3
  System_String_o *v610; // x4
  BattleSetupInfo_o *v611; // x5
  FollowerInfo_o *v612; // x6
  PartyListViewItem_o *v613; // x7
  EventCombineMaster_o *v614; // x20
  int64_t v615; // x2
  int32_t v616; // w3
  System_String_o *v617; // x4
  BattleSetupInfo_o *v618; // x5
  FollowerInfo_o *v619; // x6
  PartyListViewItem_o *v620; // x7
  ServantExpMaster_o *v621; // x20
  int64_t v622; // x2
  int32_t v623; // w3
  System_String_o *v624; // x4
  BattleSetupInfo_o *v625; // x5
  FollowerInfo_o *v626; // x6
  PartyListViewItem_o *v627; // x7
  CombineSkillMaster_o *v628; // x20
  int64_t v629; // x2
  int32_t v630; // w3
  System_String_o *v631; // x4
  BattleSetupInfo_o *v632; // x5
  FollowerInfo_o *v633; // x6
  PartyListViewItem_o *v634; // x7
  CombineTdMaster_o *v635; // x20
  int64_t v636; // x2
  int32_t v637; // w3
  System_String_o *v638; // x4
  BattleSetupInfo_o *v639; // x5
  FollowerInfo_o *v640; // x6
  PartyListViewItem_o *v641; // x7
  EventQuestMaster_o *v642; // x20
  int64_t v643; // x2
  int32_t v644; // w3
  System_String_o *v645; // x4
  BattleSetupInfo_o *v646; // x5
  FollowerInfo_o *v647; // x6
  PartyListViewItem_o *v648; // x7
  EventCampaignMaster_o *v649; // x20
  int64_t v650; // x2
  int32_t v651; // w3
  System_String_o *v652; // x4
  BattleSetupInfo_o *v653; // x5
  FollowerInfo_o *v654; // x6
  PartyListViewItem_o *v655; // x7
  IllustratorMaster_o *v656; // x20
  int64_t v657; // x2
  int32_t v658; // w3
  System_String_o *v659; // x4
  BattleSetupInfo_o *v660; // x5
  FollowerInfo_o *v661; // x6
  PartyListViewItem_o *v662; // x7
  CvMaster_o *v663; // x20
  int64_t v664; // x2
  int32_t v665; // w3
  System_String_o *v666; // x4
  BattleSetupInfo_o *v667; // x5
  FollowerInfo_o *v668; // x6
  PartyListViewItem_o *v669; // x7
  TreasureDvcLvMaster_o *v670; // x20
  int64_t v671; // x2
  int32_t v672; // w3
  System_String_o *v673; // x4
  BattleSetupInfo_o *v674; // x5
  FollowerInfo_o *v675; // x6
  PartyListViewItem_o *v676; // x7
  TreasureDvcDetailMaster_o *v677; // x20
  int64_t v678; // x2
  int32_t v679; // w3
  System_String_o *v680; // x4
  BattleSetupInfo_o *v681; // x5
  FollowerInfo_o *v682; // x6
  PartyListViewItem_o *v683; // x7
  UserFollowerMaster_o *v684; // x20
  int64_t v685; // x2
  int32_t v686; // w3
  System_String_o *v687; // x4
  BattleSetupInfo_o *v688; // x5
  FollowerInfo_o *v689; // x6
  PartyListViewItem_o *v690; // x7
  NpcFollowerMaster_o *v691; // x20
  int64_t v692; // x2
  int32_t v693; // w3
  System_String_o *v694; // x4
  BattleSetupInfo_o *v695; // x5
  FollowerInfo_o *v696; // x6
  PartyListViewItem_o *v697; // x7
  NpcServantFollowerMaster_o *v698; // x20
  int64_t v699; // x2
  int32_t v700; // w3
  System_String_o *v701; // x4
  BattleSetupInfo_o *v702; // x5
  FollowerInfo_o *v703; // x6
  PartyListViewItem_o *v704; // x7
  UserEventMaster_o *v705; // x20
  int64_t v706; // x2
  int32_t v707; // w3
  System_String_o *v708; // x4
  BattleSetupInfo_o *v709; // x5
  FollowerInfo_o *v710; // x6
  PartyListViewItem_o *v711; // x7
  UserShopMaster_o *v712; // x20
  int64_t v713; // x2
  int32_t v714; // w3
  System_String_o *v715; // x4
  BattleSetupInfo_o *v716; // x5
  FollowerInfo_o *v717; // x6
  PartyListViewItem_o *v718; // x7
  UserContinueMaster_o *v719; // x20
  int64_t v720; // x2
  int32_t v721; // w3
  System_String_o *v722; // x4
  BattleSetupInfo_o *v723; // x5
  FollowerInfo_o *v724; // x6
  PartyListViewItem_o *v725; // x7
  ConstantMaster_o *v726; // x20
  int64_t v727; // x2
  int32_t v728; // w3
  System_String_o *v729; // x4
  BattleSetupInfo_o *v730; // x5
  FollowerInfo_o *v731; // x6
  PartyListViewItem_o *v732; // x7
  ConstantLongMaster_o *v733; // x20
  int64_t v734; // x2
  int32_t v735; // w3
  System_String_o *v736; // x4
  BattleSetupInfo_o *v737; // x5
  FollowerInfo_o *v738; // x6
  PartyListViewItem_o *v739; // x7
  ConstantStrMaster_o *v740; // x20
  int64_t v741; // x2
  int32_t v742; // w3
  System_String_o *v743; // x4
  BattleSetupInfo_o *v744; // x5
  FollowerInfo_o *v745; // x6
  PartyListViewItem_o *v746; // x7
  AiMaster_o *v747; // x20
  int64_t v748; // x2
  int32_t v749; // w3
  System_String_o *v750; // x4
  BattleSetupInfo_o *v751; // x5
  FollowerInfo_o *v752; // x6
  PartyListViewItem_o *v753; // x7
  AiActMaster_o *v754; // x20
  int64_t v755; // x2
  int32_t v756; // w3
  System_String_o *v757; // x4
  BattleSetupInfo_o *v758; // x5
  FollowerInfo_o *v759; // x6
  PartyListViewItem_o *v760; // x7
  AttriRelationMaster_o *v761; // x20
  int64_t v762; // x2
  int32_t v763; // w3
  System_String_o *v764; // x4
  BattleSetupInfo_o *v765; // x5
  FollowerInfo_o *v766; // x6
  PartyListViewItem_o *v767; // x7
  ClassRelationMaster_o *v768; // x20
  int64_t v769; // x2
  int32_t v770; // w3
  System_String_o *v771; // x4
  BattleSetupInfo_o *v772; // x5
  FollowerInfo_o *v773; // x6
  PartyListViewItem_o *v774; // x7
  EffectMaster_o *v775; // x20
  int64_t v776; // x2
  int32_t v777; // w3
  System_String_o *v778; // x4
  BattleSetupInfo_o *v779; // x5
  FollowerInfo_o *v780; // x6
  PartyListViewItem_o *v781; // x7
  EquipImageMaster_o *v782; // x20
  int64_t v783; // x2
  int32_t v784; // w3
  System_String_o *v785; // x4
  BattleSetupInfo_o *v786; // x5
  FollowerInfo_o *v787; // x6
  PartyListViewItem_o *v788; // x7
  ServantVoiceMaster_o *v789; // x20
  int64_t v790; // x2
  int32_t v791; // w3
  System_String_o *v792; // x4
  BattleSetupInfo_o *v793; // x5
  FollowerInfo_o *v794; // x6
  PartyListViewItem_o *v795; // x7
  CombineLimitMaster_o *v796; // x20
  int64_t v797; // x2
  int32_t v798; // w3
  System_String_o *v799; // x4
  BattleSetupInfo_o *v800; // x5
  FollowerInfo_o *v801; // x6
  PartyListViewItem_o *v802; // x7
  CardMaster_o *v803; // x20
  int64_t v804; // x2
  int32_t v805; // w3
  System_String_o *v806; // x4
  BattleSetupInfo_o *v807; // x5
  FollowerInfo_o *v808; // x6
  PartyListViewItem_o *v809; // x7
  CombineQpSvtEquipMaster_o *v810; // x20
  int64_t v811; // x2
  int32_t v812; // w3
  System_String_o *v813; // x4
  BattleSetupInfo_o *v814; // x5
  FollowerInfo_o *v815; // x6
  PartyListViewItem_o *v816; // x7
  ServantRarityMaster_o *v817; // x20
  int64_t v818; // x2
  int32_t v819; // w3
  System_String_o *v820; // x4
  BattleSetupInfo_o *v821; // x5
  FollowerInfo_o *v822; // x6
  PartyListViewItem_o *v823; // x7
  SetItemMaster_o *v824; // x20
  int64_t v825; // x2
  int32_t v826; // w3
  System_String_o *v827; // x4
  BattleSetupInfo_o *v828; // x5
  FollowerInfo_o *v829; // x6
  PartyListViewItem_o *v830; // x7
  RecoverMaster_o *v831; // x20
  int64_t v832; // x2
  int32_t v833; // w3
  System_String_o *v834; // x4
  BattleSetupInfo_o *v835; // x5
  FollowerInfo_o *v836; // x6
  PartyListViewItem_o *v837; // x7
  BannerMaster_o *v838; // x20
  int64_t v839; // x2
  int32_t v840; // w3
  System_String_o *v841; // x4
  BattleSetupInfo_o *v842; // x5
  FollowerInfo_o *v843; // x6
  PartyListViewItem_o *v844; // x7
  ShopReleaseMaster_o *v845; // x20
  int64_t v846; // x2
  int32_t v847; // w3
  System_String_o *v848; // x4
  BattleSetupInfo_o *v849; // x5
  FollowerInfo_o *v850; // x6
  PartyListViewItem_o *v851; // x7
  EventRewardMaster_o *v852; // x20
  int64_t v853; // x2
  int32_t v854; // w3
  System_String_o *v855; // x4
  BattleSetupInfo_o *v856; // x5
  FollowerInfo_o *v857; // x6
  PartyListViewItem_o *v858; // x7
  EventDetailMaster_o *v859; // x20
  int64_t v860; // x2
  int32_t v861; // w3
  System_String_o *v862; // x4
  BattleSetupInfo_o *v863; // x5
  FollowerInfo_o *v864; // x6
  PartyListViewItem_o *v865; // x7
  EventServantMaster_o *v866; // x20
  int64_t v867; // x2
  int32_t v868; // w3
  System_String_o *v869; // x4
  BattleSetupInfo_o *v870; // x5
  FollowerInfo_o *v871; // x6
  PartyListViewItem_o *v872; // x7
  BoxGachaMaster_o *v873; // x20
  int64_t v874; // x2
  int32_t v875; // w3
  System_String_o *v876; // x4
  BattleSetupInfo_o *v877; // x5
  FollowerInfo_o *v878; // x6
  PartyListViewItem_o *v879; // x7
  BoxGachaBaseMaster_o *v880; // x20
  int64_t v881; // x2
  int32_t v882; // w3
  System_String_o *v883; // x4
  BattleSetupInfo_o *v884; // x5
  FollowerInfo_o *v885; // x6
  PartyListViewItem_o *v886; // x7
  BoxGachaTalkMaster_o *v887; // x20
  int64_t v888; // x2
  int32_t v889; // w3
  System_String_o *v890; // x4
  BattleSetupInfo_o *v891; // x5
  FollowerInfo_o *v892; // x6
  PartyListViewItem_o *v893; // x7
  UserBoxGachaMaster_o *v894; // x20
  int64_t v895; // x2
  int32_t v896; // w3
  System_String_o *v897; // x4
  BattleSetupInfo_o *v898; // x5
  FollowerInfo_o *v899; // x6
  PartyListViewItem_o *v900; // x7
  BoxGachaHistoryMaster_o *v901; // x20
  int64_t v902; // x2
  int32_t v903; // w3
  System_String_o *v904; // x4
  BattleSetupInfo_o *v905; // x5
  FollowerInfo_o *v906; // x6
  PartyListViewItem_o *v907; // x7
  BattleBgMaster_o *v908; // x20
  int64_t v909; // x2
  int32_t v910; // w3
  System_String_o *v911; // x4
  BattleSetupInfo_o *v912; // x5
  FollowerInfo_o *v913; // x6
  PartyListViewItem_o *v914; // x7
  TipsBattleMaster_o *v915; // x20
  int64_t v916; // x2
  int32_t v917; // w3
  System_String_o *v918; // x4
  BattleSetupInfo_o *v919; // x5
  FollowerInfo_o *v920; // x6
  PartyListViewItem_o *v921; // x7
  UserLoginMaster_o *v922; // x20
  int64_t v923; // x2
  int32_t v924; // w3
  System_String_o *v925; // x4
  BattleSetupInfo_o *v926; // x5
  FollowerInfo_o *v927; // x6
  PartyListViewItem_o *v928; // x7
  VoiceMaster_o *v929; // x20
  int64_t v930; // x2
  int32_t v931; // w3
  System_String_o *v932; // x4
  BattleSetupInfo_o *v933; // x5
  FollowerInfo_o *v934; // x6
  PartyListViewItem_o *v935; // x7
  EventRewardExtraMaster_o *v936; // x20
  int64_t v937; // x2
  int32_t v938; // w3
  System_String_o *v939; // x4
  BattleSetupInfo_o *v940; // x5
  FollowerInfo_o *v941; // x6
  PartyListViewItem_o *v942; // x7
  EventMissionMaster_o *v943; // x20
  int64_t v944; // x2
  int32_t v945; // w3
  System_String_o *v946; // x4
  BattleSetupInfo_o *v947; // x5
  FollowerInfo_o *v948; // x6
  PartyListViewItem_o *v949; // x7
  EventMissionActionMaster_o *v950; // x20
  int64_t v951; // x2
  int32_t v952; // w3
  System_String_o *v953; // x4
  BattleSetupInfo_o *v954; // x5
  FollowerInfo_o *v955; // x6
  PartyListViewItem_o *v956; // x7
  EventMissionActionAddMaster_o *v957; // x20
  int64_t v958; // x2
  int32_t v959; // w3
  System_String_o *v960; // x4
  BattleSetupInfo_o *v961; // x5
  FollowerInfo_o *v962; // x6
  PartyListViewItem_o *v963; // x7
  EventMissionConditionMaster_o *v964; // x20
  int64_t v965; // x2
  int32_t v966; // w3
  System_String_o *v967; // x4
  BattleSetupInfo_o *v968; // x5
  FollowerInfo_o *v969; // x6
  PartyListViewItem_o *v970; // x7
  EventMissionCondDetailMaster_o *v971; // x20
  int64_t v972; // x2
  int32_t v973; // w3
  System_String_o *v974; // x4
  BattleSetupInfo_o *v975; // x5
  FollowerInfo_o *v976; // x6
  PartyListViewItem_o *v977; // x7
  EventMissionAddMaster_o *v978; // x20
  int64_t v979; // x2
  int32_t v980; // w3
  System_String_o *v981; // x4
  BattleSetupInfo_o *v982; // x5
  FollowerInfo_o *v983; // x6
  PartyListViewItem_o *v984; // x7
  CompleteMissionMaster_o *v985; // x20
  int64_t v986; // x2
  int32_t v987; // w3
  System_String_o *v988; // x4
  BattleSetupInfo_o *v989; // x5
  FollowerInfo_o *v990; // x6
  PartyListViewItem_o *v991; // x7
  EventRewardSetMaster_o *v992; // x20
  int64_t v993; // x2
  int32_t v994; // w3
  System_String_o *v995; // x4
  BattleSetupInfo_o *v996; // x5
  FollowerInfo_o *v997; // x6
  PartyListViewItem_o *v998; // x7
  UserEventMissionMaster_o *v999; // x20
  int64_t v1000; // x2
  int32_t v1001; // w3
  System_String_o *v1002; // x4
  BattleSetupInfo_o *v1003; // x5
  FollowerInfo_o *v1004; // x6
  PartyListViewItem_o *v1005; // x7
  UserEventMissionCondDetailMaster_o *v1006; // x20
  int64_t v1007; // x2
  int32_t v1008; // w3
  System_String_o *v1009; // x4
  BattleSetupInfo_o *v1010; // x5
  FollowerInfo_o *v1011; // x6
  PartyListViewItem_o *v1012; // x7
  BoxGachaBaseDetailMaster_o *v1013; // x20
  int64_t v1014; // x2
  int32_t v1015; // w3
  System_String_o *v1016; // x4
  BattleSetupInfo_o *v1017; // x5
  FollowerInfo_o *v1018; // x6
  PartyListViewItem_o *v1019; // x7
  UserServantLeaderMaster_o *v1020; // x20
  int64_t v1021; // x2
  int32_t v1022; // w3
  System_String_o *v1023; // x4
  BattleSetupInfo_o *v1024; // x5
  FollowerInfo_o *v1025; // x6
  PartyListViewItem_o *v1026; // x7
  ClosedMessageMaster_o *v1027; // x20
  int64_t v1028; // x2
  int32_t v1029; // w3
  System_String_o *v1030; // x4
  BattleSetupInfo_o *v1031; // x5
  FollowerInfo_o *v1032; // x6
  PartyListViewItem_o *v1033; // x7
  FunctionGroupMaster_o *v1034; // x20
  int64_t v1035; // x2
  int32_t v1036; // w3
  System_String_o *v1037; // x4
  BattleSetupInfo_o *v1038; // x5
  FollowerInfo_o *v1039; // x6
  PartyListViewItem_o *v1040; // x7
  EventRaidMaster_o *v1041; // x20
  int64_t v1042; // x2
  int32_t v1043; // w3
  System_String_o *v1044; // x4
  BattleSetupInfo_o *v1045; // x5
  FollowerInfo_o *v1046; // x6
  PartyListViewItem_o *v1047; // x7
  TotalEventRaidMaster_o *v1048; // x20
  int64_t v1049; // x2
  int32_t v1050; // w3
  System_String_o *v1051; // x4
  BattleSetupInfo_o *v1052; // x5
  FollowerInfo_o *v1053; // x6
  PartyListViewItem_o *v1054; // x7
  UserEventRaidMaster_o *v1055; // x20
  int64_t v1056; // x2
  int32_t v1057; // w3
  System_String_o *v1058; // x4
  BattleSetupInfo_o *v1059; // x5
  FollowerInfo_o *v1060; // x6
  PartyListViewItem_o *v1061; // x7
  EventPointMaster_o *v1062; // x20
  int64_t v1063; // x2
  int32_t v1064; // w3
  System_String_o *v1065; // x4
  BattleSetupInfo_o *v1066; // x5
  FollowerInfo_o *v1067; // x6
  PartyListViewItem_o *v1068; // x7
  EventPointGroupMaster_o *v1069; // x20
  int64_t v1070; // x2
  int32_t v1071; // w3
  System_String_o *v1072; // x4
  BattleSetupInfo_o *v1073; // x5
  FollowerInfo_o *v1074; // x6
  PartyListViewItem_o *v1075; // x7
  TotalEventPointMaster_o *v1076; // x20
  int64_t v1077; // x2
  int32_t v1078; // w3
  System_String_o *v1079; // x4
  BattleSetupInfo_o *v1080; // x5
  FollowerInfo_o *v1081; // x6
  PartyListViewItem_o *v1082; // x7
  UserEventPointMaster_o *v1083; // x20
  int64_t v1084; // x2
  int32_t v1085; // w3
  System_String_o *v1086; // x4
  BattleSetupInfo_o *v1087; // x5
  FollowerInfo_o *v1088; // x6
  PartyListViewItem_o *v1089; // x7
  EventPointUpperMaster_o *v1090; // x20
  int64_t v1091; // x2
  int32_t v1092; // w3
  System_String_o *v1093; // x4
  BattleSetupInfo_o *v1094; // x5
  FollowerInfo_o *v1095; // x6
  PartyListViewItem_o *v1096; // x7
  EventPointUpperReleaseMaster_o *v1097; // x20
  int64_t v1098; // x2
  int32_t v1099; // w3
  System_String_o *v1100; // x4
  BattleSetupInfo_o *v1101; // x5
  FollowerInfo_o *v1102; // x6
  PartyListViewItem_o *v1103; // x7
  EventRaceMaster_o *v1104; // x20
  int64_t v1105; // x2
  int32_t v1106; // w3
  System_String_o *v1107; // x4
  BattleSetupInfo_o *v1108; // x5
  FollowerInfo_o *v1109; // x6
  PartyListViewItem_o *v1110; // x7
  EventRaceResultMaster_o *v1111; // x20
  int64_t v1112; // x2
  int32_t v1113; // w3
  System_String_o *v1114; // x4
  BattleSetupInfo_o *v1115; // x5
  FollowerInfo_o *v1116; // x6
  PartyListViewItem_o *v1117; // x7
  QuestRacePointMaster_o *v1118; // x20
  int64_t v1119; // x2
  int32_t v1120; // w3
  System_String_o *v1121; // x4
  BattleSetupInfo_o *v1122; // x5
  FollowerInfo_o *v1123; // x6
  PartyListViewItem_o *v1124; // x7
  UserEventRaceMaster_o *v1125; // x20
  int64_t v1126; // x2
  int32_t v1127; // w3
  System_String_o *v1128; // x4
  BattleSetupInfo_o *v1129; // x5
  FollowerInfo_o *v1130; // x6
  PartyListViewItem_o *v1131; // x7
  EventScriptMaster_o *v1132; // x20
  int64_t v1133; // x2
  int32_t v1134; // w3
  System_String_o *v1135; // x4
  BattleSetupInfo_o *v1136; // x5
  FollowerInfo_o *v1137; // x6
  PartyListViewItem_o *v1138; // x7
  EventScriptReleaseMaster_o *v1139; // x20
  int64_t v1140; // x2
  int32_t v1141; // w3
  System_String_o *v1142; // x4
  BattleSetupInfo_o *v1143; // x5
  FollowerInfo_o *v1144; // x6
  PartyListViewItem_o *v1145; // x7
  UserPresentHistoryMaster_o *v1146; // x20
  int64_t v1147; // x2
  int32_t v1148; // w3
  System_String_o *v1149; // x4
  BattleSetupInfo_o *v1150; // x5
  FollowerInfo_o *v1151; // x6
  PartyListViewItem_o *v1152; // x7
  MstMissionMaster_o *v1153; // x20
  int64_t v1154; // x2
  int32_t v1155; // w3
  System_String_o *v1156; // x4
  BattleSetupInfo_o *v1157; // x5
  FollowerInfo_o *v1158; // x6
  PartyListViewItem_o *v1159; // x7
  ServantExceedMaster_o *v1160; // x20
  int64_t v1161; // x2
  int32_t v1162; // w3
  System_String_o *v1163; // x4
  BattleSetupInfo_o *v1164; // x5
  FollowerInfo_o *v1165; // x6
  PartyListViewItem_o *v1166; // x7
  PartialMaintenanceMaster_o *v1167; // x20
  int64_t v1168; // x2
  int32_t v1169; // w3
  System_String_o *v1170; // x4
  BattleSetupInfo_o *v1171; // x5
  FollowerInfo_o *v1172; // x6
  PartyListViewItem_o *v1173; // x7
  GuideMaster_o *v1174; // x20
  int64_t v1175; // x2
  int32_t v1176; // w3
  System_String_o *v1177; // x4
  BattleSetupInfo_o *v1178; // x5
  FollowerInfo_o *v1179; // x6
  PartyListViewItem_o *v1180; // x7
  MstMissionDisplayInfoMaster_o *v1181; // x20
  int64_t v1182; // x2
  int32_t v1183; // w3
  System_String_o *v1184; // x4
  BattleSetupInfo_o *v1185; // x5
  FollowerInfo_o *v1186; // x6
  PartyListViewItem_o *v1187; // x7
  GachaGroupMaster_o *v1188; // x20
  int64_t v1189; // x2
  int32_t v1190; // w3
  System_String_o *v1191; // x4
  BattleSetupInfo_o *v1192; // x5
  FollowerInfo_o *v1193; // x6
  PartyListViewItem_o *v1194; // x7
  QuestResetMaster_o *v1195; // x20
  int64_t v1196; // x2
  int32_t v1197; // w3
  System_String_o *v1198; // x4
  BattleSetupInfo_o *v1199; // x5
  FollowerInfo_o *v1200; // x6
  PartyListViewItem_o *v1201; // x7
  WarAddMaster_o *v1202; // x20
  int64_t v1203; // x2
  int32_t v1204; // w3
  System_String_o *v1205; // x4
  BattleSetupInfo_o *v1206; // x5
  FollowerInfo_o *v1207; // x6
  PartyListViewItem_o *v1208; // x7
  EventItemDisplayMaster_o *v1209; // x20
  int64_t v1210; // x2
  int32_t v1211; // w3
  System_String_o *v1212; // x4
  BattleSetupInfo_o *v1213; // x5
  FollowerInfo_o *v1214; // x6
  PartyListViewItem_o *v1215; // x7
  EventItemDisplayGroupMaster_o *v1216; // x20
  int64_t v1217; // x2
  int32_t v1218; // w3
  System_String_o *v1219; // x4
  BattleSetupInfo_o *v1220; // x5
  FollowerInfo_o *v1221; // x6
  PartyListViewItem_o *v1222; // x7
  EventItemDisplayReleaseMaster_o *v1223; // x20
  int64_t v1224; // x2
  int32_t v1225; // w3
  System_String_o *v1226; // x4
  BattleSetupInfo_o *v1227; // x5
  FollowerInfo_o *v1228; // x6
  PartyListViewItem_o *v1229; // x7
  EventTutorialMaster_o *v1230; // x20
  int64_t v1231; // x2
  int32_t v1232; // w3
  System_String_o *v1233; // x4
  BattleSetupInfo_o *v1234; // x5
  FollowerInfo_o *v1235; // x6
  PartyListViewItem_o *v1236; // x7
  EventTutorialCondMaster_o *v1237; // x20
  int64_t v1238; // x2
  int32_t v1239; // w3
  System_String_o *v1240; // x4
  BattleSetupInfo_o *v1241; // x5
  FollowerInfo_o *v1242; // x6
  PartyListViewItem_o *v1243; // x7
  VoiceReleaseMaster_o *v1244; // x20
  int64_t v1245; // x2
  int32_t v1246; // w3
  System_String_o *v1247; // x4
  BattleSetupInfo_o *v1248; // x5
  FollowerInfo_o *v1249; // x6
  PartyListViewItem_o *v1250; // x7
  EventSuperBossMaster_o *v1251; // x20
  int64_t v1252; // x2
  int32_t v1253; // w3
  System_String_o *v1254; // x4
  BattleSetupInfo_o *v1255; // x5
  FollowerInfo_o *v1256; // x6
  PartyListViewItem_o *v1257; // x7
  UserSuperBossMaster_o *v1258; // x20
  int64_t v1259; // x2
  int32_t v1260; // w3
  System_String_o *v1261; // x4
  BattleSetupInfo_o *v1262; // x5
  FollowerInfo_o *v1263; // x6
  PartyListViewItem_o *v1264; // x7
  QuestScriptMaster_o *v1265; // x20
  int64_t v1266; // x2
  int32_t v1267; // w3
  System_String_o *v1268; // x4
  BattleSetupInfo_o *v1269; // x5
  FollowerInfo_o *v1270; // x6
  PartyListViewItem_o *v1271; // x7
  QuestScriptReleaseMaster_o *v1272; // x20
  int64_t v1273; // x2
  int32_t v1274; // w3
  System_String_o *v1275; // x4
  BattleSetupInfo_o *v1276; // x5
  FollowerInfo_o *v1277; // x6
  PartyListViewItem_o *v1278; // x7
  MaterialFolderMaster_o *v1279; // x20
  int64_t v1280; // x2
  int32_t v1281; // w3
  System_String_o *v1282; // x4
  BattleSetupInfo_o *v1283; // x5
  FollowerInfo_o *v1284; // x6
  PartyListViewItem_o *v1285; // x7
  RestrictionMaster_o *v1286; // x20
  int64_t v1287; // x2
  int32_t v1288; // w3
  System_String_o *v1289; // x4
  BattleSetupInfo_o *v1290; // x5
  FollowerInfo_o *v1291; // x6
  PartyListViewItem_o *v1292; // x7
  QuestRestrictionMaster_o *v1293; // x20
  int64_t v1294; // x2
  int32_t v1295; // w3
  System_String_o *v1296; // x4
  BattleSetupInfo_o *v1297; // x5
  FollowerInfo_o *v1298; // x6
  PartyListViewItem_o *v1299; // x7
  ServantVoiceRelationMaster_o *v1300; // x20
  int64_t v1301; // x2
  int32_t v1302; // w3
  System_String_o *v1303; // x4
  BattleSetupInfo_o *v1304; // x5
  FollowerInfo_o *v1305; // x6
  PartyListViewItem_o *v1306; // x7
  ShopDetailMaster_o *v1307; // x20
  int64_t v1308; // x2
  int32_t v1309; // w3
  System_String_o *v1310; // x4
  BattleSetupInfo_o *v1311; // x5
  FollowerInfo_o *v1312; // x6
  PartyListViewItem_o *v1313; // x7
  ServantScriptAddMaster_o *v1314; // x20
  int64_t v1315; // x2
  int32_t v1316; // w3
  System_String_o *v1317; // x4
  BattleSetupInfo_o *v1318; // x5
  FollowerInfo_o *v1319; // x6
  PartyListViewItem_o *v1320; // x7
  CombineMaster_o *v1321; // x20
  int64_t v1322; // x2
  int32_t v1323; // w3
  System_String_o *v1324; // x4
  BattleSetupInfo_o *v1325; // x5
  FollowerInfo_o *v1326; // x6
  PartyListViewItem_o *v1327; // x7
  AiFieldMaster_o *v1328; // x20
  int64_t v1329; // x2
  int32_t v1330; // w3
  System_String_o *v1331; // x4
  BattleSetupInfo_o *v1332; // x5
  FollowerInfo_o *v1333; // x6
  PartyListViewItem_o *v1334; // x7
  ServantCommentAddMaster_o *v1335; // x20
  int64_t v1336; // x2
  int32_t v1337; // w3
  System_String_o *v1338; // x4
  BattleSetupInfo_o *v1339; // x5
  FollowerInfo_o *v1340; // x6
  PartyListViewItem_o *v1341; // x7
  EventFilterMaster_o *v1342; // x20
  int64_t v1343; // x2
  int32_t v1344; // w3
  System_String_o *v1345; // x4
  BattleSetupInfo_o *v1346; // x5
  FollowerInfo_o *v1347; // x6
  PartyListViewItem_o *v1348; // x7
  UserSupportDeckMaster_o *v1349; // x20
  int64_t v1350; // x2
  int32_t v1351; // w3
  System_String_o *v1352; // x4
  BattleSetupInfo_o *v1353; // x5
  FollowerInfo_o *v1354; // x6
  PartyListViewItem_o *v1355; // x7
  EventRewardSceneMaster_o *v1356; // x20
  int64_t v1357; // x2
  int32_t v1358; // w3
  System_String_o *v1359; // x4
  BattleSetupInfo_o *v1360; // x5
  FollowerInfo_o *v1361; // x6
  PartyListViewItem_o *v1362; // x7
  EventVoicePlayMaster_o *v1363; // x20
  int64_t v1364; // x2
  int32_t v1365; // w3
  System_String_o *v1366; // x4
  BattleSetupInfo_o *v1367; // x5
  FollowerInfo_o *v1368; // x6
  PartyListViewItem_o *v1369; // x7
  GachaSubMaster_o *v1370; // x20
  int64_t v1371; // x2
  int32_t v1372; // w3
  System_String_o *v1373; // x4
  BattleSetupInfo_o *v1374; // x5
  FollowerInfo_o *v1375; // x6
  PartyListViewItem_o *v1376; // x7
  GachaDetailMaster_o *v1377; // x20
  int64_t v1378; // x2
  int32_t v1379; // w3
  System_String_o *v1380; // x4
  BattleSetupInfo_o *v1381; // x5
  FollowerInfo_o *v1382; // x6
  PartyListViewItem_o *v1383; // x7
  GachaBaseCollateralMaster_o *v1384; // x20
  int64_t v1385; // x2
  int32_t v1386; // w3
  System_String_o *v1387; // x4
  BattleSetupInfo_o *v1388; // x5
  FollowerInfo_o *v1389; // x6
  PartyListViewItem_o *v1390; // x7
  GachaAdjustAddMaster_o *v1391; // x20
  int64_t v1392; // x2
  int32_t v1393; // w3
  System_String_o *v1394; // x4
  BattleSetupInfo_o *v1395; // x5
  FollowerInfo_o *v1396; // x6
  PartyListViewItem_o *v1397; // x7
  GachaBonusSelectMaster_o *v1398; // x20
  int64_t v1399; // x2
  int32_t v1400; // w3
  System_String_o *v1401; // x4
  BattleSetupInfo_o *v1402; // x5
  FollowerInfo_o *v1403; // x6
  PartyListViewItem_o *v1404; // x7
  GachaBonusSelectLineupMaster_o *v1405; // x20
  int64_t v1406; // x2
  int32_t v1407; // w3
  System_String_o *v1408; // x4
  BattleSetupInfo_o *v1409; // x5
  FollowerInfo_o *v1410; // x6
  PartyListViewItem_o *v1411; // x7
  ServantChangeMaster_o *v1412; // x20
  int64_t v1413; // x2
  int32_t v1414; // w3
  System_String_o *v1415; // x4
  BattleSetupInfo_o *v1416; // x5
  FollowerInfo_o *v1417; // x6
  PartyListViewItem_o *v1418; // x7
  VoiceCondMaster_o *v1419; // x20
  int64_t v1420; // x2
  int32_t v1421; // w3
  System_String_o *v1422; // x4
  BattleSetupInfo_o *v1423; // x5
  FollowerInfo_o *v1424; // x6
  PartyListViewItem_o *v1425; // x7
  BgmReleaseMaster_o *v1426; // x20
  int64_t v1427; // x2
  int32_t v1428; // w3
  System_String_o *v1429; // x4
  BattleSetupInfo_o *v1430; // x5
  FollowerInfo_o *v1431; // x6
  PartyListViewItem_o *v1432; // x7
  MyRoomAddMaster_o *v1433; // x20
  int64_t v1434; // x2
  int32_t v1435; // w3
  System_String_o *v1436; // x4
  BattleSetupInfo_o *v1437; // x5
  FollowerInfo_o *v1438; // x6
  PartyListViewItem_o *v1439; // x7
  ShopActionMaster_o *v1440; // x20
  int64_t v1441; // x2
  int32_t v1442; // w3
  System_String_o *v1443; // x4
  BattleSetupInfo_o *v1444; // x5
  FollowerInfo_o *v1445; // x6
  PartyListViewItem_o *v1446; // x7
  EventRewardSceneReleaseMaster_o *v1447; // x20
  int64_t v1448; // x2
  int32_t v1449; // w3
  System_String_o *v1450; // x4
  BattleSetupInfo_o *v1451; // x5
  FollowerInfo_o *v1452; // x6
  PartyListViewItem_o *v1453; // x7
  QuestBehaviorMaster_o *v1454; // x20
  int64_t v1455; // x2
  int32_t v1456; // w3
  System_String_o *v1457; // x4
  BattleSetupInfo_o *v1458; // x5
  FollowerInfo_o *v1459; // x6
  PartyListViewItem_o *v1460; // x7
  MapMaster_o *v1461; // x20
  int64_t v1462; // x2
  int32_t v1463; // w3
  System_String_o *v1464; // x4
  BattleSetupInfo_o *v1465; // x5
  FollowerInfo_o *v1466; // x6
  PartyListViewItem_o *v1467; // x7
  MapCondMaster_o *v1468; // x20
  int64_t v1469; // x2
  int32_t v1470; // w3
  System_String_o *v1471; // x4
  BattleSetupInfo_o *v1472; // x5
  FollowerInfo_o *v1473; // x6
  PartyListViewItem_o *v1474; // x7
  MapButtonMaster_o *v1475; // x20
  int64_t v1476; // x2
  int32_t v1477; // w3
  System_String_o *v1478; // x4
  BattleSetupInfo_o *v1479; // x5
  FollowerInfo_o *v1480; // x6
  PartyListViewItem_o *v1481; // x7
  BannerAddMaster_o *v1482; // x20
  int64_t v1483; // x2
  int32_t v1484; // w3
  System_String_o *v1485; // x4
  BattleSetupInfo_o *v1486; // x5
  FollowerInfo_o *v1487; // x6
  PartyListViewItem_o *v1488; // x7
  EventAddMaster_o *v1489; // x20
  int64_t v1490; // x2
  int32_t v1491; // w3
  System_String_o *v1492; // x4
  BattleSetupInfo_o *v1493; // x5
  FollowerInfo_o *v1494; // x6
  PartyListViewItem_o *v1495; // x7
  TotalLoginMaster_o *v1496; // x20
  int64_t v1497; // x2
  int32_t v1498; // w3
  System_String_o *v1499; // x4
  BattleSetupInfo_o *v1500; // x5
  FollowerInfo_o *v1501; // x6
  PartyListViewItem_o *v1502; // x7
  ServantFilterMaster_o *v1503; // x20
  int64_t v1504; // x2
  int32_t v1505; // w3
  System_String_o *v1506; // x4
  BattleSetupInfo_o *v1507; // x5
  FollowerInfo_o *v1508; // x6
  PartyListViewItem_o *v1509; // x7
  CombineCostumeMaster_o *v1510; // x20
  int64_t v1511; // x2
  int32_t v1512; // w3
  System_String_o *v1513; // x4
  BattleSetupInfo_o *v1514; // x5
  FollowerInfo_o *v1515; // x6
  PartyListViewItem_o *v1516; // x7
  ServantCostumeMaster_o *v1517; // x20
  int64_t v1518; // x2
  int32_t v1519; // w3
  System_String_o *v1520; // x4
  BattleSetupInfo_o *v1521; // x5
  FollowerInfo_o *v1522; // x6
  PartyListViewItem_o *v1523; // x7
  ServantCostumeReleaseMaster_o *v1524; // x20
  int64_t v1525; // x2
  int32_t v1526; // w3
  System_String_o *v1527; // x4
  BattleSetupInfo_o *v1528; // x5
  FollowerInfo_o *v1529; // x6
  PartyListViewItem_o *v1530; // x7
  UserFriendRequestHistoryMaster_o *v1531; // x20
  int64_t v1532; // x2
  int32_t v1533; // w3
  System_String_o *v1534; // x4
  BattleSetupInfo_o *v1535; // x5
  FollowerInfo_o *v1536; // x6
  PartyListViewItem_o *v1537; // x7
  UserBlacklistMaster_o *v1538; // x20
  int64_t v1539; // x2
  int32_t v1540; // w3
  System_String_o *v1541; // x4
  BattleSetupInfo_o *v1542; // x5
  FollowerInfo_o *v1543; // x6
  PartyListViewItem_o *v1544; // x7
  ItemSelectMaster_o *v1545; // x20
  int64_t v1546; // x2
  int32_t v1547; // w3
  System_String_o *v1548; // x4
  BattleSetupInfo_o *v1549; // x5
  FollowerInfo_o *v1550; // x6
  PartyListViewItem_o *v1551; // x7
  TotalEventRaceMaster_o *v1552; // x20
  int64_t v1553; // x2
  int32_t v1554; // w3
  System_String_o *v1555; // x4
  BattleSetupInfo_o *v1556; // x5
  FollowerInfo_o *v1557; // x6
  PartyListViewItem_o *v1558; // x7
  EventPointGroupAddMaster_o *v1559; // x20
  int64_t v1560; // x2
  int32_t v1561; // w3
  System_String_o *v1562; // x4
  BattleSetupInfo_o *v1563; // x5
  FollowerInfo_o *v1564; // x6
  PartyListViewItem_o *v1565; // x7
  VoicePlayGroupMaster_o *v1566; // x20
  int64_t v1567; // x2
  int32_t v1568; // w3
  System_String_o *v1569; // x4
  BattleSetupInfo_o *v1570; // x5
  FollowerInfo_o *v1571; // x6
  PartyListViewItem_o *v1572; // x7
  VoicePlayCondMaster_o *v1573; // x20
  int64_t v1574; // x2
  int32_t v1575; // w3
  System_String_o *v1576; // x4
  BattleSetupInfo_o *v1577; // x5
  FollowerInfo_o *v1578; // x6
  PartyListViewItem_o *v1579; // x7
  GachaStoryAdjustMaster_o *v1580; // x20
  int64_t v1581; // x2
  int32_t v1582; // w3
  System_String_o *v1583; // x4
  BattleSetupInfo_o *v1584; // x5
  FollowerInfo_o *v1585; // x6
  PartyListViewItem_o *v1586; // x7
  ServantFlagMaster_o *v1587; // x20
  int64_t v1588; // x2
  int32_t v1589; // w3
  System_String_o *v1590; // x4
  BattleSetupInfo_o *v1591; // x5
  FollowerInfo_o *v1592; // x6
  PartyListViewItem_o *v1593; // x7
  ServantFlagReleaseMaster_o *v1594; // x20
  int64_t v1595; // x2
  int32_t v1596; // w3
  System_String_o *v1597; // x4
  BattleSetupInfo_o *v1598; // x5
  FollowerInfo_o *v1599; // x6
  PartyListViewItem_o *v1600; // x7
  EventLocationCampaignMaster_o *v1601; // x20
  int64_t v1602; // x2
  int32_t v1603; // w3
  System_String_o *v1604; // x4
  BattleSetupInfo_o *v1605; // x5
  FollowerInfo_o *v1606; // x6
  PartyListViewItem_o *v1607; // x7
  CampaignInfoMaster_o *v1608; // x20
  int64_t v1609; // x2
  int32_t v1610; // w3
  System_String_o *v1611; // x4
  BattleSetupInfo_o *v1612; // x5
  FollowerInfo_o *v1613; // x6
  PartyListViewItem_o *v1614; // x7
  DialogMessageMaster_o *v1615; // x20
  int64_t v1616; // x2
  int32_t v1617; // w3
  System_String_o *v1618; // x4
  BattleSetupInfo_o *v1619; // x5
  FollowerInfo_o *v1620; // x6
  PartyListViewItem_o *v1621; // x7
  ServantIndividualityMaster_o *v1622; // x20
  int64_t v1623; // x2
  int32_t v1624; // w3
  System_String_o *v1625; // x4
  BattleSetupInfo_o *v1626; // x5
  FollowerInfo_o *v1627; // x6
  PartyListViewItem_o *v1628; // x7
  BoardMessageMaster_o *v1629; // x20
  int64_t v1630; // x2
  int32_t v1631; // w3
  System_String_o *v1632; // x4
  BattleSetupInfo_o *v1633; // x5
  FollowerInfo_o *v1634; // x6
  PartyListViewItem_o *v1635; // x7
  BoardMessageReleaseMaster_o *v1636; // x20
  int64_t v1637; // x2
  int32_t v1638; // w3
  System_String_o *v1639; // x4
  BattleSetupInfo_o *v1640; // x5
  FollowerInfo_o *v1641; // x6
  PartyListViewItem_o *v1642; // x7
  EventServantFatigueMaster_o *v1643; // x20
  int64_t v1644; // x2
  int32_t v1645; // w3
  System_String_o *v1646; // x4
  BattleSetupInfo_o *v1647; // x5
  FollowerInfo_o *v1648; // x6
  PartyListViewItem_o *v1649; // x7
  UserEventDeckMaster_o *v1650; // x20
  int64_t v1651; // x2
  int32_t v1652; // w3
  System_String_o *v1653; // x4
  BattleSetupInfo_o *v1654; // x5
  FollowerInfo_o *v1655; // x6
  PartyListViewItem_o *v1656; // x7
  EventTowerMaster_o *v1657; // x20
  int64_t v1658; // x2
  int32_t v1659; // w3
  System_String_o *v1660; // x4
  BattleSetupInfo_o *v1661; // x5
  FollowerInfo_o *v1662; // x6
  PartyListViewItem_o *v1663; // x7
  EventTowerRewardMaster_o *v1664; // x20
  int64_t v1665; // x2
  int32_t v1666; // w3
  System_String_o *v1667; // x4
  BattleSetupInfo_o *v1668; // x5
  FollowerInfo_o *v1669; // x6
  PartyListViewItem_o *v1670; // x7
  EventBulletinBoardMaster_o *v1671; // x20
  int64_t v1672; // x2
  int32_t v1673; // w3
  System_String_o *v1674; // x4
  BattleSetupInfo_o *v1675; // x5
  FollowerInfo_o *v1676; // x6
  PartyListViewItem_o *v1677; // x7
  EventBulletinBoardReleaseMaster_o *v1678; // x20
  int64_t v1679; // x2
  int32_t v1680; // w3
  System_String_o *v1681; // x4
  BattleSetupInfo_o *v1682; // x5
  FollowerInfo_o *v1683; // x6
  PartyListViewItem_o *v1684; // x7
  EventFactoryMaster_o *v1685; // x20
  int64_t v1686; // x2
  int32_t v1687; // w3
  System_String_o *v1688; // x4
  BattleSetupInfo_o *v1689; // x5
  FollowerInfo_o *v1690; // x6
  PartyListViewItem_o *v1691; // x7
  ShopGroupMaster_o *v1692; // x20
  int64_t v1693; // x2
  int32_t v1694; // w3
  System_String_o *v1695; // x4
  BattleSetupInfo_o *v1696; // x5
  FollowerInfo_o *v1697; // x6
  PartyListViewItem_o *v1698; // x7
  AuraEffectMaster_o *v1699; // x20
  int64_t v1700; // x2
  int32_t v1701; // w3
  System_String_o *v1702; // x4
  BattleSetupInfo_o *v1703; // x5
  FollowerInfo_o *v1704; // x6
  PartyListViewItem_o *v1705; // x7
  AuraEffectPosOverwriteMaster_o *v1706; // x20
  int64_t v1707; // x2
  int32_t v1708; // w3
  System_String_o *v1709; // x4
  BattleSetupInfo_o *v1710; // x5
  FollowerInfo_o *v1711; // x6
  PartyListViewItem_o *v1712; // x7
  UserEventMissionFixMaster_o *v1713; // x20
  int64_t v1714; // x2
  int32_t v1715; // w3
  System_String_o *v1716; // x4
  BattleSetupInfo_o *v1717; // x5
  FollowerInfo_o *v1718; // x6
  PartyListViewItem_o *v1719; // x7
  NotEndEventMissionFixMaster_o *v1720; // x20
  int64_t v1721; // x2
  int32_t v1722; // w3
  System_String_o *v1723; // x4
  BattleSetupInfo_o *v1724; // x5
  FollowerInfo_o *v1725; // x6
  PartyListViewItem_o *v1726; // x7
  EnemyMstMaster_o *v1727; // x20
  int64_t v1728; // x2
  int32_t v1729; // w3
  System_String_o *v1730; // x4
  BattleSetupInfo_o *v1731; // x5
  FollowerInfo_o *v1732; // x6
  PartyListViewItem_o *v1733; // x7
  EnemyMstBattleMaster_o *v1734; // x20
  int64_t v1735; // x2
  int32_t v1736; // w3
  System_String_o *v1737; // x4
  BattleSetupInfo_o *v1738; // x5
  FollowerInfo_o *v1739; // x6
  PartyListViewItem_o *v1740; // x7
  ServantSkillReleaseMaster_o *v1741; // x20
  int64_t v1742; // x2
  int32_t v1743; // w3
  System_String_o *v1744; // x4
  BattleSetupInfo_o *v1745; // x5
  FollowerInfo_o *v1746; // x6
  PartyListViewItem_o *v1747; // x7
  ServantPassiveSkillReleaseMaster_o *v1748; // x20
  int64_t v1749; // x2
  int32_t v1750; // w3
  System_String_o *v1751; // x4
  BattleSetupInfo_o *v1752; // x5
  FollowerInfo_o *v1753; // x6
  PartyListViewItem_o *v1754; // x7
  ServantTreasureDeviceReleaseMaster_o *v1755; // x20
  int64_t v1756; // x2
  int32_t v1757; // w3
  System_String_o *v1758; // x4
  BattleSetupInfo_o *v1759; // x5
  FollowerInfo_o *v1760; // x6
  PartyListViewItem_o *v1761; // x7
  MapGimmickReleaseMaster_o *v1762; // x20
  int64_t v1763; // x2
  int32_t v1764; // w3
  System_String_o *v1765; // x4
  BattleSetupInfo_o *v1766; // x5
  FollowerInfo_o *v1767; // x6
  PartyListViewItem_o *v1768; // x7
  CommandCodeMaster_o *v1769; // x20
  int64_t v1770; // x2
  int32_t v1771; // w3
  System_String_o *v1772; // x4
  BattleSetupInfo_o *v1773; // x5
  FollowerInfo_o *v1774; // x6
  PartyListViewItem_o *v1775; // x7
  ServantCommandCodeUnlockMaster_o *v1776; // x20
  int64_t v1777; // x2
  int32_t v1778; // w3
  System_String_o *v1779; // x4
  BattleSetupInfo_o *v1780; // x5
  FollowerInfo_o *v1781; // x6
  PartyListViewItem_o *v1782; // x7
  UserCommandCodeMaster_o *v1783; // x20
  int64_t v1784; // x2
  int32_t v1785; // w3
  System_String_o *v1786; // x4
  BattleSetupInfo_o *v1787; // x5
  FollowerInfo_o *v1788; // x6
  PartyListViewItem_o *v1789; // x7
  UserCommandCodeCollectionMaster_o *v1790; // x20
  int64_t v1791; // x2
  int32_t v1792; // w3
  System_String_o *v1793; // x4
  BattleSetupInfo_o *v1794; // x5
  FollowerInfo_o *v1795; // x6
  PartyListViewItem_o *v1796; // x7
  UserServantCommandCodeMaster_o *v1797; // x20
  int64_t v1798; // x2
  int32_t v1799; // w3
  System_String_o *v1800; // x4
  BattleSetupInfo_o *v1801; // x5
  FollowerInfo_o *v1802; // x6
  PartyListViewItem_o *v1803; // x7
  UserServantCommandCardMaster_o *v1804; // x20
  int64_t v1805; // x2
  int32_t v1806; // w3
  System_String_o *v1807; // x4
  BattleSetupInfo_o *v1808; // x5
  FollowerInfo_o *v1809; // x6
  PartyListViewItem_o *v1810; // x7
  CommandCardRankParamMaster_o *v1811; // x20
  int64_t v1812; // x2
  int32_t v1813; // w3
  System_String_o *v1814; // x4
  BattleSetupInfo_o *v1815; // x5
  FollowerInfo_o *v1816; // x6
  PartyListViewItem_o *v1817; // x7
  CommandCodeSkillMaster_o *v1818; // x20
  int64_t v1819; // x2
  int32_t v1820; // w3
  System_String_o *v1821; // x4
  BattleSetupInfo_o *v1822; // x5
  FollowerInfo_o *v1823; // x6
  PartyListViewItem_o *v1824; // x7
  CommandCodeSkillReleaseMaster_o *v1825; // x20
  int64_t v1826; // x2
  int32_t v1827; // w3
  System_String_o *v1828; // x4
  BattleSetupInfo_o *v1829; // x5
  FollowerInfo_o *v1830; // x6
  PartyListViewItem_o *v1831; // x7
  CommandCodeCommentMaster_o *v1832; // x20
  int64_t v1833; // x2
  int32_t v1834; // w3
  System_String_o *v1835; // x4
  BattleSetupInfo_o *v1836; // x5
  FollowerInfo_o *v1837; // x6
  PartyListViewItem_o *v1838; // x7
  EventStatusMaster_o *v1839; // x20
  int64_t v1840; // x2
  int32_t v1841; // w3
  System_String_o *v1842; // x4
  BattleSetupInfo_o *v1843; // x5
  FollowerInfo_o *v1844; // x6
  PartyListViewItem_o *v1845; // x7
  EventStatusQuestMaster_o *v1846; // x20
  int64_t v1847; // x2
  int32_t v1848; // w3
  System_String_o *v1849; // x4
  BattleSetupInfo_o *v1850; // x5
  FollowerInfo_o *v1851; // x6
  PartyListViewItem_o *v1852; // x7
  CommonRestrictionMaster_o *v1853; // x20
  int64_t v1854; // x2
  int32_t v1855; // w3
  System_String_o *v1856; // x4
  BattleSetupInfo_o *v1857; // x5
  FollowerInfo_o *v1858; // x6
  PartyListViewItem_o *v1859; // x7
  EventPointBuffMaster_o *v1860; // x20
  int64_t v1861; // x2
  int32_t v1862; // w3
  System_String_o *v1863; // x4
  BattleSetupInfo_o *v1864; // x5
  FollowerInfo_o *v1865; // x6
  PartyListViewItem_o *v1866; // x7
  UserFollowMaster_o *v1867; // x20
  int64_t v1868; // x2
  int32_t v1869; // w3
  System_String_o *v1870; // x4
  BattleSetupInfo_o *v1871; // x5
  FollowerInfo_o *v1872; // x6
  PartyListViewItem_o *v1873; // x7
  EventRewardGuideReleaseMaster_o *v1874; // x20
  int64_t v1875; // x2
  int32_t v1876; // w3
  System_String_o *v1877; // x4
  BattleSetupInfo_o *v1878; // x5
  FollowerInfo_o *v1879; // x6
  PartyListViewItem_o *v1880; // x7
  NpcServantEquipMaster_o *v1881; // x20
  int64_t v1882; // x2
  int32_t v1883; // w3
  System_String_o *v1884; // x4
  BattleSetupInfo_o *v1885; // x5
  FollowerInfo_o *v1886; // x6
  PartyListViewItem_o *v1887; // x7
  EventCampaignReleaseMaster_o *v1888; // x20
  int64_t v1889; // x2
  int32_t v1890; // w3
  System_String_o *v1891; // x4
  BattleSetupInfo_o *v1892; // x5
  FollowerInfo_o *v1893; // x6
  PartyListViewItem_o *v1894; // x7
  ServantMaterialFolderMaster_o *v1895; // x20
  int64_t v1896; // x2
  int32_t v1897; // w3
  System_String_o *v1898; // x4
  BattleSetupInfo_o *v1899; // x5
  FollowerInfo_o *v1900; // x6
  PartyListViewItem_o *v1901; // x7
  EventEquipSkillReleaseMaster_o *v1902; // x20
  int64_t v1903; // x2
  int32_t v1904; // w3
  System_String_o *v1905; // x4
  BattleSetupInfo_o *v1906; // x5
  FollowerInfo_o *v1907; // x6
  PartyListViewItem_o *v1908; // x7
  EventPointActivityMaster_o *v1909; // x20
  int64_t v1910; // x2
  int32_t v1911; // w3
  System_String_o *v1912; // x4
  BattleSetupInfo_o *v1913; // x5
  FollowerInfo_o *v1914; // x6
  PartyListViewItem_o *v1915; // x7
  FunctionCategoryMaster_o *v1916; // x20
  int64_t v1917; // x2
  int32_t v1918; // w3
  System_String_o *v1919; // x4
  BattleSetupInfo_o *v1920; // x5
  FollowerInfo_o *v1921; // x6
  PartyListViewItem_o *v1922; // x7
  QuestPickupMaster_o *v1923; // x20
  int64_t v1924; // x2
  int32_t v1925; // w3
  System_String_o *v1926; // x4
  BattleSetupInfo_o *v1927; // x5
  FollowerInfo_o *v1928; // x6
  PartyListViewItem_o *v1929; // x7
  EventUiMaster_o *v1930; // x20
  int64_t v1931; // x2
  int32_t v1932; // w3
  System_String_o *v1933; // x4
  BattleSetupInfo_o *v1934; // x5
  FollowerInfo_o *v1935; // x6
  PartyListViewItem_o *v1936; // x7
  EventUiReleaseMaster_o *v1937; // x20
  int64_t v1938; // x2
  int32_t v1939; // w3
  System_String_o *v1940; // x4
  BattleSetupInfo_o *v1941; // x5
  FollowerInfo_o *v1942; // x6
  PartyListViewItem_o *v1943; // x7
  EventUiValueMaster_o *v1944; // x20
  int64_t v1945; // x2
  int32_t v1946; // w3
  System_String_o *v1947; // x4
  BattleSetupInfo_o *v1948; // x5
  FollowerInfo_o *v1949; // x6
  PartyListViewItem_o *v1950; // x7
  EventConquestRewardMaster_o *v1951; // x20
  int64_t v1952; // x2
  int32_t v1953; // w3
  System_String_o *v1954; // x4
  BattleSetupInfo_o *v1955; // x5
  FollowerInfo_o *v1956; // x6
  PartyListViewItem_o *v1957; // x7
  NpcFollowerReleaseMaster_o *v1958; // x20
  int64_t v1959; // x2
  int32_t v1960; // w3
  System_String_o *v1961; // x4
  BattleSetupInfo_o *v1962; // x5
  FollowerInfo_o *v1963; // x6
  PartyListViewItem_o *v1964; // x7
  EventBonusFilterMaster_o *v1965; // x20
  int64_t v1966; // x2
  int32_t v1967; // w3
  System_String_o *v1968; // x4
  BattleSetupInfo_o *v1969; // x5
  FollowerInfo_o *v1970; // x6
  PartyListViewItem_o *v1971; // x7
  EventBonusFilterGroupInfoMaster_o *v1972; // x20
  int64_t v1973; // x2
  int32_t v1974; // w3
  System_String_o *v1975; // x4
  BattleSetupInfo_o *v1976; // x5
  FollowerInfo_o *v1977; // x6
  PartyListViewItem_o *v1978; // x7
  EventBonusFilterGroupMemberMaster_o *v1979; // x20
  int64_t v1980; // x2
  int32_t v1981; // w3
  System_String_o *v1982; // x4
  BattleSetupInfo_o *v1983; // x5
  FollowerInfo_o *v1984; // x6
  PartyListViewItem_o *v1985; // x7
  UserGachaExtraCountMaster_o *v1986; // x20
  int64_t v1987; // x2
  int32_t v1988; // w3
  System_String_o *v1989; // x4
  BattleSetupInfo_o *v1990; // x5
  FollowerInfo_o *v1991; // x6
  PartyListViewItem_o *v1992; // x7
  PrivilegeMaster_o *v1993; // x20
  int64_t v1994; // x2
  int32_t v1995; // w3
  System_String_o *v1996; // x4
  BattleSetupInfo_o *v1997; // x5
  FollowerInfo_o *v1998; // x6
  PartyListViewItem_o *v1999; // x7
  UserPrivilegeMaster_o *v2000; // x20
  int64_t v2001; // x2
  int32_t v2002; // w3
  System_String_o *v2003; // x4
  BattleSetupInfo_o *v2004; // x5
  FollowerInfo_o *v2005; // x6
  PartyListViewItem_o *v2006; // x7
  UserQuestRouteMaster_o *v2007; // x20
  int64_t v2008; // x2
  int32_t v2009; // w3
  System_String_o *v2010; // x4
  BattleSetupInfo_o *v2011; // x5
  FollowerInfo_o *v2012; // x6
  PartyListViewItem_o *v2013; // x7
  EventBossStatusUiMaster_o *v2014; // x20
  int64_t v2015; // x2
  int32_t v2016; // w3
  System_String_o *v2017; // x4
  BattleSetupInfo_o *v2018; // x5
  FollowerInfo_o *v2019; // x6
  PartyListViewItem_o *v2020; // x7
  CommonReleaseMaster_o *v2021; // x20
  int64_t v2022; // x2
  int32_t v2023; // w3
  System_String_o *v2024; // x4
  BattleSetupInfo_o *v2025; // x5
  FollowerInfo_o *v2026; // x6
  PartyListViewItem_o *v2027; // x7
  QuestSpotReleaseMaster_o *v2028; // x20
  int64_t v2029; // x2
  int32_t v2030; // w3
  System_String_o *v2031; // x4
  BattleSetupInfo_o *v2032; // x5
  FollowerInfo_o *v2033; // x6
  PartyListViewItem_o *v2034; // x7
  VoiceMaterialCondMaster_o *v2035; // x20
  int64_t v2036; // x2
  int32_t v2037; // w3
  System_String_o *v2038; // x4
  BattleSetupInfo_o *v2039; // x5
  FollowerInfo_o *v2040; // x6
  PartyListViewItem_o *v2041; // x7
  ClassRelationOverwriteMaster_o *v2042; // x20
  int64_t v2043; // x2
  int32_t v2044; // w3
  System_String_o *v2045; // x4
  BattleSetupInfo_o *v2046; // x5
  FollowerInfo_o *v2047; // x6
  PartyListViewItem_o *v2048; // x7
  EventGroupMaster_o *v2049; // x20
  int64_t v2050; // x2
  int32_t v2051; // w3
  System_String_o *v2052; // x4
  BattleSetupInfo_o *v2053; // x5
  FollowerInfo_o *v2054; // x6
  PartyListViewItem_o *v2055; // x7
  TotalBoxGachaMaster_o *v2056; // x20
  int64_t v2057; // x2
  int32_t v2058; // w3
  System_String_o *v2059; // x4
  BattleSetupInfo_o *v2060; // x5
  FollowerInfo_o *v2061; // x6
  PartyListViewItem_o *v2062; // x7
  ServantTreasureDeviceDamageMaster_o *v2063; // x20
  int64_t v2064; // x2
  int32_t v2065; // w3
  System_String_o *v2066; // x4
  BattleSetupInfo_o *v2067; // x5
  FollowerInfo_o *v2068; // x6
  PartyListViewItem_o *v2069; // x7
  UserEventServantFatigueMaster_o *v2070; // x20
  int64_t v2071; // x2
  int32_t v2072; // w3
  System_String_o *v2073; // x4
  BattleSetupInfo_o *v2074; // x5
  FollowerInfo_o *v2075; // x6
  PartyListViewItem_o *v2076; // x7
  EventRewardBgMaster_o *v2077; // x20
  int64_t v2078; // x2
  int32_t v2079; // w3
  System_String_o *v2080; // x4
  BattleSetupInfo_o *v2081; // x5
  FollowerInfo_o *v2082; // x6
  PartyListViewItem_o *v2083; // x7
  EventFatigueRecoveryMaster_o *v2084; // x20
  int64_t v2085; // x2
  int32_t v2086; // w3
  System_String_o *v2087; // x4
  BattleSetupInfo_o *v2088; // x5
  FollowerInfo_o *v2089; // x6
  PartyListViewItem_o *v2090; // x7
  EventBoostItemUsedMaster_o *v2091; // x20
  int64_t v2092; // x2
  int32_t v2093; // w3
  System_String_o *v2094; // x4
  BattleSetupInfo_o *v2095; // x5
  FollowerInfo_o *v2096; // x6
  PartyListViewItem_o *v2097; // x7
  StatusEffectPosOverwriteMaster_o *v2098; // x20
  int64_t v2099; // x2
  int32_t v2100; // w3
  System_String_o *v2101; // x4
  BattleSetupInfo_o *v2102; // x5
  FollowerInfo_o *v2103; // x6
  PartyListViewItem_o *v2104; // x7
  QuestPhaseDetailAddMaster_o *v2105; // x20
  int64_t v2106; // x2
  int32_t v2107; // w3
  System_String_o *v2108; // x4
  BattleSetupInfo_o *v2109; // x5
  FollowerInfo_o *v2110; // x6
  PartyListViewItem_o *v2111; // x7
  VoiceClosedMessageMaster_o *v2112; // x20
  int64_t v2113; // x2
  int32_t v2114; // w3
  System_String_o *v2115; // x4
  BattleSetupInfo_o *v2116; // x5
  FollowerInfo_o *v2117; // x6
  PartyListViewItem_o *v2118; // x7
  ReprintStageMaster_o *v2119; // x20
  int64_t v2120; // x2
  int32_t v2121; // w3
  System_String_o *v2122; // x4
  BattleSetupInfo_o *v2123; // x5
  FollowerInfo_o *v2124; // x6
  PartyListViewItem_o *v2125; // x7
  UserCombineExpMaster_o *v2126; // x20
  int64_t v2127; // x2
  int32_t v2128; // w3
  System_String_o *v2129; // x4
  BattleSetupInfo_o *v2130; // x5
  FollowerInfo_o *v2131; // x6
  PartyListViewItem_o *v2132; // x7
  EventBoardGameCellMaster_o *v2133; // x20
  int64_t v2134; // x2
  int32_t v2135; // w3
  System_String_o *v2136; // x4
  BattleSetupInfo_o *v2137; // x5
  FollowerInfo_o *v2138; // x6
  PartyListViewItem_o *v2139; // x7
  EventBoardGameTokenMaster_o *v2140; // x20
  int64_t v2141; // x2
  int32_t v2142; // w3
  System_String_o *v2143; // x4
  BattleSetupInfo_o *v2144; // x5
  FollowerInfo_o *v2145; // x6
  PartyListViewItem_o *v2146; // x7
  EventBoardGameTokenRewardMaster_o *v2147; // x20
  int64_t v2148; // x2
  int32_t v2149; // w3
  System_String_o *v2150; // x4
  BattleSetupInfo_o *v2151; // x5
  FollowerInfo_o *v2152; // x6
  PartyListViewItem_o *v2153; // x7
  UserEventBoardGameTokenMaster_o *v2154; // x20
  int64_t v2155; // x2
  int32_t v2156; // w3
  System_String_o *v2157; // x4
  BattleSetupInfo_o *v2158; // x5
  FollowerInfo_o *v2159; // x6
  PartyListViewItem_o *v2160; // x7
  ServantAnimationOverwriteMaster_o *v2161; // x20
  int64_t v2162; // x2
  int32_t v2163; // w3
  System_String_o *v2164; // x4
  BattleSetupInfo_o *v2165; // x5
  FollowerInfo_o *v2166; // x6
  PartyListViewItem_o *v2167; // x7
  OpeningMovieMaster_o *v2168; // x20
  int64_t v2169; // x2
  int32_t v2170; // w3
  System_String_o *v2171; // x4
  BattleSetupInfo_o *v2172; // x5
  FollowerInfo_o *v2173; // x6
  PartyListViewItem_o *v2174; // x7
  ServantLimitSpoilerProtectionMaster_o *v2175; // x20
  int64_t v2176; // x2
  int32_t v2177; // w3
  System_String_o *v2178; // x4
  BattleSetupInfo_o *v2179; // x5
  FollowerInfo_o *v2180; // x6
  PartyListViewItem_o *v2181; // x7
  PickupUserFollowerMaster_o *v2182; // x20
  int64_t v2183; // x2
  int32_t v2184; // w3
  System_String_o *v2185; // x4
  BattleSetupInfo_o *v2186; // x5
  FollowerInfo_o *v2187; // x6
  PartyListViewItem_o *v2188; // x7
  ServantCollectionMaster_o *v2189; // x20
  int64_t v2190; // x2
  int32_t v2191; // w3
  System_String_o *v2192; // x4
  BattleSetupInfo_o *v2193; // x5
  FollowerInfo_o *v2194; // x6
  PartyListViewItem_o *v2195; // x7
  GachaBehaviorMaster_o *v2196; // x20
  int64_t v2197; // x2
  int32_t v2198; // w3
  System_String_o *v2199; // x4
  BattleSetupInfo_o *v2200; // x5
  FollowerInfo_o *v2201; // x6
  PartyListViewItem_o *v2202; // x7
  EventQuestCooltimeMaster_o *v2203; // x20
  int64_t v2204; // x2
  int32_t v2205; // w3
  System_String_o *v2206; // x4
  BattleSetupInfo_o *v2207; // x5
  FollowerInfo_o *v2208; // x6
  PartyListViewItem_o *v2209; // x7
  UserEventQuestCooltimeMaster_o *v2210; // x20
  int64_t v2211; // x2
  int32_t v2212; // w3
  System_String_o *v2213; // x4
  BattleSetupInfo_o *v2214; // x5
  FollowerInfo_o *v2215; // x6
  PartyListViewItem_o *v2216; // x7
  BoostMaster_o *v2217; // x20
  int64_t v2218; // x2
  int32_t v2219; // w3
  System_String_o *v2220; // x4
  BattleSetupInfo_o *v2221; // x5
  FollowerInfo_o *v2222; // x6
  PartyListViewItem_o *v2223; // x7
  WarBoardMaster_o *v2224; // x20
  int64_t v2225; // x2
  int32_t v2226; // w3
  System_String_o *v2227; // x4
  BattleSetupInfo_o *v2228; // x5
  FollowerInfo_o *v2229; // x6
  PartyListViewItem_o *v2230; // x7
  WarBoardSquareMaster_o *v2231; // x20
  int64_t v2232; // x2
  int32_t v2233; // w3
  System_String_o *v2234; // x4
  BattleSetupInfo_o *v2235; // x5
  FollowerInfo_o *v2236; // x6
  PartyListViewItem_o *v2237; // x7
  WarBoardRoadMaster_o *v2238; // x20
  int64_t v2239; // x2
  int32_t v2240; // w3
  System_String_o *v2241; // x4
  BattleSetupInfo_o *v2242; // x5
  FollowerInfo_o *v2243; // x6
  PartyListViewItem_o *v2244; // x7
  WarBoardStageMaster_o *v2245; // x20
  int64_t v2246; // x2
  int32_t v2247; // w3
  System_String_o *v2248; // x4
  BattleSetupInfo_o *v2249; // x5
  FollowerInfo_o *v2250; // x6
  PartyListViewItem_o *v2251; // x7
  WarBoardActionPointMaster_o *v2252; // x20
  int64_t v2253; // x2
  int32_t v2254; // w3
  System_String_o *v2255; // x4
  BattleSetupInfo_o *v2256; // x5
  FollowerInfo_o *v2257; // x6
  PartyListViewItem_o *v2258; // x7
  WarBoardActionTrendMaster_o *v2259; // x20
  int64_t v2260; // x2
  int32_t v2261; // w3
  System_String_o *v2262; // x4
  BattleSetupInfo_o *v2263; // x5
  FollowerInfo_o *v2264; // x6
  PartyListViewItem_o *v2265; // x7
  WarBoardTacticalTrendMaster_o *v2266; // x20
  int64_t v2267; // x2
  int32_t v2268; // w3
  System_String_o *v2269; // x4
  BattleSetupInfo_o *v2270; // x5
  FollowerInfo_o *v2271; // x6
  PartyListViewItem_o *v2272; // x7
  WarBoardStageLayoutMaster_o *v2273; // x20
  int64_t v2274; // x2
  int32_t v2275; // w3
  System_String_o *v2276; // x4
  BattleSetupInfo_o *v2277; // x5
  FollowerInfo_o *v2278; // x6
  PartyListViewItem_o *v2279; // x7
  WarBoardStageNpcMaster_o *v2280; // x20
  int64_t v2281; // x2
  int32_t v2282; // w3
  System_String_o *v2283; // x4
  BattleSetupInfo_o *v2284; // x5
  FollowerInfo_o *v2285; // x6
  PartyListViewItem_o *v2286; // x7
  WarBoardStageWallMaster_o *v2287; // x20
  int64_t v2288; // x2
  int32_t v2289; // w3
  System_String_o *v2290; // x4
  BattleSetupInfo_o *v2291; // x5
  FollowerInfo_o *v2292; // x6
  PartyListViewItem_o *v2293; // x7
  WarBoardAIMaster_o *v2294; // x20
  int64_t v2295; // x2
  int32_t v2296; // w3
  System_String_o *v2297; // x4
  BattleSetupInfo_o *v2298; // x5
  FollowerInfo_o *v2299; // x6
  PartyListViewItem_o *v2300; // x7
  WarBoardRatingBaseMaster_o *v2301; // x20
  int64_t v2302; // x2
  int32_t v2303; // w3
  System_String_o *v2304; // x4
  BattleSetupInfo_o *v2305; // x5
  FollowerInfo_o *v2306; // x6
  PartyListViewItem_o *v2307; // x7
  WarBoardRatingOffsetMaster_o *v2308; // x20
  int64_t v2309; // x2
  int32_t v2310; // w3
  System_String_o *v2311; // x4
  BattleSetupInfo_o *v2312; // x5
  FollowerInfo_o *v2313; // x6
  PartyListViewItem_o *v2314; // x7
  WarBoardItemMaster_o *v2315; // x20
  int64_t v2316; // x2
  int32_t v2317; // w3
  System_String_o *v2318; // x4
  BattleSetupInfo_o *v2319; // x5
  FollowerInfo_o *v2320; // x6
  PartyListViewItem_o *v2321; // x7
  WarBoardTreasureMaster_o *v2322; // x20
  int64_t v2323; // x2
  int32_t v2324; // w3
  System_String_o *v2325; // x4
  BattleSetupInfo_o *v2326; // x5
  FollowerInfo_o *v2327; // x6
  PartyListViewItem_o *v2328; // x7
  WarBoardQuestMaster_o *v2329; // x20
  int64_t v2330; // x2
  int32_t v2331; // w3
  System_String_o *v2332; // x4
  BattleSetupInfo_o *v2333; // x5
  FollowerInfo_o *v2334; // x6
  PartyListViewItem_o *v2335; // x7
  WarBoardDataMaster_o *v2336; // x20
  int64_t v2337; // x2
  int32_t v2338; // w3
  System_String_o *v2339; // x4
  BattleSetupInfo_o *v2340; // x5
  FollowerInfo_o *v2341; // x6
  PartyListViewItem_o *v2342; // x7
  WarBoardIndividualityClassMaster_o *v2343; // x20
  int64_t v2344; // x2
  int32_t v2345; // w3
  System_String_o *v2346; // x4
  BattleSetupInfo_o *v2347; // x5
  FollowerInfo_o *v2348; // x6
  PartyListViewItem_o *v2349; // x7
  WarBoardActionTrendConditionMaster_o *v2350; // x20
  int64_t v2351; // x2
  int32_t v2352; // w3
  System_String_o *v2353; // x4
  BattleSetupInfo_o *v2354; // x5
  FollowerInfo_o *v2355; // x6
  PartyListViewItem_o *v2356; // x7
  WarBoardActionPointClassMaster_o *v2357; // x20
  int64_t v2358; // x2
  int32_t v2359; // w3
  System_String_o *v2360; // x4
  BattleSetupInfo_o *v2361; // x5
  FollowerInfo_o *v2362; // x6
  PartyListViewItem_o *v2363; // x7
  EventPanelMapMaster_o *v2364; // x20
  int64_t v2365; // x2
  int32_t v2366; // w3
  System_String_o *v2367; // x4
  BattleSetupInfo_o *v2368; // x5
  FollowerInfo_o *v2369; // x6
  PartyListViewItem_o *v2370; // x7
  EventPanelMapDetailMaster_o *v2371; // x20
  int64_t v2372; // x2
  int32_t v2373; // w3
  System_String_o *v2374; // x4
  BattleSetupInfo_o *v2375; // x5
  FollowerInfo_o *v2376; // x6
  PartyListViewItem_o *v2377; // x7
  EventPanelSpotMaster_o *v2378; // x20
  int64_t v2379; // x2
  int32_t v2380; // w3
  System_String_o *v2381; // x4
  BattleSetupInfo_o *v2382; // x5
  FollowerInfo_o *v2383; // x6
  PartyListViewItem_o *v2384; // x7
  EventPanelScanMaster_o *v2385; // x20
  int64_t v2386; // x2
  int32_t v2387; // w3
  System_String_o *v2388; // x4
  BattleSetupInfo_o *v2389; // x5
  FollowerInfo_o *v2390; // x6
  PartyListViewItem_o *v2391; // x7
  CommonConsumeMaster_o *v2392; // x20
  int64_t v2393; // x2
  int32_t v2394; // w3
  System_String_o *v2395; // x4
  BattleSetupInfo_o *v2396; // x5
  FollowerInfo_o *v2397; // x6
  PartyListViewItem_o *v2398; // x7
  UserEventMapMaster_o *v2399; // x20
  int64_t v2400; // x2
  int32_t v2401; // w3
  System_String_o *v2402; // x4
  BattleSetupInfo_o *v2403; // x5
  FollowerInfo_o *v2404; // x6
  PartyListViewItem_o *v2405; // x7
  UserEventSpotMaster_o *v2406; // x20
  int64_t v2407; // x2
  int32_t v2408; // w3
  System_String_o *v2409; // x4
  BattleSetupInfo_o *v2410; // x5
  FollowerInfo_o *v2411; // x6
  PartyListViewItem_o *v2412; // x7
  WarGroupMaster_o *v2413; // x20
  int64_t v2414; // x2
  int32_t v2415; // w3
  System_String_o *v2416; // x4
  BattleSetupInfo_o *v2417; // x5
  FollowerInfo_o *v2418; // x6
  PartyListViewItem_o *v2419; // x7
  ServantLimitImageMaster_o *v2420; // x20
  int64_t v2421; // x2
  int32_t v2422; // w3
  System_String_o *v2423; // x4
  BattleSetupInfo_o *v2424; // x5
  FollowerInfo_o *v2425; // x6
  PartyListViewItem_o *v2426; // x7
  FriendshipQuestDialogInfoMaster_o *v2427; // x20
  int64_t v2428; // x2
  int32_t v2429; // w3
  System_String_o *v2430; // x4
  BattleSetupInfo_o *v2431; // x5
  FollowerInfo_o *v2432; // x6
  PartyListViewItem_o *v2433; // x7
  QuestRestrictionInfoMaster_o *v2434; // x20
  int64_t v2435; // x2
  int32_t v2436; // w3
  System_String_o *v2437; // x4
  BattleSetupInfo_o *v2438; // x5
  FollowerInfo_o *v2439; // x6
  PartyListViewItem_o *v2440; // x7
  AssistMaster_o *v2441; // x20
  int64_t v2442; // x2
  int32_t v2443; // w3
  System_String_o *v2444; // x4
  BattleSetupInfo_o *v2445; // x5
  FollowerInfo_o *v2446; // x6
  PartyListViewItem_o *v2447; // x7
  WarBoardEffectMaster_o *v2448; // x20
  int64_t v2449; // x2
  int32_t v2450; // w3
  System_String_o *v2451; // x4
  BattleSetupInfo_o *v2452; // x5
  FollowerInfo_o *v2453; // x6
  PartyListViewItem_o *v2454; // x7
  WarBoardOnboardSkillMaster_o *v2455; // x20
  int64_t v2456; // x2
  int32_t v2457; // w3
  System_String_o *v2458; // x4
  BattleSetupInfo_o *v2459; // x5
  FollowerInfo_o *v2460; // x6
  PartyListViewItem_o *v2461; // x7
  BeforeBirthDayMaster_o *v2462; // x20
  int64_t v2463; // x2
  int32_t v2464; // w3
  System_String_o *v2465; // x4
  BattleSetupInfo_o *v2466; // x5
  FollowerInfo_o *v2467; // x6
  PartyListViewItem_o *v2468; // x7
  LoginQuestMaster_o *v2469; // x20
  int64_t v2470; // x2
  int32_t v2471; // w3
  System_String_o *v2472; // x4
  BattleSetupInfo_o *v2473; // x5
  FollowerInfo_o *v2474; // x6
  PartyListViewItem_o *v2475; // x7
  EventCombineCostumeMaster_o *v2476; // x20
  int64_t v2477; // x2
  int32_t v2478; // w3
  System_String_o *v2479; // x4
  BattleSetupInfo_o *v2480; // x5
  FollowerInfo_o *v2481; // x6
  PartyListViewItem_o *v2482; // x7
  WarBoardStagePieceDetailMaster_o *v2483; // x20
  int64_t v2484; // x2
  int32_t v2485; // w3
  System_String_o *v2486; // x4
  BattleSetupInfo_o *v2487; // x5
  FollowerInfo_o *v2488; // x6
  PartyListViewItem_o *v2489; // x7
  ServantTreasureDeviceAddMaster_o *v2490; // x20
  int64_t v2491; // x2
  int32_t v2492; // w3
  System_String_o *v2493; // x4
  BattleSetupInfo_o *v2494; // x5
  FollowerInfo_o *v2495; // x6
  PartyListViewItem_o *v2496; // x7
  SkillAddMaster_o *v2497; // x20
  int64_t v2498; // x2
  int32_t v2499; // w3
  System_String_o *v2500; // x4
  BattleSetupInfo_o *v2501; // x5
  FollowerInfo_o *v2502; // x6
  PartyListViewItem_o *v2503; // x7
  ServantLvDetailMaster_o *v2504; // x20
  int64_t v2505; // x2
  int32_t v2506; // w3
  System_String_o *v2507; // x4
  BattleSetupInfo_o *v2508; // x5
  FollowerInfo_o *v2509; // x6
  PartyListViewItem_o *v2510; // x7
  GachaAppendMaster_o *v2511; // x20
  int64_t v2512; // x2
  int32_t v2513; // w3
  System_String_o *v2514; // x4
  BattleSetupInfo_o *v2515; // x5
  FollowerInfo_o *v2516; // x6
  PartyListViewItem_o *v2517; // x7
  UserGachaDrawLogMaster_o *v2518; // x20
  int64_t v2519; // x2
  int32_t v2520; // w3
  System_String_o *v2521; // x4
  BattleSetupInfo_o *v2522; // x5
  FollowerInfo_o *v2523; // x6
  PartyListViewItem_o *v2524; // x7
  ServantAppendPassiveSkillMaster_o *v2525; // x20
  int64_t v2526; // x2
  int32_t v2527; // w3
  System_String_o *v2528; // x4
  BattleSetupInfo_o *v2529; // x5
  FollowerInfo_o *v2530; // x6
  PartyListViewItem_o *v2531; // x7
  UserServantAppendPassiveSkillMaster_o *v2532; // x20
  int64_t v2533; // x2
  int32_t v2534; // w3
  System_String_o *v2535; // x4
  BattleSetupInfo_o *v2536; // x5
  FollowerInfo_o *v2537; // x6
  PartyListViewItem_o *v2538; // x7
  UserServantAppendPassiveSkillLvMaster_o *v2539; // x20
  int64_t v2540; // x2
  int32_t v2541; // w3
  System_String_o *v2542; // x4
  BattleSetupInfo_o *v2543; // x5
  FollowerInfo_o *v2544; // x6
  PartyListViewItem_o *v2545; // x7
  SvtAppendPassiveSkillUnlockMaster_o *v2546; // x20
  int64_t v2547; // x2
  int32_t v2548; // w3
  System_String_o *v2549; // x4
  BattleSetupInfo_o *v2550; // x5
  FollowerInfo_o *v2551; // x6
  PartyListViewItem_o *v2552; // x7
  CombineAppendPassiveSkillMaster_o *v2553; // x20
  int64_t v2554; // x2
  int32_t v2555; // w3
  System_String_o *v2556; // x4
  BattleSetupInfo_o *v2557; // x5
  FollowerInfo_o *v2558; // x6
  PartyListViewItem_o *v2559; // x7
  SvtCoinMaster_o *v2560; // x20
  int64_t v2561; // x2
  int32_t v2562; // w3
  System_String_o *v2563; // x4
  BattleSetupInfo_o *v2564; // x5
  FollowerInfo_o *v2565; // x6
  PartyListViewItem_o *v2566; // x7
  UserSvtCoinMaster_o *v2567; // x20
  int64_t v2568; // x2
  int32_t v2569; // w3
  System_String_o *v2570; // x4
  BattleSetupInfo_o *v2571; // x5
  FollowerInfo_o *v2572; // x6
  PartyListViewItem_o *v2573; // x7
  ServantAddMaster_o *v2574; // x20
  int64_t v2575; // x2
  int32_t v2576; // w3
  System_String_o *v2577; // x4
  BattleSetupInfo_o *v2578; // x5
  FollowerInfo_o *v2579; // x6
  PartyListViewItem_o *v2580; // x7
  TreasureBoxMaster_o *v2581; // x20
  int64_t v2582; // x2
  int32_t v2583; // w3
  System_String_o *v2584; // x4
  BattleSetupInfo_o *v2585; // x5
  FollowerInfo_o *v2586; // x6
  PartyListViewItem_o *v2587; // x7
  TreasureBoxGiftMaster_o *v2588; // x20
  int64_t v2589; // x2
  int32_t v2590; // w3
  System_String_o *v2591; // x4
  BattleSetupInfo_o *v2592; // x5
  FollowerInfo_o *v2593; // x6
  PartyListViewItem_o *v2594; // x7
  TreasureBoxTalkMaster_o *v2595; // x20
  int64_t v2596; // x2
  int32_t v2597; // w3
  System_String_o *v2598; // x4
  BattleSetupInfo_o *v2599; // x5
  FollowerInfo_o *v2600; // x6
  PartyListViewItem_o *v2601; // x7
  UserEventExpeditionMaster_o *v2602; // x20
  int64_t v2603; // x2
  int32_t v2604; // w3
  System_String_o *v2605; // x4
  BattleSetupInfo_o *v2606; // x5
  FollowerInfo_o *v2607; // x6
  PartyListViewItem_o *v2608; // x7
  EventExpeditionMaster_o *v2609; // x20
  int64_t v2610; // x2
  int32_t v2611; // w3
  System_String_o *v2612; // x4
  BattleSetupInfo_o *v2613; // x5
  FollowerInfo_o *v2614; // x6
  PartyListViewItem_o *v2615; // x7
  EventExpeditionPieceMaster_o *v2616; // x20
  int64_t v2617; // x2
  int32_t v2618; // w3
  System_String_o *v2619; // x4
  BattleSetupInfo_o *v2620; // x5
  FollowerInfo_o *v2621; // x6
  PartyListViewItem_o *v2622; // x7
  EventRecipeMaster_o *v2623; // x20
  int64_t v2624; // x2
  int32_t v2625; // w3
  System_String_o *v2626; // x4
  BattleSetupInfo_o *v2627; // x5
  FollowerInfo_o *v2628; // x6
  PartyListViewItem_o *v2629; // x7
  EventRecipeGiftMaster_o *v2630; // x20
  int64_t v2631; // x2
  int32_t v2632; // w3
  System_String_o *v2633; // x4
  BattleSetupInfo_o *v2634; // x5
  FollowerInfo_o *v2635; // x6
  PartyListViewItem_o *v2636; // x7
  UserEventFortificationMaster_o *v2637; // x20
  int64_t v2638; // x2
  int32_t v2639; // w3
  System_String_o *v2640; // x4
  BattleSetupInfo_o *v2641; // x5
  FollowerInfo_o *v2642; // x6
  PartyListViewItem_o *v2643; // x7
  EventFortificationMaster_o *v2644; // x20
  int64_t v2645; // x2
  int32_t v2646; // w3
  System_String_o *v2647; // x4
  BattleSetupInfo_o *v2648; // x5
  FollowerInfo_o *v2649; // x6
  PartyListViewItem_o *v2650; // x7
  EventFortificationDetailMaster_o *v2651; // x20
  int64_t v2652; // x2
  int32_t v2653; // w3
  System_String_o *v2654; // x4
  BattleSetupInfo_o *v2655; // x5
  FollowerInfo_o *v2656; // x6
  PartyListViewItem_o *v2657; // x7
  EventFortificationSvtMaster_o *v2658; // x20
  int64_t v2659; // x2
  int32_t v2660; // w3
  System_String_o *v2661; // x4
  BattleSetupInfo_o *v2662; // x5
  FollowerInfo_o *v2663; // x6
  PartyListViewItem_o *v2664; // x7
  UserServantVoicePlayedMaster_o *v2665; // x20
  int64_t v2666; // x2
  int32_t v2667; // w3
  System_String_o *v2668; // x4
  BattleSetupInfo_o *v2669; // x5
  FollowerInfo_o *v2670; // x6
  PartyListViewItem_o *v2671; // x7
  UpdateProfileDialogInfoMaster_o *v2672; // x20
  int64_t v2673; // x2
  int32_t v2674; // w3
  System_String_o *v2675; // x4
  BattleSetupInfo_o *v2676; // x5
  FollowerInfo_o *v2677; // x6
  PartyListViewItem_o *v2678; // x7
  SvtMaterialTdMaster_o *v2679; // x20
  int64_t v2680; // x2
  int32_t v2681; // w3
  System_String_o *v2682; // x4
  BattleSetupInfo_o *v2683; // x5
  FollowerInfo_o *v2684; // x6
  PartyListViewItem_o *v2685; // x7
  BattleMasterImageMaster_o *v2686; // x20
  int64_t v2687; // x2
  int32_t v2688; // w3
  System_String_o *v2689; // x4
  BattleSetupInfo_o *v2690; // x5
  FollowerInfo_o *v2691; // x6
  PartyListViewItem_o *v2692; // x7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v2693; // x20
  int64_t v2694; // x2
  int32_t v2695; // w3
  System_String_o *v2696; // x4
  BattleSetupInfo_o *v2697; // x5
  FollowerInfo_o *v2698; // x6
  PartyListViewItem_o *v2699; // x7
  UserEventRandomMissionMaster_o *v2700; // x20
  int64_t v2701; // x2
  int32_t v2702; // w3
  System_String_o *v2703; // x4
  BattleSetupInfo_o *v2704; // x5
  FollowerInfo_o *v2705; // x6
  PartyListViewItem_o *v2706; // x7
  EventProgressValueMaster_o *v2707; // x20
  int64_t v2708; // x2
  int32_t v2709; // w3
  System_String_o *v2710; // x4
  BattleSetupInfo_o *v2711; // x5
  FollowerInfo_o *v2712; // x6
  PartyListViewItem_o *v2713; // x7
  SvtMultiPortraitMaster_o *v2714; // x20
  int64_t v2715; // x2
  int32_t v2716; // w3
  System_String_o *v2717; // x4
  BattleSetupInfo_o *v2718; // x5
  FollowerInfo_o *v2719; // x6
  PartyListViewItem_o *v2720; // x7
  EventRandomMissionMaster_o *v2721; // x20
  int64_t v2722; // x2
  int32_t v2723; // w3
  System_String_o *v2724; // x4
  BattleSetupInfo_o *v2725; // x5
  FollowerInfo_o *v2726; // x6
  PartyListViewItem_o *v2727; // x7
  UserGachaHistoryMaster_o *v2728; // x20
  int64_t v2729; // x2
  int32_t v2730; // w3
  System_String_o *v2731; // x4
  BattleSetupInfo_o *v2732; // x5
  FollowerInfo_o *v2733; // x6
  PartyListViewItem_o *v2734; // x7
  UserCoinRoomMaster_o *v2735; // x20
  int64_t v2736; // x2
  int32_t v2737; // w3
  System_String_o *v2738; // x4
  BattleSetupInfo_o *v2739; // x5
  FollowerInfo_o *v2740; // x6
  PartyListViewItem_o *v2741; // x7
  EventBuddyPointMaster_o *v2742; // x20
  int64_t v2743; // x2
  int32_t v2744; // w3
  System_String_o *v2745; // x4
  BattleSetupInfo_o *v2746; // x5
  FollowerInfo_o *v2747; // x6
  PartyListViewItem_o *v2748; // x7
  EventServantPointRankMaster_o *v2749; // x20
  int64_t v2750; // x2
  int32_t v2751; // w3
  System_String_o *v2752; // x4
  BattleSetupInfo_o *v2753; // x5
  FollowerInfo_o *v2754; // x6
  PartyListViewItem_o *v2755; // x7
  UserEventServantPointMaster_o *v2756; // x20
  int64_t v2757; // x2
  int32_t v2758; // w3
  System_String_o *v2759; // x4
  BattleSetupInfo_o *v2760; // x5
  FollowerInfo_o *v2761; // x6
  PartyListViewItem_o *v2762; // x7
  FieldMotionMaster_o *v2763; // x20
  int64_t v2764; // x2
  int32_t v2765; // w3
  System_String_o *v2766; // x4
  BattleSetupInfo_o *v2767; // x5
  FollowerInfo_o *v2768; // x6
  PartyListViewItem_o *v2769; // x7
  UserDeleteReservationMaster_o *v2770; // x20
  int64_t v2771; // x2
  int32_t v2772; // w3
  System_String_o *v2773; // x4
  BattleSetupInfo_o *v2774; // x5
  FollowerInfo_o *v2775; // x6
  PartyListViewItem_o *v2776; // x7
  ServantScriptMultipleMaster_o *v2777; // x20
  int64_t v2778; // x2
  int32_t v2779; // w3
  System_String_o *v2780; // x4
  BattleSetupInfo_o *v2781; // x5
  FollowerInfo_o *v2782; // x6
  PartyListViewItem_o *v2783; // x7
  EquipAddMaster_o *v2784; // x20
  int64_t v2785; // x2
  int32_t v2786; // w3
  System_String_o *v2787; // x4
  BattleSetupInfo_o *v2788; // x5
  FollowerInfo_o *v2789; // x6
  PartyListViewItem_o *v2790; // x7
  QuestReleaseOverwriteMaster_o *v2791; // x20
  int64_t v2792; // x2
  int32_t v2793; // w3
  System_String_o *v2794; // x4
  BattleSetupInfo_o *v2795; // x5
  FollowerInfo_o *v2796; // x6
  PartyListViewItem_o *v2797; // x7
  UserEventAlloutBattleMaster_o *v2798; // x20
  int64_t v2799; // x2
  int32_t v2800; // w3
  System_String_o *v2801; // x4
  BattleSetupInfo_o *v2802; // x5
  FollowerInfo_o *v2803; // x6
  PartyListViewItem_o *v2804; // x7
  QuestScriptMaterialNextMaster_o *v2805; // x20
  int64_t v2806; // x2
  int32_t v2807; // w3
  System_String_o *v2808; // x4
  BattleSetupInfo_o *v2809; // x5
  FollowerInfo_o *v2810; // x6
  PartyListViewItem_o *v2811; // x7
  EventDiggingMaster_o *v2812; // x20
  int64_t v2813; // x2
  int32_t v2814; // w3
  System_String_o *v2815; // x4
  BattleSetupInfo_o *v2816; // x5
  FollowerInfo_o *v2817; // x6
  PartyListViewItem_o *v2818; // x7
  EventDiggingBlockMaster_o *v2819; // x20
  int64_t v2820; // x2
  int32_t v2821; // w3
  System_String_o *v2822; // x4
  BattleSetupInfo_o *v2823; // x5
  FollowerInfo_o *v2824; // x6
  PartyListViewItem_o *v2825; // x7
  EventDiggingRewardMaster_o *v2826; // x20
  int64_t v2827; // x2
  int32_t v2828; // w3
  System_String_o *v2829; // x4
  BattleSetupInfo_o *v2830; // x5
  FollowerInfo_o *v2831; // x6
  PartyListViewItem_o *v2832; // x7
  UserEventDiggingMaster_o *v2833; // x20
  int64_t v2834; // x2
  int32_t v2835; // w3
  System_String_o *v2836; // x4
  BattleSetupInfo_o *v2837; // x5
  FollowerInfo_o *v2838; // x6
  PartyListViewItem_o *v2839; // x7
  BattleMessageMaster_o *v2840; // x20
  int64_t v2841; // x2
  int32_t v2842; // w3
  System_String_o *v2843; // x4
  BattleSetupInfo_o *v2844; // x5
  FollowerInfo_o *v2845; // x6
  PartyListViewItem_o *v2846; // x7
  BattleMessageGroupMaster_o *v2847; // x20
  int64_t v2848; // x2
  int32_t v2849; // w3
  System_String_o *v2850; // x4
  BattleSetupInfo_o *v2851; // x5
  FollowerInfo_o *v2852; // x6
  PartyListViewItem_o *v2853; // x7
  UserNpcSvtRecordMaster_o *v2854; // x20
  int64_t v2855; // x2
  int32_t v2856; // w3
  System_String_o *v2857; // x4
  BattleSetupInfo_o *v2858; // x5
  FollowerInfo_o *v2859; // x6
  PartyListViewItem_o *v2860; // x7
  BuffTypeDetailMaster_o *v2861; // x20
  int64_t v2862; // x2
  int32_t v2863; // w3
  System_String_o *v2864; // x4
  BattleSetupInfo_o *v2865; // x5
  FollowerInfo_o *v2866; // x6
  PartyListViewItem_o *v2867; // x7
  WarBoardMessageMaster_o *v2868; // x20
  int64_t v2869; // x2
  int32_t v2870; // w3
  System_String_o *v2871; // x4
  BattleSetupInfo_o *v2872; // x5
  FollowerInfo_o *v2873; // x6
  PartyListViewItem_o *v2874; // x7
  WarBoardPartySkillMaster_o *v2875; // x20
  int64_t v2876; // x2
  int32_t v2877; // w3
  System_String_o *v2878; // x4
  BattleSetupInfo_o *v2879; // x5
  FollowerInfo_o *v2880; // x6
  PartyListViewItem_o *v2881; // x7
  WarBoardMessageScriptMaster_o *v2882; // x20
  int64_t v2883; // x2
  int32_t v2884; // w3
  System_String_o *v2885; // x4
  BattleSetupInfo_o *v2886; // x5
  FollowerInfo_o *v2887; // x6
  PartyListViewItem_o *v2888; // x7
  WarQuestSelectionMaster_o *v2889; // x20
  int64_t v2890; // x2
  int32_t v2891; // w3
  System_String_o *v2892; // x4
  BattleSetupInfo_o *v2893; // x5
  FollowerInfo_o *v2894; // x6
  PartyListViewItem_o *v2895; // x7
  WarBoardStageDetailMaster_o *v2896; // x20
  int64_t v2897; // x2
  int32_t v2898; // w3
  System_String_o *v2899; // x4
  BattleSetupInfo_o *v2900; // x5
  FollowerInfo_o *v2901; // x6
  PartyListViewItem_o *v2902; // x7
  QuestScriptMaterialOverwriteMaster_o *v2903; // x20
  int64_t v2904; // x2
  int32_t v2905; // w3
  System_String_o *v2906; // x4
  BattleSetupInfo_o *v2907; // x5
  FollowerInfo_o *v2908; // x6
  PartyListViewItem_o *v2909; // x7
  QuestScriptBranchMaterialMaster_o *v2910; // x20
  int64_t v2911; // x2
  int32_t v2912; // w3
  System_String_o *v2913; // x4
  BattleSetupInfo_o *v2914; // x5
  FollowerInfo_o *v2915; // x6
  PartyListViewItem_o *v2916; // x7
  AdCheckPointMaster_o *v2917; // x20
  int64_t v2918; // x2
  int32_t v2919; // w3
  System_String_o *v2920; // x4
  BattleSetupInfo_o *v2921; // x5
  FollowerInfo_o *v2922; // x6
  PartyListViewItem_o *v2923; // x7
  GiftDetailMaster_o *v2924; // x20
  int64_t v2925; // x2
  int32_t v2926; // w3
  System_String_o *v2927; // x4
  BattleSetupInfo_o *v2928; // x5
  FollowerInfo_o *v2929; // x6
  PartyListViewItem_o *v2930; // x7
  CombineLimitGiftMaster_o *v2931; // x20
  int64_t v2932; // x2
  int32_t v2933; // w3
  System_String_o *v2934; // x4
  BattleSetupInfo_o *v2935; // x5
  FollowerInfo_o *v2936; // x6
  PartyListViewItem_o *v2937; // x7
  EventCooltimeRewardMaster_o *v2938; // x20
  int64_t v2939; // x2
  int32_t v2940; // w3
  System_String_o *v2941; // x4
  BattleSetupInfo_o *v2942; // x5
  FollowerInfo_o *v2943; // x6
  PartyListViewItem_o *v2944; // x7
  UserEventCooltimeRewardMaster_o *v2945; // x20
  int64_t v2946; // x2
  int32_t v2947; // w3
  System_String_o *v2948; // x4
  BattleSetupInfo_o *v2949; // x5
  FollowerInfo_o *v2950; // x6
  PartyListViewItem_o *v2951; // x7
  ClassBoardBaseMaster_o *v2952; // x20
  int64_t v2953; // x2
  int32_t v2954; // w3
  System_String_o *v2955; // x4
  BattleSetupInfo_o *v2956; // x5
  FollowerInfo_o *v2957; // x6
  PartyListViewItem_o *v2958; // x7
  ClassBoardLockMaster_o *v2959; // x20
  int64_t v2960; // x2
  int32_t v2961; // w3
  System_String_o *v2962; // x4
  BattleSetupInfo_o *v2963; // x5
  FollowerInfo_o *v2964; // x6
  PartyListViewItem_o *v2965; // x7
  ClassBoardSquareMaster_o *v2966; // x20
  int64_t v2967; // x2
  int32_t v2968; // w3
  System_String_o *v2969; // x4
  BattleSetupInfo_o *v2970; // x5
  FollowerInfo_o *v2971; // x6
  PartyListViewItem_o *v2972; // x7
  ClassBoardLineMaster_o *v2973; // x20
  int64_t v2974; // x2
  int32_t v2975; // w3
  System_String_o *v2976; // x4
  BattleSetupInfo_o *v2977; // x5
  FollowerInfo_o *v2978; // x6
  PartyListViewItem_o *v2979; // x7
  UserClassBoardSquareMaster_o *v2980; // x20
  int64_t v2981; // x2
  int32_t v2982; // w3
  System_String_o *v2983; // x4
  BattleSetupInfo_o *v2984; // x5
  FollowerInfo_o *v2985; // x6
  PartyListViewItem_o *v2986; // x7
  ServantCardAddMaster_o *v2987; // x20
  int64_t v2988; // x2
  int32_t v2989; // w3
  System_String_o *v2990; // x4
  BattleSetupInfo_o *v2991; // x5
  FollowerInfo_o *v2992; // x6
  PartyListViewItem_o *v2993; // x7
  MapLayerMaster_o *v2994; // x20
  int64_t v2995; // x2
  int32_t v2996; // w3
  System_String_o *v2997; // x4
  BattleSetupInfo_o *v2998; // x5
  FollowerInfo_o *v2999; // x6
  PartyListViewItem_o *v3000; // x7
  SpotLayerMaster_o *v3001; // x20
  int64_t v3002; // x2
  int32_t v3003; // w3
  System_String_o *v3004; // x4
  BattleSetupInfo_o *v3005; // x5
  FollowerInfo_o *v3006; // x6
  PartyListViewItem_o *v3007; // x7
  MapGimmickLayerMaster_o *v3008; // x20
  int64_t v3009; // x2
  int32_t v3010; // w3
  System_String_o *v3011; // x4
  BattleSetupInfo_o *v3012; // x5
  FollowerInfo_o *v3013; // x6
  PartyListViewItem_o *v3014; // x7
  EventDataLostBattleMaster_o *v3015; // x20
  int64_t v3016; // x2
  int32_t v3017; // w3
  System_String_o *v3018; // x4
  BattleSetupInfo_o *v3019; // x5
  FollowerInfo_o *v3020; // x6
  PartyListViewItem_o *v3021; // x7
  EventDataLostBattleResetMaster_o *v3022; // x20
  int64_t v3023; // x2
  int32_t v3024; // w3
  System_String_o *v3025; // x4
  BattleSetupInfo_o *v3026; // x5
  FollowerInfo_o *v3027; // x6
  PartyListViewItem_o *v3028; // x7
  UserEventDataLostMaster_o *v3029; // x20
  int64_t v3030; // x2
  int32_t v3031; // w3
  System_String_o *v3032; // x4
  BattleSetupInfo_o *v3033; // x5
  FollowerInfo_o *v3034; // x6
  PartyListViewItem_o *v3035; // x7
  QuestHintMaster_o *v3036; // x20
  int64_t v3037; // x2
  int32_t v3038; // w3
  System_String_o *v3039; // x4
  BattleSetupInfo_o *v3040; // x5
  FollowerInfo_o *v3041; // x6
  PartyListViewItem_o *v3042; // x7
  FuncTypeDetailMaster_o *v3043; // x20
  int64_t v3044; // x2
  int32_t v3045; // w3
  System_String_o *v3046; // x4
  BattleSetupInfo_o *v3047; // x5
  FollowerInfo_o *v3048; // x6
  PartyListViewItem_o *v3049; // x7
  BuffConvertMaster_o *v3050; // x20
  int64_t v3051; // x2
  int32_t v3052; // w3
  System_String_o *v3053; // x4
  BattleSetupInfo_o *v3054; // x5
  FollowerInfo_o *v3055; // x6
  PartyListViewItem_o *v3056; // x7
  SkillGroupMaster_o *v3057; // x20
  int64_t v3058; // x2
  int32_t v3059; // w3
  System_String_o *v3060; // x4
  BattleSetupInfo_o *v3061; // x5
  FollowerInfo_o *v3062; // x6
  PartyListViewItem_o *v3063; // x7
  SkillGroupOverwriteMaster_o *v3064; // x20
  int64_t v3065; // x2
  int32_t v3066; // w3
  System_String_o *v3067; // x4
  BattleSetupInfo_o *v3068; // x5
  FollowerInfo_o *v3069; // x6
  PartyListViewItem_o *v3070; // x7
  SkillIndividualityMaster_o *v3071; // x20
  int64_t v3072; // x2
  int32_t v3073; // w3
  System_String_o *v3074; // x4
  BattleSetupInfo_o *v3075; // x5
  FollowerInfo_o *v3076; // x6
  PartyListViewItem_o *v3077; // x7
  RestrictionBaseMaster_o *v3078; // x20
  int64_t v3079; // x2
  int32_t v3080; // w3
  System_String_o *v3081; // x4
  BattleSetupInfo_o *v3082; // x5
  FollowerInfo_o *v3083; // x6
  PartyListViewItem_o *v3084; // x7
  RestrictionSlotMaster_o *v3085; // x20
  int64_t v3086; // x2
  int32_t v3087; // w3
  System_String_o *v3088; // x4
  BattleSetupInfo_o *v3089; // x5
  FollowerInfo_o *v3090; // x6
  PartyListViewItem_o *v3091; // x7
  RestrictionSlotDetailMaster_o *v3092; // x20
  int64_t v3093; // x2
  int32_t v3094; // w3
  System_String_o *v3095; // x4
  BattleSetupInfo_o *v3096; // x5
  FollowerInfo_o *v3097; // x6
  PartyListViewItem_o *v3098; // x7
  RestrictionMessageMaster_o *v3099; // x20
  int64_t v3100; // x2
  int32_t v3101; // w3
  System_String_o *v3102; // x4
  BattleSetupInfo_o *v3103; // x5
  FollowerInfo_o *v3104; // x6
  PartyListViewItem_o *v3105; // x7
  RestrictionWholeMaster_o *v3106; // x20
  int64_t v3107; // x2
  int32_t v3108; // w3
  System_String_o *v3109; // x4
  BattleSetupInfo_o *v3110; // x5
  FollowerInfo_o *v3111; // x6
  PartyListViewItem_o *v3112; // x7
  FuncDispMaster_o *v3113; // x20
  int64_t v3114; // x2
  int32_t v3115; // w3
  System_String_o *v3116; // x4
  BattleSetupInfo_o *v3117; // x5
  FollowerInfo_o *v3118; // x6
  PartyListViewItem_o *v3119; // x7
  ClassBoardCommandSpellMaster_o *v3120; // x20
  int64_t v3121; // x2
  int32_t v3122; // w3
  System_String_o *v3123; // x4
  BattleSetupInfo_o *v3124; // x5
  FollowerInfo_o *v3125; // x6
  PartyListViewItem_o *v3126; // x7
  ClassBoardClassMaster_o *v3127; // x20
  int64_t v3128; // x2
  int32_t v3129; // w3
  System_String_o *v3130; // x4
  BattleSetupInfo_o *v3131; // x5
  FollowerInfo_o *v3132; // x6
  PartyListViewItem_o *v3133; // x7
  EventCommandAssistMaster_o *v3134; // x20
  int64_t v3135; // x2
  int32_t v3136; // w3
  System_String_o *v3137; // x4
  BattleSetupInfo_o *v3138; // x5
  FollowerInfo_o *v3139; // x6
  PartyListViewItem_o *v3140; // x7
  EventMissionGroupMaster_o *v3141; // x20
  int64_t v3142; // x2
  int32_t v3143; // w3
  System_String_o *v3144; // x4
  BattleSetupInfo_o *v3145; // x5
  FollowerInfo_o *v3146; // x6
  PartyListViewItem_o *v3147; // x7
  CombineLimitReleaseMaster_o *v3148; // x20
  int64_t v3149; // x2
  int32_t v3150; // w3
  System_String_o *v3151; // x4
  BattleSetupInfo_o *v3152; // x5
  FollowerInfo_o *v3153; // x6
  PartyListViewItem_o *v3154; // x7
  HeelPortraitMaster_o *v3155; // x20
  int64_t v3156; // x2
  int32_t v3157; // w3
  System_String_o *v3158; // x4
  BattleSetupInfo_o *v3159; // x5
  FollowerInfo_o *v3160; // x6
  PartyListViewItem_o *v3161; // x7
  UserHeelPortraitMaster_o *v3162; // x20
  int64_t v3163; // x2
  int32_t v3164; // w3
  System_String_o *v3165; // x4
  BattleSetupInfo_o *v3166; // x5
  FollowerInfo_o *v3167; // x6
  PartyListViewItem_o *v3168; // x7
  TreasureDeviceSequenceWeightMaster_o *v3169; // x20
  int64_t v3170; // x2
  int32_t v3171; // w3
  System_String_o *v3172; // x4
  BattleSetupInfo_o *v3173; // x5
  FollowerInfo_o *v3174; // x6
  PartyListViewItem_o *v3175; // x7
  NpcServantFollowerIndividualityMaster_o *v3176; // x20
  int64_t v3177; // x2
  int32_t v3178; // w3
  System_String_o *v3179; // x4
  BattleSetupInfo_o *v3180; // x5
  FollowerInfo_o *v3181; // x6
  PartyListViewItem_o *v3182; // x7
  GachaExtraGiftMaster_o *v3183; // x20
  int64_t v3184; // x2
  int32_t v3185; // w3
  System_String_o *v3186; // x4
  BattleSetupInfo_o *v3187; // x5
  FollowerInfo_o *v3188; // x6
  PartyListViewItem_o *v3189; // x7
  EventMuralMaster_o *v3190; // x20
  int64_t v3191; // x2
  int32_t v3192; // w3
  System_String_o *v3193; // x4
  BattleSetupInfo_o *v3194; // x5
  FollowerInfo_o *v3195; // x6
  PartyListViewItem_o *v3196; // x7
  ViewWaveEnemyMaster_o *v3197; // x20
  int64_t v3198; // x2
  int32_t v3199; // w3
  System_String_o *v3200; // x4
  BattleSetupInfo_o *v3201; // x5
  FollowerInfo_o *v3202; // x6
  PartyListViewItem_o *v3203; // x7
  BlankEarthSpotNavimenuMaster_o *v3204; // x20
  int64_t v3205; // x2
  int32_t v3206; // w3
  System_String_o *v3207; // x4
  BattleSetupInfo_o *v3208; // x5
  FollowerInfo_o *v3209; // x6
  PartyListViewItem_o *v3210; // x7
  BlankEarthGimmickMaster_o *v3211; // x20
  int64_t v3212; // x2
  int32_t v3213; // w3
  System_String_o *v3214; // x4
  BattleSetupInfo_o *v3215; // x5
  FollowerInfo_o *v3216; // x6
  PartyListViewItem_o *v3217; // x7
  TerminalOverwriteMaster_o *v3218; // x20
  int64_t v3219; // x2
  int32_t v3220; // w3
  System_String_o *v3221; // x4
  BattleSetupInfo_o *v3222; // x5
  FollowerInfo_o *v3223; // x6
  PartyListViewItem_o *v3224; // x7
  UserExchangeSvtMaster_o *v3225; // x20
  int64_t v3226; // x2
  int32_t v3227; // w3
  System_String_o *v3228; // x4
  BattleSetupInfo_o *v3229; // x5
  FollowerInfo_o *v3230; // x6
  PartyListViewItem_o *v3231; // x7
  WarBoardCommonReleaseMaster_o *v3232; // x20
  int64_t v3233; // x2
  int32_t v3234; // w3
  System_String_o *v3235; // x4
  BattleSetupInfo_o *v3236; // x5
  FollowerInfo_o *v3237; // x6
  PartyListViewItem_o *v3238; // x7
  WarBoardEventMaster_o *v3239; // x20
  int64_t v3240; // x2
  int32_t v3241; // w3
  System_String_o *v3242; // x4
  BattleSetupInfo_o *v3243; // x5
  FollowerInfo_o *v3244; // x6
  PartyListViewItem_o *v3245; // x7
  WarBoardEventScriptMaster_o *v3246; // x20
  int64_t v3247; // x2
  int32_t v3248; // w3
  System_String_o *v3249; // x4
  BattleSetupInfo_o *v3250; // x5
  FollowerInfo_o *v3251; // x6
  PartyListViewItem_o *v3252; // x7
  WarBoardStageBossMaster_o *v3253; // x20
  int64_t v3254; // x2
  int32_t v3255; // w3
  System_String_o *v3256; // x4
  BattleSetupInfo_o *v3257; // x5
  FollowerInfo_o *v3258; // x6
  PartyListViewItem_o *v3259; // x7
  WarBoardSquareIndexGroupMaster_o *v3260; // x20
  int64_t v3261; // x2
  int32_t v3262; // w3
  System_String_o *v3263; // x4
  BattleSetupInfo_o *v3264; // x5
  FollowerInfo_o *v3265; // x6
  PartyListViewItem_o *v3266; // x7
  WarBoardActionTrendGroupMaster_o *v3267; // x20
  int64_t v3268; // x2
  int32_t v3269; // w3
  System_String_o *v3270; // x4
  BattleSetupInfo_o *v3271; // x5
  FollowerInfo_o *v3272; // x6
  PartyListViewItem_o *v3273; // x7
  WarBoardRatingOffsetGroupMaster_o *v3274; // x20
  int64_t v3275; // x2
  int32_t v3276; // w3
  System_String_o *v3277; // x4
  BattleSetupInfo_o *v3278; // x5
  FollowerInfo_o *v3279; // x6
  PartyListViewItem_o *v3280; // x7
  WarBoardReinforcementsMaster_o *v3281; // x20
  int64_t v3282; // x2
  int32_t v3283; // w3
  System_String_o *v3284; // x4
  BattleSetupInfo_o *v3285; // x5
  FollowerInfo_o *v3286; // x6
  PartyListViewItem_o *v3287; // x7
  WarBoardStageReinforcementsMaster_o *v3288; // x20
  int64_t v3289; // x2
  int32_t v3290; // w3
  System_String_o *v3291; // x4
  BattleSetupInfo_o *v3292; // x5
  FollowerInfo_o *v3293; // x6
  PartyListViewItem_o *v3294; // x7
  WarBoardFutureActionTrendMaster_o *v3295; // x20
  int64_t v3296; // x2
  int32_t v3297; // w3
  System_String_o *v3298; // x4
  BattleSetupInfo_o *v3299; // x5
  FollowerInfo_o *v3300; // x6
  PartyListViewItem_o *v3301; // x7
  ServantProfilePushMaster_o *v3302; // x20
  int64_t v3303; // x2
  int32_t v3304; // w3
  System_String_o *v3305; // x4
  BattleSetupInfo_o *v3306; // x5
  FollowerInfo_o *v3307; // x6
  PartyListViewItem_o *v3308; // x7
  MapGimmickPathMaster_o *v3309; // x20
  int64_t v3310; // x2
  int32_t v3311; // w3
  System_String_o *v3312; // x4
  BattleSetupInfo_o *v3313; // x5
  FollowerInfo_o *v3314; // x6
  PartyListViewItem_o *v3315; // x7
  MapGimmickPathReleaseMaster_o *v3316; // x20
  int64_t v3317; // x2
  int32_t v3318; // w3
  System_String_o *v3319; // x4
  BattleSetupInfo_o *v3320; // x5
  FollowerInfo_o *v3321; // x6
  PartyListViewItem_o *v3322; // x7
  ServantOverwriteMaster_o *v3323; // x20
  int64_t v3324; // x2
  int32_t v3325; // w3
  System_String_o *v3326; // x4
  BattleSetupInfo_o *v3327; // x5
  FollowerInfo_o *v3328; // x6
  PartyListViewItem_o *v3329; // x7
  IndividualityPolicyMaster_o *v3330; // x20
  int64_t v3331; // x2
  int32_t v3332; // w3
  System_String_o *v3333; // x4
  BattleSetupInfo_o *v3334; // x5
  FollowerInfo_o *v3335; // x6
  PartyListViewItem_o *v3336; // x7
  IndividualityPersonalityMaster_o *v3337; // x20
  int64_t v3338; // x2
  int32_t v3339; // w3
  System_String_o *v3340; // x4
  BattleSetupInfo_o *v3341; // x5
  FollowerInfo_o *v3342; // x6
  PartyListViewItem_o *v3343; // x7
  AttriMaster_o *v3344; // x20
  int64_t v3345; // x2
  int32_t v3346; // w3
  System_String_o *v3347; // x4
  BattleSetupInfo_o *v3348; // x5
  FollowerInfo_o *v3349; // x6
  PartyListViewItem_o *v3350; // x7
  ServantVoicePatternMaster_o *v3351; // x20
  int64_t v3352; // x2
  int32_t v3353; // w3
  System_String_o *v3354; // x4
  BattleSetupInfo_o *v3355; // x5
  FollowerInfo_o *v3356; // x6
  PartyListViewItem_o *v3357; // x7
  UserGameCommonMaster_o *v3358; // x20
  int64_t v3359; // x2
  int32_t v3360; // w3
  System_String_o *v3361; // x4
  BattleSetupInfo_o *v3362; // x5
  FollowerInfo_o *v3363; // x6
  PartyListViewItem_o *v3364; // x7
  ServantPhotoMaster_o *v3365; // x20
  int64_t v3366; // x2
  int32_t v3367; // w3
  System_String_o *v3368; // x4
  BattleSetupInfo_o *v3369; // x5
  FollowerInfo_o *v3370; // x6
  PartyListViewItem_o *v3371; // x7
  MasterPhotoMaster_o *v3372; // x20
  int64_t v3373; // x2
  int32_t v3374; // w3
  System_String_o *v3375; // x4
  BattleSetupInfo_o *v3376; // x5
  FollowerInfo_o *v3377; // x6
  PartyListViewItem_o *v3378; // x7
  WarMessageMaster_o *v3379; // x20
  int64_t v3380; // x2
  int32_t v3381; // w3
  System_String_o *v3382; // x4
  BattleSetupInfo_o *v3383; // x5
  FollowerInfo_o *v3384; // x6
  PartyListViewItem_o *v3385; // x7
  QuestAutoOrganizationAdjustMaster_o *v3386; // x20
  int64_t v3387; // x2
  int32_t v3388; // w3
  System_String_o *v3389; // x4
  BattleSetupInfo_o *v3390; // x5
  FollowerInfo_o *v3391; // x6
  PartyListViewItem_o *v3392; // x7
  ExcludeMotionMaster_o *v3393; // x20
  int64_t v3394; // x2
  int32_t v3395; // w3
  System_String_o *v3396; // x4
  BattleSetupInfo_o *v3397; // x5
  FollowerInfo_o *v3398; // x6
  PartyListViewItem_o *v3399; // x7
  UserInterruptionQuestMaster_o *v3400; // x20
  int64_t v3401; // x2
  int32_t v3402; // w3
  System_String_o *v3403; // x4
  BattleSetupInfo_o *v3404; // x5
  FollowerInfo_o *v3405; // x6
  PartyListViewItem_o *v3406; // x7
  ServantTransformMaster_o *v3407; // x20
  int64_t v3408; // x2
  int32_t v3409; // w3
  System_String_o *v3410; // x4
  BattleSetupInfo_o *v3411; // x5
  FollowerInfo_o *v3412; // x6
  PartyListViewItem_o *v3413; // x7
  MapUpdateScheduleMaster_o *v3414; // x20
  int64_t v3415; // x2
  int32_t v3416; // w3
  System_String_o *v3417; // x4
  BattleSetupInfo_o *v3418; // x5
  FollowerInfo_o *v3419; // x6
  PartyListViewItem_o *v3420; // x7
  QuestPhasePresentMaster_o *v3421; // x20
  int64_t v3422; // x2
  int32_t v3423; // w3
  System_String_o *v3424; // x4
  BattleSetupInfo_o *v3425; // x5
  FollowerInfo_o *v3426; // x6
  PartyListViewItem_o *v3427; // x7
  UserAccountLinkageMaster_o *v3428; // x20
  int64_t v3429; // x2
  int32_t v3430; // w3
  System_String_o *v3431; // x4
  BattleSetupInfo_o *v3432; // x5
  FollowerInfo_o *v3433; // x6
  PartyListViewItem_o *v3434; // x7
  MissionNaviTransitionMaster_o *v3435; // x20
  int64_t v3436; // x2
  int32_t v3437; // w3
  System_String_o *v3438; // x4
  BattleSetupInfo_o *v3439; // x5
  FollowerInfo_o *v3440; // x6
  PartyListViewItem_o *v3441; // x7
  MissionNaviQuestMaster_o *v3442; // x20
  int64_t v3443; // x2
  int32_t v3444; // w3
  System_String_o *v3445; // x4
  BattleSetupInfo_o *v3446; // x5
  FollowerInfo_o *v3447; // x6
  PartyListViewItem_o *v3448; // x7
  EventTradeGoodsMaster_o *v3449; // x20
  int64_t v3450; // x2
  int32_t v3451; // w3
  System_String_o *v3452; // x4
  BattleSetupInfo_o *v3453; // x5
  FollowerInfo_o *v3454; // x6
  PartyListViewItem_o *v3455; // x7
  EventTradeStoreMaster_o *v3456; // x20
  int64_t v3457; // x2
  int32_t v3458; // w3
  System_String_o *v3459; // x4
  BattleSetupInfo_o *v3460; // x5
  FollowerInfo_o *v3461; // x6
  PartyListViewItem_o *v3462; // x7
  EventTradePickupMaster_o *v3463; // x20
  int64_t v3464; // x2
  int32_t v3465; // w3
  System_String_o *v3466; // x4
  BattleSetupInfo_o *v3467; // x5
  FollowerInfo_o *v3468; // x6
  PartyListViewItem_o *v3469; // x7
  UserEventTradeMaster_o *v3470; // x20
  int64_t v3471; // x2
  int32_t v3472; // w3
  System_String_o *v3473; // x4
  BattleSetupInfo_o *v3474; // x5
  FollowerInfo_o *v3475; // x6
  PartyListViewItem_o *v3476; // x7
  PaymentHistoryMaster_o *v3477; // x20
  int64_t v3478; // x2
  int32_t v3479; // w3
  System_String_o *v3480; // x4
  BattleSetupInfo_o *v3481; // x5
  FollowerInfo_o *v3482; // x6
  PartyListViewItem_o *v3483; // x7
  UserExternalPaymentStoneMaster_o *v3484; // x20
  int64_t v3485; // x2
  int32_t v3486; // w3
  System_String_o *v3487; // x4
  BattleSetupInfo_o *v3488; // x5
  FollowerInfo_o *v3489; // x6
  PartyListViewItem_o *v3490; // x7
  QuestPhaseIndividualityMaster_o *v3491; // x20
  int64_t v3492; // x2
  int32_t v3493; // w3
  System_String_o *v3494; // x4
  BattleSetupInfo_o *v3495; // x5
  FollowerInfo_o *v3496; // x6
  PartyListViewItem_o *v3497; // x7
  ViewGachaFeaturedServantMaster_o *v3498; // x20
  int64_t v3499; // x2
  int32_t v3500; // w3
  System_String_o *v3501; // x4
  BattleSetupInfo_o *v3502; // x5
  FollowerInfo_o *v3503; // x6
  PartyListViewItem_o *v3504; // x7
  UserGachaPickupCollateralMaster_o *v3505; // x20
  int64_t v3506; // x2
  int32_t v3507; // w3
  System_String_o *v3508; // x4
  BattleSetupInfo_o *v3509; // x5
  FollowerInfo_o *v3510; // x6
  PartyListViewItem_o *v3511; // x7
  GachaPickupCollateralMaster_o *v3512; // x20
  int64_t v3513; // x2
  int32_t v3514; // w3
  System_String_o *v3515; // x4
  BattleSetupInfo_o *v3516; // x5
  FollowerInfo_o *v3517; // x6
  PartyListViewItem_o *v3518; // x7
  GachaPickupCollateralGroupMaster_o *v3519; // x20
  int64_t v3520; // x2
  int32_t v3521; // w3
  System_String_o *v3522; // x4
  BattleSetupInfo_o *v3523; // x5
  FollowerInfo_o *v3524; // x6
  PartyListViewItem_o *v3525; // x7
  BattlePointMaster_o *v3526; // x20
  int64_t v3527; // x2
  int32_t v3528; // w3
  System_String_o *v3529; // x4
  BattleSetupInfo_o *v3530; // x5
  FollowerInfo_o *v3531; // x6
  PartyListViewItem_o *v3532; // x7
  BattlePointPhaseMaster_o *v3533; // x20
  int64_t v3534; // x2
  int32_t v3535; // w3
  System_String_o *v3536; // x4
  BattleSetupInfo_o *v3537; // x5
  FollowerInfo_o *v3538; // x6
  PartyListViewItem_o *v3539; // x7
  ServantBattlePointMaster_o *v3540; // x20
  int64_t v3541; // x2
  int32_t v3542; // w3
  System_String_o *v3543; // x4
  BattleSetupInfo_o *v3544; // x5
  FollowerInfo_o *v3545; // x6
  PartyListViewItem_o *v3546; // x7
  EffectMovieMaster_o *v3547; // x20
  int64_t v3548; // x2
  int32_t v3549; // w3
  System_String_o *v3550; // x4
  BattleSetupInfo_o *v3551; // x5
  FollowerInfo_o *v3552; // x6
  PartyListViewItem_o *v3553; // x7
  PaymentLimitMaster_o *v3554; // x20
  int64_t v3555; // x2
  int32_t v3556; // w3
  System_String_o *v3557; // x4
  BattleSetupInfo_o *v3558; // x5
  FollowerInfo_o *v3559; // x6
  PartyListViewItem_o *v3560; // x7
  UserPaymentLimitMaster_o *v3561; // x20
  int64_t v3562; // x2
  int32_t v3563; // w3
  System_String_o *v3564; // x4
  BattleSetupInfo_o *v3565; // x5
  FollowerInfo_o *v3566; // x6
  PartyListViewItem_o *v3567; // x7
  RoadmapMaster_o *v3568; // x20
  int64_t v3569; // x2
  int32_t v3570; // w3
  System_String_o *v3571; // x4
  BattleSetupInfo_o *v3572; // x5
  FollowerInfo_o *v3573; // x6
  PartyListViewItem_o *v3574; // x7
  UserRecommendSupportMaster_o *v3575; // x20
  int64_t v3576; // x2
  int32_t v3577; // w3
  System_String_o *v3578; // x4
  BattleSetupInfo_o *v3579; // x5
  FollowerInfo_o *v3580; // x6
  PartyListViewItem_o *v3581; // x7
  RecommendSupportQuestMaster_o *v3582; // x20
  int64_t v3583; // x2
  int32_t v3584; // w3
  System_String_o *v3585; // x4
  BattleSetupInfo_o *v3586; // x5
  FollowerInfo_o *v3587; // x6
  PartyListViewItem_o *v3588; // x7
  RecommendAdviceMessageMaster_o *v3589; // x20
  int64_t v3590; // x2
  int32_t v3591; // w3
  System_String_o *v3592; // x4
  BattleSetupInfo_o *v3593; // x5
  FollowerInfo_o *v3594; // x6
  PartyListViewItem_o *v3595; // x7
  UserRecommendFollowerMaster_o *v3596; // x20
  int64_t v3597; // x2
  int32_t v3598; // w3
  System_String_o *v3599; // x4
  BattleSetupInfo_o *v3600; // x5
  FollowerInfo_o *v3601; // x6
  PartyListViewItem_o *v3602; // x7
  ItemDropEfficiencyMaster_o *v3603; // x20
  int64_t v3604; // x2
  int32_t v3605; // w3
  System_String_o *v3606; // x4
  BattleSetupInfo_o *v3607; // x5
  FollowerInfo_o *v3608; // x6
  PartyListViewItem_o *v3609; // x7
  BlankEarthGimmickAddMaster_o *v3610; // x20
  int64_t v3611; // x2
  int32_t v3612; // w3
  System_String_o *v3613; // x4
  BattleSetupInfo_o *v3614; // x5
  FollowerInfo_o *v3615; // x6
  PartyListViewItem_o *v3616; // x7
  WarReleaseMaster_o *v3617; // x20
  int64_t v3618; // x2
  int32_t v3619; // w3
  System_String_o *v3620; // x4
  BattleSetupInfo_o *v3621; // x5
  FollowerInfo_o *v3622; // x6
  PartyListViewItem_o *v3623; // x7
  SelectBonusBaseMaster_o *v3624; // x20
  int64_t v3625; // x2
  int32_t v3626; // w3
  System_String_o *v3627; // x4
  BattleSetupInfo_o *v3628; // x5
  FollowerInfo_o *v3629; // x6
  PartyListViewItem_o *v3630; // x7
  SelectBonusMaster_o *v3631; // x20
  int64_t v3632; // x2
  int32_t v3633; // w3
  System_String_o *v3634; // x4
  BattleSetupInfo_o *v3635; // x5
  FollowerInfo_o *v3636; // x6
  PartyListViewItem_o *v3637; // x7
  MyroomServantSpecialImageMaster_o *v3638; // x20
  int64_t v3639; // x2
  int32_t v3640; // w3
  System_String_o *v3641; // x4
  BattleSetupInfo_o *v3642; // x5
  FollowerInfo_o *v3643; // x6
  PartyListViewItem_o *v3644; // x7
  ShopResetMaster_o *v3645; // x20
  int64_t v3646; // x2
  int32_t v3647; // w3
  System_String_o *v3648; // x4
  BattleSetupInfo_o *v3649; // x5
  FollowerInfo_o *v3650; // x6
  PartyListViewItem_o *v3651; // x7
  NpcServantDisplayTypeDetailMaster_o *v3652; // x20
  int64_t v3653; // x2
  int32_t v3654; // w3
  System_String_o *v3655; // x4
  BattleSetupInfo_o *v3656; // x5
  FollowerInfo_o *v3657; // x6
  PartyListViewItem_o *v3658; // x7
  FriendshipServantMaster_o *v3659; // x20
  int64_t v3660; // x2
  int32_t v3661; // w3
  System_String_o *v3662; // x4
  BattleSetupInfo_o *v3663; // x5
  FollowerInfo_o *v3664; // x6
  PartyListViewItem_o *v3665; // x7
  ExchangeSvtCoinGivenNumMaster_o *v3666; // x20
  int64_t v3667; // x2
  int32_t v3668; // w3
  System_String_o *v3669; // x4
  BattleSetupInfo_o *v3670; // x5
  FollowerInfo_o *v3671; // x6
  PartyListViewItem_o *v3672; // x7
  ChaldeaGatePickupMaster_o *v3673; // x20
  int64_t v3674; // x2
  int32_t v3675; // w3
  System_String_o *v3676; // x4
  BattleSetupInfo_o *v3677; // x5
  FollowerInfo_o *v3678; // x6
  PartyListViewItem_o *v3679; // x7
  WarGroupIgnoreMaster_o *v3680; // x20
  int64_t v3681; // x2
  int32_t v3682; // w3
  System_String_o *v3683; // x4
  BattleSetupInfo_o *v3684; // x5
  FollowerInfo_o *v3685; // x6
  PartyListViewItem_o *v3686; // x7
  ImagePartsGroupMaster_o *v3687; // x20
  int64_t v3688; // x2
  int32_t v3689; // w3
  System_String_o *v3690; // x4
  BattleSetupInfo_o *v3691; // x5
  FollowerInfo_o *v3692; // x6
  PartyListViewItem_o *v3693; // x7
  UserImagePartsGroupMaster_o *v3694; // x20
  int64_t v3695; // x2
  int32_t v3696; // w3
  System_String_o *v3697; // x4
  BattleSetupInfo_o *v3698; // x5
  FollowerInfo_o *v3699; // x6
  PartyListViewItem_o *v3700; // x7
  MissionItemDisplayMaster_o *v3701; // x20
  int64_t v3702; // x2
  int32_t v3703; // w3
  System_String_o *v3704; // x4
  BattleSetupInfo_o *v3705; // x5
  FollowerInfo_o *v3706; // x6
  PartyListViewItem_o *v3707; // x7
  QuestUseItemGroupMaster_o *v3708; // x20
  int64_t v3709; // x2
  int32_t v3710; // w3
  System_String_o *v3711; // x4
  BattleSetupInfo_o *v3712; // x5
  FollowerInfo_o *v3713; // x6
  PartyListViewItem_o *v3714; // x7
  QuestUseItemPickupMaster_o *v3715; // x20
  int64_t v3716; // x2
  int32_t v3717; // w3
  System_String_o *v3718; // x4
  BattleSetupInfo_o *v3719; // x5
  FollowerInfo_o *v3720; // x6
  PartyListViewItem_o *v3721; // x7
  UserEventItemLinkSvtMaster_o *v3722; // x20
  int64_t v3723; // x2
  int32_t v3724; // w3
  System_String_o *v3725; // x4
  BattleSetupInfo_o *v3726; // x5
  FollowerInfo_o *v3727; // x6
  PartyListViewItem_o *v3728; // x7
  __int64 v3730; // x0

  if ( (byte_4BDC06D & 1) == 0 )
  {
    sub_1C21E38(&AccessaryMaster_TypeInfo);
    sub_1C21E38(&AdCheckPointMaster_TypeInfo);
    sub_1C21E38(&AiActMaster_TypeInfo);
    sub_1C21E38(&AiFieldMaster_TypeInfo);
    sub_1C21E38(&AiMaster_TypeInfo);
    sub_1C21E38(&AreaMaster_TypeInfo);
    sub_1C21E38(&AssistMaster_TypeInfo);
    sub_1C21E38(&AttriMaster_TypeInfo);
    sub_1C21E38(&AttriRelationMaster_TypeInfo);
    sub_1C21E38(&AuraEffectMaster_TypeInfo);
    sub_1C21E38(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C21E38(&BankShopMaster_TypeInfo);
    sub_1C21E38(&BannerAddMaster_TypeInfo);
    sub_1C21E38(&BannerMaster_TypeInfo);
    sub_1C21E38(&BattleBgMaster_TypeInfo);
    sub_1C21E38(&BattleMasterImageMaster_TypeInfo);
    sub_1C21E38(&BattleMaster_TypeInfo);
    sub_1C21E38(&BattleMessageGroupMaster_TypeInfo);
    sub_1C21E38(&BattleMessageMaster_TypeInfo);
    sub_1C21E38(&BattlePointMaster_TypeInfo);
    sub_1C21E38(&BattlePointPhaseMaster_TypeInfo);
    sub_1C21E38(&BeforeBirthDayMaster_TypeInfo);
    sub_1C21E38(&BgmMaster_TypeInfo);
    sub_1C21E38(&BgmReleaseMaster_TypeInfo);
    sub_1C21E38(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1C21E38(&BlankEarthGimmickMaster_TypeInfo);
    sub_1C21E38(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1C21E38(&BlankEarthSpotMaster_TypeInfo);
    sub_1C21E38(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1C21E38(&BoardMessageMaster_TypeInfo);
    sub_1C21E38(&BoardMessageReleaseMaster_TypeInfo);
    sub_1C21E38(&BoostMaster_TypeInfo);
    sub_1C21E38(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1C21E38(&BoxGachaBaseMaster_TypeInfo);
    sub_1C21E38(&BoxGachaHistoryMaster_TypeInfo);
    sub_1C21E38(&BoxGachaMaster_TypeInfo);
    sub_1C21E38(&BoxGachaTalkMaster_TypeInfo);
    sub_1C21E38(&BuffConvertMaster_TypeInfo);
    sub_1C21E38(&BuffMaster_TypeInfo);
    sub_1C21E38(&BuffTypeDetailMaster_TypeInfo);
    sub_1C21E38(&CampaignInfoMaster_TypeInfo);
    sub_1C21E38(&CardMaster_TypeInfo);
    sub_1C21E38(&ChaldeaGatePickupMaster_TypeInfo);
    sub_1C21E38(&ClassBoardBaseMaster_TypeInfo);
    sub_1C21E38(&ClassBoardClassMaster_TypeInfo);
    sub_1C21E38(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1C21E38(&ClassBoardLineMaster_TypeInfo);
    sub_1C21E38(&ClassBoardLockMaster_TypeInfo);
    sub_1C21E38(&ClassBoardSquareMaster_TypeInfo);
    sub_1C21E38(&ClassRelationMaster_TypeInfo);
    sub_1C21E38(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1C21E38(&ClosedMessageMaster_TypeInfo);
    sub_1C21E38(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1C21E38(&CombineCostumeMaster_TypeInfo);
    sub_1C21E38(&CombineLimitGiftMaster_TypeInfo);
    sub_1C21E38(&CombineLimitMaster_TypeInfo);
    sub_1C21E38(&CombineLimitReleaseMaster_TypeInfo);
    sub_1C21E38(&CombineMaster_TypeInfo);
    sub_1C21E38(&CombineMaterialMaster_TypeInfo);
    sub_1C21E38(&CombineQpMaster_TypeInfo);
    sub_1C21E38(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1C21E38(&CombineSkillMaster_TypeInfo);
    sub_1C21E38(&CombineTdMaster_TypeInfo);
    sub_1C21E38(&CommandCardRankParamMaster_TypeInfo);
    sub_1C21E38(&CommandCodeCommentMaster_TypeInfo);
    sub_1C21E38(&CommandCodeMaster_TypeInfo);
    sub_1C21E38(&CommandCodeSkillMaster_TypeInfo);
    sub_1C21E38(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1C21E38(&CommandSpellMaster_TypeInfo);
    sub_1C21E38(&CommonConsumeMaster_TypeInfo);
    sub_1C21E38(&CommonReleaseMaster_TypeInfo);
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    sub_1C21E38(&CompleteMissionMaster_TypeInfo);
    sub_1C21E38(&ConstantLongMaster_TypeInfo);
    sub_1C21E38(&ConstantMaster_TypeInfo);
    sub_1C21E38(&ConstantStrMaster_TypeInfo);
    sub_1C21E38(&CvMaster_TypeInfo);
    sub_1C21E38(&DataMasterBase___TypeInfo);
    sub_1C21E38(&DialogMessageMaster_TypeInfo);
    sub_1C21E38(&EffectMaster_TypeInfo);
    sub_1C21E38(&EffectMovieMaster_TypeInfo);
    sub_1C21E38(&EnemyMstBattleMaster_TypeInfo);
    sub_1C21E38(&EnemyMstMaster_TypeInfo);
    sub_1C21E38(&EquipAddMaster_TypeInfo);
    sub_1C21E38(&EquipExpMaster_TypeInfo);
    sub_1C21E38(&EquipImageMaster_TypeInfo);
    sub_1C21E38(&EquipMaster_TypeInfo);
    sub_1C21E38(&EquipSkillMaster_TypeInfo);
    sub_1C21E38(&EventAddMaster_TypeInfo);
    sub_1C21E38(&EventBoardGameCellMaster_TypeInfo);
    sub_1C21E38(&EventBoardGameTokenMaster_TypeInfo);
    sub_1C21E38(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1C21E38(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1C21E38(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1C21E38(&EventBonusFilterMaster_TypeInfo);
    sub_1C21E38(&EventBoostItemUsedMaster_TypeInfo);
    sub_1C21E38(&EventBossStatusUiMaster_TypeInfo);
    sub_1C21E38(&EventBuddyPointMaster_TypeInfo);
    sub_1C21E38(&EventBulletinBoardMaster_TypeInfo);
    sub_1C21E38(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1C21E38(&EventCampaignMaster_TypeInfo);
    sub_1C21E38(&EventCampaignReleaseMaster_TypeInfo);
    sub_1C21E38(&EventCombineCostumeMaster_TypeInfo);
    sub_1C21E38(&EventCombineMaster_TypeInfo);
    sub_1C21E38(&EventCommandAssistMaster_TypeInfo);
    sub_1C21E38(&EventConquestRewardMaster_TypeInfo);
    sub_1C21E38(&EventCooltimeRewardMaster_TypeInfo);
    sub_1C21E38(&EventDataLostBattleMaster_TypeInfo);
    sub_1C21E38(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1C21E38(&EventDetailMaster_TypeInfo);
    sub_1C21E38(&EventDiggingBlockMaster_TypeInfo);
    sub_1C21E38(&EventDiggingMaster_TypeInfo);
    sub_1C21E38(&EventDiggingRewardMaster_TypeInfo);
    sub_1C21E38(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1C21E38(&EventExpeditionMaster_TypeInfo);
    sub_1C21E38(&EventExpeditionPieceMaster_TypeInfo);
    sub_1C21E38(&EventFactoryMaster_TypeInfo);
    sub_1C21E38(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1C21E38(&EventFilterMaster_TypeInfo);
    sub_1C21E38(&EventFortificationDetailMaster_TypeInfo);
    sub_1C21E38(&EventFortificationMaster_TypeInfo);
    sub_1C21E38(&EventFortificationSvtMaster_TypeInfo);
    sub_1C21E38(&EventGroupMaster_TypeInfo);
    sub_1C21E38(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1C21E38(&EventItemDisplayMaster_TypeInfo);
    sub_1C21E38(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1C21E38(&EventLocationCampaignMaster_TypeInfo);
    sub_1C21E38(&EventMaster_TypeInfo);
    sub_1C21E38(&EventMissionActionAddMaster_TypeInfo);
    sub_1C21E38(&EventMissionActionMaster_TypeInfo);
    sub_1C21E38(&EventMissionAddMaster_TypeInfo);
    sub_1C21E38(&EventMissionCondDetailMaster_TypeInfo);
    sub_1C21E38(&EventMissionConditionMaster_TypeInfo);
    sub_1C21E38(&EventMissionGroupMaster_TypeInfo);
    sub_1C21E38(&EventMissionMaster_TypeInfo);
    sub_1C21E38(&EventMuralMaster_TypeInfo);
    sub_1C21E38(&EventPanelMapDetailMaster_TypeInfo);
    sub_1C21E38(&EventPanelMapMaster_TypeInfo);
    sub_1C21E38(&EventPanelScanMaster_TypeInfo);
    sub_1C21E38(&EventPanelSpotMaster_TypeInfo);
    sub_1C21E38(&EventPointActivityMaster_TypeInfo);
    sub_1C21E38(&EventPointBuffMaster_TypeInfo);
    sub_1C21E38(&EventPointGroupAddMaster_TypeInfo);
    sub_1C21E38(&EventPointGroupMaster_TypeInfo);
    sub_1C21E38(&EventPointMaster_TypeInfo);
    sub_1C21E38(&EventPointUpperMaster_TypeInfo);
    sub_1C21E38(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1C21E38(&EventProgressValueMaster_TypeInfo);
    sub_1C21E38(&EventQuestCooltimeMaster_TypeInfo);
    sub_1C21E38(&EventQuestMaster_TypeInfo);
    sub_1C21E38(&EventRaceMaster_TypeInfo);
    sub_1C21E38(&EventRaceResultMaster_TypeInfo);
    sub_1C21E38(&EventRaidMaster_TypeInfo);
    sub_1C21E38(&EventRandomMissionMaster_TypeInfo);
    sub_1C21E38(&EventRecipeGiftMaster_TypeInfo);
    sub_1C21E38(&EventRecipeMaster_TypeInfo);
    sub_1C21E38(&EventRewardBgMaster_TypeInfo);
    sub_1C21E38(&EventRewardExtraMaster_TypeInfo);
    sub_1C21E38(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1C21E38(&EventRewardMaster_TypeInfo);
    sub_1C21E38(&EventRewardSceneMaster_TypeInfo);
    sub_1C21E38(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1C21E38(&EventRewardSetMaster_TypeInfo);
    sub_1C21E38(&EventScriptMaster_TypeInfo);
    sub_1C21E38(&EventScriptReleaseMaster_TypeInfo);
    sub_1C21E38(&EventServantFatigueMaster_TypeInfo);
    sub_1C21E38(&EventServantMaster_TypeInfo);
    sub_1C21E38(&EventServantPointRankMaster_TypeInfo);
    sub_1C21E38(&EventStatusMaster_TypeInfo);
    sub_1C21E38(&EventStatusQuestMaster_TypeInfo);
    sub_1C21E38(&EventSuperBossMaster_TypeInfo);
    sub_1C21E38(&EventTowerMaster_TypeInfo);
    sub_1C21E38(&EventTowerRewardMaster_TypeInfo);
    sub_1C21E38(&EventTradeGoodsMaster_TypeInfo);
    sub_1C21E38(&EventTradePickupMaster_TypeInfo);
    sub_1C21E38(&EventTradeStoreMaster_TypeInfo);
    sub_1C21E38(&EventTutorialCondMaster_TypeInfo);
    sub_1C21E38(&EventTutorialMaster_TypeInfo);
    sub_1C21E38(&EventUiMaster_TypeInfo);
    sub_1C21E38(&EventUiReleaseMaster_TypeInfo);
    sub_1C21E38(&EventUiValueMaster_TypeInfo);
    sub_1C21E38(&EventVoicePlayMaster_TypeInfo);
    sub_1C21E38(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_1C21E38(&ExcludeMotionMaster_TypeInfo);
    sub_1C21E38(&FieldMotionMaster_TypeInfo);
    sub_1C21E38(&FriendshipMaster_TypeInfo);
    sub_1C21E38(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1C21E38(&FriendshipServantMaster_TypeInfo);
    sub_1C21E38(&FuncDispMaster_TypeInfo);
    sub_1C21E38(&FuncTypeDetailMaster_TypeInfo);
    sub_1C21E38(&FunctionCategoryMaster_TypeInfo);
    sub_1C21E38(&FunctionGroupMaster_TypeInfo);
    sub_1C21E38(&FunctionMaster_TypeInfo);
    sub_1C21E38(&GachaAdjustAddMaster_TypeInfo);
    sub_1C21E38(&GachaAppendMaster_TypeInfo);
    sub_1C21E38(&GachaBaseCollateralMaster_TypeInfo);
    sub_1C21E38(&GachaBehaviorMaster_TypeInfo);
    sub_1C21E38(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1C21E38(&GachaBonusSelectMaster_TypeInfo);
    sub_1C21E38(&GachaDetailMaster_TypeInfo);
    sub_1C21E38(&GachaExtraGiftMaster_TypeInfo);
    sub_1C21E38(&GachaGroupMaster_TypeInfo);
    sub_1C21E38(&GachaImageMaster_TypeInfo);
    sub_1C21E38(&GachaMaster_TypeInfo);
    sub_1C21E38(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1C21E38(&GachaPickupCollateralMaster_TypeInfo);
    sub_1C21E38(&GachaReleaseMaster_TypeInfo);
    sub_1C21E38(&GachaStoryAdjustMaster_TypeInfo);
    sub_1C21E38(&GachaSubMaster_TypeInfo);
    sub_1C21E38(&GachaTicketMaster_TypeInfo);
    sub_1C21E38(&GiftAddMaster_TypeInfo);
    sub_1C21E38(&GiftDetailMaster_TypeInfo);
    sub_1C21E38(&GiftMaster_TypeInfo);
    sub_1C21E38(&GuideMaster_TypeInfo);
    sub_1C21E38(&HeelPortraitMaster_TypeInfo);
    sub_1C21E38(&IllustratorMaster_TypeInfo);
    sub_1C21E38(&ImagePartsGroupMaster_TypeInfo);
    sub_1C21E38(&IndividualityPersonalityMaster_TypeInfo);
    sub_1C21E38(&IndividualityPolicyMaster_TypeInfo);
    sub_1C21E38(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1C21E38(&ItemMaster_TypeInfo);
    sub_1C21E38(&ItemSelectMaster_TypeInfo);
    sub_1C21E38(&LoginQuestMaster_TypeInfo);
    sub_1C21E38(&MapButtonMaster_TypeInfo);
    sub_1C21E38(&MapCondMaster_TypeInfo);
    sub_1C21E38(&MapGimmickLayerMaster_TypeInfo);
    sub_1C21E38(&MapGimmickMaster_TypeInfo);
    sub_1C21E38(&MapGimmickPathMaster_TypeInfo);
    sub_1C21E38(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1C21E38(&MapGimmickReleaseMaster_TypeInfo);
    sub_1C21E38(&MapLayerMaster_TypeInfo);
    sub_1C21E38(&MapMaster_TypeInfo);
    sub_1C21E38(&MapUpdateScheduleMaster_TypeInfo);
    sub_1C21E38(&MasterPhotoMaster_TypeInfo);
    sub_1C21E38(&MaterialFolderMaster_TypeInfo);
    sub_1C21E38(&MissionItemDisplayMaster_TypeInfo);
    sub_1C21E38(&MissionNaviQuestMaster_TypeInfo);
    sub_1C21E38(&MissionNaviTransitionMaster_TypeInfo);
    sub_1C21E38(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1C21E38(&MstMissionMaster_TypeInfo);
    sub_1C21E38(&MyRoomAddMaster_TypeInfo);
    sub_1C21E38(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1C21E38(&NewsMaster_TypeInfo);
    sub_1C21E38(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1C21E38(&NpcFollowerMaster_TypeInfo);
    sub_1C21E38(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1C21E38(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_1C21E38(&NpcServantEquipMaster_TypeInfo);
    sub_1C21E38(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1C21E38(&NpcServantFollowerMaster_TypeInfo);
    sub_1C21E38(&OpeningMovieMaster_TypeInfo);
    sub_1C21E38(&OtherUserGameMaster_TypeInfo);
    sub_1C21E38(&PartialMaintenanceMaster_TypeInfo);
    sub_1C21E38(&PaymentHistoryMaster_TypeInfo);
    sub_1C21E38(&PaymentLimitMaster_TypeInfo);
    sub_1C21E38(&PickupUserFollowerMaster_TypeInfo);
    sub_1C21E38(&PrivilegeMaster_TypeInfo);
    sub_1C21E38(&QuestAddMaster_TypeInfo);
    sub_1C21E38(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1C21E38(&QuestBehaviorMaster_TypeInfo);
    sub_1C21E38(&QuestConsumeItemMaster_TypeInfo);
    sub_1C21E38(&QuestDateRangeMaster_TypeInfo);
    sub_1C21E38(&QuestGroupMaster_TypeInfo);
    sub_1C21E38(&QuestHintMaster_TypeInfo);
    sub_1C21E38(&QuestMaster_TypeInfo);
    sub_1C21E38(&QuestMessageMaster_TypeInfo);
    sub_1C21E38(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1C21E38(&QuestPhaseDetailMaster_TypeInfo);
    sub_1C21E38(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1C21E38(&QuestPhaseMaster_TypeInfo);
    sub_1C21E38(&QuestPhasePresentMaster_TypeInfo);
    sub_1C21E38(&QuestPickupMaster_TypeInfo);
    sub_1C21E38(&QuestRacePointMaster_TypeInfo);
    sub_1C21E38(&QuestRandomGroupMaster_TypeInfo);
    sub_1C21E38(&QuestReleaseMaster_TypeInfo);
    sub_1C21E38(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1C21E38(&QuestResetMaster_TypeInfo);
    sub_1C21E38(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1C21E38(&QuestRestrictionMaster_TypeInfo);
    sub_1C21E38(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1C21E38(&QuestScriptMaster_TypeInfo);
    sub_1C21E38(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1C21E38(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1C21E38(&QuestScriptReleaseMaster_TypeInfo);
    sub_1C21E38(&QuestSpotReleaseMaster_TypeInfo);
    sub_1C21E38(&QuestUseItemGroupMaster_TypeInfo);
    sub_1C21E38(&QuestUseItemPickupMaster_TypeInfo);
    sub_1C21E38(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1C21E38(&RecommendSupportQuestMaster_TypeInfo);
    sub_1C21E38(&RecoverMaster_TypeInfo);
    sub_1C21E38(&ReprintStageMaster_TypeInfo);
    sub_1C21E38(&RestrictionBaseMaster_TypeInfo);
    sub_1C21E38(&RestrictionMaster_TypeInfo);
    sub_1C21E38(&RestrictionMessageMaster_TypeInfo);
    sub_1C21E38(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1C21E38(&RestrictionSlotMaster_TypeInfo);
    sub_1C21E38(&RestrictionWholeMaster_TypeInfo);
    sub_1C21E38(&RoadmapMaster_TypeInfo);
    sub_1C21E38(&SelectBonusBaseMaster_TypeInfo);
    sub_1C21E38(&SelectBonusMaster_TypeInfo);
    sub_1C21E38(&ServantAddMaster_TypeInfo);
    sub_1C21E38(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1C21E38(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C21E38(&ServantBattlePointMaster_TypeInfo);
    sub_1C21E38(&ServantCardAddMaster_TypeInfo);
    sub_1C21E38(&ServantCardMaster_TypeInfo);
    sub_1C21E38(&ServantChangeMaster_TypeInfo);
    sub_1C21E38(&ServantClassMaster_TypeInfo);
    sub_1C21E38(&ServantCollectionMaster_TypeInfo);
    sub_1C21E38(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1C21E38(&ServantCommentAddMaster_TypeInfo);
    sub_1C21E38(&ServantCommentMaster_TypeInfo);
    sub_1C21E38(&ServantCostumeMaster_TypeInfo);
    sub_1C21E38(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1C21E38(&ServantExceedMaster_TypeInfo);
    sub_1C21E38(&ServantExpMaster_TypeInfo);
    sub_1C21E38(&ServantFilterMaster_TypeInfo);
    sub_1C21E38(&ServantFlagMaster_TypeInfo);
    sub_1C21E38(&ServantFlagReleaseMaster_TypeInfo);
    sub_1C21E38(&ServantGroupMaster_TypeInfo);
    sub_1C21E38(&ServantIndividualityMaster_TypeInfo);
    sub_1C21E38(&ServantLimitAddMaster_TypeInfo);
    sub_1C21E38(&ServantLimitImageMaster_TypeInfo);
    sub_1C21E38(&ServantLimitMaster_TypeInfo);
    sub_1C21E38(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1C21E38(&ServantLvDetailMaster_TypeInfo);
    sub_1C21E38(&ServantMaster_TypeInfo);
    sub_1C21E38(&ServantMaterialFolderMaster_TypeInfo);
    sub_1C21E38(&ServantOverwriteMaster_TypeInfo);
    sub_1C21E38(&ServantPassiveSkillMaster_TypeInfo);
    sub_1C21E38(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1C21E38(&ServantPhotoMaster_TypeInfo);
    sub_1C21E38(&ServantProfileMaster_TypeInfo);
    sub_1C21E38(&ServantProfilePushMaster_TypeInfo);
    sub_1C21E38(&ServantRarityMaster_TypeInfo);
    sub_1C21E38(&ServantScriptAddMaster_TypeInfo);
    sub_1C21E38(&ServantScriptMaster_TypeInfo);
    sub_1C21E38(&ServantScriptMultipleMaster_TypeInfo);
    sub_1C21E38(&ServantSkillMaster_TypeInfo);
    sub_1C21E38(&ServantSkillReleaseMaster_TypeInfo);
    sub_1C21E38(&ServantTransformMaster_TypeInfo);
    sub_1C21E38(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1C21E38(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1C21E38(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1C21E38(&ServantTreasureDvcMaster_TypeInfo);
    sub_1C21E38(&ServantVoiceMaster_TypeInfo);
    sub_1C21E38(&ServantVoicePatternMaster_TypeInfo);
    sub_1C21E38(&ServantVoiceRelationMaster_TypeInfo);
    sub_1C21E38(&SetItemMaster_TypeInfo);
    sub_1C21E38(&ShopActionMaster_TypeInfo);
    sub_1C21E38(&ShopDetailMaster_TypeInfo);
    sub_1C21E38(&ShopGroupMaster_TypeInfo);
    sub_1C21E38(&ShopMaster_TypeInfo);
    sub_1C21E38(&ShopReleaseMaster_TypeInfo);
    sub_1C21E38(&ShopResetMaster_TypeInfo);
    sub_1C21E38(&ShopScriptMaster_TypeInfo);
    sub_1C21E38(&SkillAddMaster_TypeInfo);
    sub_1C21E38(&SkillDetailMaster_TypeInfo);
    sub_1C21E38(&SkillGroupMaster_TypeInfo);
    sub_1C21E38(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1C21E38(&SkillIndividualityMaster_TypeInfo);
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    sub_1C21E38(&SkillMaster_TypeInfo);
    sub_1C21E38(&SpotAddMaster_TypeInfo);
    sub_1C21E38(&SpotImageMaster_TypeInfo);
    sub_1C21E38(&SpotLayerMaster_TypeInfo);
    sub_1C21E38(&SpotMaster_TypeInfo);
    sub_1C21E38(&SpotPathMaster_TypeInfo);
    sub_1C21E38(&SpotRoadMaster_TypeInfo);
    sub_1C21E38(&StageMaster_TypeInfo);
    sub_1C21E38(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1C21E38(&StoneShopMaster_TypeInfo);
    sub_1C21E38(&SubEquipMaster_TypeInfo);
    sub_1C21E38(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1C21E38(&SvtCoinMaster_TypeInfo);
    sub_1C21E38(&SvtMaterialTdMaster_TypeInfo);
    sub_1C21E38(&SvtMultiPortraitMaster_TypeInfo);
    sub_1C21E38(&TblFriendMaster_TypeInfo);
    sub_1C21E38(&TblUserMaster_TypeInfo);
    sub_1C21E38(&TelopMaster_TypeInfo);
    sub_1C21E38(&TerminalOverwriteMaster_TypeInfo);
    sub_1C21E38(&TipsBattleMaster_TypeInfo);
    sub_1C21E38(&TotalBoxGachaMaster_TypeInfo);
    sub_1C21E38(&TotalEventPointMaster_TypeInfo);
    sub_1C21E38(&TotalEventRaceMaster_TypeInfo);
    sub_1C21E38(&TotalEventRaidMaster_TypeInfo);
    sub_1C21E38(&TotalLoginMaster_TypeInfo);
    sub_1C21E38(&TreasureBoxGiftMaster_TypeInfo);
    sub_1C21E38(&TreasureBoxMaster_TypeInfo);
    sub_1C21E38(&TreasureBoxTalkMaster_TypeInfo);
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1C21E38(&TreasureDvcDetailMaster_TypeInfo);
    sub_1C21E38(&TreasureDvcLvMaster_TypeInfo);
    sub_1C21E38(&TreasureDvcMaster_TypeInfo);
    sub_1C21E38(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1C21E38(&UserAccessaryMaster_TypeInfo);
    sub_1C21E38(&UserAccountLinkageMaster_TypeInfo);
    sub_1C21E38(&UserBlacklistMaster_TypeInfo);
    sub_1C21E38(&UserBoxGachaMaster_TypeInfo);
    sub_1C21E38(&UserClassBoardSquareMaster_TypeInfo);
    sub_1C21E38(&UserCoinRoomMaster_TypeInfo);
    sub_1C21E38(&UserCombineExpMaster_TypeInfo);
    sub_1C21E38(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1C21E38(&UserCommandCodeMaster_TypeInfo);
    sub_1C21E38(&UserContinueMaster_TypeInfo);
    sub_1C21E38(&UserDeckMaster_TypeInfo);
    sub_1C21E38(&UserDeleteReservationMaster_TypeInfo);
    sub_1C21E38(&UserEquipMaster_TypeInfo);
    sub_1C21E38(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1C21E38(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1C21E38(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1C21E38(&UserEventDataLostMaster_TypeInfo);
    sub_1C21E38(&UserEventDeckMaster_TypeInfo);
    sub_1C21E38(&UserEventDiggingMaster_TypeInfo);
    sub_1C21E38(&UserEventExpeditionMaster_TypeInfo);
    sub_1C21E38(&UserEventFortificationMaster_TypeInfo);
    sub_1C21E38(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_1C21E38(&UserEventMapMaster_TypeInfo);
    sub_1C21E38(&UserEventMaster_TypeInfo);
    sub_1C21E38(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1C21E38(&UserEventMissionFixMaster_TypeInfo);
    sub_1C21E38(&UserEventMissionMaster_TypeInfo);
    sub_1C21E38(&UserEventPointMaster_TypeInfo);
    sub_1C21E38(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1C21E38(&UserEventRaceMaster_TypeInfo);
    sub_1C21E38(&UserEventRaidMaster_TypeInfo);
    sub_1C21E38(&UserEventRandomMissionMaster_TypeInfo);
    sub_1C21E38(&UserEventServantFatigueMaster_TypeInfo);
    sub_1C21E38(&UserEventServantPointMaster_TypeInfo);
    sub_1C21E38(&UserEventSpotMaster_TypeInfo);
    sub_1C21E38(&UserEventTradeMaster_TypeInfo);
    sub_1C21E38(&UserExchangeSvtMaster_TypeInfo);
    sub_1C21E38(&UserExpMaster_TypeInfo);
    sub_1C21E38(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1C21E38(&UserFollowMaster_TypeInfo);
    sub_1C21E38(&UserFollowerMaster_TypeInfo);
    sub_1C21E38(&UserFormationMaster_TypeInfo);
    sub_1C21E38(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1C21E38(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1C21E38(&UserGachaDrawLogMaster_TypeInfo);
    sub_1C21E38(&UserGachaExtraCountMaster_TypeInfo);
    sub_1C21E38(&UserGachaHistoryMaster_TypeInfo);
    sub_1C21E38(&UserGachaMaster_TypeInfo);
    sub_1C21E38(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1C21E38(&UserGameCommonMaster_TypeInfo);
    sub_1C21E38(&UserGameMaster_TypeInfo);
    sub_1C21E38(&UserHeelPortraitMaster_TypeInfo);
    sub_1C21E38(&UserImagePartsGroupMaster_TypeInfo);
    sub_1C21E38(&UserInterruptionQuestMaster_TypeInfo);
    sub_1C21E38(&UserItemMaster_TypeInfo);
    sub_1C21E38(&UserLoginMaster_TypeInfo);
    sub_1C21E38(&UserMaster_TypeInfo);
    sub_1C21E38(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1C21E38(&UserPaymentLimitMaster_TypeInfo);
    sub_1C21E38(&UserPresentBoxMaster_TypeInfo);
    sub_1C21E38(&UserPresentHistoryMaster_TypeInfo);
    sub_1C21E38(&UserPrivilegeMaster_TypeInfo);
    sub_1C21E38(&UserQuestInfoMaster_TypeInfo);
    sub_1C21E38(&UserQuestMaster_TypeInfo);
    sub_1C21E38(&UserQuestRecordMaster_TypeInfo);
    sub_1C21E38(&UserQuestRouteMaster_TypeInfo);
    sub_1C21E38(&UserRecommendFollowerMaster_TypeInfo);
    sub_1C21E38(&UserRecommendSupportMaster_TypeInfo);
    sub_1C21E38(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1C21E38(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C21E38(&UserServantCollectionMaster_TypeInfo);
    sub_1C21E38(&UserServantCommandCardMaster_TypeInfo);
    sub_1C21E38(&UserServantCommandCodeMaster_TypeInfo);
    sub_1C21E38(&UserServantLeaderMaster_TypeInfo);
    sub_1C21E38(&UserServantMaster_TypeInfo);
    sub_1C21E38(&UserServantStorageMaster_TypeInfo);
    sub_1C21E38(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1C21E38(&UserShopMaster_TypeInfo);
    sub_1C21E38(&UserSubEquipMaster_TypeInfo);
    sub_1C21E38(&UserSuperBossMaster_TypeInfo);
    sub_1C21E38(&UserSupportDeckMaster_TypeInfo);
    sub_1C21E38(&UserSvtCoinMaster_TypeInfo);
    sub_1C21E38(&ViewEnemyMaster_TypeInfo);
    sub_1C21E38(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1C21E38(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1C21E38(&ViewQuestInfoMaster_TypeInfo);
    sub_1C21E38(&ViewWaveEnemyMaster_TypeInfo);
    sub_1C21E38(&VoiceClosedMessageMaster_TypeInfo);
    sub_1C21E38(&VoiceCondMaster_TypeInfo);
    sub_1C21E38(&VoiceMaster_TypeInfo);
    sub_1C21E38(&VoiceMaterialCondMaster_TypeInfo);
    sub_1C21E38(&VoicePlayCondMaster_TypeInfo);
    sub_1C21E38(&VoicePlayGroupMaster_TypeInfo);
    sub_1C21E38(&VoiceReleaseMaster_TypeInfo);
    sub_1C21E38(&WarAddMaster_TypeInfo);
    sub_1C21E38(&WarBoardAIMaster_TypeInfo);
    sub_1C21E38(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1C21E38(&WarBoardActionPointMaster_TypeInfo);
    sub_1C21E38(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1C21E38(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1C21E38(&WarBoardActionTrendMaster_TypeInfo);
    sub_1C21E38(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1C21E38(&WarBoardDataMaster_TypeInfo);
    sub_1C21E38(&WarBoardEffectMaster_TypeInfo);
    sub_1C21E38(&WarBoardEventMaster_TypeInfo);
    sub_1C21E38(&WarBoardEventScriptMaster_TypeInfo);
    sub_1C21E38(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1C21E38(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1C21E38(&WarBoardItemMaster_TypeInfo);
    sub_1C21E38(&WarBoardMaster_TypeInfo);
    sub_1C21E38(&WarBoardMessageMaster_TypeInfo);
    sub_1C21E38(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1C21E38(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1C21E38(&WarBoardPartySkillMaster_TypeInfo);
    sub_1C21E38(&WarBoardQuestMaster_TypeInfo);
    sub_1C21E38(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1C21E38(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1C21E38(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1C21E38(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1C21E38(&WarBoardRoadMaster_TypeInfo);
    sub_1C21E38(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1C21E38(&WarBoardSquareMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageBossMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageDetailMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageNpcMaster_TypeInfo);
    sub_1C21E38(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1C21E38(&WarBoardStageWallMaster_TypeInfo);
    sub_1C21E38(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1C21E38(&WarBoardTreasureMaster_TypeInfo);
    sub_1C21E38(&WarGroupIgnoreMaster_TypeInfo);
    sub_1C21E38(&WarGroupMaster_TypeInfo);
    sub_1C21E38(&WarMaster_TypeInfo);
    sub_1C21E38(&WarMessageMaster_TypeInfo);
    sub_1C21E38(&WarQuestSelectionMaster_TypeInfo);
    sub_1C21E38(&WarReleaseMaster_TypeInfo);
    byte_4BDC06D = 1;
  }
  v1 = (DataMasterBase_array *)sub_1C21EE0(DataMasterBase___TypeInfo, 532LL);
  v2 = (ServantMaster_o *)sub_1C22084(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0LL);
  if ( !v1 )
    sub_1C22094(v3, v4);
  if ( v2 )
  {
    v3 = sub_1C21F74(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  p_max_length = &v1->max_length;
  if ( !v1->max_length )
    goto LABEL_1601;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1C21DDC((PartyOrganizationUtility_o *)v1->m_Items, (int64_t)v2, v5, v6, v7, v8, v9, v10);
  v12 = (ServantClassMaster_o *)sub_1C22084(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v12, 0LL);
  if ( v12 )
  {
    v3 = sub_1C21F74(v12, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1601;
  v1->m_Items[1] = (DataMasterBase_o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[1], (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (ServantCommentMaster_o *)sub_1C22084(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v19, 0LL);
  if ( v19 )
  {
    v3 = sub_1C21F74(v19, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1601;
  v1->m_Items[2] = (DataMasterBase_o *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[2], (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (ServantProfileMaster_o *)sub_1C22084(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v26, 0LL);
  if ( v26 )
  {
    v3 = sub_1C21F74(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1601;
  v1->m_Items[3] = (DataMasterBase_o *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[3], (int64_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (WarMaster_o *)sub_1C22084(WarMaster_TypeInfo);
  WarMaster___ctor(v33, 0LL);
  if ( v33 )
  {
    v3 = sub_1C21F74(v33, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1601;
  v1->m_Items[4] = (DataMasterBase_o *)v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[4], (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (UserMaster_o *)sub_1C22084(UserMaster_TypeInfo);
  UserMaster___ctor(v40, 0LL);
  if ( v40 )
  {
    v3 = sub_1C21F74(v40, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1601;
  v1->m_Items[5] = (DataMasterBase_o *)v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[5], (int64_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (UserGameMaster_o *)sub_1C22084(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v47, 0LL);
  if ( v47 )
  {
    v3 = sub_1C21F74(v47, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1601;
  v1->m_Items[6] = (DataMasterBase_o *)v47;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[6], (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (TblUserMaster_o *)sub_1C22084(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v54, 0LL);
  if ( v54 )
  {
    v3 = sub_1C21F74(v54, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1601;
  v1->m_Items[7] = (DataMasterBase_o *)v54;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[7], (int64_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = (UserItemMaster_o *)sub_1C22084(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v61, 0LL);
  if ( v61 )
  {
    v3 = sub_1C21F74(v61, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1601;
  v1->m_Items[8] = (DataMasterBase_o *)v61;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[8], (int64_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = (UserServantMaster_o *)sub_1C22084(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v68, 0LL);
  if ( v68 )
  {
    v3 = sub_1C21F74(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1601;
  v1->m_Items[9] = (DataMasterBase_o *)v68;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[9], (int64_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = (UserServantStorageMaster_o *)sub_1C22084(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v75, 0LL);
  if ( v75 )
  {
    v3 = sub_1C21F74(v75, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1601;
  v1->m_Items[10] = (DataMasterBase_o *)v75;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[10], (int64_t)v75, v76, v77, v78, v79, v80, v81);
  v82 = (UserAccessaryMaster_o *)sub_1C22084(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v82, 0LL);
  if ( v82 )
  {
    v3 = sub_1C21F74(v82, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1601;
  v1->m_Items[11] = (DataMasterBase_o *)v82;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[11], (int64_t)v82, v83, v84, v85, v86, v87, v88);
  v89 = (UserQuestMaster_o *)sub_1C22084(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v89, 0LL);
  if ( v89 )
  {
    v3 = sub_1C21F74(v89, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1601;
  v1->m_Items[12] = (DataMasterBase_o *)v89;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[12], (int64_t)v89, v90, v91, v92, v93, v94, v95);
  v96 = (BattleMaster_o *)sub_1C22084(BattleMaster_TypeInfo);
  BattleMaster___ctor(v96, 0LL);
  if ( v96 )
  {
    v3 = sub_1C21F74(v96, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1601;
  v1->m_Items[13] = (DataMasterBase_o *)v96;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[13], (int64_t)v96, v97, v98, v99, v100, v101, v102);
  v103 = (OtherUserGameMaster_o *)sub_1C22084(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v103, 0LL);
  if ( v103 )
  {
    v3 = sub_1C21F74(v103, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1601;
  v1->m_Items[14] = (DataMasterBase_o *)v103;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[14], (int64_t)v103, v104, v105, v106, v107, v108, v109);
  v110 = (TblFriendMaster_o *)sub_1C22084(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v110, 0LL);
  if ( v110 )
  {
    v3 = sub_1C21F74(v110, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1601;
  v1->m_Items[15] = (DataMasterBase_o *)v110;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[15], (int64_t)v110, v111, v112, v113, v114, v115, v116);
  v117 = (AreaMaster_o *)sub_1C22084(AreaMaster_TypeInfo);
  AreaMaster___ctor(v117, 0LL);
  if ( v117 )
  {
    v3 = sub_1C21F74(v117, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1601;
  v1->m_Items[16] = (DataMasterBase_o *)v117;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[16], (int64_t)v117, v118, v119, v120, v121, v122, v123);
  v124 = (ServantCardMaster_o *)sub_1C22084(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v124, 0LL);
  if ( v124 )
  {
    v3 = sub_1C21F74(v124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1601;
  v1->m_Items[17] = (DataMasterBase_o *)v124;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[17], (int64_t)v124, v125, v126, v127, v128, v129, v130);
  v131 = (EventMaster_o *)sub_1C22084(EventMaster_TypeInfo);
  EventMaster___ctor(v131, 0LL);
  if ( v131 )
  {
    v3 = sub_1C21F74(v131, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1601;
  v1->m_Items[18] = (DataMasterBase_o *)v131;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[18], (int64_t)v131, v132, v133, v134, v135, v136, v137);
  v138 = (ItemMaster_o *)sub_1C22084(ItemMaster_TypeInfo);
  ItemMaster___ctor(v138, 0LL);
  if ( v138 )
  {
    v3 = sub_1C21F74(v138, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1601;
  v1->m_Items[19] = (DataMasterBase_o *)v138;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[19], (int64_t)v138, v139, v140, v141, v142, v143, v144);
  v145 = (QuestMaster_o *)sub_1C22084(QuestMaster_TypeInfo);
  QuestMaster___ctor(v145, 0LL);
  if ( v145 )
  {
    v3 = sub_1C21F74(v145, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1601;
  v1->m_Items[20] = (DataMasterBase_o *)v145;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[20], (int64_t)v145, v146, v147, v148, v149, v150, v151);
  v152 = (QuestAddMaster_o *)sub_1C22084(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v152, 0LL);
  if ( v152 )
  {
    v3 = sub_1C21F74(v152, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1601;
  v1->m_Items[21] = (DataMasterBase_o *)v152;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[21], (int64_t)v152, v153, v154, v155, v156, v157, v158);
  v159 = (QuestReleaseMaster_o *)sub_1C22084(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v159, 0LL);
  if ( v159 )
  {
    v3 = sub_1C21F74(v159, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1601;
  v1->m_Items[22] = (DataMasterBase_o *)v159;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[22], (int64_t)v159, v160, v161, v162, v163, v164, v165);
  v166 = (QuestDateRangeMaster_o *)sub_1C22084(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v166, 0LL);
  if ( v166 )
  {
    v3 = sub_1C21F74(v166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1601;
  v1->m_Items[23] = (DataMasterBase_o *)v166;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[23], (int64_t)v166, v167, v168, v169, v170, v171, v172);
  v173 = (QuestPhaseMaster_o *)sub_1C22084(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v173, 0LL);
  if ( v173 )
  {
    v3 = sub_1C21F74(v173, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1601;
  v1->m_Items[24] = (DataMasterBase_o *)v173;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[24], (int64_t)v173, v174, v175, v176, v177, v178, v179);
  v180 = (QuestPhaseDetailMaster_o *)sub_1C22084(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v180, 0LL);
  if ( v180 )
  {
    v3 = sub_1C21F74(v180, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1601;
  v1->m_Items[25] = (DataMasterBase_o *)v180;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[25], (int64_t)v180, v181, v182, v183, v184, v185, v186);
  v187 = (QuestGroupMaster_o *)sub_1C22084(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v187, 0LL);
  if ( v187 )
  {
    v3 = sub_1C21F74(v187, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1601;
  v1->m_Items[26] = (DataMasterBase_o *)v187;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[26], (int64_t)v187, v188, v189, v190, v191, v192, v193);
  v194 = (QuestRandomGroupMaster_o *)sub_1C22084(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v194, 0LL);
  if ( v194 )
  {
    v3 = sub_1C21F74(v194, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1601;
  v1->m_Items[27] = (DataMasterBase_o *)v194;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[27], (int64_t)v194, v195, v196, v197, v198, v199, v200);
  v201 = (QuestConsumeItemMaster_o *)sub_1C22084(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v201, 0LL);
  if ( v201 )
  {
    v3 = sub_1C21F74(v201, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1601;
  v1->m_Items[28] = (DataMasterBase_o *)v201;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[28], (int64_t)v201, v202, v203, v204, v205, v206, v207);
  v208 = (QuestMessageMaster_o *)sub_1C22084(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v208, 0LL);
  if ( v208 )
  {
    v3 = sub_1C21F74(v208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1601;
  v1->m_Items[29] = (DataMasterBase_o *)v208;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[29], (int64_t)v208, v209, v210, v211, v212, v213, v214);
  v215 = (UserQuestInfoMaster_o *)sub_1C22084(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v215, 0LL);
  if ( v215 )
  {
    v3 = sub_1C21F74(v215, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1601;
  v1->m_Items[30] = (DataMasterBase_o *)v215;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[30], (int64_t)v215, v216, v217, v218, v219, v220, v221);
  v222 = (UserQuestRecordMaster_o *)sub_1C22084(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v222, 0LL);
  if ( v222 )
  {
    v3 = sub_1C21F74(v222, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1601;
  v1->m_Items[31] = (DataMasterBase_o *)v222;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[31], (int64_t)v222, v223, v224, v225, v226, v227, v228);
  v229 = (ViewQuestInfoMaster_o *)sub_1C22084(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v229, 0LL);
  if ( v229 )
  {
    v3 = sub_1C21F74(v229, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1601;
  v1->m_Items[32] = (DataMasterBase_o *)v229;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[32], (int64_t)v229, v230, v231, v232, v233, v234, v235);
  v236 = (ViewEnemyMaster_o *)sub_1C22084(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v236, 0LL);
  if ( v236 )
  {
    v3 = sub_1C21F74(v236, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1601;
  v1->m_Items[33] = (DataMasterBase_o *)v236;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[33], (int64_t)v236, v237, v238, v239, v240, v241, v242);
  v243 = (ViewQuestEnemyInfoMaster_o *)sub_1C22084(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v243, 0LL);
  if ( v243 )
  {
    v3 = sub_1C21F74(v243, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1601;
  v1->m_Items[34] = (DataMasterBase_o *)v243;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[34], (int64_t)v243, v244, v245, v246, v247, v248, v249);
  v250 = (BlankEarthSpotMaster_o *)sub_1C22084(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v250, 0LL);
  if ( v250 )
  {
    v3 = sub_1C21F74(v250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1601;
  v1->m_Items[35] = (DataMasterBase_o *)v250;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[35], (int64_t)v250, v251, v252, v253, v254, v255, v256);
  v257 = (BlankEarthSpotAddMaster_o *)sub_1C22084(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v257, 0LL);
  if ( v257 )
  {
    v3 = sub_1C21F74(v257, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1601;
  v1->m_Items[36] = (DataMasterBase_o *)v257;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[36], (int64_t)v257, v258, v259, v260, v261, v262, v263);
  v264 = (SpotMaster_o *)sub_1C22084(SpotMaster_TypeInfo);
  SpotMaster___ctor(v264, 0LL);
  if ( v264 )
  {
    v3 = sub_1C21F74(v264, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1601;
  v1->m_Items[37] = (DataMasterBase_o *)v264;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[37], (int64_t)v264, v265, v266, v267, v268, v269, v270);
  v271 = (SpotImageMaster_o *)sub_1C22084(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v271, 0LL);
  if ( v271 )
  {
    v3 = sub_1C21F74(v271, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1601;
  v1->m_Items[38] = (DataMasterBase_o *)v271;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[38], (int64_t)v271, v272, v273, v274, v275, v276, v277);
  v278 = (SpotRoadMaster_o *)sub_1C22084(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v278, 0LL);
  if ( v278 )
  {
    v3 = sub_1C21F74(v278, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1601;
  v1->m_Items[39] = (DataMasterBase_o *)v278;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[39], (int64_t)v278, v279, v280, v281, v282, v283, v284);
  v285 = (SpotPathMaster_o *)sub_1C22084(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v285, 0LL);
  if ( v285 )
  {
    v3 = sub_1C21F74(v285, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1601;
  v1->m_Items[40] = (DataMasterBase_o *)v285;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[40], (int64_t)v285, v286, v287, v288, v289, v290, v291);
  v292 = (SpotAddMaster_o *)sub_1C22084(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v292, 0LL);
  if ( v292 )
  {
    v3 = sub_1C21F74(v292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1601;
  v1->m_Items[41] = (DataMasterBase_o *)v292;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[41], (int64_t)v292, v293, v294, v295, v296, v297, v298);
  v299 = (MapGimmickMaster_o *)sub_1C22084(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v299, 0LL);
  if ( v299 )
  {
    v3 = sub_1C21F74(v299, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1601;
  v1->m_Items[42] = (DataMasterBase_o *)v299;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[42], (int64_t)v299, v300, v301, v302, v303, v304, v305);
  v306 = (GiftMaster_o *)sub_1C22084(GiftMaster_TypeInfo);
  GiftMaster___ctor(v306, 0LL);
  if ( v306 )
  {
    v3 = sub_1C21F74(v306, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1601;
  v1->m_Items[43] = (DataMasterBase_o *)v306;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[43], (int64_t)v306, v307, v308, v309, v310, v311, v312);
  v313 = (GiftAddMaster_o *)sub_1C22084(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v313, 0LL);
  if ( v313 )
  {
    v3 = sub_1C21F74(v313, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1601;
  v1->m_Items[44] = (DataMasterBase_o *)v313;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[44], (int64_t)v313, v314, v315, v316, v317, v318, v319);
  v320 = (ShopMaster_o *)sub_1C22084(ShopMaster_TypeInfo);
  ShopMaster___ctor(v320, 0LL);
  if ( v320 )
  {
    v3 = sub_1C21F74(v320, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1601;
  v1->m_Items[45] = (DataMasterBase_o *)v320;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[45], (int64_t)v320, v321, v322, v323, v324, v325, v326);
  v327 = (StoneShopMaster_o *)sub_1C22084(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v327, 0LL);
  if ( v327 )
  {
    v3 = sub_1C21F74(v327, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1601;
  v1->m_Items[46] = (DataMasterBase_o *)v327;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[46], (int64_t)v327, v328, v329, v330, v331, v332, v333);
  v334 = (BankShopMaster_o *)sub_1C22084(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v334, 0LL);
  if ( v334 )
  {
    v3 = sub_1C21F74(v334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1601;
  v1->m_Items[47] = (DataMasterBase_o *)v334;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[47], (int64_t)v334, v335, v336, v337, v338, v339, v340);
  v341 = (ShopScriptMaster_o *)sub_1C22084(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v341, 0LL);
  if ( v341 )
  {
    v3 = sub_1C21F74(v341, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1601;
  v1->m_Items[48] = (DataMasterBase_o *)v341;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[48], (int64_t)v341, v342, v343, v344, v345, v346, v347);
  v348 = (StageMaster_o *)sub_1C22084(StageMaster_TypeInfo);
  StageMaster___ctor(v348, 0LL);
  if ( v348 )
  {
    v3 = sub_1C21F74(v348, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1601;
  v1->m_Items[49] = (DataMasterBase_o *)v348;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[49], (int64_t)v348, v349, v350, v351, v352, v353, v354);
  v355 = (ServantGroupMaster_o *)sub_1C22084(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v355, 0LL);
  if ( v355 )
  {
    v3 = sub_1C21F74(v355, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1601;
  v1->m_Items[50] = (DataMasterBase_o *)v355;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[50], (int64_t)v355, v356, v357, v358, v359, v360, v361);
  v362 = (ServantLimitMaster_o *)sub_1C22084(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v362, 0LL);
  if ( v362 )
  {
    v3 = sub_1C21F74(v362, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1601;
  v1->m_Items[51] = (DataMasterBase_o *)v362;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[51], (int64_t)v362, v363, v364, v365, v366, v367, v368);
  v369 = (ServantLimitAddMaster_o *)sub_1C22084(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v369, 0LL);
  if ( v369 )
  {
    v3 = sub_1C21F74(v369, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1601;
  v1->m_Items[52] = (DataMasterBase_o *)v369;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[52], (int64_t)v369, v370, v371, v372, v373, v374, v375);
  v376 = (ServantSkillMaster_o *)sub_1C22084(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v376, 0LL);
  if ( v376 )
  {
    v3 = sub_1C21F74(v376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1601;
  v1->m_Items[53] = (DataMasterBase_o *)v376;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[53], (int64_t)v376, v377, v378, v379, v380, v381, v382);
  v383 = (ServantPassiveSkillMaster_o *)sub_1C22084(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v383, 0LL);
  if ( v383 )
  {
    v3 = sub_1C21F74(v383, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1601;
  v1->m_Items[54] = (DataMasterBase_o *)v383;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[54], (int64_t)v383, v384, v385, v386, v387, v388, v389);
  v390 = (BgmMaster_o *)sub_1C22084(BgmMaster_TypeInfo);
  BgmMaster___ctor(v390, 0LL);
  if ( v390 )
  {
    v3 = sub_1C21F74(v390, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1601;
  v1->m_Items[55] = (DataMasterBase_o *)v390;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[55], (int64_t)v390, v391, v392, v393, v394, v395, v396);
  v397 = (ServantScriptMaster_o *)sub_1C22084(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v397, 0LL);
  if ( v397 )
  {
    v3 = sub_1C21F74(v397, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1601;
  v1->m_Items[56] = (DataMasterBase_o *)v397;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[56], (int64_t)v397, v398, v399, v400, v401, v402, v403);
  v404 = (NewsMaster_o *)sub_1C22084(NewsMaster_TypeInfo);
  NewsMaster___ctor(v404, 0LL);
  if ( v404 )
  {
    v3 = sub_1C21F74(v404, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1601;
  v1->m_Items[57] = (DataMasterBase_o *)v404;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[57], (int64_t)v404, v405, v406, v407, v408, v409, v410);
  v411 = (TelopMaster_o *)sub_1C22084(TelopMaster_TypeInfo);
  TelopMaster___ctor(v411, 0LL);
  if ( v411 )
  {
    v3 = sub_1C21F74(v411, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1601;
  v1->m_Items[58] = (DataMasterBase_o *)v411;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[58], (int64_t)v411, v412, v413, v414, v415, v416, v417);
  v418 = (UserExpMaster_o *)sub_1C22084(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v418, 0LL);
  if ( v418 )
  {
    v3 = sub_1C21F74(v418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1601;
  v1->m_Items[59] = (DataMasterBase_o *)v418;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[59], (int64_t)v418, v419, v420, v421, v422, v423, v424);
  v425 = (TreasureDvcMaster_o *)sub_1C22084(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v425, 0LL);
  if ( v425 )
  {
    v3 = sub_1C21F74(v425, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1601;
  v1->m_Items[60] = (DataMasterBase_o *)v425;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[60], (int64_t)v425, v426, v427, v428, v429, v430, v431);
  v432 = (ServantTreasureDvcMaster_o *)sub_1C22084(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v432, 0LL);
  if ( v432 )
  {
    v3 = sub_1C21F74(v432, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1601;
  v1->m_Items[61] = (DataMasterBase_o *)v432;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[61], (int64_t)v432, v433, v434, v435, v436, v437, v438);
  v439 = (SkillMaster_o *)sub_1C22084(SkillMaster_TypeInfo);
  SkillMaster___ctor(v439, 0LL);
  if ( v439 )
  {
    v3 = sub_1C21F74(v439, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1601;
  v1->m_Items[62] = (DataMasterBase_o *)v439;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[62], (int64_t)v439, v440, v441, v442, v443, v444, v445);
  v446 = (SkillLvMaster_o *)sub_1C22084(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v446, 0LL);
  if ( v446 )
  {
    v3 = sub_1C21F74(v446, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1601;
  v1->m_Items[63] = (DataMasterBase_o *)v446;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[63], (int64_t)v446, v447, v448, v449, v450, v451, v452);
  v453 = (SkillDetailMaster_o *)sub_1C22084(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v453, 0LL);
  if ( v453 )
  {
    v3 = sub_1C21F74(v453, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1601;
  v1->m_Items[64] = (DataMasterBase_o *)v453;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[64], (int64_t)v453, v454, v455, v456, v457, v458, v459);
  v460 = (CommandSpellMaster_o *)sub_1C22084(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v460, 0LL);
  if ( v460 )
  {
    v3 = sub_1C21F74(v460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1601;
  v1->m_Items[65] = (DataMasterBase_o *)v460;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[65], (int64_t)v460, v461, v462, v463, v464, v465, v466);
  v467 = (EquipMaster_o *)sub_1C22084(EquipMaster_TypeInfo);
  EquipMaster___ctor(v467, 0LL);
  if ( v467 )
  {
    v3 = sub_1C21F74(v467, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1601;
  v1->m_Items[66] = (DataMasterBase_o *)v467;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[66], (int64_t)v467, v468, v469, v470, v471, v472, v473);
  v474 = (EquipExpMaster_o *)sub_1C22084(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v474, 0LL);
  if ( v474 )
  {
    v3 = sub_1C21F74(v474, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1601;
  v1->m_Items[67] = (DataMasterBase_o *)v474;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[67], (int64_t)v474, v475, v476, v477, v478, v479, v480);
  v481 = (EquipSkillMaster_o *)sub_1C22084(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v481, 0LL);
  if ( v481 )
  {
    v3 = sub_1C21F74(v481, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1601;
  v1->m_Items[68] = (DataMasterBase_o *)v481;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[68], (int64_t)v481, v482, v483, v484, v485, v486, v487);
  v488 = (SubEquipMaster_o *)sub_1C22084(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v488, 0LL);
  if ( v488 )
  {
    v3 = sub_1C21F74(v488, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1601;
  v1->m_Items[69] = (DataMasterBase_o *)v488;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[69], (int64_t)v488, v489, v490, v491, v492, v493, v494);
  v495 = (AccessaryMaster_o *)sub_1C22084(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v495, 0LL);
  if ( v495 )
  {
    v3 = sub_1C21F74(v495, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1601;
  v1->m_Items[70] = (DataMasterBase_o *)v495;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[70], (int64_t)v495, v496, v497, v498, v499, v500, v501);
  v502 = (UserPresentBoxMaster_o *)sub_1C22084(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v502, 0LL);
  if ( v502 )
  {
    v3 = sub_1C21F74(v502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1601;
  v1->m_Items[71] = (DataMasterBase_o *)v502;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[71], (int64_t)v502, v503, v504, v505, v506, v507, v508);
  v509 = (UserDeckMaster_o *)sub_1C22084(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v509, 0LL);
  if ( v509 )
  {
    v3 = sub_1C21F74(v509, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1601;
  v1->m_Items[72] = (DataMasterBase_o *)v509;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[72], (int64_t)v509, v510, v511, v512, v513, v514, v515);
  v516 = (UserSubEquipMaster_o *)sub_1C22084(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v516, 0LL);
  if ( v516 )
  {
    v3 = sub_1C21F74(v516, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1601;
  v1->m_Items[73] = (DataMasterBase_o *)v516;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[73], (int64_t)v516, v517, v518, v519, v520, v521, v522);
  v523 = (GachaMaster_o *)sub_1C22084(GachaMaster_TypeInfo);
  GachaMaster___ctor(v523, 0LL);
  if ( v523 )
  {
    v3 = sub_1C21F74(v523, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1601;
  v1->m_Items[74] = (DataMasterBase_o *)v523;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[74], (int64_t)v523, v524, v525, v526, v527, v528, v529);
  v530 = (GachaImageMaster_o *)sub_1C22084(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v530, 0LL);
  if ( v530 )
  {
    v3 = sub_1C21F74(v530, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1601;
  v1->m_Items[75] = (DataMasterBase_o *)v530;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[75], (int64_t)v530, v531, v532, v533, v534, v535, v536);
  v537 = (UserGachaMaster_o *)sub_1C22084(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v537, 0LL);
  if ( v537 )
  {
    v3 = sub_1C21F74(v537, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1601;
  v1->m_Items[76] = (DataMasterBase_o *)v537;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[76], (int64_t)v537, v538, v539, v540, v541, v542, v543);
  v544 = (UserEquipMaster_o *)sub_1C22084(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v544, 0LL);
  if ( v544 )
  {
    v3 = sub_1C21F74(v544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1601;
  v1->m_Items[77] = (DataMasterBase_o *)v544;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[77], (int64_t)v544, v545, v546, v547, v548, v549, v550);
  v551 = (UserServantCollectionMaster_o *)sub_1C22084(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v551, 0LL);
  if ( v551 )
  {
    v3 = sub_1C21F74(v551, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1601;
  v1->m_Items[78] = (DataMasterBase_o *)v551;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[78], (int64_t)v551, v552, v553, v554, v555, v556, v557);
  v558 = (FriendshipMaster_o *)sub_1C22084(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v558, 0LL);
  if ( v558 )
  {
    v3 = sub_1C21F74(v558, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1601;
  v1->m_Items[79] = (DataMasterBase_o *)v558;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[79], (int64_t)v558, v559, v560, v561, v562, v563, v564);
  v565 = (GachaTicketMaster_o *)sub_1C22084(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v565, 0LL);
  if ( v565 )
  {
    v3 = sub_1C21F74(v565, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1601;
  v1->m_Items[80] = (DataMasterBase_o *)v565;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[80], (int64_t)v565, v566, v567, v568, v569, v570, v571);
  v572 = (UserFormationMaster_o *)sub_1C22084(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v572, 0LL);
  if ( v572 )
  {
    v3 = sub_1C21F74(v572, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1601;
  v1->m_Items[81] = (DataMasterBase_o *)v572;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[81], (int64_t)v572, v573, v574, v575, v576, v577, v578);
  v579 = (FunctionMaster_o *)sub_1C22084(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v579, 0LL);
  if ( v579 )
  {
    v3 = sub_1C21F74(v579, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1601;
  v1->m_Items[82] = (DataMasterBase_o *)v579;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[82], (int64_t)v579, v580, v581, v582, v583, v584, v585);
  v586 = (BuffMaster_o *)sub_1C22084(BuffMaster_TypeInfo);
  BuffMaster___ctor(v586, 0LL);
  if ( v586 )
  {
    v3 = sub_1C21F74(v586, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1601;
  v1->m_Items[83] = (DataMasterBase_o *)v586;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[83], (int64_t)v586, v587, v588, v589, v590, v591, v592);
  v593 = (GachaReleaseMaster_o *)sub_1C22084(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v593, 0LL);
  if ( v593 )
  {
    v3 = sub_1C21F74(v593, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1601;
  v1->m_Items[84] = (DataMasterBase_o *)v593;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[84], (int64_t)v593, v594, v595, v596, v597, v598, v599);
  v600 = (CombineQpMaster_o *)sub_1C22084(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v600, 0LL);
  if ( v600 )
  {
    v3 = sub_1C21F74(v600, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1601;
  v1->m_Items[85] = (DataMasterBase_o *)v600;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[85], (int64_t)v600, v601, v602, v603, v604, v605, v606);
  v607 = (CombineMaterialMaster_o *)sub_1C22084(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v607, 0LL);
  if ( v607 )
  {
    v3 = sub_1C21F74(v607, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1601;
  v1->m_Items[86] = (DataMasterBase_o *)v607;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[86], (int64_t)v607, v608, v609, v610, v611, v612, v613);
  v614 = (EventCombineMaster_o *)sub_1C22084(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v614, 0LL);
  if ( v614 )
  {
    v3 = sub_1C21F74(v614, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1601;
  v1->m_Items[87] = (DataMasterBase_o *)v614;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[87], (int64_t)v614, v615, v616, v617, v618, v619, v620);
  v621 = (ServantExpMaster_o *)sub_1C22084(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v621, 0LL);
  if ( v621 )
  {
    v3 = sub_1C21F74(v621, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1601;
  v1->m_Items[88] = (DataMasterBase_o *)v621;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[88], (int64_t)v621, v622, v623, v624, v625, v626, v627);
  v628 = (CombineSkillMaster_o *)sub_1C22084(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v628, 0LL);
  if ( v628 )
  {
    v3 = sub_1C21F74(v628, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1601;
  v1->m_Items[89] = (DataMasterBase_o *)v628;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[89], (int64_t)v628, v629, v630, v631, v632, v633, v634);
  v635 = (CombineTdMaster_o *)sub_1C22084(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v635, 0LL);
  if ( v635 )
  {
    v3 = sub_1C21F74(v635, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1601;
  v1->m_Items[90] = (DataMasterBase_o *)v635;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[90], (int64_t)v635, v636, v637, v638, v639, v640, v641);
  v642 = (EventQuestMaster_o *)sub_1C22084(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v642, 0LL);
  if ( v642 )
  {
    v3 = sub_1C21F74(v642, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1601;
  v1->m_Items[91] = (DataMasterBase_o *)v642;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[91], (int64_t)v642, v643, v644, v645, v646, v647, v648);
  v649 = (EventCampaignMaster_o *)sub_1C22084(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v649, 0LL);
  if ( v649 )
  {
    v3 = sub_1C21F74(v649, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1601;
  v1->m_Items[92] = (DataMasterBase_o *)v649;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[92], (int64_t)v649, v650, v651, v652, v653, v654, v655);
  v656 = (IllustratorMaster_o *)sub_1C22084(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v656, 0LL);
  if ( v656 )
  {
    v3 = sub_1C21F74(v656, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1601;
  v1->m_Items[93] = (DataMasterBase_o *)v656;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[93], (int64_t)v656, v657, v658, v659, v660, v661, v662);
  v663 = (CvMaster_o *)sub_1C22084(CvMaster_TypeInfo);
  CvMaster___ctor(v663, 0LL);
  if ( v663 )
  {
    v3 = sub_1C21F74(v663, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1601;
  v1->m_Items[94] = (DataMasterBase_o *)v663;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[94], (int64_t)v663, v664, v665, v666, v667, v668, v669);
  v670 = (TreasureDvcLvMaster_o *)sub_1C22084(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v670, 0LL);
  if ( v670 )
  {
    v3 = sub_1C21F74(v670, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1601;
  v1->m_Items[95] = (DataMasterBase_o *)v670;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[95], (int64_t)v670, v671, v672, v673, v674, v675, v676);
  v677 = (TreasureDvcDetailMaster_o *)sub_1C22084(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v677, 0LL);
  if ( v677 )
  {
    v3 = sub_1C21F74(v677, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1601;
  v1->m_Items[96] = (DataMasterBase_o *)v677;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[96], (int64_t)v677, v678, v679, v680, v681, v682, v683);
  v684 = (UserFollowerMaster_o *)sub_1C22084(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v684, 0LL);
  if ( v684 )
  {
    v3 = sub_1C21F74(v684, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1601;
  v1->m_Items[97] = (DataMasterBase_o *)v684;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[97], (int64_t)v684, v685, v686, v687, v688, v689, v690);
  v691 = (NpcFollowerMaster_o *)sub_1C22084(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v691, 0LL);
  if ( v691 )
  {
    v3 = sub_1C21F74(v691, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1601;
  v1->m_Items[98] = (DataMasterBase_o *)v691;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[98], (int64_t)v691, v692, v693, v694, v695, v696, v697);
  v698 = (NpcServantFollowerMaster_o *)sub_1C22084(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v698, 0LL);
  if ( v698 )
  {
    v3 = sub_1C21F74(v698, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1601;
  v1->m_Items[99] = (DataMasterBase_o *)v698;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[99], (int64_t)v698, v699, v700, v701, v702, v703, v704);
  v705 = (UserEventMaster_o *)sub_1C22084(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v705, 0LL);
  if ( v705 )
  {
    v3 = sub_1C21F74(v705, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1601;
  v1->m_Items[100] = (DataMasterBase_o *)v705;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[100], (int64_t)v705, v706, v707, v708, v709, v710, v711);
  v712 = (UserShopMaster_o *)sub_1C22084(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v712, 0LL);
  if ( v712 )
  {
    v3 = sub_1C21F74(v712, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1601;
  v1->m_Items[101] = (DataMasterBase_o *)v712;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[101], (int64_t)v712, v713, v714, v715, v716, v717, v718);
  v719 = (UserContinueMaster_o *)sub_1C22084(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v719, 0LL);
  if ( v719 )
  {
    v3 = sub_1C21F74(v719, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1601;
  v1->m_Items[102] = (DataMasterBase_o *)v719;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[102], (int64_t)v719, v720, v721, v722, v723, v724, v725);
  v726 = (ConstantMaster_o *)sub_1C22084(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v726, 0LL);
  if ( v726 )
  {
    v3 = sub_1C21F74(v726, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1601;
  v1->m_Items[103] = (DataMasterBase_o *)v726;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[103], (int64_t)v726, v727, v728, v729, v730, v731, v732);
  v733 = (ConstantLongMaster_o *)sub_1C22084(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v733, 0LL);
  if ( v733 )
  {
    v3 = sub_1C21F74(v733, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1601;
  v1->m_Items[104] = (DataMasterBase_o *)v733;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[104], (int64_t)v733, v734, v735, v736, v737, v738, v739);
  v740 = (ConstantStrMaster_o *)sub_1C22084(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v740, 0LL);
  if ( v740 )
  {
    v3 = sub_1C21F74(v740, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1601;
  v1->m_Items[105] = (DataMasterBase_o *)v740;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[105], (int64_t)v740, v741, v742, v743, v744, v745, v746);
  v747 = (AiMaster_o *)sub_1C22084(AiMaster_TypeInfo);
  AiMaster___ctor(v747, 0LL);
  if ( v747 )
  {
    v3 = sub_1C21F74(v747, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1601;
  v1->m_Items[106] = (DataMasterBase_o *)v747;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[106], (int64_t)v747, v748, v749, v750, v751, v752, v753);
  v754 = (AiActMaster_o *)sub_1C22084(AiActMaster_TypeInfo);
  AiActMaster___ctor(v754, 0LL);
  if ( v754 )
  {
    v3 = sub_1C21F74(v754, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1601;
  v1->m_Items[107] = (DataMasterBase_o *)v754;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[107], (int64_t)v754, v755, v756, v757, v758, v759, v760);
  v761 = (AttriRelationMaster_o *)sub_1C22084(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v761, 0LL);
  if ( v761 )
  {
    v3 = sub_1C21F74(v761, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1601;
  v1->m_Items[108] = (DataMasterBase_o *)v761;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[108], (int64_t)v761, v762, v763, v764, v765, v766, v767);
  v768 = (ClassRelationMaster_o *)sub_1C22084(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v768, 0LL);
  if ( v768 )
  {
    v3 = sub_1C21F74(v768, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1601;
  v1->m_Items[109] = (DataMasterBase_o *)v768;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[109], (int64_t)v768, v769, v770, v771, v772, v773, v774);
  v775 = (EffectMaster_o *)sub_1C22084(EffectMaster_TypeInfo);
  EffectMaster___ctor(v775, 0LL);
  if ( v775 )
  {
    v3 = sub_1C21F74(v775, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1601;
  v1->m_Items[110] = (DataMasterBase_o *)v775;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[110], (int64_t)v775, v776, v777, v778, v779, v780, v781);
  v782 = (EquipImageMaster_o *)sub_1C22084(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v782, 0LL);
  if ( v782 )
  {
    v3 = sub_1C21F74(v782, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1601;
  v1->m_Items[111] = (DataMasterBase_o *)v782;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[111], (int64_t)v782, v783, v784, v785, v786, v787, v788);
  v789 = (ServantVoiceMaster_o *)sub_1C22084(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v789, 0LL);
  if ( v789 )
  {
    v3 = sub_1C21F74(v789, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1601;
  v1->m_Items[112] = (DataMasterBase_o *)v789;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[112], (int64_t)v789, v790, v791, v792, v793, v794, v795);
  v796 = (CombineLimitMaster_o *)sub_1C22084(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v796, 0LL);
  if ( v796 )
  {
    v3 = sub_1C21F74(v796, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1601;
  v1->m_Items[113] = (DataMasterBase_o *)v796;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[113], (int64_t)v796, v797, v798, v799, v800, v801, v802);
  v803 = (CardMaster_o *)sub_1C22084(CardMaster_TypeInfo);
  CardMaster___ctor(v803, 0LL);
  if ( v803 )
  {
    v3 = sub_1C21F74(v803, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1601;
  v1->m_Items[114] = (DataMasterBase_o *)v803;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[114], (int64_t)v803, v804, v805, v806, v807, v808, v809);
  v810 = (CombineQpSvtEquipMaster_o *)sub_1C22084(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v810, 0LL);
  if ( v810 )
  {
    v3 = sub_1C21F74(v810, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1601;
  v1->m_Items[115] = (DataMasterBase_o *)v810;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[115], (int64_t)v810, v811, v812, v813, v814, v815, v816);
  v817 = (ServantRarityMaster_o *)sub_1C22084(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v817, 0LL);
  if ( v817 )
  {
    v3 = sub_1C21F74(v817, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1601;
  v1->m_Items[116] = (DataMasterBase_o *)v817;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[116], (int64_t)v817, v818, v819, v820, v821, v822, v823);
  v824 = (SetItemMaster_o *)sub_1C22084(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v824, 0LL);
  if ( v824 )
  {
    v3 = sub_1C21F74(v824, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1601;
  v1->m_Items[117] = (DataMasterBase_o *)v824;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[117], (int64_t)v824, v825, v826, v827, v828, v829, v830);
  v831 = (RecoverMaster_o *)sub_1C22084(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v831, 0LL);
  if ( v831 )
  {
    v3 = sub_1C21F74(v831, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1601;
  v1->m_Items[118] = (DataMasterBase_o *)v831;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[118], (int64_t)v831, v832, v833, v834, v835, v836, v837);
  v838 = (BannerMaster_o *)sub_1C22084(BannerMaster_TypeInfo);
  BannerMaster___ctor(v838, 0LL);
  if ( v838 )
  {
    v3 = sub_1C21F74(v838, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1601;
  v1->m_Items[119] = (DataMasterBase_o *)v838;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[119], (int64_t)v838, v839, v840, v841, v842, v843, v844);
  v845 = (ShopReleaseMaster_o *)sub_1C22084(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v845, 0LL);
  if ( v845 )
  {
    v3 = sub_1C21F74(v845, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1601;
  v1->m_Items[120] = (DataMasterBase_o *)v845;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[120], (int64_t)v845, v846, v847, v848, v849, v850, v851);
  v852 = (EventRewardMaster_o *)sub_1C22084(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v852, 0LL);
  if ( v852 )
  {
    v3 = sub_1C21F74(v852, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1601;
  v1->m_Items[121] = (DataMasterBase_o *)v852;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[121], (int64_t)v852, v853, v854, v855, v856, v857, v858);
  v859 = (EventDetailMaster_o *)sub_1C22084(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v859, 0LL);
  if ( v859 )
  {
    v3 = sub_1C21F74(v859, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1601;
  v1->m_Items[122] = (DataMasterBase_o *)v859;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[122], (int64_t)v859, v860, v861, v862, v863, v864, v865);
  v866 = (EventServantMaster_o *)sub_1C22084(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v866, 0LL);
  if ( v866 )
  {
    v3 = sub_1C21F74(v866, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1601;
  v1->m_Items[123] = (DataMasterBase_o *)v866;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[123], (int64_t)v866, v867, v868, v869, v870, v871, v872);
  v873 = (BoxGachaMaster_o *)sub_1C22084(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v873, 0LL);
  if ( v873 )
  {
    v3 = sub_1C21F74(v873, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1601;
  v1->m_Items[124] = (DataMasterBase_o *)v873;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[124], (int64_t)v873, v874, v875, v876, v877, v878, v879);
  v880 = (BoxGachaBaseMaster_o *)sub_1C22084(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v880, 0LL);
  if ( v880 )
  {
    v3 = sub_1C21F74(v880, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1601;
  v1->m_Items[125] = (DataMasterBase_o *)v880;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[125], (int64_t)v880, v881, v882, v883, v884, v885, v886);
  v887 = (BoxGachaTalkMaster_o *)sub_1C22084(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v887, 0LL);
  if ( v887 )
  {
    v3 = sub_1C21F74(v887, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1601;
  v1->m_Items[126] = (DataMasterBase_o *)v887;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[126], (int64_t)v887, v888, v889, v890, v891, v892, v893);
  v894 = (UserBoxGachaMaster_o *)sub_1C22084(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v894, 0LL);
  if ( v894 )
  {
    v3 = sub_1C21F74(v894, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1601;
  v1->m_Items[127] = (DataMasterBase_o *)v894;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[127], (int64_t)v894, v895, v896, v897, v898, v899, v900);
  v901 = (BoxGachaHistoryMaster_o *)sub_1C22084(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v901, 0LL);
  if ( v901 )
  {
    v3 = sub_1C21F74(v901, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1601;
  v1->m_Items[128] = (DataMasterBase_o *)v901;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[128], (int64_t)v901, v902, v903, v904, v905, v906, v907);
  v908 = (BattleBgMaster_o *)sub_1C22084(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v908, 0LL);
  if ( v908 )
  {
    v3 = sub_1C21F74(v908, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1601;
  v1->m_Items[129] = (DataMasterBase_o *)v908;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[129], (int64_t)v908, v909, v910, v911, v912, v913, v914);
  v915 = (TipsBattleMaster_o *)sub_1C22084(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v915, 0LL);
  if ( v915 )
  {
    v3 = sub_1C21F74(v915, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1601;
  v1->m_Items[130] = (DataMasterBase_o *)v915;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[130], (int64_t)v915, v916, v917, v918, v919, v920, v921);
  v922 = (UserLoginMaster_o *)sub_1C22084(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v922, 0LL);
  if ( v922 )
  {
    v3 = sub_1C21F74(v922, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1601;
  v1->m_Items[131] = (DataMasterBase_o *)v922;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[131], (int64_t)v922, v923, v924, v925, v926, v927, v928);
  v929 = (VoiceMaster_o *)sub_1C22084(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v929, 0LL);
  if ( v929 )
  {
    v3 = sub_1C21F74(v929, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1601;
  v1->m_Items[132] = (DataMasterBase_o *)v929;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[132], (int64_t)v929, v930, v931, v932, v933, v934, v935);
  v936 = (EventRewardExtraMaster_o *)sub_1C22084(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v936, 0LL);
  if ( v936 )
  {
    v3 = sub_1C21F74(v936, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1601;
  v1->m_Items[133] = (DataMasterBase_o *)v936;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[133], (int64_t)v936, v937, v938, v939, v940, v941, v942);
  v943 = (EventMissionMaster_o *)sub_1C22084(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v943, 0LL);
  if ( v943 )
  {
    v3 = sub_1C21F74(v943, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1601;
  v1->m_Items[134] = (DataMasterBase_o *)v943;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[134], (int64_t)v943, v944, v945, v946, v947, v948, v949);
  v950 = (EventMissionActionMaster_o *)sub_1C22084(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v950, 0LL);
  if ( v950 )
  {
    v3 = sub_1C21F74(v950, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1601;
  v1->m_Items[135] = (DataMasterBase_o *)v950;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[135], (int64_t)v950, v951, v952, v953, v954, v955, v956);
  v957 = (EventMissionActionAddMaster_o *)sub_1C22084(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v957, 0LL);
  if ( v957 )
  {
    v3 = sub_1C21F74(v957, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1601;
  v1->m_Items[136] = (DataMasterBase_o *)v957;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[136], (int64_t)v957, v958, v959, v960, v961, v962, v963);
  v964 = (EventMissionConditionMaster_o *)sub_1C22084(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v964, 0LL);
  if ( v964 )
  {
    v3 = sub_1C21F74(v964, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1601;
  v1->m_Items[137] = (DataMasterBase_o *)v964;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[137], (int64_t)v964, v965, v966, v967, v968, v969, v970);
  v971 = (EventMissionCondDetailMaster_o *)sub_1C22084(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v971, 0LL);
  if ( v971 )
  {
    v3 = sub_1C21F74(v971, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1601;
  v1->m_Items[138] = (DataMasterBase_o *)v971;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[138], (int64_t)v971, v972, v973, v974, v975, v976, v977);
  v978 = (EventMissionAddMaster_o *)sub_1C22084(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v978, 0LL);
  if ( v978 )
  {
    v3 = sub_1C21F74(v978, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1601;
  v1->m_Items[139] = (DataMasterBase_o *)v978;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[139], (int64_t)v978, v979, v980, v981, v982, v983, v984);
  v985 = (CompleteMissionMaster_o *)sub_1C22084(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v985, 0LL);
  if ( v985 )
  {
    v3 = sub_1C21F74(v985, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1601;
  v1->m_Items[140] = (DataMasterBase_o *)v985;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[140], (int64_t)v985, v986, v987, v988, v989, v990, v991);
  v992 = (EventRewardSetMaster_o *)sub_1C22084(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v992, 0LL);
  if ( v992 )
  {
    v3 = sub_1C21F74(v992, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1601;
  v1->m_Items[141] = (DataMasterBase_o *)v992;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[141], (int64_t)v992, v993, v994, v995, v996, v997, v998);
  v999 = (UserEventMissionMaster_o *)sub_1C22084(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v999, 0LL);
  if ( v999 )
  {
    v3 = sub_1C21F74(v999, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1601;
  v1->m_Items[142] = (DataMasterBase_o *)v999;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[142], (int64_t)v999, v1000, v1001, v1002, v1003, v1004, v1005);
  v1006 = (UserEventMissionCondDetailMaster_o *)sub_1C22084(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v1006, 0LL);
  if ( v1006 )
  {
    v3 = sub_1C21F74(v1006, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1601;
  v1->m_Items[143] = (DataMasterBase_o *)v1006;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[143], (int64_t)v1006, v1007, v1008, v1009, v1010, v1011, v1012);
  v1013 = (BoxGachaBaseDetailMaster_o *)sub_1C22084(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v1013, 0LL);
  if ( v1013 )
  {
    v3 = sub_1C21F74(v1013, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1601;
  v1->m_Items[144] = (DataMasterBase_o *)v1013;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[144], (int64_t)v1013, v1014, v1015, v1016, v1017, v1018, v1019);
  v1020 = (UserServantLeaderMaster_o *)sub_1C22084(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v1020, 0LL);
  if ( v1020 )
  {
    v3 = sub_1C21F74(v1020, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1601;
  v1->m_Items[145] = (DataMasterBase_o *)v1020;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[145], (int64_t)v1020, v1021, v1022, v1023, v1024, v1025, v1026);
  v1027 = (ClosedMessageMaster_o *)sub_1C22084(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v1027, 0LL);
  if ( v1027 )
  {
    v3 = sub_1C21F74(v1027, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1601;
  v1->m_Items[146] = (DataMasterBase_o *)v1027;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[146], (int64_t)v1027, v1028, v1029, v1030, v1031, v1032, v1033);
  v1034 = (FunctionGroupMaster_o *)sub_1C22084(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v1034, 0LL);
  if ( v1034 )
  {
    v3 = sub_1C21F74(v1034, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1601;
  v1->m_Items[147] = (DataMasterBase_o *)v1034;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[147], (int64_t)v1034, v1035, v1036, v1037, v1038, v1039, v1040);
  v1041 = (EventRaidMaster_o *)sub_1C22084(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v1041, 0LL);
  if ( v1041 )
  {
    v3 = sub_1C21F74(v1041, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1601;
  v1->m_Items[148] = (DataMasterBase_o *)v1041;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[148], (int64_t)v1041, v1042, v1043, v1044, v1045, v1046, v1047);
  v1048 = (TotalEventRaidMaster_o *)sub_1C22084(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v1048, 0LL);
  if ( v1048 )
  {
    v3 = sub_1C21F74(v1048, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1601;
  v1->m_Items[149] = (DataMasterBase_o *)v1048;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[149], (int64_t)v1048, v1049, v1050, v1051, v1052, v1053, v1054);
  v1055 = (UserEventRaidMaster_o *)sub_1C22084(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v1055, 0LL);
  if ( v1055 )
  {
    v3 = sub_1C21F74(v1055, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1601;
  v1->m_Items[150] = (DataMasterBase_o *)v1055;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[150], (int64_t)v1055, v1056, v1057, v1058, v1059, v1060, v1061);
  v1062 = (EventPointMaster_o *)sub_1C22084(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1062, 0LL);
  if ( v1062 )
  {
    v3 = sub_1C21F74(v1062, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1601;
  v1->m_Items[151] = (DataMasterBase_o *)v1062;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[151], (int64_t)v1062, v1063, v1064, v1065, v1066, v1067, v1068);
  v1069 = (EventPointGroupMaster_o *)sub_1C22084(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1069, 0LL);
  if ( v1069 )
  {
    v3 = sub_1C21F74(v1069, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1601;
  v1->m_Items[152] = (DataMasterBase_o *)v1069;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[152], (int64_t)v1069, v1070, v1071, v1072, v1073, v1074, v1075);
  v1076 = (TotalEventPointMaster_o *)sub_1C22084(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1076, 0LL);
  if ( v1076 )
  {
    v3 = sub_1C21F74(v1076, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1601;
  v1->m_Items[153] = (DataMasterBase_o *)v1076;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[153], (int64_t)v1076, v1077, v1078, v1079, v1080, v1081, v1082);
  v1083 = (UserEventPointMaster_o *)sub_1C22084(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1083, 0LL);
  if ( v1083 )
  {
    v3 = sub_1C21F74(v1083, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1601;
  v1->m_Items[154] = (DataMasterBase_o *)v1083;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[154], (int64_t)v1083, v1084, v1085, v1086, v1087, v1088, v1089);
  v1090 = (EventPointUpperMaster_o *)sub_1C22084(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1090, 0LL);
  if ( v1090 )
  {
    v3 = sub_1C21F74(v1090, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1601;
  v1->m_Items[155] = (DataMasterBase_o *)v1090;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[155], (int64_t)v1090, v1091, v1092, v1093, v1094, v1095, v1096);
  v1097 = (EventPointUpperReleaseMaster_o *)sub_1C22084(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1097, 0LL);
  if ( v1097 )
  {
    v3 = sub_1C21F74(v1097, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1601;
  v1->m_Items[156] = (DataMasterBase_o *)v1097;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[156], (int64_t)v1097, v1098, v1099, v1100, v1101, v1102, v1103);
  v1104 = (EventRaceMaster_o *)sub_1C22084(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1104, 0LL);
  if ( v1104 )
  {
    v3 = sub_1C21F74(v1104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1601;
  v1->m_Items[157] = (DataMasterBase_o *)v1104;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[157], (int64_t)v1104, v1105, v1106, v1107, v1108, v1109, v1110);
  v1111 = (EventRaceResultMaster_o *)sub_1C22084(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1111, 0LL);
  if ( v1111 )
  {
    v3 = sub_1C21F74(v1111, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1601;
  v1->m_Items[158] = (DataMasterBase_o *)v1111;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[158], (int64_t)v1111, v1112, v1113, v1114, v1115, v1116, v1117);
  v1118 = (QuestRacePointMaster_o *)sub_1C22084(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1118, 0LL);
  if ( v1118 )
  {
    v3 = sub_1C21F74(v1118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1601;
  v1->m_Items[159] = (DataMasterBase_o *)v1118;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[159], (int64_t)v1118, v1119, v1120, v1121, v1122, v1123, v1124);
  v1125 = (UserEventRaceMaster_o *)sub_1C22084(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1125, 0LL);
  if ( v1125 )
  {
    v3 = sub_1C21F74(v1125, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1601;
  v1->m_Items[160] = (DataMasterBase_o *)v1125;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[160], (int64_t)v1125, v1126, v1127, v1128, v1129, v1130, v1131);
  v1132 = (EventScriptMaster_o *)sub_1C22084(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1132, 0LL);
  if ( v1132 )
  {
    v3 = sub_1C21F74(v1132, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1601;
  v1->m_Items[161] = (DataMasterBase_o *)v1132;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[161], (int64_t)v1132, v1133, v1134, v1135, v1136, v1137, v1138);
  v1139 = (EventScriptReleaseMaster_o *)sub_1C22084(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1139, 0LL);
  if ( v1139 )
  {
    v3 = sub_1C21F74(v1139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1601;
  v1->m_Items[162] = (DataMasterBase_o *)v1139;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[162], (int64_t)v1139, v1140, v1141, v1142, v1143, v1144, v1145);
  v1146 = (UserPresentHistoryMaster_o *)sub_1C22084(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1146, 0LL);
  if ( v1146 )
  {
    v3 = sub_1C21F74(v1146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1601;
  v1->m_Items[163] = (DataMasterBase_o *)v1146;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[163], (int64_t)v1146, v1147, v1148, v1149, v1150, v1151, v1152);
  v1153 = (MstMissionMaster_o *)sub_1C22084(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1153, 0LL);
  if ( v1153 )
  {
    v3 = sub_1C21F74(v1153, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1601;
  v1->m_Items[164] = (DataMasterBase_o *)v1153;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[164], (int64_t)v1153, v1154, v1155, v1156, v1157, v1158, v1159);
  v1160 = (ServantExceedMaster_o *)sub_1C22084(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1160, 0LL);
  if ( v1160 )
  {
    v3 = sub_1C21F74(v1160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1601;
  v1->m_Items[165] = (DataMasterBase_o *)v1160;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[165], (int64_t)v1160, v1161, v1162, v1163, v1164, v1165, v1166);
  v1167 = (PartialMaintenanceMaster_o *)sub_1C22084(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1167, 0LL);
  if ( v1167 )
  {
    v3 = sub_1C21F74(v1167, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1601;
  v1->m_Items[166] = (DataMasterBase_o *)v1167;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[166], (int64_t)v1167, v1168, v1169, v1170, v1171, v1172, v1173);
  v1174 = (GuideMaster_o *)sub_1C22084(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1174, 0LL);
  if ( v1174 )
  {
    v3 = sub_1C21F74(v1174, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1601;
  v1->m_Items[167] = (DataMasterBase_o *)v1174;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[167], (int64_t)v1174, v1175, v1176, v1177, v1178, v1179, v1180);
  v1181 = (MstMissionDisplayInfoMaster_o *)sub_1C22084(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1181, 0LL);
  if ( v1181 )
  {
    v3 = sub_1C21F74(v1181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1601;
  v1->m_Items[168] = (DataMasterBase_o *)v1181;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[168], (int64_t)v1181, v1182, v1183, v1184, v1185, v1186, v1187);
  v1188 = (GachaGroupMaster_o *)sub_1C22084(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1188, 0LL);
  if ( v1188 )
  {
    v3 = sub_1C21F74(v1188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1601;
  v1->m_Items[169] = (DataMasterBase_o *)v1188;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[169], (int64_t)v1188, v1189, v1190, v1191, v1192, v1193, v1194);
  v1195 = (QuestResetMaster_o *)sub_1C22084(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1195, 0LL);
  if ( v1195 )
  {
    v3 = sub_1C21F74(v1195, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1601;
  v1->m_Items[170] = (DataMasterBase_o *)v1195;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[170], (int64_t)v1195, v1196, v1197, v1198, v1199, v1200, v1201);
  v1202 = (WarAddMaster_o *)sub_1C22084(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1202, 0LL);
  if ( v1202 )
  {
    v3 = sub_1C21F74(v1202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1601;
  v1->m_Items[171] = (DataMasterBase_o *)v1202;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[171], (int64_t)v1202, v1203, v1204, v1205, v1206, v1207, v1208);
  v1209 = (EventItemDisplayMaster_o *)sub_1C22084(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1209, 0LL);
  if ( v1209 )
  {
    v3 = sub_1C21F74(v1209, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1601;
  v1->m_Items[172] = (DataMasterBase_o *)v1209;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[172], (int64_t)v1209, v1210, v1211, v1212, v1213, v1214, v1215);
  v1216 = (EventItemDisplayGroupMaster_o *)sub_1C22084(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1216, 0LL);
  if ( v1216 )
  {
    v3 = sub_1C21F74(v1216, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1601;
  v1->m_Items[173] = (DataMasterBase_o *)v1216;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[173], (int64_t)v1216, v1217, v1218, v1219, v1220, v1221, v1222);
  v1223 = (EventItemDisplayReleaseMaster_o *)sub_1C22084(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1223, 0LL);
  if ( v1223 )
  {
    v3 = sub_1C21F74(v1223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1601;
  v1->m_Items[174] = (DataMasterBase_o *)v1223;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[174], (int64_t)v1223, v1224, v1225, v1226, v1227, v1228, v1229);
  v1230 = (EventTutorialMaster_o *)sub_1C22084(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1230, 0LL);
  if ( v1230 )
  {
    v3 = sub_1C21F74(v1230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1601;
  v1->m_Items[175] = (DataMasterBase_o *)v1230;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[175], (int64_t)v1230, v1231, v1232, v1233, v1234, v1235, v1236);
  v1237 = (EventTutorialCondMaster_o *)sub_1C22084(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1237, 0LL);
  if ( v1237 )
  {
    v3 = sub_1C21F74(v1237, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1601;
  v1->m_Items[176] = (DataMasterBase_o *)v1237;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[176], (int64_t)v1237, v1238, v1239, v1240, v1241, v1242, v1243);
  v1244 = (VoiceReleaseMaster_o *)sub_1C22084(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1244, 0LL);
  if ( v1244 )
  {
    v3 = sub_1C21F74(v1244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1601;
  v1->m_Items[177] = (DataMasterBase_o *)v1244;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[177], (int64_t)v1244, v1245, v1246, v1247, v1248, v1249, v1250);
  v1251 = (EventSuperBossMaster_o *)sub_1C22084(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1251, 0LL);
  if ( v1251 )
  {
    v3 = sub_1C21F74(v1251, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1601;
  v1->m_Items[178] = (DataMasterBase_o *)v1251;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[178], (int64_t)v1251, v1252, v1253, v1254, v1255, v1256, v1257);
  v1258 = (UserSuperBossMaster_o *)sub_1C22084(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1258, 0LL);
  if ( v1258 )
  {
    v3 = sub_1C21F74(v1258, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1601;
  v1->m_Items[179] = (DataMasterBase_o *)v1258;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[179], (int64_t)v1258, v1259, v1260, v1261, v1262, v1263, v1264);
  v1265 = (QuestScriptMaster_o *)sub_1C22084(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1265, 0LL);
  if ( v1265 )
  {
    v3 = sub_1C21F74(v1265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1601;
  v1->m_Items[180] = (DataMasterBase_o *)v1265;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[180], (int64_t)v1265, v1266, v1267, v1268, v1269, v1270, v1271);
  v1272 = (QuestScriptReleaseMaster_o *)sub_1C22084(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1272, 0LL);
  if ( v1272 )
  {
    v3 = sub_1C21F74(v1272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1601;
  v1->m_Items[181] = (DataMasterBase_o *)v1272;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[181], (int64_t)v1272, v1273, v1274, v1275, v1276, v1277, v1278);
  v1279 = (MaterialFolderMaster_o *)sub_1C22084(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1279, 0LL);
  if ( v1279 )
  {
    v3 = sub_1C21F74(v1279, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1601;
  v1->m_Items[182] = (DataMasterBase_o *)v1279;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[182], (int64_t)v1279, v1280, v1281, v1282, v1283, v1284, v1285);
  v1286 = (RestrictionMaster_o *)sub_1C22084(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1286, 0LL);
  if ( v1286 )
  {
    v3 = sub_1C21F74(v1286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1601;
  v1->m_Items[183] = (DataMasterBase_o *)v1286;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[183], (int64_t)v1286, v1287, v1288, v1289, v1290, v1291, v1292);
  v1293 = (QuestRestrictionMaster_o *)sub_1C22084(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1293, 0LL);
  if ( v1293 )
  {
    v3 = sub_1C21F74(v1293, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1601;
  v1->m_Items[184] = (DataMasterBase_o *)v1293;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[184], (int64_t)v1293, v1294, v1295, v1296, v1297, v1298, v1299);
  v1300 = (ServantVoiceRelationMaster_o *)sub_1C22084(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1300, 0LL);
  if ( v1300 )
  {
    v3 = sub_1C21F74(v1300, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1601;
  v1->m_Items[185] = (DataMasterBase_o *)v1300;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[185], (int64_t)v1300, v1301, v1302, v1303, v1304, v1305, v1306);
  v1307 = (ShopDetailMaster_o *)sub_1C22084(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1307, 0LL);
  if ( v1307 )
  {
    v3 = sub_1C21F74(v1307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1601;
  v1->m_Items[186] = (DataMasterBase_o *)v1307;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[186], (int64_t)v1307, v1308, v1309, v1310, v1311, v1312, v1313);
  v1314 = (ServantScriptAddMaster_o *)sub_1C22084(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1314, 0LL);
  if ( v1314 )
  {
    v3 = sub_1C21F74(v1314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1601;
  v1->m_Items[187] = (DataMasterBase_o *)v1314;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[187], (int64_t)v1314, v1315, v1316, v1317, v1318, v1319, v1320);
  v1321 = (CombineMaster_o *)sub_1C22084(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1321, 0LL);
  if ( v1321 )
  {
    v3 = sub_1C21F74(v1321, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1601;
  v1->m_Items[188] = (DataMasterBase_o *)v1321;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[188], (int64_t)v1321, v1322, v1323, v1324, v1325, v1326, v1327);
  v1328 = (AiFieldMaster_o *)sub_1C22084(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1328, 0LL);
  if ( v1328 )
  {
    v3 = sub_1C21F74(v1328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1601;
  v1->m_Items[189] = (DataMasterBase_o *)v1328;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[189], (int64_t)v1328, v1329, v1330, v1331, v1332, v1333, v1334);
  v1335 = (ServantCommentAddMaster_o *)sub_1C22084(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1335, 0LL);
  if ( v1335 )
  {
    v3 = sub_1C21F74(v1335, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1601;
  v1->m_Items[190] = (DataMasterBase_o *)v1335;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[190], (int64_t)v1335, v1336, v1337, v1338, v1339, v1340, v1341);
  v1342 = (EventFilterMaster_o *)sub_1C22084(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1342, 0LL);
  if ( v1342 )
  {
    v3 = sub_1C21F74(v1342, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1601;
  v1->m_Items[191] = (DataMasterBase_o *)v1342;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[191], (int64_t)v1342, v1343, v1344, v1345, v1346, v1347, v1348);
  v1349 = (UserSupportDeckMaster_o *)sub_1C22084(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1349, 0LL);
  if ( v1349 )
  {
    v3 = sub_1C21F74(v1349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1601;
  v1->m_Items[192] = (DataMasterBase_o *)v1349;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[192], (int64_t)v1349, v1350, v1351, v1352, v1353, v1354, v1355);
  v1356 = (EventRewardSceneMaster_o *)sub_1C22084(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1356, 0LL);
  if ( v1356 )
  {
    v3 = sub_1C21F74(v1356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1601;
  v1->m_Items[193] = (DataMasterBase_o *)v1356;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[193], (int64_t)v1356, v1357, v1358, v1359, v1360, v1361, v1362);
  v1363 = (EventVoicePlayMaster_o *)sub_1C22084(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1363, 0LL);
  if ( v1363 )
  {
    v3 = sub_1C21F74(v1363, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1601;
  v1->m_Items[194] = (DataMasterBase_o *)v1363;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[194], (int64_t)v1363, v1364, v1365, v1366, v1367, v1368, v1369);
  v1370 = (GachaSubMaster_o *)sub_1C22084(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1370, 0LL);
  if ( v1370 )
  {
    v3 = sub_1C21F74(v1370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1601;
  v1->m_Items[195] = (DataMasterBase_o *)v1370;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[195], (int64_t)v1370, v1371, v1372, v1373, v1374, v1375, v1376);
  v1377 = (GachaDetailMaster_o *)sub_1C22084(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1377, 0LL);
  if ( v1377 )
  {
    v3 = sub_1C21F74(v1377, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1601;
  v1->m_Items[196] = (DataMasterBase_o *)v1377;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[196], (int64_t)v1377, v1378, v1379, v1380, v1381, v1382, v1383);
  v1384 = (GachaBaseCollateralMaster_o *)sub_1C22084(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1384, 0LL);
  if ( v1384 )
  {
    v3 = sub_1C21F74(v1384, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1601;
  v1->m_Items[197] = (DataMasterBase_o *)v1384;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[197], (int64_t)v1384, v1385, v1386, v1387, v1388, v1389, v1390);
  v1391 = (GachaAdjustAddMaster_o *)sub_1C22084(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1391, 0LL);
  if ( v1391 )
  {
    v3 = sub_1C21F74(v1391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1601;
  v1->m_Items[198] = (DataMasterBase_o *)v1391;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[198], (int64_t)v1391, v1392, v1393, v1394, v1395, v1396, v1397);
  v1398 = (GachaBonusSelectMaster_o *)sub_1C22084(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1398, 0LL);
  if ( v1398 )
  {
    v3 = sub_1C21F74(v1398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1601;
  v1->m_Items[199] = (DataMasterBase_o *)v1398;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[199], (int64_t)v1398, v1399, v1400, v1401, v1402, v1403, v1404);
  v1405 = (GachaBonusSelectLineupMaster_o *)sub_1C22084(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1405, 0LL);
  if ( v1405 )
  {
    v3 = sub_1C21F74(v1405, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1601;
  v1->m_Items[200] = (DataMasterBase_o *)v1405;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[200], (int64_t)v1405, v1406, v1407, v1408, v1409, v1410, v1411);
  v1412 = (ServantChangeMaster_o *)sub_1C22084(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1412, 0LL);
  if ( v1412 )
  {
    v3 = sub_1C21F74(v1412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1601;
  v1->m_Items[201] = (DataMasterBase_o *)v1412;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[201], (int64_t)v1412, v1413, v1414, v1415, v1416, v1417, v1418);
  v1419 = (VoiceCondMaster_o *)sub_1C22084(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1419, 0LL);
  if ( v1419 )
  {
    v3 = sub_1C21F74(v1419, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1601;
  v1->m_Items[202] = (DataMasterBase_o *)v1419;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[202], (int64_t)v1419, v1420, v1421, v1422, v1423, v1424, v1425);
  v1426 = (BgmReleaseMaster_o *)sub_1C22084(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1426, 0LL);
  if ( v1426 )
  {
    v3 = sub_1C21F74(v1426, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1601;
  v1->m_Items[203] = (DataMasterBase_o *)v1426;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[203], (int64_t)v1426, v1427, v1428, v1429, v1430, v1431, v1432);
  v1433 = (MyRoomAddMaster_o *)sub_1C22084(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1433, 0LL);
  if ( v1433 )
  {
    v3 = sub_1C21F74(v1433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1601;
  v1->m_Items[204] = (DataMasterBase_o *)v1433;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[204], (int64_t)v1433, v1434, v1435, v1436, v1437, v1438, v1439);
  v1440 = (ShopActionMaster_o *)sub_1C22084(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1440, 0LL);
  if ( v1440 )
  {
    v3 = sub_1C21F74(v1440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1601;
  v1->m_Items[205] = (DataMasterBase_o *)v1440;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[205], (int64_t)v1440, v1441, v1442, v1443, v1444, v1445, v1446);
  v1447 = (EventRewardSceneReleaseMaster_o *)sub_1C22084(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1447, 0LL);
  if ( v1447 )
  {
    v3 = sub_1C21F74(v1447, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1601;
  v1->m_Items[206] = (DataMasterBase_o *)v1447;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[206], (int64_t)v1447, v1448, v1449, v1450, v1451, v1452, v1453);
  v1454 = (QuestBehaviorMaster_o *)sub_1C22084(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1454, 0LL);
  if ( v1454 )
  {
    v3 = sub_1C21F74(v1454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1601;
  v1->m_Items[207] = (DataMasterBase_o *)v1454;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[207], (int64_t)v1454, v1455, v1456, v1457, v1458, v1459, v1460);
  v1461 = (MapMaster_o *)sub_1C22084(MapMaster_TypeInfo);
  MapMaster___ctor(v1461, 0LL);
  if ( v1461 )
  {
    v3 = sub_1C21F74(v1461, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1601;
  v1->m_Items[208] = (DataMasterBase_o *)v1461;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[208], (int64_t)v1461, v1462, v1463, v1464, v1465, v1466, v1467);
  v1468 = (MapCondMaster_o *)sub_1C22084(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1468, 0LL);
  if ( v1468 )
  {
    v3 = sub_1C21F74(v1468, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1601;
  v1->m_Items[209] = (DataMasterBase_o *)v1468;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[209], (int64_t)v1468, v1469, v1470, v1471, v1472, v1473, v1474);
  v1475 = (MapButtonMaster_o *)sub_1C22084(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1475, 0LL);
  if ( v1475 )
  {
    v3 = sub_1C21F74(v1475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1601;
  v1->m_Items[210] = (DataMasterBase_o *)v1475;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[210], (int64_t)v1475, v1476, v1477, v1478, v1479, v1480, v1481);
  v1482 = (BannerAddMaster_o *)sub_1C22084(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1482, 0LL);
  if ( v1482 )
  {
    v3 = sub_1C21F74(v1482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1601;
  v1->m_Items[211] = (DataMasterBase_o *)v1482;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[211], (int64_t)v1482, v1483, v1484, v1485, v1486, v1487, v1488);
  v1489 = (EventAddMaster_o *)sub_1C22084(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1489, 0LL);
  if ( v1489 )
  {
    v3 = sub_1C21F74(v1489, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1601;
  v1->m_Items[212] = (DataMasterBase_o *)v1489;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[212], (int64_t)v1489, v1490, v1491, v1492, v1493, v1494, v1495);
  v1496 = (TotalLoginMaster_o *)sub_1C22084(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1496, 0LL);
  if ( v1496 )
  {
    v3 = sub_1C21F74(v1496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1601;
  v1->m_Items[213] = (DataMasterBase_o *)v1496;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[213], (int64_t)v1496, v1497, v1498, v1499, v1500, v1501, v1502);
  v1503 = (ServantFilterMaster_o *)sub_1C22084(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1503, 0LL);
  if ( v1503 )
  {
    v3 = sub_1C21F74(v1503, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1601;
  v1->m_Items[214] = (DataMasterBase_o *)v1503;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[214], (int64_t)v1503, v1504, v1505, v1506, v1507, v1508, v1509);
  v1510 = (CombineCostumeMaster_o *)sub_1C22084(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1510, 0LL);
  if ( v1510 )
  {
    v3 = sub_1C21F74(v1510, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1601;
  v1->m_Items[215] = (DataMasterBase_o *)v1510;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[215], (int64_t)v1510, v1511, v1512, v1513, v1514, v1515, v1516);
  v1517 = (ServantCostumeMaster_o *)sub_1C22084(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1517, 0LL);
  if ( v1517 )
  {
    v3 = sub_1C21F74(v1517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1601;
  v1->m_Items[216] = (DataMasterBase_o *)v1517;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[216], (int64_t)v1517, v1518, v1519, v1520, v1521, v1522, v1523);
  v1524 = (ServantCostumeReleaseMaster_o *)sub_1C22084(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1524, 0LL);
  if ( v1524 )
  {
    v3 = sub_1C21F74(v1524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1601;
  v1->m_Items[217] = (DataMasterBase_o *)v1524;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[217], (int64_t)v1524, v1525, v1526, v1527, v1528, v1529, v1530);
  v1531 = (UserFriendRequestHistoryMaster_o *)sub_1C22084(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1531, 0LL);
  if ( v1531 )
  {
    v3 = sub_1C21F74(v1531, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1601;
  v1->m_Items[218] = (DataMasterBase_o *)v1531;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[218], (int64_t)v1531, v1532, v1533, v1534, v1535, v1536, v1537);
  v1538 = (UserBlacklistMaster_o *)sub_1C22084(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1538, 0LL);
  if ( v1538 )
  {
    v3 = sub_1C21F74(v1538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1601;
  v1->m_Items[219] = (DataMasterBase_o *)v1538;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[219], (int64_t)v1538, v1539, v1540, v1541, v1542, v1543, v1544);
  v1545 = (ItemSelectMaster_o *)sub_1C22084(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1545, 0LL);
  if ( v1545 )
  {
    v3 = sub_1C21F74(v1545, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1601;
  v1->m_Items[220] = (DataMasterBase_o *)v1545;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[220], (int64_t)v1545, v1546, v1547, v1548, v1549, v1550, v1551);
  v1552 = (TotalEventRaceMaster_o *)sub_1C22084(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1552, 0LL);
  if ( v1552 )
  {
    v3 = sub_1C21F74(v1552, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1601;
  v1->m_Items[221] = (DataMasterBase_o *)v1552;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[221], (int64_t)v1552, v1553, v1554, v1555, v1556, v1557, v1558);
  v1559 = (EventPointGroupAddMaster_o *)sub_1C22084(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1559, 0LL);
  if ( v1559 )
  {
    v3 = sub_1C21F74(v1559, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1601;
  v1->m_Items[222] = (DataMasterBase_o *)v1559;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[222], (int64_t)v1559, v1560, v1561, v1562, v1563, v1564, v1565);
  v1566 = (VoicePlayGroupMaster_o *)sub_1C22084(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1566, 0LL);
  if ( v1566 )
  {
    v3 = sub_1C21F74(v1566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1601;
  v1->m_Items[223] = (DataMasterBase_o *)v1566;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[223], (int64_t)v1566, v1567, v1568, v1569, v1570, v1571, v1572);
  v1573 = (VoicePlayCondMaster_o *)sub_1C22084(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1573, 0LL);
  if ( v1573 )
  {
    v3 = sub_1C21F74(v1573, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1601;
  v1->m_Items[224] = (DataMasterBase_o *)v1573;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[224], (int64_t)v1573, v1574, v1575, v1576, v1577, v1578, v1579);
  v1580 = (GachaStoryAdjustMaster_o *)sub_1C22084(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1580, 0LL);
  if ( v1580 )
  {
    v3 = sub_1C21F74(v1580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1601;
  v1->m_Items[225] = (DataMasterBase_o *)v1580;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[225], (int64_t)v1580, v1581, v1582, v1583, v1584, v1585, v1586);
  v1587 = (ServantFlagMaster_o *)sub_1C22084(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1587, 0LL);
  if ( v1587 )
  {
    v3 = sub_1C21F74(v1587, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1601;
  v1->m_Items[226] = (DataMasterBase_o *)v1587;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[226], (int64_t)v1587, v1588, v1589, v1590, v1591, v1592, v1593);
  v1594 = (ServantFlagReleaseMaster_o *)sub_1C22084(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1594, 0LL);
  if ( v1594 )
  {
    v3 = sub_1C21F74(v1594, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1601;
  v1->m_Items[227] = (DataMasterBase_o *)v1594;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[227], (int64_t)v1594, v1595, v1596, v1597, v1598, v1599, v1600);
  v1601 = (EventLocationCampaignMaster_o *)sub_1C22084(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1601, 0LL);
  if ( v1601 )
  {
    v3 = sub_1C21F74(v1601, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1601;
  v1->m_Items[228] = (DataMasterBase_o *)v1601;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[228], (int64_t)v1601, v1602, v1603, v1604, v1605, v1606, v1607);
  v1608 = (CampaignInfoMaster_o *)sub_1C22084(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1608, 0LL);
  if ( v1608 )
  {
    v3 = sub_1C21F74(v1608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1601;
  v1->m_Items[229] = (DataMasterBase_o *)v1608;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[229], (int64_t)v1608, v1609, v1610, v1611, v1612, v1613, v1614);
  v1615 = (DialogMessageMaster_o *)sub_1C22084(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1615, 0LL);
  if ( v1615 )
  {
    v3 = sub_1C21F74(v1615, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1601;
  v1->m_Items[230] = (DataMasterBase_o *)v1615;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[230], (int64_t)v1615, v1616, v1617, v1618, v1619, v1620, v1621);
  v1622 = (ServantIndividualityMaster_o *)sub_1C22084(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1622, 0LL);
  if ( v1622 )
  {
    v3 = sub_1C21F74(v1622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1601;
  v1->m_Items[231] = (DataMasterBase_o *)v1622;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[231], (int64_t)v1622, v1623, v1624, v1625, v1626, v1627, v1628);
  v1629 = (BoardMessageMaster_o *)sub_1C22084(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1629, 0LL);
  if ( v1629 )
  {
    v3 = sub_1C21F74(v1629, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1601;
  v1->m_Items[232] = (DataMasterBase_o *)v1629;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[232], (int64_t)v1629, v1630, v1631, v1632, v1633, v1634, v1635);
  v1636 = (BoardMessageReleaseMaster_o *)sub_1C22084(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1636, 0LL);
  if ( v1636 )
  {
    v3 = sub_1C21F74(v1636, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1601;
  v1->m_Items[233] = (DataMasterBase_o *)v1636;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[233], (int64_t)v1636, v1637, v1638, v1639, v1640, v1641, v1642);
  v1643 = (EventServantFatigueMaster_o *)sub_1C22084(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1643, 0LL);
  if ( v1643 )
  {
    v3 = sub_1C21F74(v1643, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1601;
  v1->m_Items[234] = (DataMasterBase_o *)v1643;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[234], (int64_t)v1643, v1644, v1645, v1646, v1647, v1648, v1649);
  v1650 = (UserEventDeckMaster_o *)sub_1C22084(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1650, 0LL);
  if ( v1650 )
  {
    v3 = sub_1C21F74(v1650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1601;
  v1->m_Items[235] = (DataMasterBase_o *)v1650;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[235], (int64_t)v1650, v1651, v1652, v1653, v1654, v1655, v1656);
  v1657 = (EventTowerMaster_o *)sub_1C22084(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1657, 0LL);
  if ( v1657 )
  {
    v3 = sub_1C21F74(v1657, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1601;
  v1->m_Items[236] = (DataMasterBase_o *)v1657;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[236], (int64_t)v1657, v1658, v1659, v1660, v1661, v1662, v1663);
  v1664 = (EventTowerRewardMaster_o *)sub_1C22084(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1664, 0LL);
  if ( v1664 )
  {
    v3 = sub_1C21F74(v1664, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1601;
  v1->m_Items[237] = (DataMasterBase_o *)v1664;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[237], (int64_t)v1664, v1665, v1666, v1667, v1668, v1669, v1670);
  v1671 = (EventBulletinBoardMaster_o *)sub_1C22084(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1671, 0LL);
  if ( v1671 )
  {
    v3 = sub_1C21F74(v1671, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1601;
  v1->m_Items[238] = (DataMasterBase_o *)v1671;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[238], (int64_t)v1671, v1672, v1673, v1674, v1675, v1676, v1677);
  v1678 = (EventBulletinBoardReleaseMaster_o *)sub_1C22084(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1678, 0LL);
  if ( v1678 )
  {
    v3 = sub_1C21F74(v1678, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1601;
  v1->m_Items[239] = (DataMasterBase_o *)v1678;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[239], (int64_t)v1678, v1679, v1680, v1681, v1682, v1683, v1684);
  v1685 = (EventFactoryMaster_o *)sub_1C22084(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1685, 0LL);
  if ( v1685 )
  {
    v3 = sub_1C21F74(v1685, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1601;
  v1->m_Items[240] = (DataMasterBase_o *)v1685;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[240], (int64_t)v1685, v1686, v1687, v1688, v1689, v1690, v1691);
  v1692 = (ShopGroupMaster_o *)sub_1C22084(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1692, 0LL);
  if ( v1692 )
  {
    v3 = sub_1C21F74(v1692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1601;
  v1->m_Items[241] = (DataMasterBase_o *)v1692;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[241], (int64_t)v1692, v1693, v1694, v1695, v1696, v1697, v1698);
  v1699 = (AuraEffectMaster_o *)sub_1C22084(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1699, 0LL);
  if ( v1699 )
  {
    v3 = sub_1C21F74(v1699, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1601;
  v1->m_Items[242] = (DataMasterBase_o *)v1699;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[242], (int64_t)v1699, v1700, v1701, v1702, v1703, v1704, v1705);
  v1706 = (AuraEffectPosOverwriteMaster_o *)sub_1C22084(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1706, 0LL);
  if ( v1706 )
  {
    v3 = sub_1C21F74(v1706, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1601;
  v1->m_Items[243] = (DataMasterBase_o *)v1706;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[243], (int64_t)v1706, v1707, v1708, v1709, v1710, v1711, v1712);
  v1713 = (UserEventMissionFixMaster_o *)sub_1C22084(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1713, 0LL);
  if ( v1713 )
  {
    v3 = sub_1C21F74(v1713, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1601;
  v1->m_Items[244] = (DataMasterBase_o *)v1713;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[244], (int64_t)v1713, v1714, v1715, v1716, v1717, v1718, v1719);
  v1720 = (NotEndEventMissionFixMaster_o *)sub_1C22084(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1720, 0LL);
  if ( v1720 )
  {
    v3 = sub_1C21F74(v1720, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1601;
  v1->m_Items[245] = (DataMasterBase_o *)v1720;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[245], (int64_t)v1720, v1721, v1722, v1723, v1724, v1725, v1726);
  v1727 = (EnemyMstMaster_o *)sub_1C22084(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1727, 0LL);
  if ( v1727 )
  {
    v3 = sub_1C21F74(v1727, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1601;
  v1->m_Items[246] = (DataMasterBase_o *)v1727;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[246], (int64_t)v1727, v1728, v1729, v1730, v1731, v1732, v1733);
  v1734 = (EnemyMstBattleMaster_o *)sub_1C22084(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1734, 0LL);
  if ( v1734 )
  {
    v3 = sub_1C21F74(v1734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1601;
  v1->m_Items[247] = (DataMasterBase_o *)v1734;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[247], (int64_t)v1734, v1735, v1736, v1737, v1738, v1739, v1740);
  v1741 = (ServantSkillReleaseMaster_o *)sub_1C22084(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1741, 0LL);
  if ( v1741 )
  {
    v3 = sub_1C21F74(v1741, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1601;
  v1->m_Items[248] = (DataMasterBase_o *)v1741;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[248], (int64_t)v1741, v1742, v1743, v1744, v1745, v1746, v1747);
  v1748 = (ServantPassiveSkillReleaseMaster_o *)sub_1C22084(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1748, 0LL);
  if ( v1748 )
  {
    v3 = sub_1C21F74(v1748, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1601;
  v1->m_Items[249] = (DataMasterBase_o *)v1748;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[249], (int64_t)v1748, v1749, v1750, v1751, v1752, v1753, v1754);
  v1755 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C22084(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1755, 0LL);
  if ( v1755 )
  {
    v3 = sub_1C21F74(v1755, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1601;
  v1->m_Items[250] = (DataMasterBase_o *)v1755;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[250], (int64_t)v1755, v1756, v1757, v1758, v1759, v1760, v1761);
  v1762 = (MapGimmickReleaseMaster_o *)sub_1C22084(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1762, 0LL);
  if ( v1762 )
  {
    v3 = sub_1C21F74(v1762, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1601;
  v1->m_Items[251] = (DataMasterBase_o *)v1762;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[251], (int64_t)v1762, v1763, v1764, v1765, v1766, v1767, v1768);
  v1769 = (CommandCodeMaster_o *)sub_1C22084(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1769, 0LL);
  if ( v1769 )
  {
    v3 = sub_1C21F74(v1769, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1601;
  v1->m_Items[252] = (DataMasterBase_o *)v1769;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[252], (int64_t)v1769, v1770, v1771, v1772, v1773, v1774, v1775);
  v1776 = (ServantCommandCodeUnlockMaster_o *)sub_1C22084(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1776, 0LL);
  if ( v1776 )
  {
    v3 = sub_1C21F74(v1776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1601;
  v1->m_Items[253] = (DataMasterBase_o *)v1776;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[253], (int64_t)v1776, v1777, v1778, v1779, v1780, v1781, v1782);
  v1783 = (UserCommandCodeMaster_o *)sub_1C22084(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1783, 0LL);
  if ( v1783 )
  {
    v3 = sub_1C21F74(v1783, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1601;
  v1->m_Items[254] = (DataMasterBase_o *)v1783;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[254], (int64_t)v1783, v1784, v1785, v1786, v1787, v1788, v1789);
  v1790 = (UserCommandCodeCollectionMaster_o *)sub_1C22084(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1790, 0LL);
  if ( v1790 )
  {
    v3 = sub_1C21F74(v1790, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1601;
  v1->m_Items[255] = (DataMasterBase_o *)v1790;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[255], (int64_t)v1790, v1791, v1792, v1793, v1794, v1795, v1796);
  v1797 = (UserServantCommandCodeMaster_o *)sub_1C22084(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1797, 0LL);
  if ( v1797 )
  {
    v3 = sub_1C21F74(v1797, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1601;
  v1->m_Items[256] = (DataMasterBase_o *)v1797;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[256], (int64_t)v1797, v1798, v1799, v1800, v1801, v1802, v1803);
  v1804 = (UserServantCommandCardMaster_o *)sub_1C22084(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1804, 0LL);
  if ( v1804 )
  {
    v3 = sub_1C21F74(v1804, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1601;
  v1->m_Items[257] = (DataMasterBase_o *)v1804;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[257], (int64_t)v1804, v1805, v1806, v1807, v1808, v1809, v1810);
  v1811 = (CommandCardRankParamMaster_o *)sub_1C22084(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1811, 0LL);
  if ( v1811 )
  {
    v3 = sub_1C21F74(v1811, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1601;
  v1->m_Items[258] = (DataMasterBase_o *)v1811;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[258], (int64_t)v1811, v1812, v1813, v1814, v1815, v1816, v1817);
  v1818 = (CommandCodeSkillMaster_o *)sub_1C22084(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1818, 0LL);
  if ( v1818 )
  {
    v3 = sub_1C21F74(v1818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1601;
  v1->m_Items[259] = (DataMasterBase_o *)v1818;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[259], (int64_t)v1818, v1819, v1820, v1821, v1822, v1823, v1824);
  v1825 = (CommandCodeSkillReleaseMaster_o *)sub_1C22084(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1825, 0LL);
  if ( v1825 )
  {
    v3 = sub_1C21F74(v1825, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1601;
  v1->m_Items[260] = (DataMasterBase_o *)v1825;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[260], (int64_t)v1825, v1826, v1827, v1828, v1829, v1830, v1831);
  v1832 = (CommandCodeCommentMaster_o *)sub_1C22084(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1832, 0LL);
  if ( v1832 )
  {
    v3 = sub_1C21F74(v1832, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1601;
  v1->m_Items[261] = (DataMasterBase_o *)v1832;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[261], (int64_t)v1832, v1833, v1834, v1835, v1836, v1837, v1838);
  v1839 = (EventStatusMaster_o *)sub_1C22084(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1839, 0LL);
  if ( v1839 )
  {
    v3 = sub_1C21F74(v1839, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1601;
  v1->m_Items[262] = (DataMasterBase_o *)v1839;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[262], (int64_t)v1839, v1840, v1841, v1842, v1843, v1844, v1845);
  v1846 = (EventStatusQuestMaster_o *)sub_1C22084(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1846, 0LL);
  if ( v1846 )
  {
    v3 = sub_1C21F74(v1846, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1601;
  v1->m_Items[263] = (DataMasterBase_o *)v1846;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[263], (int64_t)v1846, v1847, v1848, v1849, v1850, v1851, v1852);
  v1853 = (CommonRestrictionMaster_o *)sub_1C22084(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1853, 0LL);
  if ( v1853 )
  {
    v3 = sub_1C21F74(v1853, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1601;
  v1->m_Items[264] = (DataMasterBase_o *)v1853;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[264], (int64_t)v1853, v1854, v1855, v1856, v1857, v1858, v1859);
  v1860 = (EventPointBuffMaster_o *)sub_1C22084(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1860, 0LL);
  if ( v1860 )
  {
    v3 = sub_1C21F74(v1860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1601;
  v1->m_Items[265] = (DataMasterBase_o *)v1860;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[265], (int64_t)v1860, v1861, v1862, v1863, v1864, v1865, v1866);
  v1867 = (UserFollowMaster_o *)sub_1C22084(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1867, 0LL);
  if ( v1867 )
  {
    v3 = sub_1C21F74(v1867, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1601;
  v1->m_Items[266] = (DataMasterBase_o *)v1867;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[266], (int64_t)v1867, v1868, v1869, v1870, v1871, v1872, v1873);
  v1874 = (EventRewardGuideReleaseMaster_o *)sub_1C22084(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1874, 0LL);
  if ( v1874 )
  {
    v3 = sub_1C21F74(v1874, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1601;
  v1->m_Items[267] = (DataMasterBase_o *)v1874;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[267], (int64_t)v1874, v1875, v1876, v1877, v1878, v1879, v1880);
  v1881 = (NpcServantEquipMaster_o *)sub_1C22084(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1881, 0LL);
  if ( v1881 )
  {
    v3 = sub_1C21F74(v1881, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1601;
  v1->m_Items[268] = (DataMasterBase_o *)v1881;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[268], (int64_t)v1881, v1882, v1883, v1884, v1885, v1886, v1887);
  v1888 = (EventCampaignReleaseMaster_o *)sub_1C22084(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1888, 0LL);
  if ( v1888 )
  {
    v3 = sub_1C21F74(v1888, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1601;
  v1->m_Items[269] = (DataMasterBase_o *)v1888;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[269], (int64_t)v1888, v1889, v1890, v1891, v1892, v1893, v1894);
  v1895 = (ServantMaterialFolderMaster_o *)sub_1C22084(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1895, 0LL);
  if ( v1895 )
  {
    v3 = sub_1C21F74(v1895, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1601;
  v1->m_Items[270] = (DataMasterBase_o *)v1895;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[270], (int64_t)v1895, v1896, v1897, v1898, v1899, v1900, v1901);
  v1902 = (EventEquipSkillReleaseMaster_o *)sub_1C22084(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1902, 0LL);
  if ( v1902 )
  {
    v3 = sub_1C21F74(v1902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1601;
  v1->m_Items[271] = (DataMasterBase_o *)v1902;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[271], (int64_t)v1902, v1903, v1904, v1905, v1906, v1907, v1908);
  v1909 = (EventPointActivityMaster_o *)sub_1C22084(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1909, 0LL);
  if ( v1909 )
  {
    v3 = sub_1C21F74(v1909, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1601;
  v1->m_Items[272] = (DataMasterBase_o *)v1909;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[272], (int64_t)v1909, v1910, v1911, v1912, v1913, v1914, v1915);
  v1916 = (FunctionCategoryMaster_o *)sub_1C22084(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1916, 0LL);
  if ( v1916 )
  {
    v3 = sub_1C21F74(v1916, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1601;
  v1->m_Items[273] = (DataMasterBase_o *)v1916;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[273], (int64_t)v1916, v1917, v1918, v1919, v1920, v1921, v1922);
  v1923 = (QuestPickupMaster_o *)sub_1C22084(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1923, 0LL);
  if ( v1923 )
  {
    v3 = sub_1C21F74(v1923, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1601;
  v1->m_Items[274] = (DataMasterBase_o *)v1923;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[274], (int64_t)v1923, v1924, v1925, v1926, v1927, v1928, v1929);
  v1930 = (EventUiMaster_o *)sub_1C22084(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1930, 0LL);
  if ( v1930 )
  {
    v3 = sub_1C21F74(v1930, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1601;
  v1->m_Items[275] = (DataMasterBase_o *)v1930;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[275], (int64_t)v1930, v1931, v1932, v1933, v1934, v1935, v1936);
  v1937 = (EventUiReleaseMaster_o *)sub_1C22084(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1937, 0LL);
  if ( v1937 )
  {
    v3 = sub_1C21F74(v1937, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1601;
  v1->m_Items[276] = (DataMasterBase_o *)v1937;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[276], (int64_t)v1937, v1938, v1939, v1940, v1941, v1942, v1943);
  v1944 = (EventUiValueMaster_o *)sub_1C22084(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1944, 0LL);
  if ( v1944 )
  {
    v3 = sub_1C21F74(v1944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1601;
  v1->m_Items[277] = (DataMasterBase_o *)v1944;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[277], (int64_t)v1944, v1945, v1946, v1947, v1948, v1949, v1950);
  v1951 = (EventConquestRewardMaster_o *)sub_1C22084(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1951, 0LL);
  if ( v1951 )
  {
    v3 = sub_1C21F74(v1951, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1601;
  v1->m_Items[278] = (DataMasterBase_o *)v1951;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[278], (int64_t)v1951, v1952, v1953, v1954, v1955, v1956, v1957);
  v1958 = (NpcFollowerReleaseMaster_o *)sub_1C22084(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1958, 0LL);
  if ( v1958 )
  {
    v3 = sub_1C21F74(v1958, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1601;
  v1->m_Items[279] = (DataMasterBase_o *)v1958;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[279], (int64_t)v1958, v1959, v1960, v1961, v1962, v1963, v1964);
  v1965 = (EventBonusFilterMaster_o *)sub_1C22084(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1965, 0LL);
  if ( v1965 )
  {
    v3 = sub_1C21F74(v1965, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1601;
  v1->m_Items[280] = (DataMasterBase_o *)v1965;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[280], (int64_t)v1965, v1966, v1967, v1968, v1969, v1970, v1971);
  v1972 = (EventBonusFilterGroupInfoMaster_o *)sub_1C22084(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1972, 0LL);
  if ( v1972 )
  {
    v3 = sub_1C21F74(v1972, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1601;
  v1->m_Items[281] = (DataMasterBase_o *)v1972;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[281], (int64_t)v1972, v1973, v1974, v1975, v1976, v1977, v1978);
  v1979 = (EventBonusFilterGroupMemberMaster_o *)sub_1C22084(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1979, 0LL);
  if ( v1979 )
  {
    v3 = sub_1C21F74(v1979, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1601;
  v1->m_Items[282] = (DataMasterBase_o *)v1979;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[282], (int64_t)v1979, v1980, v1981, v1982, v1983, v1984, v1985);
  v1986 = (UserGachaExtraCountMaster_o *)sub_1C22084(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1986, 0LL);
  if ( v1986 )
  {
    v3 = sub_1C21F74(v1986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1601;
  v1->m_Items[283] = (DataMasterBase_o *)v1986;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[283], (int64_t)v1986, v1987, v1988, v1989, v1990, v1991, v1992);
  v1993 = (PrivilegeMaster_o *)sub_1C22084(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1993, 0LL);
  if ( v1993 )
  {
    v3 = sub_1C21F74(v1993, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1601;
  v1->m_Items[284] = (DataMasterBase_o *)v1993;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[284], (int64_t)v1993, v1994, v1995, v1996, v1997, v1998, v1999);
  v2000 = (UserPrivilegeMaster_o *)sub_1C22084(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v2000, 0LL);
  if ( v2000 )
  {
    v3 = sub_1C21F74(v2000, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1601;
  v1->m_Items[285] = (DataMasterBase_o *)v2000;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[285], (int64_t)v2000, v2001, v2002, v2003, v2004, v2005, v2006);
  v2007 = (UserQuestRouteMaster_o *)sub_1C22084(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v2007, 0LL);
  if ( v2007 )
  {
    v3 = sub_1C21F74(v2007, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1601;
  v1->m_Items[286] = (DataMasterBase_o *)v2007;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[286], (int64_t)v2007, v2008, v2009, v2010, v2011, v2012, v2013);
  v2014 = (EventBossStatusUiMaster_o *)sub_1C22084(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v2014, 0LL);
  if ( v2014 )
  {
    v3 = sub_1C21F74(v2014, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1601;
  v1->m_Items[287] = (DataMasterBase_o *)v2014;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[287], (int64_t)v2014, v2015, v2016, v2017, v2018, v2019, v2020);
  v2021 = (CommonReleaseMaster_o *)sub_1C22084(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v2021, 0LL);
  if ( v2021 )
  {
    v3 = sub_1C21F74(v2021, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1601;
  v1->m_Items[288] = (DataMasterBase_o *)v2021;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[288], (int64_t)v2021, v2022, v2023, v2024, v2025, v2026, v2027);
  v2028 = (QuestSpotReleaseMaster_o *)sub_1C22084(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v2028, 0LL);
  if ( v2028 )
  {
    v3 = sub_1C21F74(v2028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1601;
  v1->m_Items[289] = (DataMasterBase_o *)v2028;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[289], (int64_t)v2028, v2029, v2030, v2031, v2032, v2033, v2034);
  v2035 = (VoiceMaterialCondMaster_o *)sub_1C22084(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v2035, 0LL);
  if ( v2035 )
  {
    v3 = sub_1C21F74(v2035, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1601;
  v1->m_Items[290] = (DataMasterBase_o *)v2035;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[290], (int64_t)v2035, v2036, v2037, v2038, v2039, v2040, v2041);
  v2042 = (ClassRelationOverwriteMaster_o *)sub_1C22084(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v2042, 0LL);
  if ( v2042 )
  {
    v3 = sub_1C21F74(v2042, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1601;
  v1->m_Items[291] = (DataMasterBase_o *)v2042;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[291], (int64_t)v2042, v2043, v2044, v2045, v2046, v2047, v2048);
  v2049 = (EventGroupMaster_o *)sub_1C22084(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v2049, 0LL);
  if ( v2049 )
  {
    v3 = sub_1C21F74(v2049, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1601;
  v1->m_Items[292] = (DataMasterBase_o *)v2049;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[292], (int64_t)v2049, v2050, v2051, v2052, v2053, v2054, v2055);
  v2056 = (TotalBoxGachaMaster_o *)sub_1C22084(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v2056, 0LL);
  if ( v2056 )
  {
    v3 = sub_1C21F74(v2056, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1601;
  v1->m_Items[293] = (DataMasterBase_o *)v2056;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[293], (int64_t)v2056, v2057, v2058, v2059, v2060, v2061, v2062);
  v2063 = (ServantTreasureDeviceDamageMaster_o *)sub_1C22084(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v2063, 0LL);
  if ( v2063 )
  {
    v3 = sub_1C21F74(v2063, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1601;
  v1->m_Items[294] = (DataMasterBase_o *)v2063;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[294], (int64_t)v2063, v2064, v2065, v2066, v2067, v2068, v2069);
  v2070 = (UserEventServantFatigueMaster_o *)sub_1C22084(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v2070, 0LL);
  if ( v2070 )
  {
    v3 = sub_1C21F74(v2070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1601;
  v1->m_Items[295] = (DataMasterBase_o *)v2070;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[295], (int64_t)v2070, v2071, v2072, v2073, v2074, v2075, v2076);
  v2077 = (EventRewardBgMaster_o *)sub_1C22084(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v2077, 0LL);
  if ( v2077 )
  {
    v3 = sub_1C21F74(v2077, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1601;
  v1->m_Items[296] = (DataMasterBase_o *)v2077;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[296], (int64_t)v2077, v2078, v2079, v2080, v2081, v2082, v2083);
  v2084 = (EventFatigueRecoveryMaster_o *)sub_1C22084(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v2084, 0LL);
  if ( v2084 )
  {
    v3 = sub_1C21F74(v2084, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1601;
  v1->m_Items[297] = (DataMasterBase_o *)v2084;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[297], (int64_t)v2084, v2085, v2086, v2087, v2088, v2089, v2090);
  v2091 = (EventBoostItemUsedMaster_o *)sub_1C22084(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v2091, 0LL);
  if ( v2091 )
  {
    v3 = sub_1C21F74(v2091, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1601;
  v1->m_Items[298] = (DataMasterBase_o *)v2091;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[298], (int64_t)v2091, v2092, v2093, v2094, v2095, v2096, v2097);
  v2098 = (StatusEffectPosOverwriteMaster_o *)sub_1C22084(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v2098, 0LL);
  if ( v2098 )
  {
    v3 = sub_1C21F74(v2098, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1601;
  v1->m_Items[299] = (DataMasterBase_o *)v2098;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[299], (int64_t)v2098, v2099, v2100, v2101, v2102, v2103, v2104);
  v2105 = (QuestPhaseDetailAddMaster_o *)sub_1C22084(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v2105, 0LL);
  if ( v2105 )
  {
    v3 = sub_1C21F74(v2105, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1601;
  v1->m_Items[300] = (DataMasterBase_o *)v2105;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[300], (int64_t)v2105, v2106, v2107, v2108, v2109, v2110, v2111);
  v2112 = (VoiceClosedMessageMaster_o *)sub_1C22084(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v2112, 0LL);
  if ( v2112 )
  {
    v3 = sub_1C21F74(v2112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1601;
  v1->m_Items[301] = (DataMasterBase_o *)v2112;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[301], (int64_t)v2112, v2113, v2114, v2115, v2116, v2117, v2118);
  v2119 = (ReprintStageMaster_o *)sub_1C22084(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v2119, 0LL);
  if ( v2119 )
  {
    v3 = sub_1C21F74(v2119, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1601;
  v1->m_Items[302] = (DataMasterBase_o *)v2119;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[302], (int64_t)v2119, v2120, v2121, v2122, v2123, v2124, v2125);
  v2126 = (UserCombineExpMaster_o *)sub_1C22084(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v2126, 0LL);
  if ( v2126 )
  {
    v3 = sub_1C21F74(v2126, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1601;
  v1->m_Items[303] = (DataMasterBase_o *)v2126;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[303], (int64_t)v2126, v2127, v2128, v2129, v2130, v2131, v2132);
  v2133 = (EventBoardGameCellMaster_o *)sub_1C22084(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v2133, 0LL);
  if ( v2133 )
  {
    v3 = sub_1C21F74(v2133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1601;
  v1->m_Items[304] = (DataMasterBase_o *)v2133;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[304], (int64_t)v2133, v2134, v2135, v2136, v2137, v2138, v2139);
  v2140 = (EventBoardGameTokenMaster_o *)sub_1C22084(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v2140, 0LL);
  if ( v2140 )
  {
    v3 = sub_1C21F74(v2140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1601;
  v1->m_Items[305] = (DataMasterBase_o *)v2140;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[305], (int64_t)v2140, v2141, v2142, v2143, v2144, v2145, v2146);
  v2147 = (EventBoardGameTokenRewardMaster_o *)sub_1C22084(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v2147, 0LL);
  if ( v2147 )
  {
    v3 = sub_1C21F74(v2147, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1601;
  v1->m_Items[306] = (DataMasterBase_o *)v2147;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[306], (int64_t)v2147, v2148, v2149, v2150, v2151, v2152, v2153);
  v2154 = (UserEventBoardGameTokenMaster_o *)sub_1C22084(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v2154, 0LL);
  if ( v2154 )
  {
    v3 = sub_1C21F74(v2154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1601;
  v1->m_Items[307] = (DataMasterBase_o *)v2154;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[307], (int64_t)v2154, v2155, v2156, v2157, v2158, v2159, v2160);
  v2161 = (ServantAnimationOverwriteMaster_o *)sub_1C22084(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v2161, 0LL);
  if ( v2161 )
  {
    v3 = sub_1C21F74(v2161, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1601;
  v1->m_Items[308] = (DataMasterBase_o *)v2161;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[308], (int64_t)v2161, v2162, v2163, v2164, v2165, v2166, v2167);
  v2168 = (OpeningMovieMaster_o *)sub_1C22084(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v2168, 0LL);
  if ( v2168 )
  {
    v3 = sub_1C21F74(v2168, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1601;
  v1->m_Items[309] = (DataMasterBase_o *)v2168;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[309], (int64_t)v2168, v2169, v2170, v2171, v2172, v2173, v2174);
  v2175 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C22084(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v2175, 0LL);
  if ( v2175 )
  {
    v3 = sub_1C21F74(v2175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1601;
  v1->m_Items[310] = (DataMasterBase_o *)v2175;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[310], (int64_t)v2175, v2176, v2177, v2178, v2179, v2180, v2181);
  v2182 = (PickupUserFollowerMaster_o *)sub_1C22084(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v2182, 0LL);
  if ( v2182 )
  {
    v3 = sub_1C21F74(v2182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1601;
  v1->m_Items[311] = (DataMasterBase_o *)v2182;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[311], (int64_t)v2182, v2183, v2184, v2185, v2186, v2187, v2188);
  v2189 = (ServantCollectionMaster_o *)sub_1C22084(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v2189, 0LL);
  if ( v2189 )
  {
    v3 = sub_1C21F74(v2189, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1601;
  v1->m_Items[312] = (DataMasterBase_o *)v2189;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[312], (int64_t)v2189, v2190, v2191, v2192, v2193, v2194, v2195);
  v2196 = (GachaBehaviorMaster_o *)sub_1C22084(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v2196, 0LL);
  if ( v2196 )
  {
    v3 = sub_1C21F74(v2196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1601;
  v1->m_Items[313] = (DataMasterBase_o *)v2196;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[313], (int64_t)v2196, v2197, v2198, v2199, v2200, v2201, v2202);
  v2203 = (EventQuestCooltimeMaster_o *)sub_1C22084(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v2203, 0LL);
  if ( v2203 )
  {
    v3 = sub_1C21F74(v2203, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1601;
  v1->m_Items[314] = (DataMasterBase_o *)v2203;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[314], (int64_t)v2203, v2204, v2205, v2206, v2207, v2208, v2209);
  v2210 = (UserEventQuestCooltimeMaster_o *)sub_1C22084(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v2210, 0LL);
  if ( v2210 )
  {
    v3 = sub_1C21F74(v2210, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1601;
  v1->m_Items[315] = (DataMasterBase_o *)v2210;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[315], (int64_t)v2210, v2211, v2212, v2213, v2214, v2215, v2216);
  v2217 = (BoostMaster_o *)sub_1C22084(BoostMaster_TypeInfo);
  BoostMaster___ctor(v2217, 0LL);
  if ( v2217 )
  {
    v3 = sub_1C21F74(v2217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1601;
  v1->m_Items[316] = (DataMasterBase_o *)v2217;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[316], (int64_t)v2217, v2218, v2219, v2220, v2221, v2222, v2223);
  v2224 = (WarBoardMaster_o *)sub_1C22084(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v2224, 0LL);
  if ( v2224 )
  {
    v3 = sub_1C21F74(v2224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1601;
  v1->m_Items[317] = (DataMasterBase_o *)v2224;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[317], (int64_t)v2224, v2225, v2226, v2227, v2228, v2229, v2230);
  v2231 = (WarBoardSquareMaster_o *)sub_1C22084(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v2231, 0LL);
  if ( v2231 )
  {
    v3 = sub_1C21F74(v2231, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1601;
  v1->m_Items[318] = (DataMasterBase_o *)v2231;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[318], (int64_t)v2231, v2232, v2233, v2234, v2235, v2236, v2237);
  v2238 = (WarBoardRoadMaster_o *)sub_1C22084(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v2238, 0LL);
  if ( v2238 )
  {
    v3 = sub_1C21F74(v2238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1601;
  v1->m_Items[319] = (DataMasterBase_o *)v2238;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[319], (int64_t)v2238, v2239, v2240, v2241, v2242, v2243, v2244);
  v2245 = (WarBoardStageMaster_o *)sub_1C22084(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v2245, 0LL);
  if ( v2245 )
  {
    v3 = sub_1C21F74(v2245, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1601;
  v1->m_Items[320] = (DataMasterBase_o *)v2245;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[320], (int64_t)v2245, v2246, v2247, v2248, v2249, v2250, v2251);
  v2252 = (WarBoardActionPointMaster_o *)sub_1C22084(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v2252, 0LL);
  if ( v2252 )
  {
    v3 = sub_1C21F74(v2252, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1601;
  v1->m_Items[321] = (DataMasterBase_o *)v2252;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[321], (int64_t)v2252, v2253, v2254, v2255, v2256, v2257, v2258);
  v2259 = (WarBoardActionTrendMaster_o *)sub_1C22084(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v2259, 0LL);
  if ( v2259 )
  {
    v3 = sub_1C21F74(v2259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1601;
  v1->m_Items[322] = (DataMasterBase_o *)v2259;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[322], (int64_t)v2259, v2260, v2261, v2262, v2263, v2264, v2265);
  v2266 = (WarBoardTacticalTrendMaster_o *)sub_1C22084(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v2266, 0LL);
  if ( v2266 )
  {
    v3 = sub_1C21F74(v2266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1601;
  v1->m_Items[323] = (DataMasterBase_o *)v2266;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[323], (int64_t)v2266, v2267, v2268, v2269, v2270, v2271, v2272);
  v2273 = (WarBoardStageLayoutMaster_o *)sub_1C22084(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v2273, 0LL);
  if ( v2273 )
  {
    v3 = sub_1C21F74(v2273, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1601;
  v1->m_Items[324] = (DataMasterBase_o *)v2273;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[324], (int64_t)v2273, v2274, v2275, v2276, v2277, v2278, v2279);
  v2280 = (WarBoardStageNpcMaster_o *)sub_1C22084(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v2280, 0LL);
  if ( v2280 )
  {
    v3 = sub_1C21F74(v2280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1601;
  v1->m_Items[325] = (DataMasterBase_o *)v2280;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[325], (int64_t)v2280, v2281, v2282, v2283, v2284, v2285, v2286);
  v2287 = (WarBoardStageWallMaster_o *)sub_1C22084(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v2287, 0LL);
  if ( v2287 )
  {
    v3 = sub_1C21F74(v2287, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1601;
  v1->m_Items[326] = (DataMasterBase_o *)v2287;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[326], (int64_t)v2287, v2288, v2289, v2290, v2291, v2292, v2293);
  v2294 = (WarBoardAIMaster_o *)sub_1C22084(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v2294, 0LL);
  if ( v2294 )
  {
    v3 = sub_1C21F74(v2294, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1601;
  v1->m_Items[327] = (DataMasterBase_o *)v2294;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[327], (int64_t)v2294, v2295, v2296, v2297, v2298, v2299, v2300);
  v2301 = (WarBoardRatingBaseMaster_o *)sub_1C22084(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v2301, 0LL);
  if ( v2301 )
  {
    v3 = sub_1C21F74(v2301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1601;
  v1->m_Items[328] = (DataMasterBase_o *)v2301;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[328], (int64_t)v2301, v2302, v2303, v2304, v2305, v2306, v2307);
  v2308 = (WarBoardRatingOffsetMaster_o *)sub_1C22084(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v2308, 0LL);
  if ( v2308 )
  {
    v3 = sub_1C21F74(v2308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1601;
  v1->m_Items[329] = (DataMasterBase_o *)v2308;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[329], (int64_t)v2308, v2309, v2310, v2311, v2312, v2313, v2314);
  v2315 = (WarBoardItemMaster_o *)sub_1C22084(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v2315, 0LL);
  if ( v2315 )
  {
    v3 = sub_1C21F74(v2315, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1601;
  v1->m_Items[330] = (DataMasterBase_o *)v2315;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[330], (int64_t)v2315, v2316, v2317, v2318, v2319, v2320, v2321);
  v2322 = (WarBoardTreasureMaster_o *)sub_1C22084(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v2322, 0LL);
  if ( v2322 )
  {
    v3 = sub_1C21F74(v2322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1601;
  v1->m_Items[331] = (DataMasterBase_o *)v2322;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[331], (int64_t)v2322, v2323, v2324, v2325, v2326, v2327, v2328);
  v2329 = (WarBoardQuestMaster_o *)sub_1C22084(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v2329, 0LL);
  if ( v2329 )
  {
    v3 = sub_1C21F74(v2329, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1601;
  v1->m_Items[332] = (DataMasterBase_o *)v2329;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[332], (int64_t)v2329, v2330, v2331, v2332, v2333, v2334, v2335);
  v2336 = (WarBoardDataMaster_o *)sub_1C22084(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v2336, 0LL);
  if ( v2336 )
  {
    v3 = sub_1C21F74(v2336, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1601;
  v1->m_Items[333] = (DataMasterBase_o *)v2336;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[333], (int64_t)v2336, v2337, v2338, v2339, v2340, v2341, v2342);
  v2343 = (WarBoardIndividualityClassMaster_o *)sub_1C22084(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v2343, 0LL);
  if ( v2343 )
  {
    v3 = sub_1C21F74(v2343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1601;
  v1->m_Items[334] = (DataMasterBase_o *)v2343;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[334], (int64_t)v2343, v2344, v2345, v2346, v2347, v2348, v2349);
  v2350 = (WarBoardActionTrendConditionMaster_o *)sub_1C22084(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v2350, 0LL);
  if ( v2350 )
  {
    v3 = sub_1C21F74(v2350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1601;
  v1->m_Items[335] = (DataMasterBase_o *)v2350;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[335], (int64_t)v2350, v2351, v2352, v2353, v2354, v2355, v2356);
  v2357 = (WarBoardActionPointClassMaster_o *)sub_1C22084(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v2357, 0LL);
  if ( v2357 )
  {
    v3 = sub_1C21F74(v2357, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1601;
  v1->m_Items[336] = (DataMasterBase_o *)v2357;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[336], (int64_t)v2357, v2358, v2359, v2360, v2361, v2362, v2363);
  v2364 = (EventPanelMapMaster_o *)sub_1C22084(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v2364, 0LL);
  if ( v2364 )
  {
    v3 = sub_1C21F74(v2364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1601;
  v1->m_Items[337] = (DataMasterBase_o *)v2364;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[337], (int64_t)v2364, v2365, v2366, v2367, v2368, v2369, v2370);
  v2371 = (EventPanelMapDetailMaster_o *)sub_1C22084(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v2371, 0LL);
  if ( v2371 )
  {
    v3 = sub_1C21F74(v2371, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1601;
  v1->m_Items[338] = (DataMasterBase_o *)v2371;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[338], (int64_t)v2371, v2372, v2373, v2374, v2375, v2376, v2377);
  v2378 = (EventPanelSpotMaster_o *)sub_1C22084(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v2378, 0LL);
  if ( v2378 )
  {
    v3 = sub_1C21F74(v2378, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1601;
  v1->m_Items[339] = (DataMasterBase_o *)v2378;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[339], (int64_t)v2378, v2379, v2380, v2381, v2382, v2383, v2384);
  v2385 = (EventPanelScanMaster_o *)sub_1C22084(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v2385, 0LL);
  if ( v2385 )
  {
    v3 = sub_1C21F74(v2385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1601;
  v1->m_Items[340] = (DataMasterBase_o *)v2385;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[340], (int64_t)v2385, v2386, v2387, v2388, v2389, v2390, v2391);
  v2392 = (CommonConsumeMaster_o *)sub_1C22084(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v2392, 0LL);
  if ( v2392 )
  {
    v3 = sub_1C21F74(v2392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1601;
  v1->m_Items[341] = (DataMasterBase_o *)v2392;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[341], (int64_t)v2392, v2393, v2394, v2395, v2396, v2397, v2398);
  v2399 = (UserEventMapMaster_o *)sub_1C22084(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v2399, 0LL);
  if ( v2399 )
  {
    v3 = sub_1C21F74(v2399, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1601;
  v1->m_Items[342] = (DataMasterBase_o *)v2399;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[342], (int64_t)v2399, v2400, v2401, v2402, v2403, v2404, v2405);
  v2406 = (UserEventSpotMaster_o *)sub_1C22084(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v2406, 0LL);
  if ( v2406 )
  {
    v3 = sub_1C21F74(v2406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1601;
  v1->m_Items[343] = (DataMasterBase_o *)v2406;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[343], (int64_t)v2406, v2407, v2408, v2409, v2410, v2411, v2412);
  v2413 = (WarGroupMaster_o *)sub_1C22084(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v2413, 0LL);
  if ( v2413 )
  {
    v3 = sub_1C21F74(v2413, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1601;
  v1->m_Items[344] = (DataMasterBase_o *)v2413;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[344], (int64_t)v2413, v2414, v2415, v2416, v2417, v2418, v2419);
  v2420 = (ServantLimitImageMaster_o *)sub_1C22084(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v2420, 0LL);
  if ( v2420 )
  {
    v3 = sub_1C21F74(v2420, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1601;
  v1->m_Items[345] = (DataMasterBase_o *)v2420;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[345], (int64_t)v2420, v2421, v2422, v2423, v2424, v2425, v2426);
  v2427 = (FriendshipQuestDialogInfoMaster_o *)sub_1C22084(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v2427, 0LL);
  if ( v2427 )
  {
    v3 = sub_1C21F74(v2427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1601;
  v1->m_Items[346] = (DataMasterBase_o *)v2427;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[346], (int64_t)v2427, v2428, v2429, v2430, v2431, v2432, v2433);
  v2434 = (QuestRestrictionInfoMaster_o *)sub_1C22084(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v2434, 0LL);
  if ( v2434 )
  {
    v3 = sub_1C21F74(v2434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1601;
  v1->m_Items[347] = (DataMasterBase_o *)v2434;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[347], (int64_t)v2434, v2435, v2436, v2437, v2438, v2439, v2440);
  v2441 = (AssistMaster_o *)sub_1C22084(AssistMaster_TypeInfo);
  AssistMaster___ctor(v2441, 0LL);
  if ( v2441 )
  {
    v3 = sub_1C21F74(v2441, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1601;
  v1->m_Items[348] = (DataMasterBase_o *)v2441;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[348], (int64_t)v2441, v2442, v2443, v2444, v2445, v2446, v2447);
  v2448 = (WarBoardEffectMaster_o *)sub_1C22084(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v2448, 0LL);
  if ( v2448 )
  {
    v3 = sub_1C21F74(v2448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1601;
  v1->m_Items[349] = (DataMasterBase_o *)v2448;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[349], (int64_t)v2448, v2449, v2450, v2451, v2452, v2453, v2454);
  v2455 = (WarBoardOnboardSkillMaster_o *)sub_1C22084(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v2455, 0LL);
  if ( v2455 )
  {
    v3 = sub_1C21F74(v2455, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1601;
  v1->m_Items[350] = (DataMasterBase_o *)v2455;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[350], (int64_t)v2455, v2456, v2457, v2458, v2459, v2460, v2461);
  v2462 = (BeforeBirthDayMaster_o *)sub_1C22084(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v2462, 0LL);
  if ( v2462 )
  {
    v3 = sub_1C21F74(v2462, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1601;
  v1->m_Items[351] = (DataMasterBase_o *)v2462;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[351], (int64_t)v2462, v2463, v2464, v2465, v2466, v2467, v2468);
  v2469 = (LoginQuestMaster_o *)sub_1C22084(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v2469, 0LL);
  if ( v2469 )
  {
    v3 = sub_1C21F74(v2469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1601;
  v1->m_Items[352] = (DataMasterBase_o *)v2469;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[352], (int64_t)v2469, v2470, v2471, v2472, v2473, v2474, v2475);
  v2476 = (EventCombineCostumeMaster_o *)sub_1C22084(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v2476, 0LL);
  if ( v2476 )
  {
    v3 = sub_1C21F74(v2476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1601;
  v1->m_Items[353] = (DataMasterBase_o *)v2476;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[353], (int64_t)v2476, v2477, v2478, v2479, v2480, v2481, v2482);
  v2483 = (WarBoardStagePieceDetailMaster_o *)sub_1C22084(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v2483, 0LL);
  if ( v2483 )
  {
    v3 = sub_1C21F74(v2483, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1601;
  v1->m_Items[354] = (DataMasterBase_o *)v2483;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[354], (int64_t)v2483, v2484, v2485, v2486, v2487, v2488, v2489);
  v2490 = (ServantTreasureDeviceAddMaster_o *)sub_1C22084(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v2490, 0LL);
  if ( v2490 )
  {
    v3 = sub_1C21F74(v2490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1601;
  v1->m_Items[355] = (DataMasterBase_o *)v2490;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[355], (int64_t)v2490, v2491, v2492, v2493, v2494, v2495, v2496);
  v2497 = (SkillAddMaster_o *)sub_1C22084(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v2497, 0LL);
  if ( v2497 )
  {
    v3 = sub_1C21F74(v2497, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1601;
  v1->m_Items[356] = (DataMasterBase_o *)v2497;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[356], (int64_t)v2497, v2498, v2499, v2500, v2501, v2502, v2503);
  v2504 = (ServantLvDetailMaster_o *)sub_1C22084(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v2504, 0LL);
  if ( v2504 )
  {
    v3 = sub_1C21F74(v2504, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1601;
  v1->m_Items[357] = (DataMasterBase_o *)v2504;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[357], (int64_t)v2504, v2505, v2506, v2507, v2508, v2509, v2510);
  v2511 = (GachaAppendMaster_o *)sub_1C22084(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v2511, 0LL);
  if ( v2511 )
  {
    v3 = sub_1C21F74(v2511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1601;
  v1->m_Items[358] = (DataMasterBase_o *)v2511;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[358], (int64_t)v2511, v2512, v2513, v2514, v2515, v2516, v2517);
  v2518 = (UserGachaDrawLogMaster_o *)sub_1C22084(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v2518, 0LL);
  if ( v2518 )
  {
    v3 = sub_1C21F74(v2518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1601;
  v1->m_Items[359] = (DataMasterBase_o *)v2518;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[359], (int64_t)v2518, v2519, v2520, v2521, v2522, v2523, v2524);
  v2525 = (ServantAppendPassiveSkillMaster_o *)sub_1C22084(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v2525, 0LL);
  if ( v2525 )
  {
    v3 = sub_1C21F74(v2525, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1601;
  v1->m_Items[360] = (DataMasterBase_o *)v2525;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[360], (int64_t)v2525, v2526, v2527, v2528, v2529, v2530, v2531);
  v2532 = (UserServantAppendPassiveSkillMaster_o *)sub_1C22084(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v2532, 0LL);
  if ( v2532 )
  {
    v3 = sub_1C21F74(v2532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1601;
  v1->m_Items[361] = (DataMasterBase_o *)v2532;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[361], (int64_t)v2532, v2533, v2534, v2535, v2536, v2537, v2538);
  v2539 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C22084(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v2539, 0LL);
  if ( v2539 )
  {
    v3 = sub_1C21F74(v2539, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1601;
  v1->m_Items[362] = (DataMasterBase_o *)v2539;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[362], (int64_t)v2539, v2540, v2541, v2542, v2543, v2544, v2545);
  v2546 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C22084(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v2546, 0LL);
  if ( v2546 )
  {
    v3 = sub_1C21F74(v2546, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1601;
  v1->m_Items[363] = (DataMasterBase_o *)v2546;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[363], (int64_t)v2546, v2547, v2548, v2549, v2550, v2551, v2552);
  v2553 = (CombineAppendPassiveSkillMaster_o *)sub_1C22084(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v2553, 0LL);
  if ( v2553 )
  {
    v3 = sub_1C21F74(v2553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1601;
  v1->m_Items[364] = (DataMasterBase_o *)v2553;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[364], (int64_t)v2553, v2554, v2555, v2556, v2557, v2558, v2559);
  v2560 = (SvtCoinMaster_o *)sub_1C22084(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v2560, 0LL);
  if ( v2560 )
  {
    v3 = sub_1C21F74(v2560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1601;
  v1->m_Items[365] = (DataMasterBase_o *)v2560;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[365], (int64_t)v2560, v2561, v2562, v2563, v2564, v2565, v2566);
  v2567 = (UserSvtCoinMaster_o *)sub_1C22084(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v2567, 0LL);
  if ( v2567 )
  {
    v3 = sub_1C21F74(v2567, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1601;
  v1->m_Items[366] = (DataMasterBase_o *)v2567;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[366], (int64_t)v2567, v2568, v2569, v2570, v2571, v2572, v2573);
  v2574 = (ServantAddMaster_o *)sub_1C22084(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v2574, 0LL);
  if ( v2574 )
  {
    v3 = sub_1C21F74(v2574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1601;
  v1->m_Items[367] = (DataMasterBase_o *)v2574;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[367], (int64_t)v2574, v2575, v2576, v2577, v2578, v2579, v2580);
  v2581 = (TreasureBoxMaster_o *)sub_1C22084(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v2581, 0LL);
  if ( v2581 )
  {
    v3 = sub_1C21F74(v2581, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1601;
  v1->m_Items[368] = (DataMasterBase_o *)v2581;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[368], (int64_t)v2581, v2582, v2583, v2584, v2585, v2586, v2587);
  v2588 = (TreasureBoxGiftMaster_o *)sub_1C22084(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v2588, 0LL);
  if ( v2588 )
  {
    v3 = sub_1C21F74(v2588, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1601;
  v1->m_Items[369] = (DataMasterBase_o *)v2588;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[369], (int64_t)v2588, v2589, v2590, v2591, v2592, v2593, v2594);
  v2595 = (TreasureBoxTalkMaster_o *)sub_1C22084(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v2595, 0LL);
  if ( v2595 )
  {
    v3 = sub_1C21F74(v2595, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1601;
  v1->m_Items[370] = (DataMasterBase_o *)v2595;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[370], (int64_t)v2595, v2596, v2597, v2598, v2599, v2600, v2601);
  v2602 = (UserEventExpeditionMaster_o *)sub_1C22084(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v2602, 0LL);
  if ( v2602 )
  {
    v3 = sub_1C21F74(v2602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1601;
  v1->m_Items[371] = (DataMasterBase_o *)v2602;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[371], (int64_t)v2602, v2603, v2604, v2605, v2606, v2607, v2608);
  v2609 = (EventExpeditionMaster_o *)sub_1C22084(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v2609, 0LL);
  if ( v2609 )
  {
    v3 = sub_1C21F74(v2609, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1601;
  v1->m_Items[372] = (DataMasterBase_o *)v2609;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[372], (int64_t)v2609, v2610, v2611, v2612, v2613, v2614, v2615);
  v2616 = (EventExpeditionPieceMaster_o *)sub_1C22084(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v2616, 0LL);
  if ( v2616 )
  {
    v3 = sub_1C21F74(v2616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1601;
  v1->m_Items[373] = (DataMasterBase_o *)v2616;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[373], (int64_t)v2616, v2617, v2618, v2619, v2620, v2621, v2622);
  v2623 = (EventRecipeMaster_o *)sub_1C22084(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v2623, 0LL);
  if ( v2623 )
  {
    v3 = sub_1C21F74(v2623, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1601;
  v1->m_Items[374] = (DataMasterBase_o *)v2623;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[374], (int64_t)v2623, v2624, v2625, v2626, v2627, v2628, v2629);
  v2630 = (EventRecipeGiftMaster_o *)sub_1C22084(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v2630, 0LL);
  if ( v2630 )
  {
    v3 = sub_1C21F74(v2630, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1601;
  v1->m_Items[375] = (DataMasterBase_o *)v2630;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[375], (int64_t)v2630, v2631, v2632, v2633, v2634, v2635, v2636);
  v2637 = (UserEventFortificationMaster_o *)sub_1C22084(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v2637, 0LL);
  if ( v2637 )
  {
    v3 = sub_1C21F74(v2637, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1601;
  v1->m_Items[376] = (DataMasterBase_o *)v2637;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[376], (int64_t)v2637, v2638, v2639, v2640, v2641, v2642, v2643);
  v2644 = (EventFortificationMaster_o *)sub_1C22084(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v2644, 0LL);
  if ( v2644 )
  {
    v3 = sub_1C21F74(v2644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1601;
  v1->m_Items[377] = (DataMasterBase_o *)v2644;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[377], (int64_t)v2644, v2645, v2646, v2647, v2648, v2649, v2650);
  v2651 = (EventFortificationDetailMaster_o *)sub_1C22084(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v2651, 0LL);
  if ( v2651 )
  {
    v3 = sub_1C21F74(v2651, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1601;
  v1->m_Items[378] = (DataMasterBase_o *)v2651;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[378], (int64_t)v2651, v2652, v2653, v2654, v2655, v2656, v2657);
  v2658 = (EventFortificationSvtMaster_o *)sub_1C22084(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v2658, 0LL);
  if ( v2658 )
  {
    v3 = sub_1C21F74(v2658, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1601;
  v1->m_Items[379] = (DataMasterBase_o *)v2658;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[379], (int64_t)v2658, v2659, v2660, v2661, v2662, v2663, v2664);
  v2665 = (UserServantVoicePlayedMaster_o *)sub_1C22084(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v2665, 0LL);
  if ( v2665 )
  {
    v3 = sub_1C21F74(v2665, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1601;
  v1->m_Items[380] = (DataMasterBase_o *)v2665;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[380], (int64_t)v2665, v2666, v2667, v2668, v2669, v2670, v2671);
  v2672 = (UpdateProfileDialogInfoMaster_o *)sub_1C22084(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v2672, 0LL);
  if ( v2672 )
  {
    v3 = sub_1C21F74(v2672, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1601;
  v1->m_Items[381] = (DataMasterBase_o *)v2672;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[381], (int64_t)v2672, v2673, v2674, v2675, v2676, v2677, v2678);
  v2679 = (SvtMaterialTdMaster_o *)sub_1C22084(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v2679, 0LL);
  if ( v2679 )
  {
    v3 = sub_1C21F74(v2679, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1601;
  v1->m_Items[382] = (DataMasterBase_o *)v2679;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[382], (int64_t)v2679, v2680, v2681, v2682, v2683, v2684, v2685);
  v2686 = (BattleMasterImageMaster_o *)sub_1C22084(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v2686, 0LL);
  if ( v2686 )
  {
    v3 = sub_1C21F74(v2686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1601;
  v1->m_Items[383] = (DataMasterBase_o *)v2686;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[383], (int64_t)v2686, v2687, v2688, v2689, v2690, v2691, v2692);
  v2693 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C22084(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v2693, 0LL);
  if ( v2693 )
  {
    v3 = sub_1C21F74(v2693, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1601;
  v1->m_Items[384] = (DataMasterBase_o *)v2693;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[384], (int64_t)v2693, v2694, v2695, v2696, v2697, v2698, v2699);
  v2700 = (UserEventRandomMissionMaster_o *)sub_1C22084(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v2700, 0LL);
  if ( v2700 )
  {
    v3 = sub_1C21F74(v2700, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1601;
  v1->m_Items[385] = (DataMasterBase_o *)v2700;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[385], (int64_t)v2700, v2701, v2702, v2703, v2704, v2705, v2706);
  v2707 = (EventProgressValueMaster_o *)sub_1C22084(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v2707, 0LL);
  if ( v2707 )
  {
    v3 = sub_1C21F74(v2707, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1601;
  v1->m_Items[386] = (DataMasterBase_o *)v2707;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[386], (int64_t)v2707, v2708, v2709, v2710, v2711, v2712, v2713);
  v2714 = (SvtMultiPortraitMaster_o *)sub_1C22084(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v2714, 0LL);
  if ( v2714 )
  {
    v3 = sub_1C21F74(v2714, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1601;
  v1->m_Items[387] = (DataMasterBase_o *)v2714;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[387], (int64_t)v2714, v2715, v2716, v2717, v2718, v2719, v2720);
  v2721 = (EventRandomMissionMaster_o *)sub_1C22084(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v2721, 0LL);
  if ( v2721 )
  {
    v3 = sub_1C21F74(v2721, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1601;
  v1->m_Items[388] = (DataMasterBase_o *)v2721;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[388], (int64_t)v2721, v2722, v2723, v2724, v2725, v2726, v2727);
  v2728 = (UserGachaHistoryMaster_o *)sub_1C22084(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v2728, 0LL);
  if ( v2728 )
  {
    v3 = sub_1C21F74(v2728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1601;
  v1->m_Items[389] = (DataMasterBase_o *)v2728;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[389], (int64_t)v2728, v2729, v2730, v2731, v2732, v2733, v2734);
  v2735 = (UserCoinRoomMaster_o *)sub_1C22084(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v2735, 0LL);
  if ( v2735 )
  {
    v3 = sub_1C21F74(v2735, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1601;
  v1->m_Items[390] = (DataMasterBase_o *)v2735;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[390], (int64_t)v2735, v2736, v2737, v2738, v2739, v2740, v2741);
  v2742 = (EventBuddyPointMaster_o *)sub_1C22084(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v2742, 0LL);
  if ( v2742 )
  {
    v3 = sub_1C21F74(v2742, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1601;
  v1->m_Items[391] = (DataMasterBase_o *)v2742;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[391], (int64_t)v2742, v2743, v2744, v2745, v2746, v2747, v2748);
  v2749 = (EventServantPointRankMaster_o *)sub_1C22084(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v2749, 0LL);
  if ( v2749 )
  {
    v3 = sub_1C21F74(v2749, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1601;
  v1->m_Items[392] = (DataMasterBase_o *)v2749;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[392], (int64_t)v2749, v2750, v2751, v2752, v2753, v2754, v2755);
  v2756 = (UserEventServantPointMaster_o *)sub_1C22084(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v2756, 0LL);
  if ( v2756 )
  {
    v3 = sub_1C21F74(v2756, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1601;
  v1->m_Items[393] = (DataMasterBase_o *)v2756;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[393], (int64_t)v2756, v2757, v2758, v2759, v2760, v2761, v2762);
  v2763 = (FieldMotionMaster_o *)sub_1C22084(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v2763, 0LL);
  if ( v2763 )
  {
    v3 = sub_1C21F74(v2763, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1601;
  v1->m_Items[394] = (DataMasterBase_o *)v2763;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[394], (int64_t)v2763, v2764, v2765, v2766, v2767, v2768, v2769);
  v2770 = (UserDeleteReservationMaster_o *)sub_1C22084(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v2770, 0LL);
  if ( v2770 )
  {
    v3 = sub_1C21F74(v2770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1601;
  v1->m_Items[395] = (DataMasterBase_o *)v2770;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[395], (int64_t)v2770, v2771, v2772, v2773, v2774, v2775, v2776);
  v2777 = (ServantScriptMultipleMaster_o *)sub_1C22084(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v2777, 0LL);
  if ( v2777 )
  {
    v3 = sub_1C21F74(v2777, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1601;
  v1->m_Items[396] = (DataMasterBase_o *)v2777;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[396], (int64_t)v2777, v2778, v2779, v2780, v2781, v2782, v2783);
  v2784 = (EquipAddMaster_o *)sub_1C22084(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v2784, 0LL);
  if ( v2784 )
  {
    v3 = sub_1C21F74(v2784, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1601;
  v1->m_Items[397] = (DataMasterBase_o *)v2784;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[397], (int64_t)v2784, v2785, v2786, v2787, v2788, v2789, v2790);
  v2791 = (QuestReleaseOverwriteMaster_o *)sub_1C22084(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v2791, 0LL);
  if ( v2791 )
  {
    v3 = sub_1C21F74(v2791, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1601;
  v1->m_Items[398] = (DataMasterBase_o *)v2791;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[398], (int64_t)v2791, v2792, v2793, v2794, v2795, v2796, v2797);
  v2798 = (UserEventAlloutBattleMaster_o *)sub_1C22084(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v2798, 0LL);
  if ( v2798 )
  {
    v3 = sub_1C21F74(v2798, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1601;
  v1->m_Items[399] = (DataMasterBase_o *)v2798;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[399], (int64_t)v2798, v2799, v2800, v2801, v2802, v2803, v2804);
  v2805 = (QuestScriptMaterialNextMaster_o *)sub_1C22084(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v2805, 0LL);
  if ( v2805 )
  {
    v3 = sub_1C21F74(v2805, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1601;
  v1->m_Items[400] = (DataMasterBase_o *)v2805;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[400], (int64_t)v2805, v2806, v2807, v2808, v2809, v2810, v2811);
  v2812 = (EventDiggingMaster_o *)sub_1C22084(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v2812, 0LL);
  if ( v2812 )
  {
    v3 = sub_1C21F74(v2812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1601;
  v1->m_Items[401] = (DataMasterBase_o *)v2812;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[401], (int64_t)v2812, v2813, v2814, v2815, v2816, v2817, v2818);
  v2819 = (EventDiggingBlockMaster_o *)sub_1C22084(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v2819, 0LL);
  if ( v2819 )
  {
    v3 = sub_1C21F74(v2819, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1601;
  v1->m_Items[402] = (DataMasterBase_o *)v2819;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[402], (int64_t)v2819, v2820, v2821, v2822, v2823, v2824, v2825);
  v2826 = (EventDiggingRewardMaster_o *)sub_1C22084(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v2826, 0LL);
  if ( v2826 )
  {
    v3 = sub_1C21F74(v2826, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1601;
  v1->m_Items[403] = (DataMasterBase_o *)v2826;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[403], (int64_t)v2826, v2827, v2828, v2829, v2830, v2831, v2832);
  v2833 = (UserEventDiggingMaster_o *)sub_1C22084(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v2833, 0LL);
  if ( v2833 )
  {
    v3 = sub_1C21F74(v2833, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1601;
  v1->m_Items[404] = (DataMasterBase_o *)v2833;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[404], (int64_t)v2833, v2834, v2835, v2836, v2837, v2838, v2839);
  v2840 = (BattleMessageMaster_o *)sub_1C22084(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v2840, 0LL);
  if ( v2840 )
  {
    v3 = sub_1C21F74(v2840, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1601;
  v1->m_Items[405] = (DataMasterBase_o *)v2840;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[405], (int64_t)v2840, v2841, v2842, v2843, v2844, v2845, v2846);
  v2847 = (BattleMessageGroupMaster_o *)sub_1C22084(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v2847, 0LL);
  if ( v2847 )
  {
    v3 = sub_1C21F74(v2847, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1601;
  v1->m_Items[406] = (DataMasterBase_o *)v2847;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[406], (int64_t)v2847, v2848, v2849, v2850, v2851, v2852, v2853);
  v2854 = (UserNpcSvtRecordMaster_o *)sub_1C22084(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v2854, 0LL);
  if ( v2854 )
  {
    v3 = sub_1C21F74(v2854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1601;
  v1->m_Items[407] = (DataMasterBase_o *)v2854;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[407], (int64_t)v2854, v2855, v2856, v2857, v2858, v2859, v2860);
  v2861 = (BuffTypeDetailMaster_o *)sub_1C22084(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v2861, 0LL);
  if ( v2861 )
  {
    v3 = sub_1C21F74(v2861, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1601;
  v1->m_Items[408] = (DataMasterBase_o *)v2861;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[408], (int64_t)v2861, v2862, v2863, v2864, v2865, v2866, v2867);
  v2868 = (WarBoardMessageMaster_o *)sub_1C22084(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v2868, 0LL);
  if ( v2868 )
  {
    v3 = sub_1C21F74(v2868, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1601;
  v1->m_Items[409] = (DataMasterBase_o *)v2868;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[409], (int64_t)v2868, v2869, v2870, v2871, v2872, v2873, v2874);
  v2875 = (WarBoardPartySkillMaster_o *)sub_1C22084(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v2875, 0LL);
  if ( v2875 )
  {
    v3 = sub_1C21F74(v2875, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1601;
  v1->m_Items[410] = (DataMasterBase_o *)v2875;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[410], (int64_t)v2875, v2876, v2877, v2878, v2879, v2880, v2881);
  v2882 = (WarBoardMessageScriptMaster_o *)sub_1C22084(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v2882, 0LL);
  if ( v2882 )
  {
    v3 = sub_1C21F74(v2882, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1601;
  v1->m_Items[411] = (DataMasterBase_o *)v2882;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[411], (int64_t)v2882, v2883, v2884, v2885, v2886, v2887, v2888);
  v2889 = (WarQuestSelectionMaster_o *)sub_1C22084(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v2889, 0LL);
  if ( v2889 )
  {
    v3 = sub_1C21F74(v2889, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1601;
  v1->m_Items[412] = (DataMasterBase_o *)v2889;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[412], (int64_t)v2889, v2890, v2891, v2892, v2893, v2894, v2895);
  v2896 = (WarBoardStageDetailMaster_o *)sub_1C22084(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v2896, 0LL);
  if ( v2896 )
  {
    v3 = sub_1C21F74(v2896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1601;
  v1->m_Items[413] = (DataMasterBase_o *)v2896;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[413], (int64_t)v2896, v2897, v2898, v2899, v2900, v2901, v2902);
  v2903 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C22084(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v2903, 0LL);
  if ( v2903 )
  {
    v3 = sub_1C21F74(v2903, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1601;
  v1->m_Items[414] = (DataMasterBase_o *)v2903;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[414], (int64_t)v2903, v2904, v2905, v2906, v2907, v2908, v2909);
  v2910 = (QuestScriptBranchMaterialMaster_o *)sub_1C22084(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v2910, 0LL);
  if ( v2910 )
  {
    v3 = sub_1C21F74(v2910, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1601;
  v1->m_Items[415] = (DataMasterBase_o *)v2910;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[415], (int64_t)v2910, v2911, v2912, v2913, v2914, v2915, v2916);
  v2917 = (AdCheckPointMaster_o *)sub_1C22084(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v2917, 0LL);
  if ( v2917 )
  {
    v3 = sub_1C21F74(v2917, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1601;
  v1->m_Items[416] = (DataMasterBase_o *)v2917;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[416], (int64_t)v2917, v2918, v2919, v2920, v2921, v2922, v2923);
  v2924 = (GiftDetailMaster_o *)sub_1C22084(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v2924, 0LL);
  if ( v2924 )
  {
    v3 = sub_1C21F74(v2924, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1601;
  v1->m_Items[417] = (DataMasterBase_o *)v2924;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[417], (int64_t)v2924, v2925, v2926, v2927, v2928, v2929, v2930);
  v2931 = (CombineLimitGiftMaster_o *)sub_1C22084(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v2931, 0LL);
  if ( v2931 )
  {
    v3 = sub_1C21F74(v2931, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1601;
  v1->m_Items[418] = (DataMasterBase_o *)v2931;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[418], (int64_t)v2931, v2932, v2933, v2934, v2935, v2936, v2937);
  v2938 = (EventCooltimeRewardMaster_o *)sub_1C22084(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v2938, 0LL);
  if ( v2938 )
  {
    v3 = sub_1C21F74(v2938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1601;
  v1->m_Items[419] = (DataMasterBase_o *)v2938;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[419], (int64_t)v2938, v2939, v2940, v2941, v2942, v2943, v2944);
  v2945 = (UserEventCooltimeRewardMaster_o *)sub_1C22084(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v2945, 0LL);
  if ( v2945 )
  {
    v3 = sub_1C21F74(v2945, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1601;
  v1->m_Items[420] = (DataMasterBase_o *)v2945;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[420], (int64_t)v2945, v2946, v2947, v2948, v2949, v2950, v2951);
  v2952 = (ClassBoardBaseMaster_o *)sub_1C22084(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v2952, 0LL);
  if ( v2952 )
  {
    v3 = sub_1C21F74(v2952, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1601;
  v1->m_Items[421] = (DataMasterBase_o *)v2952;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[421], (int64_t)v2952, v2953, v2954, v2955, v2956, v2957, v2958);
  v2959 = (ClassBoardLockMaster_o *)sub_1C22084(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v2959, 0LL);
  if ( v2959 )
  {
    v3 = sub_1C21F74(v2959, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1601;
  v1->m_Items[422] = (DataMasterBase_o *)v2959;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[422], (int64_t)v2959, v2960, v2961, v2962, v2963, v2964, v2965);
  v2966 = (ClassBoardSquareMaster_o *)sub_1C22084(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v2966, 0LL);
  if ( v2966 )
  {
    v3 = sub_1C21F74(v2966, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1601;
  v1->m_Items[423] = (DataMasterBase_o *)v2966;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[423], (int64_t)v2966, v2967, v2968, v2969, v2970, v2971, v2972);
  v2973 = (ClassBoardLineMaster_o *)sub_1C22084(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v2973, 0LL);
  if ( v2973 )
  {
    v3 = sub_1C21F74(v2973, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1601;
  v1->m_Items[424] = (DataMasterBase_o *)v2973;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[424], (int64_t)v2973, v2974, v2975, v2976, v2977, v2978, v2979);
  v2980 = (UserClassBoardSquareMaster_o *)sub_1C22084(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v2980, 0LL);
  if ( v2980 )
  {
    v3 = sub_1C21F74(v2980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1601;
  v1->m_Items[425] = (DataMasterBase_o *)v2980;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[425], (int64_t)v2980, v2981, v2982, v2983, v2984, v2985, v2986);
  v2987 = (ServantCardAddMaster_o *)sub_1C22084(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v2987, 0LL);
  if ( v2987 )
  {
    v3 = sub_1C21F74(v2987, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1601;
  v1->m_Items[426] = (DataMasterBase_o *)v2987;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[426], (int64_t)v2987, v2988, v2989, v2990, v2991, v2992, v2993);
  v2994 = (MapLayerMaster_o *)sub_1C22084(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v2994, 0LL);
  if ( v2994 )
  {
    v3 = sub_1C21F74(v2994, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1601;
  v1->m_Items[427] = (DataMasterBase_o *)v2994;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[427], (int64_t)v2994, v2995, v2996, v2997, v2998, v2999, v3000);
  v3001 = (SpotLayerMaster_o *)sub_1C22084(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v3001, 0LL);
  if ( v3001 )
  {
    v3 = sub_1C21F74(v3001, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1601;
  v1->m_Items[428] = (DataMasterBase_o *)v3001;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[428], (int64_t)v3001, v3002, v3003, v3004, v3005, v3006, v3007);
  v3008 = (MapGimmickLayerMaster_o *)sub_1C22084(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v3008, 0LL);
  if ( v3008 )
  {
    v3 = sub_1C21F74(v3008, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1601;
  v1->m_Items[429] = (DataMasterBase_o *)v3008;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[429], (int64_t)v3008, v3009, v3010, v3011, v3012, v3013, v3014);
  v3015 = (EventDataLostBattleMaster_o *)sub_1C22084(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v3015, 0LL);
  if ( v3015 )
  {
    v3 = sub_1C21F74(v3015, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1601;
  v1->m_Items[430] = (DataMasterBase_o *)v3015;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[430], (int64_t)v3015, v3016, v3017, v3018, v3019, v3020, v3021);
  v3022 = (EventDataLostBattleResetMaster_o *)sub_1C22084(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v3022, 0LL);
  if ( v3022 )
  {
    v3 = sub_1C21F74(v3022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1601;
  v1->m_Items[431] = (DataMasterBase_o *)v3022;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[431], (int64_t)v3022, v3023, v3024, v3025, v3026, v3027, v3028);
  v3029 = (UserEventDataLostMaster_o *)sub_1C22084(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v3029, 0LL);
  if ( v3029 )
  {
    v3 = sub_1C21F74(v3029, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1601;
  v1->m_Items[432] = (DataMasterBase_o *)v3029;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[432], (int64_t)v3029, v3030, v3031, v3032, v3033, v3034, v3035);
  v3036 = (QuestHintMaster_o *)sub_1C22084(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v3036, 0LL);
  if ( v3036 )
  {
    v3 = sub_1C21F74(v3036, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1601;
  v1->m_Items[433] = (DataMasterBase_o *)v3036;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[433], (int64_t)v3036, v3037, v3038, v3039, v3040, v3041, v3042);
  v3043 = (FuncTypeDetailMaster_o *)sub_1C22084(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v3043, 0LL);
  if ( v3043 )
  {
    v3 = sub_1C21F74(v3043, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1601;
  v1->m_Items[434] = (DataMasterBase_o *)v3043;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[434], (int64_t)v3043, v3044, v3045, v3046, v3047, v3048, v3049);
  v3050 = (BuffConvertMaster_o *)sub_1C22084(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v3050, 0LL);
  if ( v3050 )
  {
    v3 = sub_1C21F74(v3050, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1601;
  v1->m_Items[435] = (DataMasterBase_o *)v3050;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[435], (int64_t)v3050, v3051, v3052, v3053, v3054, v3055, v3056);
  v3057 = (SkillGroupMaster_o *)sub_1C22084(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v3057, 0LL);
  if ( v3057 )
  {
    v3 = sub_1C21F74(v3057, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1601;
  v1->m_Items[436] = (DataMasterBase_o *)v3057;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[436], (int64_t)v3057, v3058, v3059, v3060, v3061, v3062, v3063);
  v3064 = (SkillGroupOverwriteMaster_o *)sub_1C22084(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v3064, 0LL);
  if ( v3064 )
  {
    v3 = sub_1C21F74(v3064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1601;
  v1->m_Items[437] = (DataMasterBase_o *)v3064;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[437], (int64_t)v3064, v3065, v3066, v3067, v3068, v3069, v3070);
  v3071 = (SkillIndividualityMaster_o *)sub_1C22084(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v3071, 0LL);
  if ( v3071 )
  {
    v3 = sub_1C21F74(v3071, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1601;
  v1->m_Items[438] = (DataMasterBase_o *)v3071;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[438], (int64_t)v3071, v3072, v3073, v3074, v3075, v3076, v3077);
  v3078 = (RestrictionBaseMaster_o *)sub_1C22084(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v3078, 0LL);
  if ( v3078 )
  {
    v3 = sub_1C21F74(v3078, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1601;
  v1->m_Items[439] = (DataMasterBase_o *)v3078;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[439], (int64_t)v3078, v3079, v3080, v3081, v3082, v3083, v3084);
  v3085 = (RestrictionSlotMaster_o *)sub_1C22084(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v3085, 0LL);
  if ( v3085 )
  {
    v3 = sub_1C21F74(v3085, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1601;
  v1->m_Items[440] = (DataMasterBase_o *)v3085;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[440], (int64_t)v3085, v3086, v3087, v3088, v3089, v3090, v3091);
  v3092 = (RestrictionSlotDetailMaster_o *)sub_1C22084(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v3092, 0LL);
  if ( v3092 )
  {
    v3 = sub_1C21F74(v3092, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1601;
  v1->m_Items[441] = (DataMasterBase_o *)v3092;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[441], (int64_t)v3092, v3093, v3094, v3095, v3096, v3097, v3098);
  v3099 = (RestrictionMessageMaster_o *)sub_1C22084(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v3099, 0LL);
  if ( v3099 )
  {
    v3 = sub_1C21F74(v3099, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1601;
  v1->m_Items[442] = (DataMasterBase_o *)v3099;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[442], (int64_t)v3099, v3100, v3101, v3102, v3103, v3104, v3105);
  v3106 = (RestrictionWholeMaster_o *)sub_1C22084(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v3106, 0LL);
  if ( v3106 )
  {
    v3 = sub_1C21F74(v3106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1601;
  v1->m_Items[443] = (DataMasterBase_o *)v3106;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[443], (int64_t)v3106, v3107, v3108, v3109, v3110, v3111, v3112);
  v3113 = (FuncDispMaster_o *)sub_1C22084(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v3113, 0LL);
  if ( v3113 )
  {
    v3 = sub_1C21F74(v3113, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1601;
  v1->m_Items[444] = (DataMasterBase_o *)v3113;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[444], (int64_t)v3113, v3114, v3115, v3116, v3117, v3118, v3119);
  v3120 = (ClassBoardCommandSpellMaster_o *)sub_1C22084(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v3120, 0LL);
  if ( v3120 )
  {
    v3 = sub_1C21F74(v3120, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1601;
  v1->m_Items[445] = (DataMasterBase_o *)v3120;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[445], (int64_t)v3120, v3121, v3122, v3123, v3124, v3125, v3126);
  v3127 = (ClassBoardClassMaster_o *)sub_1C22084(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v3127, 0LL);
  if ( v3127 )
  {
    v3 = sub_1C21F74(v3127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1601;
  v1->m_Items[446] = (DataMasterBase_o *)v3127;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[446], (int64_t)v3127, v3128, v3129, v3130, v3131, v3132, v3133);
  v3134 = (EventCommandAssistMaster_o *)sub_1C22084(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v3134, 0LL);
  if ( v3134 )
  {
    v3 = sub_1C21F74(v3134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1601;
  v1->m_Items[447] = (DataMasterBase_o *)v3134;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[447], (int64_t)v3134, v3135, v3136, v3137, v3138, v3139, v3140);
  v3141 = (EventMissionGroupMaster_o *)sub_1C22084(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v3141, 0LL);
  if ( v3141 )
  {
    v3 = sub_1C21F74(v3141, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1601;
  v1->m_Items[448] = (DataMasterBase_o *)v3141;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[448], (int64_t)v3141, v3142, v3143, v3144, v3145, v3146, v3147);
  v3148 = (CombineLimitReleaseMaster_o *)sub_1C22084(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v3148, 0LL);
  if ( v3148 )
  {
    v3 = sub_1C21F74(v3148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1601;
  v1->m_Items[449] = (DataMasterBase_o *)v3148;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[449], (int64_t)v3148, v3149, v3150, v3151, v3152, v3153, v3154);
  v3155 = (HeelPortraitMaster_o *)sub_1C22084(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v3155, 0LL);
  if ( v3155 )
  {
    v3 = sub_1C21F74(v3155, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1601;
  v1->m_Items[450] = (DataMasterBase_o *)v3155;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[450], (int64_t)v3155, v3156, v3157, v3158, v3159, v3160, v3161);
  v3162 = (UserHeelPortraitMaster_o *)sub_1C22084(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v3162, 0LL);
  if ( v3162 )
  {
    v3 = sub_1C21F74(v3162, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1601;
  v1->m_Items[451] = (DataMasterBase_o *)v3162;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[451], (int64_t)v3162, v3163, v3164, v3165, v3166, v3167, v3168);
  v3169 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C22084(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v3169, 0LL);
  if ( v3169 )
  {
    v3 = sub_1C21F74(v3169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1601;
  v1->m_Items[452] = (DataMasterBase_o *)v3169;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[452], (int64_t)v3169, v3170, v3171, v3172, v3173, v3174, v3175);
  v3176 = (NpcServantFollowerIndividualityMaster_o *)sub_1C22084(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v3176, 0LL);
  if ( v3176 )
  {
    v3 = sub_1C21F74(v3176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1601;
  v1->m_Items[453] = (DataMasterBase_o *)v3176;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[453], (int64_t)v3176, v3177, v3178, v3179, v3180, v3181, v3182);
  v3183 = (GachaExtraGiftMaster_o *)sub_1C22084(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v3183, 0LL);
  if ( v3183 )
  {
    v3 = sub_1C21F74(v3183, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1601;
  v1->m_Items[454] = (DataMasterBase_o *)v3183;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[454], (int64_t)v3183, v3184, v3185, v3186, v3187, v3188, v3189);
  v3190 = (EventMuralMaster_o *)sub_1C22084(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v3190, 0LL);
  if ( v3190 )
  {
    v3 = sub_1C21F74(v3190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1601;
  v1->m_Items[455] = (DataMasterBase_o *)v3190;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[455], (int64_t)v3190, v3191, v3192, v3193, v3194, v3195, v3196);
  v3197 = (ViewWaveEnemyMaster_o *)sub_1C22084(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v3197, 0LL);
  if ( v3197 )
  {
    v3 = sub_1C21F74(v3197, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1601;
  v1->m_Items[456] = (DataMasterBase_o *)v3197;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[456], (int64_t)v3197, v3198, v3199, v3200, v3201, v3202, v3203);
  v3204 = (BlankEarthSpotNavimenuMaster_o *)sub_1C22084(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v3204, 0LL);
  if ( v3204 )
  {
    v3 = sub_1C21F74(v3204, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1601;
  v1->m_Items[457] = (DataMasterBase_o *)v3204;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[457], (int64_t)v3204, v3205, v3206, v3207, v3208, v3209, v3210);
  v3211 = (BlankEarthGimmickMaster_o *)sub_1C22084(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v3211, 0LL);
  if ( v3211 )
  {
    v3 = sub_1C21F74(v3211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1601;
  v1->m_Items[458] = (DataMasterBase_o *)v3211;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[458], (int64_t)v3211, v3212, v3213, v3214, v3215, v3216, v3217);
  v3218 = (TerminalOverwriteMaster_o *)sub_1C22084(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v3218, 0LL);
  if ( v3218 )
  {
    v3 = sub_1C21F74(v3218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1601;
  v1->m_Items[459] = (DataMasterBase_o *)v3218;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[459], (int64_t)v3218, v3219, v3220, v3221, v3222, v3223, v3224);
  v3225 = (UserExchangeSvtMaster_o *)sub_1C22084(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v3225, 0LL);
  if ( v3225 )
  {
    v3 = sub_1C21F74(v3225, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1601;
  v1->m_Items[460] = (DataMasterBase_o *)v3225;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[460], (int64_t)v3225, v3226, v3227, v3228, v3229, v3230, v3231);
  v3232 = (WarBoardCommonReleaseMaster_o *)sub_1C22084(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v3232, 0LL);
  if ( v3232 )
  {
    v3 = sub_1C21F74(v3232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1601;
  v1->m_Items[461] = (DataMasterBase_o *)v3232;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[461], (int64_t)v3232, v3233, v3234, v3235, v3236, v3237, v3238);
  v3239 = (WarBoardEventMaster_o *)sub_1C22084(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v3239, 0LL);
  if ( v3239 )
  {
    v3 = sub_1C21F74(v3239, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1601;
  v1->m_Items[462] = (DataMasterBase_o *)v3239;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[462], (int64_t)v3239, v3240, v3241, v3242, v3243, v3244, v3245);
  v3246 = (WarBoardEventScriptMaster_o *)sub_1C22084(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v3246, 0LL);
  if ( v3246 )
  {
    v3 = sub_1C21F74(v3246, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1601;
  v1->m_Items[463] = (DataMasterBase_o *)v3246;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[463], (int64_t)v3246, v3247, v3248, v3249, v3250, v3251, v3252);
  v3253 = (WarBoardStageBossMaster_o *)sub_1C22084(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v3253, 0LL);
  if ( v3253 )
  {
    v3 = sub_1C21F74(v3253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1601;
  v1->m_Items[464] = (DataMasterBase_o *)v3253;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[464], (int64_t)v3253, v3254, v3255, v3256, v3257, v3258, v3259);
  v3260 = (WarBoardSquareIndexGroupMaster_o *)sub_1C22084(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v3260, 0LL);
  if ( v3260 )
  {
    v3 = sub_1C21F74(v3260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1601;
  v1->m_Items[465] = (DataMasterBase_o *)v3260;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[465], (int64_t)v3260, v3261, v3262, v3263, v3264, v3265, v3266);
  v3267 = (WarBoardActionTrendGroupMaster_o *)sub_1C22084(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v3267, 0LL);
  if ( v3267 )
  {
    v3 = sub_1C21F74(v3267, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1601;
  v1->m_Items[466] = (DataMasterBase_o *)v3267;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[466], (int64_t)v3267, v3268, v3269, v3270, v3271, v3272, v3273);
  v3274 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C22084(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v3274, 0LL);
  if ( v3274 )
  {
    v3 = sub_1C21F74(v3274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1601;
  v1->m_Items[467] = (DataMasterBase_o *)v3274;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[467], (int64_t)v3274, v3275, v3276, v3277, v3278, v3279, v3280);
  v3281 = (WarBoardReinforcementsMaster_o *)sub_1C22084(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v3281, 0LL);
  if ( v3281 )
  {
    v3 = sub_1C21F74(v3281, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1601;
  v1->m_Items[468] = (DataMasterBase_o *)v3281;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[468], (int64_t)v3281, v3282, v3283, v3284, v3285, v3286, v3287);
  v3288 = (WarBoardStageReinforcementsMaster_o *)sub_1C22084(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v3288, 0LL);
  if ( v3288 )
  {
    v3 = sub_1C21F74(v3288, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1601;
  v1->m_Items[469] = (DataMasterBase_o *)v3288;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[469], (int64_t)v3288, v3289, v3290, v3291, v3292, v3293, v3294);
  v3295 = (WarBoardFutureActionTrendMaster_o *)sub_1C22084(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v3295, 0LL);
  if ( v3295 )
  {
    v3 = sub_1C21F74(v3295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1601;
  v1->m_Items[470] = (DataMasterBase_o *)v3295;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[470], (int64_t)v3295, v3296, v3297, v3298, v3299, v3300, v3301);
  v3302 = (ServantProfilePushMaster_o *)sub_1C22084(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v3302, 0LL);
  if ( v3302 )
  {
    v3 = sub_1C21F74(v3302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1601;
  v1->m_Items[471] = (DataMasterBase_o *)v3302;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[471], (int64_t)v3302, v3303, v3304, v3305, v3306, v3307, v3308);
  v3309 = (MapGimmickPathMaster_o *)sub_1C22084(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v3309, 0LL);
  if ( v3309 )
  {
    v3 = sub_1C21F74(v3309, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1601;
  v1->m_Items[472] = (DataMasterBase_o *)v3309;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[472], (int64_t)v3309, v3310, v3311, v3312, v3313, v3314, v3315);
  v3316 = (MapGimmickPathReleaseMaster_o *)sub_1C22084(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v3316, 0LL);
  if ( v3316 )
  {
    v3 = sub_1C21F74(v3316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1601;
  v1->m_Items[473] = (DataMasterBase_o *)v3316;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[473], (int64_t)v3316, v3317, v3318, v3319, v3320, v3321, v3322);
  v3323 = (ServantOverwriteMaster_o *)sub_1C22084(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v3323, 0LL);
  if ( v3323 )
  {
    v3 = sub_1C21F74(v3323, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1601;
  v1->m_Items[474] = (DataMasterBase_o *)v3323;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[474], (int64_t)v3323, v3324, v3325, v3326, v3327, v3328, v3329);
  v3330 = (IndividualityPolicyMaster_o *)sub_1C22084(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v3330, 0LL);
  if ( v3330 )
  {
    v3 = sub_1C21F74(v3330, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1601;
  v1->m_Items[475] = (DataMasterBase_o *)v3330;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[475], (int64_t)v3330, v3331, v3332, v3333, v3334, v3335, v3336);
  v3337 = (IndividualityPersonalityMaster_o *)sub_1C22084(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v3337, 0LL);
  if ( v3337 )
  {
    v3 = sub_1C21F74(v3337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1601;
  v1->m_Items[476] = (DataMasterBase_o *)v3337;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[476], (int64_t)v3337, v3338, v3339, v3340, v3341, v3342, v3343);
  v3344 = (AttriMaster_o *)sub_1C22084(AttriMaster_TypeInfo);
  AttriMaster___ctor(v3344, 0LL);
  if ( v3344 )
  {
    v3 = sub_1C21F74(v3344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1601;
  v1->m_Items[477] = (DataMasterBase_o *)v3344;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[477], (int64_t)v3344, v3345, v3346, v3347, v3348, v3349, v3350);
  v3351 = (ServantVoicePatternMaster_o *)sub_1C22084(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v3351, 0LL);
  if ( v3351 )
  {
    v3 = sub_1C21F74(v3351, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1601;
  v1->m_Items[478] = (DataMasterBase_o *)v3351;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[478], (int64_t)v3351, v3352, v3353, v3354, v3355, v3356, v3357);
  v3358 = (UserGameCommonMaster_o *)sub_1C22084(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v3358, 0LL);
  if ( v3358 )
  {
    v3 = sub_1C21F74(v3358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1601;
  v1->m_Items[479] = (DataMasterBase_o *)v3358;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[479], (int64_t)v3358, v3359, v3360, v3361, v3362, v3363, v3364);
  v3365 = (ServantPhotoMaster_o *)sub_1C22084(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v3365, 0LL);
  if ( v3365 )
  {
    v3 = sub_1C21F74(v3365, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1601;
  v1->m_Items[480] = (DataMasterBase_o *)v3365;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[480], (int64_t)v3365, v3366, v3367, v3368, v3369, v3370, v3371);
  v3372 = (MasterPhotoMaster_o *)sub_1C22084(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v3372, 0LL);
  if ( v3372 )
  {
    v3 = sub_1C21F74(v3372, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1601;
  v1->m_Items[481] = (DataMasterBase_o *)v3372;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[481], (int64_t)v3372, v3373, v3374, v3375, v3376, v3377, v3378);
  v3379 = (WarMessageMaster_o *)sub_1C22084(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v3379, 0LL);
  if ( v3379 )
  {
    v3 = sub_1C21F74(v3379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1601;
  v1->m_Items[482] = (DataMasterBase_o *)v3379;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[482], (int64_t)v3379, v3380, v3381, v3382, v3383, v3384, v3385);
  v3386 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C22084(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v3386, 0LL);
  if ( v3386 )
  {
    v3 = sub_1C21F74(v3386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1601;
  v1->m_Items[483] = (DataMasterBase_o *)v3386;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[483], (int64_t)v3386, v3387, v3388, v3389, v3390, v3391, v3392);
  v3393 = (ExcludeMotionMaster_o *)sub_1C22084(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v3393, 0LL);
  if ( v3393 )
  {
    v3 = sub_1C21F74(v3393, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1601;
  v1->m_Items[484] = (DataMasterBase_o *)v3393;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[484], (int64_t)v3393, v3394, v3395, v3396, v3397, v3398, v3399);
  v3400 = (UserInterruptionQuestMaster_o *)sub_1C22084(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v3400, 0LL);
  if ( v3400 )
  {
    v3 = sub_1C21F74(v3400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1601;
  v1->m_Items[485] = (DataMasterBase_o *)v3400;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[485], (int64_t)v3400, v3401, v3402, v3403, v3404, v3405, v3406);
  v3407 = (ServantTransformMaster_o *)sub_1C22084(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v3407, 0LL);
  if ( v3407 )
  {
    v3 = sub_1C21F74(v3407, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1601;
  v1->m_Items[486] = (DataMasterBase_o *)v3407;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[486], (int64_t)v3407, v3408, v3409, v3410, v3411, v3412, v3413);
  v3414 = (MapUpdateScheduleMaster_o *)sub_1C22084(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v3414, 0LL);
  if ( v3414 )
  {
    v3 = sub_1C21F74(v3414, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1601;
  v1->m_Items[487] = (DataMasterBase_o *)v3414;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[487], (int64_t)v3414, v3415, v3416, v3417, v3418, v3419, v3420);
  v3421 = (QuestPhasePresentMaster_o *)sub_1C22084(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v3421, 0LL);
  if ( v3421 )
  {
    v3 = sub_1C21F74(v3421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1601;
  v1->m_Items[488] = (DataMasterBase_o *)v3421;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[488], (int64_t)v3421, v3422, v3423, v3424, v3425, v3426, v3427);
  v3428 = (UserAccountLinkageMaster_o *)sub_1C22084(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v3428, 0LL);
  if ( v3428 )
  {
    v3 = sub_1C21F74(v3428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1601;
  v1->m_Items[489] = (DataMasterBase_o *)v3428;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[489], (int64_t)v3428, v3429, v3430, v3431, v3432, v3433, v3434);
  v3435 = (MissionNaviTransitionMaster_o *)sub_1C22084(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v3435, 0LL);
  if ( v3435 )
  {
    v3 = sub_1C21F74(v3435, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1601;
  v1->m_Items[490] = (DataMasterBase_o *)v3435;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[490], (int64_t)v3435, v3436, v3437, v3438, v3439, v3440, v3441);
  v3442 = (MissionNaviQuestMaster_o *)sub_1C22084(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v3442, 0LL);
  if ( v3442 )
  {
    v3 = sub_1C21F74(v3442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1601;
  v1->m_Items[491] = (DataMasterBase_o *)v3442;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[491], (int64_t)v3442, v3443, v3444, v3445, v3446, v3447, v3448);
  v3449 = (EventTradeGoodsMaster_o *)sub_1C22084(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v3449, 0LL);
  if ( v3449 )
  {
    v3 = sub_1C21F74(v3449, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1601;
  v1->m_Items[492] = (DataMasterBase_o *)v3449;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[492], (int64_t)v3449, v3450, v3451, v3452, v3453, v3454, v3455);
  v3456 = (EventTradeStoreMaster_o *)sub_1C22084(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v3456, 0LL);
  if ( v3456 )
  {
    v3 = sub_1C21F74(v3456, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1601;
  v1->m_Items[493] = (DataMasterBase_o *)v3456;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[493], (int64_t)v3456, v3457, v3458, v3459, v3460, v3461, v3462);
  v3463 = (EventTradePickupMaster_o *)sub_1C22084(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v3463, 0LL);
  if ( v3463 )
  {
    v3 = sub_1C21F74(v3463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1601;
  v1->m_Items[494] = (DataMasterBase_o *)v3463;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[494], (int64_t)v3463, v3464, v3465, v3466, v3467, v3468, v3469);
  v3470 = (UserEventTradeMaster_o *)sub_1C22084(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v3470, 0LL);
  if ( v3470 )
  {
    v3 = sub_1C21F74(v3470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1601;
  v1->m_Items[495] = (DataMasterBase_o *)v3470;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[495], (int64_t)v3470, v3471, v3472, v3473, v3474, v3475, v3476);
  v3477 = (PaymentHistoryMaster_o *)sub_1C22084(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v3477, 0LL);
  if ( v3477 )
  {
    v3 = sub_1C21F74(v3477, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1601;
  v1->m_Items[496] = (DataMasterBase_o *)v3477;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[496], (int64_t)v3477, v3478, v3479, v3480, v3481, v3482, v3483);
  v3484 = (UserExternalPaymentStoneMaster_o *)sub_1C22084(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v3484, 0LL);
  if ( v3484 )
  {
    v3 = sub_1C21F74(v3484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1601;
  v1->m_Items[497] = (DataMasterBase_o *)v3484;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[497], (int64_t)v3484, v3485, v3486, v3487, v3488, v3489, v3490);
  v3491 = (QuestPhaseIndividualityMaster_o *)sub_1C22084(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v3491, 0LL);
  if ( v3491 )
  {
    v3 = sub_1C21F74(v3491, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1601;
  v1->m_Items[498] = (DataMasterBase_o *)v3491;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[498], (int64_t)v3491, v3492, v3493, v3494, v3495, v3496, v3497);
  v3498 = (ViewGachaFeaturedServantMaster_o *)sub_1C22084(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v3498, 0LL);
  if ( v3498 )
  {
    v3 = sub_1C21F74(v3498, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1601;
  v1->m_Items[499] = (DataMasterBase_o *)v3498;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[499], (int64_t)v3498, v3499, v3500, v3501, v3502, v3503, v3504);
  v3505 = (UserGachaPickupCollateralMaster_o *)sub_1C22084(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v3505, 0LL);
  if ( v3505 )
  {
    v3 = sub_1C21F74(v3505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1601;
  v1->m_Items[500] = (DataMasterBase_o *)v3505;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[500], (int64_t)v3505, v3506, v3507, v3508, v3509, v3510, v3511);
  v3512 = (GachaPickupCollateralMaster_o *)sub_1C22084(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v3512, 0LL);
  if ( v3512 )
  {
    v3 = sub_1C21F74(v3512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1601;
  v1->m_Items[501] = (DataMasterBase_o *)v3512;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[501], (int64_t)v3512, v3513, v3514, v3515, v3516, v3517, v3518);
  v3519 = (GachaPickupCollateralGroupMaster_o *)sub_1C22084(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v3519, 0LL);
  if ( v3519 )
  {
    v3 = sub_1C21F74(v3519, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1601;
  v1->m_Items[502] = (DataMasterBase_o *)v3519;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[502], (int64_t)v3519, v3520, v3521, v3522, v3523, v3524, v3525);
  v3526 = (BattlePointMaster_o *)sub_1C22084(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v3526, 0LL);
  if ( v3526 )
  {
    v3 = sub_1C21F74(v3526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1601;
  v1->m_Items[503] = (DataMasterBase_o *)v3526;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[503], (int64_t)v3526, v3527, v3528, v3529, v3530, v3531, v3532);
  v3533 = (BattlePointPhaseMaster_o *)sub_1C22084(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v3533, 0LL);
  if ( v3533 )
  {
    v3 = sub_1C21F74(v3533, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1601;
  v1->m_Items[504] = (DataMasterBase_o *)v3533;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[504], (int64_t)v3533, v3534, v3535, v3536, v3537, v3538, v3539);
  v3540 = (ServantBattlePointMaster_o *)sub_1C22084(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v3540, 0LL);
  if ( v3540 )
  {
    v3 = sub_1C21F74(v3540, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1601;
  v1->m_Items[505] = (DataMasterBase_o *)v3540;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[505], (int64_t)v3540, v3541, v3542, v3543, v3544, v3545, v3546);
  v3547 = (EffectMovieMaster_o *)sub_1C22084(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v3547, 0LL);
  if ( v3547 )
  {
    v3 = sub_1C21F74(v3547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1601;
  v1->m_Items[506] = (DataMasterBase_o *)v3547;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[506], (int64_t)v3547, v3548, v3549, v3550, v3551, v3552, v3553);
  v3554 = (PaymentLimitMaster_o *)sub_1C22084(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v3554, 0LL);
  if ( v3554 )
  {
    v3 = sub_1C21F74(v3554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1601;
  v1->m_Items[507] = (DataMasterBase_o *)v3554;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[507], (int64_t)v3554, v3555, v3556, v3557, v3558, v3559, v3560);
  v3561 = (UserPaymentLimitMaster_o *)sub_1C22084(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v3561, 0LL);
  if ( v3561 )
  {
    v3 = sub_1C21F74(v3561, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1601;
  v1->m_Items[508] = (DataMasterBase_o *)v3561;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[508], (int64_t)v3561, v3562, v3563, v3564, v3565, v3566, v3567);
  v3568 = (RoadmapMaster_o *)sub_1C22084(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v3568, 0LL);
  if ( v3568 )
  {
    v3 = sub_1C21F74(v3568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1601;
  v1->m_Items[509] = (DataMasterBase_o *)v3568;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[509], (int64_t)v3568, v3569, v3570, v3571, v3572, v3573, v3574);
  v3575 = (UserRecommendSupportMaster_o *)sub_1C22084(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v3575, 0LL);
  if ( v3575 )
  {
    v3 = sub_1C21F74(v3575, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1601;
  v1->m_Items[510] = (DataMasterBase_o *)v3575;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[510], (int64_t)v3575, v3576, v3577, v3578, v3579, v3580, v3581);
  v3582 = (RecommendSupportQuestMaster_o *)sub_1C22084(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v3582, 0LL);
  if ( v3582 )
  {
    v3 = sub_1C21F74(v3582, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1601;
  v1->m_Items[511] = (DataMasterBase_o *)v3582;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[511], (int64_t)v3582, v3583, v3584, v3585, v3586, v3587, v3588);
  v3589 = (RecommendAdviceMessageMaster_o *)sub_1C22084(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v3589, 0LL);
  if ( v3589 )
  {
    v3 = sub_1C21F74(v3589, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1601;
  v1->m_Items[512] = (DataMasterBase_o *)v3589;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[512], (int64_t)v3589, v3590, v3591, v3592, v3593, v3594, v3595);
  v3596 = (UserRecommendFollowerMaster_o *)sub_1C22084(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v3596, 0LL);
  if ( v3596 )
  {
    v3 = sub_1C21F74(v3596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1601;
  v1->m_Items[513] = (DataMasterBase_o *)v3596;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[513], (int64_t)v3596, v3597, v3598, v3599, v3600, v3601, v3602);
  v3603 = (ItemDropEfficiencyMaster_o *)sub_1C22084(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v3603, 0LL);
  if ( v3603 )
  {
    v3 = sub_1C21F74(v3603, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1601;
  v1->m_Items[514] = (DataMasterBase_o *)v3603;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[514], (int64_t)v3603, v3604, v3605, v3606, v3607, v3608, v3609);
  v3610 = (BlankEarthGimmickAddMaster_o *)sub_1C22084(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v3610, 0LL);
  if ( v3610 )
  {
    v3 = sub_1C21F74(v3610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1601;
  v1->m_Items[515] = (DataMasterBase_o *)v3610;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[515], (int64_t)v3610, v3611, v3612, v3613, v3614, v3615, v3616);
  v3617 = (WarReleaseMaster_o *)sub_1C22084(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v3617, 0LL);
  if ( v3617 )
  {
    v3 = sub_1C21F74(v3617, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1601;
  v1->m_Items[516] = (DataMasterBase_o *)v3617;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[516], (int64_t)v3617, v3618, v3619, v3620, v3621, v3622, v3623);
  v3624 = (SelectBonusBaseMaster_o *)sub_1C22084(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v3624, 0LL);
  if ( v3624 )
  {
    v3 = sub_1C21F74(v3624, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1601;
  v1->m_Items[517] = (DataMasterBase_o *)v3624;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[517], (int64_t)v3624, v3625, v3626, v3627, v3628, v3629, v3630);
  v3631 = (SelectBonusMaster_o *)sub_1C22084(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v3631, 0LL);
  if ( v3631 )
  {
    v3 = sub_1C21F74(v3631, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1601;
  v1->m_Items[518] = (DataMasterBase_o *)v3631;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[518], (int64_t)v3631, v3632, v3633, v3634, v3635, v3636, v3637);
  v3638 = (MyroomServantSpecialImageMaster_o *)sub_1C22084(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v3638, 0LL);
  if ( v3638 )
  {
    v3 = sub_1C21F74(v3638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1601;
  v1->m_Items[519] = (DataMasterBase_o *)v3638;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[519], (int64_t)v3638, v3639, v3640, v3641, v3642, v3643, v3644);
  v3645 = (ShopResetMaster_o *)sub_1C22084(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v3645, 0LL);
  if ( v3645 )
  {
    v3 = sub_1C21F74(v3645, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1601;
  v1->m_Items[520] = (DataMasterBase_o *)v3645;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[520], (int64_t)v3645, v3646, v3647, v3648, v3649, v3650, v3651);
  v3652 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C22084(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v3652, 0LL);
  if ( v3652 )
  {
    v3 = sub_1C21F74(v3652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1601;
  v1->m_Items[521] = (DataMasterBase_o *)v3652;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[521], (int64_t)v3652, v3653, v3654, v3655, v3656, v3657, v3658);
  v3659 = (FriendshipServantMaster_o *)sub_1C22084(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v3659, 0LL);
  if ( v3659 )
  {
    v3 = sub_1C21F74(v3659, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1601;
  v1->m_Items[522] = (DataMasterBase_o *)v3659;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[522], (int64_t)v3659, v3660, v3661, v3662, v3663, v3664, v3665);
  v3666 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C22084(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v3666, 0LL);
  if ( v3666 )
  {
    v3 = sub_1C21F74(v3666, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1601;
  v1->m_Items[523] = (DataMasterBase_o *)v3666;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[523], (int64_t)v3666, v3667, v3668, v3669, v3670, v3671, v3672);
  v3673 = (ChaldeaGatePickupMaster_o *)sub_1C22084(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v3673, 0LL);
  if ( v3673 )
  {
    v3 = sub_1C21F74(v3673, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1601;
  v1->m_Items[524] = (DataMasterBase_o *)v3673;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[524], (int64_t)v3673, v3674, v3675, v3676, v3677, v3678, v3679);
  v3680 = (WarGroupIgnoreMaster_o *)sub_1C22084(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v3680, 0LL);
  if ( v3680 )
  {
    v3 = sub_1C21F74(v3680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20D )
    goto LABEL_1601;
  v1->m_Items[525] = (DataMasterBase_o *)v3680;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[525], (int64_t)v3680, v3681, v3682, v3683, v3684, v3685, v3686);
  v3687 = (ImagePartsGroupMaster_o *)sub_1C22084(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v3687, 0LL);
  if ( v3687 )
  {
    v3 = sub_1C21F74(v3687, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20E )
    goto LABEL_1601;
  v1->m_Items[526] = (DataMasterBase_o *)v3687;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[526], (int64_t)v3687, v3688, v3689, v3690, v3691, v3692, v3693);
  v3694 = (UserImagePartsGroupMaster_o *)sub_1C22084(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v3694, 0LL);
  if ( v3694 )
  {
    v3 = sub_1C21F74(v3694, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x20F )
    goto LABEL_1601;
  v1->m_Items[527] = (DataMasterBase_o *)v3694;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[527], (int64_t)v3694, v3695, v3696, v3697, v3698, v3699, v3700);
  v3701 = (MissionItemDisplayMaster_o *)sub_1C22084(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v3701, 0LL);
  if ( v3701 )
  {
    v3 = sub_1C21F74(v3701, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x210 )
    goto LABEL_1601;
  v1->m_Items[528] = (DataMasterBase_o *)v3701;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[528], (int64_t)v3701, v3702, v3703, v3704, v3705, v3706, v3707);
  v3708 = (QuestUseItemGroupMaster_o *)sub_1C22084(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v3708, 0LL);
  if ( v3708 )
  {
    v3 = sub_1C21F74(v3708, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x211 )
    goto LABEL_1601;
  v1->m_Items[529] = (DataMasterBase_o *)v3708;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[529], (int64_t)v3708, v3709, v3710, v3711, v3712, v3713, v3714);
  v3715 = (QuestUseItemPickupMaster_o *)sub_1C22084(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v3715, 0LL);
  if ( v3715 )
  {
    v3 = sub_1C21F74(v3715, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1602;
  }
  if ( *p_max_length <= 0x212 )
    goto LABEL_1601;
  v1->m_Items[530] = (DataMasterBase_o *)v3715;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[530], (int64_t)v3715, v3716, v3717, v3718, v3719, v3720, v3721);
  v3722 = (UserEventItemLinkSvtMaster_o *)sub_1C22084(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v3722, 0LL);
  if ( v3722 )
  {
    v3 = sub_1C21F74(v3722, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1602:
      v3730 = sub_1C220B8(v3);
      sub_1C21F60(v3730, 0LL);
    }
  }
  if ( *p_max_length <= 0x213 )
LABEL_1601:
    sub_1C2209C(v3, v4);
  v1->m_Items[531] = (DataMasterBase_o *)v3722;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v1->m_Items[531], (int64_t)v3722, v3723, v3724, v3725, v3726, v3727, v3728);
  return v1;
}


void __fastcall DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v5; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v7; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4BDC066 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    byte_4BDC066 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v5 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v7 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v7);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int v14; // w26
  Il2CppObject *v15; // x0
  System_String_o *v16; // x21
  System_String_o *v17; // x20
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDC063 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8704/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4BDC063 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_masterCheckName, (int64_t)v3, v5, v6, v7, v8, v9, v10);
  v14 = 1;
  do
  {
    v30 = v14;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v11, v12, v13);
    v16 = System_String__Format((System_String_o *)StringLiteral_8704/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v15, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get(v16, 0LL);
    if ( System_String__op_Equality(v17, v16, 0LL) )
      break;
    v25 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v25->fields._items;
      v27 = Method_System_Collections_Generic_List_string__Add__;
      ++v25->fields._version;
      if ( items )
        continue;
    }
    sub_1C22094(v25, v18);
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)v17,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v17, v19, v20, v21, v22, v23, v24);
    }
    ++v14;
  }
  while ( v14 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2FAFE04 *method)
{
  long double v2; // q0
  const MethodInfo_2FAFE04_RGCTXs *rgctx_data; // x8
  const MethodInfo_2FAFE04 *_1_TMaster; // x19
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v7; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v10; // x20
  long double v11; // q0
  Il2CppObject *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x19
  System_Enum_o v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+18h] [xbp-38h]
  int v23; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1C21E38(&UnityEngine_Debug_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&DataNameKind_Kind_TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    sub_1C21E38(&StringLiteral_21703/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C73D70();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_1C73D70();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C73D14(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v10) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v10,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v10 = value;
    _1_TMaster = (const MethodInfo_2FAFE04 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2FAFE04 *)sub_1C73D14(v11);
    if ( !v10 )
      return 0LL;
    result = (Il2CppObject *)sub_1C21F74(v10, _1_TMaster);
    if ( result )
      return result;
    sub_1C22354(v10);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v25.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v25, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C22094(rgctxDataDummy, method);
  v14 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v23 = (int)v10;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v15, v16, v17);
  v22 = (int)v10;
  v21.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v21.monitor = (void *)-1LL;
  v19 = (Il2CppObject *)System_Enum__ToString(&v21, 0LL);
  v20 = (Il2CppObject *)System_String__Format_63129916((System_String_o *)StringLiteral_21703/*"master[{0}] is null[{1}:{2}]"*/, v14, v18, v19, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v20, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2FAFDB0 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FAFE04 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BDC04E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_CreateMasterData__);
    sub_1C21E38(&System_Func_DataMasterBase____TypeInfo);
    byte_4BDC04E = 1;
  }
  v3 = (System_Func_object__o *)sub_1C22084(System_Func_DataMasterBase____TypeInfo);
  System_Func_object____ctor(v3, 0LL, Method_DataManager_CreateMasterData__, 0LL);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v3, v4);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v7; // x19
  int64_t v8; // x21
  System_Collections_Generic_Dictionary_int__object__o *v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int v16; // w8
  unsigned int v17; // w23
  __int64 v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v4 = this;
  if ( (byte_4BDC04F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1C21E38(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4BDC04F = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0LL;
      while ( (unsigned int)v7 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v7];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *, const MethodInfo *))&this->klass[1]._1.byval_arg.bits)(
                                  this,
                                  this->klass[1]._1.this_arg.data,
                                  method);
        max_length = datalist->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v8 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))createMasterDataMethod->fields.m_target)(
                 createMasterDataMethod->fields.original_method_info,
                 *(_QWORD *)&createMasterDataMethod->fields.extra_arg,
                 method),
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1C22094(this, createMasterDataMethod);
    }
    v16 = *(_DWORD *)(v8 + 24);
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( v17 < v16 )
      {
        v18 = *(_QWORD *)(v8 + 8LL * (int)v17 + 32);
        if ( !v18 || !v9 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          *(_DWORD *)(v18 + 16),
          (Il2CppObject *)v18,
          (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v16 = *(_DWORD *)(v8 + 24);
        if ( (int)++v17 >= v16 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C2209C(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.datalist, v8, v10, v11, v12, v13, v14, v15);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.lookup, (int64_t)v9, v19, v20, v21, v22, v23, v24);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
{
  void *v3; // x25
  DataManager_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v8; // x26
  unsigned __int64 i; // x27
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v14; // w23
  Il2CppObject *Item; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v24; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v26; // x25
  __int64 Index_object; // x0
  __int64 v28; // x1
  const MethodInfo_376BF2C *v29; // x3
  struct DataMasterBase_array *v30; // x8
  DataMasterBase_o *v31; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo_376BF2C *v36; // x3
  __int64 v37; // x0
  __int64 v38; // x1
  Il2CppObject *lockCountObj; // x22
  int v40; // w1
  _QWORD **v41; // x20
  __int64 v42; // x0
  Il2CppObject *v43; // x20
  __int64 v44; // x0
  struct System_Threading_SynchronizationContext_o *v45; // x20
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  System_Threading_SendOrPostCallback_o *v49; // x21
  __int64 v50; // x0
  Il2CppObject *v51; // x23
  __int64 v52; // x0
  intptr_t v53; // w0
  __int64 v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  _QWORD *exception; // x0
  __int64 v62; // [xsp+10h] [xbp-90h]
  __int64 v63; // [xsp+18h] [xbp-88h] BYREF
  __int64 v64; // [xsp+20h] [xbp-80h]
  __int64 v65; // [xsp+28h] [xbp-78h] BYREF
  __int64 v66; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v68; // 0:x0.16
  System_Nullable_long__o v69; // 0:x0.16

  v5 = this;
  if ( (byte_4BDC060 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    sub_1C21E38(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1C21E38(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1C21E38(&DataManager___c__DisplayClass58_0_TypeInfo);
    byte_4BDC060 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C22094(this, indexList);
  v6 = sub_1C21F74(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v62 = sub_1C21EE0(byte___TypeInfo, 2000LL);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0LL; i != v8; ++i )
      {
        v10 = sub_1C22084(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1C2209C(v11, v12);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C22094(0LL, v12);
        v14 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v14,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1C22094(Item, Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)Item, v16, v17, v18, v19, v20, v21);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C22094(0LL, v22);
        v24 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v14,
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v26 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v26,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v26,
                           (const MethodInfo_30AB9A0 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v30 = v5->fields.datalist;
            if ( !v30 )
              sub_1C22094(Index_object, v28);
            if ( (unsigned int)Index_object >= v30->max_length )
              sub_1C2209C(Index_object, v28);
            if ( !v24 )
              sub_1C22094(Index_object, v28);
            if ( !LODWORD(v24[1].monitor) )
              sub_1C2209C(Index_object, v28);
            v31 = v30->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v68.fields.value = (int64_t)v24[2].klass;
            v65 = 0LL;
            v66 = 0LL;
            *(_QWORD *)&v68.fields.hasValue = &v65;
            System_Nullable_long____ctor(v68, Method_System_Nullable_long___ctor__, v29);
            if ( LODWORD(v24[1].monitor) <= 1 )
              sub_1C2209C(v34, v35);
            v69.fields.value = (int64_t)v24[2].monitor;
            v63 = 0LL;
            v64 = 0LL;
            *(_QWORD *)&v69.fields.hasValue = &v63;
            System_Nullable_long____ctor(v69, Method_System_Nullable_long___ctor__, v36);
            if ( !v31 )
              sub_1C22094(v37, v38);
            (*(void (__fastcall **)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, void *))&v31->klass[1]._1.byval_arg.bits)(
              v31,
              masterDataBytes,
              context,
              v65,
              v66,
              v63,
              v64,
              v62,
              v31->klass[1]._1.this_arg.data);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_64341908(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1C22354(indexList);
    if ( v40 != 1 )
      sub_1D0C8C8();
    v41 = (_QWORD **)__cxa_begin_catch(v3);
    v42 = sub_1C21E4C(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v42, **v41) & 1) != 0 )
    {
      __cxa_end_catch();
      v43 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64341908(v43, lockTaken, 0LL);
    }
    else
    {
      v44 = sub_1C21E4C(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v44, **v41) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v41;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v45 = v5->fields.context;
      v46 = sub_1C21E4C(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v46 + 224) )
        j_il2cpp_runtime_class_init_0(v46);
      v47 = sub_1C21E4C(&DataManager___c_TypeInfo);
      v49 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v47 + 184) + 8LL);
      if ( !v49 )
      {
        v50 = sub_1C21E4C(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v50 + 224) )
          j_il2cpp_runtime_class_init_0(v50);
        v51 = **(Il2CppObject ***)(sub_1C21E4C(&DataManager___c_TypeInfo) + 184);
        v52 = sub_1C21E4C(&System_Threading_SendOrPostCallback_TypeInfo);
        v49 = (System_Threading_SendOrPostCallback_o *)sub_1C22084(v52);
        v53 = sub_1C21E4C(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v49, v51, v53, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1C21E4C(&DataManager___c_TypeInfo) + 184) + 8LL) = v49;
        v54 = sub_1C21E4C(&DataManager___c_TypeInfo);
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)(*(_QWORD *)(v54 + 184) + 8LL),
          (int64_t)v49,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      if ( !v45 )
        sub_1C22094(v47, v48);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v45->klass->vtable._5_Post.method)(
        v45,
        v49,
        0LL,
        v45->klass->vtable._6_OperationStarted.methodPtr);
      v43 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64341908(v43, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v43, 0LL);
  }
}


void __fastcall DataManager__OnDestroy(DataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DataManager__StopWriteLocalFile(this, method);
  DataManager__StopMasterLoadThread(this, v3);
}


void __fastcall DataManager__StartMasterLoadThread(
        DataManager_o *this,
        int32_t maxIndex,
        System_Collections_Generic_List_int__o *loadedIndices,
        const MethodInfo *method)
{
  int64_t v7; // x23
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_int__o *v37; // x0
  System_Int32_array *v38; // x21
  System_Comparison_int__o *v39; // x22
  __int64 v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Threading_ParameterizedThreadStart_o *v47; // x24
  System_Threading_Thread_o *v48; // x23
  System_Func_int__bool__o *v49; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Int32_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  int v62; // w8
  bool v63; // nf

  if ( (byte_4BDC05E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Sort_int____77625096);
    sub_1C21E38(&System_Comparison_int__TypeInfo);
    sub_1C21E38(&Method_DataManager_LoadMasterDataThread__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1C21E38(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C21E38(&System_Threading_Thread_TypeInfo);
    sub_1C21E38(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__);
    sub_1C21E38(&DataManager___c__DisplayClass56_0_TypeInfo);
    sub_1C21E38(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__);
    sub_1C21E38(&DataManager___c__DisplayClass56_1_TypeInfo);
    byte_4BDC05E = 1;
  }
  v7 = sub_1C22084(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)loadedIndices, v16, v17, v18, v19, v20, v21);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.context, (int64_t)Current, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v29;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.masterLoadThreads, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  v37 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v38 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  v39 = (System_Comparison_int__o *)sub_1C22084(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v39,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__49796848(
    v38,
    (System_Comparison_T__o *)v39,
    (const MethodInfo_2F7D6F0 *)Method_System_Array_Sort_int____77625096);
  v40 = sub_1C22084(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
LABEL_14:
    sub_1C22094(v8, v9);
  *(_QWORD *)(v40 + 24) = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 24), v7, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v40 + 16) = 0;
  do
  {
    v47 = (System_Threading_ParameterizedThreadStart_o *)sub_1C22084(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v47,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v48 = (System_Threading_Thread_o *)sub_1C22084(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_64377988(v48, v47, 0LL);
    if ( !v48 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v48, 1, 0LL);
    v49 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v49,
      (Il2CppObject *)v40,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v50 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
    v51 = System_Linq_Enumerable__ToArray_int_(
            v50,
            (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_64378568(v48, &v51->obj, 0LL);
    v8 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v8->fields._items;
    v59 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v8->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v48,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v61[4] = (Il2CppClass *)v48;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v48, v52, v53, v54, v55, v56, v57);
    }
    v62 = *(_DWORD *)(v40 + 16) + 1;
    v63 = *(_DWORD *)(v40 + 16) - 4 < 0;
    *(_DWORD *)(v40 + 16) = v62;
  }
  while ( v63 != __OFSUB__(v62, 5) );
}


void __fastcall DataManager__StartWriteLocalFile(
        DataManager_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Threading_ParameterizedThreadStart_o *v10; // x21
  System_Threading_Thread_o *v11; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1

  if ( (byte_4BDC061 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_WriteLocalFileThread__);
    sub_1C21E38(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C21E38(&System_Threading_Thread_TypeInfo);
    byte_4BDC061 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.writeMasterDataThreadException,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Threading_ParameterizedThreadStart_o *)sub_1C22084(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v11 = (System_Threading_Thread_o *)sub_1C22084(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_64377988(v11, v10, 0LL);
  this->fields.writeMasterDataThread = v11;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_writeMasterDataThread, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_writeMasterDataThread )
    sub_1C22094(0LL, v19);
  System_Threading_Thread__Start_64378568(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  PartyOrganizationUtility_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDC05F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4BDC05F = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (PartyOrganizationUtility_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C22094(Item, v7);
      v8 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0LL) )
        System_Threading_Thread__Abort(v8, 0LL);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0LL;
    sub_1C21DDC(p_masterLoadThreads, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0LL) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1C22094(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_Stream_o *v7; // x22
  System_IO_BinaryWriter_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v19; // w22
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x0
  __int64 v31; // x1
  System_IO_BinaryWriter_c *v32; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  System_IO_Stream_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4BDC062 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDC062 = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v5 = param;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v5, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v7 = CatAndMouseGame__CatGameZ(v6, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63353968(v8, v7, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C22094(v9, v10);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v8 )
      goto LABEL_34;
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v19,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C22094(0LL, v21);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C2209C(Item, v21);
      if ( !v8 )
        sub_1C22094(Item, v21);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._18_Write.methodPtr);
      v23 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v23 )
        sub_1C22094(0LL, v22);
      masterDataBytes = this->fields.masterDataBytes;
      v25 = System_Collections_Generic_List_object___get_Item(
              v23,
              v19,
              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v25 )
        sub_1C22094(0LL, v26);
      if ( !LODWORD(v25[1].monitor) )
        sub_1C2209C(v25, v26);
      if ( !this->fields.saveDataMapList )
        sub_1C22094(v25, v26);
      klass = v25[2].klass;
      v28 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v19,
              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v28 )
        sub_1C22094(0LL, v29);
      if ( LODWORD(v28[1].monitor) <= 1 )
        sub_1C2209C(v28, v29);
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._11_Write.method)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v28[2].monitor),
              v8->klass->vtable._12_Write.methodPtr);
      if ( size == ++v19 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C22094(v30, v31);
    }
  }
  v32 = v8->klass;
  v33 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v35 = sub_1C73E18(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v8, *(_QWORD *)(v35 + 8));
LABEL_34:
  if ( v6 )
  {
    v36 = v6->klass;
    v37 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_39;
      }
      v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
    }
    else
    {
LABEL_39:
      v39 = sub_1C73E18(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v39)(v6, *(_QWORD *)(v39 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v11, v12, v13, v14, v15, v16);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDC049 & 1) == 0 )
  {
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDC049 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_63126736(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDC048 & 1) == 0 )
  {
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDC048 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_63126736(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4BDC046 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDC046 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDC047 & 1) == 0 )
  {
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDC047 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_63126736(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC054 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC054 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t __fastcall DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC055 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC055 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dateVersion;
}


uint32_t __fastcall DataManager__getMdk(
        DataManager_o *this,
        System_String_o *name,
        int32_t version,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v7; // x1
  System_Byte_array *v8; // x20
  uint32_t v9; // w0
  int32_t v10; // w11
  unsigned __int8 v11; // w13
  unsigned int v12; // w14
  uint32_t v13; // w11
  unsigned __int8 v14; // w9
  unsigned __int8 v15; // w12
  unsigned __int8 v16; // w8
  int v17; // w10

  if ( (byte_4BDC064 & 1) == 0 )
  {
    sub_1C21E38(&Crc32_TypeInfo);
    byte_4BDC064 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C22094(0LL, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v9 = Crc32__Compute(v8, 0LL);
  v10 = version + 3;
  if ( version >= 0 )
    v10 = version;
  v11 = 3 * version + 1;
  v12 = version - (v10 & 0xFFFFFFFC);
  v13 = HIBYTE(v9);
  switch ( v12 )
  {
    case 1u:
      v16 = v9 - v11;
      v15 = BYTE2(v9) + v11;
      v14 = BYTE1(v9) * (v11 & 0xF);
      v17 = v13 ^ v11;
      break;
    case 2u:
      v16 = v9 ^ v11;
      v14 = BYTE1(v9) + v11;
      v15 = BYTE2(v9) * (v11 & 0xF);
      v17 = v13 - v11;
      break;
    case 3u:
      v14 = BYTE1(v9) - v11;
      v15 = BYTE2(v9) ^ v11;
      v16 = v9 * (v11 & 0xF);
      v17 = v13 + v11;
      break;
    default:
      v16 = v9 + v11;
      v14 = BYTE1(v9) ^ v11;
      v15 = BYTE2(v9) - v11;
      v17 = v13 * (v11 & 0xF);
      break;
  }
  return (v17 << 24) | (v15 << 16) | (v14 << 8) | (v16 << 8);
}


System_String_o *__fastcall DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4BDC04A & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&CacheFolderName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDC04A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_63126736(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC059 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC059 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t __fastcall DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC058 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC058 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t __fastcall DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
{
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v4; // w10
  DataMasterBase_o *v5; // x11

  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_8;
  max_length = datalist->max_length;
  if ( max_length >= 1 )
  {
    this = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v5 = datalist->m_Items[v4];
      if ( !v5 )
        break;
      ++v4;
      this = (DataManager_o *)(unsigned int)(v5->fields.revision + (_DWORD)this);
      if ( max_length == v4 )
        return (int)this;
    }
LABEL_8:
    sub_1C22094(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC051 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC051 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t __fastcall DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BDC05C & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC05C = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->updateMasterDataResult;
}


bool __fastcall DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDC05B & 1) == 0 )
  {
    sub_1C21E38(&DataManager__readMasterData_d__47_TypeInfo);
    byte_4BDC05B = 1;
  }
  v3 = sub_1C22084(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  DataManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v7; // w2
  int v8; // w9
  ManagerConfig_c *v9; // x0
  DataManager_c *v10; // x0
  System_String_o *CacheListFileName; // x21
  System_String_o *AllText; // x20
  System_String_o *v13; // x20
  System_Char_array *v14; // x0
  System_String_o *v15; // x20
  System_Char_array *v16; // x0
  il2cpp_array_size_t max_length; // w8
  int v18; // w22
  __int64 *v19; // x8
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x21
  System_String_o *v23; // x21
  System_String_o *v24; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v26; // x1
  System_Byte_array *v27; // x22
  uint32_t v28; // w22
  System_Char_array *v29; // x0
  il2cpp_array_size_t v30; // w8
  DataManager_o *v31; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v33; // x21
  DataManager_o *v34; // x21
  System_String_o *v35; // x0
  ManagerConfig_c *v36; // x8
  System_String_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  DataManager_o *v44; // x20
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  PartyOrganizationUtility_o *p_saveNameList; // x0
  int v75; // w22
  int64_t v76; // x0
  DataManager_c *v77; // x8
  int64_t v78; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v80; // x22
  unsigned int v81; // w23
  System_String_o *v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  DataManager_o *v89; // x8
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v93; // x8
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x1
  DataManager_c *v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  void *v115; // x1
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  void *v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // [xsp+8h] [xbp-58h] BYREF
  int v149; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4BDC069 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_5223/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1C21E38(&StringLiteral_5226/*"DataManager version load error : list file parameter error"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    sub_1C21E38(&StringLiteral_821/*") -> ("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_21679/*"master versiton different ("*/);
    sub_1C21E38(&StringLiteral_5227/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C21E38(&StringLiteral_5228/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1C21E38(&StringLiteral_5225/*"DataManager version load error : list file break"*/);
    byte_4BDC069 = 1;
  }
  v149 = 0;
  v148 = 0LL;
  saveNameList = v2->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v5 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v7 = saveDataMapList->fields._size;
  v8 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v7, 0LL);
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v10 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v13 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v13 )
  {
    v14 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 1LL);
    if ( !v14 )
      sub_1C22094(0LL, 0LL);
    if ( !v14->max_length )
      sub_1C2209C(v14, v14);
    v14->m_Items[2] = -257;
    v15 = System_String__Trim_63145224(v13, v14, 0LL);
    v16 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
    if ( !v16 )
      sub_1C22094(0LL, 0LL);
    max_length = v16->max_length;
    if ( !max_length )
      sub_1C2209C(v16, v16);
    v16->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1C2209C(v16, v16);
    v16->m_Items[3] = 10;
    if ( !v15 )
      sub_1C22094(v16, v16);
    v18 = System_String__IndexOfAny(v15, v16, 0LL);
    if ( v18 < 2 )
    {
      v19 = &StringLiteral_5227/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v20 = System_String__Substring_63134480(v15, 0, v18, 0LL);
    v22 = v20;
    if ( !v20 )
      sub_1C22094(0LL, v21);
    if ( System_String__StartsWith(v20, (System_String_o *)StringLiteral_25605/*"~"*/, 0LL) )
    {
      v23 = System_String__Substring(v22, 1, 0LL);
      v24 = System_String__Substring(v15, v18 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1C22094(0LL, v26);
      v27 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v24,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v28 = Crc32__Compute(v27, 0LL);
      if ( System_UInt32__Parse(v23, 0LL) == v28 )
      {
        v29 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
        if ( !v29 )
          sub_1C22094(0LL, 0LL);
        v30 = v29->max_length;
        if ( !v30 )
          sub_1C2209C(v29, v29);
        v29->m_Items[2] = 13;
        if ( v30 == 1 )
          sub_1C2209C(v29, v29);
        v29->m_Items[3] = 10;
        if ( !v24 )
          sub_1C22094(v29, v29);
        this = (DataManager_o *)System_String__Split_63137868(v24, v29, 1, 0LL);
        v31 = this;
        if ( !this )
          return 1;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        if ( !m_CancellationTokenSource )
          goto LABEL_62;
        if ( !(_DWORD)m_CancellationTokenSource )
          goto LABEL_113;
        this = *(DataManager_o **)&this->fields._DispLog;
        if ( !this )
          goto LABEL_119;
        this = (DataManager_o *)System_String__StartsWith(
                                  (System_String_o *)this,
                                  (System_String_o *)StringLiteral_1892/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v31->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v33 = *(System_String_o **)&v31->fields._DispLog;
          this = (DataManager_o *)sub_1C21EE0(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v33 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_63137632(v33, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v34 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v35 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v36 = ManagerConfig_TypeInfo;
          v37 = v35;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v36 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v36->static_fields->MasterDataCacheVer, v37, 0LL) )
          {
            this = (DataManager_o *)sub_1C21EE0(string___TypeInfo, 5LL);
            if ( this )
            {
              v44 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v45 = StringLiteral_21679/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21679/*"master versiton different ("*/;
                sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._DispLog, v45, v38, v39, v40, v41, v42, v43);
                if ( LODWORD(v44->fields.m_CancellationTokenSource) > 1 )
                {
                  v44->fields.datalist = (struct DataMasterBase_array *)v37;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&v44->fields.datalist,
                    (int64_t)v37,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                  if ( LODWORD(v44->fields.m_CancellationTokenSource) > 2 )
                  {
                    v58 = StringLiteral_821/*") -> ("*/;
                    v44->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_821/*") -> ("*/;
                    sub_1C21DDC((PartyOrganizationUtility_o *)&v44->fields.lookup, v58, v52, v53, v54, v55, v56, v57);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v44->fields.m_CancellationTokenSource) > 3 )
                    {
                      v65 = *(_QWORD *)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v44->fields.masterDataBytes = (struct System_Byte_array *)v65;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&v44->fields.masterDataBytes,
                        v65,
                        v59,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64);
                      if ( LODWORD(v44->fields.m_CancellationTokenSource) > 4 )
                      {
                        v72 = StringLiteral_812/*")"*/;
                        v44->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_812/*")"*/;
                        p_saveNameList = (PartyOrganizationUtility_o *)&v44->fields.saveNameList;
                        goto LABEL_104;
                      }
                    }
                  }
                }
              }
              goto LABEL_113;
            }
            goto LABEL_119;
          }
          if ( LODWORD(v34->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v34->fields.datalist, 0LL);
            v149 = (int)this;
            if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v75 = (int)this;
            v76 = System_Int64__Parse((System_String_o *)v34->fields.lookup, 0LL);
            v77 = DataManager_TypeInfo;
            v148 = v76;
            v78 = v76;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v77 = DataManager_TypeInfo;
            }
            static_fields = v77->static_fields;
            if ( static_fields->readDataVersion != v75 )
              goto LABEL_91;
            if ( !v77->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v77);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v78 )
            {
              v80 = v31->fields.m_CancellationTokenSource;
              if ( (int)v80 < 2 )
                return 1;
              v81 = 2;
              while ( 1 )
              {
                v82 = (System_String_o *)*((_QWORD *)&v31->fields._DispLog + (int)(v81 - 1));
                this = (DataManager_o *)sub_1C21EE0(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v82 )
                  break;
                this = (DataManager_o *)System_String__Split_63137632(v82, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v89 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v89->fields._DispLog;
                v90 = *(_QWORD *)&this->fields.m_CachedPtr;
                v91 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v90 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v90 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                }
                else
                {
                  v93 = v90 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v93 + 32) = method;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)method, v83, v84, v85, v86, v87, v88);
                }
                if ( (_DWORD)v80 == v81 )
                  return 1;
                if ( v81++ >= LODWORD(v31->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1C21EE0(string___TypeInfo, 9LL);
              if ( this )
              {
                v44 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v101 = StringLiteral_21679/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21679/*"master versiton different ("*/;
                  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._DispLog, v101, v95, v96, v97, v98, v99, v100);
                  v102 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v102 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v102->static_fields, 0LL);
                  if ( LODWORD(v44->fields.m_CancellationTokenSource) > 1 )
                  {
                    v44->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&v44->fields.datalist,
                      (int64_t)this,
                      v103,
                      v104,
                      v105,
                      v106,
                      v107,
                      v108);
                    if ( LODWORD(v44->fields.m_CancellationTokenSource) > 2 )
                    {
                      v115 = StringLiteral_117/*" "*/;
                      v44->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&v44->fields.lookup,
                        (int64_t)v115,
                        v109,
                        v110,
                        v111,
                        v112,
                        v113,
                        v114);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v44->fields.m_CancellationTokenSource) > 3 )
                      {
                        v44->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&v44->fields.masterDataBytes,
                          (int64_t)this,
                          v116,
                          v117,
                          v118,
                          v119,
                          v120,
                          v121);
                        if ( LODWORD(v44->fields.m_CancellationTokenSource) > 4 )
                        {
                          v128 = StringLiteral_821/*") -> ("*/;
                          v44->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_821/*") -> ("*/;
                          sub_1C21DDC(
                            (PartyOrganizationUtility_o *)&v44->fields.saveNameList,
                            v128,
                            v122,
                            v123,
                            v124,
                            v125,
                            v126,
                            v127);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v149, 0LL);
                          if ( LODWORD(v44->fields.m_CancellationTokenSource) > 5 )
                          {
                            v44->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)&v44->fields.saveDataMapList,
                              (int64_t)this,
                              v129,
                              v130,
                              v131,
                              v132,
                              v133,
                              v134);
                            if ( LODWORD(v44->fields.m_CancellationTokenSource) > 6 )
                            {
                              v141 = StringLiteral_117/*" "*/;
                              *(_QWORD *)&v44->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)&v44->fields.lastFrameTime,
                                (int64_t)v141,
                                v135,
                                v136,
                                v137,
                                v138,
                                v139,
                                v140);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v148, 0LL);
                              if ( LODWORD(v44->fields.m_CancellationTokenSource) > 7 )
                              {
                                v44->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C21DDC(
                                  (PartyOrganizationUtility_o *)&v44->fields.masterCheckName,
                                  (int64_t)this,
                                  v142,
                                  v143,
                                  v144,
                                  v145,
                                  v146,
                                  v147);
                                if ( LODWORD(v44->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v72 = StringLiteral_812/*")"*/;
                                  v44->fields.lockCountObj = (Il2CppObject *)StringLiteral_812/*")"*/;
                                  p_saveNameList = (PartyOrganizationUtility_o *)&v44->fields.lockCountObj;
LABEL_104:
                                  sub_1C21DDC(p_saveNameList, v72, v66, v67, v68, v69, v70, v71);
                                  if ( System_String__Concat_63129004((System_String_array *)v44, 0LL) )
                                    goto LABEL_64;
                                  return 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_113:
                sub_1C2209C(this, method);
              }
            }
LABEL_119:
            sub_1C22094(this, method);
          }
          v19 = &StringLiteral_5226/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v19 = &StringLiteral_5225/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v19 = &StringLiteral_5223/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v19 = &StringLiteral_5228/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v19 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDC05A & 1) == 0 )
  {
    sub_1C21E38(&DataManager__readMasterVersion_d__46_TypeInfo);
    byte_4BDC05A = 1;
  }
  v3 = sub_1C22084(DataManager__readMasterVersion_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v6; // x1
  System_String_o *AllText; // x20
  System_String_o *v8; // x20
  System_Char_array *v9; // x0
  System_String_o *v10; // x20
  System_Char_array *v11; // x0
  il2cpp_array_size_t max_length; // w8
  int v13; // w22
  __int64 *v14; // x8
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_String_o *v18; // x21
  System_String_o *v19; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v21; // x1
  System_Byte_array *v22; // x22
  uint32_t v23; // w22
  System_Char_array *v24; // x0
  il2cpp_array_size_t v25; // w8
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  System_String_o *v29; // x20
  __int64 v30; // x20
  System_String_o *v31; // x0
  ManagerConfig_c *v32; // x8
  System_String_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x20
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  System_String_o *v69; // x8
  DataManager_c *v70; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v73; // x8
  int32_t v74; // w19
  struct DataManager_StaticFields *v75; // x8
  int64_t v76; // x0
  struct DataManager_StaticFields *v77; // x8

  if ( (byte_4BDC067 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&char___TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_5222/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C21E38(&StringLiteral_5219/*"DataManager boot load error : list file break"*/);
    sub_1C21E38(&StringLiteral_5221/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C21E38(&StringLiteral_5217/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    sub_1C21E38(&StringLiteral_21678/*"master data versiton different ("*/);
    sub_1C21E38(&StringLiteral_821/*") -> ("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_5220/*"DataManager boot load error : list file parameter error"*/);
    byte_4BDC067 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
LABEL_59:
    v70 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v70 = DataManager_TypeInfo;
    }
    static_fields = v70->static_fields;
    static_fields->dataVersion = 0;
    static_fields->dateVersion = 0LL;
    DataManager__ClearSaveDataList(this, v6);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v8 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
  if ( v8 )
  {
    v9 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 1LL);
    if ( !v9 )
      sub_1C22094(0LL, 0LL);
    if ( !v9->max_length )
      sub_1C2209C(v9, v9);
    v9->m_Items[2] = -257;
    v10 = System_String__Trim_63145224(v8, v9, 0LL);
    v11 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
    if ( !v11 )
      sub_1C22094(0LL, 0LL);
    max_length = v11->max_length;
    if ( !max_length )
      sub_1C2209C(v11, v11);
    v11->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1C2209C(v11, v11);
    v11->m_Items[3] = 10;
    if ( !v10 )
      sub_1C22094(v11, v11);
    v13 = System_String__IndexOfAny(v10, v11, 0LL);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5221/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v69 = (System_String_o *)*v14;
LABEL_58:
      if ( v69 )
        goto LABEL_59;
      return 1;
    }
    v15 = System_String__Substring_63134480(v10, 0, v13, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_1C22094(0LL, v16);
    if ( !System_String__StartsWith(v15, (System_String_o *)StringLiteral_25605/*"~"*/, 0LL) )
    {
      v14 = &StringLiteral_5222/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v18 = System_String__Substring(v17, 1, 0LL);
    v19 = System_String__Substring(v10, v13 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1C22094(0LL, v21);
    v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v19,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(v22, 0LL);
    if ( System_UInt32__Parse(v18, 0LL) != v23 )
    {
      v14 = &StringLiteral_5217/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v24 = (System_Char_array *)sub_1C21EE0(char___TypeInfo, 2LL);
    if ( !v24 )
      sub_1C22094(0LL, 0LL);
    v25 = v24->max_length;
    if ( !v25 )
      sub_1C2209C(v24, v24);
    v24->m_Items[2] = 13;
    if ( v25 == 1 )
      sub_1C2209C(v24, v24);
    v24->m_Items[3] = 10;
    if ( !v19 )
      sub_1C22094(v24, v24);
    v26 = (__int64)System_String__Split_63137868(v19, v24, 1, 0LL);
    v27 = v26;
    if ( !v26 )
      return 1;
    v28 = *(_QWORD *)(v26 + 24);
    if ( v28 )
    {
      if ( !(_DWORD)v28 )
        goto LABEL_78;
      v26 = *(_QWORD *)(v26 + 32);
      if ( !v26 )
        goto LABEL_83;
      v26 = System_String__StartsWith((System_String_o *)v26, (System_String_o *)StringLiteral_1892/*"@"*/, 0LL);
      if ( (v26 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_78;
        v29 = *(System_String_o **)(v27 + 32);
        v26 = sub_1C21EE0(char___TypeInfo, 1LL);
        if ( v26 )
        {
          v6 = (const MethodInfo *)v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_78;
          *(_WORD *)(v26 + 32) = 44;
          if ( v29 )
          {
            v26 = (__int64)System_String__Split_63137632(v29, (System_Char_array *)v26, 0LL);
            if ( v26 )
            {
              v30 = v26;
              if ( !*(_DWORD *)(v26 + 24) )
                goto LABEL_78;
              v26 = *(_QWORD *)(v26 + 32);
              if ( v26 )
              {
                v31 = System_String__Substring((System_String_o *)v26, 1, 0LL);
                v32 = ManagerConfig_TypeInfo;
                v33 = v31;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v32 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v32->static_fields->MasterDataCacheVer, v33, 0LL) )
                {
                  if ( *(_DWORD *)(v30 + 24) != 3 )
                  {
                    v14 = &StringLiteral_5220/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v26 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0LL);
                  v73 = DataManager_TypeInfo;
                  v74 = v26;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v73 = DataManager_TypeInfo;
                  }
                  v75 = v73->static_fields;
                  v75->dataVersion = v74;
                  v75->readDataVersion = v74;
                  if ( *(_DWORD *)(v30 + 24) > 2u )
                  {
                    v76 = System_Int64__Parse(*(System_String_o **)(v30 + 48), 0LL);
                    v77 = DataManager_TypeInfo->static_fields;
                    v77->dateVersion = v76;
                    v77->readDateVersion = v76;
                    return 1;
                  }
LABEL_78:
                  sub_1C2209C(v26, v6);
                }
                v26 = sub_1C21EE0(string___TypeInfo, 5LL);
                if ( v26 )
                {
                  v40 = v26;
                  if ( *(_DWORD *)(v26 + 24) )
                  {
                    v41 = StringLiteral_21678/*"master data versiton different ("*/;
                    *(_QWORD *)(v26 + 32) = StringLiteral_21678/*"master data versiton different ("*/;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), v41, v34, v35, v36, v37, v38, v39);
                    if ( *(_DWORD *)(v40 + 24) > 1u )
                    {
                      *(_QWORD *)(v40 + 40) = v33;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 40), (int64_t)v33, v42, v43, v44, v45, v46, v47);
                      if ( *(_DWORD *)(v40 + 24) > 2u )
                      {
                        v54 = StringLiteral_821/*") -> ("*/;
                        *(_QWORD *)(v40 + 48) = StringLiteral_821/*") -> ("*/;
                        sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 48), v54, v48, v49, v50, v51, v52, v53);
                        v26 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v26 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v40 + 24) > 3u )
                        {
                          v61 = *(_QWORD *)(*(_QWORD *)(v26 + 184) + 32LL);
                          *(_QWORD *)(v40 + 56) = v61;
                          sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 56), v61, v55, v56, v57, v58, v59, v60);
                          if ( *(_DWORD *)(v40 + 24) > 4u )
                          {
                            v68 = StringLiteral_812/*")"*/;
                            *(_QWORD *)(v40 + 64) = StringLiteral_812/*")"*/;
                            sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 64), v68, v62, v63, v64, v65, v66, v67);
                            v69 = System_String__Concat_63129004((System_String_array *)v40, 0LL);
                            goto LABEL_58;
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_78;
                }
              }
            }
          }
        }
LABEL_83:
        sub_1C22094(v26, v6);
      }
    }
    v14 = &StringLiteral_5219/*"DataManager boot load error : list file break"*/;
    goto LABEL_57;
  }
  return 1;
}


void __fastcall DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataManager_c *v11; // x0
  struct DataManager_StaticFields *static_fields; // x8
  PartyOrganizationUtility_o *p_updateData; // x0
  Il2CppObject *v14; // x1
  struct DataManager_StaticFields *v15; // x0

  if ( (byte_4BDC057 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC057 = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_18;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = DataManager_TypeInfo->static_fields;
    }
    static_fields->updateData = 0LL;
    p_updateData = (PartyOrganizationUtility_o *)&static_fields->updateData;
    v14 = 0LL;
  }
  else
  {
LABEL_18:
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DataManager_TypeInfo;
    }
    v15 = v11->static_fields;
    v14 = obj;
    v15->updateData = obj;
    p_updateData = (PartyOrganizationUtility_o *)&v15->updateData;
    LODWORD(p_updateData[-1].fields._TransitionDestinationFromDetail_k__BackingField) = dataVer;
    *(_QWORD *)&p_updateData[-1].fields._IsQuestStartMenuMode_k__BackingField = dateVer;
  }
  sub_1C21DDC(p_updateData, (int64_t)v14, dateVer, (int32_t)obj, (System_String_o *)method, v5, v6, v7);
}


void __fastcall DataManager__setMasterDataVersion(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4BDC056 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC056 = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->dataVersion = dataVer;
  static_fields->dateVersion = dateVer;
}


void __fastcall DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataManager_c *v9; // x0
  void *v10; // x1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x0
  DataManager_c *v23; // x8
  struct DataManager_StaticFields *v24; // x0
  DataManager_c *v25; // x0

  if ( (byte_4BDC050 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC050 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  v10 = StringLiteral_1/*""*/;
  static_fields = v9->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->serverHash,
    (int64_t)v10,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( obj )
  {
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v13 = System_String__op_Equality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v13 )
    {
      if ( !v12 )
        sub_1C22094(v13, v14);
      v15 = System_String__Substring(v12, v12->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v22 = System_String__Substring_63134480(v12, 0, v12->fields._stringLength - 1, 0LL);
        v23 = DataManager_TypeInfo;
        v12 = v22;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v23 = DataManager_TypeInfo;
        }
        v24 = v23->static_fields;
      }
      else
      {
        v25 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v25 = DataManager_TypeInfo;
        }
        v24 = v25->static_fields;
      }
      v24->serverHash = v12;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v24->serverHash, (int64_t)v12, v16, v17, v18, v19, v20, v21);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4BDC052 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDC052 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->webViewData,
    (int64_t)obj,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4BDC06B & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4BDC06B = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C22354(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_40044652(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_40044652(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  DataManager_o *v5; // x21
  __int64 methodPtr_low; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v9; // w26
  il2cpp_array_size_t v10; // w9
  __int64 v11; // x27
  DataMasterBase_o *v12; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v14; // x8
  DataMasterBase_o *v15; // x23
  __int64 v16; // x9
  struct DataMasterBase_array *v17; // x8
  int v18; // w9
  int v19; // w26
  il2cpp_array_size_t v20; // w9
  __int64 v21; // x27
  DataMasterBase_o *v22; // x8
  Il2CppObject *v23; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct DataMasterBase_array *v27; // x8
  int v28; // w9
  int v29; // w25
  il2cpp_array_size_t v30; // w9
  __int64 v31; // x26
  DataMasterBase_o *v32; // x8
  Il2CppObject *v33; // x21
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x22
  DataManager_o *v36; // x0
  const MethodInfo *v37; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4BDC06C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&StringLiteral_24753/*"updated"*/);
    sub_1C21E38(&StringLiteral_18878/*"deleted"*/);
    this = (DataManager_o *)sub_1C21E38(&StringLiteral_23293/*"replaced"*/);
    byte_4BDC06C = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1C22094(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18878/*"deleted"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18878/*"deleted"*/,
                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_60;
      }
    }
    datalist = v4->fields.datalist;
    if ( !datalist )
      goto LABEL_57;
    max_length = datalist->max_length;
    v9 = max_length - 1;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( v10 < datalist->max_length )
      {
        v11 = (int)v10;
        v12 = datalist->m_Items[v10];
        if ( !v12 || !v5 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v12->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v4->fields.datalist;
          if ( !v14 )
            goto LABEL_57;
          if ( (unsigned int)v11 >= v14->max_length )
            break;
          v15 = v14->m_Items[v11];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v15 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v15->klass[1]._1.castClass)(
                                    v15,
                                    this,
                                    v15->klass[1]._1.declaringType);
        }
        if ( v9 == (_DWORD)v11 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v10 = v11 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1C2209C(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24753/*"updated"*/,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24753/*"updated"*/,
                            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v16 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C22354(v5);
      goto LABEL_61;
    }
  }
  v17 = v4->fields.datalist;
  if ( !v17 )
    goto LABEL_57;
  v18 = v17->max_length;
  v19 = v18 - 1;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v17->max_length )
    {
      v21 = (int)v20;
      v22 = v17->m_Items[v20];
      if ( !v22 || !v5 )
        goto LABEL_57;
      v23 = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                v23,
                                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.datalist;
        if ( !v24 )
          goto LABEL_57;
        if ( (unsigned int)v21 >= v24->max_length )
          goto LABEL_59;
        v25 = v24->m_Items[v21];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  v23,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_57;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))&v25->klass[1]._1.this_arg.bits)(
                                  v25,
                                  this,
                                  v25->klass[1]._1.element_class);
      }
      if ( v19 == (_DWORD)v21 )
        goto LABEL_40;
      v17 = v4->fields.datalist;
      v20 = v21 + 1;
      if ( !v17 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23293/*"replaced"*/,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23293/*"replaced"*/,
                            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C22354(v3);
      DataManager__getRevisionTotal(v36, v37);
      return;
    }
  }
  v27 = v4->fields.datalist;
  if ( !v27 )
    goto LABEL_57;
  v28 = v27->max_length;
  v29 = v28 - 1;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( v30 < v27->max_length )
    {
      v31 = (int)v30;
      v32 = v27->m_Items[v30];
      if ( !v32 || !v3 )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v33,
                                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= v34->max_length )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v33,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v35->klass[1]._1.namespaze)(
                                  v35,
                                  this,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  v35->klass[1]._1.byval_arg.data);
      }
      if ( v29 == (_DWORD)v31 )
        return;
      v27 = v4->fields.datalist;
      v30 = v31 + 1;
      if ( !v27 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  bool v5; // w21
  __int64 v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDC05D & 1) == 0 )
  {
    sub_1C21E38(&DataManager__updateMasterData_d__49_TypeInfo);
    byte_4BDC05D = 1;
  }
  v5 = isUseTips;
  v6 = sub_1C22084(DataManager__updateMasterData_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v6 + 48) = v5;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDC053 & 1) == 0 )
  {
    sub_1C21E38(&DataManager__updateWebViewData_d__38_TypeInfo);
    byte_4BDC053 = 1;
  }
  v3 = sub_1C22084(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v9; // x20
  System_Text_StringBuilder_o *v10; // x21
  ManagerConfig_c *v11; // x0
  int v12; // w8
  int v13; // w24
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x19
  System_Byte_array *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x19
  System_String_o *v23; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  uint32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDC06A & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&System_IO_StreamWriter_TypeInfo);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&uint_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_25608/*"~{0}\n{1}"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDC06A = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = (System_Collections_Generic_List_object__o *)DataManager__getCacheListFileName((const MethodInfo *)v4);
    saveNameList = this->fields.saveNameList;
    if ( !saveNameList )
      goto LABEL_17;
    size = saveNameList->fields._size;
    v9 = (System_String_o *)CacheListFileName;
    v10 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62269980(v10, (size << 7) + 128, 0LL);
    if ( !v10 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)StringLiteral_1892/*"@"*/, 0LL);
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_62276628(v10, v11->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    System_Text_StringBuilder__Append_62279124(v10, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)StringLiteral_866/*","*/, 0LL);
    System_Text_StringBuilder__Append_62279212(v10, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v12 = CacheListFileName->fields._size;
    v13 = v12 - 1;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v14,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_62276628(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        if ( v13 == v14 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v14;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                            v10,
                            v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_17:
      sub_1C22094(CacheListFileName, v6);
    v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v16,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v32 = Crc32__Compute(v17, 0LL);
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v32, v18, v19, v20);
    v22 = System_String__Format_63129848((System_String_o *)StringLiteral_25608/*"~{0}\n{1}"*/, v21, v16, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v23 = CatAndMouseGame__CatGame3(v22, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v25 = (System_IO_StreamWriter_o *)sub_1C22084(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63284612(v25, v9, 0, UTF8, 0LL);
    if ( !v25 )
      sub_1C22094(v26, v27);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._16_Write.method)(
      v25,
      v23,
      v25->klass->vtable._17_Write.methodPtr);
    klass = v25->klass;
    v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_28:
      v31 = sub_1C73E18(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  char *v13; // x20
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  void *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  System_String_o *v55; // x20
  System_Byte_array *v56; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x20
  System_String_o *v59; // x20
  System_Text_Encoding_o *v60; // x22
  System_IO_StreamWriter_o *v61; // x21
  uint32_t v62; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDC068 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&System_IO_StreamWriter_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_25605/*"~"*/);
    sub_1C21E38(&StringLiteral_1892/*"@"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDC068 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    UTF8 = (char *)sub_1C21EE0(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v13 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v14 = StringLiteral_1892/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1892/*"@"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(UTF8 + 32), v14, v7, v8, v9, v10, v11, v12);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v13 + 6) <= 1u )
      goto LABEL_26;
    v21 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v13 + 5) = v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
    if ( *((_DWORD *)v13 + 6) <= 2u )
      goto LABEL_26;
    v28 = StringLiteral_866/*","*/;
    *((_QWORD *)v13 + 6) = StringLiteral_866/*","*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)v28, v22, v23, v24, v25, v26, v27);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v13 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v13 + 7) = UTF8;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)UTF8, v29, v30, v31, v32, v33, v34);
    if ( *((_DWORD *)v13 + 6) <= 4u
      || (v41 = StringLiteral_866/*","*/,
          *((_QWORD *)v13 + 8) = StringLiteral_866/*","*/,
          sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)v41, v35, v36, v37, v38, v39, v40),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v13 + 6) <= 5u)
      || (*((_QWORD *)v13 + 9) = UTF8,
          sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 72), (int64_t)UTF8, v42, v43, v44, v45, v46, v47),
          *((_DWORD *)v13 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C2209C(UTF8, v6);
    }
    v54 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v13 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 80), v54, v48, v49, v50, v51, v52, v53);
    v55 = System_String__Concat_63129004((System_String_array *)v13, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v56 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v55,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v62 = Crc32__Compute(v56, 0LL);
    v57 = System_UInt32__ToString((uint32_t)&v62, 0LL);
    v58 = System_String__Concat_63128740(
            (System_String_o *)StringLiteral_25605/*"~"*/,
            v57,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v55,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v59 = CatAndMouseGame__CatGame1(v58, 0, 0LL);
    v60 = System_Text_Encoding__get_UTF8(0LL);
    v61 = (System_IO_StreamWriter_o *)sub_1C22084(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63284612(v61, CacheVersionFileName, 0, v60, 0LL);
    if ( !v61 )
LABEL_27:
      sub_1C22094(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v61->klass->vtable._16_Write.method)(
      v61,
      v59,
      v61->klass->vtable._17_Write.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v61->klass->vtable._8_Close.method)(
      v61,
      v61->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC070 & 1) == 0 )
  {
    sub_1C21E38(&DataManager___c_TypeInfo);
    byte_4BDC070 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)DataManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataManager___c___LoadMasterDataThread_b__58_1(
        DataManager___c_o *this,
        Il2CppObject *_,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager___c__DisplayClass49_0___ctor(
        DataManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_0___updateMasterData_b__1(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_0___updateMasterData_b__2(
        DataManager___c__DisplayClass49_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass49_1___ctor(
        DataManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_1___updateMasterData_b__3(
        DataManager___c__DisplayClass49_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass56_0___ctor(
        DataManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataManager___c__DisplayClass56_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass56_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  struct DataManager_o *v8; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4BDC071 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4BDC071 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass56_0_o *)_4__this->fields.saveDataMapList;
  if ( !this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  b,
                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v8 = v6->fields.__4__this;
  if ( !v8
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v8->fields.saveDataMapList) == 0LL
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1C22094(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C2209C(this, *(_QWORD *)&a);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void __fastcall DataManager___c__DisplayClass56_1___ctor(
        DataManager___c__DisplayClass56_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataManager___c__DisplayClass56_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass56_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass56_1_o *v4; // x20
  struct DataManager___c__DisplayClass56_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4BDC072 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BDC072 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1C22094(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void __fastcall DataManager___c__DisplayClass58_0___ctor(
        DataManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass58_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass58_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0LL);
}


void __fastcall DataManager__readMasterData_d__47___ctor(
        DataManager__readMasterData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__readMasterData_d__47__MoveNext(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterData_d__47_o *v2; // x20
  struct DataManager_o *_4__this; // x19
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v5; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  char v13; // w8
  DataManager_c *v14; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v16; // w10
  DataManager_c *v17; // x0
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v19; // x21
  System_IO_Stream_o *v20; // x24
  System_IO_Stream_o *v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  float v27; // s0
  UnityEngine_WaitForEndOfFrame_o *v28; // x19
  PartyOrganizationUtility_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  DataManager_c *v37; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  System_IO_Stream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  int64_t v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_IO_MemoryStream_c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v60; // x21
  System_IO_BinaryReader_o *v61; // x24
  __int64 v62; // x0
  __int64 v63; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v66; // x0
  __int64 v67; // x1
  int v68; // w22
  __int64 v69; // x23
  __int64 v70; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  int v80; // w8
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  System_IO_BinaryReader_c *v85; // x8
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  System_IO_MemoryStream_c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  UnityEngine_WaitForEndOfFrame_o *v93; // x19
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7

  v2 = this;
  if ( (byte_4BDC073 & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__47_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDC073 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_96;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
        v13 = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v13 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, method) )
      {
        v17 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v17);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v19 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v19, 0LL);
          v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v21 = CatAndMouseGame__MouseGameZ(v20, 0LL);
          v22 = sub_1C21EE0(byte___TypeInfo, 0x4000LL);
          v24 = v22;
          if ( !v22 )
            sub_1C22094(0LL, v23);
          if ( !v21 )
            sub_1C22094(v22, v23);
          while ( 1 )
          {
            v25 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v21->klass->vtable._33_unknown.method)(
                    v21,
                    v24,
                    0LL,
                    *(unsigned int *)(v24 + 24),
                    v21->klass->vtable._34_Read.methodPtr);
            if ( (int)v25 <= 0 )
              break;
            if ( !v19 )
              sub_1C22094(v25, v26);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v19->klass->vtable._36_Write.method)(
              v19,
              v24,
              0LL,
              (unsigned int)v25,
              v19->klass->vtable._37_Write.methodPtr);
          }
          klass = v21->klass;
          v39 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v39;
              p_offset += 4;
              if ( !v39 )
                goto LABEL_37;
            }
            v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v41 = sub_1C73E18(v21, System_IDisposable_TypeInfo, 0LL);
          }
          v42 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v41)(v21, *(_QWORD *)(v41 + 8));
          if ( v20 )
          {
            v44 = v20->klass;
            v45 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
            {
              v46 = &v44->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
              {
                --v45;
                v46 += 4;
                if ( !v45 )
                  goto LABEL_44;
              }
              v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
            }
            else
            {
LABEL_44:
              v47 = sub_1C73E18(v20, System_IDisposable_TypeInfo, 0LL);
            }
            v42 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v47)(v20, *(_QWORD *)(v47 + 8));
          }
          if ( !v19 )
            sub_1C22094(v42, v43);
          v48 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v19->klass->vtable._42_ToArray.method)(
                  v19,
                  v19->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v48;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          v55 = v19->klass;
          v56 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
          {
            v57 = &v55->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
            {
              --v56;
              v57 += 4;
              if ( !v56 )
                goto LABEL_52;
            }
            v58 = (__int64)(&v55->vtable._0_Equals.method + 2 * *v57);
          }
          else
          {
LABEL_52:
            v58 = sub_1C73E18(v19, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v58)(v19, *(_QWORD *)(v58 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v60 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_63259488(v60, masterDataBytes, 0LL);
          v61 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v61, (System_IO_Stream_o *)v60, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C22094(v62, v63);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v61 )
            {
LABEL_76:
              if ( v60 )
              {
                v89 = v60->klass;
                v90 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
                {
                  v91 = &v89->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v90;
                    v91 += 4;
                    if ( !v90 )
                      goto LABEL_81;
                  }
                  v92 = (__int64)(&v89->vtable._0_Equals.method + 2 * *v91);
                }
                else
                {
LABEL_81:
                  v92 = sub_1C73E18(v60, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v92)(v60, *(_QWORD *)(v92 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_64162132(0LL);
              v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v93, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v93;
              v29 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C21DDC(v29, (int64_t)v93, v94, v95, v96, v97, v98, v99);
              v36 = 2;
LABEL_87:
              *(_DWORD *)&v29[-1].fields._IsQuestStartMenuMode_k__BackingField = v36;
              v13 = 1;
              return v13 & 1;
            }
          }
          else
          {
            if ( !v61 )
              sub_1C22094(v62, v63);
            do
            {
              v66 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v61->klass->vtable._15_ReadInt32.method)(
                      v61,
                      v61->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v60 )
                sub_1C22094(v66, v67);
              v68 = v66;
              v69 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v60->klass->vtable._12_get_Position.method)(
                      v60,
                      v60->klass->vtable._13_set_Position.methodPtr);
              v70 = v68;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v60->klass->vtable._31_Seek.method)(
                v60,
                v68,
                1LL,
                v60->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v72 = sub_1C21EE0(long___TypeInfo, 2LL);
              v79 = v72;
              if ( !v72 )
                sub_1C22094(0LL, 0LL);
              v80 = *(_DWORD *)(v72 + 24);
              if ( !v80 )
                sub_1C2209C(v72, v72);
              *(_QWORD *)(v72 + 32) = v69;
              if ( v80 == 1 )
                sub_1C2209C(v72, v72);
              *(_QWORD *)(v72 + 40) = v70;
              if ( !saveDataMapList )
                sub_1C22094(v72, v72);
              items = saveDataMapList->fields._items;
              v82 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C22094(v72, v72);
              v83 = saveDataMapList->fields._size;
              if ( (unsigned int)v83 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v72,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
              }
              else
              {
                v84 = &items->obj.klass + v83;
                saveDataMapList->fields._size = v83 + 1;
                v84[4] = (Il2CppClass *)v79;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), v79, v73, v74, v75, v76, v77, v78);
              }
              --size;
            }
            while ( size );
          }
          v85 = v61->klass;
          v86 = *(unsigned __int16 *)(&v61->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v61->klass->_2.bitflags2 + 3) )
          {
            v87 = &v85->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
            {
              --v86;
              v87 += 4;
              if ( !v86 )
                goto LABEL_73;
            }
            v88 = (__int64)(&v85->vtable._0_Equals.method + 2 * *v87);
          }
          else
          {
LABEL_73:
            v88 = sub_1C73E18(v61, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v88)(v61, *(_QWORD *)(v88 + 8));
          goto LABEL_76;
        }
      }
      v27 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v27 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v27;
        v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v28, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v28;
        v29 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v29, (int64_t)v28, v30, v31, v32, v33, v34, v35);
        v36 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, method);
      v37 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v37 = DataManager_TypeInfo;
      }
      static_fields = v37->static_fields;
      v13 = 0;
      v16 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v16;
      return v13 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v14 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v14 = DataManager_TypeInfo;
      }
      static_fields = v14->static_fields;
      v13 = 0;
      v16 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1C22094(this, method);
      goto LABEL_28;
    default:
      v13 = 0;
      return v13 & 1;
  }
}


Il2CppObject *__fastcall DataManager__readMasterData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__readMasterData_d__47__System_Collections_IEnumerator_Reset(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DataManager__readMasterData_d__47__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__readMasterData_d__47__System_IDisposable_Dispose(
        DataManager__readMasterData_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__readMasterVersion_d__46___ctor(
        DataManager__readMasterVersion_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__readMasterVersion_d__46__MoveNext(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterVersion_d__46_o *v2; // x19
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v16; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v18; // w9

  v2 = this;
  if ( (byte_4BDC074 & 1) == 0 )
  {
    sub_1C21E38(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4BDC074 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C22094(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, method);
  v16 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v18 = 1;
  else
    v18 = 5;
  static_fields->readMasterVersionResult = v18;
  return result;
}


Il2CppObject *__fastcall DataManager__readMasterVersion_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_Reset(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DataManager__readMasterVersion_d__46__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__readMasterVersion_d__46__System_IDisposable_Dispose(
        DataManager__readMasterVersion_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__updateMasterData_d__49___ctor(
        DataManager__updateMasterData_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__updateMasterData_d__49__MoveNext(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataManager__updateMasterData_d__49_o *v8; // x19
  struct DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  int v11; // w8
  MasterDataUnpakcer_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  PartyOrganizationUtility_o *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int v30; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v32; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v34; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  DataManager_c *v37; // x0
  System_String_o *CachePath; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  DataManager_c *v58; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v60; // x21
  System_Byte_array *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  DataManager_c *v74; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  UnityEngine_WaitForEndOfFrame_o *v99; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  DataManager_c *v106; // x0
  const MethodInfo *v107; // x2
  System_Func_bool__o *v108; // x21
  UnityEngine_WaitUntil_o *v109; // x20
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  PartyOrganizationUtility_o *p_dataMapDict_5__6; // x0
  const MethodInfo *v118; // x1
  float v119; // s0
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v128; // x20
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int v135; // w8
  DataManager_c *v136; // x8
  struct DataManager_StaticFields *v137; // x8
  int v138; // w9
  Il2CppObject *v139; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct DataMasterBase_array *v153; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v155; // x8
  int64_t MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  __int64 v164; // x0
  __int64 v165; // x1
  struct DataManager___c__DisplayClass49_0_o *v166; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  float v175; // s0
  struct DataManager___c__DisplayClass49_0_o *v176; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v179; // x24
  System_Predicate_object__o *v180; // x23
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  System_Collections_Generic_List_object__o *v193; // x22
  DataManager__updateMasterData_d__49_o *v194; // x24
  System_Predicate_object__o *v195; // x23
  int32_t Index; // w0
  int32_t v197; // w22
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  __int64 v204; // x8
  _QWORD *v205; // x9
  __int64 _2__current_low; // x10
  __int64 v207; // x8
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  __int64 v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  __int64 v217; // x8
  float v218; // s0
  UnityEngine_WaitForEndOfFrame_o *v219; // x20
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  ManagerConfig_c *v226; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  struct System_Collections_Generic_List_string__o *v239; // x8
  System_Collections_Generic_List_int__o *v240; // x22
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  ManagerConfig_c *v247; // x0
  __int64 v248; // x22
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  DataManager__updateMasterData_d__49_o *v255; // x23
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  DataManager__updateMasterData_d__49_o *v262; // x23
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  DataManager__updateMasterData_d__49_o *v269; // x23
  int64_t v270; // x2
  int32_t v271; // w3
  System_String_o *v272; // x4
  BattleSetupInfo_o *v273; // x5
  FollowerInfo_o *v274; // x6
  PartyListViewItem_o *v275; // x7
  DataManager__updateMasterData_d__49_o *v276; // x23
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  DataManager__updateMasterData_d__49_o *v283; // x23
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  DataManager__updateMasterData_d__49_o *v290; // x23
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  DataManager__updateMasterData_d__49_o *v297; // x23
  int64_t v298; // x2
  int32_t v299; // w3
  System_String_o *v300; // x4
  BattleSetupInfo_o *v301; // x5
  FollowerInfo_o *v302; // x6
  PartyListViewItem_o *v303; // x7
  DataManager__updateMasterData_d__49_o *v304; // x23
  int64_t v305; // x2
  int32_t v306; // w3
  System_String_o *v307; // x4
  BattleSetupInfo_o *v308; // x5
  FollowerInfo_o *v309; // x6
  PartyListViewItem_o *v310; // x7
  DataManager__updateMasterData_d__49_o *v311; // x23
  __int64 v312; // x8
  __int64 v313; // x21
  _QWORD *v314; // x23
  __int64 v315; // x24
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  int64_t v322; // x1
  System_Collections_Generic_List_object__o *v323; // x25
  System_Predicate_object__o *v324; // x26
  int32_t v325; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_376BF2C *v327; // x3
  const MethodInfo_376BF2C *v328; // x3
  __int64 v329; // x8
  _QWORD *v330; // x9
  __int64 v331; // x10
  UnityEngine_WaitForEndOfFrame_o *v332; // x20
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  const MethodInfo *v339; // x1
  ManagerConfig_c *v340; // x0
  Il2CppObject *lockCountObj; // x22
  const MethodInfo *v342; // x1
  DataManager_c *v343; // x0
  int v344; // w21
  DataManager_c *v345; // x8
  UnityEngine_WaitForEndOfFrame_o *v346; // x20
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  struct System_Collections_Generic_List_string__o *v358; // x8
  int32_t size; // w2
  int v360; // w9
  struct System_Collections_Generic_List_long____o *v361; // x8
  int64_t v362; // x2
  int v363; // w9
  UnityEngine_WaitForEndOfFrame_o *v364; // x20
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  float v371; // s0
  UnityEngine_WaitForEndOfFrame_o *v372; // x20
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  UnityEngine_WaitForEndOfFrame_o *v379; // x20
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  __int64 v386; // x0
  struct DataMasterBase_array *v387; // x9
  float v388; // s0
  DataManager_c *v389; // x8
  UnityEngine_WaitForEndOfFrame_o *v390; // x20
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+8h] [xbp-A8h]
  __int64 v398; // [xsp+18h] [xbp-98h] BYREF
  __int64 v399; // [xsp+20h] [xbp-90h]
  __int64 v400; // [xsp+28h] [xbp-88h] BYREF
  __int64 v401; // [xsp+30h] [xbp-80h]
  int v402; // [xsp+40h] [xbp-70h]
  bool lockTaken; // [xsp+4Ch] [xbp-64h] BYREF
  System_Nullable_long__o v404; // 0:x0.16
  System_Nullable_long__o v405; // 0:x0.16

  v8 = this;
  if ( (byte_4BDC075 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1C21E38(&Method_DataManager__updateMasterData_b__49_0__);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&DataMasterBase___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C21E38(&EventRandomMissionClearManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&LogoMain_TypeInfo);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&MasterDataUnpakcer_TypeInfo);
    sub_1C21E38(&MaterialBranchRouteManager_TypeInfo);
    sub_1C21E38(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C21E38(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_long___ctor__);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    sub_1C21E38(&System_Predicate_string__TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C21E38(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__);
    sub_1C21E38(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__);
    sub_1C21E38(&DataManager___c__DisplayClass49_0_TypeInfo);
    sub_1C21E38(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__);
    sub_1C21E38(&DataManager___c__DisplayClass49_1_TypeInfo);
    sub_1C21E38(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C21E38(&UserCommandCodeNewManager_TypeInfo);
    sub_1C21E38(&UserEquipNewManager_TypeInfo);
    sub_1C21E38(&UserMissionProgressManager_TypeInfo);
    sub_1C21E38(&UserServantCollectionManager_TypeInfo);
    sub_1C21E38(&UserServantLockManager_TypeInfo);
    sub_1C21E38(&UserServantNewManager_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C21E38(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__49_o *)sub_1C21E38(&StringLiteral_11674/*"SCRIPT"*/);
    byte_4BDC075 = 1;
  }
  lockTaken = 0;
  v402 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields._values) = 0;
      if ( !_4__this )
        goto LABEL_291;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_291;
      v8->fields._dataListCount_5__2 = *(_QWORD *)&datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_291;
      v8->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, method);
      v37 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath((const MethodInfo *)v37);
      if ( !System_IO_Directory__Exists(CachePath, 0LL) )
        System_IO_Directory__CreateDirectory(CachePath, 0LL);
      v8->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_133;
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v39, v40, v41, v42, v43, v44);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7, 0LL, v45, v46, v47, v48, v49, v50);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v51, v52, v53, v54, v55, v56);
      v58 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v58 = DataManager_TypeInfo;
      }
      updateData = v58->static_fields->updateData;
      if ( !updateData )
        sub_1C22094(0LL, v57);
      v60 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                 updateData,
                                 updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v61 = System_Convert__FromBase64String(v60, 0LL);
      v8->fields._cryptBytes_5__8 = v61;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8,
        (int64_t)v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      v74 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v74 = DataManager_TypeInfo;
      }
      static_fields = v74->static_fields;
      static_fields->updateData = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v68, v69, v70, v71, v72, v73);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v76;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, (int64_t)v76, v78, v79, v80, v81, v82, v83);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v86 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1C22094(v86, v86);
      _4__this->fields.masterDataBytes = v86;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
        (int64_t)v86,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v93, v94, v95, v96, v97, v98);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v99 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v99, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v99;
      v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v23, (int64_t)v99, v100, v101, v102, v103, v104, v105);
      v30 = 2;
      goto LABEL_241;
    case 2:
      v8->fields.__1__state = -1;
      v12 = (MasterDataUnpakcer_o *)sub_1C22084(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v12, 0LL);
      if ( !_4__this )
        sub_1C22094(v13, v14);
      if ( !v12 )
        sub_1C22094(v13, v14);
      v15 = MasterDataUnpakcer__Unpack_39425860(v12, _4__this->fields.masterDataBytes, 0LL);
      v8->fields._dataMapObject_5__7 = v15;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        (int64_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64162132(0LL);
      v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v22, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v22;
      v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v23, (int64_t)v22, v24, v25, v26, v27, v28, v29);
      v30 = 3;
      goto LABEL_241;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v32 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v34 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v34 = 0LL;
        }
        else
        {
          v34 = 0LL;
        }
        v8->fields._dataMapDict_5__6 = v34;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v32 )
            v116 = (int64_t)dataMapObject_5__7;
          else
            v116 = 0LL;
        }
        else
        {
          v116 = 0LL;
        }
      }
      else
      {
        v116 = 0LL;
        v8->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_1C21DDC(p_dataMapDict_5__6, v116, v2, (int32_t)v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_291;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v128 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v128, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v128;
        v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v23, (int64_t)v128, v129, v130, v131, v132, v133, v134);
        v30 = 4;
        goto LABEL_241;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_82;
      v135 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v135 < v8->fields._dataListCount_5__2 )
        {
          v139 = (Il2CppObject *)sub_1C22084(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v139, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v139;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v8->fields.__8__1,
            (int64_t)v139,
            v141,
            v142,
            v143,
            v144,
            v145,
            v146);
          v153 = _4__this->fields.datalist;
          if ( !v153 )
            goto LABEL_291;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v153->max_length )
            goto LABEL_292;
          v155 = v153->m_Items[i_5__9];
          if ( !v155 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = (int64_t)v155->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields,
            MasterName_k__BackingField,
            v147,
            v148,
            v149,
            v150,
            v151,
            v152);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v158,
              v159,
              v160,
              v161,
              v162,
              v163);
            v166 = v8->fields.__8__1;
            if ( !v166 )
              sub_1C22094(v164, v165);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C22094(0LL, v165);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v166->fields.masterName,
                     (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              (int64_t)Item,
              v169,
              v170,
              v171,
              v172,
              v173,
              v174);
            v175 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v175 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v175;
              v379 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v379, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v379;
              v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v23, (int64_t)v379, v380, v381, v382, v383, v384, v385);
              v30 = 5;
              goto LABEL_241;
            }
LABEL_95:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v176 = v8->fields.__8__1;
            if ( !v176 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v176->fields.masterName,
                                                              (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v345 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v345 = DataManager_TypeInfo;
                }
                v137 = v345->static_fields;
                result = 0;
                v138 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v179 = *p__8__1;
            v180 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v180,
              (Il2CppObject *)v179,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v180,
                                                              (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v204 = *(_QWORD *)&this->fields.__1__state;
              v205 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v204 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v204 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
              }
              else
              {
                v207 = v204 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v207 + 32) = method;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)(v207 + 32),
                  (int64_t)method,
                  v181,
                  v182,
                  v183,
                  v184,
                  v185,
                  v186);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v214 = *(_QWORD *)&this->fields.__1__state;
              v215 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v214 )
                goto LABEL_291;
              v216 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v216 >= *(_DWORD *)(v214 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
              }
              else
              {
                v217 = v214 + 8 * v216;
                LODWORD(this->fields.__2__current) = v216 + 1;
                *(_QWORD *)(v217 + 32) = method;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)(v217 + 32),
                  (int64_t)method,
                  v208,
                  v209,
                  v210,
                  v211,
                  v212,
                  v213);
              }
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v8->fields._dataMap_5__10->obj,
                (const MethodInfo_364EE38 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0LL;
            v8->fields._isAdd_5__4 = 1;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v187,
              v188,
              v189,
              v190,
              v191,
              v192);
          }
          else
          {
            v193 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v194 = *p__8__1;
            v195 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v195,
              (Il2CppObject *)v194,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v193 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v193,
                      (System_Predicate_T__o *)v195,
                      (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_124;
            v197 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v197,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v197,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)p__8__1, 0LL, v198, v199, v200, v201, v202, v203);
LABEL_124:
          v135 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v135;
          continue;
        }
        break;
      }
      v218 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v218 - _4__this->fields.lastFrameTime) <= 0.1 )
      {
LABEL_128:
        if ( !v8->fields._isAdd_5__4 )
        {
          v226 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v226 = ManagerConfig_TypeInfo;
          }
          if ( !v226->static_fields->UseMock )
            goto LABEL_82;
        }
        v8->fields._dataMapDict_5__6 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
          0LL,
          v227,
          v228,
          v229,
          v230,
          v231,
          v232);
        v8->fields._cryptBytes_5__8 = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v233, v234, v235, v236, v237, v238);
        if ( !_4__this )
          goto LABEL_291;
LABEL_133:
        v239 = _4__this->fields.saveNameList;
        if ( !v239 )
LABEL_291:
          sub_1C22094(this, method);
        if ( v239->fields._size <= 0 )
        {
LABEL_82:
          v136 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v136 = DataManager_TypeInfo;
          }
          v137 = v136->static_fields;
          result = 0;
          v138 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v240 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v240,
          (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v240;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v8->fields._loadedIndices_5__5,
          (int64_t)v240,
          v241,
          v242,
          v243,
          v244,
          v245,
          v246);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
        if ( v8->fields.isUseTips )
        {
          v247 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v247 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v247->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11674/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v248 = sub_1C21EE0(DataMasterBase___TypeInfo, 9LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v248 )
                goto LABEL_291;
              v255 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( !*(_DWORD *)(v248 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v248 + 32) = v255;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 32), (int64_t)v255, v249, v250, v251, v252, v253, v254);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v262 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 40) = v262;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 40), (int64_t)v262, v256, v257, v258, v259, v260, v261);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v269 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 48) = v269;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 48), (int64_t)v269, v263, v264, v265, v266, v267, v268);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v276 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 56) = v276;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 56), (int64_t)v276, v270, v271, v272, v273, v274, v275);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v283 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 64) = v283;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 64), (int64_t)v283, v277, v278, v279, v280, v281, v282);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventServantMaster___);
              v290 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 72) = v290;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 72), (int64_t)v290, v284, v285, v286, v287, v288, v289);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v297 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 80) = v297;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 80), (int64_t)v297, v291, v292, v293, v294, v295, v296);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v304 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v248 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v248 + 88) = v304;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 88), (int64_t)v304, v298, v299, v300, v301, v302, v303);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAddMaster___);
              v311 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v248 + 64LL));
                if ( !this )
                {
LABEL_240:
                  v386 = sub_1C220B8(this);
                  sub_1C21F60(v386, 0LL);
                }
              }
              if ( *(_DWORD *)(v248 + 24) <= 8u )
LABEL_292:
                sub_1C2209C(this, method);
              *(_QWORD *)(v248 + 96) = v311;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v248 + 96), (int64_t)v311, v305, v306, v307, v308, v309, v310);
              v312 = *(_QWORD *)(v248 + 24);
              if ( (int)v312 >= 1 )
              {
                v313 = 0LL;
                while ( (unsigned int)v313 < (unsigned int)v312 )
                {
                  v314 = *(_QWORD **)(v248 + 32 + 8 * v313);
                  v315 = sub_1C22084(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v315, 0LL);
                  if ( !v314 )
                    goto LABEL_291;
                  if ( !v315 )
                    goto LABEL_291;
                  v322 = v314[3];
                  *(_QWORD *)(v315 + 16) = v322;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v315 + 16), v322, v316, v317, v318, v319, v320, v321);
                  v323 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v324 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v324,
                    (Il2CppObject *)v315,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v323 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v323,
                                                                    (System_Predicate_T__o *)v324,
                                                                    (const MethodInfo_364F90C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v325 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v325,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v404.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v404.fields.hasValue = &v400;
                    v400 = 0LL;
                    v401 = 0LL;
                    System_Nullable_long____ctor(v404, Method_System_Nullable_long___ctor__, v327);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v325,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v405.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v405.fields.hasValue = &v398;
                    v398 = 0LL;
                    v399 = 0LL;
                    System_Nullable_long____ctor(v405, Method_System_Nullable_long___ctor__, v328);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v314 + 424LL))(
                      v314,
                      masterDataBytes,
                      v400,
                      v401,
                      v398,
                      v399,
                      *(_QWORD *)(*v314 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v329 = *(_QWORD *)&this->fields.__1__state;
                    v330 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v329 )
                      goto LABEL_291;
                    v331 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v331 >= *(_DWORD *)(v329 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v325,
                        *(const MethodInfo_3632090 **)(*(_QWORD *)(v330[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v331 + 1;
                      *(_DWORD *)(v329 + 4 * v331 + 32) = v325;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v312 = *(_QWORD *)(v248 + 24);
                  if ( (int)++v313 >= (int)v312 )
                    goto LABEL_191;
                }
                goto LABEL_292;
              }
LABEL_191:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_291;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0LL) >= 1 )
              {
                if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
                ServantProfileLimitCountManager__Initialize(0LL);
                if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
                ServantProfileEventJoinManager__Initialize(0LL);
                if ( !LogoMain_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
                if ( LogoMain__IsPLayLogo(0LL) )
                  goto LABEL_203;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_203:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v332 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v332, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v332;
                  v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C21DDC(v23, (int64_t)v332, v333, v334, v335, v336, v337, v338);
                  v30 = 7;
                  goto LABEL_241;
                }
                goto LABEL_291;
              }
            }
          }
        }
LABEL_204:
        DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, v3);
        if ( v8->fields._isAdd_5__4 )
        {
          v340 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v340 = ManagerConfig_TypeInfo;
          }
          if ( !v340->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, v339);
            v371 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v371 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v371;
              v372 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v372, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v372;
              v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v23, (int64_t)v372, v373, v374, v375, v376, v377, v378);
              v30 = 8;
              goto LABEL_241;
            }
LABEL_56:
            v106 = DataManager_TypeInfo;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName((const MethodInfo *)v106);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, v107);
              v108 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v108,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v109 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v109, v108, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v109;
              v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v23, (int64_t)v109, v110, v111, v112, v113, v114, v115);
              v30 = 9;
              goto LABEL_241;
            }
            goto LABEL_291;
          }
        }
LABEL_208:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_64341908(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v344 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v343 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v343 = DataManager_TypeInfo;
          }
          v343->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, v342);
          v344 = 20;
        }
        else
        {
          v344 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v344 == 62 )
        {
          v346 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v346, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v346;
          v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v23, (int64_t)v346, v347, v348, v349, v350, v351, v352);
          v30 = 11;
          goto LABEL_241;
        }
        if ( v344 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, v342);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v358 = _4__this->fields.saveNameList;
          if ( v358 )
          {
            size = v358->fields._size;
            v360 = v358->fields._version + 1;
            v358->fields._size = 0;
            v358->fields._version = v360;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v358->fields._items, 0, size, 0LL);
            v361 = _4__this->fields.saveDataMapList;
            if ( v361 )
            {
              v362 = (unsigned int)v361->fields._size;
              v363 = v361->fields._version + 1;
              v361->fields._size = 0;
              v361->fields._version = v363;
              if ( (int)v362 >= 1 )
                System_Array__Clear((System_Array_o *)v361->fields._items, 0, v362, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
                0LL,
                v362,
                v353,
                v354,
                v355,
                v356,
                v357);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_64162132(0LL);
              v364 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v364, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v364;
              v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C21DDC(v23, (int64_t)v364, v365, v366, v367, v368, v369, v370);
              v30 = 12;
              goto LABEL_241;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      _4__this->fields.lastFrameTime = v218;
      v219 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v219, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v219;
      v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v23, (int64_t)v219, v220, v221, v222, v223, v224, v225);
      v30 = 6;
LABEL_241:
      *(_DWORD *)&v23[-1].fields._IsQuestStartMenuMode_k__BackingField = v30;
      return 1;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_75;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_95;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_128;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_204;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v10 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v10 = DataManager_TypeInfo;
        }
        v10->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, method);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, method);
      DataManager__writeMasterVersionFile(_4__this, v118);
      v119 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v119 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v119;
        v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v120, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v120;
        v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v23, (int64_t)v120, v121, v122, v123, v124, v125, v126);
        v30 = 10;
        goto LABEL_241;
      }
      goto LABEL_208;
    case 0xA:
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_208;
    case 0xC:
      v11 = 0;
      v8->fields.__1__state = -1;
      v8->fields._i_5__9 = 0;
      goto LABEL_249;
    case 0xD:
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v11 = v8->fields._i_5__9 + 1;
        v8->fields._i_5__9 = v11;
LABEL_249:
        if ( v11 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_291;
        v387 = _4__this->fields.datalist;
        if ( !v387 )
          goto LABEL_291;
        if ( v11 >= v387->max_length )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__49_o *)v387->m_Items[v11];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v388 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          if ( (float)(v388 - _4__this->fields.lastFrameTime) > 0.1 )
          {
            _4__this->fields.lastFrameTime = v388;
            v390 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v390, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v390;
            v23 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(v23, (int64_t)v390, v391, v392, v393, v394, v395, v396);
            v30 = 13;
            goto LABEL_241;
          }
        }
      }
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      BalanceConfig__Initialize(0LL);
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__Initialize(0LL);
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__Initialize(0LL);
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__Initialize(0LL);
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__Initialize(0LL);
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      OtherUserNewManager__Initialize(0LL);
      if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      UserCommandCodeNewManager__Initialize(0LL);
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      UserCommandCodeCollectionManager__Initialize(0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__Initialize(0LL);
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__Initialize(0LL);
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      UserMissionProgressManager__Initialize(0LL);
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__Initialize(0LL);
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize(0LL);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0LL);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize(0LL);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v389 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v389 = DataManager_TypeInfo;
      }
      v137 = v389->static_fields;
      result = 0;
      v138 = 1;
LABEL_289:
      v137->updateMasterDataResult = v138;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall DataManager__updateMasterData_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__updateMasterData_d__49__System_Collections_IEnumerator_Reset(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DataManager__updateMasterData_d__49__System_Collections_IEnumerator_get_Current(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__updateMasterData_d__49__System_IDisposable_Dispose(
        DataManager__updateMasterData_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataManager__updateWebViewData_d__38___ctor(
        DataManager__updateWebViewData_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DataManager__updateWebViewData_d__38__MoveNext(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  DataManager_c *v24; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  DataManager_c *v39; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v42; // x1
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v53; // x21
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  Il2CppObject **v62; // x19
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int v69; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_39400404; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_WaitForEndOfFrame_o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v87; // x21
  System_String_o *v88; // x22
  Il2CppObject *v89; // x0
  System_Collections_Generic_Dictionary_string__object__o *v90; // x23
  __int64 methodPtr_low; // x9
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7

  if ( (byte_4BDC076 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&StringLiteral_18528/*"contactURL"*/);
    sub_1C21E38(&StringLiteral_19757/*"filePass"*/);
    sub_1C21E38(&StringLiteral_17367/*"baseURL"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDC076 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v10 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager_TypeInfo;
      }
      if ( !v10->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._cryptString_5__3, 0LL, v11, v12, v13, v14, v15, v16);
      this->fields._dataObject_5__4 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v17, v18, v19, v20, v21, v22);
      v24 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v24 = DataManager_TypeInfo;
      }
      webViewData = v24->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v26 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))webViewData->klass->vtable[3].method)(
                                        webViewData,
                                        webViewData->klass->vtable[4].methodPtr);
      this->fields._cryptString_5__3 = v26;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        (int64_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v39 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v39 = DataManager_TypeInfo;
      }
      static_fields = v39->static_fields;
      static_fields->webViewData = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->webViewData, 0LL, v33, v34, v35, v36, v37, v38);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0LL);
        this->fields.__2__current = (Il2CppObject *)v43;
        p__2__current = &this->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v43, v45, v46, v47, v48, v49, v50);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v53 = System_Convert__FromBase64String(cryptString_5__3, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v54 = CatAndMouseGame__MouseGame2MsgPack(v53, 0, 0LL);
      this->fields._dataObject_5__4 = v54;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields._dataObject_5__4,
        (int64_t)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v61, 0LL);
        this->fields.__2__current = (Il2CppObject *)v61;
        v62 = &this->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)v62, (int64_t)v61, v63, v64, v65, v66, v67, v68);
        v69 = 2;
LABEL_30:
        *((_DWORD *)v62 - 2) = v69;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_39400404 = JsonManager__getDictionary_39400404(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_39400404;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields._data_5__2,
        (int64_t)Dictionary_39400404,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v78 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v78, 0LL);
        this->fields.__2__current = (Il2CppObject *)v78;
        v62 = &this->fields.__2__current;
        sub_1C21DDC((PartyOrganizationUtility_o *)v62, (int64_t)v78, v79, v80, v81, v82, v83, v84);
        v69 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v87 = (System_String_o *)StringLiteral_1/*""*/;
      v88 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17367/*"baseURL"*/,
              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17367/*"baseURL"*/,
               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v88 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18528/*"contactURL"*/,
              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18528/*"contactURL"*/,
               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v87 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19757/*"filePass"*/,
             (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C22094(Item, v42);
        v89 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19757/*"filePass"*/,
                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v90 = (System_Collections_Generic_Dictionary_string__object__o *)v89;
        if ( v89 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v89->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v89->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C22354(v89);
LABEL_54:
            sub_1C22094(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v88, v87, v90, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._cryptString_5__3, 0LL, v92, v93, v94, v95, v96, v97);
      this->fields._dataObject_5__4 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v98, v99, v100, v101, v102, v103);
      return 0;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_18;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 3:
      this->fields.__1__state = -1;
      goto LABEL_31;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall DataManager__updateWebViewData_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_Reset(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall DataManager__updateWebViewData_d__38__System_Collections_IEnumerator_get_Current(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DataManager__updateWebViewData_d__38__System_IDisposable_Dispose(
        DataManager__updateWebViewData_d__38_o *this,
        const MethodInfo *method)
{
  ;
}