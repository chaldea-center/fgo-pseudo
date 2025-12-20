void DataManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct DataManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2C30D & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C30D = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0;
  static_fields->updateData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->updateData, 0, v1, v2, v3, v4, v5, v6);
  v8 = DataManager_TypeInfo->static_fields;
  v8->webViewData = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->webViewData, 0, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  v16 = DataManager_TypeInfo->static_fields;
  v16->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->serverHash, v15, v17, v18, v19, v20, v21, v22);
}


void DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2C30C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_1C94098(&System_Collections_Generic_List_long____TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4D2C30C = 1;
  }
  this->fields._DispLog = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.saveNameList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.saveDataMapList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (Il2CppObject *)sub_1C942E4(object_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields.lockCountObj = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.lockCountObj, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float v4; // s2

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v4 = realtimeSinceStartup - this->fields.lastFrameTime;
  if ( v4 > 0.1 )
    this->fields.lastFrameTime = realtimeSinceStartup;
  return v4 > 0.1;
}


void DataManager__ClearCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2C2E9 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2E9 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(CachePath, v3);
}


// positive sp value has been detected, the output may be wrong!
void DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4D2C2EA & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2EA = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0) )
    System_IO_Directory__Delete(cachePath, 1, 0);
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
}


void DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4D2C2E8 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2E8 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v3);
}


void DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v9; // w2
  int v10; // w9

  if ( (byte_4D2C303 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4D2C303 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v7 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1C942F0(v3, method);
  v9 = saveDataMapList->fields._size;
  v10 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v10;
  if ( v9 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v9, 0);
}


DataMasterBase_array *DataManager__CreateMasterData(const MethodInfo *method)
{
  DataMasterBase_array *v1; // x19
  ServantMaster_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  ServantCommentMaster_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ServantProfileMaster_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  WarMaster_o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UserMaster_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  UserGameMaster_o *v47; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  TblUserMaster_o *v54; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  UserItemMaster_o *v61; // x20
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UserServantMaster_o *v68; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UserServantStorageMaster_o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  UserAccessaryMaster_o *v82; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  UserQuestMaster_o *v89; // x20
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  BattleMaster_o *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  OtherUserGameMaster_o *v103; // x20
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  TblFriendMaster_o *v110; // x20
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  AreaMaster_o *v117; // x20
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  ServantCardMaster_o *v124; // x20
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  EventMaster_o *v131; // x20
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  ItemMaster_o *v138; // x20
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  QuestMaster_o *v145; // x20
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  QuestAddMaster_o *v152; // x20
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  QuestReleaseMaster_o *v159; // x20
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  QuestDateRangeMaster_o *v166; // x20
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  QuestPhaseMaster_o *v173; // x20
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  QuestPhaseDetailMaster_o *v180; // x20
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  QuestGroupMaster_o *v187; // x20
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  QuestRandomGroupMaster_o *v194; // x20
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  QuestConsumeItemMaster_o *v201; // x20
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  QuestMessageMaster_o *v208; // x20
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  UserQuestInfoMaster_o *v215; // x20
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  UserQuestRecordMaster_o *v222; // x20
  int32_t v223; // w2
  int32_t v224; // w3
  System_String_o *v225; // x4
  int32_t v226; // w5
  int64_t v227; // x6
  System_String_o *v228; // x7
  ViewQuestInfoMaster_o *v229; // x20
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  ViewEnemyMaster_o *v236; // x20
  int32_t v237; // w2
  int32_t v238; // w3
  System_String_o *v239; // x4
  int32_t v240; // w5
  int64_t v241; // x6
  System_String_o *v242; // x7
  ViewQuestEnemyInfoMaster_o *v243; // x20
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  BlankEarthSpotMaster_o *v250; // x20
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  BlankEarthSpotAddMaster_o *v257; // x20
  int32_t v258; // w2
  int32_t v259; // w3
  System_String_o *v260; // x4
  int32_t v261; // w5
  int64_t v262; // x6
  System_String_o *v263; // x7
  SpotMaster_o *v264; // x20
  int32_t v265; // w2
  int32_t v266; // w3
  System_String_o *v267; // x4
  int32_t v268; // w5
  int64_t v269; // x6
  System_String_o *v270; // x7
  SpotImageMaster_o *v271; // x20
  int32_t v272; // w2
  int32_t v273; // w3
  System_String_o *v274; // x4
  int32_t v275; // w5
  int64_t v276; // x6
  System_String_o *v277; // x7
  SpotRoadMaster_o *v278; // x20
  int32_t v279; // w2
  int32_t v280; // w3
  System_String_o *v281; // x4
  int32_t v282; // w5
  int64_t v283; // x6
  System_String_o *v284; // x7
  SpotPathMaster_o *v285; // x20
  int32_t v286; // w2
  int32_t v287; // w3
  System_String_o *v288; // x4
  int32_t v289; // w5
  int64_t v290; // x6
  System_String_o *v291; // x7
  SpotAddMaster_o *v292; // x20
  int32_t v293; // w2
  int32_t v294; // w3
  System_String_o *v295; // x4
  int32_t v296; // w5
  int64_t v297; // x6
  System_String_o *v298; // x7
  MapGimmickMaster_o *v299; // x20
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  GiftMaster_o *v306; // x20
  int32_t v307; // w2
  int32_t v308; // w3
  System_String_o *v309; // x4
  int32_t v310; // w5
  int64_t v311; // x6
  System_String_o *v312; // x7
  GiftAddMaster_o *v313; // x20
  int32_t v314; // w2
  int32_t v315; // w3
  System_String_o *v316; // x4
  int32_t v317; // w5
  int64_t v318; // x6
  System_String_o *v319; // x7
  ShopMaster_o *v320; // x20
  int32_t v321; // w2
  int32_t v322; // w3
  System_String_o *v323; // x4
  int32_t v324; // w5
  int64_t v325; // x6
  System_String_o *v326; // x7
  StoneShopMaster_o *v327; // x20
  int32_t v328; // w2
  int32_t v329; // w3
  System_String_o *v330; // x4
  int32_t v331; // w5
  int64_t v332; // x6
  System_String_o *v333; // x7
  BankShopMaster_o *v334; // x20
  int32_t v335; // w2
  int32_t v336; // w3
  System_String_o *v337; // x4
  int32_t v338; // w5
  int64_t v339; // x6
  System_String_o *v340; // x7
  ShopScriptMaster_o *v341; // x20
  int32_t v342; // w2
  int32_t v343; // w3
  System_String_o *v344; // x4
  int32_t v345; // w5
  int64_t v346; // x6
  System_String_o *v347; // x7
  StageMaster_o *v348; // x20
  int32_t v349; // w2
  int32_t v350; // w3
  System_String_o *v351; // x4
  int32_t v352; // w5
  int64_t v353; // x6
  System_String_o *v354; // x7
  ServantGroupMaster_o *v355; // x20
  int32_t v356; // w2
  int32_t v357; // w3
  System_String_o *v358; // x4
  int32_t v359; // w5
  int64_t v360; // x6
  System_String_o *v361; // x7
  ServantLimitMaster_o *v362; // x20
  int32_t v363; // w2
  int32_t v364; // w3
  System_String_o *v365; // x4
  int32_t v366; // w5
  int64_t v367; // x6
  System_String_o *v368; // x7
  ServantLimitAddMaster_o *v369; // x20
  int32_t v370; // w2
  int32_t v371; // w3
  System_String_o *v372; // x4
  int32_t v373; // w5
  int64_t v374; // x6
  System_String_o *v375; // x7
  ServantSkillMaster_o *v376; // x20
  int32_t v377; // w2
  int32_t v378; // w3
  System_String_o *v379; // x4
  int32_t v380; // w5
  int64_t v381; // x6
  System_String_o *v382; // x7
  ServantPassiveSkillMaster_o *v383; // x20
  int32_t v384; // w2
  int32_t v385; // w3
  System_String_o *v386; // x4
  int32_t v387; // w5
  int64_t v388; // x6
  System_String_o *v389; // x7
  BgmMaster_o *v390; // x20
  int32_t v391; // w2
  int32_t v392; // w3
  System_String_o *v393; // x4
  int32_t v394; // w5
  int64_t v395; // x6
  System_String_o *v396; // x7
  ServantScriptMaster_o *v397; // x20
  int32_t v398; // w2
  int32_t v399; // w3
  System_String_o *v400; // x4
  int32_t v401; // w5
  int64_t v402; // x6
  System_String_o *v403; // x7
  NewsMaster_o *v404; // x20
  int32_t v405; // w2
  int32_t v406; // w3
  System_String_o *v407; // x4
  int32_t v408; // w5
  int64_t v409; // x6
  System_String_o *v410; // x7
  TelopMaster_o *v411; // x20
  int32_t v412; // w2
  int32_t v413; // w3
  System_String_o *v414; // x4
  int32_t v415; // w5
  int64_t v416; // x6
  System_String_o *v417; // x7
  UserExpMaster_o *v418; // x20
  int32_t v419; // w2
  int32_t v420; // w3
  System_String_o *v421; // x4
  int32_t v422; // w5
  int64_t v423; // x6
  System_String_o *v424; // x7
  TreasureDvcMaster_o *v425; // x20
  int32_t v426; // w2
  int32_t v427; // w3
  System_String_o *v428; // x4
  int32_t v429; // w5
  int64_t v430; // x6
  System_String_o *v431; // x7
  ServantTreasureDvcMaster_o *v432; // x20
  int32_t v433; // w2
  int32_t v434; // w3
  System_String_o *v435; // x4
  int32_t v436; // w5
  int64_t v437; // x6
  System_String_o *v438; // x7
  SkillMaster_o *v439; // x20
  int32_t v440; // w2
  int32_t v441; // w3
  System_String_o *v442; // x4
  int32_t v443; // w5
  int64_t v444; // x6
  System_String_o *v445; // x7
  SkillLvMaster_o *v446; // x20
  int32_t v447; // w2
  int32_t v448; // w3
  System_String_o *v449; // x4
  int32_t v450; // w5
  int64_t v451; // x6
  System_String_o *v452; // x7
  SkillDetailMaster_o *v453; // x20
  int32_t v454; // w2
  int32_t v455; // w3
  System_String_o *v456; // x4
  int32_t v457; // w5
  int64_t v458; // x6
  System_String_o *v459; // x7
  CommandSpellMaster_o *v460; // x20
  int32_t v461; // w2
  int32_t v462; // w3
  System_String_o *v463; // x4
  int32_t v464; // w5
  int64_t v465; // x6
  System_String_o *v466; // x7
  EquipMaster_o *v467; // x20
  int32_t v468; // w2
  int32_t v469; // w3
  System_String_o *v470; // x4
  int32_t v471; // w5
  int64_t v472; // x6
  System_String_o *v473; // x7
  EquipExpMaster_o *v474; // x20
  int32_t v475; // w2
  int32_t v476; // w3
  System_String_o *v477; // x4
  int32_t v478; // w5
  int64_t v479; // x6
  System_String_o *v480; // x7
  EquipSkillMaster_o *v481; // x20
  int32_t v482; // w2
  int32_t v483; // w3
  System_String_o *v484; // x4
  int32_t v485; // w5
  int64_t v486; // x6
  System_String_o *v487; // x7
  SubEquipMaster_o *v488; // x20
  int32_t v489; // w2
  int32_t v490; // w3
  System_String_o *v491; // x4
  int32_t v492; // w5
  int64_t v493; // x6
  System_String_o *v494; // x7
  AccessaryMaster_o *v495; // x20
  int32_t v496; // w2
  int32_t v497; // w3
  System_String_o *v498; // x4
  int32_t v499; // w5
  int64_t v500; // x6
  System_String_o *v501; // x7
  UserPresentBoxMaster_o *v502; // x20
  int32_t v503; // w2
  int32_t v504; // w3
  System_String_o *v505; // x4
  int32_t v506; // w5
  int64_t v507; // x6
  System_String_o *v508; // x7
  UserDeckMaster_o *v509; // x20
  int32_t v510; // w2
  int32_t v511; // w3
  System_String_o *v512; // x4
  int32_t v513; // w5
  int64_t v514; // x6
  System_String_o *v515; // x7
  UserSubEquipMaster_o *v516; // x20
  int32_t v517; // w2
  int32_t v518; // w3
  System_String_o *v519; // x4
  int32_t v520; // w5
  int64_t v521; // x6
  System_String_o *v522; // x7
  GachaMaster_o *v523; // x20
  int32_t v524; // w2
  int32_t v525; // w3
  System_String_o *v526; // x4
  int32_t v527; // w5
  int64_t v528; // x6
  System_String_o *v529; // x7
  GachaImageMaster_o *v530; // x20
  int32_t v531; // w2
  int32_t v532; // w3
  System_String_o *v533; // x4
  int32_t v534; // w5
  int64_t v535; // x6
  System_String_o *v536; // x7
  UserGachaMaster_o *v537; // x20
  int32_t v538; // w2
  int32_t v539; // w3
  System_String_o *v540; // x4
  int32_t v541; // w5
  int64_t v542; // x6
  System_String_o *v543; // x7
  UserEquipMaster_o *v544; // x20
  int32_t v545; // w2
  int32_t v546; // w3
  System_String_o *v547; // x4
  int32_t v548; // w5
  int64_t v549; // x6
  System_String_o *v550; // x7
  UserServantCollectionMaster_o *v551; // x20
  int32_t v552; // w2
  int32_t v553; // w3
  System_String_o *v554; // x4
  int32_t v555; // w5
  int64_t v556; // x6
  System_String_o *v557; // x7
  FriendshipMaster_o *v558; // x20
  int32_t v559; // w2
  int32_t v560; // w3
  System_String_o *v561; // x4
  int32_t v562; // w5
  int64_t v563; // x6
  System_String_o *v564; // x7
  GachaTicketMaster_o *v565; // x20
  int32_t v566; // w2
  int32_t v567; // w3
  System_String_o *v568; // x4
  int32_t v569; // w5
  int64_t v570; // x6
  System_String_o *v571; // x7
  UserFormationMaster_o *v572; // x20
  int32_t v573; // w2
  int32_t v574; // w3
  System_String_o *v575; // x4
  int32_t v576; // w5
  int64_t v577; // x6
  System_String_o *v578; // x7
  FunctionMaster_o *v579; // x20
  int32_t v580; // w2
  int32_t v581; // w3
  System_String_o *v582; // x4
  int32_t v583; // w5
  int64_t v584; // x6
  System_String_o *v585; // x7
  BuffMaster_o *v586; // x20
  int32_t v587; // w2
  int32_t v588; // w3
  System_String_o *v589; // x4
  int32_t v590; // w5
  int64_t v591; // x6
  System_String_o *v592; // x7
  GachaReleaseMaster_o *v593; // x20
  int32_t v594; // w2
  int32_t v595; // w3
  System_String_o *v596; // x4
  int32_t v597; // w5
  int64_t v598; // x6
  System_String_o *v599; // x7
  CombineQpMaster_o *v600; // x20
  int32_t v601; // w2
  int32_t v602; // w3
  System_String_o *v603; // x4
  int32_t v604; // w5
  int64_t v605; // x6
  System_String_o *v606; // x7
  CombineMaterialMaster_o *v607; // x20
  int32_t v608; // w2
  int32_t v609; // w3
  System_String_o *v610; // x4
  int32_t v611; // w5
  int64_t v612; // x6
  System_String_o *v613; // x7
  EventCombineMaster_o *v614; // x20
  int32_t v615; // w2
  int32_t v616; // w3
  System_String_o *v617; // x4
  int32_t v618; // w5
  int64_t v619; // x6
  System_String_o *v620; // x7
  ServantExpMaster_o *v621; // x20
  int32_t v622; // w2
  int32_t v623; // w3
  System_String_o *v624; // x4
  int32_t v625; // w5
  int64_t v626; // x6
  System_String_o *v627; // x7
  CombineSkillMaster_o *v628; // x20
  int32_t v629; // w2
  int32_t v630; // w3
  System_String_o *v631; // x4
  int32_t v632; // w5
  int64_t v633; // x6
  System_String_o *v634; // x7
  CombineTdMaster_o *v635; // x20
  int32_t v636; // w2
  int32_t v637; // w3
  System_String_o *v638; // x4
  int32_t v639; // w5
  int64_t v640; // x6
  System_String_o *v641; // x7
  EventQuestMaster_o *v642; // x20
  int32_t v643; // w2
  int32_t v644; // w3
  System_String_o *v645; // x4
  int32_t v646; // w5
  int64_t v647; // x6
  System_String_o *v648; // x7
  EventCampaignMaster_o *v649; // x20
  int32_t v650; // w2
  int32_t v651; // w3
  System_String_o *v652; // x4
  int32_t v653; // w5
  int64_t v654; // x6
  System_String_o *v655; // x7
  IllustratorMaster_o *v656; // x20
  int32_t v657; // w2
  int32_t v658; // w3
  System_String_o *v659; // x4
  int32_t v660; // w5
  int64_t v661; // x6
  System_String_o *v662; // x7
  CvMaster_o *v663; // x20
  int32_t v664; // w2
  int32_t v665; // w3
  System_String_o *v666; // x4
  int32_t v667; // w5
  int64_t v668; // x6
  System_String_o *v669; // x7
  TreasureDvcLvMaster_o *v670; // x20
  int32_t v671; // w2
  int32_t v672; // w3
  System_String_o *v673; // x4
  int32_t v674; // w5
  int64_t v675; // x6
  System_String_o *v676; // x7
  TreasureDvcDetailMaster_o *v677; // x20
  int32_t v678; // w2
  int32_t v679; // w3
  System_String_o *v680; // x4
  int32_t v681; // w5
  int64_t v682; // x6
  System_String_o *v683; // x7
  UserFollowerMaster_o *v684; // x20
  int32_t v685; // w2
  int32_t v686; // w3
  System_String_o *v687; // x4
  int32_t v688; // w5
  int64_t v689; // x6
  System_String_o *v690; // x7
  NpcFollowerMaster_o *v691; // x20
  int32_t v692; // w2
  int32_t v693; // w3
  System_String_o *v694; // x4
  int32_t v695; // w5
  int64_t v696; // x6
  System_String_o *v697; // x7
  NpcServantFollowerMaster_o *v698; // x20
  int32_t v699; // w2
  int32_t v700; // w3
  System_String_o *v701; // x4
  int32_t v702; // w5
  int64_t v703; // x6
  System_String_o *v704; // x7
  UserEventMaster_o *v705; // x20
  int32_t v706; // w2
  int32_t v707; // w3
  System_String_o *v708; // x4
  int32_t v709; // w5
  int64_t v710; // x6
  System_String_o *v711; // x7
  UserShopMaster_o *v712; // x20
  int32_t v713; // w2
  int32_t v714; // w3
  System_String_o *v715; // x4
  int32_t v716; // w5
  int64_t v717; // x6
  System_String_o *v718; // x7
  UserContinueMaster_o *v719; // x20
  int32_t v720; // w2
  int32_t v721; // w3
  System_String_o *v722; // x4
  int32_t v723; // w5
  int64_t v724; // x6
  System_String_o *v725; // x7
  ConstantMaster_o *v726; // x20
  int32_t v727; // w2
  int32_t v728; // w3
  System_String_o *v729; // x4
  int32_t v730; // w5
  int64_t v731; // x6
  System_String_o *v732; // x7
  ConstantLongMaster_o *v733; // x20
  int32_t v734; // w2
  int32_t v735; // w3
  System_String_o *v736; // x4
  int32_t v737; // w5
  int64_t v738; // x6
  System_String_o *v739; // x7
  ConstantStrMaster_o *v740; // x20
  int32_t v741; // w2
  int32_t v742; // w3
  System_String_o *v743; // x4
  int32_t v744; // w5
  int64_t v745; // x6
  System_String_o *v746; // x7
  AiMaster_o *v747; // x20
  int32_t v748; // w2
  int32_t v749; // w3
  System_String_o *v750; // x4
  int32_t v751; // w5
  int64_t v752; // x6
  System_String_o *v753; // x7
  AiActMaster_o *v754; // x20
  int32_t v755; // w2
  int32_t v756; // w3
  System_String_o *v757; // x4
  int32_t v758; // w5
  int64_t v759; // x6
  System_String_o *v760; // x7
  AttriRelationMaster_o *v761; // x20
  int32_t v762; // w2
  int32_t v763; // w3
  System_String_o *v764; // x4
  int32_t v765; // w5
  int64_t v766; // x6
  System_String_o *v767; // x7
  ClassRelationMaster_o *v768; // x20
  int32_t v769; // w2
  int32_t v770; // w3
  System_String_o *v771; // x4
  int32_t v772; // w5
  int64_t v773; // x6
  System_String_o *v774; // x7
  EffectMaster_o *v775; // x20
  int32_t v776; // w2
  int32_t v777; // w3
  System_String_o *v778; // x4
  int32_t v779; // w5
  int64_t v780; // x6
  System_String_o *v781; // x7
  EquipImageMaster_o *v782; // x20
  int32_t v783; // w2
  int32_t v784; // w3
  System_String_o *v785; // x4
  int32_t v786; // w5
  int64_t v787; // x6
  System_String_o *v788; // x7
  ServantVoiceMaster_o *v789; // x20
  int32_t v790; // w2
  int32_t v791; // w3
  System_String_o *v792; // x4
  int32_t v793; // w5
  int64_t v794; // x6
  System_String_o *v795; // x7
  CombineLimitMaster_o *v796; // x20
  int32_t v797; // w2
  int32_t v798; // w3
  System_String_o *v799; // x4
  int32_t v800; // w5
  int64_t v801; // x6
  System_String_o *v802; // x7
  CardMaster_o *v803; // x20
  int32_t v804; // w2
  int32_t v805; // w3
  System_String_o *v806; // x4
  int32_t v807; // w5
  int64_t v808; // x6
  System_String_o *v809; // x7
  CombineQpSvtEquipMaster_o *v810; // x20
  int32_t v811; // w2
  int32_t v812; // w3
  System_String_o *v813; // x4
  int32_t v814; // w5
  int64_t v815; // x6
  System_String_o *v816; // x7
  ServantRarityMaster_o *v817; // x20
  int32_t v818; // w2
  int32_t v819; // w3
  System_String_o *v820; // x4
  int32_t v821; // w5
  int64_t v822; // x6
  System_String_o *v823; // x7
  SetItemMaster_o *v824; // x20
  int32_t v825; // w2
  int32_t v826; // w3
  System_String_o *v827; // x4
  int32_t v828; // w5
  int64_t v829; // x6
  System_String_o *v830; // x7
  RecoverMaster_o *v831; // x20
  int32_t v832; // w2
  int32_t v833; // w3
  System_String_o *v834; // x4
  int32_t v835; // w5
  int64_t v836; // x6
  System_String_o *v837; // x7
  BannerMaster_o *v838; // x20
  int32_t v839; // w2
  int32_t v840; // w3
  System_String_o *v841; // x4
  int32_t v842; // w5
  int64_t v843; // x6
  System_String_o *v844; // x7
  ShopReleaseMaster_o *v845; // x20
  int32_t v846; // w2
  int32_t v847; // w3
  System_String_o *v848; // x4
  int32_t v849; // w5
  int64_t v850; // x6
  System_String_o *v851; // x7
  EventRewardMaster_o *v852; // x20
  int32_t v853; // w2
  int32_t v854; // w3
  System_String_o *v855; // x4
  int32_t v856; // w5
  int64_t v857; // x6
  System_String_o *v858; // x7
  EventDetailMaster_o *v859; // x20
  int32_t v860; // w2
  int32_t v861; // w3
  System_String_o *v862; // x4
  int32_t v863; // w5
  int64_t v864; // x6
  System_String_o *v865; // x7
  EventServantMaster_o *v866; // x20
  int32_t v867; // w2
  int32_t v868; // w3
  System_String_o *v869; // x4
  int32_t v870; // w5
  int64_t v871; // x6
  System_String_o *v872; // x7
  BoxGachaMaster_o *v873; // x20
  int32_t v874; // w2
  int32_t v875; // w3
  System_String_o *v876; // x4
  int32_t v877; // w5
  int64_t v878; // x6
  System_String_o *v879; // x7
  BoxGachaBaseMaster_o *v880; // x20
  int32_t v881; // w2
  int32_t v882; // w3
  System_String_o *v883; // x4
  int32_t v884; // w5
  int64_t v885; // x6
  System_String_o *v886; // x7
  BoxGachaTalkMaster_o *v887; // x20
  int32_t v888; // w2
  int32_t v889; // w3
  System_String_o *v890; // x4
  int32_t v891; // w5
  int64_t v892; // x6
  System_String_o *v893; // x7
  UserBoxGachaMaster_o *v894; // x20
  int32_t v895; // w2
  int32_t v896; // w3
  System_String_o *v897; // x4
  int32_t v898; // w5
  int64_t v899; // x6
  System_String_o *v900; // x7
  BoxGachaHistoryMaster_o *v901; // x20
  int32_t v902; // w2
  int32_t v903; // w3
  System_String_o *v904; // x4
  int32_t v905; // w5
  int64_t v906; // x6
  System_String_o *v907; // x7
  BattleBgMaster_o *v908; // x20
  int32_t v909; // w2
  int32_t v910; // w3
  System_String_o *v911; // x4
  int32_t v912; // w5
  int64_t v913; // x6
  System_String_o *v914; // x7
  TipsBattleMaster_o *v915; // x20
  int32_t v916; // w2
  int32_t v917; // w3
  System_String_o *v918; // x4
  int32_t v919; // w5
  int64_t v920; // x6
  System_String_o *v921; // x7
  UserLoginMaster_o *v922; // x20
  int32_t v923; // w2
  int32_t v924; // w3
  System_String_o *v925; // x4
  int32_t v926; // w5
  int64_t v927; // x6
  System_String_o *v928; // x7
  VoiceMaster_o *v929; // x20
  int32_t v930; // w2
  int32_t v931; // w3
  System_String_o *v932; // x4
  int32_t v933; // w5
  int64_t v934; // x6
  System_String_o *v935; // x7
  EventRewardExtraMaster_o *v936; // x20
  int32_t v937; // w2
  int32_t v938; // w3
  System_String_o *v939; // x4
  int32_t v940; // w5
  int64_t v941; // x6
  System_String_o *v942; // x7
  EventMissionMaster_o *v943; // x20
  int32_t v944; // w2
  int32_t v945; // w3
  System_String_o *v946; // x4
  int32_t v947; // w5
  int64_t v948; // x6
  System_String_o *v949; // x7
  EventMissionActionMaster_o *v950; // x20
  int32_t v951; // w2
  int32_t v952; // w3
  System_String_o *v953; // x4
  int32_t v954; // w5
  int64_t v955; // x6
  System_String_o *v956; // x7
  EventMissionActionAddMaster_o *v957; // x20
  int32_t v958; // w2
  int32_t v959; // w3
  System_String_o *v960; // x4
  int32_t v961; // w5
  int64_t v962; // x6
  System_String_o *v963; // x7
  EventMissionConditionMaster_o *v964; // x20
  int32_t v965; // w2
  int32_t v966; // w3
  System_String_o *v967; // x4
  int32_t v968; // w5
  int64_t v969; // x6
  System_String_o *v970; // x7
  EventMissionCondDetailMaster_o *v971; // x20
  int32_t v972; // w2
  int32_t v973; // w3
  System_String_o *v974; // x4
  int32_t v975; // w5
  int64_t v976; // x6
  System_String_o *v977; // x7
  EventMissionAddMaster_o *v978; // x20
  int32_t v979; // w2
  int32_t v980; // w3
  System_String_o *v981; // x4
  int32_t v982; // w5
  int64_t v983; // x6
  System_String_o *v984; // x7
  CompleteMissionMaster_o *v985; // x20
  int32_t v986; // w2
  int32_t v987; // w3
  System_String_o *v988; // x4
  int32_t v989; // w5
  int64_t v990; // x6
  System_String_o *v991; // x7
  EventRewardSetMaster_o *v992; // x20
  int32_t v993; // w2
  int32_t v994; // w3
  System_String_o *v995; // x4
  int32_t v996; // w5
  int64_t v997; // x6
  System_String_o *v998; // x7
  UserEventMissionMaster_o *v999; // x20
  int32_t v1000; // w2
  int32_t v1001; // w3
  System_String_o *v1002; // x4
  int32_t v1003; // w5
  int64_t v1004; // x6
  System_String_o *v1005; // x7
  UserEventMissionCondDetailMaster_o *v1006; // x20
  int32_t v1007; // w2
  int32_t v1008; // w3
  System_String_o *v1009; // x4
  int32_t v1010; // w5
  int64_t v1011; // x6
  System_String_o *v1012; // x7
  BoxGachaBaseDetailMaster_o *v1013; // x20
  int32_t v1014; // w2
  int32_t v1015; // w3
  System_String_o *v1016; // x4
  int32_t v1017; // w5
  int64_t v1018; // x6
  System_String_o *v1019; // x7
  UserServantLeaderMaster_o *v1020; // x20
  int32_t v1021; // w2
  int32_t v1022; // w3
  System_String_o *v1023; // x4
  int32_t v1024; // w5
  int64_t v1025; // x6
  System_String_o *v1026; // x7
  ClosedMessageMaster_o *v1027; // x20
  int32_t v1028; // w2
  int32_t v1029; // w3
  System_String_o *v1030; // x4
  int32_t v1031; // w5
  int64_t v1032; // x6
  System_String_o *v1033; // x7
  FunctionGroupMaster_o *v1034; // x20
  int32_t v1035; // w2
  int32_t v1036; // w3
  System_String_o *v1037; // x4
  int32_t v1038; // w5
  int64_t v1039; // x6
  System_String_o *v1040; // x7
  EventRaidMaster_o *v1041; // x20
  int32_t v1042; // w2
  int32_t v1043; // w3
  System_String_o *v1044; // x4
  int32_t v1045; // w5
  int64_t v1046; // x6
  System_String_o *v1047; // x7
  TotalEventRaidMaster_o *v1048; // x20
  int32_t v1049; // w2
  int32_t v1050; // w3
  System_String_o *v1051; // x4
  int32_t v1052; // w5
  int64_t v1053; // x6
  System_String_o *v1054; // x7
  UserEventRaidMaster_o *v1055; // x20
  int32_t v1056; // w2
  int32_t v1057; // w3
  System_String_o *v1058; // x4
  int32_t v1059; // w5
  int64_t v1060; // x6
  System_String_o *v1061; // x7
  EventPointMaster_o *v1062; // x20
  int32_t v1063; // w2
  int32_t v1064; // w3
  System_String_o *v1065; // x4
  int32_t v1066; // w5
  int64_t v1067; // x6
  System_String_o *v1068; // x7
  EventPointGroupMaster_o *v1069; // x20
  int32_t v1070; // w2
  int32_t v1071; // w3
  System_String_o *v1072; // x4
  int32_t v1073; // w5
  int64_t v1074; // x6
  System_String_o *v1075; // x7
  TotalEventPointMaster_o *v1076; // x20
  int32_t v1077; // w2
  int32_t v1078; // w3
  System_String_o *v1079; // x4
  int32_t v1080; // w5
  int64_t v1081; // x6
  System_String_o *v1082; // x7
  UserEventPointMaster_o *v1083; // x20
  int32_t v1084; // w2
  int32_t v1085; // w3
  System_String_o *v1086; // x4
  int32_t v1087; // w5
  int64_t v1088; // x6
  System_String_o *v1089; // x7
  EventPointUpperMaster_o *v1090; // x20
  int32_t v1091; // w2
  int32_t v1092; // w3
  System_String_o *v1093; // x4
  int32_t v1094; // w5
  int64_t v1095; // x6
  System_String_o *v1096; // x7
  EventPointUpperReleaseMaster_o *v1097; // x20
  int32_t v1098; // w2
  int32_t v1099; // w3
  System_String_o *v1100; // x4
  int32_t v1101; // w5
  int64_t v1102; // x6
  System_String_o *v1103; // x7
  EventRaceMaster_o *v1104; // x20
  int32_t v1105; // w2
  int32_t v1106; // w3
  System_String_o *v1107; // x4
  int32_t v1108; // w5
  int64_t v1109; // x6
  System_String_o *v1110; // x7
  EventRaceResultMaster_o *v1111; // x20
  int32_t v1112; // w2
  int32_t v1113; // w3
  System_String_o *v1114; // x4
  int32_t v1115; // w5
  int64_t v1116; // x6
  System_String_o *v1117; // x7
  QuestRacePointMaster_o *v1118; // x20
  int32_t v1119; // w2
  int32_t v1120; // w3
  System_String_o *v1121; // x4
  int32_t v1122; // w5
  int64_t v1123; // x6
  System_String_o *v1124; // x7
  UserEventRaceMaster_o *v1125; // x20
  int32_t v1126; // w2
  int32_t v1127; // w3
  System_String_o *v1128; // x4
  int32_t v1129; // w5
  int64_t v1130; // x6
  System_String_o *v1131; // x7
  EventScriptMaster_o *v1132; // x20
  int32_t v1133; // w2
  int32_t v1134; // w3
  System_String_o *v1135; // x4
  int32_t v1136; // w5
  int64_t v1137; // x6
  System_String_o *v1138; // x7
  EventScriptReleaseMaster_o *v1139; // x20
  int32_t v1140; // w2
  int32_t v1141; // w3
  System_String_o *v1142; // x4
  int32_t v1143; // w5
  int64_t v1144; // x6
  System_String_o *v1145; // x7
  UserPresentHistoryMaster_o *v1146; // x20
  int32_t v1147; // w2
  int32_t v1148; // w3
  System_String_o *v1149; // x4
  int32_t v1150; // w5
  int64_t v1151; // x6
  System_String_o *v1152; // x7
  MstMissionMaster_o *v1153; // x20
  int32_t v1154; // w2
  int32_t v1155; // w3
  System_String_o *v1156; // x4
  int32_t v1157; // w5
  int64_t v1158; // x6
  System_String_o *v1159; // x7
  ServantExceedMaster_o *v1160; // x20
  int32_t v1161; // w2
  int32_t v1162; // w3
  System_String_o *v1163; // x4
  int32_t v1164; // w5
  int64_t v1165; // x6
  System_String_o *v1166; // x7
  PartialMaintenanceMaster_o *v1167; // x20
  int32_t v1168; // w2
  int32_t v1169; // w3
  System_String_o *v1170; // x4
  int32_t v1171; // w5
  int64_t v1172; // x6
  System_String_o *v1173; // x7
  GuideMaster_o *v1174; // x20
  int32_t v1175; // w2
  int32_t v1176; // w3
  System_String_o *v1177; // x4
  int32_t v1178; // w5
  int64_t v1179; // x6
  System_String_o *v1180; // x7
  MstMissionDisplayInfoMaster_o *v1181; // x20
  int32_t v1182; // w2
  int32_t v1183; // w3
  System_String_o *v1184; // x4
  int32_t v1185; // w5
  int64_t v1186; // x6
  System_String_o *v1187; // x7
  GachaGroupMaster_o *v1188; // x20
  int32_t v1189; // w2
  int32_t v1190; // w3
  System_String_o *v1191; // x4
  int32_t v1192; // w5
  int64_t v1193; // x6
  System_String_o *v1194; // x7
  QuestResetMaster_o *v1195; // x20
  int32_t v1196; // w2
  int32_t v1197; // w3
  System_String_o *v1198; // x4
  int32_t v1199; // w5
  int64_t v1200; // x6
  System_String_o *v1201; // x7
  WarAddMaster_o *v1202; // x20
  int32_t v1203; // w2
  int32_t v1204; // w3
  System_String_o *v1205; // x4
  int32_t v1206; // w5
  int64_t v1207; // x6
  System_String_o *v1208; // x7
  EventItemDisplayMaster_o *v1209; // x20
  int32_t v1210; // w2
  int32_t v1211; // w3
  System_String_o *v1212; // x4
  int32_t v1213; // w5
  int64_t v1214; // x6
  System_String_o *v1215; // x7
  EventItemDisplayGroupMaster_o *v1216; // x20
  int32_t v1217; // w2
  int32_t v1218; // w3
  System_String_o *v1219; // x4
  int32_t v1220; // w5
  int64_t v1221; // x6
  System_String_o *v1222; // x7
  EventItemDisplayReleaseMaster_o *v1223; // x20
  int32_t v1224; // w2
  int32_t v1225; // w3
  System_String_o *v1226; // x4
  int32_t v1227; // w5
  int64_t v1228; // x6
  System_String_o *v1229; // x7
  EventTutorialMaster_o *v1230; // x20
  int32_t v1231; // w2
  int32_t v1232; // w3
  System_String_o *v1233; // x4
  int32_t v1234; // w5
  int64_t v1235; // x6
  System_String_o *v1236; // x7
  EventTutorialCondMaster_o *v1237; // x20
  int32_t v1238; // w2
  int32_t v1239; // w3
  System_String_o *v1240; // x4
  int32_t v1241; // w5
  int64_t v1242; // x6
  System_String_o *v1243; // x7
  VoiceReleaseMaster_o *v1244; // x20
  int32_t v1245; // w2
  int32_t v1246; // w3
  System_String_o *v1247; // x4
  int32_t v1248; // w5
  int64_t v1249; // x6
  System_String_o *v1250; // x7
  EventSuperBossMaster_o *v1251; // x20
  int32_t v1252; // w2
  int32_t v1253; // w3
  System_String_o *v1254; // x4
  int32_t v1255; // w5
  int64_t v1256; // x6
  System_String_o *v1257; // x7
  UserSuperBossMaster_o *v1258; // x20
  int32_t v1259; // w2
  int32_t v1260; // w3
  System_String_o *v1261; // x4
  int32_t v1262; // w5
  int64_t v1263; // x6
  System_String_o *v1264; // x7
  QuestScriptMaster_o *v1265; // x20
  int32_t v1266; // w2
  int32_t v1267; // w3
  System_String_o *v1268; // x4
  int32_t v1269; // w5
  int64_t v1270; // x6
  System_String_o *v1271; // x7
  QuestScriptReleaseMaster_o *v1272; // x20
  int32_t v1273; // w2
  int32_t v1274; // w3
  System_String_o *v1275; // x4
  int32_t v1276; // w5
  int64_t v1277; // x6
  System_String_o *v1278; // x7
  MaterialFolderMaster_o *v1279; // x20
  int32_t v1280; // w2
  int32_t v1281; // w3
  System_String_o *v1282; // x4
  int32_t v1283; // w5
  int64_t v1284; // x6
  System_String_o *v1285; // x7
  RestrictionMaster_o *v1286; // x20
  int32_t v1287; // w2
  int32_t v1288; // w3
  System_String_o *v1289; // x4
  int32_t v1290; // w5
  int64_t v1291; // x6
  System_String_o *v1292; // x7
  QuestRestrictionMaster_o *v1293; // x20
  int32_t v1294; // w2
  int32_t v1295; // w3
  System_String_o *v1296; // x4
  int32_t v1297; // w5
  int64_t v1298; // x6
  System_String_o *v1299; // x7
  ServantVoiceRelationMaster_o *v1300; // x20
  int32_t v1301; // w2
  int32_t v1302; // w3
  System_String_o *v1303; // x4
  int32_t v1304; // w5
  int64_t v1305; // x6
  System_String_o *v1306; // x7
  ShopDetailMaster_o *v1307; // x20
  int32_t v1308; // w2
  int32_t v1309; // w3
  System_String_o *v1310; // x4
  int32_t v1311; // w5
  int64_t v1312; // x6
  System_String_o *v1313; // x7
  ServantScriptAddMaster_o *v1314; // x20
  int32_t v1315; // w2
  int32_t v1316; // w3
  System_String_o *v1317; // x4
  int32_t v1318; // w5
  int64_t v1319; // x6
  System_String_o *v1320; // x7
  CombineMaster_o *v1321; // x20
  int32_t v1322; // w2
  int32_t v1323; // w3
  System_String_o *v1324; // x4
  int32_t v1325; // w5
  int64_t v1326; // x6
  System_String_o *v1327; // x7
  AiFieldMaster_o *v1328; // x20
  int32_t v1329; // w2
  int32_t v1330; // w3
  System_String_o *v1331; // x4
  int32_t v1332; // w5
  int64_t v1333; // x6
  System_String_o *v1334; // x7
  ServantCommentAddMaster_o *v1335; // x20
  int32_t v1336; // w2
  int32_t v1337; // w3
  System_String_o *v1338; // x4
  int32_t v1339; // w5
  int64_t v1340; // x6
  System_String_o *v1341; // x7
  EventFilterMaster_o *v1342; // x20
  int32_t v1343; // w2
  int32_t v1344; // w3
  System_String_o *v1345; // x4
  int32_t v1346; // w5
  int64_t v1347; // x6
  System_String_o *v1348; // x7
  UserSupportDeckMaster_o *v1349; // x20
  int32_t v1350; // w2
  int32_t v1351; // w3
  System_String_o *v1352; // x4
  int32_t v1353; // w5
  int64_t v1354; // x6
  System_String_o *v1355; // x7
  EventRewardSceneMaster_o *v1356; // x20
  int32_t v1357; // w2
  int32_t v1358; // w3
  System_String_o *v1359; // x4
  int32_t v1360; // w5
  int64_t v1361; // x6
  System_String_o *v1362; // x7
  EventVoicePlayMaster_o *v1363; // x20
  int32_t v1364; // w2
  int32_t v1365; // w3
  System_String_o *v1366; // x4
  int32_t v1367; // w5
  int64_t v1368; // x6
  System_String_o *v1369; // x7
  GachaSubMaster_o *v1370; // x20
  int32_t v1371; // w2
  int32_t v1372; // w3
  System_String_o *v1373; // x4
  int32_t v1374; // w5
  int64_t v1375; // x6
  System_String_o *v1376; // x7
  GachaDetailMaster_o *v1377; // x20
  int32_t v1378; // w2
  int32_t v1379; // w3
  System_String_o *v1380; // x4
  int32_t v1381; // w5
  int64_t v1382; // x6
  System_String_o *v1383; // x7
  GachaBaseCollateralMaster_o *v1384; // x20
  int32_t v1385; // w2
  int32_t v1386; // w3
  System_String_o *v1387; // x4
  int32_t v1388; // w5
  int64_t v1389; // x6
  System_String_o *v1390; // x7
  GachaAdjustAddMaster_o *v1391; // x20
  int32_t v1392; // w2
  int32_t v1393; // w3
  System_String_o *v1394; // x4
  int32_t v1395; // w5
  int64_t v1396; // x6
  System_String_o *v1397; // x7
  GachaBonusSelectMaster_o *v1398; // x20
  int32_t v1399; // w2
  int32_t v1400; // w3
  System_String_o *v1401; // x4
  int32_t v1402; // w5
  int64_t v1403; // x6
  System_String_o *v1404; // x7
  GachaBonusSelectLineupMaster_o *v1405; // x20
  int32_t v1406; // w2
  int32_t v1407; // w3
  System_String_o *v1408; // x4
  int32_t v1409; // w5
  int64_t v1410; // x6
  System_String_o *v1411; // x7
  ServantChangeMaster_o *v1412; // x20
  int32_t v1413; // w2
  int32_t v1414; // w3
  System_String_o *v1415; // x4
  int32_t v1416; // w5
  int64_t v1417; // x6
  System_String_o *v1418; // x7
  VoiceCondMaster_o *v1419; // x20
  int32_t v1420; // w2
  int32_t v1421; // w3
  System_String_o *v1422; // x4
  int32_t v1423; // w5
  int64_t v1424; // x6
  System_String_o *v1425; // x7
  BgmReleaseMaster_o *v1426; // x20
  int32_t v1427; // w2
  int32_t v1428; // w3
  System_String_o *v1429; // x4
  int32_t v1430; // w5
  int64_t v1431; // x6
  System_String_o *v1432; // x7
  MyRoomAddMaster_o *v1433; // x20
  int32_t v1434; // w2
  int32_t v1435; // w3
  System_String_o *v1436; // x4
  int32_t v1437; // w5
  int64_t v1438; // x6
  System_String_o *v1439; // x7
  ShopActionMaster_o *v1440; // x20
  int32_t v1441; // w2
  int32_t v1442; // w3
  System_String_o *v1443; // x4
  int32_t v1444; // w5
  int64_t v1445; // x6
  System_String_o *v1446; // x7
  EventRewardSceneReleaseMaster_o *v1447; // x20
  int32_t v1448; // w2
  int32_t v1449; // w3
  System_String_o *v1450; // x4
  int32_t v1451; // w5
  int64_t v1452; // x6
  System_String_o *v1453; // x7
  QuestBehaviorMaster_o *v1454; // x20
  int32_t v1455; // w2
  int32_t v1456; // w3
  System_String_o *v1457; // x4
  int32_t v1458; // w5
  int64_t v1459; // x6
  System_String_o *v1460; // x7
  MapMaster_o *v1461; // x20
  int32_t v1462; // w2
  int32_t v1463; // w3
  System_String_o *v1464; // x4
  int32_t v1465; // w5
  int64_t v1466; // x6
  System_String_o *v1467; // x7
  MapCondMaster_o *v1468; // x20
  int32_t v1469; // w2
  int32_t v1470; // w3
  System_String_o *v1471; // x4
  int32_t v1472; // w5
  int64_t v1473; // x6
  System_String_o *v1474; // x7
  MapButtonMaster_o *v1475; // x20
  int32_t v1476; // w2
  int32_t v1477; // w3
  System_String_o *v1478; // x4
  int32_t v1479; // w5
  int64_t v1480; // x6
  System_String_o *v1481; // x7
  BannerAddMaster_o *v1482; // x20
  int32_t v1483; // w2
  int32_t v1484; // w3
  System_String_o *v1485; // x4
  int32_t v1486; // w5
  int64_t v1487; // x6
  System_String_o *v1488; // x7
  EventAddMaster_o *v1489; // x20
  int32_t v1490; // w2
  int32_t v1491; // w3
  System_String_o *v1492; // x4
  int32_t v1493; // w5
  int64_t v1494; // x6
  System_String_o *v1495; // x7
  TotalLoginMaster_o *v1496; // x20
  int32_t v1497; // w2
  int32_t v1498; // w3
  System_String_o *v1499; // x4
  int32_t v1500; // w5
  int64_t v1501; // x6
  System_String_o *v1502; // x7
  ServantFilterMaster_o *v1503; // x20
  int32_t v1504; // w2
  int32_t v1505; // w3
  System_String_o *v1506; // x4
  int32_t v1507; // w5
  int64_t v1508; // x6
  System_String_o *v1509; // x7
  CombineCostumeMaster_o *v1510; // x20
  int32_t v1511; // w2
  int32_t v1512; // w3
  System_String_o *v1513; // x4
  int32_t v1514; // w5
  int64_t v1515; // x6
  System_String_o *v1516; // x7
  ServantCostumeMaster_o *v1517; // x20
  int32_t v1518; // w2
  int32_t v1519; // w3
  System_String_o *v1520; // x4
  int32_t v1521; // w5
  int64_t v1522; // x6
  System_String_o *v1523; // x7
  ServantCostumeReleaseMaster_o *v1524; // x20
  int32_t v1525; // w2
  int32_t v1526; // w3
  System_String_o *v1527; // x4
  int32_t v1528; // w5
  int64_t v1529; // x6
  System_String_o *v1530; // x7
  StaffPhotoMaster_o *v1531; // x20
  int32_t v1532; // w2
  int32_t v1533; // w3
  System_String_o *v1534; // x4
  int32_t v1535; // w5
  int64_t v1536; // x6
  System_String_o *v1537; // x7
  StaffPhotoCostumeMaster_o *v1538; // x20
  int32_t v1539; // w2
  int32_t v1540; // w3
  System_String_o *v1541; // x4
  int32_t v1542; // w5
  int64_t v1543; // x6
  System_String_o *v1544; // x7
  UserFriendRequestHistoryMaster_o *v1545; // x20
  int32_t v1546; // w2
  int32_t v1547; // w3
  System_String_o *v1548; // x4
  int32_t v1549; // w5
  int64_t v1550; // x6
  System_String_o *v1551; // x7
  UserBlacklistMaster_o *v1552; // x20
  int32_t v1553; // w2
  int32_t v1554; // w3
  System_String_o *v1555; // x4
  int32_t v1556; // w5
  int64_t v1557; // x6
  System_String_o *v1558; // x7
  ItemSelectMaster_o *v1559; // x20
  int32_t v1560; // w2
  int32_t v1561; // w3
  System_String_o *v1562; // x4
  int32_t v1563; // w5
  int64_t v1564; // x6
  System_String_o *v1565; // x7
  TotalEventRaceMaster_o *v1566; // x20
  int32_t v1567; // w2
  int32_t v1568; // w3
  System_String_o *v1569; // x4
  int32_t v1570; // w5
  int64_t v1571; // x6
  System_String_o *v1572; // x7
  EventPointGroupAddMaster_o *v1573; // x20
  int32_t v1574; // w2
  int32_t v1575; // w3
  System_String_o *v1576; // x4
  int32_t v1577; // w5
  int64_t v1578; // x6
  System_String_o *v1579; // x7
  VoicePlayGroupMaster_o *v1580; // x20
  int32_t v1581; // w2
  int32_t v1582; // w3
  System_String_o *v1583; // x4
  int32_t v1584; // w5
  int64_t v1585; // x6
  System_String_o *v1586; // x7
  VoicePlayCondMaster_o *v1587; // x20
  int32_t v1588; // w2
  int32_t v1589; // w3
  System_String_o *v1590; // x4
  int32_t v1591; // w5
  int64_t v1592; // x6
  System_String_o *v1593; // x7
  GachaStoryAdjustMaster_o *v1594; // x20
  int32_t v1595; // w2
  int32_t v1596; // w3
  System_String_o *v1597; // x4
  int32_t v1598; // w5
  int64_t v1599; // x6
  System_String_o *v1600; // x7
  ServantFlagMaster_o *v1601; // x20
  int32_t v1602; // w2
  int32_t v1603; // w3
  System_String_o *v1604; // x4
  int32_t v1605; // w5
  int64_t v1606; // x6
  System_String_o *v1607; // x7
  ServantFlagReleaseMaster_o *v1608; // x20
  int32_t v1609; // w2
  int32_t v1610; // w3
  System_String_o *v1611; // x4
  int32_t v1612; // w5
  int64_t v1613; // x6
  System_String_o *v1614; // x7
  EventLocationCampaignMaster_o *v1615; // x20
  int32_t v1616; // w2
  int32_t v1617; // w3
  System_String_o *v1618; // x4
  int32_t v1619; // w5
  int64_t v1620; // x6
  System_String_o *v1621; // x7
  CampaignInfoMaster_o *v1622; // x20
  int32_t v1623; // w2
  int32_t v1624; // w3
  System_String_o *v1625; // x4
  int32_t v1626; // w5
  int64_t v1627; // x6
  System_String_o *v1628; // x7
  DialogMessageMaster_o *v1629; // x20
  int32_t v1630; // w2
  int32_t v1631; // w3
  System_String_o *v1632; // x4
  int32_t v1633; // w5
  int64_t v1634; // x6
  System_String_o *v1635; // x7
  ServantIndividualityMaster_o *v1636; // x20
  int32_t v1637; // w2
  int32_t v1638; // w3
  System_String_o *v1639; // x4
  int32_t v1640; // w5
  int64_t v1641; // x6
  System_String_o *v1642; // x7
  BoardMessageMaster_o *v1643; // x20
  int32_t v1644; // w2
  int32_t v1645; // w3
  System_String_o *v1646; // x4
  int32_t v1647; // w5
  int64_t v1648; // x6
  System_String_o *v1649; // x7
  BoardMessageReleaseMaster_o *v1650; // x20
  int32_t v1651; // w2
  int32_t v1652; // w3
  System_String_o *v1653; // x4
  int32_t v1654; // w5
  int64_t v1655; // x6
  System_String_o *v1656; // x7
  EventServantFatigueMaster_o *v1657; // x20
  int32_t v1658; // w2
  int32_t v1659; // w3
  System_String_o *v1660; // x4
  int32_t v1661; // w5
  int64_t v1662; // x6
  System_String_o *v1663; // x7
  UserEventDeckMaster_o *v1664; // x20
  int32_t v1665; // w2
  int32_t v1666; // w3
  System_String_o *v1667; // x4
  int32_t v1668; // w5
  int64_t v1669; // x6
  System_String_o *v1670; // x7
  EventTowerMaster_o *v1671; // x20
  int32_t v1672; // w2
  int32_t v1673; // w3
  System_String_o *v1674; // x4
  int32_t v1675; // w5
  int64_t v1676; // x6
  System_String_o *v1677; // x7
  EventTowerRewardMaster_o *v1678; // x20
  int32_t v1679; // w2
  int32_t v1680; // w3
  System_String_o *v1681; // x4
  int32_t v1682; // w5
  int64_t v1683; // x6
  System_String_o *v1684; // x7
  EventBulletinBoardMaster_o *v1685; // x20
  int32_t v1686; // w2
  int32_t v1687; // w3
  System_String_o *v1688; // x4
  int32_t v1689; // w5
  int64_t v1690; // x6
  System_String_o *v1691; // x7
  EventBulletinBoardReleaseMaster_o *v1692; // x20
  int32_t v1693; // w2
  int32_t v1694; // w3
  System_String_o *v1695; // x4
  int32_t v1696; // w5
  int64_t v1697; // x6
  System_String_o *v1698; // x7
  EventFactoryMaster_o *v1699; // x20
  int32_t v1700; // w2
  int32_t v1701; // w3
  System_String_o *v1702; // x4
  int32_t v1703; // w5
  int64_t v1704; // x6
  System_String_o *v1705; // x7
  ShopGroupMaster_o *v1706; // x20
  int32_t v1707; // w2
  int32_t v1708; // w3
  System_String_o *v1709; // x4
  int32_t v1710; // w5
  int64_t v1711; // x6
  System_String_o *v1712; // x7
  AuraEffectMaster_o *v1713; // x20
  int32_t v1714; // w2
  int32_t v1715; // w3
  System_String_o *v1716; // x4
  int32_t v1717; // w5
  int64_t v1718; // x6
  System_String_o *v1719; // x7
  AuraEffectPosOverwriteMaster_o *v1720; // x20
  int32_t v1721; // w2
  int32_t v1722; // w3
  System_String_o *v1723; // x4
  int32_t v1724; // w5
  int64_t v1725; // x6
  System_String_o *v1726; // x7
  UserEventMissionFixMaster_o *v1727; // x20
  int32_t v1728; // w2
  int32_t v1729; // w3
  System_String_o *v1730; // x4
  int32_t v1731; // w5
  int64_t v1732; // x6
  System_String_o *v1733; // x7
  NotEndEventMissionFixMaster_o *v1734; // x20
  int32_t v1735; // w2
  int32_t v1736; // w3
  System_String_o *v1737; // x4
  int32_t v1738; // w5
  int64_t v1739; // x6
  System_String_o *v1740; // x7
  EnemyMstMaster_o *v1741; // x20
  int32_t v1742; // w2
  int32_t v1743; // w3
  System_String_o *v1744; // x4
  int32_t v1745; // w5
  int64_t v1746; // x6
  System_String_o *v1747; // x7
  EnemyMstBattleMaster_o *v1748; // x20
  int32_t v1749; // w2
  int32_t v1750; // w3
  System_String_o *v1751; // x4
  int32_t v1752; // w5
  int64_t v1753; // x6
  System_String_o *v1754; // x7
  ServantSkillReleaseMaster_o *v1755; // x20
  int32_t v1756; // w2
  int32_t v1757; // w3
  System_String_o *v1758; // x4
  int32_t v1759; // w5
  int64_t v1760; // x6
  System_String_o *v1761; // x7
  ServantPassiveSkillReleaseMaster_o *v1762; // x20
  int32_t v1763; // w2
  int32_t v1764; // w3
  System_String_o *v1765; // x4
  int32_t v1766; // w5
  int64_t v1767; // x6
  System_String_o *v1768; // x7
  ServantTreasureDeviceReleaseMaster_o *v1769; // x20
  int32_t v1770; // w2
  int32_t v1771; // w3
  System_String_o *v1772; // x4
  int32_t v1773; // w5
  int64_t v1774; // x6
  System_String_o *v1775; // x7
  MapGimmickReleaseMaster_o *v1776; // x20
  int32_t v1777; // w2
  int32_t v1778; // w3
  System_String_o *v1779; // x4
  int32_t v1780; // w5
  int64_t v1781; // x6
  System_String_o *v1782; // x7
  CommandCodeMaster_o *v1783; // x20
  int32_t v1784; // w2
  int32_t v1785; // w3
  System_String_o *v1786; // x4
  int32_t v1787; // w5
  int64_t v1788; // x6
  System_String_o *v1789; // x7
  ServantCommandCodeUnlockMaster_o *v1790; // x20
  int32_t v1791; // w2
  int32_t v1792; // w3
  System_String_o *v1793; // x4
  int32_t v1794; // w5
  int64_t v1795; // x6
  System_String_o *v1796; // x7
  UserCommandCodeMaster_o *v1797; // x20
  int32_t v1798; // w2
  int32_t v1799; // w3
  System_String_o *v1800; // x4
  int32_t v1801; // w5
  int64_t v1802; // x6
  System_String_o *v1803; // x7
  UserCommandCodeCollectionMaster_o *v1804; // x20
  int32_t v1805; // w2
  int32_t v1806; // w3
  System_String_o *v1807; // x4
  int32_t v1808; // w5
  int64_t v1809; // x6
  System_String_o *v1810; // x7
  UserServantCommandCodeMaster_o *v1811; // x20
  int32_t v1812; // w2
  int32_t v1813; // w3
  System_String_o *v1814; // x4
  int32_t v1815; // w5
  int64_t v1816; // x6
  System_String_o *v1817; // x7
  UserServantCommandCardMaster_o *v1818; // x20
  int32_t v1819; // w2
  int32_t v1820; // w3
  System_String_o *v1821; // x4
  int32_t v1822; // w5
  int64_t v1823; // x6
  System_String_o *v1824; // x7
  CommandCardRankParamMaster_o *v1825; // x20
  int32_t v1826; // w2
  int32_t v1827; // w3
  System_String_o *v1828; // x4
  int32_t v1829; // w5
  int64_t v1830; // x6
  System_String_o *v1831; // x7
  CommandCodeSkillMaster_o *v1832; // x20
  int32_t v1833; // w2
  int32_t v1834; // w3
  System_String_o *v1835; // x4
  int32_t v1836; // w5
  int64_t v1837; // x6
  System_String_o *v1838; // x7
  CommandCodeSkillReleaseMaster_o *v1839; // x20
  int32_t v1840; // w2
  int32_t v1841; // w3
  System_String_o *v1842; // x4
  int32_t v1843; // w5
  int64_t v1844; // x6
  System_String_o *v1845; // x7
  CommandCodeCommentMaster_o *v1846; // x20
  int32_t v1847; // w2
  int32_t v1848; // w3
  System_String_o *v1849; // x4
  int32_t v1850; // w5
  int64_t v1851; // x6
  System_String_o *v1852; // x7
  EventStatusMaster_o *v1853; // x20
  int32_t v1854; // w2
  int32_t v1855; // w3
  System_String_o *v1856; // x4
  int32_t v1857; // w5
  int64_t v1858; // x6
  System_String_o *v1859; // x7
  EventStatusQuestMaster_o *v1860; // x20
  int32_t v1861; // w2
  int32_t v1862; // w3
  System_String_o *v1863; // x4
  int32_t v1864; // w5
  int64_t v1865; // x6
  System_String_o *v1866; // x7
  CommonRestrictionMaster_o *v1867; // x20
  int32_t v1868; // w2
  int32_t v1869; // w3
  System_String_o *v1870; // x4
  int32_t v1871; // w5
  int64_t v1872; // x6
  System_String_o *v1873; // x7
  EventPointBuffMaster_o *v1874; // x20
  int32_t v1875; // w2
  int32_t v1876; // w3
  System_String_o *v1877; // x4
  int32_t v1878; // w5
  int64_t v1879; // x6
  System_String_o *v1880; // x7
  UserFollowMaster_o *v1881; // x20
  int32_t v1882; // w2
  int32_t v1883; // w3
  System_String_o *v1884; // x4
  int32_t v1885; // w5
  int64_t v1886; // x6
  System_String_o *v1887; // x7
  EventRewardGuideReleaseMaster_o *v1888; // x20
  int32_t v1889; // w2
  int32_t v1890; // w3
  System_String_o *v1891; // x4
  int32_t v1892; // w5
  int64_t v1893; // x6
  System_String_o *v1894; // x7
  NpcServantEquipMaster_o *v1895; // x20
  int32_t v1896; // w2
  int32_t v1897; // w3
  System_String_o *v1898; // x4
  int32_t v1899; // w5
  int64_t v1900; // x6
  System_String_o *v1901; // x7
  EventCampaignReleaseMaster_o *v1902; // x20
  int32_t v1903; // w2
  int32_t v1904; // w3
  System_String_o *v1905; // x4
  int32_t v1906; // w5
  int64_t v1907; // x6
  System_String_o *v1908; // x7
  ServantMaterialFolderMaster_o *v1909; // x20
  int32_t v1910; // w2
  int32_t v1911; // w3
  System_String_o *v1912; // x4
  int32_t v1913; // w5
  int64_t v1914; // x6
  System_String_o *v1915; // x7
  EventEquipSkillReleaseMaster_o *v1916; // x20
  int32_t v1917; // w2
  int32_t v1918; // w3
  System_String_o *v1919; // x4
  int32_t v1920; // w5
  int64_t v1921; // x6
  System_String_o *v1922; // x7
  EventPointActivityMaster_o *v1923; // x20
  int32_t v1924; // w2
  int32_t v1925; // w3
  System_String_o *v1926; // x4
  int32_t v1927; // w5
  int64_t v1928; // x6
  System_String_o *v1929; // x7
  FunctionCategoryMaster_o *v1930; // x20
  int32_t v1931; // w2
  int32_t v1932; // w3
  System_String_o *v1933; // x4
  int32_t v1934; // w5
  int64_t v1935; // x6
  System_String_o *v1936; // x7
  QuestPickupMaster_o *v1937; // x20
  int32_t v1938; // w2
  int32_t v1939; // w3
  System_String_o *v1940; // x4
  int32_t v1941; // w5
  int64_t v1942; // x6
  System_String_o *v1943; // x7
  EventUiMaster_o *v1944; // x20
  int32_t v1945; // w2
  int32_t v1946; // w3
  System_String_o *v1947; // x4
  int32_t v1948; // w5
  int64_t v1949; // x6
  System_String_o *v1950; // x7
  EventUiReleaseMaster_o *v1951; // x20
  int32_t v1952; // w2
  int32_t v1953; // w3
  System_String_o *v1954; // x4
  int32_t v1955; // w5
  int64_t v1956; // x6
  System_String_o *v1957; // x7
  EventUiValueMaster_o *v1958; // x20
  int32_t v1959; // w2
  int32_t v1960; // w3
  System_String_o *v1961; // x4
  int32_t v1962; // w5
  int64_t v1963; // x6
  System_String_o *v1964; // x7
  EventConquestRewardMaster_o *v1965; // x20
  int32_t v1966; // w2
  int32_t v1967; // w3
  System_String_o *v1968; // x4
  int32_t v1969; // w5
  int64_t v1970; // x6
  System_String_o *v1971; // x7
  NpcFollowerReleaseMaster_o *v1972; // x20
  int32_t v1973; // w2
  int32_t v1974; // w3
  System_String_o *v1975; // x4
  int32_t v1976; // w5
  int64_t v1977; // x6
  System_String_o *v1978; // x7
  EventBonusFilterMaster_o *v1979; // x20
  int32_t v1980; // w2
  int32_t v1981; // w3
  System_String_o *v1982; // x4
  int32_t v1983; // w5
  int64_t v1984; // x6
  System_String_o *v1985; // x7
  EventBonusFilterGroupInfoMaster_o *v1986; // x20
  int32_t v1987; // w2
  int32_t v1988; // w3
  System_String_o *v1989; // x4
  int32_t v1990; // w5
  int64_t v1991; // x6
  System_String_o *v1992; // x7
  EventBonusFilterGroupMemberMaster_o *v1993; // x20
  int32_t v1994; // w2
  int32_t v1995; // w3
  System_String_o *v1996; // x4
  int32_t v1997; // w5
  int64_t v1998; // x6
  System_String_o *v1999; // x7
  UserGachaExtraCountMaster_o *v2000; // x20
  int32_t v2001; // w2
  int32_t v2002; // w3
  System_String_o *v2003; // x4
  int32_t v2004; // w5
  int64_t v2005; // x6
  System_String_o *v2006; // x7
  PrivilegeMaster_o *v2007; // x20
  int32_t v2008; // w2
  int32_t v2009; // w3
  System_String_o *v2010; // x4
  int32_t v2011; // w5
  int64_t v2012; // x6
  System_String_o *v2013; // x7
  UserPrivilegeMaster_o *v2014; // x20
  int32_t v2015; // w2
  int32_t v2016; // w3
  System_String_o *v2017; // x4
  int32_t v2018; // w5
  int64_t v2019; // x6
  System_String_o *v2020; // x7
  UserQuestRouteMaster_o *v2021; // x20
  int32_t v2022; // w2
  int32_t v2023; // w3
  System_String_o *v2024; // x4
  int32_t v2025; // w5
  int64_t v2026; // x6
  System_String_o *v2027; // x7
  EventBossStatusUiMaster_o *v2028; // x20
  int32_t v2029; // w2
  int32_t v2030; // w3
  System_String_o *v2031; // x4
  int32_t v2032; // w5
  int64_t v2033; // x6
  System_String_o *v2034; // x7
  CommonReleaseMaster_o *v2035; // x20
  int32_t v2036; // w2
  int32_t v2037; // w3
  System_String_o *v2038; // x4
  int32_t v2039; // w5
  int64_t v2040; // x6
  System_String_o *v2041; // x7
  QuestSpotReleaseMaster_o *v2042; // x20
  int32_t v2043; // w2
  int32_t v2044; // w3
  System_String_o *v2045; // x4
  int32_t v2046; // w5
  int64_t v2047; // x6
  System_String_o *v2048; // x7
  VoiceMaterialCondMaster_o *v2049; // x20
  int32_t v2050; // w2
  int32_t v2051; // w3
  System_String_o *v2052; // x4
  int32_t v2053; // w5
  int64_t v2054; // x6
  System_String_o *v2055; // x7
  ClassRelationOverwriteMaster_o *v2056; // x20
  int32_t v2057; // w2
  int32_t v2058; // w3
  System_String_o *v2059; // x4
  int32_t v2060; // w5
  int64_t v2061; // x6
  System_String_o *v2062; // x7
  EventGroupMaster_o *v2063; // x20
  int32_t v2064; // w2
  int32_t v2065; // w3
  System_String_o *v2066; // x4
  int32_t v2067; // w5
  int64_t v2068; // x6
  System_String_o *v2069; // x7
  TotalBoxGachaMaster_o *v2070; // x20
  int32_t v2071; // w2
  int32_t v2072; // w3
  System_String_o *v2073; // x4
  int32_t v2074; // w5
  int64_t v2075; // x6
  System_String_o *v2076; // x7
  ServantTreasureDeviceDamageMaster_o *v2077; // x20
  int32_t v2078; // w2
  int32_t v2079; // w3
  System_String_o *v2080; // x4
  int32_t v2081; // w5
  int64_t v2082; // x6
  System_String_o *v2083; // x7
  UserEventServantFatigueMaster_o *v2084; // x20
  int32_t v2085; // w2
  int32_t v2086; // w3
  System_String_o *v2087; // x4
  int32_t v2088; // w5
  int64_t v2089; // x6
  System_String_o *v2090; // x7
  EventRewardBgMaster_o *v2091; // x20
  int32_t v2092; // w2
  int32_t v2093; // w3
  System_String_o *v2094; // x4
  int32_t v2095; // w5
  int64_t v2096; // x6
  System_String_o *v2097; // x7
  EventFatigueRecoveryMaster_o *v2098; // x20
  int32_t v2099; // w2
  int32_t v2100; // w3
  System_String_o *v2101; // x4
  int32_t v2102; // w5
  int64_t v2103; // x6
  System_String_o *v2104; // x7
  EventBoostItemUsedMaster_o *v2105; // x20
  int32_t v2106; // w2
  int32_t v2107; // w3
  System_String_o *v2108; // x4
  int32_t v2109; // w5
  int64_t v2110; // x6
  System_String_o *v2111; // x7
  StatusEffectPosOverwriteMaster_o *v2112; // x20
  int32_t v2113; // w2
  int32_t v2114; // w3
  System_String_o *v2115; // x4
  int32_t v2116; // w5
  int64_t v2117; // x6
  System_String_o *v2118; // x7
  QuestPhaseDetailAddMaster_o *v2119; // x20
  int32_t v2120; // w2
  int32_t v2121; // w3
  System_String_o *v2122; // x4
  int32_t v2123; // w5
  int64_t v2124; // x6
  System_String_o *v2125; // x7
  VoiceClosedMessageMaster_o *v2126; // x20
  int32_t v2127; // w2
  int32_t v2128; // w3
  System_String_o *v2129; // x4
  int32_t v2130; // w5
  int64_t v2131; // x6
  System_String_o *v2132; // x7
  ReprintStageMaster_o *v2133; // x20
  int32_t v2134; // w2
  int32_t v2135; // w3
  System_String_o *v2136; // x4
  int32_t v2137; // w5
  int64_t v2138; // x6
  System_String_o *v2139; // x7
  UserCombineExpMaster_o *v2140; // x20
  int32_t v2141; // w2
  int32_t v2142; // w3
  System_String_o *v2143; // x4
  int32_t v2144; // w5
  int64_t v2145; // x6
  System_String_o *v2146; // x7
  EventBoardGameCellMaster_o *v2147; // x20
  int32_t v2148; // w2
  int32_t v2149; // w3
  System_String_o *v2150; // x4
  int32_t v2151; // w5
  int64_t v2152; // x6
  System_String_o *v2153; // x7
  EventBoardGameTokenMaster_o *v2154; // x20
  int32_t v2155; // w2
  int32_t v2156; // w3
  System_String_o *v2157; // x4
  int32_t v2158; // w5
  int64_t v2159; // x6
  System_String_o *v2160; // x7
  EventBoardGameTokenRewardMaster_o *v2161; // x20
  int32_t v2162; // w2
  int32_t v2163; // w3
  System_String_o *v2164; // x4
  int32_t v2165; // w5
  int64_t v2166; // x6
  System_String_o *v2167; // x7
  UserEventBoardGameTokenMaster_o *v2168; // x20
  int32_t v2169; // w2
  int32_t v2170; // w3
  System_String_o *v2171; // x4
  int32_t v2172; // w5
  int64_t v2173; // x6
  System_String_o *v2174; // x7
  ServantAnimationOverwriteMaster_o *v2175; // x20
  int32_t v2176; // w2
  int32_t v2177; // w3
  System_String_o *v2178; // x4
  int32_t v2179; // w5
  int64_t v2180; // x6
  System_String_o *v2181; // x7
  OpeningMovieMaster_o *v2182; // x20
  int32_t v2183; // w2
  int32_t v2184; // w3
  System_String_o *v2185; // x4
  int32_t v2186; // w5
  int64_t v2187; // x6
  System_String_o *v2188; // x7
  ServantLimitSpoilerProtectionMaster_o *v2189; // x20
  int32_t v2190; // w2
  int32_t v2191; // w3
  System_String_o *v2192; // x4
  int32_t v2193; // w5
  int64_t v2194; // x6
  System_String_o *v2195; // x7
  PickupUserFollowerMaster_o *v2196; // x20
  int32_t v2197; // w2
  int32_t v2198; // w3
  System_String_o *v2199; // x4
  int32_t v2200; // w5
  int64_t v2201; // x6
  System_String_o *v2202; // x7
  ServantCollectionMaster_o *v2203; // x20
  int32_t v2204; // w2
  int32_t v2205; // w3
  System_String_o *v2206; // x4
  int32_t v2207; // w5
  int64_t v2208; // x6
  System_String_o *v2209; // x7
  GachaBehaviorMaster_o *v2210; // x20
  int32_t v2211; // w2
  int32_t v2212; // w3
  System_String_o *v2213; // x4
  int32_t v2214; // w5
  int64_t v2215; // x6
  System_String_o *v2216; // x7
  EventQuestCooltimeMaster_o *v2217; // x20
  int32_t v2218; // w2
  int32_t v2219; // w3
  System_String_o *v2220; // x4
  int32_t v2221; // w5
  int64_t v2222; // x6
  System_String_o *v2223; // x7
  UserEventQuestCooltimeMaster_o *v2224; // x20
  int32_t v2225; // w2
  int32_t v2226; // w3
  System_String_o *v2227; // x4
  int32_t v2228; // w5
  int64_t v2229; // x6
  System_String_o *v2230; // x7
  BoostMaster_o *v2231; // x20
  int32_t v2232; // w2
  int32_t v2233; // w3
  System_String_o *v2234; // x4
  int32_t v2235; // w5
  int64_t v2236; // x6
  System_String_o *v2237; // x7
  WarBoardMaster_o *v2238; // x20
  int32_t v2239; // w2
  int32_t v2240; // w3
  System_String_o *v2241; // x4
  int32_t v2242; // w5
  int64_t v2243; // x6
  System_String_o *v2244; // x7
  WarBoardSquareMaster_o *v2245; // x20
  int32_t v2246; // w2
  int32_t v2247; // w3
  System_String_o *v2248; // x4
  int32_t v2249; // w5
  int64_t v2250; // x6
  System_String_o *v2251; // x7
  WarBoardRoadMaster_o *v2252; // x20
  int32_t v2253; // w2
  int32_t v2254; // w3
  System_String_o *v2255; // x4
  int32_t v2256; // w5
  int64_t v2257; // x6
  System_String_o *v2258; // x7
  WarBoardStageMaster_o *v2259; // x20
  int32_t v2260; // w2
  int32_t v2261; // w3
  System_String_o *v2262; // x4
  int32_t v2263; // w5
  int64_t v2264; // x6
  System_String_o *v2265; // x7
  WarBoardActionPointMaster_o *v2266; // x20
  int32_t v2267; // w2
  int32_t v2268; // w3
  System_String_o *v2269; // x4
  int32_t v2270; // w5
  int64_t v2271; // x6
  System_String_o *v2272; // x7
  WarBoardActionTrendMaster_o *v2273; // x20
  int32_t v2274; // w2
  int32_t v2275; // w3
  System_String_o *v2276; // x4
  int32_t v2277; // w5
  int64_t v2278; // x6
  System_String_o *v2279; // x7
  WarBoardTacticalTrendMaster_o *v2280; // x20
  int32_t v2281; // w2
  int32_t v2282; // w3
  System_String_o *v2283; // x4
  int32_t v2284; // w5
  int64_t v2285; // x6
  System_String_o *v2286; // x7
  WarBoardStageLayoutMaster_o *v2287; // x20
  int32_t v2288; // w2
  int32_t v2289; // w3
  System_String_o *v2290; // x4
  int32_t v2291; // w5
  int64_t v2292; // x6
  System_String_o *v2293; // x7
  WarBoardStageNpcMaster_o *v2294; // x20
  int32_t v2295; // w2
  int32_t v2296; // w3
  System_String_o *v2297; // x4
  int32_t v2298; // w5
  int64_t v2299; // x6
  System_String_o *v2300; // x7
  WarBoardStageWallMaster_o *v2301; // x20
  int32_t v2302; // w2
  int32_t v2303; // w3
  System_String_o *v2304; // x4
  int32_t v2305; // w5
  int64_t v2306; // x6
  System_String_o *v2307; // x7
  WarBoardAIMaster_o *v2308; // x20
  int32_t v2309; // w2
  int32_t v2310; // w3
  System_String_o *v2311; // x4
  int32_t v2312; // w5
  int64_t v2313; // x6
  System_String_o *v2314; // x7
  WarBoardRatingBaseMaster_o *v2315; // x20
  int32_t v2316; // w2
  int32_t v2317; // w3
  System_String_o *v2318; // x4
  int32_t v2319; // w5
  int64_t v2320; // x6
  System_String_o *v2321; // x7
  WarBoardRatingOffsetMaster_o *v2322; // x20
  int32_t v2323; // w2
  int32_t v2324; // w3
  System_String_o *v2325; // x4
  int32_t v2326; // w5
  int64_t v2327; // x6
  System_String_o *v2328; // x7
  WarBoardItemMaster_o *v2329; // x20
  int32_t v2330; // w2
  int32_t v2331; // w3
  System_String_o *v2332; // x4
  int32_t v2333; // w5
  int64_t v2334; // x6
  System_String_o *v2335; // x7
  WarBoardTreasureMaster_o *v2336; // x20
  int32_t v2337; // w2
  int32_t v2338; // w3
  System_String_o *v2339; // x4
  int32_t v2340; // w5
  int64_t v2341; // x6
  System_String_o *v2342; // x7
  WarBoardQuestMaster_o *v2343; // x20
  int32_t v2344; // w2
  int32_t v2345; // w3
  System_String_o *v2346; // x4
  int32_t v2347; // w5
  int64_t v2348; // x6
  System_String_o *v2349; // x7
  WarBoardDataMaster_o *v2350; // x20
  int32_t v2351; // w2
  int32_t v2352; // w3
  System_String_o *v2353; // x4
  int32_t v2354; // w5
  int64_t v2355; // x6
  System_String_o *v2356; // x7
  WarBoardIndividualityClassMaster_o *v2357; // x20
  int32_t v2358; // w2
  int32_t v2359; // w3
  System_String_o *v2360; // x4
  int32_t v2361; // w5
  int64_t v2362; // x6
  System_String_o *v2363; // x7
  WarBoardActionTrendConditionMaster_o *v2364; // x20
  int32_t v2365; // w2
  int32_t v2366; // w3
  System_String_o *v2367; // x4
  int32_t v2368; // w5
  int64_t v2369; // x6
  System_String_o *v2370; // x7
  WarBoardActionPointClassMaster_o *v2371; // x20
  int32_t v2372; // w2
  int32_t v2373; // w3
  System_String_o *v2374; // x4
  int32_t v2375; // w5
  int64_t v2376; // x6
  System_String_o *v2377; // x7
  EventPanelMapMaster_o *v2378; // x20
  int32_t v2379; // w2
  int32_t v2380; // w3
  System_String_o *v2381; // x4
  int32_t v2382; // w5
  int64_t v2383; // x6
  System_String_o *v2384; // x7
  EventPanelMapDetailMaster_o *v2385; // x20
  int32_t v2386; // w2
  int32_t v2387; // w3
  System_String_o *v2388; // x4
  int32_t v2389; // w5
  int64_t v2390; // x6
  System_String_o *v2391; // x7
  EventPanelSpotMaster_o *v2392; // x20
  int32_t v2393; // w2
  int32_t v2394; // w3
  System_String_o *v2395; // x4
  int32_t v2396; // w5
  int64_t v2397; // x6
  System_String_o *v2398; // x7
  EventPanelScanMaster_o *v2399; // x20
  int32_t v2400; // w2
  int32_t v2401; // w3
  System_String_o *v2402; // x4
  int32_t v2403; // w5
  int64_t v2404; // x6
  System_String_o *v2405; // x7
  CommonConsumeMaster_o *v2406; // x20
  int32_t v2407; // w2
  int32_t v2408; // w3
  System_String_o *v2409; // x4
  int32_t v2410; // w5
  int64_t v2411; // x6
  System_String_o *v2412; // x7
  UserEventMapMaster_o *v2413; // x20
  int32_t v2414; // w2
  int32_t v2415; // w3
  System_String_o *v2416; // x4
  int32_t v2417; // w5
  int64_t v2418; // x6
  System_String_o *v2419; // x7
  UserEventSpotMaster_o *v2420; // x20
  int32_t v2421; // w2
  int32_t v2422; // w3
  System_String_o *v2423; // x4
  int32_t v2424; // w5
  int64_t v2425; // x6
  System_String_o *v2426; // x7
  WarGroupMaster_o *v2427; // x20
  int32_t v2428; // w2
  int32_t v2429; // w3
  System_String_o *v2430; // x4
  int32_t v2431; // w5
  int64_t v2432; // x6
  System_String_o *v2433; // x7
  ServantLimitImageMaster_o *v2434; // x20
  int32_t v2435; // w2
  int32_t v2436; // w3
  System_String_o *v2437; // x4
  int32_t v2438; // w5
  int64_t v2439; // x6
  System_String_o *v2440; // x7
  FriendshipQuestDialogInfoMaster_o *v2441; // x20
  int32_t v2442; // w2
  int32_t v2443; // w3
  System_String_o *v2444; // x4
  int32_t v2445; // w5
  int64_t v2446; // x6
  System_String_o *v2447; // x7
  QuestRestrictionInfoMaster_o *v2448; // x20
  int32_t v2449; // w2
  int32_t v2450; // w3
  System_String_o *v2451; // x4
  int32_t v2452; // w5
  int64_t v2453; // x6
  System_String_o *v2454; // x7
  AssistMaster_o *v2455; // x20
  int32_t v2456; // w2
  int32_t v2457; // w3
  System_String_o *v2458; // x4
  int32_t v2459; // w5
  int64_t v2460; // x6
  System_String_o *v2461; // x7
  WarBoardEffectMaster_o *v2462; // x20
  int32_t v2463; // w2
  int32_t v2464; // w3
  System_String_o *v2465; // x4
  int32_t v2466; // w5
  int64_t v2467; // x6
  System_String_o *v2468; // x7
  WarBoardOnboardSkillMaster_o *v2469; // x20
  int32_t v2470; // w2
  int32_t v2471; // w3
  System_String_o *v2472; // x4
  int32_t v2473; // w5
  int64_t v2474; // x6
  System_String_o *v2475; // x7
  BeforeBirthDayMaster_o *v2476; // x20
  int32_t v2477; // w2
  int32_t v2478; // w3
  System_String_o *v2479; // x4
  int32_t v2480; // w5
  int64_t v2481; // x6
  System_String_o *v2482; // x7
  LoginQuestMaster_o *v2483; // x20
  int32_t v2484; // w2
  int32_t v2485; // w3
  System_String_o *v2486; // x4
  int32_t v2487; // w5
  int64_t v2488; // x6
  System_String_o *v2489; // x7
  EventCombineCostumeMaster_o *v2490; // x20
  int32_t v2491; // w2
  int32_t v2492; // w3
  System_String_o *v2493; // x4
  int32_t v2494; // w5
  int64_t v2495; // x6
  System_String_o *v2496; // x7
  WarBoardStagePieceDetailMaster_o *v2497; // x20
  int32_t v2498; // w2
  int32_t v2499; // w3
  System_String_o *v2500; // x4
  int32_t v2501; // w5
  int64_t v2502; // x6
  System_String_o *v2503; // x7
  ServantTreasureDeviceAddMaster_o *v2504; // x20
  int32_t v2505; // w2
  int32_t v2506; // w3
  System_String_o *v2507; // x4
  int32_t v2508; // w5
  int64_t v2509; // x6
  System_String_o *v2510; // x7
  SkillAddMaster_o *v2511; // x20
  int32_t v2512; // w2
  int32_t v2513; // w3
  System_String_o *v2514; // x4
  int32_t v2515; // w5
  int64_t v2516; // x6
  System_String_o *v2517; // x7
  ServantLvDetailMaster_o *v2518; // x20
  int32_t v2519; // w2
  int32_t v2520; // w3
  System_String_o *v2521; // x4
  int32_t v2522; // w5
  int64_t v2523; // x6
  System_String_o *v2524; // x7
  GachaAppendMaster_o *v2525; // x20
  int32_t v2526; // w2
  int32_t v2527; // w3
  System_String_o *v2528; // x4
  int32_t v2529; // w5
  int64_t v2530; // x6
  System_String_o *v2531; // x7
  UserGachaDrawLogMaster_o *v2532; // x20
  int32_t v2533; // w2
  int32_t v2534; // w3
  System_String_o *v2535; // x4
  int32_t v2536; // w5
  int64_t v2537; // x6
  System_String_o *v2538; // x7
  ServantAppendPassiveSkillMaster_o *v2539; // x20
  int32_t v2540; // w2
  int32_t v2541; // w3
  System_String_o *v2542; // x4
  int32_t v2543; // w5
  int64_t v2544; // x6
  System_String_o *v2545; // x7
  UserServantAppendPassiveSkillMaster_o *v2546; // x20
  int32_t v2547; // w2
  int32_t v2548; // w3
  System_String_o *v2549; // x4
  int32_t v2550; // w5
  int64_t v2551; // x6
  System_String_o *v2552; // x7
  UserServantAppendPassiveSkillLvMaster_o *v2553; // x20
  int32_t v2554; // w2
  int32_t v2555; // w3
  System_String_o *v2556; // x4
  int32_t v2557; // w5
  int64_t v2558; // x6
  System_String_o *v2559; // x7
  SvtAppendPassiveSkillUnlockMaster_o *v2560; // x20
  int32_t v2561; // w2
  int32_t v2562; // w3
  System_String_o *v2563; // x4
  int32_t v2564; // w5
  int64_t v2565; // x6
  System_String_o *v2566; // x7
  CombineAppendPassiveSkillMaster_o *v2567; // x20
  int32_t v2568; // w2
  int32_t v2569; // w3
  System_String_o *v2570; // x4
  int32_t v2571; // w5
  int64_t v2572; // x6
  System_String_o *v2573; // x7
  SvtCoinMaster_o *v2574; // x20
  int32_t v2575; // w2
  int32_t v2576; // w3
  System_String_o *v2577; // x4
  int32_t v2578; // w5
  int64_t v2579; // x6
  System_String_o *v2580; // x7
  UserSvtCoinMaster_o *v2581; // x20
  int32_t v2582; // w2
  int32_t v2583; // w3
  System_String_o *v2584; // x4
  int32_t v2585; // w5
  int64_t v2586; // x6
  System_String_o *v2587; // x7
  ServantAddMaster_o *v2588; // x20
  int32_t v2589; // w2
  int32_t v2590; // w3
  System_String_o *v2591; // x4
  int32_t v2592; // w5
  int64_t v2593; // x6
  System_String_o *v2594; // x7
  TreasureBoxMaster_o *v2595; // x20
  int32_t v2596; // w2
  int32_t v2597; // w3
  System_String_o *v2598; // x4
  int32_t v2599; // w5
  int64_t v2600; // x6
  System_String_o *v2601; // x7
  TreasureBoxGiftMaster_o *v2602; // x20
  int32_t v2603; // w2
  int32_t v2604; // w3
  System_String_o *v2605; // x4
  int32_t v2606; // w5
  int64_t v2607; // x6
  System_String_o *v2608; // x7
  TreasureBoxTalkMaster_o *v2609; // x20
  int32_t v2610; // w2
  int32_t v2611; // w3
  System_String_o *v2612; // x4
  int32_t v2613; // w5
  int64_t v2614; // x6
  System_String_o *v2615; // x7
  UserEventExpeditionMaster_o *v2616; // x20
  int32_t v2617; // w2
  int32_t v2618; // w3
  System_String_o *v2619; // x4
  int32_t v2620; // w5
  int64_t v2621; // x6
  System_String_o *v2622; // x7
  EventExpeditionMaster_o *v2623; // x20
  int32_t v2624; // w2
  int32_t v2625; // w3
  System_String_o *v2626; // x4
  int32_t v2627; // w5
  int64_t v2628; // x6
  System_String_o *v2629; // x7
  EventExpeditionPieceMaster_o *v2630; // x20
  int32_t v2631; // w2
  int32_t v2632; // w3
  System_String_o *v2633; // x4
  int32_t v2634; // w5
  int64_t v2635; // x6
  System_String_o *v2636; // x7
  EventRecipeMaster_o *v2637; // x20
  int32_t v2638; // w2
  int32_t v2639; // w3
  System_String_o *v2640; // x4
  int32_t v2641; // w5
  int64_t v2642; // x6
  System_String_o *v2643; // x7
  EventRecipeGiftMaster_o *v2644; // x20
  int32_t v2645; // w2
  int32_t v2646; // w3
  System_String_o *v2647; // x4
  int32_t v2648; // w5
  int64_t v2649; // x6
  System_String_o *v2650; // x7
  UserEventFortificationMaster_o *v2651; // x20
  int32_t v2652; // w2
  int32_t v2653; // w3
  System_String_o *v2654; // x4
  int32_t v2655; // w5
  int64_t v2656; // x6
  System_String_o *v2657; // x7
  EventFortificationMaster_o *v2658; // x20
  int32_t v2659; // w2
  int32_t v2660; // w3
  System_String_o *v2661; // x4
  int32_t v2662; // w5
  int64_t v2663; // x6
  System_String_o *v2664; // x7
  EventFortificationDetailMaster_o *v2665; // x20
  int32_t v2666; // w2
  int32_t v2667; // w3
  System_String_o *v2668; // x4
  int32_t v2669; // w5
  int64_t v2670; // x6
  System_String_o *v2671; // x7
  EventFortificationSvtMaster_o *v2672; // x20
  int32_t v2673; // w2
  int32_t v2674; // w3
  System_String_o *v2675; // x4
  int32_t v2676; // w5
  int64_t v2677; // x6
  System_String_o *v2678; // x7
  UserServantVoicePlayedMaster_o *v2679; // x20
  int32_t v2680; // w2
  int32_t v2681; // w3
  System_String_o *v2682; // x4
  int32_t v2683; // w5
  int64_t v2684; // x6
  System_String_o *v2685; // x7
  UpdateProfileDialogInfoMaster_o *v2686; // x20
  int32_t v2687; // w2
  int32_t v2688; // w3
  System_String_o *v2689; // x4
  int32_t v2690; // w5
  int64_t v2691; // x6
  System_String_o *v2692; // x7
  SvtMaterialTdMaster_o *v2693; // x20
  int32_t v2694; // w2
  int32_t v2695; // w3
  System_String_o *v2696; // x4
  int32_t v2697; // w5
  int64_t v2698; // x6
  System_String_o *v2699; // x7
  BattleMasterImageMaster_o *v2700; // x20
  int32_t v2701; // w2
  int32_t v2702; // w3
  System_String_o *v2703; // x4
  int32_t v2704; // w5
  int64_t v2705; // x6
  System_String_o *v2706; // x7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v2707; // x20
  int32_t v2708; // w2
  int32_t v2709; // w3
  System_String_o *v2710; // x4
  int32_t v2711; // w5
  int64_t v2712; // x6
  System_String_o *v2713; // x7
  UserEventRandomMissionMaster_o *v2714; // x20
  int32_t v2715; // w2
  int32_t v2716; // w3
  System_String_o *v2717; // x4
  int32_t v2718; // w5
  int64_t v2719; // x6
  System_String_o *v2720; // x7
  EventProgressValueMaster_o *v2721; // x20
  int32_t v2722; // w2
  int32_t v2723; // w3
  System_String_o *v2724; // x4
  int32_t v2725; // w5
  int64_t v2726; // x6
  System_String_o *v2727; // x7
  SvtMultiPortraitMaster_o *v2728; // x20
  int32_t v2729; // w2
  int32_t v2730; // w3
  System_String_o *v2731; // x4
  int32_t v2732; // w5
  int64_t v2733; // x6
  System_String_o *v2734; // x7
  EventRandomMissionMaster_o *v2735; // x20
  int32_t v2736; // w2
  int32_t v2737; // w3
  System_String_o *v2738; // x4
  int32_t v2739; // w5
  int64_t v2740; // x6
  System_String_o *v2741; // x7
  UserGachaHistoryMaster_o *v2742; // x20
  int32_t v2743; // w2
  int32_t v2744; // w3
  System_String_o *v2745; // x4
  int32_t v2746; // w5
  int64_t v2747; // x6
  System_String_o *v2748; // x7
  UserCoinRoomMaster_o *v2749; // x20
  int32_t v2750; // w2
  int32_t v2751; // w3
  System_String_o *v2752; // x4
  int32_t v2753; // w5
  int64_t v2754; // x6
  System_String_o *v2755; // x7
  EventBuddyPointMaster_o *v2756; // x20
  int32_t v2757; // w2
  int32_t v2758; // w3
  System_String_o *v2759; // x4
  int32_t v2760; // w5
  int64_t v2761; // x6
  System_String_o *v2762; // x7
  EventServantPointRankMaster_o *v2763; // x20
  int32_t v2764; // w2
  int32_t v2765; // w3
  System_String_o *v2766; // x4
  int32_t v2767; // w5
  int64_t v2768; // x6
  System_String_o *v2769; // x7
  UserEventServantPointMaster_o *v2770; // x20
  int32_t v2771; // w2
  int32_t v2772; // w3
  System_String_o *v2773; // x4
  int32_t v2774; // w5
  int64_t v2775; // x6
  System_String_o *v2776; // x7
  FieldMotionMaster_o *v2777; // x20
  int32_t v2778; // w2
  int32_t v2779; // w3
  System_String_o *v2780; // x4
  int32_t v2781; // w5
  int64_t v2782; // x6
  System_String_o *v2783; // x7
  UserDeleteReservationMaster_o *v2784; // x20
  int32_t v2785; // w2
  int32_t v2786; // w3
  System_String_o *v2787; // x4
  int32_t v2788; // w5
  int64_t v2789; // x6
  System_String_o *v2790; // x7
  ServantScriptMultipleMaster_o *v2791; // x20
  int32_t v2792; // w2
  int32_t v2793; // w3
  System_String_o *v2794; // x4
  int32_t v2795; // w5
  int64_t v2796; // x6
  System_String_o *v2797; // x7
  EquipAddMaster_o *v2798; // x20
  int32_t v2799; // w2
  int32_t v2800; // w3
  System_String_o *v2801; // x4
  int32_t v2802; // w5
  int64_t v2803; // x6
  System_String_o *v2804; // x7
  QuestReleaseOverwriteMaster_o *v2805; // x20
  int32_t v2806; // w2
  int32_t v2807; // w3
  System_String_o *v2808; // x4
  int32_t v2809; // w5
  int64_t v2810; // x6
  System_String_o *v2811; // x7
  UserEventAlloutBattleMaster_o *v2812; // x20
  int32_t v2813; // w2
  int32_t v2814; // w3
  System_String_o *v2815; // x4
  int32_t v2816; // w5
  int64_t v2817; // x6
  System_String_o *v2818; // x7
  QuestScriptMaterialNextMaster_o *v2819; // x20
  int32_t v2820; // w2
  int32_t v2821; // w3
  System_String_o *v2822; // x4
  int32_t v2823; // w5
  int64_t v2824; // x6
  System_String_o *v2825; // x7
  EventDiggingMaster_o *v2826; // x20
  int32_t v2827; // w2
  int32_t v2828; // w3
  System_String_o *v2829; // x4
  int32_t v2830; // w5
  int64_t v2831; // x6
  System_String_o *v2832; // x7
  EventDiggingBlockMaster_o *v2833; // x20
  int32_t v2834; // w2
  int32_t v2835; // w3
  System_String_o *v2836; // x4
  int32_t v2837; // w5
  int64_t v2838; // x6
  System_String_o *v2839; // x7
  EventDiggingRewardMaster_o *v2840; // x20
  int32_t v2841; // w2
  int32_t v2842; // w3
  System_String_o *v2843; // x4
  int32_t v2844; // w5
  int64_t v2845; // x6
  System_String_o *v2846; // x7
  UserEventDiggingMaster_o *v2847; // x20
  int32_t v2848; // w2
  int32_t v2849; // w3
  System_String_o *v2850; // x4
  int32_t v2851; // w5
  int64_t v2852; // x6
  System_String_o *v2853; // x7
  BattleMessageMaster_o *v2854; // x20
  int32_t v2855; // w2
  int32_t v2856; // w3
  System_String_o *v2857; // x4
  int32_t v2858; // w5
  int64_t v2859; // x6
  System_String_o *v2860; // x7
  BattleMessageGroupMaster_o *v2861; // x20
  int32_t v2862; // w2
  int32_t v2863; // w3
  System_String_o *v2864; // x4
  int32_t v2865; // w5
  int64_t v2866; // x6
  System_String_o *v2867; // x7
  UserNpcSvtRecordMaster_o *v2868; // x20
  int32_t v2869; // w2
  int32_t v2870; // w3
  System_String_o *v2871; // x4
  int32_t v2872; // w5
  int64_t v2873; // x6
  System_String_o *v2874; // x7
  BuffTypeDetailMaster_o *v2875; // x20
  int32_t v2876; // w2
  int32_t v2877; // w3
  System_String_o *v2878; // x4
  int32_t v2879; // w5
  int64_t v2880; // x6
  System_String_o *v2881; // x7
  WarBoardMessageMaster_o *v2882; // x20
  int32_t v2883; // w2
  int32_t v2884; // w3
  System_String_o *v2885; // x4
  int32_t v2886; // w5
  int64_t v2887; // x6
  System_String_o *v2888; // x7
  WarBoardPartySkillMaster_o *v2889; // x20
  int32_t v2890; // w2
  int32_t v2891; // w3
  System_String_o *v2892; // x4
  int32_t v2893; // w5
  int64_t v2894; // x6
  System_String_o *v2895; // x7
  WarBoardMessageScriptMaster_o *v2896; // x20
  int32_t v2897; // w2
  int32_t v2898; // w3
  System_String_o *v2899; // x4
  int32_t v2900; // w5
  int64_t v2901; // x6
  System_String_o *v2902; // x7
  WarQuestSelectionMaster_o *v2903; // x20
  int32_t v2904; // w2
  int32_t v2905; // w3
  System_String_o *v2906; // x4
  int32_t v2907; // w5
  int64_t v2908; // x6
  System_String_o *v2909; // x7
  WarBoardStageDetailMaster_o *v2910; // x20
  int32_t v2911; // w2
  int32_t v2912; // w3
  System_String_o *v2913; // x4
  int32_t v2914; // w5
  int64_t v2915; // x6
  System_String_o *v2916; // x7
  QuestScriptMaterialOverwriteMaster_o *v2917; // x20
  int32_t v2918; // w2
  int32_t v2919; // w3
  System_String_o *v2920; // x4
  int32_t v2921; // w5
  int64_t v2922; // x6
  System_String_o *v2923; // x7
  QuestScriptBranchMaterialMaster_o *v2924; // x20
  int32_t v2925; // w2
  int32_t v2926; // w3
  System_String_o *v2927; // x4
  int32_t v2928; // w5
  int64_t v2929; // x6
  System_String_o *v2930; // x7
  AdCheckPointMaster_o *v2931; // x20
  int32_t v2932; // w2
  int32_t v2933; // w3
  System_String_o *v2934; // x4
  int32_t v2935; // w5
  int64_t v2936; // x6
  System_String_o *v2937; // x7
  GiftDetailMaster_o *v2938; // x20
  int32_t v2939; // w2
  int32_t v2940; // w3
  System_String_o *v2941; // x4
  int32_t v2942; // w5
  int64_t v2943; // x6
  System_String_o *v2944; // x7
  CombineLimitGiftMaster_o *v2945; // x20
  int32_t v2946; // w2
  int32_t v2947; // w3
  System_String_o *v2948; // x4
  int32_t v2949; // w5
  int64_t v2950; // x6
  System_String_o *v2951; // x7
  EventCooltimeRewardMaster_o *v2952; // x20
  int32_t v2953; // w2
  int32_t v2954; // w3
  System_String_o *v2955; // x4
  int32_t v2956; // w5
  int64_t v2957; // x6
  System_String_o *v2958; // x7
  UserEventCooltimeRewardMaster_o *v2959; // x20
  int32_t v2960; // w2
  int32_t v2961; // w3
  System_String_o *v2962; // x4
  int32_t v2963; // w5
  int64_t v2964; // x6
  System_String_o *v2965; // x7
  ClassBoardBaseMaster_o *v2966; // x20
  int32_t v2967; // w2
  int32_t v2968; // w3
  System_String_o *v2969; // x4
  int32_t v2970; // w5
  int64_t v2971; // x6
  System_String_o *v2972; // x7
  ClassBoardLockMaster_o *v2973; // x20
  int32_t v2974; // w2
  int32_t v2975; // w3
  System_String_o *v2976; // x4
  int32_t v2977; // w5
  int64_t v2978; // x6
  System_String_o *v2979; // x7
  ClassBoardSquareMaster_o *v2980; // x20
  int32_t v2981; // w2
  int32_t v2982; // w3
  System_String_o *v2983; // x4
  int32_t v2984; // w5
  int64_t v2985; // x6
  System_String_o *v2986; // x7
  ClassBoardLineMaster_o *v2987; // x20
  int32_t v2988; // w2
  int32_t v2989; // w3
  System_String_o *v2990; // x4
  int32_t v2991; // w5
  int64_t v2992; // x6
  System_String_o *v2993; // x7
  UserClassBoardSquareMaster_o *v2994; // x20
  int32_t v2995; // w2
  int32_t v2996; // w3
  System_String_o *v2997; // x4
  int32_t v2998; // w5
  int64_t v2999; // x6
  System_String_o *v3000; // x7
  ServantCardAddMaster_o *v3001; // x20
  int32_t v3002; // w2
  int32_t v3003; // w3
  System_String_o *v3004; // x4
  int32_t v3005; // w5
  int64_t v3006; // x6
  System_String_o *v3007; // x7
  MapLayerMaster_o *v3008; // x20
  int32_t v3009; // w2
  int32_t v3010; // w3
  System_String_o *v3011; // x4
  int32_t v3012; // w5
  int64_t v3013; // x6
  System_String_o *v3014; // x7
  SpotLayerMaster_o *v3015; // x20
  int32_t v3016; // w2
  int32_t v3017; // w3
  System_String_o *v3018; // x4
  int32_t v3019; // w5
  int64_t v3020; // x6
  System_String_o *v3021; // x7
  MapGimmickLayerMaster_o *v3022; // x20
  int32_t v3023; // w2
  int32_t v3024; // w3
  System_String_o *v3025; // x4
  int32_t v3026; // w5
  int64_t v3027; // x6
  System_String_o *v3028; // x7
  EventDataLostBattleMaster_o *v3029; // x20
  int32_t v3030; // w2
  int32_t v3031; // w3
  System_String_o *v3032; // x4
  int32_t v3033; // w5
  int64_t v3034; // x6
  System_String_o *v3035; // x7
  EventDataLostBattleResetMaster_o *v3036; // x20
  int32_t v3037; // w2
  int32_t v3038; // w3
  System_String_o *v3039; // x4
  int32_t v3040; // w5
  int64_t v3041; // x6
  System_String_o *v3042; // x7
  UserEventDataLostMaster_o *v3043; // x20
  int32_t v3044; // w2
  int32_t v3045; // w3
  System_String_o *v3046; // x4
  int32_t v3047; // w5
  int64_t v3048; // x6
  System_String_o *v3049; // x7
  QuestHintMaster_o *v3050; // x20
  int32_t v3051; // w2
  int32_t v3052; // w3
  System_String_o *v3053; // x4
  int32_t v3054; // w5
  int64_t v3055; // x6
  System_String_o *v3056; // x7
  FuncTypeDetailMaster_o *v3057; // x20
  int32_t v3058; // w2
  int32_t v3059; // w3
  System_String_o *v3060; // x4
  int32_t v3061; // w5
  int64_t v3062; // x6
  System_String_o *v3063; // x7
  BuffConvertMaster_o *v3064; // x20
  int32_t v3065; // w2
  int32_t v3066; // w3
  System_String_o *v3067; // x4
  int32_t v3068; // w5
  int64_t v3069; // x6
  System_String_o *v3070; // x7
  SkillGroupMaster_o *v3071; // x20
  int32_t v3072; // w2
  int32_t v3073; // w3
  System_String_o *v3074; // x4
  int32_t v3075; // w5
  int64_t v3076; // x6
  System_String_o *v3077; // x7
  SkillGroupOverwriteMaster_o *v3078; // x20
  int32_t v3079; // w2
  int32_t v3080; // w3
  System_String_o *v3081; // x4
  int32_t v3082; // w5
  int64_t v3083; // x6
  System_String_o *v3084; // x7
  SkillIndividualityMaster_o *v3085; // x20
  int32_t v3086; // w2
  int32_t v3087; // w3
  System_String_o *v3088; // x4
  int32_t v3089; // w5
  int64_t v3090; // x6
  System_String_o *v3091; // x7
  RestrictionBaseMaster_o *v3092; // x20
  int32_t v3093; // w2
  int32_t v3094; // w3
  System_String_o *v3095; // x4
  int32_t v3096; // w5
  int64_t v3097; // x6
  System_String_o *v3098; // x7
  RestrictionSlotMaster_o *v3099; // x20
  int32_t v3100; // w2
  int32_t v3101; // w3
  System_String_o *v3102; // x4
  int32_t v3103; // w5
  int64_t v3104; // x6
  System_String_o *v3105; // x7
  RestrictionSlotDetailMaster_o *v3106; // x20
  int32_t v3107; // w2
  int32_t v3108; // w3
  System_String_o *v3109; // x4
  int32_t v3110; // w5
  int64_t v3111; // x6
  System_String_o *v3112; // x7
  RestrictionMessageMaster_o *v3113; // x20
  int32_t v3114; // w2
  int32_t v3115; // w3
  System_String_o *v3116; // x4
  int32_t v3117; // w5
  int64_t v3118; // x6
  System_String_o *v3119; // x7
  RestrictionWholeMaster_o *v3120; // x20
  int32_t v3121; // w2
  int32_t v3122; // w3
  System_String_o *v3123; // x4
  int32_t v3124; // w5
  int64_t v3125; // x6
  System_String_o *v3126; // x7
  FuncDispMaster_o *v3127; // x20
  int32_t v3128; // w2
  int32_t v3129; // w3
  System_String_o *v3130; // x4
  int32_t v3131; // w5
  int64_t v3132; // x6
  System_String_o *v3133; // x7
  ClassBoardCommandSpellMaster_o *v3134; // x20
  int32_t v3135; // w2
  int32_t v3136; // w3
  System_String_o *v3137; // x4
  int32_t v3138; // w5
  int64_t v3139; // x6
  System_String_o *v3140; // x7
  ClassBoardClassMaster_o *v3141; // x20
  int32_t v3142; // w2
  int32_t v3143; // w3
  System_String_o *v3144; // x4
  int32_t v3145; // w5
  int64_t v3146; // x6
  System_String_o *v3147; // x7
  EventCommandAssistMaster_o *v3148; // x20
  int32_t v3149; // w2
  int32_t v3150; // w3
  System_String_o *v3151; // x4
  int32_t v3152; // w5
  int64_t v3153; // x6
  System_String_o *v3154; // x7
  EventMissionGroupMaster_o *v3155; // x20
  int32_t v3156; // w2
  int32_t v3157; // w3
  System_String_o *v3158; // x4
  int32_t v3159; // w5
  int64_t v3160; // x6
  System_String_o *v3161; // x7
  CombineLimitReleaseMaster_o *v3162; // x20
  int32_t v3163; // w2
  int32_t v3164; // w3
  System_String_o *v3165; // x4
  int32_t v3166; // w5
  int64_t v3167; // x6
  System_String_o *v3168; // x7
  HeelPortraitMaster_o *v3169; // x20
  int32_t v3170; // w2
  int32_t v3171; // w3
  System_String_o *v3172; // x4
  int32_t v3173; // w5
  int64_t v3174; // x6
  System_String_o *v3175; // x7
  UserHeelPortraitMaster_o *v3176; // x20
  int32_t v3177; // w2
  int32_t v3178; // w3
  System_String_o *v3179; // x4
  int32_t v3180; // w5
  int64_t v3181; // x6
  System_String_o *v3182; // x7
  TreasureDeviceSequenceWeightMaster_o *v3183; // x20
  int32_t v3184; // w2
  int32_t v3185; // w3
  System_String_o *v3186; // x4
  int32_t v3187; // w5
  int64_t v3188; // x6
  System_String_o *v3189; // x7
  NpcServantFollowerIndividualityMaster_o *v3190; // x20
  int32_t v3191; // w2
  int32_t v3192; // w3
  System_String_o *v3193; // x4
  int32_t v3194; // w5
  int64_t v3195; // x6
  System_String_o *v3196; // x7
  GachaExtraGiftMaster_o *v3197; // x20
  int32_t v3198; // w2
  int32_t v3199; // w3
  System_String_o *v3200; // x4
  int32_t v3201; // w5
  int64_t v3202; // x6
  System_String_o *v3203; // x7
  EventMuralMaster_o *v3204; // x20
  int32_t v3205; // w2
  int32_t v3206; // w3
  System_String_o *v3207; // x4
  int32_t v3208; // w5
  int64_t v3209; // x6
  System_String_o *v3210; // x7
  ViewWaveEnemyMaster_o *v3211; // x20
  int32_t v3212; // w2
  int32_t v3213; // w3
  System_String_o *v3214; // x4
  int32_t v3215; // w5
  int64_t v3216; // x6
  System_String_o *v3217; // x7
  BlankEarthSpotNavimenuMaster_o *v3218; // x20
  int32_t v3219; // w2
  int32_t v3220; // w3
  System_String_o *v3221; // x4
  int32_t v3222; // w5
  int64_t v3223; // x6
  System_String_o *v3224; // x7
  BlankEarthGimmickMaster_o *v3225; // x20
  int32_t v3226; // w2
  int32_t v3227; // w3
  System_String_o *v3228; // x4
  int32_t v3229; // w5
  int64_t v3230; // x6
  System_String_o *v3231; // x7
  TerminalOverwriteMaster_o *v3232; // x20
  int32_t v3233; // w2
  int32_t v3234; // w3
  System_String_o *v3235; // x4
  int32_t v3236; // w5
  int64_t v3237; // x6
  System_String_o *v3238; // x7
  UserExchangeSvtMaster_o *v3239; // x20
  int32_t v3240; // w2
  int32_t v3241; // w3
  System_String_o *v3242; // x4
  int32_t v3243; // w5
  int64_t v3244; // x6
  System_String_o *v3245; // x7
  WarBoardCommonReleaseMaster_o *v3246; // x20
  int32_t v3247; // w2
  int32_t v3248; // w3
  System_String_o *v3249; // x4
  int32_t v3250; // w5
  int64_t v3251; // x6
  System_String_o *v3252; // x7
  WarBoardEventMaster_o *v3253; // x20
  int32_t v3254; // w2
  int32_t v3255; // w3
  System_String_o *v3256; // x4
  int32_t v3257; // w5
  int64_t v3258; // x6
  System_String_o *v3259; // x7
  WarBoardEventScriptMaster_o *v3260; // x20
  int32_t v3261; // w2
  int32_t v3262; // w3
  System_String_o *v3263; // x4
  int32_t v3264; // w5
  int64_t v3265; // x6
  System_String_o *v3266; // x7
  WarBoardStageBossMaster_o *v3267; // x20
  int32_t v3268; // w2
  int32_t v3269; // w3
  System_String_o *v3270; // x4
  int32_t v3271; // w5
  int64_t v3272; // x6
  System_String_o *v3273; // x7
  WarBoardSquareIndexGroupMaster_o *v3274; // x20
  int32_t v3275; // w2
  int32_t v3276; // w3
  System_String_o *v3277; // x4
  int32_t v3278; // w5
  int64_t v3279; // x6
  System_String_o *v3280; // x7
  WarBoardActionTrendGroupMaster_o *v3281; // x20
  int32_t v3282; // w2
  int32_t v3283; // w3
  System_String_o *v3284; // x4
  int32_t v3285; // w5
  int64_t v3286; // x6
  System_String_o *v3287; // x7
  WarBoardRatingOffsetGroupMaster_o *v3288; // x20
  int32_t v3289; // w2
  int32_t v3290; // w3
  System_String_o *v3291; // x4
  int32_t v3292; // w5
  int64_t v3293; // x6
  System_String_o *v3294; // x7
  WarBoardReinforcementsMaster_o *v3295; // x20
  int32_t v3296; // w2
  int32_t v3297; // w3
  System_String_o *v3298; // x4
  int32_t v3299; // w5
  int64_t v3300; // x6
  System_String_o *v3301; // x7
  WarBoardStageReinforcementsMaster_o *v3302; // x20
  int32_t v3303; // w2
  int32_t v3304; // w3
  System_String_o *v3305; // x4
  int32_t v3306; // w5
  int64_t v3307; // x6
  System_String_o *v3308; // x7
  WarBoardFutureActionTrendMaster_o *v3309; // x20
  int32_t v3310; // w2
  int32_t v3311; // w3
  System_String_o *v3312; // x4
  int32_t v3313; // w5
  int64_t v3314; // x6
  System_String_o *v3315; // x7
  ServantProfilePushMaster_o *v3316; // x20
  int32_t v3317; // w2
  int32_t v3318; // w3
  System_String_o *v3319; // x4
  int32_t v3320; // w5
  int64_t v3321; // x6
  System_String_o *v3322; // x7
  MapGimmickPathMaster_o *v3323; // x20
  int32_t v3324; // w2
  int32_t v3325; // w3
  System_String_o *v3326; // x4
  int32_t v3327; // w5
  int64_t v3328; // x6
  System_String_o *v3329; // x7
  MapGimmickPathReleaseMaster_o *v3330; // x20
  int32_t v3331; // w2
  int32_t v3332; // w3
  System_String_o *v3333; // x4
  int32_t v3334; // w5
  int64_t v3335; // x6
  System_String_o *v3336; // x7
  ServantOverwriteMaster_o *v3337; // x20
  int32_t v3338; // w2
  int32_t v3339; // w3
  System_String_o *v3340; // x4
  int32_t v3341; // w5
  int64_t v3342; // x6
  System_String_o *v3343; // x7
  IndividualityPolicyMaster_o *v3344; // x20
  int32_t v3345; // w2
  int32_t v3346; // w3
  System_String_o *v3347; // x4
  int32_t v3348; // w5
  int64_t v3349; // x6
  System_String_o *v3350; // x7
  IndividualityPersonalityMaster_o *v3351; // x20
  int32_t v3352; // w2
  int32_t v3353; // w3
  System_String_o *v3354; // x4
  int32_t v3355; // w5
  int64_t v3356; // x6
  System_String_o *v3357; // x7
  AttriMaster_o *v3358; // x20
  int32_t v3359; // w2
  int32_t v3360; // w3
  System_String_o *v3361; // x4
  int32_t v3362; // w5
  int64_t v3363; // x6
  System_String_o *v3364; // x7
  ServantVoicePatternMaster_o *v3365; // x20
  int32_t v3366; // w2
  int32_t v3367; // w3
  System_String_o *v3368; // x4
  int32_t v3369; // w5
  int64_t v3370; // x6
  System_String_o *v3371; // x7
  UserGameCommonMaster_o *v3372; // x20
  int32_t v3373; // w2
  int32_t v3374; // w3
  System_String_o *v3375; // x4
  int32_t v3376; // w5
  int64_t v3377; // x6
  System_String_o *v3378; // x7
  ServantPhotoMaster_o *v3379; // x20
  int32_t v3380; // w2
  int32_t v3381; // w3
  System_String_o *v3382; // x4
  int32_t v3383; // w5
  int64_t v3384; // x6
  System_String_o *v3385; // x7
  MasterPhotoMaster_o *v3386; // x20
  int32_t v3387; // w2
  int32_t v3388; // w3
  System_String_o *v3389; // x4
  int32_t v3390; // w5
  int64_t v3391; // x6
  System_String_o *v3392; // x7
  PhotoFrameMaster_o *v3393; // x20
  int32_t v3394; // w2
  int32_t v3395; // w3
  System_String_o *v3396; // x4
  int32_t v3397; // w5
  int64_t v3398; // x6
  System_String_o *v3399; // x7
  WarMessageMaster_o *v3400; // x20
  int32_t v3401; // w2
  int32_t v3402; // w3
  System_String_o *v3403; // x4
  int32_t v3404; // w5
  int64_t v3405; // x6
  System_String_o *v3406; // x7
  QuestAutoOrganizationAdjustMaster_o *v3407; // x20
  int32_t v3408; // w2
  int32_t v3409; // w3
  System_String_o *v3410; // x4
  int32_t v3411; // w5
  int64_t v3412; // x6
  System_String_o *v3413; // x7
  ExcludeMotionMaster_o *v3414; // x20
  int32_t v3415; // w2
  int32_t v3416; // w3
  System_String_o *v3417; // x4
  int32_t v3418; // w5
  int64_t v3419; // x6
  System_String_o *v3420; // x7
  UserInterruptionQuestMaster_o *v3421; // x20
  int32_t v3422; // w2
  int32_t v3423; // w3
  System_String_o *v3424; // x4
  int32_t v3425; // w5
  int64_t v3426; // x6
  System_String_o *v3427; // x7
  ServantTransformMaster_o *v3428; // x20
  int32_t v3429; // w2
  int32_t v3430; // w3
  System_String_o *v3431; // x4
  int32_t v3432; // w5
  int64_t v3433; // x6
  System_String_o *v3434; // x7
  MapUpdateScheduleMaster_o *v3435; // x20
  int32_t v3436; // w2
  int32_t v3437; // w3
  System_String_o *v3438; // x4
  int32_t v3439; // w5
  int64_t v3440; // x6
  System_String_o *v3441; // x7
  QuestPhasePresentMaster_o *v3442; // x20
  int32_t v3443; // w2
  int32_t v3444; // w3
  System_String_o *v3445; // x4
  int32_t v3446; // w5
  int64_t v3447; // x6
  System_String_o *v3448; // x7
  UserAccountLinkageMaster_o *v3449; // x20
  int32_t v3450; // w2
  int32_t v3451; // w3
  System_String_o *v3452; // x4
  int32_t v3453; // w5
  int64_t v3454; // x6
  System_String_o *v3455; // x7
  MissionNaviTransitionMaster_o *v3456; // x20
  int32_t v3457; // w2
  int32_t v3458; // w3
  System_String_o *v3459; // x4
  int32_t v3460; // w5
  int64_t v3461; // x6
  System_String_o *v3462; // x7
  MissionNaviQuestMaster_o *v3463; // x20
  int32_t v3464; // w2
  int32_t v3465; // w3
  System_String_o *v3466; // x4
  int32_t v3467; // w5
  int64_t v3468; // x6
  System_String_o *v3469; // x7
  EventTradeGoodsMaster_o *v3470; // x20
  int32_t v3471; // w2
  int32_t v3472; // w3
  System_String_o *v3473; // x4
  int32_t v3474; // w5
  int64_t v3475; // x6
  System_String_o *v3476; // x7
  EventTradeStoreMaster_o *v3477; // x20
  int32_t v3478; // w2
  int32_t v3479; // w3
  System_String_o *v3480; // x4
  int32_t v3481; // w5
  int64_t v3482; // x6
  System_String_o *v3483; // x7
  EventTradePickupMaster_o *v3484; // x20
  int32_t v3485; // w2
  int32_t v3486; // w3
  System_String_o *v3487; // x4
  int32_t v3488; // w5
  int64_t v3489; // x6
  System_String_o *v3490; // x7
  UserEventTradeMaster_o *v3491; // x20
  int32_t v3492; // w2
  int32_t v3493; // w3
  System_String_o *v3494; // x4
  int32_t v3495; // w5
  int64_t v3496; // x6
  System_String_o *v3497; // x7
  PaymentHistoryMaster_o *v3498; // x20
  int32_t v3499; // w2
  int32_t v3500; // w3
  System_String_o *v3501; // x4
  int32_t v3502; // w5
  int64_t v3503; // x6
  System_String_o *v3504; // x7
  UserExternalPaymentStoneMaster_o *v3505; // x20
  int32_t v3506; // w2
  int32_t v3507; // w3
  System_String_o *v3508; // x4
  int32_t v3509; // w5
  int64_t v3510; // x6
  System_String_o *v3511; // x7
  QuestPhaseIndividualityMaster_o *v3512; // x20
  int32_t v3513; // w2
  int32_t v3514; // w3
  System_String_o *v3515; // x4
  int32_t v3516; // w5
  int64_t v3517; // x6
  System_String_o *v3518; // x7
  ViewGachaFeaturedServantMaster_o *v3519; // x20
  int32_t v3520; // w2
  int32_t v3521; // w3
  System_String_o *v3522; // x4
  int32_t v3523; // w5
  int64_t v3524; // x6
  System_String_o *v3525; // x7
  UserGachaPickupCollateralMaster_o *v3526; // x20
  int32_t v3527; // w2
  int32_t v3528; // w3
  System_String_o *v3529; // x4
  int32_t v3530; // w5
  int64_t v3531; // x6
  System_String_o *v3532; // x7
  GachaPickupCollateralMaster_o *v3533; // x20
  int32_t v3534; // w2
  int32_t v3535; // w3
  System_String_o *v3536; // x4
  int32_t v3537; // w5
  int64_t v3538; // x6
  System_String_o *v3539; // x7
  GachaPickupCollateralGroupMaster_o *v3540; // x20
  int32_t v3541; // w2
  int32_t v3542; // w3
  System_String_o *v3543; // x4
  int32_t v3544; // w5
  int64_t v3545; // x6
  System_String_o *v3546; // x7
  BattlePointMaster_o *v3547; // x20
  int32_t v3548; // w2
  int32_t v3549; // w3
  System_String_o *v3550; // x4
  int32_t v3551; // w5
  int64_t v3552; // x6
  System_String_o *v3553; // x7
  BattlePointPhaseMaster_o *v3554; // x20
  int32_t v3555; // w2
  int32_t v3556; // w3
  System_String_o *v3557; // x4
  int32_t v3558; // w5
  int64_t v3559; // x6
  System_String_o *v3560; // x7
  ServantBattlePointMaster_o *v3561; // x20
  int32_t v3562; // w2
  int32_t v3563; // w3
  System_String_o *v3564; // x4
  int32_t v3565; // w5
  int64_t v3566; // x6
  System_String_o *v3567; // x7
  EffectMovieMaster_o *v3568; // x20
  int32_t v3569; // w2
  int32_t v3570; // w3
  System_String_o *v3571; // x4
  int32_t v3572; // w5
  int64_t v3573; // x6
  System_String_o *v3574; // x7
  PaymentLimitMaster_o *v3575; // x20
  int32_t v3576; // w2
  int32_t v3577; // w3
  System_String_o *v3578; // x4
  int32_t v3579; // w5
  int64_t v3580; // x6
  System_String_o *v3581; // x7
  UserPaymentLimitMaster_o *v3582; // x20
  int32_t v3583; // w2
  int32_t v3584; // w3
  System_String_o *v3585; // x4
  int32_t v3586; // w5
  int64_t v3587; // x6
  System_String_o *v3588; // x7
  RoadmapMaster_o *v3589; // x20
  int32_t v3590; // w2
  int32_t v3591; // w3
  System_String_o *v3592; // x4
  int32_t v3593; // w5
  int64_t v3594; // x6
  System_String_o *v3595; // x7
  UserRecommendSupportMaster_o *v3596; // x20
  int32_t v3597; // w2
  int32_t v3598; // w3
  System_String_o *v3599; // x4
  int32_t v3600; // w5
  int64_t v3601; // x6
  System_String_o *v3602; // x7
  RecommendSupportQuestMaster_o *v3603; // x20
  int32_t v3604; // w2
  int32_t v3605; // w3
  System_String_o *v3606; // x4
  int32_t v3607; // w5
  int64_t v3608; // x6
  System_String_o *v3609; // x7
  RecommendAdviceMessageMaster_o *v3610; // x20
  int32_t v3611; // w2
  int32_t v3612; // w3
  System_String_o *v3613; // x4
  int32_t v3614; // w5
  int64_t v3615; // x6
  System_String_o *v3616; // x7
  UserRecommendFollowerMaster_o *v3617; // x20
  int32_t v3618; // w2
  int32_t v3619; // w3
  System_String_o *v3620; // x4
  int32_t v3621; // w5
  int64_t v3622; // x6
  System_String_o *v3623; // x7
  ItemDropEfficiencyMaster_o *v3624; // x20
  int32_t v3625; // w2
  int32_t v3626; // w3
  System_String_o *v3627; // x4
  int32_t v3628; // w5
  int64_t v3629; // x6
  System_String_o *v3630; // x7
  BlankEarthGimmickAddMaster_o *v3631; // x20
  int32_t v3632; // w2
  int32_t v3633; // w3
  System_String_o *v3634; // x4
  int32_t v3635; // w5
  int64_t v3636; // x6
  System_String_o *v3637; // x7
  WarReleaseMaster_o *v3638; // x20
  int32_t v3639; // w2
  int32_t v3640; // w3
  System_String_o *v3641; // x4
  int32_t v3642; // w5
  int64_t v3643; // x6
  System_String_o *v3644; // x7
  SelectBonusBaseMaster_o *v3645; // x20
  int32_t v3646; // w2
  int32_t v3647; // w3
  System_String_o *v3648; // x4
  int32_t v3649; // w5
  int64_t v3650; // x6
  System_String_o *v3651; // x7
  SelectBonusMaster_o *v3652; // x20
  int32_t v3653; // w2
  int32_t v3654; // w3
  System_String_o *v3655; // x4
  int32_t v3656; // w5
  int64_t v3657; // x6
  System_String_o *v3658; // x7
  MyroomServantSpecialImageMaster_o *v3659; // x20
  int32_t v3660; // w2
  int32_t v3661; // w3
  System_String_o *v3662; // x4
  int32_t v3663; // w5
  int64_t v3664; // x6
  System_String_o *v3665; // x7
  ShopResetMaster_o *v3666; // x20
  int32_t v3667; // w2
  int32_t v3668; // w3
  System_String_o *v3669; // x4
  int32_t v3670; // w5
  int64_t v3671; // x6
  System_String_o *v3672; // x7
  NpcServantDisplayTypeDetailMaster_o *v3673; // x20
  int32_t v3674; // w2
  int32_t v3675; // w3
  System_String_o *v3676; // x4
  int32_t v3677; // w5
  int64_t v3678; // x6
  System_String_o *v3679; // x7
  FriendshipServantMaster_o *v3680; // x20
  int32_t v3681; // w2
  int32_t v3682; // w3
  System_String_o *v3683; // x4
  int32_t v3684; // w5
  int64_t v3685; // x6
  System_String_o *v3686; // x7
  ExchangeSvtCoinGivenNumMaster_o *v3687; // x20
  int32_t v3688; // w2
  int32_t v3689; // w3
  System_String_o *v3690; // x4
  int32_t v3691; // w5
  int64_t v3692; // x6
  System_String_o *v3693; // x7
  ChaldeaGatePickupMaster_o *v3694; // x20
  int32_t v3695; // w2
  int32_t v3696; // w3
  System_String_o *v3697; // x4
  int32_t v3698; // w5
  int64_t v3699; // x6
  System_String_o *v3700; // x7
  WarGroupIgnoreMaster_o *v3701; // x20
  int32_t v3702; // w2
  int32_t v3703; // w3
  System_String_o *v3704; // x4
  int32_t v3705; // w5
  int64_t v3706; // x6
  System_String_o *v3707; // x7
  ImagePartsGroupMaster_o *v3708; // x20
  int32_t v3709; // w2
  int32_t v3710; // w3
  System_String_o *v3711; // x4
  int32_t v3712; // w5
  int64_t v3713; // x6
  System_String_o *v3714; // x7
  UserImagePartsGroupMaster_o *v3715; // x20
  int32_t v3716; // w2
  int32_t v3717; // w3
  System_String_o *v3718; // x4
  int32_t v3719; // w5
  int64_t v3720; // x6
  System_String_o *v3721; // x7
  MissionItemDisplayMaster_o *v3722; // x20
  int32_t v3723; // w2
  int32_t v3724; // w3
  System_String_o *v3725; // x4
  int32_t v3726; // w5
  int64_t v3727; // x6
  System_String_o *v3728; // x7
  QuestUseItemGroupMaster_o *v3729; // x20
  int32_t v3730; // w2
  int32_t v3731; // w3
  System_String_o *v3732; // x4
  int32_t v3733; // w5
  int64_t v3734; // x6
  System_String_o *v3735; // x7
  QuestUseItemPickupMaster_o *v3736; // x20
  int32_t v3737; // w2
  int32_t v3738; // w3
  System_String_o *v3739; // x4
  int32_t v3740; // w5
  int64_t v3741; // x6
  System_String_o *v3742; // x7
  UserEventItemLinkSvtMaster_o *v3743; // x20
  int32_t v3744; // w2
  int32_t v3745; // w3
  System_String_o *v3746; // x4
  int32_t v3747; // w5
  int64_t v3748; // x6
  System_String_o *v3749; // x7
  QuestHintOverwriteMaster_o *v3750; // x20
  int32_t v3751; // w2
  int32_t v3752; // w3
  System_String_o *v3753; // x4
  int32_t v3754; // w5
  int64_t v3755; // x6
  System_String_o *v3756; // x7
  ReachedWaveInfoMaster_o *v3757; // x20
  int32_t v3758; // w2
  int32_t v3759; // w3
  System_String_o *v3760; // x4
  int32_t v3761; // w5
  int64_t v3762; // x6
  System_String_o *v3763; // x7
  GalleryMaster_o *v3764; // x20
  int32_t v3765; // w2
  int32_t v3766; // w3
  System_String_o *v3767; // x4
  int32_t v3768; // w5
  int64_t v3769; // x6
  System_String_o *v3770; // x7
  GalleryResourceMaster_o *v3771; // x20
  int32_t v3772; // w2
  int32_t v3773; // w3
  System_String_o *v3774; // x4
  int32_t v3775; // w5
  int64_t v3776; // x6
  System_String_o *v3777; // x7
  ServantSkillAddMaster_o *v3778; // x20
  int32_t v3779; // w2
  int32_t v3780; // w3
  System_String_o *v3781; // x4
  int32_t v3782; // w5
  int64_t v3783; // x6
  System_String_o *v3784; // x7
  GalleryFolderReleaseMaster_o *v3785; // x20
  int32_t v3786; // w2
  int32_t v3787; // w3
  System_String_o *v3788; // x4
  int32_t v3789; // w5
  int64_t v3790; // x6
  System_String_o *v3791; // x7
  UserSvtFirstGetTimeMaster_o *v3792; // x20
  int32_t v3793; // w2
  int32_t v3794; // w3
  System_String_o *v3795; // x4
  int32_t v3796; // w5
  int64_t v3797; // x6
  System_String_o *v3798; // x7
  QuestExtensionMaster_o *v3799; // x20
  int32_t v3800; // w2
  int32_t v3801; // w3
  System_String_o *v3802; // x4
  int32_t v3803; // w5
  int64_t v3804; // x6
  System_String_o *v3805; // x7
  UserServantGrandMaster_o *v3806; // x20
  int32_t v3807; // w2
  int32_t v3808; // w3
  System_String_o *v3809; // x4
  int32_t v3810; // w5
  int64_t v3811; // x6
  System_String_o *v3812; // x7
  GrandGraphMaster_o *v3813; // x20
  int32_t v3814; // w2
  int32_t v3815; // w3
  System_String_o *v3816; // x4
  int32_t v3817; // w5
  int64_t v3818; // x6
  System_String_o *v3819; // x7
  GrandGraphDetailMaster_o *v3820; // x20
  int32_t v3821; // w2
  int32_t v3822; // w3
  System_String_o *v3823; // x4
  int32_t v3824; // w5
  int64_t v3825; // x6
  System_String_o *v3826; // x7
  UserClassStatisticsMaster_o *v3827; // x20
  int32_t v3828; // w2
  int32_t v3829; // w3
  System_String_o *v3830; // x4
  int32_t v3831; // w5
  int64_t v3832; // x6
  System_String_o *v3833; // x7
  EventEquipSkillPartsMaster_o *v3834; // x20
  int32_t v3835; // w2
  int32_t v3836; // w3
  System_String_o *v3837; // x4
  int32_t v3838; // w5
  int64_t v3839; // x6
  System_String_o *v3840; // x7
  MasterIndividualitySelectMaster_o *v3841; // x20
  int32_t v3842; // w2
  int32_t v3843; // w3
  System_String_o *v3844; // x4
  int32_t v3845; // w5
  int64_t v3846; // x6
  System_String_o *v3847; // x7
  MyroomAddBgDiffMaster_o *v3848; // x20
  int32_t v3849; // w2
  int32_t v3850; // w3
  System_String_o *v3851; // x4
  int32_t v3852; // w5
  int64_t v3853; // x6
  System_String_o *v3854; // x7
  BattleScriptMaster_o *v3855; // x20
  int32_t v3856; // w2
  int32_t v3857; // w3
  System_String_o *v3858; // x4
  int32_t v3859; // w5
  int64_t v3860; // x6
  System_String_o *v3861; // x7
  DropAddMaster_o *v3862; // x20
  int32_t v3863; // w2
  int32_t v3864; // w3
  System_String_o *v3865; // x4
  int32_t v3866; // w5
  int64_t v3867; // x6
  System_String_o *v3868; // x7
  __int64 v3870; // x0

  if ( (byte_4D2C30B & 1) == 0 )
  {
    sub_1C94098(&AccessaryMaster_TypeInfo);
    sub_1C94098(&AdCheckPointMaster_TypeInfo);
    sub_1C94098(&AiActMaster_TypeInfo);
    sub_1C94098(&AiFieldMaster_TypeInfo);
    sub_1C94098(&AiMaster_TypeInfo);
    sub_1C94098(&AreaMaster_TypeInfo);
    sub_1C94098(&AssistMaster_TypeInfo);
    sub_1C94098(&AttriMaster_TypeInfo);
    sub_1C94098(&AttriRelationMaster_TypeInfo);
    sub_1C94098(&AuraEffectMaster_TypeInfo);
    sub_1C94098(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C94098(&BankShopMaster_TypeInfo);
    sub_1C94098(&BannerAddMaster_TypeInfo);
    sub_1C94098(&BannerMaster_TypeInfo);
    sub_1C94098(&BattleBgMaster_TypeInfo);
    sub_1C94098(&BattleMasterImageMaster_TypeInfo);
    sub_1C94098(&BattleMaster_TypeInfo);
    sub_1C94098(&BattleMessageGroupMaster_TypeInfo);
    sub_1C94098(&BattleMessageMaster_TypeInfo);
    sub_1C94098(&BattlePointMaster_TypeInfo);
    sub_1C94098(&BattlePointPhaseMaster_TypeInfo);
    sub_1C94098(&BattleScriptMaster_TypeInfo);
    sub_1C94098(&BeforeBirthDayMaster_TypeInfo);
    sub_1C94098(&BgmMaster_TypeInfo);
    sub_1C94098(&BgmReleaseMaster_TypeInfo);
    sub_1C94098(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_1C94098(&BlankEarthGimmickMaster_TypeInfo);
    sub_1C94098(&BlankEarthSpotAddMaster_TypeInfo);
    sub_1C94098(&BlankEarthSpotMaster_TypeInfo);
    sub_1C94098(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_1C94098(&BoardMessageMaster_TypeInfo);
    sub_1C94098(&BoardMessageReleaseMaster_TypeInfo);
    sub_1C94098(&BoostMaster_TypeInfo);
    sub_1C94098(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_1C94098(&BoxGachaBaseMaster_TypeInfo);
    sub_1C94098(&BoxGachaHistoryMaster_TypeInfo);
    sub_1C94098(&BoxGachaMaster_TypeInfo);
    sub_1C94098(&BoxGachaTalkMaster_TypeInfo);
    sub_1C94098(&BuffConvertMaster_TypeInfo);
    sub_1C94098(&BuffMaster_TypeInfo);
    sub_1C94098(&BuffTypeDetailMaster_TypeInfo);
    sub_1C94098(&CampaignInfoMaster_TypeInfo);
    sub_1C94098(&CardMaster_TypeInfo);
    sub_1C94098(&ChaldeaGatePickupMaster_TypeInfo);
    sub_1C94098(&ClassBoardBaseMaster_TypeInfo);
    sub_1C94098(&ClassBoardClassMaster_TypeInfo);
    sub_1C94098(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_1C94098(&ClassBoardLineMaster_TypeInfo);
    sub_1C94098(&ClassBoardLockMaster_TypeInfo);
    sub_1C94098(&ClassBoardSquareMaster_TypeInfo);
    sub_1C94098(&ClassRelationMaster_TypeInfo);
    sub_1C94098(&ClassRelationOverwriteMaster_TypeInfo);
    sub_1C94098(&ClosedMessageMaster_TypeInfo);
    sub_1C94098(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_1C94098(&CombineCostumeMaster_TypeInfo);
    sub_1C94098(&CombineLimitGiftMaster_TypeInfo);
    sub_1C94098(&CombineLimitMaster_TypeInfo);
    sub_1C94098(&CombineLimitReleaseMaster_TypeInfo);
    sub_1C94098(&CombineMaster_TypeInfo);
    sub_1C94098(&CombineMaterialMaster_TypeInfo);
    sub_1C94098(&CombineQpMaster_TypeInfo);
    sub_1C94098(&CombineQpSvtEquipMaster_TypeInfo);
    sub_1C94098(&CombineSkillMaster_TypeInfo);
    sub_1C94098(&CombineTdMaster_TypeInfo);
    sub_1C94098(&CommandCardRankParamMaster_TypeInfo);
    sub_1C94098(&CommandCodeCommentMaster_TypeInfo);
    sub_1C94098(&CommandCodeMaster_TypeInfo);
    sub_1C94098(&CommandCodeSkillMaster_TypeInfo);
    sub_1C94098(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_1C94098(&CommandSpellMaster_TypeInfo);
    sub_1C94098(&CommonConsumeMaster_TypeInfo);
    sub_1C94098(&CommonReleaseMaster_TypeInfo);
    sub_1C94098(&CommonRestrictionMaster_TypeInfo);
    sub_1C94098(&CompleteMissionMaster_TypeInfo);
    sub_1C94098(&ConstantLongMaster_TypeInfo);
    sub_1C94098(&ConstantMaster_TypeInfo);
    sub_1C94098(&ConstantStrMaster_TypeInfo);
    sub_1C94098(&CvMaster_TypeInfo);
    sub_1C94098(&DataMasterBase___TypeInfo);
    sub_1C94098(&DialogMessageMaster_TypeInfo);
    sub_1C94098(&DropAddMaster_TypeInfo);
    sub_1C94098(&EffectMaster_TypeInfo);
    sub_1C94098(&EffectMovieMaster_TypeInfo);
    sub_1C94098(&EnemyMstBattleMaster_TypeInfo);
    sub_1C94098(&EnemyMstMaster_TypeInfo);
    sub_1C94098(&EquipAddMaster_TypeInfo);
    sub_1C94098(&EquipExpMaster_TypeInfo);
    sub_1C94098(&EquipImageMaster_TypeInfo);
    sub_1C94098(&EquipMaster_TypeInfo);
    sub_1C94098(&EquipSkillMaster_TypeInfo);
    sub_1C94098(&EventAddMaster_TypeInfo);
    sub_1C94098(&EventBoardGameCellMaster_TypeInfo);
    sub_1C94098(&EventBoardGameTokenMaster_TypeInfo);
    sub_1C94098(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_1C94098(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_1C94098(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_1C94098(&EventBonusFilterMaster_TypeInfo);
    sub_1C94098(&EventBoostItemUsedMaster_TypeInfo);
    sub_1C94098(&EventBossStatusUiMaster_TypeInfo);
    sub_1C94098(&EventBuddyPointMaster_TypeInfo);
    sub_1C94098(&EventBulletinBoardMaster_TypeInfo);
    sub_1C94098(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_1C94098(&EventCampaignMaster_TypeInfo);
    sub_1C94098(&EventCampaignReleaseMaster_TypeInfo);
    sub_1C94098(&EventCombineCostumeMaster_TypeInfo);
    sub_1C94098(&EventCombineMaster_TypeInfo);
    sub_1C94098(&EventCommandAssistMaster_TypeInfo);
    sub_1C94098(&EventConquestRewardMaster_TypeInfo);
    sub_1C94098(&EventCooltimeRewardMaster_TypeInfo);
    sub_1C94098(&EventDataLostBattleMaster_TypeInfo);
    sub_1C94098(&EventDataLostBattleResetMaster_TypeInfo);
    sub_1C94098(&EventDetailMaster_TypeInfo);
    sub_1C94098(&EventDiggingBlockMaster_TypeInfo);
    sub_1C94098(&EventDiggingMaster_TypeInfo);
    sub_1C94098(&EventDiggingRewardMaster_TypeInfo);
    sub_1C94098(&EventEquipSkillPartsMaster_TypeInfo);
    sub_1C94098(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_1C94098(&EventExpeditionMaster_TypeInfo);
    sub_1C94098(&EventExpeditionPieceMaster_TypeInfo);
    sub_1C94098(&EventFactoryMaster_TypeInfo);
    sub_1C94098(&EventFatigueRecoveryMaster_TypeInfo);
    sub_1C94098(&EventFilterMaster_TypeInfo);
    sub_1C94098(&EventFortificationDetailMaster_TypeInfo);
    sub_1C94098(&EventFortificationMaster_TypeInfo);
    sub_1C94098(&EventFortificationSvtMaster_TypeInfo);
    sub_1C94098(&EventGroupMaster_TypeInfo);
    sub_1C94098(&EventItemDisplayGroupMaster_TypeInfo);
    sub_1C94098(&EventItemDisplayMaster_TypeInfo);
    sub_1C94098(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_1C94098(&EventLocationCampaignMaster_TypeInfo);
    sub_1C94098(&EventMaster_TypeInfo);
    sub_1C94098(&EventMissionActionAddMaster_TypeInfo);
    sub_1C94098(&EventMissionActionMaster_TypeInfo);
    sub_1C94098(&EventMissionAddMaster_TypeInfo);
    sub_1C94098(&EventMissionCondDetailMaster_TypeInfo);
    sub_1C94098(&EventMissionConditionMaster_TypeInfo);
    sub_1C94098(&EventMissionGroupMaster_TypeInfo);
    sub_1C94098(&EventMissionMaster_TypeInfo);
    sub_1C94098(&EventMuralMaster_TypeInfo);
    sub_1C94098(&EventPanelMapDetailMaster_TypeInfo);
    sub_1C94098(&EventPanelMapMaster_TypeInfo);
    sub_1C94098(&EventPanelScanMaster_TypeInfo);
    sub_1C94098(&EventPanelSpotMaster_TypeInfo);
    sub_1C94098(&EventPointActivityMaster_TypeInfo);
    sub_1C94098(&EventPointBuffMaster_TypeInfo);
    sub_1C94098(&EventPointGroupAddMaster_TypeInfo);
    sub_1C94098(&EventPointGroupMaster_TypeInfo);
    sub_1C94098(&EventPointMaster_TypeInfo);
    sub_1C94098(&EventPointUpperMaster_TypeInfo);
    sub_1C94098(&EventPointUpperReleaseMaster_TypeInfo);
    sub_1C94098(&EventProgressValueMaster_TypeInfo);
    sub_1C94098(&EventQuestCooltimeMaster_TypeInfo);
    sub_1C94098(&EventQuestMaster_TypeInfo);
    sub_1C94098(&EventRaceMaster_TypeInfo);
    sub_1C94098(&EventRaceResultMaster_TypeInfo);
    sub_1C94098(&EventRaidMaster_TypeInfo);
    sub_1C94098(&EventRandomMissionMaster_TypeInfo);
    sub_1C94098(&EventRecipeGiftMaster_TypeInfo);
    sub_1C94098(&EventRecipeMaster_TypeInfo);
    sub_1C94098(&EventRewardBgMaster_TypeInfo);
    sub_1C94098(&EventRewardExtraMaster_TypeInfo);
    sub_1C94098(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_1C94098(&EventRewardMaster_TypeInfo);
    sub_1C94098(&EventRewardSceneMaster_TypeInfo);
    sub_1C94098(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_1C94098(&EventRewardSetMaster_TypeInfo);
    sub_1C94098(&EventScriptMaster_TypeInfo);
    sub_1C94098(&EventScriptReleaseMaster_TypeInfo);
    sub_1C94098(&EventServantFatigueMaster_TypeInfo);
    sub_1C94098(&EventServantMaster_TypeInfo);
    sub_1C94098(&EventServantPointRankMaster_TypeInfo);
    sub_1C94098(&EventStatusMaster_TypeInfo);
    sub_1C94098(&EventStatusQuestMaster_TypeInfo);
    sub_1C94098(&EventSuperBossMaster_TypeInfo);
    sub_1C94098(&EventTowerMaster_TypeInfo);
    sub_1C94098(&EventTowerRewardMaster_TypeInfo);
    sub_1C94098(&EventTradeGoodsMaster_TypeInfo);
    sub_1C94098(&EventTradePickupMaster_TypeInfo);
    sub_1C94098(&EventTradeStoreMaster_TypeInfo);
    sub_1C94098(&EventTutorialCondMaster_TypeInfo);
    sub_1C94098(&EventTutorialMaster_TypeInfo);
    sub_1C94098(&EventUiMaster_TypeInfo);
    sub_1C94098(&EventUiReleaseMaster_TypeInfo);
    sub_1C94098(&EventUiValueMaster_TypeInfo);
    sub_1C94098(&EventVoicePlayMaster_TypeInfo);
    sub_1C94098(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_1C94098(&ExcludeMotionMaster_TypeInfo);
    sub_1C94098(&FieldMotionMaster_TypeInfo);
    sub_1C94098(&FriendshipMaster_TypeInfo);
    sub_1C94098(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_1C94098(&FriendshipServantMaster_TypeInfo);
    sub_1C94098(&FuncDispMaster_TypeInfo);
    sub_1C94098(&FuncTypeDetailMaster_TypeInfo);
    sub_1C94098(&FunctionCategoryMaster_TypeInfo);
    sub_1C94098(&FunctionGroupMaster_TypeInfo);
    sub_1C94098(&FunctionMaster_TypeInfo);
    sub_1C94098(&GachaAdjustAddMaster_TypeInfo);
    sub_1C94098(&GachaAppendMaster_TypeInfo);
    sub_1C94098(&GachaBaseCollateralMaster_TypeInfo);
    sub_1C94098(&GachaBehaviorMaster_TypeInfo);
    sub_1C94098(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_1C94098(&GachaBonusSelectMaster_TypeInfo);
    sub_1C94098(&GachaDetailMaster_TypeInfo);
    sub_1C94098(&GachaExtraGiftMaster_TypeInfo);
    sub_1C94098(&GachaGroupMaster_TypeInfo);
    sub_1C94098(&GachaImageMaster_TypeInfo);
    sub_1C94098(&GachaMaster_TypeInfo);
    sub_1C94098(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_1C94098(&GachaPickupCollateralMaster_TypeInfo);
    sub_1C94098(&GachaReleaseMaster_TypeInfo);
    sub_1C94098(&GachaStoryAdjustMaster_TypeInfo);
    sub_1C94098(&GachaSubMaster_TypeInfo);
    sub_1C94098(&GachaTicketMaster_TypeInfo);
    sub_1C94098(&GalleryFolderReleaseMaster_TypeInfo);
    sub_1C94098(&GalleryMaster_TypeInfo);
    sub_1C94098(&GalleryResourceMaster_TypeInfo);
    sub_1C94098(&GiftAddMaster_TypeInfo);
    sub_1C94098(&GiftDetailMaster_TypeInfo);
    sub_1C94098(&GiftMaster_TypeInfo);
    sub_1C94098(&GrandGraphDetailMaster_TypeInfo);
    sub_1C94098(&GrandGraphMaster_TypeInfo);
    sub_1C94098(&GuideMaster_TypeInfo);
    sub_1C94098(&HeelPortraitMaster_TypeInfo);
    sub_1C94098(&IllustratorMaster_TypeInfo);
    sub_1C94098(&ImagePartsGroupMaster_TypeInfo);
    sub_1C94098(&IndividualityPersonalityMaster_TypeInfo);
    sub_1C94098(&IndividualityPolicyMaster_TypeInfo);
    sub_1C94098(&ItemDropEfficiencyMaster_TypeInfo);
    sub_1C94098(&ItemMaster_TypeInfo);
    sub_1C94098(&ItemSelectMaster_TypeInfo);
    sub_1C94098(&LoginQuestMaster_TypeInfo);
    sub_1C94098(&MapButtonMaster_TypeInfo);
    sub_1C94098(&MapCondMaster_TypeInfo);
    sub_1C94098(&MapGimmickLayerMaster_TypeInfo);
    sub_1C94098(&MapGimmickMaster_TypeInfo);
    sub_1C94098(&MapGimmickPathMaster_TypeInfo);
    sub_1C94098(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_1C94098(&MapGimmickReleaseMaster_TypeInfo);
    sub_1C94098(&MapLayerMaster_TypeInfo);
    sub_1C94098(&MapMaster_TypeInfo);
    sub_1C94098(&MapUpdateScheduleMaster_TypeInfo);
    sub_1C94098(&MasterIndividualitySelectMaster_TypeInfo);
    sub_1C94098(&MasterPhotoMaster_TypeInfo);
    sub_1C94098(&MaterialFolderMaster_TypeInfo);
    sub_1C94098(&MissionItemDisplayMaster_TypeInfo);
    sub_1C94098(&MissionNaviQuestMaster_TypeInfo);
    sub_1C94098(&MissionNaviTransitionMaster_TypeInfo);
    sub_1C94098(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_1C94098(&MstMissionMaster_TypeInfo);
    sub_1C94098(&MyRoomAddMaster_TypeInfo);
    sub_1C94098(&MyroomAddBgDiffMaster_TypeInfo);
    sub_1C94098(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_1C94098(&NewsMaster_TypeInfo);
    sub_1C94098(&NotEndEventMissionFixMaster_TypeInfo);
    sub_1C94098(&NpcFollowerMaster_TypeInfo);
    sub_1C94098(&NpcFollowerReleaseMaster_TypeInfo);
    sub_1C94098(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_1C94098(&NpcServantEquipMaster_TypeInfo);
    sub_1C94098(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_1C94098(&NpcServantFollowerMaster_TypeInfo);
    sub_1C94098(&OpeningMovieMaster_TypeInfo);
    sub_1C94098(&OtherUserGameMaster_TypeInfo);
    sub_1C94098(&PartialMaintenanceMaster_TypeInfo);
    sub_1C94098(&PaymentHistoryMaster_TypeInfo);
    sub_1C94098(&PaymentLimitMaster_TypeInfo);
    sub_1C94098(&PhotoFrameMaster_TypeInfo);
    sub_1C94098(&PickupUserFollowerMaster_TypeInfo);
    sub_1C94098(&PrivilegeMaster_TypeInfo);
    sub_1C94098(&QuestAddMaster_TypeInfo);
    sub_1C94098(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_1C94098(&QuestBehaviorMaster_TypeInfo);
    sub_1C94098(&QuestConsumeItemMaster_TypeInfo);
    sub_1C94098(&QuestDateRangeMaster_TypeInfo);
    sub_1C94098(&QuestExtensionMaster_TypeInfo);
    sub_1C94098(&QuestGroupMaster_TypeInfo);
    sub_1C94098(&QuestHintMaster_TypeInfo);
    sub_1C94098(&QuestHintOverwriteMaster_TypeInfo);
    sub_1C94098(&QuestMaster_TypeInfo);
    sub_1C94098(&QuestMessageMaster_TypeInfo);
    sub_1C94098(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_1C94098(&QuestPhaseDetailMaster_TypeInfo);
    sub_1C94098(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_1C94098(&QuestPhaseMaster_TypeInfo);
    sub_1C94098(&QuestPhasePresentMaster_TypeInfo);
    sub_1C94098(&QuestPickupMaster_TypeInfo);
    sub_1C94098(&QuestRacePointMaster_TypeInfo);
    sub_1C94098(&QuestRandomGroupMaster_TypeInfo);
    sub_1C94098(&QuestReleaseMaster_TypeInfo);
    sub_1C94098(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_1C94098(&QuestResetMaster_TypeInfo);
    sub_1C94098(&QuestRestrictionInfoMaster_TypeInfo);
    sub_1C94098(&QuestRestrictionMaster_TypeInfo);
    sub_1C94098(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_1C94098(&QuestScriptMaster_TypeInfo);
    sub_1C94098(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_1C94098(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_1C94098(&QuestScriptReleaseMaster_TypeInfo);
    sub_1C94098(&QuestSpotReleaseMaster_TypeInfo);
    sub_1C94098(&QuestUseItemGroupMaster_TypeInfo);
    sub_1C94098(&QuestUseItemPickupMaster_TypeInfo);
    sub_1C94098(&ReachedWaveInfoMaster_TypeInfo);
    sub_1C94098(&RecommendAdviceMessageMaster_TypeInfo);
    sub_1C94098(&RecommendSupportQuestMaster_TypeInfo);
    sub_1C94098(&RecoverMaster_TypeInfo);
    sub_1C94098(&ReprintStageMaster_TypeInfo);
    sub_1C94098(&RestrictionBaseMaster_TypeInfo);
    sub_1C94098(&RestrictionMaster_TypeInfo);
    sub_1C94098(&RestrictionMessageMaster_TypeInfo);
    sub_1C94098(&RestrictionSlotDetailMaster_TypeInfo);
    sub_1C94098(&RestrictionSlotMaster_TypeInfo);
    sub_1C94098(&RestrictionWholeMaster_TypeInfo);
    sub_1C94098(&RoadmapMaster_TypeInfo);
    sub_1C94098(&SelectBonusBaseMaster_TypeInfo);
    sub_1C94098(&SelectBonusMaster_TypeInfo);
    sub_1C94098(&ServantAddMaster_TypeInfo);
    sub_1C94098(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_1C94098(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C94098(&ServantBattlePointMaster_TypeInfo);
    sub_1C94098(&ServantCardAddMaster_TypeInfo);
    sub_1C94098(&ServantCardMaster_TypeInfo);
    sub_1C94098(&ServantChangeMaster_TypeInfo);
    sub_1C94098(&ServantClassMaster_TypeInfo);
    sub_1C94098(&ServantCollectionMaster_TypeInfo);
    sub_1C94098(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_1C94098(&ServantCommentAddMaster_TypeInfo);
    sub_1C94098(&ServantCommentMaster_TypeInfo);
    sub_1C94098(&ServantCostumeMaster_TypeInfo);
    sub_1C94098(&ServantCostumeReleaseMaster_TypeInfo);
    sub_1C94098(&ServantExceedMaster_TypeInfo);
    sub_1C94098(&ServantExpMaster_TypeInfo);
    sub_1C94098(&ServantFilterMaster_TypeInfo);
    sub_1C94098(&ServantFlagMaster_TypeInfo);
    sub_1C94098(&ServantFlagReleaseMaster_TypeInfo);
    sub_1C94098(&ServantGroupMaster_TypeInfo);
    sub_1C94098(&ServantIndividualityMaster_TypeInfo);
    sub_1C94098(&ServantLimitAddMaster_TypeInfo);
    sub_1C94098(&ServantLimitImageMaster_TypeInfo);
    sub_1C94098(&ServantLimitMaster_TypeInfo);
    sub_1C94098(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_1C94098(&ServantLvDetailMaster_TypeInfo);
    sub_1C94098(&ServantMaster_TypeInfo);
    sub_1C94098(&ServantMaterialFolderMaster_TypeInfo);
    sub_1C94098(&ServantOverwriteMaster_TypeInfo);
    sub_1C94098(&ServantPassiveSkillMaster_TypeInfo);
    sub_1C94098(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_1C94098(&ServantPhotoMaster_TypeInfo);
    sub_1C94098(&ServantProfileMaster_TypeInfo);
    sub_1C94098(&ServantProfilePushMaster_TypeInfo);
    sub_1C94098(&ServantRarityMaster_TypeInfo);
    sub_1C94098(&ServantScriptAddMaster_TypeInfo);
    sub_1C94098(&ServantScriptMaster_TypeInfo);
    sub_1C94098(&ServantScriptMultipleMaster_TypeInfo);
    sub_1C94098(&ServantSkillAddMaster_TypeInfo);
    sub_1C94098(&ServantSkillMaster_TypeInfo);
    sub_1C94098(&ServantSkillReleaseMaster_TypeInfo);
    sub_1C94098(&ServantTransformMaster_TypeInfo);
    sub_1C94098(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_1C94098(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_1C94098(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_1C94098(&ServantTreasureDvcMaster_TypeInfo);
    sub_1C94098(&ServantVoiceMaster_TypeInfo);
    sub_1C94098(&ServantVoicePatternMaster_TypeInfo);
    sub_1C94098(&ServantVoiceRelationMaster_TypeInfo);
    sub_1C94098(&SetItemMaster_TypeInfo);
    sub_1C94098(&ShopActionMaster_TypeInfo);
    sub_1C94098(&ShopDetailMaster_TypeInfo);
    sub_1C94098(&ShopGroupMaster_TypeInfo);
    sub_1C94098(&ShopMaster_TypeInfo);
    sub_1C94098(&ShopReleaseMaster_TypeInfo);
    sub_1C94098(&ShopResetMaster_TypeInfo);
    sub_1C94098(&ShopScriptMaster_TypeInfo);
    sub_1C94098(&SkillAddMaster_TypeInfo);
    sub_1C94098(&SkillDetailMaster_TypeInfo);
    sub_1C94098(&SkillGroupMaster_TypeInfo);
    sub_1C94098(&SkillGroupOverwriteMaster_TypeInfo);
    sub_1C94098(&SkillIndividualityMaster_TypeInfo);
    sub_1C94098(&SkillLvMaster_TypeInfo);
    sub_1C94098(&SkillMaster_TypeInfo);
    sub_1C94098(&SpotAddMaster_TypeInfo);
    sub_1C94098(&SpotImageMaster_TypeInfo);
    sub_1C94098(&SpotLayerMaster_TypeInfo);
    sub_1C94098(&SpotMaster_TypeInfo);
    sub_1C94098(&SpotPathMaster_TypeInfo);
    sub_1C94098(&SpotRoadMaster_TypeInfo);
    sub_1C94098(&StaffPhotoCostumeMaster_TypeInfo);
    sub_1C94098(&StaffPhotoMaster_TypeInfo);
    sub_1C94098(&StageMaster_TypeInfo);
    sub_1C94098(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_1C94098(&StoneShopMaster_TypeInfo);
    sub_1C94098(&SubEquipMaster_TypeInfo);
    sub_1C94098(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_1C94098(&SvtCoinMaster_TypeInfo);
    sub_1C94098(&SvtMaterialTdMaster_TypeInfo);
    sub_1C94098(&SvtMultiPortraitMaster_TypeInfo);
    sub_1C94098(&TblFriendMaster_TypeInfo);
    sub_1C94098(&TblUserMaster_TypeInfo);
    sub_1C94098(&TelopMaster_TypeInfo);
    sub_1C94098(&TerminalOverwriteMaster_TypeInfo);
    sub_1C94098(&TipsBattleMaster_TypeInfo);
    sub_1C94098(&TotalBoxGachaMaster_TypeInfo);
    sub_1C94098(&TotalEventPointMaster_TypeInfo);
    sub_1C94098(&TotalEventRaceMaster_TypeInfo);
    sub_1C94098(&TotalEventRaidMaster_TypeInfo);
    sub_1C94098(&TotalLoginMaster_TypeInfo);
    sub_1C94098(&TreasureBoxGiftMaster_TypeInfo);
    sub_1C94098(&TreasureBoxMaster_TypeInfo);
    sub_1C94098(&TreasureBoxTalkMaster_TypeInfo);
    sub_1C94098(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_1C94098(&TreasureDvcDetailMaster_TypeInfo);
    sub_1C94098(&TreasureDvcLvMaster_TypeInfo);
    sub_1C94098(&TreasureDvcMaster_TypeInfo);
    sub_1C94098(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_1C94098(&UserAccessaryMaster_TypeInfo);
    sub_1C94098(&UserAccountLinkageMaster_TypeInfo);
    sub_1C94098(&UserBlacklistMaster_TypeInfo);
    sub_1C94098(&UserBoxGachaMaster_TypeInfo);
    sub_1C94098(&UserClassBoardSquareMaster_TypeInfo);
    sub_1C94098(&UserClassStatisticsMaster_TypeInfo);
    sub_1C94098(&UserCoinRoomMaster_TypeInfo);
    sub_1C94098(&UserCombineExpMaster_TypeInfo);
    sub_1C94098(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_1C94098(&UserCommandCodeMaster_TypeInfo);
    sub_1C94098(&UserContinueMaster_TypeInfo);
    sub_1C94098(&UserDeckMaster_TypeInfo);
    sub_1C94098(&UserDeleteReservationMaster_TypeInfo);
    sub_1C94098(&UserEquipMaster_TypeInfo);
    sub_1C94098(&UserEventAlloutBattleMaster_TypeInfo);
    sub_1C94098(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_1C94098(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_1C94098(&UserEventDataLostMaster_TypeInfo);
    sub_1C94098(&UserEventDeckMaster_TypeInfo);
    sub_1C94098(&UserEventDiggingMaster_TypeInfo);
    sub_1C94098(&UserEventExpeditionMaster_TypeInfo);
    sub_1C94098(&UserEventFortificationMaster_TypeInfo);
    sub_1C94098(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_1C94098(&UserEventMapMaster_TypeInfo);
    sub_1C94098(&UserEventMaster_TypeInfo);
    sub_1C94098(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_1C94098(&UserEventMissionFixMaster_TypeInfo);
    sub_1C94098(&UserEventMissionMaster_TypeInfo);
    sub_1C94098(&UserEventPointMaster_TypeInfo);
    sub_1C94098(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_1C94098(&UserEventRaceMaster_TypeInfo);
    sub_1C94098(&UserEventRaidMaster_TypeInfo);
    sub_1C94098(&UserEventRandomMissionMaster_TypeInfo);
    sub_1C94098(&UserEventServantFatigueMaster_TypeInfo);
    sub_1C94098(&UserEventServantPointMaster_TypeInfo);
    sub_1C94098(&UserEventSpotMaster_TypeInfo);
    sub_1C94098(&UserEventTradeMaster_TypeInfo);
    sub_1C94098(&UserExchangeSvtMaster_TypeInfo);
    sub_1C94098(&UserExpMaster_TypeInfo);
    sub_1C94098(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_1C94098(&UserFollowMaster_TypeInfo);
    sub_1C94098(&UserFollowerMaster_TypeInfo);
    sub_1C94098(&UserFormationMaster_TypeInfo);
    sub_1C94098(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_1C94098(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_1C94098(&UserGachaDrawLogMaster_TypeInfo);
    sub_1C94098(&UserGachaExtraCountMaster_TypeInfo);
    sub_1C94098(&UserGachaHistoryMaster_TypeInfo);
    sub_1C94098(&UserGachaMaster_TypeInfo);
    sub_1C94098(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_1C94098(&UserGameCommonMaster_TypeInfo);
    sub_1C94098(&UserGameMaster_TypeInfo);
    sub_1C94098(&UserHeelPortraitMaster_TypeInfo);
    sub_1C94098(&UserImagePartsGroupMaster_TypeInfo);
    sub_1C94098(&UserInterruptionQuestMaster_TypeInfo);
    sub_1C94098(&UserItemMaster_TypeInfo);
    sub_1C94098(&UserLoginMaster_TypeInfo);
    sub_1C94098(&UserMaster_TypeInfo);
    sub_1C94098(&UserNpcSvtRecordMaster_TypeInfo);
    sub_1C94098(&UserPaymentLimitMaster_TypeInfo);
    sub_1C94098(&UserPresentBoxMaster_TypeInfo);
    sub_1C94098(&UserPresentHistoryMaster_TypeInfo);
    sub_1C94098(&UserPrivilegeMaster_TypeInfo);
    sub_1C94098(&UserQuestInfoMaster_TypeInfo);
    sub_1C94098(&UserQuestMaster_TypeInfo);
    sub_1C94098(&UserQuestRecordMaster_TypeInfo);
    sub_1C94098(&UserQuestRouteMaster_TypeInfo);
    sub_1C94098(&UserRecommendFollowerMaster_TypeInfo);
    sub_1C94098(&UserRecommendSupportMaster_TypeInfo);
    sub_1C94098(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_1C94098(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_1C94098(&UserServantCollectionMaster_TypeInfo);
    sub_1C94098(&UserServantCommandCardMaster_TypeInfo);
    sub_1C94098(&UserServantCommandCodeMaster_TypeInfo);
    sub_1C94098(&UserServantGrandMaster_TypeInfo);
    sub_1C94098(&UserServantLeaderMaster_TypeInfo);
    sub_1C94098(&UserServantMaster_TypeInfo);
    sub_1C94098(&UserServantStorageMaster_TypeInfo);
    sub_1C94098(&UserServantVoicePlayedMaster_TypeInfo);
    sub_1C94098(&UserShopMaster_TypeInfo);
    sub_1C94098(&UserSubEquipMaster_TypeInfo);
    sub_1C94098(&UserSuperBossMaster_TypeInfo);
    sub_1C94098(&UserSupportDeckMaster_TypeInfo);
    sub_1C94098(&UserSvtCoinMaster_TypeInfo);
    sub_1C94098(&UserSvtFirstGetTimeMaster_TypeInfo);
    sub_1C94098(&ViewEnemyMaster_TypeInfo);
    sub_1C94098(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_1C94098(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_1C94098(&ViewQuestInfoMaster_TypeInfo);
    sub_1C94098(&ViewWaveEnemyMaster_TypeInfo);
    sub_1C94098(&VoiceClosedMessageMaster_TypeInfo);
    sub_1C94098(&VoiceCondMaster_TypeInfo);
    sub_1C94098(&VoiceMaster_TypeInfo);
    sub_1C94098(&VoiceMaterialCondMaster_TypeInfo);
    sub_1C94098(&VoicePlayCondMaster_TypeInfo);
    sub_1C94098(&VoicePlayGroupMaster_TypeInfo);
    sub_1C94098(&VoiceReleaseMaster_TypeInfo);
    sub_1C94098(&WarAddMaster_TypeInfo);
    sub_1C94098(&WarBoardAIMaster_TypeInfo);
    sub_1C94098(&WarBoardActionPointClassMaster_TypeInfo);
    sub_1C94098(&WarBoardActionPointMaster_TypeInfo);
    sub_1C94098(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_1C94098(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_1C94098(&WarBoardActionTrendMaster_TypeInfo);
    sub_1C94098(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_1C94098(&WarBoardDataMaster_TypeInfo);
    sub_1C94098(&WarBoardEffectMaster_TypeInfo);
    sub_1C94098(&WarBoardEventMaster_TypeInfo);
    sub_1C94098(&WarBoardEventScriptMaster_TypeInfo);
    sub_1C94098(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_1C94098(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_1C94098(&WarBoardItemMaster_TypeInfo);
    sub_1C94098(&WarBoardMaster_TypeInfo);
    sub_1C94098(&WarBoardMessageMaster_TypeInfo);
    sub_1C94098(&WarBoardMessageScriptMaster_TypeInfo);
    sub_1C94098(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_1C94098(&WarBoardPartySkillMaster_TypeInfo);
    sub_1C94098(&WarBoardQuestMaster_TypeInfo);
    sub_1C94098(&WarBoardRatingBaseMaster_TypeInfo);
    sub_1C94098(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_1C94098(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_1C94098(&WarBoardReinforcementsMaster_TypeInfo);
    sub_1C94098(&WarBoardRoadMaster_TypeInfo);
    sub_1C94098(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_1C94098(&WarBoardSquareMaster_TypeInfo);
    sub_1C94098(&WarBoardStageBossMaster_TypeInfo);
    sub_1C94098(&WarBoardStageDetailMaster_TypeInfo);
    sub_1C94098(&WarBoardStageLayoutMaster_TypeInfo);
    sub_1C94098(&WarBoardStageMaster_TypeInfo);
    sub_1C94098(&WarBoardStageNpcMaster_TypeInfo);
    sub_1C94098(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_1C94098(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_1C94098(&WarBoardStageWallMaster_TypeInfo);
    sub_1C94098(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_1C94098(&WarBoardTreasureMaster_TypeInfo);
    sub_1C94098(&WarGroupIgnoreMaster_TypeInfo);
    sub_1C94098(&WarGroupMaster_TypeInfo);
    sub_1C94098(&WarMaster_TypeInfo);
    sub_1C94098(&WarMessageMaster_TypeInfo);
    sub_1C94098(&WarQuestSelectionMaster_TypeInfo);
    sub_1C94098(&WarReleaseMaster_TypeInfo);
    byte_4D2C30B = 1;
  }
  v1 = (DataMasterBase_array *)sub_1C94140(DataMasterBase___TypeInfo, 552);
  v2 = (ServantMaster_o *)sub_1C942E4(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0);
  if ( !v1 )
    sub_1C942F0(v3, v4);
  if ( v2 )
  {
    v3 = sub_1C941D4(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  p_max_length = &v1->max_length;
  if ( !LODWORD(v1->max_length) )
    goto LABEL_1661;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v1->m_Items, (int32_t)v2, v5, v6, v7, v8, v9, v10);
  v12 = (ServantClassMaster_o *)sub_1C942E4(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v12, 0);
  if ( v12 )
  {
    v3 = sub_1C941D4(v12, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 1u )
    goto LABEL_1661;
  v1->m_Items[1] = (DataMasterBase_o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[1], (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (ServantCommentMaster_o *)sub_1C942E4(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v19, 0);
  if ( v19 )
  {
    v3 = sub_1C941D4(v19, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_1661;
  v1->m_Items[2] = (DataMasterBase_o *)v19;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[2], (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (ServantProfileMaster_o *)sub_1C942E4(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v26, 0);
  if ( v26 )
  {
    v3 = sub_1C941D4(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 3u )
    goto LABEL_1661;
  v1->m_Items[3] = (DataMasterBase_o *)v26;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[3], (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (WarMaster_o *)sub_1C942E4(WarMaster_TypeInfo);
  WarMaster___ctor(v33, 0);
  if ( v33 )
  {
    v3 = sub_1C941D4(v33, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_1661;
  v1->m_Items[4] = (DataMasterBase_o *)v33;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[4], (int32_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (UserMaster_o *)sub_1C942E4(UserMaster_TypeInfo);
  UserMaster___ctor(v40, 0);
  if ( v40 )
  {
    v3 = sub_1C941D4(v40, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_1661;
  v1->m_Items[5] = (DataMasterBase_o *)v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[5], (int32_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (UserGameMaster_o *)sub_1C942E4(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v47, 0);
  if ( v47 )
  {
    v3 = sub_1C941D4(v47, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_1661;
  v1->m_Items[6] = (DataMasterBase_o *)v47;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[6], (int32_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (TblUserMaster_o *)sub_1C942E4(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v54, 0);
  if ( v54 )
  {
    v3 = sub_1C941D4(v54, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 7u )
    goto LABEL_1661;
  v1->m_Items[7] = (DataMasterBase_o *)v54;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[7], (int32_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = (UserItemMaster_o *)sub_1C942E4(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v61, 0);
  if ( v61 )
  {
    v3 = sub_1C941D4(v61, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_1661;
  v1->m_Items[8] = (DataMasterBase_o *)v61;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[8], (int32_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = (UserServantMaster_o *)sub_1C942E4(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v68, 0);
  if ( v68 )
  {
    v3 = sub_1C941D4(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_1661;
  v1->m_Items[9] = (DataMasterBase_o *)v68;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[9], (int32_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = (UserServantStorageMaster_o *)sub_1C942E4(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v75, 0);
  if ( v75 )
  {
    v3 = sub_1C941D4(v75, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_1661;
  v1->m_Items[10] = (DataMasterBase_o *)v75;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[10], (int32_t)v75, v76, v77, v78, v79, v80, v81);
  v82 = (UserAccessaryMaster_o *)sub_1C942E4(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v82, 0);
  if ( v82 )
  {
    v3 = sub_1C941D4(v82, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_1661;
  v1->m_Items[11] = (DataMasterBase_o *)v82;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[11], (int32_t)v82, v83, v84, v85, v86, v87, v88);
  v89 = (UserQuestMaster_o *)sub_1C942E4(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v89, 0);
  if ( v89 )
  {
    v3 = sub_1C941D4(v89, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_1661;
  v1->m_Items[12] = (DataMasterBase_o *)v89;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[12], (int32_t)v89, v90, v91, v92, v93, v94, v95);
  v96 = (BattleMaster_o *)sub_1C942E4(BattleMaster_TypeInfo);
  BattleMaster___ctor(v96, 0);
  if ( v96 )
  {
    v3 = sub_1C941D4(v96, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_1661;
  v1->m_Items[13] = (DataMasterBase_o *)v96;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[13], (int32_t)v96, v97, v98, v99, v100, v101, v102);
  v103 = (OtherUserGameMaster_o *)sub_1C942E4(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v103, 0);
  if ( v103 )
  {
    v3 = sub_1C941D4(v103, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_1661;
  v1->m_Items[14] = (DataMasterBase_o *)v103;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[14], (int32_t)v103, v104, v105, v106, v107, v108, v109);
  v110 = (TblFriendMaster_o *)sub_1C942E4(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v110, 0);
  if ( v110 )
  {
    v3 = sub_1C941D4(v110, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFu )
    goto LABEL_1661;
  v1->m_Items[15] = (DataMasterBase_o *)v110;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[15], (int32_t)v110, v111, v112, v113, v114, v115, v116);
  v117 = (AreaMaster_o *)sub_1C942E4(AreaMaster_TypeInfo);
  AreaMaster___ctor(v117, 0);
  if ( v117 )
  {
    v3 = sub_1C941D4(v117, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_1661;
  v1->m_Items[16] = (DataMasterBase_o *)v117;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[16], (int32_t)v117, v118, v119, v120, v121, v122, v123);
  v124 = (ServantCardMaster_o *)sub_1C942E4(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v124, 0);
  if ( v124 )
  {
    v3 = sub_1C941D4(v124, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_1661;
  v1->m_Items[17] = (DataMasterBase_o *)v124;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[17], (int32_t)v124, v125, v126, v127, v128, v129, v130);
  v131 = (EventMaster_o *)sub_1C942E4(EventMaster_TypeInfo);
  EventMaster___ctor(v131, 0);
  if ( v131 )
  {
    v3 = sub_1C941D4(v131, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_1661;
  v1->m_Items[18] = (DataMasterBase_o *)v131;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[18], (int32_t)v131, v132, v133, v134, v135, v136, v137);
  v138 = (ItemMaster_o *)sub_1C942E4(ItemMaster_TypeInfo);
  ItemMaster___ctor(v138, 0);
  if ( v138 )
  {
    v3 = sub_1C941D4(v138, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_1661;
  v1->m_Items[19] = (DataMasterBase_o *)v138;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[19], (int32_t)v138, v139, v140, v141, v142, v143, v144);
  v145 = (QuestMaster_o *)sub_1C942E4(QuestMaster_TypeInfo);
  QuestMaster___ctor(v145, 0);
  if ( v145 )
  {
    v3 = sub_1C941D4(v145, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
    goto LABEL_1661;
  v1->m_Items[20] = (DataMasterBase_o *)v145;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[20], (int32_t)v145, v146, v147, v148, v149, v150, v151);
  v152 = (QuestAddMaster_o *)sub_1C942E4(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v152, 0);
  if ( v152 )
  {
    v3 = sub_1C941D4(v152, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15u )
    goto LABEL_1661;
  v1->m_Items[21] = (DataMasterBase_o *)v152;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[21], (int32_t)v152, v153, v154, v155, v156, v157, v158);
  v159 = (QuestReleaseMaster_o *)sub_1C942E4(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v159, 0);
  if ( v159 )
  {
    v3 = sub_1C941D4(v159, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16u )
    goto LABEL_1661;
  v1->m_Items[22] = (DataMasterBase_o *)v159;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[22], (int32_t)v159, v160, v161, v162, v163, v164, v165);
  v166 = (QuestDateRangeMaster_o *)sub_1C942E4(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v166, 0);
  if ( v166 )
  {
    v3 = sub_1C941D4(v166, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17u )
    goto LABEL_1661;
  v1->m_Items[23] = (DataMasterBase_o *)v166;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[23], (int32_t)v166, v167, v168, v169, v170, v171, v172);
  v173 = (QuestPhaseMaster_o *)sub_1C942E4(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v173, 0);
  if ( v173 )
  {
    v3 = sub_1C941D4(v173, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18u )
    goto LABEL_1661;
  v1->m_Items[24] = (DataMasterBase_o *)v173;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[24], (int32_t)v173, v174, v175, v176, v177, v178, v179);
  v180 = (QuestPhaseDetailMaster_o *)sub_1C942E4(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v180, 0);
  if ( v180 )
  {
    v3 = sub_1C941D4(v180, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19u )
    goto LABEL_1661;
  v1->m_Items[25] = (DataMasterBase_o *)v180;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[25], (int32_t)v180, v181, v182, v183, v184, v185, v186);
  v187 = (QuestGroupMaster_o *)sub_1C942E4(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v187, 0);
  if ( v187 )
  {
    v3 = sub_1C941D4(v187, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Au )
    goto LABEL_1661;
  v1->m_Items[26] = (DataMasterBase_o *)v187;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[26], (int32_t)v187, v188, v189, v190, v191, v192, v193);
  v194 = (QuestRandomGroupMaster_o *)sub_1C942E4(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v194, 0);
  if ( v194 )
  {
    v3 = sub_1C941D4(v194, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Bu )
    goto LABEL_1661;
  v1->m_Items[27] = (DataMasterBase_o *)v194;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[27], (int32_t)v194, v195, v196, v197, v198, v199, v200);
  v201 = (QuestConsumeItemMaster_o *)sub_1C942E4(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v201, 0);
  if ( v201 )
  {
    v3 = sub_1C941D4(v201, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Cu )
    goto LABEL_1661;
  v1->m_Items[28] = (DataMasterBase_o *)v201;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[28], (int32_t)v201, v202, v203, v204, v205, v206, v207);
  v208 = (QuestMessageMaster_o *)sub_1C942E4(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v208, 0);
  if ( v208 )
  {
    v3 = sub_1C941D4(v208, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Du )
    goto LABEL_1661;
  v1->m_Items[29] = (DataMasterBase_o *)v208;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[29], (int32_t)v208, v209, v210, v211, v212, v213, v214);
  v215 = (UserQuestInfoMaster_o *)sub_1C942E4(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v215, 0);
  if ( v215 )
  {
    v3 = sub_1C941D4(v215, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Eu )
    goto LABEL_1661;
  v1->m_Items[30] = (DataMasterBase_o *)v215;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[30], (int32_t)v215, v216, v217, v218, v219, v220, v221);
  v222 = (UserQuestRecordMaster_o *)sub_1C942E4(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v222, 0);
  if ( v222 )
  {
    v3 = sub_1C941D4(v222, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Fu )
    goto LABEL_1661;
  v1->m_Items[31] = (DataMasterBase_o *)v222;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[31], (int32_t)v222, v223, v224, v225, v226, v227, v228);
  v229 = (ViewQuestInfoMaster_o *)sub_1C942E4(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v229, 0);
  if ( v229 )
  {
    v3 = sub_1C941D4(v229, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20u )
    goto LABEL_1661;
  v1->m_Items[32] = (DataMasterBase_o *)v229;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[32], (int32_t)v229, v230, v231, v232, v233, v234, v235);
  v236 = (ViewEnemyMaster_o *)sub_1C942E4(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v236, 0);
  if ( v236 )
  {
    v3 = sub_1C941D4(v236, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21u )
    goto LABEL_1661;
  v1->m_Items[33] = (DataMasterBase_o *)v236;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[33], (int32_t)v236, v237, v238, v239, v240, v241, v242);
  v243 = (ViewQuestEnemyInfoMaster_o *)sub_1C942E4(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v243, 0);
  if ( v243 )
  {
    v3 = sub_1C941D4(v243, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x22u )
    goto LABEL_1661;
  v1->m_Items[34] = (DataMasterBase_o *)v243;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[34], (int32_t)v243, v244, v245, v246, v247, v248, v249);
  v250 = (BlankEarthSpotMaster_o *)sub_1C942E4(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v250, 0);
  if ( v250 )
  {
    v3 = sub_1C941D4(v250, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x23u )
    goto LABEL_1661;
  v1->m_Items[35] = (DataMasterBase_o *)v250;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[35], (int32_t)v250, v251, v252, v253, v254, v255, v256);
  v257 = (BlankEarthSpotAddMaster_o *)sub_1C942E4(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v257, 0);
  if ( v257 )
  {
    v3 = sub_1C941D4(v257, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x24u )
    goto LABEL_1661;
  v1->m_Items[36] = (DataMasterBase_o *)v257;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[36], (int32_t)v257, v258, v259, v260, v261, v262, v263);
  v264 = (SpotMaster_o *)sub_1C942E4(SpotMaster_TypeInfo);
  SpotMaster___ctor(v264, 0);
  if ( v264 )
  {
    v3 = sub_1C941D4(v264, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x25u )
    goto LABEL_1661;
  v1->m_Items[37] = (DataMasterBase_o *)v264;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[37], (int32_t)v264, v265, v266, v267, v268, v269, v270);
  v271 = (SpotImageMaster_o *)sub_1C942E4(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v271, 0);
  if ( v271 )
  {
    v3 = sub_1C941D4(v271, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x26u )
    goto LABEL_1661;
  v1->m_Items[38] = (DataMasterBase_o *)v271;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[38], (int32_t)v271, v272, v273, v274, v275, v276, v277);
  v278 = (SpotRoadMaster_o *)sub_1C942E4(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v278, 0);
  if ( v278 )
  {
    v3 = sub_1C941D4(v278, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x27u )
    goto LABEL_1661;
  v1->m_Items[39] = (DataMasterBase_o *)v278;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[39], (int32_t)v278, v279, v280, v281, v282, v283, v284);
  v285 = (SpotPathMaster_o *)sub_1C942E4(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v285, 0);
  if ( v285 )
  {
    v3 = sub_1C941D4(v285, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x28u )
    goto LABEL_1661;
  v1->m_Items[40] = (DataMasterBase_o *)v285;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[40], (int32_t)v285, v286, v287, v288, v289, v290, v291);
  v292 = (SpotAddMaster_o *)sub_1C942E4(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v292, 0);
  if ( v292 )
  {
    v3 = sub_1C941D4(v292, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x29u )
    goto LABEL_1661;
  v1->m_Items[41] = (DataMasterBase_o *)v292;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[41], (int32_t)v292, v293, v294, v295, v296, v297, v298);
  v299 = (MapGimmickMaster_o *)sub_1C942E4(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v299, 0);
  if ( v299 )
  {
    v3 = sub_1C941D4(v299, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Au )
    goto LABEL_1661;
  v1->m_Items[42] = (DataMasterBase_o *)v299;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[42], (int32_t)v299, v300, v301, v302, v303, v304, v305);
  v306 = (GiftMaster_o *)sub_1C942E4(GiftMaster_TypeInfo);
  GiftMaster___ctor(v306, 0);
  if ( v306 )
  {
    v3 = sub_1C941D4(v306, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Bu )
    goto LABEL_1661;
  v1->m_Items[43] = (DataMasterBase_o *)v306;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[43], (int32_t)v306, v307, v308, v309, v310, v311, v312);
  v313 = (GiftAddMaster_o *)sub_1C942E4(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v313, 0);
  if ( v313 )
  {
    v3 = sub_1C941D4(v313, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Cu )
    goto LABEL_1661;
  v1->m_Items[44] = (DataMasterBase_o *)v313;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[44], (int32_t)v313, v314, v315, v316, v317, v318, v319);
  v320 = (ShopMaster_o *)sub_1C942E4(ShopMaster_TypeInfo);
  ShopMaster___ctor(v320, 0);
  if ( v320 )
  {
    v3 = sub_1C941D4(v320, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Du )
    goto LABEL_1661;
  v1->m_Items[45] = (DataMasterBase_o *)v320;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[45], (int32_t)v320, v321, v322, v323, v324, v325, v326);
  v327 = (StoneShopMaster_o *)sub_1C942E4(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v327, 0);
  if ( v327 )
  {
    v3 = sub_1C941D4(v327, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Eu )
    goto LABEL_1661;
  v1->m_Items[46] = (DataMasterBase_o *)v327;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[46], (int32_t)v327, v328, v329, v330, v331, v332, v333);
  v334 = (BankShopMaster_o *)sub_1C942E4(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v334, 0);
  if ( v334 )
  {
    v3 = sub_1C941D4(v334, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Fu )
    goto LABEL_1661;
  v1->m_Items[47] = (DataMasterBase_o *)v334;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[47], (int32_t)v334, v335, v336, v337, v338, v339, v340);
  v341 = (ShopScriptMaster_o *)sub_1C942E4(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v341, 0);
  if ( v341 )
  {
    v3 = sub_1C941D4(v341, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x30u )
    goto LABEL_1661;
  v1->m_Items[48] = (DataMasterBase_o *)v341;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[48], (int32_t)v341, v342, v343, v344, v345, v346, v347);
  v348 = (StageMaster_o *)sub_1C942E4(StageMaster_TypeInfo);
  StageMaster___ctor(v348, 0);
  if ( v348 )
  {
    v3 = sub_1C941D4(v348, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x31u )
    goto LABEL_1661;
  v1->m_Items[49] = (DataMasterBase_o *)v348;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[49], (int32_t)v348, v349, v350, v351, v352, v353, v354);
  v355 = (ServantGroupMaster_o *)sub_1C942E4(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v355, 0);
  if ( v355 )
  {
    v3 = sub_1C941D4(v355, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x32u )
    goto LABEL_1661;
  v1->m_Items[50] = (DataMasterBase_o *)v355;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[50], (int32_t)v355, v356, v357, v358, v359, v360, v361);
  v362 = (ServantLimitMaster_o *)sub_1C942E4(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v362, 0);
  if ( v362 )
  {
    v3 = sub_1C941D4(v362, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x33u )
    goto LABEL_1661;
  v1->m_Items[51] = (DataMasterBase_o *)v362;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[51], (int32_t)v362, v363, v364, v365, v366, v367, v368);
  v369 = (ServantLimitAddMaster_o *)sub_1C942E4(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v369, 0);
  if ( v369 )
  {
    v3 = sub_1C941D4(v369, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x34u )
    goto LABEL_1661;
  v1->m_Items[52] = (DataMasterBase_o *)v369;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[52], (int32_t)v369, v370, v371, v372, v373, v374, v375);
  v376 = (ServantSkillMaster_o *)sub_1C942E4(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v376, 0);
  if ( v376 )
  {
    v3 = sub_1C941D4(v376, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x35u )
    goto LABEL_1661;
  v1->m_Items[53] = (DataMasterBase_o *)v376;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[53], (int32_t)v376, v377, v378, v379, v380, v381, v382);
  v383 = (ServantPassiveSkillMaster_o *)sub_1C942E4(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v383, 0);
  if ( v383 )
  {
    v3 = sub_1C941D4(v383, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x36u )
    goto LABEL_1661;
  v1->m_Items[54] = (DataMasterBase_o *)v383;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[54], (int32_t)v383, v384, v385, v386, v387, v388, v389);
  v390 = (BgmMaster_o *)sub_1C942E4(BgmMaster_TypeInfo);
  BgmMaster___ctor(v390, 0);
  if ( v390 )
  {
    v3 = sub_1C941D4(v390, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x37u )
    goto LABEL_1661;
  v1->m_Items[55] = (DataMasterBase_o *)v390;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[55], (int32_t)v390, v391, v392, v393, v394, v395, v396);
  v397 = (ServantScriptMaster_o *)sub_1C942E4(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v397, 0);
  if ( v397 )
  {
    v3 = sub_1C941D4(v397, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x38u )
    goto LABEL_1661;
  v1->m_Items[56] = (DataMasterBase_o *)v397;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[56], (int32_t)v397, v398, v399, v400, v401, v402, v403);
  v404 = (NewsMaster_o *)sub_1C942E4(NewsMaster_TypeInfo);
  NewsMaster___ctor(v404, 0);
  if ( v404 )
  {
    v3 = sub_1C941D4(v404, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x39u )
    goto LABEL_1661;
  v1->m_Items[57] = (DataMasterBase_o *)v404;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[57], (int32_t)v404, v405, v406, v407, v408, v409, v410);
  v411 = (TelopMaster_o *)sub_1C942E4(TelopMaster_TypeInfo);
  TelopMaster___ctor(v411, 0);
  if ( v411 )
  {
    v3 = sub_1C941D4(v411, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Au )
    goto LABEL_1661;
  v1->m_Items[58] = (DataMasterBase_o *)v411;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[58], (int32_t)v411, v412, v413, v414, v415, v416, v417);
  v418 = (UserExpMaster_o *)sub_1C942E4(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v418, 0);
  if ( v418 )
  {
    v3 = sub_1C941D4(v418, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Bu )
    goto LABEL_1661;
  v1->m_Items[59] = (DataMasterBase_o *)v418;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[59], (int32_t)v418, v419, v420, v421, v422, v423, v424);
  v425 = (TreasureDvcMaster_o *)sub_1C942E4(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v425, 0);
  if ( v425 )
  {
    v3 = sub_1C941D4(v425, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Cu )
    goto LABEL_1661;
  v1->m_Items[60] = (DataMasterBase_o *)v425;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[60], (int32_t)v425, v426, v427, v428, v429, v430, v431);
  v432 = (ServantTreasureDvcMaster_o *)sub_1C942E4(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v432, 0);
  if ( v432 )
  {
    v3 = sub_1C941D4(v432, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Du )
    goto LABEL_1661;
  v1->m_Items[61] = (DataMasterBase_o *)v432;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[61], (int32_t)v432, v433, v434, v435, v436, v437, v438);
  v439 = (SkillMaster_o *)sub_1C942E4(SkillMaster_TypeInfo);
  SkillMaster___ctor(v439, 0);
  if ( v439 )
  {
    v3 = sub_1C941D4(v439, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Eu )
    goto LABEL_1661;
  v1->m_Items[62] = (DataMasterBase_o *)v439;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[62], (int32_t)v439, v440, v441, v442, v443, v444, v445);
  v446 = (SkillLvMaster_o *)sub_1C942E4(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v446, 0);
  if ( v446 )
  {
    v3 = sub_1C941D4(v446, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Fu )
    goto LABEL_1661;
  v1->m_Items[63] = (DataMasterBase_o *)v446;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[63], (int32_t)v446, v447, v448, v449, v450, v451, v452);
  v453 = (SkillDetailMaster_o *)sub_1C942E4(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v453, 0);
  if ( v453 )
  {
    v3 = sub_1C941D4(v453, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x40u )
    goto LABEL_1661;
  v1->m_Items[64] = (DataMasterBase_o *)v453;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[64], (int32_t)v453, v454, v455, v456, v457, v458, v459);
  v460 = (CommandSpellMaster_o *)sub_1C942E4(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v460, 0);
  if ( v460 )
  {
    v3 = sub_1C941D4(v460, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x41u )
    goto LABEL_1661;
  v1->m_Items[65] = (DataMasterBase_o *)v460;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[65], (int32_t)v460, v461, v462, v463, v464, v465, v466);
  v467 = (EquipMaster_o *)sub_1C942E4(EquipMaster_TypeInfo);
  EquipMaster___ctor(v467, 0);
  if ( v467 )
  {
    v3 = sub_1C941D4(v467, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x42u )
    goto LABEL_1661;
  v1->m_Items[66] = (DataMasterBase_o *)v467;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[66], (int32_t)v467, v468, v469, v470, v471, v472, v473);
  v474 = (EquipExpMaster_o *)sub_1C942E4(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v474, 0);
  if ( v474 )
  {
    v3 = sub_1C941D4(v474, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x43u )
    goto LABEL_1661;
  v1->m_Items[67] = (DataMasterBase_o *)v474;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[67], (int32_t)v474, v475, v476, v477, v478, v479, v480);
  v481 = (EquipSkillMaster_o *)sub_1C942E4(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v481, 0);
  if ( v481 )
  {
    v3 = sub_1C941D4(v481, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x44u )
    goto LABEL_1661;
  v1->m_Items[68] = (DataMasterBase_o *)v481;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[68], (int32_t)v481, v482, v483, v484, v485, v486, v487);
  v488 = (SubEquipMaster_o *)sub_1C942E4(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v488, 0);
  if ( v488 )
  {
    v3 = sub_1C941D4(v488, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x45u )
    goto LABEL_1661;
  v1->m_Items[69] = (DataMasterBase_o *)v488;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[69], (int32_t)v488, v489, v490, v491, v492, v493, v494);
  v495 = (AccessaryMaster_o *)sub_1C942E4(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v495, 0);
  if ( v495 )
  {
    v3 = sub_1C941D4(v495, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x46u )
    goto LABEL_1661;
  v1->m_Items[70] = (DataMasterBase_o *)v495;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[70], (int32_t)v495, v496, v497, v498, v499, v500, v501);
  v502 = (UserPresentBoxMaster_o *)sub_1C942E4(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v502, 0);
  if ( v502 )
  {
    v3 = sub_1C941D4(v502, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x47u )
    goto LABEL_1661;
  v1->m_Items[71] = (DataMasterBase_o *)v502;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[71], (int32_t)v502, v503, v504, v505, v506, v507, v508);
  v509 = (UserDeckMaster_o *)sub_1C942E4(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v509, 0);
  if ( v509 )
  {
    v3 = sub_1C941D4(v509, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x48u )
    goto LABEL_1661;
  v1->m_Items[72] = (DataMasterBase_o *)v509;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[72], (int32_t)v509, v510, v511, v512, v513, v514, v515);
  v516 = (UserSubEquipMaster_o *)sub_1C942E4(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v516, 0);
  if ( v516 )
  {
    v3 = sub_1C941D4(v516, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x49u )
    goto LABEL_1661;
  v1->m_Items[73] = (DataMasterBase_o *)v516;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[73], (int32_t)v516, v517, v518, v519, v520, v521, v522);
  v523 = (GachaMaster_o *)sub_1C942E4(GachaMaster_TypeInfo);
  GachaMaster___ctor(v523, 0);
  if ( v523 )
  {
    v3 = sub_1C941D4(v523, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Au )
    goto LABEL_1661;
  v1->m_Items[74] = (DataMasterBase_o *)v523;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[74], (int32_t)v523, v524, v525, v526, v527, v528, v529);
  v530 = (GachaImageMaster_o *)sub_1C942E4(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v530, 0);
  if ( v530 )
  {
    v3 = sub_1C941D4(v530, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Bu )
    goto LABEL_1661;
  v1->m_Items[75] = (DataMasterBase_o *)v530;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[75], (int32_t)v530, v531, v532, v533, v534, v535, v536);
  v537 = (UserGachaMaster_o *)sub_1C942E4(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v537, 0);
  if ( v537 )
  {
    v3 = sub_1C941D4(v537, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Cu )
    goto LABEL_1661;
  v1->m_Items[76] = (DataMasterBase_o *)v537;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[76], (int32_t)v537, v538, v539, v540, v541, v542, v543);
  v544 = (UserEquipMaster_o *)sub_1C942E4(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v544, 0);
  if ( v544 )
  {
    v3 = sub_1C941D4(v544, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Du )
    goto LABEL_1661;
  v1->m_Items[77] = (DataMasterBase_o *)v544;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[77], (int32_t)v544, v545, v546, v547, v548, v549, v550);
  v551 = (UserServantCollectionMaster_o *)sub_1C942E4(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v551, 0);
  if ( v551 )
  {
    v3 = sub_1C941D4(v551, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Eu )
    goto LABEL_1661;
  v1->m_Items[78] = (DataMasterBase_o *)v551;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[78], (int32_t)v551, v552, v553, v554, v555, v556, v557);
  v558 = (FriendshipMaster_o *)sub_1C942E4(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v558, 0);
  if ( v558 )
  {
    v3 = sub_1C941D4(v558, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Fu )
    goto LABEL_1661;
  v1->m_Items[79] = (DataMasterBase_o *)v558;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[79], (int32_t)v558, v559, v560, v561, v562, v563, v564);
  v565 = (GachaTicketMaster_o *)sub_1C942E4(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v565, 0);
  if ( v565 )
  {
    v3 = sub_1C941D4(v565, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x50u )
    goto LABEL_1661;
  v1->m_Items[80] = (DataMasterBase_o *)v565;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[80], (int32_t)v565, v566, v567, v568, v569, v570, v571);
  v572 = (UserFormationMaster_o *)sub_1C942E4(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v572, 0);
  if ( v572 )
  {
    v3 = sub_1C941D4(v572, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x51u )
    goto LABEL_1661;
  v1->m_Items[81] = (DataMasterBase_o *)v572;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[81], (int32_t)v572, v573, v574, v575, v576, v577, v578);
  v579 = (FunctionMaster_o *)sub_1C942E4(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v579, 0);
  if ( v579 )
  {
    v3 = sub_1C941D4(v579, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x52u )
    goto LABEL_1661;
  v1->m_Items[82] = (DataMasterBase_o *)v579;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[82], (int32_t)v579, v580, v581, v582, v583, v584, v585);
  v586 = (BuffMaster_o *)sub_1C942E4(BuffMaster_TypeInfo);
  BuffMaster___ctor(v586, 0);
  if ( v586 )
  {
    v3 = sub_1C941D4(v586, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x53u )
    goto LABEL_1661;
  v1->m_Items[83] = (DataMasterBase_o *)v586;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[83], (int32_t)v586, v587, v588, v589, v590, v591, v592);
  v593 = (GachaReleaseMaster_o *)sub_1C942E4(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v593, 0);
  if ( v593 )
  {
    v3 = sub_1C941D4(v593, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x54u )
    goto LABEL_1661;
  v1->m_Items[84] = (DataMasterBase_o *)v593;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[84], (int32_t)v593, v594, v595, v596, v597, v598, v599);
  v600 = (CombineQpMaster_o *)sub_1C942E4(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v600, 0);
  if ( v600 )
  {
    v3 = sub_1C941D4(v600, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x55u )
    goto LABEL_1661;
  v1->m_Items[85] = (DataMasterBase_o *)v600;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[85], (int32_t)v600, v601, v602, v603, v604, v605, v606);
  v607 = (CombineMaterialMaster_o *)sub_1C942E4(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v607, 0);
  if ( v607 )
  {
    v3 = sub_1C941D4(v607, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x56u )
    goto LABEL_1661;
  v1->m_Items[86] = (DataMasterBase_o *)v607;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[86], (int32_t)v607, v608, v609, v610, v611, v612, v613);
  v614 = (EventCombineMaster_o *)sub_1C942E4(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v614, 0);
  if ( v614 )
  {
    v3 = sub_1C941D4(v614, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x57u )
    goto LABEL_1661;
  v1->m_Items[87] = (DataMasterBase_o *)v614;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[87], (int32_t)v614, v615, v616, v617, v618, v619, v620);
  v621 = (ServantExpMaster_o *)sub_1C942E4(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v621, 0);
  if ( v621 )
  {
    v3 = sub_1C941D4(v621, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x58u )
    goto LABEL_1661;
  v1->m_Items[88] = (DataMasterBase_o *)v621;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[88], (int32_t)v621, v622, v623, v624, v625, v626, v627);
  v628 = (CombineSkillMaster_o *)sub_1C942E4(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v628, 0);
  if ( v628 )
  {
    v3 = sub_1C941D4(v628, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x59u )
    goto LABEL_1661;
  v1->m_Items[89] = (DataMasterBase_o *)v628;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[89], (int32_t)v628, v629, v630, v631, v632, v633, v634);
  v635 = (CombineTdMaster_o *)sub_1C942E4(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v635, 0);
  if ( v635 )
  {
    v3 = sub_1C941D4(v635, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Au )
    goto LABEL_1661;
  v1->m_Items[90] = (DataMasterBase_o *)v635;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[90], (int32_t)v635, v636, v637, v638, v639, v640, v641);
  v642 = (EventQuestMaster_o *)sub_1C942E4(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v642, 0);
  if ( v642 )
  {
    v3 = sub_1C941D4(v642, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Bu )
    goto LABEL_1661;
  v1->m_Items[91] = (DataMasterBase_o *)v642;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[91], (int32_t)v642, v643, v644, v645, v646, v647, v648);
  v649 = (EventCampaignMaster_o *)sub_1C942E4(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v649, 0);
  if ( v649 )
  {
    v3 = sub_1C941D4(v649, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Cu )
    goto LABEL_1661;
  v1->m_Items[92] = (DataMasterBase_o *)v649;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[92], (int32_t)v649, v650, v651, v652, v653, v654, v655);
  v656 = (IllustratorMaster_o *)sub_1C942E4(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v656, 0);
  if ( v656 )
  {
    v3 = sub_1C941D4(v656, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Du )
    goto LABEL_1661;
  v1->m_Items[93] = (DataMasterBase_o *)v656;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[93], (int32_t)v656, v657, v658, v659, v660, v661, v662);
  v663 = (CvMaster_o *)sub_1C942E4(CvMaster_TypeInfo);
  CvMaster___ctor(v663, 0);
  if ( v663 )
  {
    v3 = sub_1C941D4(v663, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Eu )
    goto LABEL_1661;
  v1->m_Items[94] = (DataMasterBase_o *)v663;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[94], (int32_t)v663, v664, v665, v666, v667, v668, v669);
  v670 = (TreasureDvcLvMaster_o *)sub_1C942E4(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v670, 0);
  if ( v670 )
  {
    v3 = sub_1C941D4(v670, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Fu )
    goto LABEL_1661;
  v1->m_Items[95] = (DataMasterBase_o *)v670;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[95], (int32_t)v670, v671, v672, v673, v674, v675, v676);
  v677 = (TreasureDvcDetailMaster_o *)sub_1C942E4(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v677, 0);
  if ( v677 )
  {
    v3 = sub_1C941D4(v677, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x60u )
    goto LABEL_1661;
  v1->m_Items[96] = (DataMasterBase_o *)v677;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[96], (int32_t)v677, v678, v679, v680, v681, v682, v683);
  v684 = (UserFollowerMaster_o *)sub_1C942E4(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v684, 0);
  if ( v684 )
  {
    v3 = sub_1C941D4(v684, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x61u )
    goto LABEL_1661;
  v1->m_Items[97] = (DataMasterBase_o *)v684;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[97], (int32_t)v684, v685, v686, v687, v688, v689, v690);
  v691 = (NpcFollowerMaster_o *)sub_1C942E4(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v691, 0);
  if ( v691 )
  {
    v3 = sub_1C941D4(v691, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x62u )
    goto LABEL_1661;
  v1->m_Items[98] = (DataMasterBase_o *)v691;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[98], (int32_t)v691, v692, v693, v694, v695, v696, v697);
  v698 = (NpcServantFollowerMaster_o *)sub_1C942E4(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v698, 0);
  if ( v698 )
  {
    v3 = sub_1C941D4(v698, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x63u )
    goto LABEL_1661;
  v1->m_Items[99] = (DataMasterBase_o *)v698;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[99], (int32_t)v698, v699, v700, v701, v702, v703, v704);
  v705 = (UserEventMaster_o *)sub_1C942E4(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v705, 0);
  if ( v705 )
  {
    v3 = sub_1C941D4(v705, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x64u )
    goto LABEL_1661;
  v1->m_Items[100] = (DataMasterBase_o *)v705;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[100], (int32_t)v705, v706, v707, v708, v709, v710, v711);
  v712 = (UserShopMaster_o *)sub_1C942E4(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v712, 0);
  if ( v712 )
  {
    v3 = sub_1C941D4(v712, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x65u )
    goto LABEL_1661;
  v1->m_Items[101] = (DataMasterBase_o *)v712;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[101], (int32_t)v712, v713, v714, v715, v716, v717, v718);
  v719 = (UserContinueMaster_o *)sub_1C942E4(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v719, 0);
  if ( v719 )
  {
    v3 = sub_1C941D4(v719, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x66u )
    goto LABEL_1661;
  v1->m_Items[102] = (DataMasterBase_o *)v719;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[102], (int32_t)v719, v720, v721, v722, v723, v724, v725);
  v726 = (ConstantMaster_o *)sub_1C942E4(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v726, 0);
  if ( v726 )
  {
    v3 = sub_1C941D4(v726, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x67u )
    goto LABEL_1661;
  v1->m_Items[103] = (DataMasterBase_o *)v726;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[103], (int32_t)v726, v727, v728, v729, v730, v731, v732);
  v733 = (ConstantLongMaster_o *)sub_1C942E4(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v733, 0);
  if ( v733 )
  {
    v3 = sub_1C941D4(v733, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x68u )
    goto LABEL_1661;
  v1->m_Items[104] = (DataMasterBase_o *)v733;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[104], (int32_t)v733, v734, v735, v736, v737, v738, v739);
  v740 = (ConstantStrMaster_o *)sub_1C942E4(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v740, 0);
  if ( v740 )
  {
    v3 = sub_1C941D4(v740, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x69u )
    goto LABEL_1661;
  v1->m_Items[105] = (DataMasterBase_o *)v740;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[105], (int32_t)v740, v741, v742, v743, v744, v745, v746);
  v747 = (AiMaster_o *)sub_1C942E4(AiMaster_TypeInfo);
  AiMaster___ctor(v747, 0);
  if ( v747 )
  {
    v3 = sub_1C941D4(v747, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Au )
    goto LABEL_1661;
  v1->m_Items[106] = (DataMasterBase_o *)v747;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[106], (int32_t)v747, v748, v749, v750, v751, v752, v753);
  v754 = (AiActMaster_o *)sub_1C942E4(AiActMaster_TypeInfo);
  AiActMaster___ctor(v754, 0);
  if ( v754 )
  {
    v3 = sub_1C941D4(v754, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Bu )
    goto LABEL_1661;
  v1->m_Items[107] = (DataMasterBase_o *)v754;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[107], (int32_t)v754, v755, v756, v757, v758, v759, v760);
  v761 = (AttriRelationMaster_o *)sub_1C942E4(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v761, 0);
  if ( v761 )
  {
    v3 = sub_1C941D4(v761, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Cu )
    goto LABEL_1661;
  v1->m_Items[108] = (DataMasterBase_o *)v761;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[108], (int32_t)v761, v762, v763, v764, v765, v766, v767);
  v768 = (ClassRelationMaster_o *)sub_1C942E4(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v768, 0);
  if ( v768 )
  {
    v3 = sub_1C941D4(v768, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Du )
    goto LABEL_1661;
  v1->m_Items[109] = (DataMasterBase_o *)v768;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[109], (int32_t)v768, v769, v770, v771, v772, v773, v774);
  v775 = (EffectMaster_o *)sub_1C942E4(EffectMaster_TypeInfo);
  EffectMaster___ctor(v775, 0);
  if ( v775 )
  {
    v3 = sub_1C941D4(v775, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Eu )
    goto LABEL_1661;
  v1->m_Items[110] = (DataMasterBase_o *)v775;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[110], (int32_t)v775, v776, v777, v778, v779, v780, v781);
  v782 = (EquipImageMaster_o *)sub_1C942E4(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v782, 0);
  if ( v782 )
  {
    v3 = sub_1C941D4(v782, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Fu )
    goto LABEL_1661;
  v1->m_Items[111] = (DataMasterBase_o *)v782;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[111], (int32_t)v782, v783, v784, v785, v786, v787, v788);
  v789 = (ServantVoiceMaster_o *)sub_1C942E4(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v789, 0);
  if ( v789 )
  {
    v3 = sub_1C941D4(v789, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x70u )
    goto LABEL_1661;
  v1->m_Items[112] = (DataMasterBase_o *)v789;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[112], (int32_t)v789, v790, v791, v792, v793, v794, v795);
  v796 = (CombineLimitMaster_o *)sub_1C942E4(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v796, 0);
  if ( v796 )
  {
    v3 = sub_1C941D4(v796, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x71u )
    goto LABEL_1661;
  v1->m_Items[113] = (DataMasterBase_o *)v796;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[113], (int32_t)v796, v797, v798, v799, v800, v801, v802);
  v803 = (CardMaster_o *)sub_1C942E4(CardMaster_TypeInfo);
  CardMaster___ctor(v803, 0);
  if ( v803 )
  {
    v3 = sub_1C941D4(v803, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x72u )
    goto LABEL_1661;
  v1->m_Items[114] = (DataMasterBase_o *)v803;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[114], (int32_t)v803, v804, v805, v806, v807, v808, v809);
  v810 = (CombineQpSvtEquipMaster_o *)sub_1C942E4(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v810, 0);
  if ( v810 )
  {
    v3 = sub_1C941D4(v810, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x73u )
    goto LABEL_1661;
  v1->m_Items[115] = (DataMasterBase_o *)v810;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[115], (int32_t)v810, v811, v812, v813, v814, v815, v816);
  v817 = (ServantRarityMaster_o *)sub_1C942E4(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v817, 0);
  if ( v817 )
  {
    v3 = sub_1C941D4(v817, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x74u )
    goto LABEL_1661;
  v1->m_Items[116] = (DataMasterBase_o *)v817;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[116], (int32_t)v817, v818, v819, v820, v821, v822, v823);
  v824 = (SetItemMaster_o *)sub_1C942E4(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v824, 0);
  if ( v824 )
  {
    v3 = sub_1C941D4(v824, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x75u )
    goto LABEL_1661;
  v1->m_Items[117] = (DataMasterBase_o *)v824;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[117], (int32_t)v824, v825, v826, v827, v828, v829, v830);
  v831 = (RecoverMaster_o *)sub_1C942E4(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v831, 0);
  if ( v831 )
  {
    v3 = sub_1C941D4(v831, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x76u )
    goto LABEL_1661;
  v1->m_Items[118] = (DataMasterBase_o *)v831;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[118], (int32_t)v831, v832, v833, v834, v835, v836, v837);
  v838 = (BannerMaster_o *)sub_1C942E4(BannerMaster_TypeInfo);
  BannerMaster___ctor(v838, 0);
  if ( v838 )
  {
    v3 = sub_1C941D4(v838, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x77u )
    goto LABEL_1661;
  v1->m_Items[119] = (DataMasterBase_o *)v838;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[119], (int32_t)v838, v839, v840, v841, v842, v843, v844);
  v845 = (ShopReleaseMaster_o *)sub_1C942E4(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v845, 0);
  if ( v845 )
  {
    v3 = sub_1C941D4(v845, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x78u )
    goto LABEL_1661;
  v1->m_Items[120] = (DataMasterBase_o *)v845;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[120], (int32_t)v845, v846, v847, v848, v849, v850, v851);
  v852 = (EventRewardMaster_o *)sub_1C942E4(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v852, 0);
  if ( v852 )
  {
    v3 = sub_1C941D4(v852, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x79u )
    goto LABEL_1661;
  v1->m_Items[121] = (DataMasterBase_o *)v852;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[121], (int32_t)v852, v853, v854, v855, v856, v857, v858);
  v859 = (EventDetailMaster_o *)sub_1C942E4(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v859, 0);
  if ( v859 )
  {
    v3 = sub_1C941D4(v859, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Au )
    goto LABEL_1661;
  v1->m_Items[122] = (DataMasterBase_o *)v859;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[122], (int32_t)v859, v860, v861, v862, v863, v864, v865);
  v866 = (EventServantMaster_o *)sub_1C942E4(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v866, 0);
  if ( v866 )
  {
    v3 = sub_1C941D4(v866, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Bu )
    goto LABEL_1661;
  v1->m_Items[123] = (DataMasterBase_o *)v866;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[123], (int32_t)v866, v867, v868, v869, v870, v871, v872);
  v873 = (BoxGachaMaster_o *)sub_1C942E4(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v873, 0);
  if ( v873 )
  {
    v3 = sub_1C941D4(v873, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Cu )
    goto LABEL_1661;
  v1->m_Items[124] = (DataMasterBase_o *)v873;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[124], (int32_t)v873, v874, v875, v876, v877, v878, v879);
  v880 = (BoxGachaBaseMaster_o *)sub_1C942E4(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v880, 0);
  if ( v880 )
  {
    v3 = sub_1C941D4(v880, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Du )
    goto LABEL_1661;
  v1->m_Items[125] = (DataMasterBase_o *)v880;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[125], (int32_t)v880, v881, v882, v883, v884, v885, v886);
  v887 = (BoxGachaTalkMaster_o *)sub_1C942E4(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v887, 0);
  if ( v887 )
  {
    v3 = sub_1C941D4(v887, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Eu )
    goto LABEL_1661;
  v1->m_Items[126] = (DataMasterBase_o *)v887;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[126], (int32_t)v887, v888, v889, v890, v891, v892, v893);
  v894 = (UserBoxGachaMaster_o *)sub_1C942E4(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v894, 0);
  if ( v894 )
  {
    v3 = sub_1C941D4(v894, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Fu )
    goto LABEL_1661;
  v1->m_Items[127] = (DataMasterBase_o *)v894;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[127], (int32_t)v894, v895, v896, v897, v898, v899, v900);
  v901 = (BoxGachaHistoryMaster_o *)sub_1C942E4(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v901, 0);
  if ( v901 )
  {
    v3 = sub_1C941D4(v901, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x80u )
    goto LABEL_1661;
  v1->m_Items[128] = (DataMasterBase_o *)v901;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[128], (int32_t)v901, v902, v903, v904, v905, v906, v907);
  v908 = (BattleBgMaster_o *)sub_1C942E4(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v908, 0);
  if ( v908 )
  {
    v3 = sub_1C941D4(v908, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x81u )
    goto LABEL_1661;
  v1->m_Items[129] = (DataMasterBase_o *)v908;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[129], (int32_t)v908, v909, v910, v911, v912, v913, v914);
  v915 = (TipsBattleMaster_o *)sub_1C942E4(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v915, 0);
  if ( v915 )
  {
    v3 = sub_1C941D4(v915, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x82u )
    goto LABEL_1661;
  v1->m_Items[130] = (DataMasterBase_o *)v915;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[130], (int32_t)v915, v916, v917, v918, v919, v920, v921);
  v922 = (UserLoginMaster_o *)sub_1C942E4(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v922, 0);
  if ( v922 )
  {
    v3 = sub_1C941D4(v922, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x83u )
    goto LABEL_1661;
  v1->m_Items[131] = (DataMasterBase_o *)v922;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[131], (int32_t)v922, v923, v924, v925, v926, v927, v928);
  v929 = (VoiceMaster_o *)sub_1C942E4(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v929, 0);
  if ( v929 )
  {
    v3 = sub_1C941D4(v929, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x84u )
    goto LABEL_1661;
  v1->m_Items[132] = (DataMasterBase_o *)v929;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[132], (int32_t)v929, v930, v931, v932, v933, v934, v935);
  v936 = (EventRewardExtraMaster_o *)sub_1C942E4(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v936, 0);
  if ( v936 )
  {
    v3 = sub_1C941D4(v936, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x85u )
    goto LABEL_1661;
  v1->m_Items[133] = (DataMasterBase_o *)v936;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[133], (int32_t)v936, v937, v938, v939, v940, v941, v942);
  v943 = (EventMissionMaster_o *)sub_1C942E4(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v943, 0);
  if ( v943 )
  {
    v3 = sub_1C941D4(v943, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x86u )
    goto LABEL_1661;
  v1->m_Items[134] = (DataMasterBase_o *)v943;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[134], (int32_t)v943, v944, v945, v946, v947, v948, v949);
  v950 = (EventMissionActionMaster_o *)sub_1C942E4(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v950, 0);
  if ( v950 )
  {
    v3 = sub_1C941D4(v950, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x87u )
    goto LABEL_1661;
  v1->m_Items[135] = (DataMasterBase_o *)v950;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[135], (int32_t)v950, v951, v952, v953, v954, v955, v956);
  v957 = (EventMissionActionAddMaster_o *)sub_1C942E4(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v957, 0);
  if ( v957 )
  {
    v3 = sub_1C941D4(v957, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x88u )
    goto LABEL_1661;
  v1->m_Items[136] = (DataMasterBase_o *)v957;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[136], (int32_t)v957, v958, v959, v960, v961, v962, v963);
  v964 = (EventMissionConditionMaster_o *)sub_1C942E4(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v964, 0);
  if ( v964 )
  {
    v3 = sub_1C941D4(v964, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x89u )
    goto LABEL_1661;
  v1->m_Items[137] = (DataMasterBase_o *)v964;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[137], (int32_t)v964, v965, v966, v967, v968, v969, v970);
  v971 = (EventMissionCondDetailMaster_o *)sub_1C942E4(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v971, 0);
  if ( v971 )
  {
    v3 = sub_1C941D4(v971, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Au )
    goto LABEL_1661;
  v1->m_Items[138] = (DataMasterBase_o *)v971;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[138], (int32_t)v971, v972, v973, v974, v975, v976, v977);
  v978 = (EventMissionAddMaster_o *)sub_1C942E4(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v978, 0);
  if ( v978 )
  {
    v3 = sub_1C941D4(v978, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Bu )
    goto LABEL_1661;
  v1->m_Items[139] = (DataMasterBase_o *)v978;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[139], (int32_t)v978, v979, v980, v981, v982, v983, v984);
  v985 = (CompleteMissionMaster_o *)sub_1C942E4(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v985, 0);
  if ( v985 )
  {
    v3 = sub_1C941D4(v985, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Cu )
    goto LABEL_1661;
  v1->m_Items[140] = (DataMasterBase_o *)v985;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[140], (int32_t)v985, v986, v987, v988, v989, v990, v991);
  v992 = (EventRewardSetMaster_o *)sub_1C942E4(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v992, 0);
  if ( v992 )
  {
    v3 = sub_1C941D4(v992, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Du )
    goto LABEL_1661;
  v1->m_Items[141] = (DataMasterBase_o *)v992;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[141], (int32_t)v992, v993, v994, v995, v996, v997, v998);
  v999 = (UserEventMissionMaster_o *)sub_1C942E4(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v999, 0);
  if ( v999 )
  {
    v3 = sub_1C941D4(v999, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Eu )
    goto LABEL_1661;
  v1->m_Items[142] = (DataMasterBase_o *)v999;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v1->m_Items[142], (int32_t)v999, v1000, v1001, v1002, v1003, v1004, v1005);
  v1006 = (UserEventMissionCondDetailMaster_o *)sub_1C942E4(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v1006, 0);
  if ( v1006 )
  {
    v3 = sub_1C941D4(v1006, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Fu )
    goto LABEL_1661;
  v1->m_Items[143] = (DataMasterBase_o *)v1006;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[143],
    (int32_t)v1006,
    v1007,
    v1008,
    v1009,
    v1010,
    v1011,
    v1012);
  v1013 = (BoxGachaBaseDetailMaster_o *)sub_1C942E4(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v1013, 0);
  if ( v1013 )
  {
    v3 = sub_1C941D4(v1013, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x90u )
    goto LABEL_1661;
  v1->m_Items[144] = (DataMasterBase_o *)v1013;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[144],
    (int32_t)v1013,
    v1014,
    v1015,
    v1016,
    v1017,
    v1018,
    v1019);
  v1020 = (UserServantLeaderMaster_o *)sub_1C942E4(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v1020, 0);
  if ( v1020 )
  {
    v3 = sub_1C941D4(v1020, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x91u )
    goto LABEL_1661;
  v1->m_Items[145] = (DataMasterBase_o *)v1020;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[145],
    (int32_t)v1020,
    v1021,
    v1022,
    v1023,
    v1024,
    v1025,
    v1026);
  v1027 = (ClosedMessageMaster_o *)sub_1C942E4(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v1027, 0);
  if ( v1027 )
  {
    v3 = sub_1C941D4(v1027, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x92u )
    goto LABEL_1661;
  v1->m_Items[146] = (DataMasterBase_o *)v1027;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[146],
    (int32_t)v1027,
    v1028,
    v1029,
    v1030,
    v1031,
    v1032,
    v1033);
  v1034 = (FunctionGroupMaster_o *)sub_1C942E4(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v1034, 0);
  if ( v1034 )
  {
    v3 = sub_1C941D4(v1034, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x93u )
    goto LABEL_1661;
  v1->m_Items[147] = (DataMasterBase_o *)v1034;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[147],
    (int32_t)v1034,
    v1035,
    v1036,
    v1037,
    v1038,
    v1039,
    v1040);
  v1041 = (EventRaidMaster_o *)sub_1C942E4(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v1041, 0);
  if ( v1041 )
  {
    v3 = sub_1C941D4(v1041, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x94u )
    goto LABEL_1661;
  v1->m_Items[148] = (DataMasterBase_o *)v1041;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[148],
    (int32_t)v1041,
    v1042,
    v1043,
    v1044,
    v1045,
    v1046,
    v1047);
  v1048 = (TotalEventRaidMaster_o *)sub_1C942E4(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v1048, 0);
  if ( v1048 )
  {
    v3 = sub_1C941D4(v1048, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x95u )
    goto LABEL_1661;
  v1->m_Items[149] = (DataMasterBase_o *)v1048;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[149],
    (int32_t)v1048,
    v1049,
    v1050,
    v1051,
    v1052,
    v1053,
    v1054);
  v1055 = (UserEventRaidMaster_o *)sub_1C942E4(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v1055, 0);
  if ( v1055 )
  {
    v3 = sub_1C941D4(v1055, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x96u )
    goto LABEL_1661;
  v1->m_Items[150] = (DataMasterBase_o *)v1055;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[150],
    (int32_t)v1055,
    v1056,
    v1057,
    v1058,
    v1059,
    v1060,
    v1061);
  v1062 = (EventPointMaster_o *)sub_1C942E4(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1062, 0);
  if ( v1062 )
  {
    v3 = sub_1C941D4(v1062, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x97u )
    goto LABEL_1661;
  v1->m_Items[151] = (DataMasterBase_o *)v1062;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[151],
    (int32_t)v1062,
    v1063,
    v1064,
    v1065,
    v1066,
    v1067,
    v1068);
  v1069 = (EventPointGroupMaster_o *)sub_1C942E4(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1069, 0);
  if ( v1069 )
  {
    v3 = sub_1C941D4(v1069, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x98u )
    goto LABEL_1661;
  v1->m_Items[152] = (DataMasterBase_o *)v1069;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[152],
    (int32_t)v1069,
    v1070,
    v1071,
    v1072,
    v1073,
    v1074,
    v1075);
  v1076 = (TotalEventPointMaster_o *)sub_1C942E4(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1076, 0);
  if ( v1076 )
  {
    v3 = sub_1C941D4(v1076, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x99u )
    goto LABEL_1661;
  v1->m_Items[153] = (DataMasterBase_o *)v1076;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[153],
    (int32_t)v1076,
    v1077,
    v1078,
    v1079,
    v1080,
    v1081,
    v1082);
  v1083 = (UserEventPointMaster_o *)sub_1C942E4(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1083, 0);
  if ( v1083 )
  {
    v3 = sub_1C941D4(v1083, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Au )
    goto LABEL_1661;
  v1->m_Items[154] = (DataMasterBase_o *)v1083;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[154],
    (int32_t)v1083,
    v1084,
    v1085,
    v1086,
    v1087,
    v1088,
    v1089);
  v1090 = (EventPointUpperMaster_o *)sub_1C942E4(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1090, 0);
  if ( v1090 )
  {
    v3 = sub_1C941D4(v1090, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Bu )
    goto LABEL_1661;
  v1->m_Items[155] = (DataMasterBase_o *)v1090;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[155],
    (int32_t)v1090,
    v1091,
    v1092,
    v1093,
    v1094,
    v1095,
    v1096);
  v1097 = (EventPointUpperReleaseMaster_o *)sub_1C942E4(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1097, 0);
  if ( v1097 )
  {
    v3 = sub_1C941D4(v1097, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Cu )
    goto LABEL_1661;
  v1->m_Items[156] = (DataMasterBase_o *)v1097;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[156],
    (int32_t)v1097,
    v1098,
    v1099,
    v1100,
    v1101,
    v1102,
    v1103);
  v1104 = (EventRaceMaster_o *)sub_1C942E4(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1104, 0);
  if ( v1104 )
  {
    v3 = sub_1C941D4(v1104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Du )
    goto LABEL_1661;
  v1->m_Items[157] = (DataMasterBase_o *)v1104;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[157],
    (int32_t)v1104,
    v1105,
    v1106,
    v1107,
    v1108,
    v1109,
    v1110);
  v1111 = (EventRaceResultMaster_o *)sub_1C942E4(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1111, 0);
  if ( v1111 )
  {
    v3 = sub_1C941D4(v1111, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Eu )
    goto LABEL_1661;
  v1->m_Items[158] = (DataMasterBase_o *)v1111;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[158],
    (int32_t)v1111,
    v1112,
    v1113,
    v1114,
    v1115,
    v1116,
    v1117);
  v1118 = (QuestRacePointMaster_o *)sub_1C942E4(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1118, 0);
  if ( v1118 )
  {
    v3 = sub_1C941D4(v1118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Fu )
    goto LABEL_1661;
  v1->m_Items[159] = (DataMasterBase_o *)v1118;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[159],
    (int32_t)v1118,
    v1119,
    v1120,
    v1121,
    v1122,
    v1123,
    v1124);
  v1125 = (UserEventRaceMaster_o *)sub_1C942E4(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1125, 0);
  if ( v1125 )
  {
    v3 = sub_1C941D4(v1125, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA0u )
    goto LABEL_1661;
  v1->m_Items[160] = (DataMasterBase_o *)v1125;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[160],
    (int32_t)v1125,
    v1126,
    v1127,
    v1128,
    v1129,
    v1130,
    v1131);
  v1132 = (EventScriptMaster_o *)sub_1C942E4(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1132, 0);
  if ( v1132 )
  {
    v3 = sub_1C941D4(v1132, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA1u )
    goto LABEL_1661;
  v1->m_Items[161] = (DataMasterBase_o *)v1132;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[161],
    (int32_t)v1132,
    v1133,
    v1134,
    v1135,
    v1136,
    v1137,
    v1138);
  v1139 = (EventScriptReleaseMaster_o *)sub_1C942E4(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1139, 0);
  if ( v1139 )
  {
    v3 = sub_1C941D4(v1139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA2u )
    goto LABEL_1661;
  v1->m_Items[162] = (DataMasterBase_o *)v1139;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[162],
    (int32_t)v1139,
    v1140,
    v1141,
    v1142,
    v1143,
    v1144,
    v1145);
  v1146 = (UserPresentHistoryMaster_o *)sub_1C942E4(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1146, 0);
  if ( v1146 )
  {
    v3 = sub_1C941D4(v1146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA3u )
    goto LABEL_1661;
  v1->m_Items[163] = (DataMasterBase_o *)v1146;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[163],
    (int32_t)v1146,
    v1147,
    v1148,
    v1149,
    v1150,
    v1151,
    v1152);
  v1153 = (MstMissionMaster_o *)sub_1C942E4(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1153, 0);
  if ( v1153 )
  {
    v3 = sub_1C941D4(v1153, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA4u )
    goto LABEL_1661;
  v1->m_Items[164] = (DataMasterBase_o *)v1153;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[164],
    (int32_t)v1153,
    v1154,
    v1155,
    v1156,
    v1157,
    v1158,
    v1159);
  v1160 = (ServantExceedMaster_o *)sub_1C942E4(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1160, 0);
  if ( v1160 )
  {
    v3 = sub_1C941D4(v1160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA5u )
    goto LABEL_1661;
  v1->m_Items[165] = (DataMasterBase_o *)v1160;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[165],
    (int32_t)v1160,
    v1161,
    v1162,
    v1163,
    v1164,
    v1165,
    v1166);
  v1167 = (PartialMaintenanceMaster_o *)sub_1C942E4(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1167, 0);
  if ( v1167 )
  {
    v3 = sub_1C941D4(v1167, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA6u )
    goto LABEL_1661;
  v1->m_Items[166] = (DataMasterBase_o *)v1167;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[166],
    (int32_t)v1167,
    v1168,
    v1169,
    v1170,
    v1171,
    v1172,
    v1173);
  v1174 = (GuideMaster_o *)sub_1C942E4(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1174, 0);
  if ( v1174 )
  {
    v3 = sub_1C941D4(v1174, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA7u )
    goto LABEL_1661;
  v1->m_Items[167] = (DataMasterBase_o *)v1174;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[167],
    (int32_t)v1174,
    v1175,
    v1176,
    v1177,
    v1178,
    v1179,
    v1180);
  v1181 = (MstMissionDisplayInfoMaster_o *)sub_1C942E4(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1181, 0);
  if ( v1181 )
  {
    v3 = sub_1C941D4(v1181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA8u )
    goto LABEL_1661;
  v1->m_Items[168] = (DataMasterBase_o *)v1181;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[168],
    (int32_t)v1181,
    v1182,
    v1183,
    v1184,
    v1185,
    v1186,
    v1187);
  v1188 = (GachaGroupMaster_o *)sub_1C942E4(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1188, 0);
  if ( v1188 )
  {
    v3 = sub_1C941D4(v1188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xA9u )
    goto LABEL_1661;
  v1->m_Items[169] = (DataMasterBase_o *)v1188;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[169],
    (int32_t)v1188,
    v1189,
    v1190,
    v1191,
    v1192,
    v1193,
    v1194);
  v1195 = (QuestResetMaster_o *)sub_1C942E4(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1195, 0);
  if ( v1195 )
  {
    v3 = sub_1C941D4(v1195, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xAAu )
    goto LABEL_1661;
  v1->m_Items[170] = (DataMasterBase_o *)v1195;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[170],
    (int32_t)v1195,
    v1196,
    v1197,
    v1198,
    v1199,
    v1200,
    v1201);
  v1202 = (WarAddMaster_o *)sub_1C942E4(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1202, 0);
  if ( v1202 )
  {
    v3 = sub_1C941D4(v1202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xABu )
    goto LABEL_1661;
  v1->m_Items[171] = (DataMasterBase_o *)v1202;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[171],
    (int32_t)v1202,
    v1203,
    v1204,
    v1205,
    v1206,
    v1207,
    v1208);
  v1209 = (EventItemDisplayMaster_o *)sub_1C942E4(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1209, 0);
  if ( v1209 )
  {
    v3 = sub_1C941D4(v1209, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xACu )
    goto LABEL_1661;
  v1->m_Items[172] = (DataMasterBase_o *)v1209;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[172],
    (int32_t)v1209,
    v1210,
    v1211,
    v1212,
    v1213,
    v1214,
    v1215);
  v1216 = (EventItemDisplayGroupMaster_o *)sub_1C942E4(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1216, 0);
  if ( v1216 )
  {
    v3 = sub_1C941D4(v1216, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xADu )
    goto LABEL_1661;
  v1->m_Items[173] = (DataMasterBase_o *)v1216;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[173],
    (int32_t)v1216,
    v1217,
    v1218,
    v1219,
    v1220,
    v1221,
    v1222);
  v1223 = (EventItemDisplayReleaseMaster_o *)sub_1C942E4(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1223, 0);
  if ( v1223 )
  {
    v3 = sub_1C941D4(v1223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xAEu )
    goto LABEL_1661;
  v1->m_Items[174] = (DataMasterBase_o *)v1223;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[174],
    (int32_t)v1223,
    v1224,
    v1225,
    v1226,
    v1227,
    v1228,
    v1229);
  v1230 = (EventTutorialMaster_o *)sub_1C942E4(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1230, 0);
  if ( v1230 )
  {
    v3 = sub_1C941D4(v1230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xAFu )
    goto LABEL_1661;
  v1->m_Items[175] = (DataMasterBase_o *)v1230;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[175],
    (int32_t)v1230,
    v1231,
    v1232,
    v1233,
    v1234,
    v1235,
    v1236);
  v1237 = (EventTutorialCondMaster_o *)sub_1C942E4(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1237, 0);
  if ( v1237 )
  {
    v3 = sub_1C941D4(v1237, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB0u )
    goto LABEL_1661;
  v1->m_Items[176] = (DataMasterBase_o *)v1237;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[176],
    (int32_t)v1237,
    v1238,
    v1239,
    v1240,
    v1241,
    v1242,
    v1243);
  v1244 = (VoiceReleaseMaster_o *)sub_1C942E4(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1244, 0);
  if ( v1244 )
  {
    v3 = sub_1C941D4(v1244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB1u )
    goto LABEL_1661;
  v1->m_Items[177] = (DataMasterBase_o *)v1244;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[177],
    (int32_t)v1244,
    v1245,
    v1246,
    v1247,
    v1248,
    v1249,
    v1250);
  v1251 = (EventSuperBossMaster_o *)sub_1C942E4(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1251, 0);
  if ( v1251 )
  {
    v3 = sub_1C941D4(v1251, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB2u )
    goto LABEL_1661;
  v1->m_Items[178] = (DataMasterBase_o *)v1251;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[178],
    (int32_t)v1251,
    v1252,
    v1253,
    v1254,
    v1255,
    v1256,
    v1257);
  v1258 = (UserSuperBossMaster_o *)sub_1C942E4(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1258, 0);
  if ( v1258 )
  {
    v3 = sub_1C941D4(v1258, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB3u )
    goto LABEL_1661;
  v1->m_Items[179] = (DataMasterBase_o *)v1258;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[179],
    (int32_t)v1258,
    v1259,
    v1260,
    v1261,
    v1262,
    v1263,
    v1264);
  v1265 = (QuestScriptMaster_o *)sub_1C942E4(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1265, 0);
  if ( v1265 )
  {
    v3 = sub_1C941D4(v1265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB4u )
    goto LABEL_1661;
  v1->m_Items[180] = (DataMasterBase_o *)v1265;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[180],
    (int32_t)v1265,
    v1266,
    v1267,
    v1268,
    v1269,
    v1270,
    v1271);
  v1272 = (QuestScriptReleaseMaster_o *)sub_1C942E4(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1272, 0);
  if ( v1272 )
  {
    v3 = sub_1C941D4(v1272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB5u )
    goto LABEL_1661;
  v1->m_Items[181] = (DataMasterBase_o *)v1272;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[181],
    (int32_t)v1272,
    v1273,
    v1274,
    v1275,
    v1276,
    v1277,
    v1278);
  v1279 = (MaterialFolderMaster_o *)sub_1C942E4(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1279, 0);
  if ( v1279 )
  {
    v3 = sub_1C941D4(v1279, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB6u )
    goto LABEL_1661;
  v1->m_Items[182] = (DataMasterBase_o *)v1279;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[182],
    (int32_t)v1279,
    v1280,
    v1281,
    v1282,
    v1283,
    v1284,
    v1285);
  v1286 = (RestrictionMaster_o *)sub_1C942E4(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1286, 0);
  if ( v1286 )
  {
    v3 = sub_1C941D4(v1286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB7u )
    goto LABEL_1661;
  v1->m_Items[183] = (DataMasterBase_o *)v1286;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[183],
    (int32_t)v1286,
    v1287,
    v1288,
    v1289,
    v1290,
    v1291,
    v1292);
  v1293 = (QuestRestrictionMaster_o *)sub_1C942E4(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1293, 0);
  if ( v1293 )
  {
    v3 = sub_1C941D4(v1293, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB8u )
    goto LABEL_1661;
  v1->m_Items[184] = (DataMasterBase_o *)v1293;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[184],
    (int32_t)v1293,
    v1294,
    v1295,
    v1296,
    v1297,
    v1298,
    v1299);
  v1300 = (ServantVoiceRelationMaster_o *)sub_1C942E4(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1300, 0);
  if ( v1300 )
  {
    v3 = sub_1C941D4(v1300, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xB9u )
    goto LABEL_1661;
  v1->m_Items[185] = (DataMasterBase_o *)v1300;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[185],
    (int32_t)v1300,
    v1301,
    v1302,
    v1303,
    v1304,
    v1305,
    v1306);
  v1307 = (ShopDetailMaster_o *)sub_1C942E4(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1307, 0);
  if ( v1307 )
  {
    v3 = sub_1C941D4(v1307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBAu )
    goto LABEL_1661;
  v1->m_Items[186] = (DataMasterBase_o *)v1307;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[186],
    (int32_t)v1307,
    v1308,
    v1309,
    v1310,
    v1311,
    v1312,
    v1313);
  v1314 = (ServantScriptAddMaster_o *)sub_1C942E4(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1314, 0);
  if ( v1314 )
  {
    v3 = sub_1C941D4(v1314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBBu )
    goto LABEL_1661;
  v1->m_Items[187] = (DataMasterBase_o *)v1314;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[187],
    (int32_t)v1314,
    v1315,
    v1316,
    v1317,
    v1318,
    v1319,
    v1320);
  v1321 = (CombineMaster_o *)sub_1C942E4(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1321, 0);
  if ( v1321 )
  {
    v3 = sub_1C941D4(v1321, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBCu )
    goto LABEL_1661;
  v1->m_Items[188] = (DataMasterBase_o *)v1321;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[188],
    (int32_t)v1321,
    v1322,
    v1323,
    v1324,
    v1325,
    v1326,
    v1327);
  v1328 = (AiFieldMaster_o *)sub_1C942E4(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1328, 0);
  if ( v1328 )
  {
    v3 = sub_1C941D4(v1328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBDu )
    goto LABEL_1661;
  v1->m_Items[189] = (DataMasterBase_o *)v1328;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[189],
    (int32_t)v1328,
    v1329,
    v1330,
    v1331,
    v1332,
    v1333,
    v1334);
  v1335 = (ServantCommentAddMaster_o *)sub_1C942E4(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1335, 0);
  if ( v1335 )
  {
    v3 = sub_1C941D4(v1335, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBEu )
    goto LABEL_1661;
  v1->m_Items[190] = (DataMasterBase_o *)v1335;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[190],
    (int32_t)v1335,
    v1336,
    v1337,
    v1338,
    v1339,
    v1340,
    v1341);
  v1342 = (EventFilterMaster_o *)sub_1C942E4(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1342, 0);
  if ( v1342 )
  {
    v3 = sub_1C941D4(v1342, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xBFu )
    goto LABEL_1661;
  v1->m_Items[191] = (DataMasterBase_o *)v1342;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[191],
    (int32_t)v1342,
    v1343,
    v1344,
    v1345,
    v1346,
    v1347,
    v1348);
  v1349 = (UserSupportDeckMaster_o *)sub_1C942E4(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1349, 0);
  if ( v1349 )
  {
    v3 = sub_1C941D4(v1349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC0u )
    goto LABEL_1661;
  v1->m_Items[192] = (DataMasterBase_o *)v1349;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[192],
    (int32_t)v1349,
    v1350,
    v1351,
    v1352,
    v1353,
    v1354,
    v1355);
  v1356 = (EventRewardSceneMaster_o *)sub_1C942E4(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1356, 0);
  if ( v1356 )
  {
    v3 = sub_1C941D4(v1356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC1u )
    goto LABEL_1661;
  v1->m_Items[193] = (DataMasterBase_o *)v1356;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[193],
    (int32_t)v1356,
    v1357,
    v1358,
    v1359,
    v1360,
    v1361,
    v1362);
  v1363 = (EventVoicePlayMaster_o *)sub_1C942E4(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1363, 0);
  if ( v1363 )
  {
    v3 = sub_1C941D4(v1363, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC2u )
    goto LABEL_1661;
  v1->m_Items[194] = (DataMasterBase_o *)v1363;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[194],
    (int32_t)v1363,
    v1364,
    v1365,
    v1366,
    v1367,
    v1368,
    v1369);
  v1370 = (GachaSubMaster_o *)sub_1C942E4(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1370, 0);
  if ( v1370 )
  {
    v3 = sub_1C941D4(v1370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC3u )
    goto LABEL_1661;
  v1->m_Items[195] = (DataMasterBase_o *)v1370;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[195],
    (int32_t)v1370,
    v1371,
    v1372,
    v1373,
    v1374,
    v1375,
    v1376);
  v1377 = (GachaDetailMaster_o *)sub_1C942E4(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1377, 0);
  if ( v1377 )
  {
    v3 = sub_1C941D4(v1377, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC4u )
    goto LABEL_1661;
  v1->m_Items[196] = (DataMasterBase_o *)v1377;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[196],
    (int32_t)v1377,
    v1378,
    v1379,
    v1380,
    v1381,
    v1382,
    v1383);
  v1384 = (GachaBaseCollateralMaster_o *)sub_1C942E4(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1384, 0);
  if ( v1384 )
  {
    v3 = sub_1C941D4(v1384, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC5u )
    goto LABEL_1661;
  v1->m_Items[197] = (DataMasterBase_o *)v1384;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[197],
    (int32_t)v1384,
    v1385,
    v1386,
    v1387,
    v1388,
    v1389,
    v1390);
  v1391 = (GachaAdjustAddMaster_o *)sub_1C942E4(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1391, 0);
  if ( v1391 )
  {
    v3 = sub_1C941D4(v1391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC6u )
    goto LABEL_1661;
  v1->m_Items[198] = (DataMasterBase_o *)v1391;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[198],
    (int32_t)v1391,
    v1392,
    v1393,
    v1394,
    v1395,
    v1396,
    v1397);
  v1398 = (GachaBonusSelectMaster_o *)sub_1C942E4(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1398, 0);
  if ( v1398 )
  {
    v3 = sub_1C941D4(v1398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC7u )
    goto LABEL_1661;
  v1->m_Items[199] = (DataMasterBase_o *)v1398;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[199],
    (int32_t)v1398,
    v1399,
    v1400,
    v1401,
    v1402,
    v1403,
    v1404);
  v1405 = (GachaBonusSelectLineupMaster_o *)sub_1C942E4(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1405, 0);
  if ( v1405 )
  {
    v3 = sub_1C941D4(v1405, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC8u )
    goto LABEL_1661;
  v1->m_Items[200] = (DataMasterBase_o *)v1405;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[200],
    (int32_t)v1405,
    v1406,
    v1407,
    v1408,
    v1409,
    v1410,
    v1411);
  v1412 = (ServantChangeMaster_o *)sub_1C942E4(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1412, 0);
  if ( v1412 )
  {
    v3 = sub_1C941D4(v1412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xC9u )
    goto LABEL_1661;
  v1->m_Items[201] = (DataMasterBase_o *)v1412;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[201],
    (int32_t)v1412,
    v1413,
    v1414,
    v1415,
    v1416,
    v1417,
    v1418);
  v1419 = (VoiceCondMaster_o *)sub_1C942E4(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1419, 0);
  if ( v1419 )
  {
    v3 = sub_1C941D4(v1419, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCAu )
    goto LABEL_1661;
  v1->m_Items[202] = (DataMasterBase_o *)v1419;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[202],
    (int32_t)v1419,
    v1420,
    v1421,
    v1422,
    v1423,
    v1424,
    v1425);
  v1426 = (BgmReleaseMaster_o *)sub_1C942E4(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1426, 0);
  if ( v1426 )
  {
    v3 = sub_1C941D4(v1426, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCBu )
    goto LABEL_1661;
  v1->m_Items[203] = (DataMasterBase_o *)v1426;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[203],
    (int32_t)v1426,
    v1427,
    v1428,
    v1429,
    v1430,
    v1431,
    v1432);
  v1433 = (MyRoomAddMaster_o *)sub_1C942E4(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1433, 0);
  if ( v1433 )
  {
    v3 = sub_1C941D4(v1433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCCu )
    goto LABEL_1661;
  v1->m_Items[204] = (DataMasterBase_o *)v1433;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[204],
    (int32_t)v1433,
    v1434,
    v1435,
    v1436,
    v1437,
    v1438,
    v1439);
  v1440 = (ShopActionMaster_o *)sub_1C942E4(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1440, 0);
  if ( v1440 )
  {
    v3 = sub_1C941D4(v1440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCDu )
    goto LABEL_1661;
  v1->m_Items[205] = (DataMasterBase_o *)v1440;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[205],
    (int32_t)v1440,
    v1441,
    v1442,
    v1443,
    v1444,
    v1445,
    v1446);
  v1447 = (EventRewardSceneReleaseMaster_o *)sub_1C942E4(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1447, 0);
  if ( v1447 )
  {
    v3 = sub_1C941D4(v1447, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCEu )
    goto LABEL_1661;
  v1->m_Items[206] = (DataMasterBase_o *)v1447;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[206],
    (int32_t)v1447,
    v1448,
    v1449,
    v1450,
    v1451,
    v1452,
    v1453);
  v1454 = (QuestBehaviorMaster_o *)sub_1C942E4(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1454, 0);
  if ( v1454 )
  {
    v3 = sub_1C941D4(v1454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xCFu )
    goto LABEL_1661;
  v1->m_Items[207] = (DataMasterBase_o *)v1454;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[207],
    (int32_t)v1454,
    v1455,
    v1456,
    v1457,
    v1458,
    v1459,
    v1460);
  v1461 = (MapMaster_o *)sub_1C942E4(MapMaster_TypeInfo);
  MapMaster___ctor(v1461, 0);
  if ( v1461 )
  {
    v3 = sub_1C941D4(v1461, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD0u )
    goto LABEL_1661;
  v1->m_Items[208] = (DataMasterBase_o *)v1461;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[208],
    (int32_t)v1461,
    v1462,
    v1463,
    v1464,
    v1465,
    v1466,
    v1467);
  v1468 = (MapCondMaster_o *)sub_1C942E4(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1468, 0);
  if ( v1468 )
  {
    v3 = sub_1C941D4(v1468, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD1u )
    goto LABEL_1661;
  v1->m_Items[209] = (DataMasterBase_o *)v1468;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[209],
    (int32_t)v1468,
    v1469,
    v1470,
    v1471,
    v1472,
    v1473,
    v1474);
  v1475 = (MapButtonMaster_o *)sub_1C942E4(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1475, 0);
  if ( v1475 )
  {
    v3 = sub_1C941D4(v1475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD2u )
    goto LABEL_1661;
  v1->m_Items[210] = (DataMasterBase_o *)v1475;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[210],
    (int32_t)v1475,
    v1476,
    v1477,
    v1478,
    v1479,
    v1480,
    v1481);
  v1482 = (BannerAddMaster_o *)sub_1C942E4(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1482, 0);
  if ( v1482 )
  {
    v3 = sub_1C941D4(v1482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD3u )
    goto LABEL_1661;
  v1->m_Items[211] = (DataMasterBase_o *)v1482;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[211],
    (int32_t)v1482,
    v1483,
    v1484,
    v1485,
    v1486,
    v1487,
    v1488);
  v1489 = (EventAddMaster_o *)sub_1C942E4(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1489, 0);
  if ( v1489 )
  {
    v3 = sub_1C941D4(v1489, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD4u )
    goto LABEL_1661;
  v1->m_Items[212] = (DataMasterBase_o *)v1489;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[212],
    (int32_t)v1489,
    v1490,
    v1491,
    v1492,
    v1493,
    v1494,
    v1495);
  v1496 = (TotalLoginMaster_o *)sub_1C942E4(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1496, 0);
  if ( v1496 )
  {
    v3 = sub_1C941D4(v1496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD5u )
    goto LABEL_1661;
  v1->m_Items[213] = (DataMasterBase_o *)v1496;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[213],
    (int32_t)v1496,
    v1497,
    v1498,
    v1499,
    v1500,
    v1501,
    v1502);
  v1503 = (ServantFilterMaster_o *)sub_1C942E4(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1503, 0);
  if ( v1503 )
  {
    v3 = sub_1C941D4(v1503, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD6u )
    goto LABEL_1661;
  v1->m_Items[214] = (DataMasterBase_o *)v1503;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[214],
    (int32_t)v1503,
    v1504,
    v1505,
    v1506,
    v1507,
    v1508,
    v1509);
  v1510 = (CombineCostumeMaster_o *)sub_1C942E4(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1510, 0);
  if ( v1510 )
  {
    v3 = sub_1C941D4(v1510, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD7u )
    goto LABEL_1661;
  v1->m_Items[215] = (DataMasterBase_o *)v1510;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[215],
    (int32_t)v1510,
    v1511,
    v1512,
    v1513,
    v1514,
    v1515,
    v1516);
  v1517 = (ServantCostumeMaster_o *)sub_1C942E4(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1517, 0);
  if ( v1517 )
  {
    v3 = sub_1C941D4(v1517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD8u )
    goto LABEL_1661;
  v1->m_Items[216] = (DataMasterBase_o *)v1517;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[216],
    (int32_t)v1517,
    v1518,
    v1519,
    v1520,
    v1521,
    v1522,
    v1523);
  v1524 = (ServantCostumeReleaseMaster_o *)sub_1C942E4(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1524, 0);
  if ( v1524 )
  {
    v3 = sub_1C941D4(v1524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xD9u )
    goto LABEL_1661;
  v1->m_Items[217] = (DataMasterBase_o *)v1524;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[217],
    (int32_t)v1524,
    v1525,
    v1526,
    v1527,
    v1528,
    v1529,
    v1530);
  v1531 = (StaffPhotoMaster_o *)sub_1C942E4(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v1531, 0);
  if ( v1531 )
  {
    v3 = sub_1C941D4(v1531, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDAu )
    goto LABEL_1661;
  v1->m_Items[218] = (DataMasterBase_o *)v1531;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[218],
    (int32_t)v1531,
    v1532,
    v1533,
    v1534,
    v1535,
    v1536,
    v1537);
  v1538 = (StaffPhotoCostumeMaster_o *)sub_1C942E4(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v1538, 0);
  if ( v1538 )
  {
    v3 = sub_1C941D4(v1538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDBu )
    goto LABEL_1661;
  v1->m_Items[219] = (DataMasterBase_o *)v1538;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[219],
    (int32_t)v1538,
    v1539,
    v1540,
    v1541,
    v1542,
    v1543,
    v1544);
  v1545 = (UserFriendRequestHistoryMaster_o *)sub_1C942E4(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1545, 0);
  if ( v1545 )
  {
    v3 = sub_1C941D4(v1545, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDCu )
    goto LABEL_1661;
  v1->m_Items[220] = (DataMasterBase_o *)v1545;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[220],
    (int32_t)v1545,
    v1546,
    v1547,
    v1548,
    v1549,
    v1550,
    v1551);
  v1552 = (UserBlacklistMaster_o *)sub_1C942E4(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1552, 0);
  if ( v1552 )
  {
    v3 = sub_1C941D4(v1552, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDDu )
    goto LABEL_1661;
  v1->m_Items[221] = (DataMasterBase_o *)v1552;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[221],
    (int32_t)v1552,
    v1553,
    v1554,
    v1555,
    v1556,
    v1557,
    v1558);
  v1559 = (ItemSelectMaster_o *)sub_1C942E4(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1559, 0);
  if ( v1559 )
  {
    v3 = sub_1C941D4(v1559, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDEu )
    goto LABEL_1661;
  v1->m_Items[222] = (DataMasterBase_o *)v1559;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[222],
    (int32_t)v1559,
    v1560,
    v1561,
    v1562,
    v1563,
    v1564,
    v1565);
  v1566 = (TotalEventRaceMaster_o *)sub_1C942E4(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1566, 0);
  if ( v1566 )
  {
    v3 = sub_1C941D4(v1566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xDFu )
    goto LABEL_1661;
  v1->m_Items[223] = (DataMasterBase_o *)v1566;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[223],
    (int32_t)v1566,
    v1567,
    v1568,
    v1569,
    v1570,
    v1571,
    v1572);
  v1573 = (EventPointGroupAddMaster_o *)sub_1C942E4(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1573, 0);
  if ( v1573 )
  {
    v3 = sub_1C941D4(v1573, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE0u )
    goto LABEL_1661;
  v1->m_Items[224] = (DataMasterBase_o *)v1573;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[224],
    (int32_t)v1573,
    v1574,
    v1575,
    v1576,
    v1577,
    v1578,
    v1579);
  v1580 = (VoicePlayGroupMaster_o *)sub_1C942E4(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1580, 0);
  if ( v1580 )
  {
    v3 = sub_1C941D4(v1580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE1u )
    goto LABEL_1661;
  v1->m_Items[225] = (DataMasterBase_o *)v1580;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[225],
    (int32_t)v1580,
    v1581,
    v1582,
    v1583,
    v1584,
    v1585,
    v1586);
  v1587 = (VoicePlayCondMaster_o *)sub_1C942E4(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1587, 0);
  if ( v1587 )
  {
    v3 = sub_1C941D4(v1587, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE2u )
    goto LABEL_1661;
  v1->m_Items[226] = (DataMasterBase_o *)v1587;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[226],
    (int32_t)v1587,
    v1588,
    v1589,
    v1590,
    v1591,
    v1592,
    v1593);
  v1594 = (GachaStoryAdjustMaster_o *)sub_1C942E4(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1594, 0);
  if ( v1594 )
  {
    v3 = sub_1C941D4(v1594, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE3u )
    goto LABEL_1661;
  v1->m_Items[227] = (DataMasterBase_o *)v1594;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[227],
    (int32_t)v1594,
    v1595,
    v1596,
    v1597,
    v1598,
    v1599,
    v1600);
  v1601 = (ServantFlagMaster_o *)sub_1C942E4(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1601, 0);
  if ( v1601 )
  {
    v3 = sub_1C941D4(v1601, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE4u )
    goto LABEL_1661;
  v1->m_Items[228] = (DataMasterBase_o *)v1601;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[228],
    (int32_t)v1601,
    v1602,
    v1603,
    v1604,
    v1605,
    v1606,
    v1607);
  v1608 = (ServantFlagReleaseMaster_o *)sub_1C942E4(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1608, 0);
  if ( v1608 )
  {
    v3 = sub_1C941D4(v1608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE5u )
    goto LABEL_1661;
  v1->m_Items[229] = (DataMasterBase_o *)v1608;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[229],
    (int32_t)v1608,
    v1609,
    v1610,
    v1611,
    v1612,
    v1613,
    v1614);
  v1615 = (EventLocationCampaignMaster_o *)sub_1C942E4(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1615, 0);
  if ( v1615 )
  {
    v3 = sub_1C941D4(v1615, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE6u )
    goto LABEL_1661;
  v1->m_Items[230] = (DataMasterBase_o *)v1615;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[230],
    (int32_t)v1615,
    v1616,
    v1617,
    v1618,
    v1619,
    v1620,
    v1621);
  v1622 = (CampaignInfoMaster_o *)sub_1C942E4(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1622, 0);
  if ( v1622 )
  {
    v3 = sub_1C941D4(v1622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE7u )
    goto LABEL_1661;
  v1->m_Items[231] = (DataMasterBase_o *)v1622;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[231],
    (int32_t)v1622,
    v1623,
    v1624,
    v1625,
    v1626,
    v1627,
    v1628);
  v1629 = (DialogMessageMaster_o *)sub_1C942E4(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1629, 0);
  if ( v1629 )
  {
    v3 = sub_1C941D4(v1629, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE8u )
    goto LABEL_1661;
  v1->m_Items[232] = (DataMasterBase_o *)v1629;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[232],
    (int32_t)v1629,
    v1630,
    v1631,
    v1632,
    v1633,
    v1634,
    v1635);
  v1636 = (ServantIndividualityMaster_o *)sub_1C942E4(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1636, 0);
  if ( v1636 )
  {
    v3 = sub_1C941D4(v1636, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xE9u )
    goto LABEL_1661;
  v1->m_Items[233] = (DataMasterBase_o *)v1636;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[233],
    (int32_t)v1636,
    v1637,
    v1638,
    v1639,
    v1640,
    v1641,
    v1642);
  v1643 = (BoardMessageMaster_o *)sub_1C942E4(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1643, 0);
  if ( v1643 )
  {
    v3 = sub_1C941D4(v1643, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEAu )
    goto LABEL_1661;
  v1->m_Items[234] = (DataMasterBase_o *)v1643;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[234],
    (int32_t)v1643,
    v1644,
    v1645,
    v1646,
    v1647,
    v1648,
    v1649);
  v1650 = (BoardMessageReleaseMaster_o *)sub_1C942E4(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1650, 0);
  if ( v1650 )
  {
    v3 = sub_1C941D4(v1650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEBu )
    goto LABEL_1661;
  v1->m_Items[235] = (DataMasterBase_o *)v1650;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[235],
    (int32_t)v1650,
    v1651,
    v1652,
    v1653,
    v1654,
    v1655,
    v1656);
  v1657 = (EventServantFatigueMaster_o *)sub_1C942E4(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1657, 0);
  if ( v1657 )
  {
    v3 = sub_1C941D4(v1657, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xECu )
    goto LABEL_1661;
  v1->m_Items[236] = (DataMasterBase_o *)v1657;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[236],
    (int32_t)v1657,
    v1658,
    v1659,
    v1660,
    v1661,
    v1662,
    v1663);
  v1664 = (UserEventDeckMaster_o *)sub_1C942E4(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1664, 0);
  if ( v1664 )
  {
    v3 = sub_1C941D4(v1664, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEDu )
    goto LABEL_1661;
  v1->m_Items[237] = (DataMasterBase_o *)v1664;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[237],
    (int32_t)v1664,
    v1665,
    v1666,
    v1667,
    v1668,
    v1669,
    v1670);
  v1671 = (EventTowerMaster_o *)sub_1C942E4(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1671, 0);
  if ( v1671 )
  {
    v3 = sub_1C941D4(v1671, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEEu )
    goto LABEL_1661;
  v1->m_Items[238] = (DataMasterBase_o *)v1671;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[238],
    (int32_t)v1671,
    v1672,
    v1673,
    v1674,
    v1675,
    v1676,
    v1677);
  v1678 = (EventTowerRewardMaster_o *)sub_1C942E4(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1678, 0);
  if ( v1678 )
  {
    v3 = sub_1C941D4(v1678, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xEFu )
    goto LABEL_1661;
  v1->m_Items[239] = (DataMasterBase_o *)v1678;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[239],
    (int32_t)v1678,
    v1679,
    v1680,
    v1681,
    v1682,
    v1683,
    v1684);
  v1685 = (EventBulletinBoardMaster_o *)sub_1C942E4(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1685, 0);
  if ( v1685 )
  {
    v3 = sub_1C941D4(v1685, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF0u )
    goto LABEL_1661;
  v1->m_Items[240] = (DataMasterBase_o *)v1685;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[240],
    (int32_t)v1685,
    v1686,
    v1687,
    v1688,
    v1689,
    v1690,
    v1691);
  v1692 = (EventBulletinBoardReleaseMaster_o *)sub_1C942E4(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1692, 0);
  if ( v1692 )
  {
    v3 = sub_1C941D4(v1692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF1u )
    goto LABEL_1661;
  v1->m_Items[241] = (DataMasterBase_o *)v1692;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[241],
    (int32_t)v1692,
    v1693,
    v1694,
    v1695,
    v1696,
    v1697,
    v1698);
  v1699 = (EventFactoryMaster_o *)sub_1C942E4(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1699, 0);
  if ( v1699 )
  {
    v3 = sub_1C941D4(v1699, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF2u )
    goto LABEL_1661;
  v1->m_Items[242] = (DataMasterBase_o *)v1699;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[242],
    (int32_t)v1699,
    v1700,
    v1701,
    v1702,
    v1703,
    v1704,
    v1705);
  v1706 = (ShopGroupMaster_o *)sub_1C942E4(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1706, 0);
  if ( v1706 )
  {
    v3 = sub_1C941D4(v1706, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF3u )
    goto LABEL_1661;
  v1->m_Items[243] = (DataMasterBase_o *)v1706;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[243],
    (int32_t)v1706,
    v1707,
    v1708,
    v1709,
    v1710,
    v1711,
    v1712);
  v1713 = (AuraEffectMaster_o *)sub_1C942E4(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1713, 0);
  if ( v1713 )
  {
    v3 = sub_1C941D4(v1713, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF4u )
    goto LABEL_1661;
  v1->m_Items[244] = (DataMasterBase_o *)v1713;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[244],
    (int32_t)v1713,
    v1714,
    v1715,
    v1716,
    v1717,
    v1718,
    v1719);
  v1720 = (AuraEffectPosOverwriteMaster_o *)sub_1C942E4(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1720, 0);
  if ( v1720 )
  {
    v3 = sub_1C941D4(v1720, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF5u )
    goto LABEL_1661;
  v1->m_Items[245] = (DataMasterBase_o *)v1720;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[245],
    (int32_t)v1720,
    v1721,
    v1722,
    v1723,
    v1724,
    v1725,
    v1726);
  v1727 = (UserEventMissionFixMaster_o *)sub_1C942E4(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1727, 0);
  if ( v1727 )
  {
    v3 = sub_1C941D4(v1727, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF6u )
    goto LABEL_1661;
  v1->m_Items[246] = (DataMasterBase_o *)v1727;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[246],
    (int32_t)v1727,
    v1728,
    v1729,
    v1730,
    v1731,
    v1732,
    v1733);
  v1734 = (NotEndEventMissionFixMaster_o *)sub_1C942E4(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1734, 0);
  if ( v1734 )
  {
    v3 = sub_1C941D4(v1734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF7u )
    goto LABEL_1661;
  v1->m_Items[247] = (DataMasterBase_o *)v1734;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[247],
    (int32_t)v1734,
    v1735,
    v1736,
    v1737,
    v1738,
    v1739,
    v1740);
  v1741 = (EnemyMstMaster_o *)sub_1C942E4(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1741, 0);
  if ( v1741 )
  {
    v3 = sub_1C941D4(v1741, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF8u )
    goto LABEL_1661;
  v1->m_Items[248] = (DataMasterBase_o *)v1741;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[248],
    (int32_t)v1741,
    v1742,
    v1743,
    v1744,
    v1745,
    v1746,
    v1747);
  v1748 = (EnemyMstBattleMaster_o *)sub_1C942E4(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1748, 0);
  if ( v1748 )
  {
    v3 = sub_1C941D4(v1748, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xF9u )
    goto LABEL_1661;
  v1->m_Items[249] = (DataMasterBase_o *)v1748;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[249],
    (int32_t)v1748,
    v1749,
    v1750,
    v1751,
    v1752,
    v1753,
    v1754);
  v1755 = (ServantSkillReleaseMaster_o *)sub_1C942E4(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1755, 0);
  if ( v1755 )
  {
    v3 = sub_1C941D4(v1755, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFAu )
    goto LABEL_1661;
  v1->m_Items[250] = (DataMasterBase_o *)v1755;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[250],
    (int32_t)v1755,
    v1756,
    v1757,
    v1758,
    v1759,
    v1760,
    v1761);
  v1762 = (ServantPassiveSkillReleaseMaster_o *)sub_1C942E4(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1762, 0);
  if ( v1762 )
  {
    v3 = sub_1C941D4(v1762, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFBu )
    goto LABEL_1661;
  v1->m_Items[251] = (DataMasterBase_o *)v1762;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[251],
    (int32_t)v1762,
    v1763,
    v1764,
    v1765,
    v1766,
    v1767,
    v1768);
  v1769 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C942E4(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1769, 0);
  if ( v1769 )
  {
    v3 = sub_1C941D4(v1769, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFCu )
    goto LABEL_1661;
  v1->m_Items[252] = (DataMasterBase_o *)v1769;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[252],
    (int32_t)v1769,
    v1770,
    v1771,
    v1772,
    v1773,
    v1774,
    v1775);
  v1776 = (MapGimmickReleaseMaster_o *)sub_1C942E4(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1776, 0);
  if ( v1776 )
  {
    v3 = sub_1C941D4(v1776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFDu )
    goto LABEL_1661;
  v1->m_Items[253] = (DataMasterBase_o *)v1776;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[253],
    (int32_t)v1776,
    v1777,
    v1778,
    v1779,
    v1780,
    v1781,
    v1782);
  v1783 = (CommandCodeMaster_o *)sub_1C942E4(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1783, 0);
  if ( v1783 )
  {
    v3 = sub_1C941D4(v1783, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFEu )
    goto LABEL_1661;
  v1->m_Items[254] = (DataMasterBase_o *)v1783;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[254],
    (int32_t)v1783,
    v1784,
    v1785,
    v1786,
    v1787,
    v1788,
    v1789);
  v1790 = (ServantCommandCodeUnlockMaster_o *)sub_1C942E4(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1790, 0);
  if ( v1790 )
  {
    v3 = sub_1C941D4(v1790, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0xFFu )
    goto LABEL_1661;
  v1->m_Items[255] = (DataMasterBase_o *)v1790;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[255],
    (int32_t)v1790,
    v1791,
    v1792,
    v1793,
    v1794,
    v1795,
    v1796);
  v1797 = (UserCommandCodeMaster_o *)sub_1C942E4(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1797, 0);
  if ( v1797 )
  {
    v3 = sub_1C941D4(v1797, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x100u )
    goto LABEL_1661;
  v1->m_Items[256] = (DataMasterBase_o *)v1797;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[256],
    (int32_t)v1797,
    v1798,
    v1799,
    v1800,
    v1801,
    v1802,
    v1803);
  v1804 = (UserCommandCodeCollectionMaster_o *)sub_1C942E4(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1804, 0);
  if ( v1804 )
  {
    v3 = sub_1C941D4(v1804, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x101u )
    goto LABEL_1661;
  v1->m_Items[257] = (DataMasterBase_o *)v1804;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[257],
    (int32_t)v1804,
    v1805,
    v1806,
    v1807,
    v1808,
    v1809,
    v1810);
  v1811 = (UserServantCommandCodeMaster_o *)sub_1C942E4(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1811, 0);
  if ( v1811 )
  {
    v3 = sub_1C941D4(v1811, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x102u )
    goto LABEL_1661;
  v1->m_Items[258] = (DataMasterBase_o *)v1811;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[258],
    (int32_t)v1811,
    v1812,
    v1813,
    v1814,
    v1815,
    v1816,
    v1817);
  v1818 = (UserServantCommandCardMaster_o *)sub_1C942E4(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1818, 0);
  if ( v1818 )
  {
    v3 = sub_1C941D4(v1818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x103u )
    goto LABEL_1661;
  v1->m_Items[259] = (DataMasterBase_o *)v1818;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[259],
    (int32_t)v1818,
    v1819,
    v1820,
    v1821,
    v1822,
    v1823,
    v1824);
  v1825 = (CommandCardRankParamMaster_o *)sub_1C942E4(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1825, 0);
  if ( v1825 )
  {
    v3 = sub_1C941D4(v1825, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x104u )
    goto LABEL_1661;
  v1->m_Items[260] = (DataMasterBase_o *)v1825;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[260],
    (int32_t)v1825,
    v1826,
    v1827,
    v1828,
    v1829,
    v1830,
    v1831);
  v1832 = (CommandCodeSkillMaster_o *)sub_1C942E4(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1832, 0);
  if ( v1832 )
  {
    v3 = sub_1C941D4(v1832, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x105u )
    goto LABEL_1661;
  v1->m_Items[261] = (DataMasterBase_o *)v1832;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[261],
    (int32_t)v1832,
    v1833,
    v1834,
    v1835,
    v1836,
    v1837,
    v1838);
  v1839 = (CommandCodeSkillReleaseMaster_o *)sub_1C942E4(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1839, 0);
  if ( v1839 )
  {
    v3 = sub_1C941D4(v1839, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x106u )
    goto LABEL_1661;
  v1->m_Items[262] = (DataMasterBase_o *)v1839;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[262],
    (int32_t)v1839,
    v1840,
    v1841,
    v1842,
    v1843,
    v1844,
    v1845);
  v1846 = (CommandCodeCommentMaster_o *)sub_1C942E4(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1846, 0);
  if ( v1846 )
  {
    v3 = sub_1C941D4(v1846, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x107u )
    goto LABEL_1661;
  v1->m_Items[263] = (DataMasterBase_o *)v1846;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[263],
    (int32_t)v1846,
    v1847,
    v1848,
    v1849,
    v1850,
    v1851,
    v1852);
  v1853 = (EventStatusMaster_o *)sub_1C942E4(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1853, 0);
  if ( v1853 )
  {
    v3 = sub_1C941D4(v1853, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x108u )
    goto LABEL_1661;
  v1->m_Items[264] = (DataMasterBase_o *)v1853;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[264],
    (int32_t)v1853,
    v1854,
    v1855,
    v1856,
    v1857,
    v1858,
    v1859);
  v1860 = (EventStatusQuestMaster_o *)sub_1C942E4(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1860, 0);
  if ( v1860 )
  {
    v3 = sub_1C941D4(v1860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x109u )
    goto LABEL_1661;
  v1->m_Items[265] = (DataMasterBase_o *)v1860;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[265],
    (int32_t)v1860,
    v1861,
    v1862,
    v1863,
    v1864,
    v1865,
    v1866);
  v1867 = (CommonRestrictionMaster_o *)sub_1C942E4(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1867, 0);
  if ( v1867 )
  {
    v3 = sub_1C941D4(v1867, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Au )
    goto LABEL_1661;
  v1->m_Items[266] = (DataMasterBase_o *)v1867;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[266],
    (int32_t)v1867,
    v1868,
    v1869,
    v1870,
    v1871,
    v1872,
    v1873);
  v1874 = (EventPointBuffMaster_o *)sub_1C942E4(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1874, 0);
  if ( v1874 )
  {
    v3 = sub_1C941D4(v1874, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Bu )
    goto LABEL_1661;
  v1->m_Items[267] = (DataMasterBase_o *)v1874;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[267],
    (int32_t)v1874,
    v1875,
    v1876,
    v1877,
    v1878,
    v1879,
    v1880);
  v1881 = (UserFollowMaster_o *)sub_1C942E4(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1881, 0);
  if ( v1881 )
  {
    v3 = sub_1C941D4(v1881, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Cu )
    goto LABEL_1661;
  v1->m_Items[268] = (DataMasterBase_o *)v1881;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[268],
    (int32_t)v1881,
    v1882,
    v1883,
    v1884,
    v1885,
    v1886,
    v1887);
  v1888 = (EventRewardGuideReleaseMaster_o *)sub_1C942E4(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1888, 0);
  if ( v1888 )
  {
    v3 = sub_1C941D4(v1888, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Du )
    goto LABEL_1661;
  v1->m_Items[269] = (DataMasterBase_o *)v1888;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[269],
    (int32_t)v1888,
    v1889,
    v1890,
    v1891,
    v1892,
    v1893,
    v1894);
  v1895 = (NpcServantEquipMaster_o *)sub_1C942E4(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1895, 0);
  if ( v1895 )
  {
    v3 = sub_1C941D4(v1895, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Eu )
    goto LABEL_1661;
  v1->m_Items[270] = (DataMasterBase_o *)v1895;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[270],
    (int32_t)v1895,
    v1896,
    v1897,
    v1898,
    v1899,
    v1900,
    v1901);
  v1902 = (EventCampaignReleaseMaster_o *)sub_1C942E4(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1902, 0);
  if ( v1902 )
  {
    v3 = sub_1C941D4(v1902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Fu )
    goto LABEL_1661;
  v1->m_Items[271] = (DataMasterBase_o *)v1902;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[271],
    (int32_t)v1902,
    v1903,
    v1904,
    v1905,
    v1906,
    v1907,
    v1908);
  v1909 = (ServantMaterialFolderMaster_o *)sub_1C942E4(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1909, 0);
  if ( v1909 )
  {
    v3 = sub_1C941D4(v1909, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x110u )
    goto LABEL_1661;
  v1->m_Items[272] = (DataMasterBase_o *)v1909;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[272],
    (int32_t)v1909,
    v1910,
    v1911,
    v1912,
    v1913,
    v1914,
    v1915);
  v1916 = (EventEquipSkillReleaseMaster_o *)sub_1C942E4(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1916, 0);
  if ( v1916 )
  {
    v3 = sub_1C941D4(v1916, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x111u )
    goto LABEL_1661;
  v1->m_Items[273] = (DataMasterBase_o *)v1916;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[273],
    (int32_t)v1916,
    v1917,
    v1918,
    v1919,
    v1920,
    v1921,
    v1922);
  v1923 = (EventPointActivityMaster_o *)sub_1C942E4(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1923, 0);
  if ( v1923 )
  {
    v3 = sub_1C941D4(v1923, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x112u )
    goto LABEL_1661;
  v1->m_Items[274] = (DataMasterBase_o *)v1923;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[274],
    (int32_t)v1923,
    v1924,
    v1925,
    v1926,
    v1927,
    v1928,
    v1929);
  v1930 = (FunctionCategoryMaster_o *)sub_1C942E4(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1930, 0);
  if ( v1930 )
  {
    v3 = sub_1C941D4(v1930, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x113u )
    goto LABEL_1661;
  v1->m_Items[275] = (DataMasterBase_o *)v1930;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[275],
    (int32_t)v1930,
    v1931,
    v1932,
    v1933,
    v1934,
    v1935,
    v1936);
  v1937 = (QuestPickupMaster_o *)sub_1C942E4(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1937, 0);
  if ( v1937 )
  {
    v3 = sub_1C941D4(v1937, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x114u )
    goto LABEL_1661;
  v1->m_Items[276] = (DataMasterBase_o *)v1937;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[276],
    (int32_t)v1937,
    v1938,
    v1939,
    v1940,
    v1941,
    v1942,
    v1943);
  v1944 = (EventUiMaster_o *)sub_1C942E4(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1944, 0);
  if ( v1944 )
  {
    v3 = sub_1C941D4(v1944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x115u )
    goto LABEL_1661;
  v1->m_Items[277] = (DataMasterBase_o *)v1944;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[277],
    (int32_t)v1944,
    v1945,
    v1946,
    v1947,
    v1948,
    v1949,
    v1950);
  v1951 = (EventUiReleaseMaster_o *)sub_1C942E4(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1951, 0);
  if ( v1951 )
  {
    v3 = sub_1C941D4(v1951, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x116u )
    goto LABEL_1661;
  v1->m_Items[278] = (DataMasterBase_o *)v1951;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[278],
    (int32_t)v1951,
    v1952,
    v1953,
    v1954,
    v1955,
    v1956,
    v1957);
  v1958 = (EventUiValueMaster_o *)sub_1C942E4(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1958, 0);
  if ( v1958 )
  {
    v3 = sub_1C941D4(v1958, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x117u )
    goto LABEL_1661;
  v1->m_Items[279] = (DataMasterBase_o *)v1958;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[279],
    (int32_t)v1958,
    v1959,
    v1960,
    v1961,
    v1962,
    v1963,
    v1964);
  v1965 = (EventConquestRewardMaster_o *)sub_1C942E4(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1965, 0);
  if ( v1965 )
  {
    v3 = sub_1C941D4(v1965, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x118u )
    goto LABEL_1661;
  v1->m_Items[280] = (DataMasterBase_o *)v1965;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[280],
    (int32_t)v1965,
    v1966,
    v1967,
    v1968,
    v1969,
    v1970,
    v1971);
  v1972 = (NpcFollowerReleaseMaster_o *)sub_1C942E4(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1972, 0);
  if ( v1972 )
  {
    v3 = sub_1C941D4(v1972, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x119u )
    goto LABEL_1661;
  v1->m_Items[281] = (DataMasterBase_o *)v1972;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[281],
    (int32_t)v1972,
    v1973,
    v1974,
    v1975,
    v1976,
    v1977,
    v1978);
  v1979 = (EventBonusFilterMaster_o *)sub_1C942E4(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1979, 0);
  if ( v1979 )
  {
    v3 = sub_1C941D4(v1979, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Au )
    goto LABEL_1661;
  v1->m_Items[282] = (DataMasterBase_o *)v1979;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[282],
    (int32_t)v1979,
    v1980,
    v1981,
    v1982,
    v1983,
    v1984,
    v1985);
  v1986 = (EventBonusFilterGroupInfoMaster_o *)sub_1C942E4(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1986, 0);
  if ( v1986 )
  {
    v3 = sub_1C941D4(v1986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Bu )
    goto LABEL_1661;
  v1->m_Items[283] = (DataMasterBase_o *)v1986;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[283],
    (int32_t)v1986,
    v1987,
    v1988,
    v1989,
    v1990,
    v1991,
    v1992);
  v1993 = (EventBonusFilterGroupMemberMaster_o *)sub_1C942E4(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1993, 0);
  if ( v1993 )
  {
    v3 = sub_1C941D4(v1993, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Cu )
    goto LABEL_1661;
  v1->m_Items[284] = (DataMasterBase_o *)v1993;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[284],
    (int32_t)v1993,
    v1994,
    v1995,
    v1996,
    v1997,
    v1998,
    v1999);
  v2000 = (UserGachaExtraCountMaster_o *)sub_1C942E4(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v2000, 0);
  if ( v2000 )
  {
    v3 = sub_1C941D4(v2000, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Du )
    goto LABEL_1661;
  v1->m_Items[285] = (DataMasterBase_o *)v2000;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[285],
    (int32_t)v2000,
    v2001,
    v2002,
    v2003,
    v2004,
    v2005,
    v2006);
  v2007 = (PrivilegeMaster_o *)sub_1C942E4(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v2007, 0);
  if ( v2007 )
  {
    v3 = sub_1C941D4(v2007, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Eu )
    goto LABEL_1661;
  v1->m_Items[286] = (DataMasterBase_o *)v2007;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[286],
    (int32_t)v2007,
    v2008,
    v2009,
    v2010,
    v2011,
    v2012,
    v2013);
  v2014 = (UserPrivilegeMaster_o *)sub_1C942E4(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v2014, 0);
  if ( v2014 )
  {
    v3 = sub_1C941D4(v2014, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Fu )
    goto LABEL_1661;
  v1->m_Items[287] = (DataMasterBase_o *)v2014;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[287],
    (int32_t)v2014,
    v2015,
    v2016,
    v2017,
    v2018,
    v2019,
    v2020);
  v2021 = (UserQuestRouteMaster_o *)sub_1C942E4(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v2021, 0);
  if ( v2021 )
  {
    v3 = sub_1C941D4(v2021, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x120u )
    goto LABEL_1661;
  v1->m_Items[288] = (DataMasterBase_o *)v2021;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[288],
    (int32_t)v2021,
    v2022,
    v2023,
    v2024,
    v2025,
    v2026,
    v2027);
  v2028 = (EventBossStatusUiMaster_o *)sub_1C942E4(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v2028, 0);
  if ( v2028 )
  {
    v3 = sub_1C941D4(v2028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x121u )
    goto LABEL_1661;
  v1->m_Items[289] = (DataMasterBase_o *)v2028;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[289],
    (int32_t)v2028,
    v2029,
    v2030,
    v2031,
    v2032,
    v2033,
    v2034);
  v2035 = (CommonReleaseMaster_o *)sub_1C942E4(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v2035, 0);
  if ( v2035 )
  {
    v3 = sub_1C941D4(v2035, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x122u )
    goto LABEL_1661;
  v1->m_Items[290] = (DataMasterBase_o *)v2035;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[290],
    (int32_t)v2035,
    v2036,
    v2037,
    v2038,
    v2039,
    v2040,
    v2041);
  v2042 = (QuestSpotReleaseMaster_o *)sub_1C942E4(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v2042, 0);
  if ( v2042 )
  {
    v3 = sub_1C941D4(v2042, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x123u )
    goto LABEL_1661;
  v1->m_Items[291] = (DataMasterBase_o *)v2042;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[291],
    (int32_t)v2042,
    v2043,
    v2044,
    v2045,
    v2046,
    v2047,
    v2048);
  v2049 = (VoiceMaterialCondMaster_o *)sub_1C942E4(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v2049, 0);
  if ( v2049 )
  {
    v3 = sub_1C941D4(v2049, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x124u )
    goto LABEL_1661;
  v1->m_Items[292] = (DataMasterBase_o *)v2049;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[292],
    (int32_t)v2049,
    v2050,
    v2051,
    v2052,
    v2053,
    v2054,
    v2055);
  v2056 = (ClassRelationOverwriteMaster_o *)sub_1C942E4(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v2056, 0);
  if ( v2056 )
  {
    v3 = sub_1C941D4(v2056, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x125u )
    goto LABEL_1661;
  v1->m_Items[293] = (DataMasterBase_o *)v2056;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[293],
    (int32_t)v2056,
    v2057,
    v2058,
    v2059,
    v2060,
    v2061,
    v2062);
  v2063 = (EventGroupMaster_o *)sub_1C942E4(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v2063, 0);
  if ( v2063 )
  {
    v3 = sub_1C941D4(v2063, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x126u )
    goto LABEL_1661;
  v1->m_Items[294] = (DataMasterBase_o *)v2063;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[294],
    (int32_t)v2063,
    v2064,
    v2065,
    v2066,
    v2067,
    v2068,
    v2069);
  v2070 = (TotalBoxGachaMaster_o *)sub_1C942E4(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v2070, 0);
  if ( v2070 )
  {
    v3 = sub_1C941D4(v2070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x127u )
    goto LABEL_1661;
  v1->m_Items[295] = (DataMasterBase_o *)v2070;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[295],
    (int32_t)v2070,
    v2071,
    v2072,
    v2073,
    v2074,
    v2075,
    v2076);
  v2077 = (ServantTreasureDeviceDamageMaster_o *)sub_1C942E4(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v2077, 0);
  if ( v2077 )
  {
    v3 = sub_1C941D4(v2077, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x128u )
    goto LABEL_1661;
  v1->m_Items[296] = (DataMasterBase_o *)v2077;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[296],
    (int32_t)v2077,
    v2078,
    v2079,
    v2080,
    v2081,
    v2082,
    v2083);
  v2084 = (UserEventServantFatigueMaster_o *)sub_1C942E4(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v2084, 0);
  if ( v2084 )
  {
    v3 = sub_1C941D4(v2084, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x129u )
    goto LABEL_1661;
  v1->m_Items[297] = (DataMasterBase_o *)v2084;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[297],
    (int32_t)v2084,
    v2085,
    v2086,
    v2087,
    v2088,
    v2089,
    v2090);
  v2091 = (EventRewardBgMaster_o *)sub_1C942E4(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v2091, 0);
  if ( v2091 )
  {
    v3 = sub_1C941D4(v2091, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Au )
    goto LABEL_1661;
  v1->m_Items[298] = (DataMasterBase_o *)v2091;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[298],
    (int32_t)v2091,
    v2092,
    v2093,
    v2094,
    v2095,
    v2096,
    v2097);
  v2098 = (EventFatigueRecoveryMaster_o *)sub_1C942E4(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v2098, 0);
  if ( v2098 )
  {
    v3 = sub_1C941D4(v2098, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Bu )
    goto LABEL_1661;
  v1->m_Items[299] = (DataMasterBase_o *)v2098;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[299],
    (int32_t)v2098,
    v2099,
    v2100,
    v2101,
    v2102,
    v2103,
    v2104);
  v2105 = (EventBoostItemUsedMaster_o *)sub_1C942E4(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v2105, 0);
  if ( v2105 )
  {
    v3 = sub_1C941D4(v2105, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Cu )
    goto LABEL_1661;
  v1->m_Items[300] = (DataMasterBase_o *)v2105;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[300],
    (int32_t)v2105,
    v2106,
    v2107,
    v2108,
    v2109,
    v2110,
    v2111);
  v2112 = (StatusEffectPosOverwriteMaster_o *)sub_1C942E4(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v2112, 0);
  if ( v2112 )
  {
    v3 = sub_1C941D4(v2112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Du )
    goto LABEL_1661;
  v1->m_Items[301] = (DataMasterBase_o *)v2112;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[301],
    (int32_t)v2112,
    v2113,
    v2114,
    v2115,
    v2116,
    v2117,
    v2118);
  v2119 = (QuestPhaseDetailAddMaster_o *)sub_1C942E4(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v2119, 0);
  if ( v2119 )
  {
    v3 = sub_1C941D4(v2119, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Eu )
    goto LABEL_1661;
  v1->m_Items[302] = (DataMasterBase_o *)v2119;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[302],
    (int32_t)v2119,
    v2120,
    v2121,
    v2122,
    v2123,
    v2124,
    v2125);
  v2126 = (VoiceClosedMessageMaster_o *)sub_1C942E4(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v2126, 0);
  if ( v2126 )
  {
    v3 = sub_1C941D4(v2126, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Fu )
    goto LABEL_1661;
  v1->m_Items[303] = (DataMasterBase_o *)v2126;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[303],
    (int32_t)v2126,
    v2127,
    v2128,
    v2129,
    v2130,
    v2131,
    v2132);
  v2133 = (ReprintStageMaster_o *)sub_1C942E4(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v2133, 0);
  if ( v2133 )
  {
    v3 = sub_1C941D4(v2133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x130u )
    goto LABEL_1661;
  v1->m_Items[304] = (DataMasterBase_o *)v2133;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[304],
    (int32_t)v2133,
    v2134,
    v2135,
    v2136,
    v2137,
    v2138,
    v2139);
  v2140 = (UserCombineExpMaster_o *)sub_1C942E4(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v2140, 0);
  if ( v2140 )
  {
    v3 = sub_1C941D4(v2140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x131u )
    goto LABEL_1661;
  v1->m_Items[305] = (DataMasterBase_o *)v2140;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[305],
    (int32_t)v2140,
    v2141,
    v2142,
    v2143,
    v2144,
    v2145,
    v2146);
  v2147 = (EventBoardGameCellMaster_o *)sub_1C942E4(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v2147, 0);
  if ( v2147 )
  {
    v3 = sub_1C941D4(v2147, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x132u )
    goto LABEL_1661;
  v1->m_Items[306] = (DataMasterBase_o *)v2147;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[306],
    (int32_t)v2147,
    v2148,
    v2149,
    v2150,
    v2151,
    v2152,
    v2153);
  v2154 = (EventBoardGameTokenMaster_o *)sub_1C942E4(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v2154, 0);
  if ( v2154 )
  {
    v3 = sub_1C941D4(v2154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x133u )
    goto LABEL_1661;
  v1->m_Items[307] = (DataMasterBase_o *)v2154;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[307],
    (int32_t)v2154,
    v2155,
    v2156,
    v2157,
    v2158,
    v2159,
    v2160);
  v2161 = (EventBoardGameTokenRewardMaster_o *)sub_1C942E4(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v2161, 0);
  if ( v2161 )
  {
    v3 = sub_1C941D4(v2161, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x134u )
    goto LABEL_1661;
  v1->m_Items[308] = (DataMasterBase_o *)v2161;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[308],
    (int32_t)v2161,
    v2162,
    v2163,
    v2164,
    v2165,
    v2166,
    v2167);
  v2168 = (UserEventBoardGameTokenMaster_o *)sub_1C942E4(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v2168, 0);
  if ( v2168 )
  {
    v3 = sub_1C941D4(v2168, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x135u )
    goto LABEL_1661;
  v1->m_Items[309] = (DataMasterBase_o *)v2168;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[309],
    (int32_t)v2168,
    v2169,
    v2170,
    v2171,
    v2172,
    v2173,
    v2174);
  v2175 = (ServantAnimationOverwriteMaster_o *)sub_1C942E4(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v2175, 0);
  if ( v2175 )
  {
    v3 = sub_1C941D4(v2175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x136u )
    goto LABEL_1661;
  v1->m_Items[310] = (DataMasterBase_o *)v2175;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[310],
    (int32_t)v2175,
    v2176,
    v2177,
    v2178,
    v2179,
    v2180,
    v2181);
  v2182 = (OpeningMovieMaster_o *)sub_1C942E4(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v2182, 0);
  if ( v2182 )
  {
    v3 = sub_1C941D4(v2182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x137u )
    goto LABEL_1661;
  v1->m_Items[311] = (DataMasterBase_o *)v2182;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[311],
    (int32_t)v2182,
    v2183,
    v2184,
    v2185,
    v2186,
    v2187,
    v2188);
  v2189 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C942E4(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v2189, 0);
  if ( v2189 )
  {
    v3 = sub_1C941D4(v2189, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x138u )
    goto LABEL_1661;
  v1->m_Items[312] = (DataMasterBase_o *)v2189;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[312],
    (int32_t)v2189,
    v2190,
    v2191,
    v2192,
    v2193,
    v2194,
    v2195);
  v2196 = (PickupUserFollowerMaster_o *)sub_1C942E4(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v2196, 0);
  if ( v2196 )
  {
    v3 = sub_1C941D4(v2196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x139u )
    goto LABEL_1661;
  v1->m_Items[313] = (DataMasterBase_o *)v2196;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[313],
    (int32_t)v2196,
    v2197,
    v2198,
    v2199,
    v2200,
    v2201,
    v2202);
  v2203 = (ServantCollectionMaster_o *)sub_1C942E4(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v2203, 0);
  if ( v2203 )
  {
    v3 = sub_1C941D4(v2203, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Au )
    goto LABEL_1661;
  v1->m_Items[314] = (DataMasterBase_o *)v2203;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[314],
    (int32_t)v2203,
    v2204,
    v2205,
    v2206,
    v2207,
    v2208,
    v2209);
  v2210 = (GachaBehaviorMaster_o *)sub_1C942E4(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v2210, 0);
  if ( v2210 )
  {
    v3 = sub_1C941D4(v2210, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Bu )
    goto LABEL_1661;
  v1->m_Items[315] = (DataMasterBase_o *)v2210;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[315],
    (int32_t)v2210,
    v2211,
    v2212,
    v2213,
    v2214,
    v2215,
    v2216);
  v2217 = (EventQuestCooltimeMaster_o *)sub_1C942E4(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v2217, 0);
  if ( v2217 )
  {
    v3 = sub_1C941D4(v2217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Cu )
    goto LABEL_1661;
  v1->m_Items[316] = (DataMasterBase_o *)v2217;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[316],
    (int32_t)v2217,
    v2218,
    v2219,
    v2220,
    v2221,
    v2222,
    v2223);
  v2224 = (UserEventQuestCooltimeMaster_o *)sub_1C942E4(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v2224, 0);
  if ( v2224 )
  {
    v3 = sub_1C941D4(v2224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Du )
    goto LABEL_1661;
  v1->m_Items[317] = (DataMasterBase_o *)v2224;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[317],
    (int32_t)v2224,
    v2225,
    v2226,
    v2227,
    v2228,
    v2229,
    v2230);
  v2231 = (BoostMaster_o *)sub_1C942E4(BoostMaster_TypeInfo);
  BoostMaster___ctor(v2231, 0);
  if ( v2231 )
  {
    v3 = sub_1C941D4(v2231, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Eu )
    goto LABEL_1661;
  v1->m_Items[318] = (DataMasterBase_o *)v2231;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[318],
    (int32_t)v2231,
    v2232,
    v2233,
    v2234,
    v2235,
    v2236,
    v2237);
  v2238 = (WarBoardMaster_o *)sub_1C942E4(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v2238, 0);
  if ( v2238 )
  {
    v3 = sub_1C941D4(v2238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Fu )
    goto LABEL_1661;
  v1->m_Items[319] = (DataMasterBase_o *)v2238;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[319],
    (int32_t)v2238,
    v2239,
    v2240,
    v2241,
    v2242,
    v2243,
    v2244);
  v2245 = (WarBoardSquareMaster_o *)sub_1C942E4(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v2245, 0);
  if ( v2245 )
  {
    v3 = sub_1C941D4(v2245, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x140u )
    goto LABEL_1661;
  v1->m_Items[320] = (DataMasterBase_o *)v2245;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[320],
    (int32_t)v2245,
    v2246,
    v2247,
    v2248,
    v2249,
    v2250,
    v2251);
  v2252 = (WarBoardRoadMaster_o *)sub_1C942E4(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v2252, 0);
  if ( v2252 )
  {
    v3 = sub_1C941D4(v2252, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x141u )
    goto LABEL_1661;
  v1->m_Items[321] = (DataMasterBase_o *)v2252;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[321],
    (int32_t)v2252,
    v2253,
    v2254,
    v2255,
    v2256,
    v2257,
    v2258);
  v2259 = (WarBoardStageMaster_o *)sub_1C942E4(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v2259, 0);
  if ( v2259 )
  {
    v3 = sub_1C941D4(v2259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x142u )
    goto LABEL_1661;
  v1->m_Items[322] = (DataMasterBase_o *)v2259;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[322],
    (int32_t)v2259,
    v2260,
    v2261,
    v2262,
    v2263,
    v2264,
    v2265);
  v2266 = (WarBoardActionPointMaster_o *)sub_1C942E4(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v2266, 0);
  if ( v2266 )
  {
    v3 = sub_1C941D4(v2266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x143u )
    goto LABEL_1661;
  v1->m_Items[323] = (DataMasterBase_o *)v2266;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[323],
    (int32_t)v2266,
    v2267,
    v2268,
    v2269,
    v2270,
    v2271,
    v2272);
  v2273 = (WarBoardActionTrendMaster_o *)sub_1C942E4(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v2273, 0);
  if ( v2273 )
  {
    v3 = sub_1C941D4(v2273, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x144u )
    goto LABEL_1661;
  v1->m_Items[324] = (DataMasterBase_o *)v2273;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[324],
    (int32_t)v2273,
    v2274,
    v2275,
    v2276,
    v2277,
    v2278,
    v2279);
  v2280 = (WarBoardTacticalTrendMaster_o *)sub_1C942E4(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v2280, 0);
  if ( v2280 )
  {
    v3 = sub_1C941D4(v2280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x145u )
    goto LABEL_1661;
  v1->m_Items[325] = (DataMasterBase_o *)v2280;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[325],
    (int32_t)v2280,
    v2281,
    v2282,
    v2283,
    v2284,
    v2285,
    v2286);
  v2287 = (WarBoardStageLayoutMaster_o *)sub_1C942E4(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v2287, 0);
  if ( v2287 )
  {
    v3 = sub_1C941D4(v2287, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x146u )
    goto LABEL_1661;
  v1->m_Items[326] = (DataMasterBase_o *)v2287;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[326],
    (int32_t)v2287,
    v2288,
    v2289,
    v2290,
    v2291,
    v2292,
    v2293);
  v2294 = (WarBoardStageNpcMaster_o *)sub_1C942E4(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v2294, 0);
  if ( v2294 )
  {
    v3 = sub_1C941D4(v2294, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x147u )
    goto LABEL_1661;
  v1->m_Items[327] = (DataMasterBase_o *)v2294;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[327],
    (int32_t)v2294,
    v2295,
    v2296,
    v2297,
    v2298,
    v2299,
    v2300);
  v2301 = (WarBoardStageWallMaster_o *)sub_1C942E4(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v2301, 0);
  if ( v2301 )
  {
    v3 = sub_1C941D4(v2301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x148u )
    goto LABEL_1661;
  v1->m_Items[328] = (DataMasterBase_o *)v2301;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[328],
    (int32_t)v2301,
    v2302,
    v2303,
    v2304,
    v2305,
    v2306,
    v2307);
  v2308 = (WarBoardAIMaster_o *)sub_1C942E4(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v2308, 0);
  if ( v2308 )
  {
    v3 = sub_1C941D4(v2308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x149u )
    goto LABEL_1661;
  v1->m_Items[329] = (DataMasterBase_o *)v2308;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[329],
    (int32_t)v2308,
    v2309,
    v2310,
    v2311,
    v2312,
    v2313,
    v2314);
  v2315 = (WarBoardRatingBaseMaster_o *)sub_1C942E4(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v2315, 0);
  if ( v2315 )
  {
    v3 = sub_1C941D4(v2315, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Au )
    goto LABEL_1661;
  v1->m_Items[330] = (DataMasterBase_o *)v2315;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[330],
    (int32_t)v2315,
    v2316,
    v2317,
    v2318,
    v2319,
    v2320,
    v2321);
  v2322 = (WarBoardRatingOffsetMaster_o *)sub_1C942E4(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v2322, 0);
  if ( v2322 )
  {
    v3 = sub_1C941D4(v2322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Bu )
    goto LABEL_1661;
  v1->m_Items[331] = (DataMasterBase_o *)v2322;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[331],
    (int32_t)v2322,
    v2323,
    v2324,
    v2325,
    v2326,
    v2327,
    v2328);
  v2329 = (WarBoardItemMaster_o *)sub_1C942E4(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v2329, 0);
  if ( v2329 )
  {
    v3 = sub_1C941D4(v2329, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Cu )
    goto LABEL_1661;
  v1->m_Items[332] = (DataMasterBase_o *)v2329;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[332],
    (int32_t)v2329,
    v2330,
    v2331,
    v2332,
    v2333,
    v2334,
    v2335);
  v2336 = (WarBoardTreasureMaster_o *)sub_1C942E4(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v2336, 0);
  if ( v2336 )
  {
    v3 = sub_1C941D4(v2336, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Du )
    goto LABEL_1661;
  v1->m_Items[333] = (DataMasterBase_o *)v2336;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[333],
    (int32_t)v2336,
    v2337,
    v2338,
    v2339,
    v2340,
    v2341,
    v2342);
  v2343 = (WarBoardQuestMaster_o *)sub_1C942E4(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v2343, 0);
  if ( v2343 )
  {
    v3 = sub_1C941D4(v2343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Eu )
    goto LABEL_1661;
  v1->m_Items[334] = (DataMasterBase_o *)v2343;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[334],
    (int32_t)v2343,
    v2344,
    v2345,
    v2346,
    v2347,
    v2348,
    v2349);
  v2350 = (WarBoardDataMaster_o *)sub_1C942E4(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v2350, 0);
  if ( v2350 )
  {
    v3 = sub_1C941D4(v2350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Fu )
    goto LABEL_1661;
  v1->m_Items[335] = (DataMasterBase_o *)v2350;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[335],
    (int32_t)v2350,
    v2351,
    v2352,
    v2353,
    v2354,
    v2355,
    v2356);
  v2357 = (WarBoardIndividualityClassMaster_o *)sub_1C942E4(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v2357, 0);
  if ( v2357 )
  {
    v3 = sub_1C941D4(v2357, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x150u )
    goto LABEL_1661;
  v1->m_Items[336] = (DataMasterBase_o *)v2357;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[336],
    (int32_t)v2357,
    v2358,
    v2359,
    v2360,
    v2361,
    v2362,
    v2363);
  v2364 = (WarBoardActionTrendConditionMaster_o *)sub_1C942E4(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v2364, 0);
  if ( v2364 )
  {
    v3 = sub_1C941D4(v2364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x151u )
    goto LABEL_1661;
  v1->m_Items[337] = (DataMasterBase_o *)v2364;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[337],
    (int32_t)v2364,
    v2365,
    v2366,
    v2367,
    v2368,
    v2369,
    v2370);
  v2371 = (WarBoardActionPointClassMaster_o *)sub_1C942E4(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v2371, 0);
  if ( v2371 )
  {
    v3 = sub_1C941D4(v2371, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x152u )
    goto LABEL_1661;
  v1->m_Items[338] = (DataMasterBase_o *)v2371;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[338],
    (int32_t)v2371,
    v2372,
    v2373,
    v2374,
    v2375,
    v2376,
    v2377);
  v2378 = (EventPanelMapMaster_o *)sub_1C942E4(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v2378, 0);
  if ( v2378 )
  {
    v3 = sub_1C941D4(v2378, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x153u )
    goto LABEL_1661;
  v1->m_Items[339] = (DataMasterBase_o *)v2378;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[339],
    (int32_t)v2378,
    v2379,
    v2380,
    v2381,
    v2382,
    v2383,
    v2384);
  v2385 = (EventPanelMapDetailMaster_o *)sub_1C942E4(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v2385, 0);
  if ( v2385 )
  {
    v3 = sub_1C941D4(v2385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x154u )
    goto LABEL_1661;
  v1->m_Items[340] = (DataMasterBase_o *)v2385;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[340],
    (int32_t)v2385,
    v2386,
    v2387,
    v2388,
    v2389,
    v2390,
    v2391);
  v2392 = (EventPanelSpotMaster_o *)sub_1C942E4(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v2392, 0);
  if ( v2392 )
  {
    v3 = sub_1C941D4(v2392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x155u )
    goto LABEL_1661;
  v1->m_Items[341] = (DataMasterBase_o *)v2392;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[341],
    (int32_t)v2392,
    v2393,
    v2394,
    v2395,
    v2396,
    v2397,
    v2398);
  v2399 = (EventPanelScanMaster_o *)sub_1C942E4(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v2399, 0);
  if ( v2399 )
  {
    v3 = sub_1C941D4(v2399, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x156u )
    goto LABEL_1661;
  v1->m_Items[342] = (DataMasterBase_o *)v2399;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[342],
    (int32_t)v2399,
    v2400,
    v2401,
    v2402,
    v2403,
    v2404,
    v2405);
  v2406 = (CommonConsumeMaster_o *)sub_1C942E4(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v2406, 0);
  if ( v2406 )
  {
    v3 = sub_1C941D4(v2406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x157u )
    goto LABEL_1661;
  v1->m_Items[343] = (DataMasterBase_o *)v2406;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[343],
    (int32_t)v2406,
    v2407,
    v2408,
    v2409,
    v2410,
    v2411,
    v2412);
  v2413 = (UserEventMapMaster_o *)sub_1C942E4(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v2413, 0);
  if ( v2413 )
  {
    v3 = sub_1C941D4(v2413, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x158u )
    goto LABEL_1661;
  v1->m_Items[344] = (DataMasterBase_o *)v2413;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[344],
    (int32_t)v2413,
    v2414,
    v2415,
    v2416,
    v2417,
    v2418,
    v2419);
  v2420 = (UserEventSpotMaster_o *)sub_1C942E4(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v2420, 0);
  if ( v2420 )
  {
    v3 = sub_1C941D4(v2420, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x159u )
    goto LABEL_1661;
  v1->m_Items[345] = (DataMasterBase_o *)v2420;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[345],
    (int32_t)v2420,
    v2421,
    v2422,
    v2423,
    v2424,
    v2425,
    v2426);
  v2427 = (WarGroupMaster_o *)sub_1C942E4(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v2427, 0);
  if ( v2427 )
  {
    v3 = sub_1C941D4(v2427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Au )
    goto LABEL_1661;
  v1->m_Items[346] = (DataMasterBase_o *)v2427;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[346],
    (int32_t)v2427,
    v2428,
    v2429,
    v2430,
    v2431,
    v2432,
    v2433);
  v2434 = (ServantLimitImageMaster_o *)sub_1C942E4(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v2434, 0);
  if ( v2434 )
  {
    v3 = sub_1C941D4(v2434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Bu )
    goto LABEL_1661;
  v1->m_Items[347] = (DataMasterBase_o *)v2434;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[347],
    (int32_t)v2434,
    v2435,
    v2436,
    v2437,
    v2438,
    v2439,
    v2440);
  v2441 = (FriendshipQuestDialogInfoMaster_o *)sub_1C942E4(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v2441, 0);
  if ( v2441 )
  {
    v3 = sub_1C941D4(v2441, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Cu )
    goto LABEL_1661;
  v1->m_Items[348] = (DataMasterBase_o *)v2441;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[348],
    (int32_t)v2441,
    v2442,
    v2443,
    v2444,
    v2445,
    v2446,
    v2447);
  v2448 = (QuestRestrictionInfoMaster_o *)sub_1C942E4(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v2448, 0);
  if ( v2448 )
  {
    v3 = sub_1C941D4(v2448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Du )
    goto LABEL_1661;
  v1->m_Items[349] = (DataMasterBase_o *)v2448;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[349],
    (int32_t)v2448,
    v2449,
    v2450,
    v2451,
    v2452,
    v2453,
    v2454);
  v2455 = (AssistMaster_o *)sub_1C942E4(AssistMaster_TypeInfo);
  AssistMaster___ctor(v2455, 0);
  if ( v2455 )
  {
    v3 = sub_1C941D4(v2455, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Eu )
    goto LABEL_1661;
  v1->m_Items[350] = (DataMasterBase_o *)v2455;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[350],
    (int32_t)v2455,
    v2456,
    v2457,
    v2458,
    v2459,
    v2460,
    v2461);
  v2462 = (WarBoardEffectMaster_o *)sub_1C942E4(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v2462, 0);
  if ( v2462 )
  {
    v3 = sub_1C941D4(v2462, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Fu )
    goto LABEL_1661;
  v1->m_Items[351] = (DataMasterBase_o *)v2462;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[351],
    (int32_t)v2462,
    v2463,
    v2464,
    v2465,
    v2466,
    v2467,
    v2468);
  v2469 = (WarBoardOnboardSkillMaster_o *)sub_1C942E4(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v2469, 0);
  if ( v2469 )
  {
    v3 = sub_1C941D4(v2469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x160u )
    goto LABEL_1661;
  v1->m_Items[352] = (DataMasterBase_o *)v2469;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[352],
    (int32_t)v2469,
    v2470,
    v2471,
    v2472,
    v2473,
    v2474,
    v2475);
  v2476 = (BeforeBirthDayMaster_o *)sub_1C942E4(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v2476, 0);
  if ( v2476 )
  {
    v3 = sub_1C941D4(v2476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x161u )
    goto LABEL_1661;
  v1->m_Items[353] = (DataMasterBase_o *)v2476;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[353],
    (int32_t)v2476,
    v2477,
    v2478,
    v2479,
    v2480,
    v2481,
    v2482);
  v2483 = (LoginQuestMaster_o *)sub_1C942E4(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v2483, 0);
  if ( v2483 )
  {
    v3 = sub_1C941D4(v2483, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x162u )
    goto LABEL_1661;
  v1->m_Items[354] = (DataMasterBase_o *)v2483;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[354],
    (int32_t)v2483,
    v2484,
    v2485,
    v2486,
    v2487,
    v2488,
    v2489);
  v2490 = (EventCombineCostumeMaster_o *)sub_1C942E4(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v2490, 0);
  if ( v2490 )
  {
    v3 = sub_1C941D4(v2490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x163u )
    goto LABEL_1661;
  v1->m_Items[355] = (DataMasterBase_o *)v2490;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[355],
    (int32_t)v2490,
    v2491,
    v2492,
    v2493,
    v2494,
    v2495,
    v2496);
  v2497 = (WarBoardStagePieceDetailMaster_o *)sub_1C942E4(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v2497, 0);
  if ( v2497 )
  {
    v3 = sub_1C941D4(v2497, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x164u )
    goto LABEL_1661;
  v1->m_Items[356] = (DataMasterBase_o *)v2497;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[356],
    (int32_t)v2497,
    v2498,
    v2499,
    v2500,
    v2501,
    v2502,
    v2503);
  v2504 = (ServantTreasureDeviceAddMaster_o *)sub_1C942E4(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v2504, 0);
  if ( v2504 )
  {
    v3 = sub_1C941D4(v2504, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x165u )
    goto LABEL_1661;
  v1->m_Items[357] = (DataMasterBase_o *)v2504;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[357],
    (int32_t)v2504,
    v2505,
    v2506,
    v2507,
    v2508,
    v2509,
    v2510);
  v2511 = (SkillAddMaster_o *)sub_1C942E4(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v2511, 0);
  if ( v2511 )
  {
    v3 = sub_1C941D4(v2511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x166u )
    goto LABEL_1661;
  v1->m_Items[358] = (DataMasterBase_o *)v2511;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[358],
    (int32_t)v2511,
    v2512,
    v2513,
    v2514,
    v2515,
    v2516,
    v2517);
  v2518 = (ServantLvDetailMaster_o *)sub_1C942E4(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v2518, 0);
  if ( v2518 )
  {
    v3 = sub_1C941D4(v2518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x167u )
    goto LABEL_1661;
  v1->m_Items[359] = (DataMasterBase_o *)v2518;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[359],
    (int32_t)v2518,
    v2519,
    v2520,
    v2521,
    v2522,
    v2523,
    v2524);
  v2525 = (GachaAppendMaster_o *)sub_1C942E4(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v2525, 0);
  if ( v2525 )
  {
    v3 = sub_1C941D4(v2525, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x168u )
    goto LABEL_1661;
  v1->m_Items[360] = (DataMasterBase_o *)v2525;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[360],
    (int32_t)v2525,
    v2526,
    v2527,
    v2528,
    v2529,
    v2530,
    v2531);
  v2532 = (UserGachaDrawLogMaster_o *)sub_1C942E4(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v2532, 0);
  if ( v2532 )
  {
    v3 = sub_1C941D4(v2532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x169u )
    goto LABEL_1661;
  v1->m_Items[361] = (DataMasterBase_o *)v2532;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[361],
    (int32_t)v2532,
    v2533,
    v2534,
    v2535,
    v2536,
    v2537,
    v2538);
  v2539 = (ServantAppendPassiveSkillMaster_o *)sub_1C942E4(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v2539, 0);
  if ( v2539 )
  {
    v3 = sub_1C941D4(v2539, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Au )
    goto LABEL_1661;
  v1->m_Items[362] = (DataMasterBase_o *)v2539;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[362],
    (int32_t)v2539,
    v2540,
    v2541,
    v2542,
    v2543,
    v2544,
    v2545);
  v2546 = (UserServantAppendPassiveSkillMaster_o *)sub_1C942E4(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v2546, 0);
  if ( v2546 )
  {
    v3 = sub_1C941D4(v2546, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Bu )
    goto LABEL_1661;
  v1->m_Items[363] = (DataMasterBase_o *)v2546;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[363],
    (int32_t)v2546,
    v2547,
    v2548,
    v2549,
    v2550,
    v2551,
    v2552);
  v2553 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C942E4(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v2553, 0);
  if ( v2553 )
  {
    v3 = sub_1C941D4(v2553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Cu )
    goto LABEL_1661;
  v1->m_Items[364] = (DataMasterBase_o *)v2553;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[364],
    (int32_t)v2553,
    v2554,
    v2555,
    v2556,
    v2557,
    v2558,
    v2559);
  v2560 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C942E4(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v2560, 0);
  if ( v2560 )
  {
    v3 = sub_1C941D4(v2560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Du )
    goto LABEL_1661;
  v1->m_Items[365] = (DataMasterBase_o *)v2560;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[365],
    (int32_t)v2560,
    v2561,
    v2562,
    v2563,
    v2564,
    v2565,
    v2566);
  v2567 = (CombineAppendPassiveSkillMaster_o *)sub_1C942E4(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v2567, 0);
  if ( v2567 )
  {
    v3 = sub_1C941D4(v2567, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Eu )
    goto LABEL_1661;
  v1->m_Items[366] = (DataMasterBase_o *)v2567;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[366],
    (int32_t)v2567,
    v2568,
    v2569,
    v2570,
    v2571,
    v2572,
    v2573);
  v2574 = (SvtCoinMaster_o *)sub_1C942E4(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v2574, 0);
  if ( v2574 )
  {
    v3 = sub_1C941D4(v2574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Fu )
    goto LABEL_1661;
  v1->m_Items[367] = (DataMasterBase_o *)v2574;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[367],
    (int32_t)v2574,
    v2575,
    v2576,
    v2577,
    v2578,
    v2579,
    v2580);
  v2581 = (UserSvtCoinMaster_o *)sub_1C942E4(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v2581, 0);
  if ( v2581 )
  {
    v3 = sub_1C941D4(v2581, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x170u )
    goto LABEL_1661;
  v1->m_Items[368] = (DataMasterBase_o *)v2581;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[368],
    (int32_t)v2581,
    v2582,
    v2583,
    v2584,
    v2585,
    v2586,
    v2587);
  v2588 = (ServantAddMaster_o *)sub_1C942E4(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v2588, 0);
  if ( v2588 )
  {
    v3 = sub_1C941D4(v2588, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x171u )
    goto LABEL_1661;
  v1->m_Items[369] = (DataMasterBase_o *)v2588;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[369],
    (int32_t)v2588,
    v2589,
    v2590,
    v2591,
    v2592,
    v2593,
    v2594);
  v2595 = (TreasureBoxMaster_o *)sub_1C942E4(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v2595, 0);
  if ( v2595 )
  {
    v3 = sub_1C941D4(v2595, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x172u )
    goto LABEL_1661;
  v1->m_Items[370] = (DataMasterBase_o *)v2595;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[370],
    (int32_t)v2595,
    v2596,
    v2597,
    v2598,
    v2599,
    v2600,
    v2601);
  v2602 = (TreasureBoxGiftMaster_o *)sub_1C942E4(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v2602, 0);
  if ( v2602 )
  {
    v3 = sub_1C941D4(v2602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x173u )
    goto LABEL_1661;
  v1->m_Items[371] = (DataMasterBase_o *)v2602;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[371],
    (int32_t)v2602,
    v2603,
    v2604,
    v2605,
    v2606,
    v2607,
    v2608);
  v2609 = (TreasureBoxTalkMaster_o *)sub_1C942E4(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v2609, 0);
  if ( v2609 )
  {
    v3 = sub_1C941D4(v2609, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x174u )
    goto LABEL_1661;
  v1->m_Items[372] = (DataMasterBase_o *)v2609;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[372],
    (int32_t)v2609,
    v2610,
    v2611,
    v2612,
    v2613,
    v2614,
    v2615);
  v2616 = (UserEventExpeditionMaster_o *)sub_1C942E4(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v2616, 0);
  if ( v2616 )
  {
    v3 = sub_1C941D4(v2616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x175u )
    goto LABEL_1661;
  v1->m_Items[373] = (DataMasterBase_o *)v2616;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[373],
    (int32_t)v2616,
    v2617,
    v2618,
    v2619,
    v2620,
    v2621,
    v2622);
  v2623 = (EventExpeditionMaster_o *)sub_1C942E4(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v2623, 0);
  if ( v2623 )
  {
    v3 = sub_1C941D4(v2623, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x176u )
    goto LABEL_1661;
  v1->m_Items[374] = (DataMasterBase_o *)v2623;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[374],
    (int32_t)v2623,
    v2624,
    v2625,
    v2626,
    v2627,
    v2628,
    v2629);
  v2630 = (EventExpeditionPieceMaster_o *)sub_1C942E4(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v2630, 0);
  if ( v2630 )
  {
    v3 = sub_1C941D4(v2630, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x177u )
    goto LABEL_1661;
  v1->m_Items[375] = (DataMasterBase_o *)v2630;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[375],
    (int32_t)v2630,
    v2631,
    v2632,
    v2633,
    v2634,
    v2635,
    v2636);
  v2637 = (EventRecipeMaster_o *)sub_1C942E4(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v2637, 0);
  if ( v2637 )
  {
    v3 = sub_1C941D4(v2637, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x178u )
    goto LABEL_1661;
  v1->m_Items[376] = (DataMasterBase_o *)v2637;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[376],
    (int32_t)v2637,
    v2638,
    v2639,
    v2640,
    v2641,
    v2642,
    v2643);
  v2644 = (EventRecipeGiftMaster_o *)sub_1C942E4(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v2644, 0);
  if ( v2644 )
  {
    v3 = sub_1C941D4(v2644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x179u )
    goto LABEL_1661;
  v1->m_Items[377] = (DataMasterBase_o *)v2644;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[377],
    (int32_t)v2644,
    v2645,
    v2646,
    v2647,
    v2648,
    v2649,
    v2650);
  v2651 = (UserEventFortificationMaster_o *)sub_1C942E4(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v2651, 0);
  if ( v2651 )
  {
    v3 = sub_1C941D4(v2651, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Au )
    goto LABEL_1661;
  v1->m_Items[378] = (DataMasterBase_o *)v2651;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[378],
    (int32_t)v2651,
    v2652,
    v2653,
    v2654,
    v2655,
    v2656,
    v2657);
  v2658 = (EventFortificationMaster_o *)sub_1C942E4(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v2658, 0);
  if ( v2658 )
  {
    v3 = sub_1C941D4(v2658, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Bu )
    goto LABEL_1661;
  v1->m_Items[379] = (DataMasterBase_o *)v2658;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[379],
    (int32_t)v2658,
    v2659,
    v2660,
    v2661,
    v2662,
    v2663,
    v2664);
  v2665 = (EventFortificationDetailMaster_o *)sub_1C942E4(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v2665, 0);
  if ( v2665 )
  {
    v3 = sub_1C941D4(v2665, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Cu )
    goto LABEL_1661;
  v1->m_Items[380] = (DataMasterBase_o *)v2665;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[380],
    (int32_t)v2665,
    v2666,
    v2667,
    v2668,
    v2669,
    v2670,
    v2671);
  v2672 = (EventFortificationSvtMaster_o *)sub_1C942E4(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v2672, 0);
  if ( v2672 )
  {
    v3 = sub_1C941D4(v2672, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Du )
    goto LABEL_1661;
  v1->m_Items[381] = (DataMasterBase_o *)v2672;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[381],
    (int32_t)v2672,
    v2673,
    v2674,
    v2675,
    v2676,
    v2677,
    v2678);
  v2679 = (UserServantVoicePlayedMaster_o *)sub_1C942E4(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v2679, 0);
  if ( v2679 )
  {
    v3 = sub_1C941D4(v2679, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Eu )
    goto LABEL_1661;
  v1->m_Items[382] = (DataMasterBase_o *)v2679;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[382],
    (int32_t)v2679,
    v2680,
    v2681,
    v2682,
    v2683,
    v2684,
    v2685);
  v2686 = (UpdateProfileDialogInfoMaster_o *)sub_1C942E4(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v2686, 0);
  if ( v2686 )
  {
    v3 = sub_1C941D4(v2686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Fu )
    goto LABEL_1661;
  v1->m_Items[383] = (DataMasterBase_o *)v2686;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[383],
    (int32_t)v2686,
    v2687,
    v2688,
    v2689,
    v2690,
    v2691,
    v2692);
  v2693 = (SvtMaterialTdMaster_o *)sub_1C942E4(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v2693, 0);
  if ( v2693 )
  {
    v3 = sub_1C941D4(v2693, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x180u )
    goto LABEL_1661;
  v1->m_Items[384] = (DataMasterBase_o *)v2693;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[384],
    (int32_t)v2693,
    v2694,
    v2695,
    v2696,
    v2697,
    v2698,
    v2699);
  v2700 = (BattleMasterImageMaster_o *)sub_1C942E4(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v2700, 0);
  if ( v2700 )
  {
    v3 = sub_1C941D4(v2700, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x181u )
    goto LABEL_1661;
  v1->m_Items[385] = (DataMasterBase_o *)v2700;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[385],
    (int32_t)v2700,
    v2701,
    v2702,
    v2703,
    v2704,
    v2705,
    v2706);
  v2707 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C942E4(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v2707, 0);
  if ( v2707 )
  {
    v3 = sub_1C941D4(v2707, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x182u )
    goto LABEL_1661;
  v1->m_Items[386] = (DataMasterBase_o *)v2707;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[386],
    (int32_t)v2707,
    v2708,
    v2709,
    v2710,
    v2711,
    v2712,
    v2713);
  v2714 = (UserEventRandomMissionMaster_o *)sub_1C942E4(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v2714, 0);
  if ( v2714 )
  {
    v3 = sub_1C941D4(v2714, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x183u )
    goto LABEL_1661;
  v1->m_Items[387] = (DataMasterBase_o *)v2714;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[387],
    (int32_t)v2714,
    v2715,
    v2716,
    v2717,
    v2718,
    v2719,
    v2720);
  v2721 = (EventProgressValueMaster_o *)sub_1C942E4(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v2721, 0);
  if ( v2721 )
  {
    v3 = sub_1C941D4(v2721, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x184u )
    goto LABEL_1661;
  v1->m_Items[388] = (DataMasterBase_o *)v2721;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[388],
    (int32_t)v2721,
    v2722,
    v2723,
    v2724,
    v2725,
    v2726,
    v2727);
  v2728 = (SvtMultiPortraitMaster_o *)sub_1C942E4(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v2728, 0);
  if ( v2728 )
  {
    v3 = sub_1C941D4(v2728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x185u )
    goto LABEL_1661;
  v1->m_Items[389] = (DataMasterBase_o *)v2728;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[389],
    (int32_t)v2728,
    v2729,
    v2730,
    v2731,
    v2732,
    v2733,
    v2734);
  v2735 = (EventRandomMissionMaster_o *)sub_1C942E4(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v2735, 0);
  if ( v2735 )
  {
    v3 = sub_1C941D4(v2735, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x186u )
    goto LABEL_1661;
  v1->m_Items[390] = (DataMasterBase_o *)v2735;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[390],
    (int32_t)v2735,
    v2736,
    v2737,
    v2738,
    v2739,
    v2740,
    v2741);
  v2742 = (UserGachaHistoryMaster_o *)sub_1C942E4(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v2742, 0);
  if ( v2742 )
  {
    v3 = sub_1C941D4(v2742, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x187u )
    goto LABEL_1661;
  v1->m_Items[391] = (DataMasterBase_o *)v2742;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[391],
    (int32_t)v2742,
    v2743,
    v2744,
    v2745,
    v2746,
    v2747,
    v2748);
  v2749 = (UserCoinRoomMaster_o *)sub_1C942E4(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v2749, 0);
  if ( v2749 )
  {
    v3 = sub_1C941D4(v2749, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x188u )
    goto LABEL_1661;
  v1->m_Items[392] = (DataMasterBase_o *)v2749;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[392],
    (int32_t)v2749,
    v2750,
    v2751,
    v2752,
    v2753,
    v2754,
    v2755);
  v2756 = (EventBuddyPointMaster_o *)sub_1C942E4(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v2756, 0);
  if ( v2756 )
  {
    v3 = sub_1C941D4(v2756, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x189u )
    goto LABEL_1661;
  v1->m_Items[393] = (DataMasterBase_o *)v2756;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[393],
    (int32_t)v2756,
    v2757,
    v2758,
    v2759,
    v2760,
    v2761,
    v2762);
  v2763 = (EventServantPointRankMaster_o *)sub_1C942E4(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v2763, 0);
  if ( v2763 )
  {
    v3 = sub_1C941D4(v2763, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Au )
    goto LABEL_1661;
  v1->m_Items[394] = (DataMasterBase_o *)v2763;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[394],
    (int32_t)v2763,
    v2764,
    v2765,
    v2766,
    v2767,
    v2768,
    v2769);
  v2770 = (UserEventServantPointMaster_o *)sub_1C942E4(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v2770, 0);
  if ( v2770 )
  {
    v3 = sub_1C941D4(v2770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Bu )
    goto LABEL_1661;
  v1->m_Items[395] = (DataMasterBase_o *)v2770;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[395],
    (int32_t)v2770,
    v2771,
    v2772,
    v2773,
    v2774,
    v2775,
    v2776);
  v2777 = (FieldMotionMaster_o *)sub_1C942E4(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v2777, 0);
  if ( v2777 )
  {
    v3 = sub_1C941D4(v2777, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Cu )
    goto LABEL_1661;
  v1->m_Items[396] = (DataMasterBase_o *)v2777;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[396],
    (int32_t)v2777,
    v2778,
    v2779,
    v2780,
    v2781,
    v2782,
    v2783);
  v2784 = (UserDeleteReservationMaster_o *)sub_1C942E4(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v2784, 0);
  if ( v2784 )
  {
    v3 = sub_1C941D4(v2784, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Du )
    goto LABEL_1661;
  v1->m_Items[397] = (DataMasterBase_o *)v2784;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[397],
    (int32_t)v2784,
    v2785,
    v2786,
    v2787,
    v2788,
    v2789,
    v2790);
  v2791 = (ServantScriptMultipleMaster_o *)sub_1C942E4(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v2791, 0);
  if ( v2791 )
  {
    v3 = sub_1C941D4(v2791, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Eu )
    goto LABEL_1661;
  v1->m_Items[398] = (DataMasterBase_o *)v2791;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[398],
    (int32_t)v2791,
    v2792,
    v2793,
    v2794,
    v2795,
    v2796,
    v2797);
  v2798 = (EquipAddMaster_o *)sub_1C942E4(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v2798, 0);
  if ( v2798 )
  {
    v3 = sub_1C941D4(v2798, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Fu )
    goto LABEL_1661;
  v1->m_Items[399] = (DataMasterBase_o *)v2798;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[399],
    (int32_t)v2798,
    v2799,
    v2800,
    v2801,
    v2802,
    v2803,
    v2804);
  v2805 = (QuestReleaseOverwriteMaster_o *)sub_1C942E4(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v2805, 0);
  if ( v2805 )
  {
    v3 = sub_1C941D4(v2805, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x190u )
    goto LABEL_1661;
  v1->m_Items[400] = (DataMasterBase_o *)v2805;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[400],
    (int32_t)v2805,
    v2806,
    v2807,
    v2808,
    v2809,
    v2810,
    v2811);
  v2812 = (UserEventAlloutBattleMaster_o *)sub_1C942E4(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v2812, 0);
  if ( v2812 )
  {
    v3 = sub_1C941D4(v2812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x191u )
    goto LABEL_1661;
  v1->m_Items[401] = (DataMasterBase_o *)v2812;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[401],
    (int32_t)v2812,
    v2813,
    v2814,
    v2815,
    v2816,
    v2817,
    v2818);
  v2819 = (QuestScriptMaterialNextMaster_o *)sub_1C942E4(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v2819, 0);
  if ( v2819 )
  {
    v3 = sub_1C941D4(v2819, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x192u )
    goto LABEL_1661;
  v1->m_Items[402] = (DataMasterBase_o *)v2819;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[402],
    (int32_t)v2819,
    v2820,
    v2821,
    v2822,
    v2823,
    v2824,
    v2825);
  v2826 = (EventDiggingMaster_o *)sub_1C942E4(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v2826, 0);
  if ( v2826 )
  {
    v3 = sub_1C941D4(v2826, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x193u )
    goto LABEL_1661;
  v1->m_Items[403] = (DataMasterBase_o *)v2826;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[403],
    (int32_t)v2826,
    v2827,
    v2828,
    v2829,
    v2830,
    v2831,
    v2832);
  v2833 = (EventDiggingBlockMaster_o *)sub_1C942E4(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v2833, 0);
  if ( v2833 )
  {
    v3 = sub_1C941D4(v2833, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x194u )
    goto LABEL_1661;
  v1->m_Items[404] = (DataMasterBase_o *)v2833;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[404],
    (int32_t)v2833,
    v2834,
    v2835,
    v2836,
    v2837,
    v2838,
    v2839);
  v2840 = (EventDiggingRewardMaster_o *)sub_1C942E4(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v2840, 0);
  if ( v2840 )
  {
    v3 = sub_1C941D4(v2840, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x195u )
    goto LABEL_1661;
  v1->m_Items[405] = (DataMasterBase_o *)v2840;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[405],
    (int32_t)v2840,
    v2841,
    v2842,
    v2843,
    v2844,
    v2845,
    v2846);
  v2847 = (UserEventDiggingMaster_o *)sub_1C942E4(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v2847, 0);
  if ( v2847 )
  {
    v3 = sub_1C941D4(v2847, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x196u )
    goto LABEL_1661;
  v1->m_Items[406] = (DataMasterBase_o *)v2847;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[406],
    (int32_t)v2847,
    v2848,
    v2849,
    v2850,
    v2851,
    v2852,
    v2853);
  v2854 = (BattleMessageMaster_o *)sub_1C942E4(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v2854, 0);
  if ( v2854 )
  {
    v3 = sub_1C941D4(v2854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x197u )
    goto LABEL_1661;
  v1->m_Items[407] = (DataMasterBase_o *)v2854;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[407],
    (int32_t)v2854,
    v2855,
    v2856,
    v2857,
    v2858,
    v2859,
    v2860);
  v2861 = (BattleMessageGroupMaster_o *)sub_1C942E4(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v2861, 0);
  if ( v2861 )
  {
    v3 = sub_1C941D4(v2861, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x198u )
    goto LABEL_1661;
  v1->m_Items[408] = (DataMasterBase_o *)v2861;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[408],
    (int32_t)v2861,
    v2862,
    v2863,
    v2864,
    v2865,
    v2866,
    v2867);
  v2868 = (UserNpcSvtRecordMaster_o *)sub_1C942E4(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v2868, 0);
  if ( v2868 )
  {
    v3 = sub_1C941D4(v2868, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x199u )
    goto LABEL_1661;
  v1->m_Items[409] = (DataMasterBase_o *)v2868;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[409],
    (int32_t)v2868,
    v2869,
    v2870,
    v2871,
    v2872,
    v2873,
    v2874);
  v2875 = (BuffTypeDetailMaster_o *)sub_1C942E4(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v2875, 0);
  if ( v2875 )
  {
    v3 = sub_1C941D4(v2875, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Au )
    goto LABEL_1661;
  v1->m_Items[410] = (DataMasterBase_o *)v2875;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[410],
    (int32_t)v2875,
    v2876,
    v2877,
    v2878,
    v2879,
    v2880,
    v2881);
  v2882 = (WarBoardMessageMaster_o *)sub_1C942E4(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v2882, 0);
  if ( v2882 )
  {
    v3 = sub_1C941D4(v2882, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Bu )
    goto LABEL_1661;
  v1->m_Items[411] = (DataMasterBase_o *)v2882;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[411],
    (int32_t)v2882,
    v2883,
    v2884,
    v2885,
    v2886,
    v2887,
    v2888);
  v2889 = (WarBoardPartySkillMaster_o *)sub_1C942E4(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v2889, 0);
  if ( v2889 )
  {
    v3 = sub_1C941D4(v2889, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Cu )
    goto LABEL_1661;
  v1->m_Items[412] = (DataMasterBase_o *)v2889;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[412],
    (int32_t)v2889,
    v2890,
    v2891,
    v2892,
    v2893,
    v2894,
    v2895);
  v2896 = (WarBoardMessageScriptMaster_o *)sub_1C942E4(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v2896, 0);
  if ( v2896 )
  {
    v3 = sub_1C941D4(v2896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Du )
    goto LABEL_1661;
  v1->m_Items[413] = (DataMasterBase_o *)v2896;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[413],
    (int32_t)v2896,
    v2897,
    v2898,
    v2899,
    v2900,
    v2901,
    v2902);
  v2903 = (WarQuestSelectionMaster_o *)sub_1C942E4(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v2903, 0);
  if ( v2903 )
  {
    v3 = sub_1C941D4(v2903, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Eu )
    goto LABEL_1661;
  v1->m_Items[414] = (DataMasterBase_o *)v2903;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[414],
    (int32_t)v2903,
    v2904,
    v2905,
    v2906,
    v2907,
    v2908,
    v2909);
  v2910 = (WarBoardStageDetailMaster_o *)sub_1C942E4(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v2910, 0);
  if ( v2910 )
  {
    v3 = sub_1C941D4(v2910, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Fu )
    goto LABEL_1661;
  v1->m_Items[415] = (DataMasterBase_o *)v2910;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[415],
    (int32_t)v2910,
    v2911,
    v2912,
    v2913,
    v2914,
    v2915,
    v2916);
  v2917 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C942E4(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v2917, 0);
  if ( v2917 )
  {
    v3 = sub_1C941D4(v2917, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A0u )
    goto LABEL_1661;
  v1->m_Items[416] = (DataMasterBase_o *)v2917;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[416],
    (int32_t)v2917,
    v2918,
    v2919,
    v2920,
    v2921,
    v2922,
    v2923);
  v2924 = (QuestScriptBranchMaterialMaster_o *)sub_1C942E4(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v2924, 0);
  if ( v2924 )
  {
    v3 = sub_1C941D4(v2924, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A1u )
    goto LABEL_1661;
  v1->m_Items[417] = (DataMasterBase_o *)v2924;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[417],
    (int32_t)v2924,
    v2925,
    v2926,
    v2927,
    v2928,
    v2929,
    v2930);
  v2931 = (AdCheckPointMaster_o *)sub_1C942E4(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v2931, 0);
  if ( v2931 )
  {
    v3 = sub_1C941D4(v2931, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A2u )
    goto LABEL_1661;
  v1->m_Items[418] = (DataMasterBase_o *)v2931;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[418],
    (int32_t)v2931,
    v2932,
    v2933,
    v2934,
    v2935,
    v2936,
    v2937);
  v2938 = (GiftDetailMaster_o *)sub_1C942E4(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v2938, 0);
  if ( v2938 )
  {
    v3 = sub_1C941D4(v2938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A3u )
    goto LABEL_1661;
  v1->m_Items[419] = (DataMasterBase_o *)v2938;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[419],
    (int32_t)v2938,
    v2939,
    v2940,
    v2941,
    v2942,
    v2943,
    v2944);
  v2945 = (CombineLimitGiftMaster_o *)sub_1C942E4(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v2945, 0);
  if ( v2945 )
  {
    v3 = sub_1C941D4(v2945, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A4u )
    goto LABEL_1661;
  v1->m_Items[420] = (DataMasterBase_o *)v2945;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[420],
    (int32_t)v2945,
    v2946,
    v2947,
    v2948,
    v2949,
    v2950,
    v2951);
  v2952 = (EventCooltimeRewardMaster_o *)sub_1C942E4(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v2952, 0);
  if ( v2952 )
  {
    v3 = sub_1C941D4(v2952, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A5u )
    goto LABEL_1661;
  v1->m_Items[421] = (DataMasterBase_o *)v2952;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[421],
    (int32_t)v2952,
    v2953,
    v2954,
    v2955,
    v2956,
    v2957,
    v2958);
  v2959 = (UserEventCooltimeRewardMaster_o *)sub_1C942E4(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v2959, 0);
  if ( v2959 )
  {
    v3 = sub_1C941D4(v2959, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A6u )
    goto LABEL_1661;
  v1->m_Items[422] = (DataMasterBase_o *)v2959;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[422],
    (int32_t)v2959,
    v2960,
    v2961,
    v2962,
    v2963,
    v2964,
    v2965);
  v2966 = (ClassBoardBaseMaster_o *)sub_1C942E4(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v2966, 0);
  if ( v2966 )
  {
    v3 = sub_1C941D4(v2966, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A7u )
    goto LABEL_1661;
  v1->m_Items[423] = (DataMasterBase_o *)v2966;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[423],
    (int32_t)v2966,
    v2967,
    v2968,
    v2969,
    v2970,
    v2971,
    v2972);
  v2973 = (ClassBoardLockMaster_o *)sub_1C942E4(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v2973, 0);
  if ( v2973 )
  {
    v3 = sub_1C941D4(v2973, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A8u )
    goto LABEL_1661;
  v1->m_Items[424] = (DataMasterBase_o *)v2973;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[424],
    (int32_t)v2973,
    v2974,
    v2975,
    v2976,
    v2977,
    v2978,
    v2979);
  v2980 = (ClassBoardSquareMaster_o *)sub_1C942E4(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v2980, 0);
  if ( v2980 )
  {
    v3 = sub_1C941D4(v2980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A9u )
    goto LABEL_1661;
  v1->m_Items[425] = (DataMasterBase_o *)v2980;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[425],
    (int32_t)v2980,
    v2981,
    v2982,
    v2983,
    v2984,
    v2985,
    v2986);
  v2987 = (ClassBoardLineMaster_o *)sub_1C942E4(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v2987, 0);
  if ( v2987 )
  {
    v3 = sub_1C941D4(v2987, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AAu )
    goto LABEL_1661;
  v1->m_Items[426] = (DataMasterBase_o *)v2987;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[426],
    (int32_t)v2987,
    v2988,
    v2989,
    v2990,
    v2991,
    v2992,
    v2993);
  v2994 = (UserClassBoardSquareMaster_o *)sub_1C942E4(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v2994, 0);
  if ( v2994 )
  {
    v3 = sub_1C941D4(v2994, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ABu )
    goto LABEL_1661;
  v1->m_Items[427] = (DataMasterBase_o *)v2994;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[427],
    (int32_t)v2994,
    v2995,
    v2996,
    v2997,
    v2998,
    v2999,
    v3000);
  v3001 = (ServantCardAddMaster_o *)sub_1C942E4(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v3001, 0);
  if ( v3001 )
  {
    v3 = sub_1C941D4(v3001, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ACu )
    goto LABEL_1661;
  v1->m_Items[428] = (DataMasterBase_o *)v3001;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[428],
    (int32_t)v3001,
    v3002,
    v3003,
    v3004,
    v3005,
    v3006,
    v3007);
  v3008 = (MapLayerMaster_o *)sub_1C942E4(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v3008, 0);
  if ( v3008 )
  {
    v3 = sub_1C941D4(v3008, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ADu )
    goto LABEL_1661;
  v1->m_Items[429] = (DataMasterBase_o *)v3008;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[429],
    (int32_t)v3008,
    v3009,
    v3010,
    v3011,
    v3012,
    v3013,
    v3014);
  v3015 = (SpotLayerMaster_o *)sub_1C942E4(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v3015, 0);
  if ( v3015 )
  {
    v3 = sub_1C941D4(v3015, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AEu )
    goto LABEL_1661;
  v1->m_Items[430] = (DataMasterBase_o *)v3015;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[430],
    (int32_t)v3015,
    v3016,
    v3017,
    v3018,
    v3019,
    v3020,
    v3021);
  v3022 = (MapGimmickLayerMaster_o *)sub_1C942E4(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v3022, 0);
  if ( v3022 )
  {
    v3 = sub_1C941D4(v3022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AFu )
    goto LABEL_1661;
  v1->m_Items[431] = (DataMasterBase_o *)v3022;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[431],
    (int32_t)v3022,
    v3023,
    v3024,
    v3025,
    v3026,
    v3027,
    v3028);
  v3029 = (EventDataLostBattleMaster_o *)sub_1C942E4(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v3029, 0);
  if ( v3029 )
  {
    v3 = sub_1C941D4(v3029, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B0u )
    goto LABEL_1661;
  v1->m_Items[432] = (DataMasterBase_o *)v3029;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[432],
    (int32_t)v3029,
    v3030,
    v3031,
    v3032,
    v3033,
    v3034,
    v3035);
  v3036 = (EventDataLostBattleResetMaster_o *)sub_1C942E4(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v3036, 0);
  if ( v3036 )
  {
    v3 = sub_1C941D4(v3036, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B1u )
    goto LABEL_1661;
  v1->m_Items[433] = (DataMasterBase_o *)v3036;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[433],
    (int32_t)v3036,
    v3037,
    v3038,
    v3039,
    v3040,
    v3041,
    v3042);
  v3043 = (UserEventDataLostMaster_o *)sub_1C942E4(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v3043, 0);
  if ( v3043 )
  {
    v3 = sub_1C941D4(v3043, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B2u )
    goto LABEL_1661;
  v1->m_Items[434] = (DataMasterBase_o *)v3043;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[434],
    (int32_t)v3043,
    v3044,
    v3045,
    v3046,
    v3047,
    v3048,
    v3049);
  v3050 = (QuestHintMaster_o *)sub_1C942E4(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v3050, 0);
  if ( v3050 )
  {
    v3 = sub_1C941D4(v3050, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B3u )
    goto LABEL_1661;
  v1->m_Items[435] = (DataMasterBase_o *)v3050;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[435],
    (int32_t)v3050,
    v3051,
    v3052,
    v3053,
    v3054,
    v3055,
    v3056);
  v3057 = (FuncTypeDetailMaster_o *)sub_1C942E4(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v3057, 0);
  if ( v3057 )
  {
    v3 = sub_1C941D4(v3057, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B4u )
    goto LABEL_1661;
  v1->m_Items[436] = (DataMasterBase_o *)v3057;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[436],
    (int32_t)v3057,
    v3058,
    v3059,
    v3060,
    v3061,
    v3062,
    v3063);
  v3064 = (BuffConvertMaster_o *)sub_1C942E4(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v3064, 0);
  if ( v3064 )
  {
    v3 = sub_1C941D4(v3064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B5u )
    goto LABEL_1661;
  v1->m_Items[437] = (DataMasterBase_o *)v3064;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[437],
    (int32_t)v3064,
    v3065,
    v3066,
    v3067,
    v3068,
    v3069,
    v3070);
  v3071 = (SkillGroupMaster_o *)sub_1C942E4(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v3071, 0);
  if ( v3071 )
  {
    v3 = sub_1C941D4(v3071, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B6u )
    goto LABEL_1661;
  v1->m_Items[438] = (DataMasterBase_o *)v3071;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[438],
    (int32_t)v3071,
    v3072,
    v3073,
    v3074,
    v3075,
    v3076,
    v3077);
  v3078 = (SkillGroupOverwriteMaster_o *)sub_1C942E4(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v3078, 0);
  if ( v3078 )
  {
    v3 = sub_1C941D4(v3078, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B7u )
    goto LABEL_1661;
  v1->m_Items[439] = (DataMasterBase_o *)v3078;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[439],
    (int32_t)v3078,
    v3079,
    v3080,
    v3081,
    v3082,
    v3083,
    v3084);
  v3085 = (SkillIndividualityMaster_o *)sub_1C942E4(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v3085, 0);
  if ( v3085 )
  {
    v3 = sub_1C941D4(v3085, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B8u )
    goto LABEL_1661;
  v1->m_Items[440] = (DataMasterBase_o *)v3085;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[440],
    (int32_t)v3085,
    v3086,
    v3087,
    v3088,
    v3089,
    v3090,
    v3091);
  v3092 = (RestrictionBaseMaster_o *)sub_1C942E4(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v3092, 0);
  if ( v3092 )
  {
    v3 = sub_1C941D4(v3092, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B9u )
    goto LABEL_1661;
  v1->m_Items[441] = (DataMasterBase_o *)v3092;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[441],
    (int32_t)v3092,
    v3093,
    v3094,
    v3095,
    v3096,
    v3097,
    v3098);
  v3099 = (RestrictionSlotMaster_o *)sub_1C942E4(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v3099, 0);
  if ( v3099 )
  {
    v3 = sub_1C941D4(v3099, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BAu )
    goto LABEL_1661;
  v1->m_Items[442] = (DataMasterBase_o *)v3099;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[442],
    (int32_t)v3099,
    v3100,
    v3101,
    v3102,
    v3103,
    v3104,
    v3105);
  v3106 = (RestrictionSlotDetailMaster_o *)sub_1C942E4(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v3106, 0);
  if ( v3106 )
  {
    v3 = sub_1C941D4(v3106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BBu )
    goto LABEL_1661;
  v1->m_Items[443] = (DataMasterBase_o *)v3106;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[443],
    (int32_t)v3106,
    v3107,
    v3108,
    v3109,
    v3110,
    v3111,
    v3112);
  v3113 = (RestrictionMessageMaster_o *)sub_1C942E4(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v3113, 0);
  if ( v3113 )
  {
    v3 = sub_1C941D4(v3113, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BCu )
    goto LABEL_1661;
  v1->m_Items[444] = (DataMasterBase_o *)v3113;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[444],
    (int32_t)v3113,
    v3114,
    v3115,
    v3116,
    v3117,
    v3118,
    v3119);
  v3120 = (RestrictionWholeMaster_o *)sub_1C942E4(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v3120, 0);
  if ( v3120 )
  {
    v3 = sub_1C941D4(v3120, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BDu )
    goto LABEL_1661;
  v1->m_Items[445] = (DataMasterBase_o *)v3120;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[445],
    (int32_t)v3120,
    v3121,
    v3122,
    v3123,
    v3124,
    v3125,
    v3126);
  v3127 = (FuncDispMaster_o *)sub_1C942E4(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v3127, 0);
  if ( v3127 )
  {
    v3 = sub_1C941D4(v3127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BEu )
    goto LABEL_1661;
  v1->m_Items[446] = (DataMasterBase_o *)v3127;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[446],
    (int32_t)v3127,
    v3128,
    v3129,
    v3130,
    v3131,
    v3132,
    v3133);
  v3134 = (ClassBoardCommandSpellMaster_o *)sub_1C942E4(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v3134, 0);
  if ( v3134 )
  {
    v3 = sub_1C941D4(v3134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BFu )
    goto LABEL_1661;
  v1->m_Items[447] = (DataMasterBase_o *)v3134;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[447],
    (int32_t)v3134,
    v3135,
    v3136,
    v3137,
    v3138,
    v3139,
    v3140);
  v3141 = (ClassBoardClassMaster_o *)sub_1C942E4(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v3141, 0);
  if ( v3141 )
  {
    v3 = sub_1C941D4(v3141, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C0u )
    goto LABEL_1661;
  v1->m_Items[448] = (DataMasterBase_o *)v3141;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[448],
    (int32_t)v3141,
    v3142,
    v3143,
    v3144,
    v3145,
    v3146,
    v3147);
  v3148 = (EventCommandAssistMaster_o *)sub_1C942E4(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v3148, 0);
  if ( v3148 )
  {
    v3 = sub_1C941D4(v3148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C1u )
    goto LABEL_1661;
  v1->m_Items[449] = (DataMasterBase_o *)v3148;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[449],
    (int32_t)v3148,
    v3149,
    v3150,
    v3151,
    v3152,
    v3153,
    v3154);
  v3155 = (EventMissionGroupMaster_o *)sub_1C942E4(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v3155, 0);
  if ( v3155 )
  {
    v3 = sub_1C941D4(v3155, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C2u )
    goto LABEL_1661;
  v1->m_Items[450] = (DataMasterBase_o *)v3155;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[450],
    (int32_t)v3155,
    v3156,
    v3157,
    v3158,
    v3159,
    v3160,
    v3161);
  v3162 = (CombineLimitReleaseMaster_o *)sub_1C942E4(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v3162, 0);
  if ( v3162 )
  {
    v3 = sub_1C941D4(v3162, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C3u )
    goto LABEL_1661;
  v1->m_Items[451] = (DataMasterBase_o *)v3162;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[451],
    (int32_t)v3162,
    v3163,
    v3164,
    v3165,
    v3166,
    v3167,
    v3168);
  v3169 = (HeelPortraitMaster_o *)sub_1C942E4(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v3169, 0);
  if ( v3169 )
  {
    v3 = sub_1C941D4(v3169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C4u )
    goto LABEL_1661;
  v1->m_Items[452] = (DataMasterBase_o *)v3169;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[452],
    (int32_t)v3169,
    v3170,
    v3171,
    v3172,
    v3173,
    v3174,
    v3175);
  v3176 = (UserHeelPortraitMaster_o *)sub_1C942E4(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v3176, 0);
  if ( v3176 )
  {
    v3 = sub_1C941D4(v3176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C5u )
    goto LABEL_1661;
  v1->m_Items[453] = (DataMasterBase_o *)v3176;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[453],
    (int32_t)v3176,
    v3177,
    v3178,
    v3179,
    v3180,
    v3181,
    v3182);
  v3183 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C942E4(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v3183, 0);
  if ( v3183 )
  {
    v3 = sub_1C941D4(v3183, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C6u )
    goto LABEL_1661;
  v1->m_Items[454] = (DataMasterBase_o *)v3183;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[454],
    (int32_t)v3183,
    v3184,
    v3185,
    v3186,
    v3187,
    v3188,
    v3189);
  v3190 = (NpcServantFollowerIndividualityMaster_o *)sub_1C942E4(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v3190, 0);
  if ( v3190 )
  {
    v3 = sub_1C941D4(v3190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C7u )
    goto LABEL_1661;
  v1->m_Items[455] = (DataMasterBase_o *)v3190;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[455],
    (int32_t)v3190,
    v3191,
    v3192,
    v3193,
    v3194,
    v3195,
    v3196);
  v3197 = (GachaExtraGiftMaster_o *)sub_1C942E4(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v3197, 0);
  if ( v3197 )
  {
    v3 = sub_1C941D4(v3197, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C8u )
    goto LABEL_1661;
  v1->m_Items[456] = (DataMasterBase_o *)v3197;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[456],
    (int32_t)v3197,
    v3198,
    v3199,
    v3200,
    v3201,
    v3202,
    v3203);
  v3204 = (EventMuralMaster_o *)sub_1C942E4(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v3204, 0);
  if ( v3204 )
  {
    v3 = sub_1C941D4(v3204, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C9u )
    goto LABEL_1661;
  v1->m_Items[457] = (DataMasterBase_o *)v3204;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[457],
    (int32_t)v3204,
    v3205,
    v3206,
    v3207,
    v3208,
    v3209,
    v3210);
  v3211 = (ViewWaveEnemyMaster_o *)sub_1C942E4(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v3211, 0);
  if ( v3211 )
  {
    v3 = sub_1C941D4(v3211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CAu )
    goto LABEL_1661;
  v1->m_Items[458] = (DataMasterBase_o *)v3211;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[458],
    (int32_t)v3211,
    v3212,
    v3213,
    v3214,
    v3215,
    v3216,
    v3217);
  v3218 = (BlankEarthSpotNavimenuMaster_o *)sub_1C942E4(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v3218, 0);
  if ( v3218 )
  {
    v3 = sub_1C941D4(v3218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CBu )
    goto LABEL_1661;
  v1->m_Items[459] = (DataMasterBase_o *)v3218;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[459],
    (int32_t)v3218,
    v3219,
    v3220,
    v3221,
    v3222,
    v3223,
    v3224);
  v3225 = (BlankEarthGimmickMaster_o *)sub_1C942E4(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v3225, 0);
  if ( v3225 )
  {
    v3 = sub_1C941D4(v3225, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CCu )
    goto LABEL_1661;
  v1->m_Items[460] = (DataMasterBase_o *)v3225;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[460],
    (int32_t)v3225,
    v3226,
    v3227,
    v3228,
    v3229,
    v3230,
    v3231);
  v3232 = (TerminalOverwriteMaster_o *)sub_1C942E4(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v3232, 0);
  if ( v3232 )
  {
    v3 = sub_1C941D4(v3232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CDu )
    goto LABEL_1661;
  v1->m_Items[461] = (DataMasterBase_o *)v3232;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[461],
    (int32_t)v3232,
    v3233,
    v3234,
    v3235,
    v3236,
    v3237,
    v3238);
  v3239 = (UserExchangeSvtMaster_o *)sub_1C942E4(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v3239, 0);
  if ( v3239 )
  {
    v3 = sub_1C941D4(v3239, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CEu )
    goto LABEL_1661;
  v1->m_Items[462] = (DataMasterBase_o *)v3239;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[462],
    (int32_t)v3239,
    v3240,
    v3241,
    v3242,
    v3243,
    v3244,
    v3245);
  v3246 = (WarBoardCommonReleaseMaster_o *)sub_1C942E4(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v3246, 0);
  if ( v3246 )
  {
    v3 = sub_1C941D4(v3246, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CFu )
    goto LABEL_1661;
  v1->m_Items[463] = (DataMasterBase_o *)v3246;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[463],
    (int32_t)v3246,
    v3247,
    v3248,
    v3249,
    v3250,
    v3251,
    v3252);
  v3253 = (WarBoardEventMaster_o *)sub_1C942E4(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v3253, 0);
  if ( v3253 )
  {
    v3 = sub_1C941D4(v3253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D0u )
    goto LABEL_1661;
  v1->m_Items[464] = (DataMasterBase_o *)v3253;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[464],
    (int32_t)v3253,
    v3254,
    v3255,
    v3256,
    v3257,
    v3258,
    v3259);
  v3260 = (WarBoardEventScriptMaster_o *)sub_1C942E4(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v3260, 0);
  if ( v3260 )
  {
    v3 = sub_1C941D4(v3260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D1u )
    goto LABEL_1661;
  v1->m_Items[465] = (DataMasterBase_o *)v3260;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[465],
    (int32_t)v3260,
    v3261,
    v3262,
    v3263,
    v3264,
    v3265,
    v3266);
  v3267 = (WarBoardStageBossMaster_o *)sub_1C942E4(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v3267, 0);
  if ( v3267 )
  {
    v3 = sub_1C941D4(v3267, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D2u )
    goto LABEL_1661;
  v1->m_Items[466] = (DataMasterBase_o *)v3267;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[466],
    (int32_t)v3267,
    v3268,
    v3269,
    v3270,
    v3271,
    v3272,
    v3273);
  v3274 = (WarBoardSquareIndexGroupMaster_o *)sub_1C942E4(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v3274, 0);
  if ( v3274 )
  {
    v3 = sub_1C941D4(v3274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D3u )
    goto LABEL_1661;
  v1->m_Items[467] = (DataMasterBase_o *)v3274;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[467],
    (int32_t)v3274,
    v3275,
    v3276,
    v3277,
    v3278,
    v3279,
    v3280);
  v3281 = (WarBoardActionTrendGroupMaster_o *)sub_1C942E4(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v3281, 0);
  if ( v3281 )
  {
    v3 = sub_1C941D4(v3281, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D4u )
    goto LABEL_1661;
  v1->m_Items[468] = (DataMasterBase_o *)v3281;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[468],
    (int32_t)v3281,
    v3282,
    v3283,
    v3284,
    v3285,
    v3286,
    v3287);
  v3288 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C942E4(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v3288, 0);
  if ( v3288 )
  {
    v3 = sub_1C941D4(v3288, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D5u )
    goto LABEL_1661;
  v1->m_Items[469] = (DataMasterBase_o *)v3288;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[469],
    (int32_t)v3288,
    v3289,
    v3290,
    v3291,
    v3292,
    v3293,
    v3294);
  v3295 = (WarBoardReinforcementsMaster_o *)sub_1C942E4(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v3295, 0);
  if ( v3295 )
  {
    v3 = sub_1C941D4(v3295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D6u )
    goto LABEL_1661;
  v1->m_Items[470] = (DataMasterBase_o *)v3295;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[470],
    (int32_t)v3295,
    v3296,
    v3297,
    v3298,
    v3299,
    v3300,
    v3301);
  v3302 = (WarBoardStageReinforcementsMaster_o *)sub_1C942E4(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v3302, 0);
  if ( v3302 )
  {
    v3 = sub_1C941D4(v3302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D7u )
    goto LABEL_1661;
  v1->m_Items[471] = (DataMasterBase_o *)v3302;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[471],
    (int32_t)v3302,
    v3303,
    v3304,
    v3305,
    v3306,
    v3307,
    v3308);
  v3309 = (WarBoardFutureActionTrendMaster_o *)sub_1C942E4(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v3309, 0);
  if ( v3309 )
  {
    v3 = sub_1C941D4(v3309, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D8u )
    goto LABEL_1661;
  v1->m_Items[472] = (DataMasterBase_o *)v3309;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[472],
    (int32_t)v3309,
    v3310,
    v3311,
    v3312,
    v3313,
    v3314,
    v3315);
  v3316 = (ServantProfilePushMaster_o *)sub_1C942E4(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v3316, 0);
  if ( v3316 )
  {
    v3 = sub_1C941D4(v3316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D9u )
    goto LABEL_1661;
  v1->m_Items[473] = (DataMasterBase_o *)v3316;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[473],
    (int32_t)v3316,
    v3317,
    v3318,
    v3319,
    v3320,
    v3321,
    v3322);
  v3323 = (MapGimmickPathMaster_o *)sub_1C942E4(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v3323, 0);
  if ( v3323 )
  {
    v3 = sub_1C941D4(v3323, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DAu )
    goto LABEL_1661;
  v1->m_Items[474] = (DataMasterBase_o *)v3323;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[474],
    (int32_t)v3323,
    v3324,
    v3325,
    v3326,
    v3327,
    v3328,
    v3329);
  v3330 = (MapGimmickPathReleaseMaster_o *)sub_1C942E4(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v3330, 0);
  if ( v3330 )
  {
    v3 = sub_1C941D4(v3330, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DBu )
    goto LABEL_1661;
  v1->m_Items[475] = (DataMasterBase_o *)v3330;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[475],
    (int32_t)v3330,
    v3331,
    v3332,
    v3333,
    v3334,
    v3335,
    v3336);
  v3337 = (ServantOverwriteMaster_o *)sub_1C942E4(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v3337, 0);
  if ( v3337 )
  {
    v3 = sub_1C941D4(v3337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DCu )
    goto LABEL_1661;
  v1->m_Items[476] = (DataMasterBase_o *)v3337;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[476],
    (int32_t)v3337,
    v3338,
    v3339,
    v3340,
    v3341,
    v3342,
    v3343);
  v3344 = (IndividualityPolicyMaster_o *)sub_1C942E4(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v3344, 0);
  if ( v3344 )
  {
    v3 = sub_1C941D4(v3344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DDu )
    goto LABEL_1661;
  v1->m_Items[477] = (DataMasterBase_o *)v3344;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[477],
    (int32_t)v3344,
    v3345,
    v3346,
    v3347,
    v3348,
    v3349,
    v3350);
  v3351 = (IndividualityPersonalityMaster_o *)sub_1C942E4(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v3351, 0);
  if ( v3351 )
  {
    v3 = sub_1C941D4(v3351, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DEu )
    goto LABEL_1661;
  v1->m_Items[478] = (DataMasterBase_o *)v3351;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[478],
    (int32_t)v3351,
    v3352,
    v3353,
    v3354,
    v3355,
    v3356,
    v3357);
  v3358 = (AttriMaster_o *)sub_1C942E4(AttriMaster_TypeInfo);
  AttriMaster___ctor(v3358, 0);
  if ( v3358 )
  {
    v3 = sub_1C941D4(v3358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DFu )
    goto LABEL_1661;
  v1->m_Items[479] = (DataMasterBase_o *)v3358;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[479],
    (int32_t)v3358,
    v3359,
    v3360,
    v3361,
    v3362,
    v3363,
    v3364);
  v3365 = (ServantVoicePatternMaster_o *)sub_1C942E4(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v3365, 0);
  if ( v3365 )
  {
    v3 = sub_1C941D4(v3365, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E0u )
    goto LABEL_1661;
  v1->m_Items[480] = (DataMasterBase_o *)v3365;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[480],
    (int32_t)v3365,
    v3366,
    v3367,
    v3368,
    v3369,
    v3370,
    v3371);
  v3372 = (UserGameCommonMaster_o *)sub_1C942E4(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v3372, 0);
  if ( v3372 )
  {
    v3 = sub_1C941D4(v3372, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E1u )
    goto LABEL_1661;
  v1->m_Items[481] = (DataMasterBase_o *)v3372;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[481],
    (int32_t)v3372,
    v3373,
    v3374,
    v3375,
    v3376,
    v3377,
    v3378);
  v3379 = (ServantPhotoMaster_o *)sub_1C942E4(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v3379, 0);
  if ( v3379 )
  {
    v3 = sub_1C941D4(v3379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E2u )
    goto LABEL_1661;
  v1->m_Items[482] = (DataMasterBase_o *)v3379;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[482],
    (int32_t)v3379,
    v3380,
    v3381,
    v3382,
    v3383,
    v3384,
    v3385);
  v3386 = (MasterPhotoMaster_o *)sub_1C942E4(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v3386, 0);
  if ( v3386 )
  {
    v3 = sub_1C941D4(v3386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E3u )
    goto LABEL_1661;
  v1->m_Items[483] = (DataMasterBase_o *)v3386;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[483],
    (int32_t)v3386,
    v3387,
    v3388,
    v3389,
    v3390,
    v3391,
    v3392);
  v3393 = (PhotoFrameMaster_o *)sub_1C942E4(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v3393, 0);
  if ( v3393 )
  {
    v3 = sub_1C941D4(v3393, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E4u )
    goto LABEL_1661;
  v1->m_Items[484] = (DataMasterBase_o *)v3393;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[484],
    (int32_t)v3393,
    v3394,
    v3395,
    v3396,
    v3397,
    v3398,
    v3399);
  v3400 = (WarMessageMaster_o *)sub_1C942E4(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v3400, 0);
  if ( v3400 )
  {
    v3 = sub_1C941D4(v3400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E5u )
    goto LABEL_1661;
  v1->m_Items[485] = (DataMasterBase_o *)v3400;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[485],
    (int32_t)v3400,
    v3401,
    v3402,
    v3403,
    v3404,
    v3405,
    v3406);
  v3407 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C942E4(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v3407, 0);
  if ( v3407 )
  {
    v3 = sub_1C941D4(v3407, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E6u )
    goto LABEL_1661;
  v1->m_Items[486] = (DataMasterBase_o *)v3407;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[486],
    (int32_t)v3407,
    v3408,
    v3409,
    v3410,
    v3411,
    v3412,
    v3413);
  v3414 = (ExcludeMotionMaster_o *)sub_1C942E4(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v3414, 0);
  if ( v3414 )
  {
    v3 = sub_1C941D4(v3414, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E7u )
    goto LABEL_1661;
  v1->m_Items[487] = (DataMasterBase_o *)v3414;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[487],
    (int32_t)v3414,
    v3415,
    v3416,
    v3417,
    v3418,
    v3419,
    v3420);
  v3421 = (UserInterruptionQuestMaster_o *)sub_1C942E4(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v3421, 0);
  if ( v3421 )
  {
    v3 = sub_1C941D4(v3421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E8u )
    goto LABEL_1661;
  v1->m_Items[488] = (DataMasterBase_o *)v3421;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[488],
    (int32_t)v3421,
    v3422,
    v3423,
    v3424,
    v3425,
    v3426,
    v3427);
  v3428 = (ServantTransformMaster_o *)sub_1C942E4(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v3428, 0);
  if ( v3428 )
  {
    v3 = sub_1C941D4(v3428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E9u )
    goto LABEL_1661;
  v1->m_Items[489] = (DataMasterBase_o *)v3428;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[489],
    (int32_t)v3428,
    v3429,
    v3430,
    v3431,
    v3432,
    v3433,
    v3434);
  v3435 = (MapUpdateScheduleMaster_o *)sub_1C942E4(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v3435, 0);
  if ( v3435 )
  {
    v3 = sub_1C941D4(v3435, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EAu )
    goto LABEL_1661;
  v1->m_Items[490] = (DataMasterBase_o *)v3435;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[490],
    (int32_t)v3435,
    v3436,
    v3437,
    v3438,
    v3439,
    v3440,
    v3441);
  v3442 = (QuestPhasePresentMaster_o *)sub_1C942E4(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v3442, 0);
  if ( v3442 )
  {
    v3 = sub_1C941D4(v3442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EBu )
    goto LABEL_1661;
  v1->m_Items[491] = (DataMasterBase_o *)v3442;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[491],
    (int32_t)v3442,
    v3443,
    v3444,
    v3445,
    v3446,
    v3447,
    v3448);
  v3449 = (UserAccountLinkageMaster_o *)sub_1C942E4(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v3449, 0);
  if ( v3449 )
  {
    v3 = sub_1C941D4(v3449, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ECu )
    goto LABEL_1661;
  v1->m_Items[492] = (DataMasterBase_o *)v3449;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[492],
    (int32_t)v3449,
    v3450,
    v3451,
    v3452,
    v3453,
    v3454,
    v3455);
  v3456 = (MissionNaviTransitionMaster_o *)sub_1C942E4(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v3456, 0);
  if ( v3456 )
  {
    v3 = sub_1C941D4(v3456, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EDu )
    goto LABEL_1661;
  v1->m_Items[493] = (DataMasterBase_o *)v3456;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[493],
    (int32_t)v3456,
    v3457,
    v3458,
    v3459,
    v3460,
    v3461,
    v3462);
  v3463 = (MissionNaviQuestMaster_o *)sub_1C942E4(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v3463, 0);
  if ( v3463 )
  {
    v3 = sub_1C941D4(v3463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EEu )
    goto LABEL_1661;
  v1->m_Items[494] = (DataMasterBase_o *)v3463;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[494],
    (int32_t)v3463,
    v3464,
    v3465,
    v3466,
    v3467,
    v3468,
    v3469);
  v3470 = (EventTradeGoodsMaster_o *)sub_1C942E4(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v3470, 0);
  if ( v3470 )
  {
    v3 = sub_1C941D4(v3470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EFu )
    goto LABEL_1661;
  v1->m_Items[495] = (DataMasterBase_o *)v3470;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[495],
    (int32_t)v3470,
    v3471,
    v3472,
    v3473,
    v3474,
    v3475,
    v3476);
  v3477 = (EventTradeStoreMaster_o *)sub_1C942E4(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v3477, 0);
  if ( v3477 )
  {
    v3 = sub_1C941D4(v3477, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F0u )
    goto LABEL_1661;
  v1->m_Items[496] = (DataMasterBase_o *)v3477;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[496],
    (int32_t)v3477,
    v3478,
    v3479,
    v3480,
    v3481,
    v3482,
    v3483);
  v3484 = (EventTradePickupMaster_o *)sub_1C942E4(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v3484, 0);
  if ( v3484 )
  {
    v3 = sub_1C941D4(v3484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F1u )
    goto LABEL_1661;
  v1->m_Items[497] = (DataMasterBase_o *)v3484;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[497],
    (int32_t)v3484,
    v3485,
    v3486,
    v3487,
    v3488,
    v3489,
    v3490);
  v3491 = (UserEventTradeMaster_o *)sub_1C942E4(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v3491, 0);
  if ( v3491 )
  {
    v3 = sub_1C941D4(v3491, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F2u )
    goto LABEL_1661;
  v1->m_Items[498] = (DataMasterBase_o *)v3491;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[498],
    (int32_t)v3491,
    v3492,
    v3493,
    v3494,
    v3495,
    v3496,
    v3497);
  v3498 = (PaymentHistoryMaster_o *)sub_1C942E4(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v3498, 0);
  if ( v3498 )
  {
    v3 = sub_1C941D4(v3498, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F3u )
    goto LABEL_1661;
  v1->m_Items[499] = (DataMasterBase_o *)v3498;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[499],
    (int32_t)v3498,
    v3499,
    v3500,
    v3501,
    v3502,
    v3503,
    v3504);
  v3505 = (UserExternalPaymentStoneMaster_o *)sub_1C942E4(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v3505, 0);
  if ( v3505 )
  {
    v3 = sub_1C941D4(v3505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F4u )
    goto LABEL_1661;
  v1->m_Items[500] = (DataMasterBase_o *)v3505;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[500],
    (int32_t)v3505,
    v3506,
    v3507,
    v3508,
    v3509,
    v3510,
    v3511);
  v3512 = (QuestPhaseIndividualityMaster_o *)sub_1C942E4(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v3512, 0);
  if ( v3512 )
  {
    v3 = sub_1C941D4(v3512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F5u )
    goto LABEL_1661;
  v1->m_Items[501] = (DataMasterBase_o *)v3512;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[501],
    (int32_t)v3512,
    v3513,
    v3514,
    v3515,
    v3516,
    v3517,
    v3518);
  v3519 = (ViewGachaFeaturedServantMaster_o *)sub_1C942E4(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v3519, 0);
  if ( v3519 )
  {
    v3 = sub_1C941D4(v3519, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F6u )
    goto LABEL_1661;
  v1->m_Items[502] = (DataMasterBase_o *)v3519;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[502],
    (int32_t)v3519,
    v3520,
    v3521,
    v3522,
    v3523,
    v3524,
    v3525);
  v3526 = (UserGachaPickupCollateralMaster_o *)sub_1C942E4(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v3526, 0);
  if ( v3526 )
  {
    v3 = sub_1C941D4(v3526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F7u )
    goto LABEL_1661;
  v1->m_Items[503] = (DataMasterBase_o *)v3526;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[503],
    (int32_t)v3526,
    v3527,
    v3528,
    v3529,
    v3530,
    v3531,
    v3532);
  v3533 = (GachaPickupCollateralMaster_o *)sub_1C942E4(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v3533, 0);
  if ( v3533 )
  {
    v3 = sub_1C941D4(v3533, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F8u )
    goto LABEL_1661;
  v1->m_Items[504] = (DataMasterBase_o *)v3533;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[504],
    (int32_t)v3533,
    v3534,
    v3535,
    v3536,
    v3537,
    v3538,
    v3539);
  v3540 = (GachaPickupCollateralGroupMaster_o *)sub_1C942E4(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v3540, 0);
  if ( v3540 )
  {
    v3 = sub_1C941D4(v3540, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F9u )
    goto LABEL_1661;
  v1->m_Items[505] = (DataMasterBase_o *)v3540;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[505],
    (int32_t)v3540,
    v3541,
    v3542,
    v3543,
    v3544,
    v3545,
    v3546);
  v3547 = (BattlePointMaster_o *)sub_1C942E4(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v3547, 0);
  if ( v3547 )
  {
    v3 = sub_1C941D4(v3547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FAu )
    goto LABEL_1661;
  v1->m_Items[506] = (DataMasterBase_o *)v3547;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[506],
    (int32_t)v3547,
    v3548,
    v3549,
    v3550,
    v3551,
    v3552,
    v3553);
  v3554 = (BattlePointPhaseMaster_o *)sub_1C942E4(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v3554, 0);
  if ( v3554 )
  {
    v3 = sub_1C941D4(v3554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FBu )
    goto LABEL_1661;
  v1->m_Items[507] = (DataMasterBase_o *)v3554;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[507],
    (int32_t)v3554,
    v3555,
    v3556,
    v3557,
    v3558,
    v3559,
    v3560);
  v3561 = (ServantBattlePointMaster_o *)sub_1C942E4(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v3561, 0);
  if ( v3561 )
  {
    v3 = sub_1C941D4(v3561, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FCu )
    goto LABEL_1661;
  v1->m_Items[508] = (DataMasterBase_o *)v3561;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[508],
    (int32_t)v3561,
    v3562,
    v3563,
    v3564,
    v3565,
    v3566,
    v3567);
  v3568 = (EffectMovieMaster_o *)sub_1C942E4(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v3568, 0);
  if ( v3568 )
  {
    v3 = sub_1C941D4(v3568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FDu )
    goto LABEL_1661;
  v1->m_Items[509] = (DataMasterBase_o *)v3568;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[509],
    (int32_t)v3568,
    v3569,
    v3570,
    v3571,
    v3572,
    v3573,
    v3574);
  v3575 = (PaymentLimitMaster_o *)sub_1C942E4(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v3575, 0);
  if ( v3575 )
  {
    v3 = sub_1C941D4(v3575, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FEu )
    goto LABEL_1661;
  v1->m_Items[510] = (DataMasterBase_o *)v3575;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[510],
    (int32_t)v3575,
    v3576,
    v3577,
    v3578,
    v3579,
    v3580,
    v3581);
  v3582 = (UserPaymentLimitMaster_o *)sub_1C942E4(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v3582, 0);
  if ( v3582 )
  {
    v3 = sub_1C941D4(v3582, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FFu )
    goto LABEL_1661;
  v1->m_Items[511] = (DataMasterBase_o *)v3582;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[511],
    (int32_t)v3582,
    v3583,
    v3584,
    v3585,
    v3586,
    v3587,
    v3588);
  v3589 = (RoadmapMaster_o *)sub_1C942E4(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v3589, 0);
  if ( v3589 )
  {
    v3 = sub_1C941D4(v3589, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x200u )
    goto LABEL_1661;
  v1->m_Items[512] = (DataMasterBase_o *)v3589;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[512],
    (int32_t)v3589,
    v3590,
    v3591,
    v3592,
    v3593,
    v3594,
    v3595);
  v3596 = (UserRecommendSupportMaster_o *)sub_1C942E4(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v3596, 0);
  if ( v3596 )
  {
    v3 = sub_1C941D4(v3596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x201u )
    goto LABEL_1661;
  v1->m_Items[513] = (DataMasterBase_o *)v3596;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[513],
    (int32_t)v3596,
    v3597,
    v3598,
    v3599,
    v3600,
    v3601,
    v3602);
  v3603 = (RecommendSupportQuestMaster_o *)sub_1C942E4(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v3603, 0);
  if ( v3603 )
  {
    v3 = sub_1C941D4(v3603, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x202u )
    goto LABEL_1661;
  v1->m_Items[514] = (DataMasterBase_o *)v3603;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[514],
    (int32_t)v3603,
    v3604,
    v3605,
    v3606,
    v3607,
    v3608,
    v3609);
  v3610 = (RecommendAdviceMessageMaster_o *)sub_1C942E4(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v3610, 0);
  if ( v3610 )
  {
    v3 = sub_1C941D4(v3610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x203u )
    goto LABEL_1661;
  v1->m_Items[515] = (DataMasterBase_o *)v3610;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[515],
    (int32_t)v3610,
    v3611,
    v3612,
    v3613,
    v3614,
    v3615,
    v3616);
  v3617 = (UserRecommendFollowerMaster_o *)sub_1C942E4(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v3617, 0);
  if ( v3617 )
  {
    v3 = sub_1C941D4(v3617, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x204u )
    goto LABEL_1661;
  v1->m_Items[516] = (DataMasterBase_o *)v3617;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[516],
    (int32_t)v3617,
    v3618,
    v3619,
    v3620,
    v3621,
    v3622,
    v3623);
  v3624 = (ItemDropEfficiencyMaster_o *)sub_1C942E4(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v3624, 0);
  if ( v3624 )
  {
    v3 = sub_1C941D4(v3624, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x205u )
    goto LABEL_1661;
  v1->m_Items[517] = (DataMasterBase_o *)v3624;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[517],
    (int32_t)v3624,
    v3625,
    v3626,
    v3627,
    v3628,
    v3629,
    v3630);
  v3631 = (BlankEarthGimmickAddMaster_o *)sub_1C942E4(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v3631, 0);
  if ( v3631 )
  {
    v3 = sub_1C941D4(v3631, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x206u )
    goto LABEL_1661;
  v1->m_Items[518] = (DataMasterBase_o *)v3631;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[518],
    (int32_t)v3631,
    v3632,
    v3633,
    v3634,
    v3635,
    v3636,
    v3637);
  v3638 = (WarReleaseMaster_o *)sub_1C942E4(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v3638, 0);
  if ( v3638 )
  {
    v3 = sub_1C941D4(v3638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x207u )
    goto LABEL_1661;
  v1->m_Items[519] = (DataMasterBase_o *)v3638;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[519],
    (int32_t)v3638,
    v3639,
    v3640,
    v3641,
    v3642,
    v3643,
    v3644);
  v3645 = (SelectBonusBaseMaster_o *)sub_1C942E4(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v3645, 0);
  if ( v3645 )
  {
    v3 = sub_1C941D4(v3645, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x208u )
    goto LABEL_1661;
  v1->m_Items[520] = (DataMasterBase_o *)v3645;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[520],
    (int32_t)v3645,
    v3646,
    v3647,
    v3648,
    v3649,
    v3650,
    v3651);
  v3652 = (SelectBonusMaster_o *)sub_1C942E4(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v3652, 0);
  if ( v3652 )
  {
    v3 = sub_1C941D4(v3652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x209u )
    goto LABEL_1661;
  v1->m_Items[521] = (DataMasterBase_o *)v3652;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[521],
    (int32_t)v3652,
    v3653,
    v3654,
    v3655,
    v3656,
    v3657,
    v3658);
  v3659 = (MyroomServantSpecialImageMaster_o *)sub_1C942E4(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v3659, 0);
  if ( v3659 )
  {
    v3 = sub_1C941D4(v3659, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Au )
    goto LABEL_1661;
  v1->m_Items[522] = (DataMasterBase_o *)v3659;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[522],
    (int32_t)v3659,
    v3660,
    v3661,
    v3662,
    v3663,
    v3664,
    v3665);
  v3666 = (ShopResetMaster_o *)sub_1C942E4(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v3666, 0);
  if ( v3666 )
  {
    v3 = sub_1C941D4(v3666, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Bu )
    goto LABEL_1661;
  v1->m_Items[523] = (DataMasterBase_o *)v3666;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[523],
    (int32_t)v3666,
    v3667,
    v3668,
    v3669,
    v3670,
    v3671,
    v3672);
  v3673 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C942E4(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v3673, 0);
  if ( v3673 )
  {
    v3 = sub_1C941D4(v3673, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Cu )
    goto LABEL_1661;
  v1->m_Items[524] = (DataMasterBase_o *)v3673;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[524],
    (int32_t)v3673,
    v3674,
    v3675,
    v3676,
    v3677,
    v3678,
    v3679);
  v3680 = (FriendshipServantMaster_o *)sub_1C942E4(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v3680, 0);
  if ( v3680 )
  {
    v3 = sub_1C941D4(v3680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Du )
    goto LABEL_1661;
  v1->m_Items[525] = (DataMasterBase_o *)v3680;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[525],
    (int32_t)v3680,
    v3681,
    v3682,
    v3683,
    v3684,
    v3685,
    v3686);
  v3687 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C942E4(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v3687, 0);
  if ( v3687 )
  {
    v3 = sub_1C941D4(v3687, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Eu )
    goto LABEL_1661;
  v1->m_Items[526] = (DataMasterBase_o *)v3687;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[526],
    (int32_t)v3687,
    v3688,
    v3689,
    v3690,
    v3691,
    v3692,
    v3693);
  v3694 = (ChaldeaGatePickupMaster_o *)sub_1C942E4(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v3694, 0);
  if ( v3694 )
  {
    v3 = sub_1C941D4(v3694, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Fu )
    goto LABEL_1661;
  v1->m_Items[527] = (DataMasterBase_o *)v3694;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[527],
    (int32_t)v3694,
    v3695,
    v3696,
    v3697,
    v3698,
    v3699,
    v3700);
  v3701 = (WarGroupIgnoreMaster_o *)sub_1C942E4(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v3701, 0);
  if ( v3701 )
  {
    v3 = sub_1C941D4(v3701, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x210u )
    goto LABEL_1661;
  v1->m_Items[528] = (DataMasterBase_o *)v3701;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[528],
    (int32_t)v3701,
    v3702,
    v3703,
    v3704,
    v3705,
    v3706,
    v3707);
  v3708 = (ImagePartsGroupMaster_o *)sub_1C942E4(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v3708, 0);
  if ( v3708 )
  {
    v3 = sub_1C941D4(v3708, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x211u )
    goto LABEL_1661;
  v1->m_Items[529] = (DataMasterBase_o *)v3708;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[529],
    (int32_t)v3708,
    v3709,
    v3710,
    v3711,
    v3712,
    v3713,
    v3714);
  v3715 = (UserImagePartsGroupMaster_o *)sub_1C942E4(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v3715, 0);
  if ( v3715 )
  {
    v3 = sub_1C941D4(v3715, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x212u )
    goto LABEL_1661;
  v1->m_Items[530] = (DataMasterBase_o *)v3715;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[530],
    (int32_t)v3715,
    v3716,
    v3717,
    v3718,
    v3719,
    v3720,
    v3721);
  v3722 = (MissionItemDisplayMaster_o *)sub_1C942E4(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v3722, 0);
  if ( v3722 )
  {
    v3 = sub_1C941D4(v3722, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x213u )
    goto LABEL_1661;
  v1->m_Items[531] = (DataMasterBase_o *)v3722;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[531],
    (int32_t)v3722,
    v3723,
    v3724,
    v3725,
    v3726,
    v3727,
    v3728);
  v3729 = (QuestUseItemGroupMaster_o *)sub_1C942E4(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v3729, 0);
  if ( v3729 )
  {
    v3 = sub_1C941D4(v3729, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x214u )
    goto LABEL_1661;
  v1->m_Items[532] = (DataMasterBase_o *)v3729;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[532],
    (int32_t)v3729,
    v3730,
    v3731,
    v3732,
    v3733,
    v3734,
    v3735);
  v3736 = (QuestUseItemPickupMaster_o *)sub_1C942E4(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v3736, 0);
  if ( v3736 )
  {
    v3 = sub_1C941D4(v3736, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x215u )
    goto LABEL_1661;
  v1->m_Items[533] = (DataMasterBase_o *)v3736;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[533],
    (int32_t)v3736,
    v3737,
    v3738,
    v3739,
    v3740,
    v3741,
    v3742);
  v3743 = (UserEventItemLinkSvtMaster_o *)sub_1C942E4(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v3743, 0);
  if ( v3743 )
  {
    v3 = sub_1C941D4(v3743, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x216u )
    goto LABEL_1661;
  v1->m_Items[534] = (DataMasterBase_o *)v3743;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[534],
    (int32_t)v3743,
    v3744,
    v3745,
    v3746,
    v3747,
    v3748,
    v3749);
  v3750 = (QuestHintOverwriteMaster_o *)sub_1C942E4(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v3750, 0);
  if ( v3750 )
  {
    v3 = sub_1C941D4(v3750, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x217u )
    goto LABEL_1661;
  v1->m_Items[535] = (DataMasterBase_o *)v3750;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[535],
    (int32_t)v3750,
    v3751,
    v3752,
    v3753,
    v3754,
    v3755,
    v3756);
  v3757 = (ReachedWaveInfoMaster_o *)sub_1C942E4(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v3757, 0);
  if ( v3757 )
  {
    v3 = sub_1C941D4(v3757, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x218u )
    goto LABEL_1661;
  v1->m_Items[536] = (DataMasterBase_o *)v3757;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[536],
    (int32_t)v3757,
    v3758,
    v3759,
    v3760,
    v3761,
    v3762,
    v3763);
  v3764 = (GalleryMaster_o *)sub_1C942E4(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v3764, 0);
  if ( v3764 )
  {
    v3 = sub_1C941D4(v3764, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x219u )
    goto LABEL_1661;
  v1->m_Items[537] = (DataMasterBase_o *)v3764;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[537],
    (int32_t)v3764,
    v3765,
    v3766,
    v3767,
    v3768,
    v3769,
    v3770);
  v3771 = (GalleryResourceMaster_o *)sub_1C942E4(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v3771, 0);
  if ( v3771 )
  {
    v3 = sub_1C941D4(v3771, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Au )
    goto LABEL_1661;
  v1->m_Items[538] = (DataMasterBase_o *)v3771;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[538],
    (int32_t)v3771,
    v3772,
    v3773,
    v3774,
    v3775,
    v3776,
    v3777);
  v3778 = (ServantSkillAddMaster_o *)sub_1C942E4(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v3778, 0);
  if ( v3778 )
  {
    v3 = sub_1C941D4(v3778, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Bu )
    goto LABEL_1661;
  v1->m_Items[539] = (DataMasterBase_o *)v3778;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[539],
    (int32_t)v3778,
    v3779,
    v3780,
    v3781,
    v3782,
    v3783,
    v3784);
  v3785 = (GalleryFolderReleaseMaster_o *)sub_1C942E4(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v3785, 0);
  if ( v3785 )
  {
    v3 = sub_1C941D4(v3785, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Cu )
    goto LABEL_1661;
  v1->m_Items[540] = (DataMasterBase_o *)v3785;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[540],
    (int32_t)v3785,
    v3786,
    v3787,
    v3788,
    v3789,
    v3790,
    v3791);
  v3792 = (UserSvtFirstGetTimeMaster_o *)sub_1C942E4(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v3792, 0);
  if ( v3792 )
  {
    v3 = sub_1C941D4(v3792, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Du )
    goto LABEL_1661;
  v1->m_Items[541] = (DataMasterBase_o *)v3792;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[541],
    (int32_t)v3792,
    v3793,
    v3794,
    v3795,
    v3796,
    v3797,
    v3798);
  v3799 = (QuestExtensionMaster_o *)sub_1C942E4(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v3799, 0);
  if ( v3799 )
  {
    v3 = sub_1C941D4(v3799, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Eu )
    goto LABEL_1661;
  v1->m_Items[542] = (DataMasterBase_o *)v3799;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[542],
    (int32_t)v3799,
    v3800,
    v3801,
    v3802,
    v3803,
    v3804,
    v3805);
  v3806 = (UserServantGrandMaster_o *)sub_1C942E4(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v3806, 0);
  if ( v3806 )
  {
    v3 = sub_1C941D4(v3806, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Fu )
    goto LABEL_1661;
  v1->m_Items[543] = (DataMasterBase_o *)v3806;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[543],
    (int32_t)v3806,
    v3807,
    v3808,
    v3809,
    v3810,
    v3811,
    v3812);
  v3813 = (GrandGraphMaster_o *)sub_1C942E4(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v3813, 0);
  if ( v3813 )
  {
    v3 = sub_1C941D4(v3813, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x220u )
    goto LABEL_1661;
  v1->m_Items[544] = (DataMasterBase_o *)v3813;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[544],
    (int32_t)v3813,
    v3814,
    v3815,
    v3816,
    v3817,
    v3818,
    v3819);
  v3820 = (GrandGraphDetailMaster_o *)sub_1C942E4(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v3820, 0);
  if ( v3820 )
  {
    v3 = sub_1C941D4(v3820, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x221u )
    goto LABEL_1661;
  v1->m_Items[545] = (DataMasterBase_o *)v3820;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[545],
    (int32_t)v3820,
    v3821,
    v3822,
    v3823,
    v3824,
    v3825,
    v3826);
  v3827 = (UserClassStatisticsMaster_o *)sub_1C942E4(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v3827, 0);
  if ( v3827 )
  {
    v3 = sub_1C941D4(v3827, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x222u )
    goto LABEL_1661;
  v1->m_Items[546] = (DataMasterBase_o *)v3827;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[546],
    (int32_t)v3827,
    v3828,
    v3829,
    v3830,
    v3831,
    v3832,
    v3833);
  v3834 = (EventEquipSkillPartsMaster_o *)sub_1C942E4(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v3834, 0);
  if ( v3834 )
  {
    v3 = sub_1C941D4(v3834, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x223u )
    goto LABEL_1661;
  v1->m_Items[547] = (DataMasterBase_o *)v3834;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[547],
    (int32_t)v3834,
    v3835,
    v3836,
    v3837,
    v3838,
    v3839,
    v3840);
  v3841 = (MasterIndividualitySelectMaster_o *)sub_1C942E4(MasterIndividualitySelectMaster_TypeInfo);
  MasterIndividualitySelectMaster___ctor(v3841, 0);
  if ( v3841 )
  {
    v3 = sub_1C941D4(v3841, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x224u )
    goto LABEL_1661;
  v1->m_Items[548] = (DataMasterBase_o *)v3841;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[548],
    (int32_t)v3841,
    v3842,
    v3843,
    v3844,
    v3845,
    v3846,
    v3847);
  v3848 = (MyroomAddBgDiffMaster_o *)sub_1C942E4(MyroomAddBgDiffMaster_TypeInfo);
  MyroomAddBgDiffMaster___ctor(v3848, 0);
  if ( v3848 )
  {
    v3 = sub_1C941D4(v3848, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x225u )
    goto LABEL_1661;
  v1->m_Items[549] = (DataMasterBase_o *)v3848;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[549],
    (int32_t)v3848,
    v3849,
    v3850,
    v3851,
    v3852,
    v3853,
    v3854);
  v3855 = (BattleScriptMaster_o *)sub_1C942E4(BattleScriptMaster_TypeInfo);
  BattleScriptMaster___ctor(v3855, 0);
  if ( v3855 )
  {
    v3 = sub_1C941D4(v3855, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1662;
  }
  if ( *(_DWORD *)p_max_length <= 0x226u )
    goto LABEL_1661;
  v1->m_Items[550] = (DataMasterBase_o *)v3855;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[550],
    (int32_t)v3855,
    v3856,
    v3857,
    v3858,
    v3859,
    v3860,
    v3861);
  v3862 = (DropAddMaster_o *)sub_1C942E4(DropAddMaster_TypeInfo);
  DropAddMaster___ctor(v3862, 0);
  if ( v3862 )
  {
    v3 = sub_1C941D4(v3862, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1662:
      v3870 = sub_1C94314(v3);
      sub_1C941C0(v3870, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x227u )
LABEL_1661:
    sub_1C942F8(v3);
  v1->m_Items[551] = (DataMasterBase_o *)v3862;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v1->m_Items[551],
    (int32_t)v3862,
    v3863,
    v3864,
    v3865,
    v3866,
    v3867,
    v3868);
  return v1;
}


void DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v5; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v7; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4D2C304 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    byte_4D2C304 = 1;
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
    if ( System_IO_File__Exists(CacheVersionFileName, 0) )
      System_IO_File__Delete(CacheVersionFileName, 0);
    v5 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
    if ( System_IO_File__Exists(CacheListFileName, 0) )
      System_IO_File__Delete(CacheListFileName, 0);
    v7 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v7);
    if ( System_IO_File__Exists(CacheFileName, 0) )
      System_IO_File__Delete(CacheFileName, 0);
  }
}


void DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w26
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x20
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C301 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_8568/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4D2C301 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_masterCheckName, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = 1;
  do
  {
    v27 = v11;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v13 = System_String__Format((System_String_o *)StringLiteral_8568/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v12, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get(v13, 0);
    if ( System_String__op_Equality(v14, v13, 0) )
      break;
    v22 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v22->fields._items;
      v24 = Method_System_Collections_Generic_List_string__Add__;
      ++v22->fields._version;
      if ( items )
        continue;
    }
    sub_1C942F0(v22, v15);
    size = v22->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v14,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v14;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
    }
    ++v11;
  }
  while ( v11 != 999 );
}


Il2CppObject *DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_319C134 *method)
{
  long double v2; // q0
  const MethodInfo_319C134_RGCTXs *rgctx_data; // x8
  const MethodInfo_319C134 *_1_TMaster; // x19
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v7; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v10; // x20
  long double v11; // q0
  Il2CppObject *result; // x0
  intptr_t _2_TMaster; // x19
  System_RuntimeTypeHandle_o v14; // x0
  Il2CppObject *v15; // x19
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x19
  System_Enum_o v19; // [xsp+8h] [xbp-48h] BYREF
  int v20; // [xsp+18h] [xbp-38h]
  int v21; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1C94098(&UnityEngine_Debug_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&DataNameKind_Kind_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    sub_1C94098(&StringLiteral_21672/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6A188();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_1C6A188();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (rgctxDataDummy[12].fields._impl.fields.value & 0x10000000000LL) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C6A12C(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v10) = *(_DWORD *)rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v10,
         &value,
         (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v10 = value;
    _1_TMaster = (const MethodInfo_319C134 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_319C134 *)sub_1C6A12C(v11);
    if ( !v10 )
      return 0;
    result = (Il2CppObject *)sub_1C941D4(v10, _1_TMaster);
    if ( result )
      return result;
    sub_1C9468C(v10);
  }
  _2_TMaster = (intptr_t)_1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = _2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v14, 0);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C942F0(rgctxDataDummy, method);
  v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))rgctxDataDummy->klass->vtable._3_ToString.methodPtr)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._3_ToString.method);
  v21 = (int)v10;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = (int)v10;
  v19.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v19.monitor = (void *)-1LL;
  v17 = (Il2CppObject *)System_Enum__ToString(&v19, 0);
  v18 = (Il2CppObject *)System_String__Format_64459120((System_String_o *)StringLiteral_21672/*"master[{0}] is null[{1}:{2}]"*/, v15, v16, v17, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v18, 0);
  return 0;
}


Il2CppObject *DataManager__GetMaster_object_(const MethodInfo_319C0E0 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_1C6A188();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_319C134 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


bool DataManager__HasMaster(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Instance; // x0
  bool v2; // w1
  unsigned __int16 *v3; // x0
  unsigned __int16 v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2C2ED & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
    sub_1C94098(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C2ED = 1;
  }
  Instance = (System_Collections_Generic_IEnumerable_TSource__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( Instance )
  {
    Instance = (System_Collections_Generic_IEnumerable_TSource__o *)Instance[3].klass;
    if ( Instance )
    {
      v2 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
             Instance,
             (const MethodInfo_31A6FB4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
      v3 = &v5;
      v5 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v3,
        v2,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      LOBYTE(Instance) = v5 > 0xFFu;
    }
  }
  return (char)Instance;
}


void DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2C2EB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_CreateMasterData__);
    sub_1C94098(&System_Func_DataMasterBase____TypeInfo);
    byte_4D2C2EB = 1;
  }
  v3 = (System_Func_object__o *)sub_1C942E4(System_Func_DataMasterBase____TypeInfo);
  System_Func_object____ctor(v3, 0, Method_DataManager_CreateMasterData__, 0);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v3, v4);
}


void DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v7; // x19
  __int64 v8; // x21
  System_Collections_Generic_Dictionary_int__object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int v16; // w8
  unsigned int v17; // w23
  __int64 v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v4 = this;
  if ( (byte_4D2C2EC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_1C94098(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_4D2C2EC = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( (unsigned int)v7 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v7];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, const MethodInfo *))this->klass[1]._1.byval_arg.data)(
                                  this,
                                  *(_QWORD *)&this->klass[1]._1.byval_arg.bits,
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
      || (v8 = ((__int64 (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))createMasterDataMethod->fields.invoke_impl)(
                 createMasterDataMethod->fields.method_code,
                 createMasterDataMethod->fields.method,
                 method),
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_1C942F0(this, createMasterDataMethod);
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
          (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v16 = *(_DWORD *)(v8 + 24);
        if ( (int)++v17 >= v16 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C942F8(this);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.datalist, v8, v10, v11, v12, v13, v14, v15);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.lookup, (int32_t)v9, v19, v20, v21, v22, v23, v24);
  }
}


void DataManager__LoadMasterDataThread(DataManager_o *this, Il2CppObject *indexList, const MethodInfo *method)
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v24; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v26; // x25
  __int64 Index_object; // x0
  __int64 v28; // x1
  const MethodInfo_3993B78 *v29; // x3
  struct DataMasterBase_array *v30; // x8
  DataMasterBase_o *v31; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v34; // x0
  const MethodInfo_3993B78 *v35; // x3
  __int64 v36; // x0
  __int64 v37; // x1
  Il2CppObject *lockCountObj; // x22
  int v39; // w1
  _QWORD **v40; // x20
  __int64 v41; // x0
  Il2CppObject *v42; // x20
  __int64 v43; // x0
  struct System_Threading_SynchronizationContext_o *v44; // x20
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  System_Threading_SendOrPostCallback_o *v48; // x21
  __int64 v49; // x0
  Il2CppObject *v50; // x23
  __int64 v51; // x0
  intptr_t v52; // x0
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  _QWORD *exception; // x0
  __int64 v61; // [xsp+10h] [xbp-90h]
  __int64 v62; // [xsp+18h] [xbp-88h] BYREF
  __int64 v63; // [xsp+20h] [xbp-80h]
  __int64 v64; // [xsp+28h] [xbp-78h] BYREF
  __int64 v65; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v67; // 0:x0.16
  System_Nullable_long__o v68; // 0:x0.16

  v5 = this;
  if ( (byte_4D2C2FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_1C94098(&byte___TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    sub_1C94098(&System_Predicate_DataMasterBase__TypeInfo);
    sub_1C94098(&Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_1C94098(&DataManager___c__DisplayClass59_0_TypeInfo);
    byte_4D2C2FE = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C942F0(this, indexList);
  v6 = sub_1C941D4(indexList, int___TypeInfo);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(unsigned int *)(v6 + 24);
    v61 = sub_1C94140(byte___TypeInfo, 2000);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = sub_1C942E4(DataManager___c__DisplayClass59_0_TypeInfo);
        DataManager___c__DisplayClass59_0___ctor((DataManager___c__DisplayClass59_0_o *)v10, 0);
        if ( i >= *(unsigned int *)(v7 + 24) )
          sub_1C942F8(v11);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C942F0(0, v12);
        v14 = *(_DWORD *)(v7 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v14,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v10 )
          sub_1C942F0(Item, Item);
        *(_QWORD *)(v10 + 16) = Item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)Item, v16, v17, v18, v19, v20, v21);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C942F0(0, v22);
        v24 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v14,
                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v10 + 16), 0) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v26 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v26,
            (Il2CppObject *)v10,
            Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__,
            0);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v26,
                           (const MethodInfo_32A37BC *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v30 = v5->fields.datalist;
            if ( !v30 )
              sub_1C942F0(Index_object, v28);
            if ( (unsigned int)Index_object >= LODWORD(v30->max_length) )
              sub_1C942F8(Index_object);
            if ( !v24 )
              sub_1C942F0(Index_object, v28);
            if ( !LODWORD(v24[1].monitor) )
              sub_1C942F8(Index_object);
            v31 = v30->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v67.fields.value = (int64_t)v24[2].klass;
            v64 = 0;
            v65 = 0;
            *(_QWORD *)&v67.fields.hasValue = &v64;
            System_Nullable_long____ctor(v67, Method_System_Nullable_long___ctor__, v29);
            if ( LODWORD(v24[1].monitor) <= 1 )
              sub_1C942F8(v34);
            v68.fields.value = (int64_t)v24[2].monitor;
            v62 = 0;
            v63 = 0;
            *(_QWORD *)&v68.fields.hasValue = &v62;
            System_Nullable_long____ctor(v68, Method_System_Nullable_long___ctor__, v35);
            if ( !v31 )
              sub_1C942F0(v36, v37);
            ((void (__fastcall *)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, _QWORD))v31->klass[1]._1.byval_arg.data)(
              v31,
              masterDataBytes,
              context,
              v64,
              v65,
              v62,
              v63,
              v61,
              *(_QWORD *)&v31->klass[1]._1.byval_arg.bits);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_66345384(lockCountObj, lockTaken, 0);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0);
      }
    }
  }
  else
  {
    sub_1C9468C(indexList);
    if ( v39 != 1 )
      sub_1D78274();
    v40 = (_QWORD **)__cxa_begin_catch(v3);
    v41 = sub_1C940AC(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v41, **v40) & 1) != 0 )
    {
      __cxa_end_catch();
      v42 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_66345384(v42, lockTaken, 0);
    }
    else
    {
      v43 = sub_1C940AC(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v43, **v40) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v40;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0);
      }
      __cxa_end_catch();
      v44 = v5->fields.context;
      v45 = sub_1C940AC(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v45 + 224) )
        j_il2cpp_runtime_class_init_0(v45);
      v46 = sub_1C940AC(&DataManager___c_TypeInfo);
      v48 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v46 + 184) + 8LL);
      if ( !v48 )
      {
        v49 = sub_1C940AC(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v49 + 224) )
          j_il2cpp_runtime_class_init_0(v49);
        v50 = **(Il2CppObject ***)(sub_1C940AC(&DataManager___c_TypeInfo) + 184);
        v51 = sub_1C940AC(&System_Threading_SendOrPostCallback_TypeInfo);
        v48 = (System_Threading_SendOrPostCallback_o *)sub_1C942E4(v51);
        v52 = sub_1C940AC(&Method_DataManager___c__LoadMasterDataThread_b__59_1__);
        System_Threading_SendOrPostCallback___ctor(v48, v50, v52, 0);
        *(_QWORD *)(*(_QWORD *)(sub_1C940AC(&DataManager___c_TypeInfo) + 184) + 8LL) = v48;
        v53 = sub_1C940AC(&DataManager___c_TypeInfo);
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)(*(_QWORD *)(v53 + 184) + 8LL),
          (int32_t)v48,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      if ( !v44 )
        sub_1C942F0(v46, v47);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, const MethodInfo *))v44->klass->vtable._5_Post.methodPtr)(
        v44,
        v48,
        0,
        v44->klass->vtable._5_Post.method);
      v42 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_66345384(v42, lockTaken, 0);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v42, 0);
  }
}


void DataManager__OnDestroy(DataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DataManager__StopWriteLocalFile(this, method);
  DataManager__StopMasterLoadThread(this, v3);
}


void DataManager__StartMasterLoadThread(
        DataManager_o *this,
        int32_t maxIndex,
        System_Collections_Generic_List_int__o *loadedIndices,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_int__o *v37; // x0
  System_Int32_array *v38; // x21
  System_Comparison_int__o *v39; // x22
  __int64 v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Threading_ParameterizedThreadStart_o *v47; // x24
  System_Threading_Thread_o *v48; // x23
  System_Func_int__bool__o *v49; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Int32_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  int v62; // w8
  bool v63; // nf

  if ( (byte_4D2C2FC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Sort_int____79043728);
    sub_1C94098(&System_Comparison_int__TypeInfo);
    sub_1C94098(&Method_DataManager_LoadMasterDataThread__);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_1C94098(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C94098(&System_Threading_Thread_TypeInfo);
    sub_1C94098(&Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__);
    sub_1C94098(&DataManager___c__DisplayClass57_0_TypeInfo);
    sub_1C94098(&Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__);
    sub_1C94098(&DataManager___c__DisplayClass57_1_TypeInfo);
    byte_4D2C2FC = 1;
  }
  v7 = sub_1C942E4(DataManager___c__DisplayClass57_0_TypeInfo);
  DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)loadedIndices, v16, v17, v18, v19, v20, v21);
  Current = System_Threading_SynchronizationContext__get_Current(0);
  this->fields.context = Current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.context, (int32_t)Current, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v29;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.masterLoadThreads,
    (int32_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = System_Linq_Enumerable__Range(0, maxIndex, 0);
  v38 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  v39 = (System_Comparison_int__o *)sub_1C942E4(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v39,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__,
    0);
  System_Array__Sort_int__51806720(
    v38,
    (System_Comparison_T__o *)v39,
    (const MethodInfo_3168200 *)Method_System_Array_Sort_int____79043728);
  v40 = sub_1C942E4(DataManager___c__DisplayClass57_1_TypeInfo);
  DataManager___c__DisplayClass57_1___ctor((DataManager___c__DisplayClass57_1_o *)v40, 0);
  if ( !v40 )
LABEL_14:
    sub_1C942F0(v8, v9);
  *(_QWORD *)(v40 + 24) = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 24), v7, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v40 + 16) = 0;
  do
  {
    v47 = (System_Threading_ParameterizedThreadStart_o *)sub_1C942E4(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v47,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0);
    v48 = (System_Threading_Thread_o *)sub_1C942E4(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_66380888(v48, v47, 0);
    if ( !v48 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v48, 1, 0);
    v49 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v49,
      (Il2CppObject *)v40,
      Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__,
      0);
    v50 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
    v51 = System_Linq_Enumerable__ToArray_int_(
            v50,
            (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_66381468(v48, &v51->obj, 0);
    v8 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v8->fields._items;
    v59 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)v48,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v61[4] = (Il2CppClass *)v48;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v61 + 4), (int32_t)v48, v52, v53, v54, v55, v56, v57);
    }
    v62 = *(_DWORD *)(v40 + 16) + 1;
    v63 = *(_DWORD *)(v40 + 16) - 4 < 0;
    *(_DWORD *)(v40 + 16) = v62;
  }
  while ( v63 != __OFSUB__(v62, 5) );
}


void DataManager__StartWriteLocalFile(DataManager_o *this, System_String_o *fileName, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Threading_ParameterizedThreadStart_o *v10; // x21
  System_Threading_Thread_o *v11; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1

  if ( (byte_4D2C2FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_WriteLocalFileThread__);
    sub_1C94098(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_1C94098(&System_Threading_Thread_TypeInfo);
    byte_4D2C2FF = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.writeMasterDataThreadException,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Threading_ParameterizedThreadStart_o *)sub_1C942E4(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0);
  v11 = (System_Threading_Thread_o *)sub_1C942E4(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_66380888(v11, v10, 0);
  this->fields.writeMasterDataThread = v11;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_writeMasterDataThread, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_writeMasterDataThread )
    sub_1C942F0(0, v19);
  System_Threading_Thread__Start_66381468(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0);
}


void DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  GrandQuestFolderBoardItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2C2FD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4D2C2FD = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (GrandQuestFolderBoardItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C942F0(Item, v7);
      v8 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0) )
        System_Threading_Thread__Abort(v8, 0);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0;
    sub_1C9403C(p_masterLoadThreads, 0, v9, v10, v11, v12, v13, v14);
  }
}


void DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1C942F0(0, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0);
    }
    *p_writeMasterDataThread = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_writeMasterDataThread, 0, v5, v6, v7, v8, v9, v10);
  }
}


void DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_Stream_o *v7; // x22
  System_IO_BinaryWriter_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
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

  if ( (byte_4D2C300 & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2C300 = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v5 = param;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v5, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v7 = CatAndMouseGame__CatGameZ(v6, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65327072(v8, v7, 0);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C942F0(v9, v10);
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
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C942F0(0, v21);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C942F8(Item);
      if ( !v8 )
        sub_1C942F0(Item, v21);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[2].monitor),
        v8->klass->vtable._17_Write.method);
      v23 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v23 )
        sub_1C942F0(0, v22);
      masterDataBytes = this->fields.masterDataBytes;
      v25 = System_Collections_Generic_List_object___get_Item(
              v23,
              v19,
              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v25 )
        sub_1C942F0(0, v26);
      if ( !LODWORD(v25[1].monitor) )
        sub_1C942F8(v25);
      if ( !this->fields.saveDataMapList )
        sub_1C942F0(v25, v26);
      klass = v25[2].klass;
      v28 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v19,
              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v28 )
        sub_1C942F0(0, v29);
      if ( LODWORD(v28[1].monitor) <= 1 )
        sub_1C942F8(v28);
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v8->klass->vtable._11_Write.methodPtr)(
              v8,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v28[2].monitor),
              v8->klass->vtable._11_Write.method);
      if ( size == ++v19 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C942F0(v30, v31);
    }
  }
  v32 = v8->klass;
  v33 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_31:
    v35 = sub_1C6A420(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v8, *(_QWORD *)(v35 + 8));
LABEL_34:
  if ( v6 )
  {
    v36 = v6->klass;
    v37 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_39;
      }
      v39 = (__int64)&v36->vtable + 16 * *v38;
    }
    else
    {
LABEL_39:
      v39 = sub_1C6A420(v6, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v39)(v6, *(_QWORD *)(v39 + 8));
  }
  this->fields.writeMasterDataThread = 0;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_writeMasterDataThread, 0, v11, v12, v13, v14, v15, v16);
}


bool DataManager___updateMasterData_b__50_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D2C2E6 & 1) == 0 )
  {
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2C2E6 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0);
  return System_String__Concat_64456008(CachePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D2C2E5 & 1) == 0 )
  {
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2C2E5 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0);
  return System_String__Concat_64456008(CachePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4D2C2E3 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&CacheFolderName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2C2E3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0);
  return System_String__Concat_64456008(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FolderName, 0);
}


System_String_o *DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D2C2E4 & 1) == 0 )
  {
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2C2E4 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0);
  return System_String__Concat_64456008(CachePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


int32_t DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2F2 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F2 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2F3 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F3 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dateVersion;
}


uint32_t DataManager__getMdk(DataManager_o *this, System_String_o *name, int32_t version, const MethodInfo *method)
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

  if ( (byte_4D2C302 & 1) == 0 )
  {
    sub_1C94098(&Crc32_TypeInfo);
    byte_4D2C302 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C942F0(0, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._18_GetBytes.method);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v9 = Crc32__Compute(v8, 0);
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


System_String_o *DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4D2C2E7 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&CacheFolderName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2C2E7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0);
  return System_String__Concat_64456008(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1041/*"/"*/,
           FolderNameNotConverted,
           0);
}


int32_t DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2F7 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F7 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2F6 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F6 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
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
    this = 0;
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
    sub_1C942F0(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2EF & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2EF = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4D2C2FA & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2FA = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->updateMasterDataResult;
}


bool DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


System_Collections_IEnumerator_o *DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2C2F9 & 1) == 0 )
  {
    sub_1C94098(&DataManager__readMasterData_d__48_TypeInfo);
    byte_4D2C2F9 = 1;
  }
  v3 = sub_1C942E4(DataManager__readMasterData_d__48_TypeInfo);
  DataManager__readMasterData_d__48___ctor((DataManager__readMasterData_d__48_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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
  __int64 v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x0
  int v17; // w8
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
  __int64 v29; // x0
  int v30; // w8
  DataManager_o *v31; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v33; // x21
  DataManager_o *v34; // x21
  System_String_o *v35; // x0
  ManagerConfig_c *v36; // x8
  System_String_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  DataManager_o *v44; // x20
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Byte_array *v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w1
  GrandQuestFolderBoardItem_o *p_saveNameList; // x0
  int v75; // w22
  int64_t v76; // x0
  DataManager_c *v77; // x8
  int64_t v78; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v80; // x22
  unsigned int v81; // w23
  System_String_o *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  DataManager_o *v89; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v91; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v93; // x8
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w1
  DataManager_c *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  int32_t v115; // w1
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  int32_t v128; // w1
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  int32_t v141; // w1
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  int64_t v148; // [xsp+8h] [xbp-58h] BYREF
  int v149; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4D2C307 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&char___TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_5083/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_1C94098(&StringLiteral_5086/*"DataManager version load error : list file parameter error"*/);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    sub_1C94098(&StringLiteral_765/*") -> ("*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_21648/*"master versiton different ("*/);
    sub_1C94098(&StringLiteral_5087/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C94098(&StringLiteral_5088/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_1C94098(&StringLiteral_5085/*"DataManager version load error : list file break"*/);
    byte_4D2C307 = 1;
  }
  v149 = 0;
  v148 = 0;
  saveNameList = v2->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v5 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v7 = saveDataMapList->fields._size;
  v8 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v7, 0);
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
  if ( !System_IO_File__Exists(CacheListFileName, 0) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v13 = CatAndMouseGame__MouseGame3(AllText, 0);
  if ( v13 )
  {
    v14 = sub_1C94140(char___TypeInfo, 1);
    if ( !v14 )
      sub_1C942F0(0, 0);
    if ( !*(_DWORD *)(v14 + 24) )
      sub_1C942F8(v14);
    *(_WORD *)(v14 + 32) = -257;
    v15 = System_String__Trim_64474308(v13, (System_Char_array *)v14, 0);
    v16 = sub_1C94140(char___TypeInfo, 2);
    if ( !v16 )
      sub_1C942F0(0, 0);
    v17 = *(_DWORD *)(v16 + 24);
    if ( !v17 )
      sub_1C942F8(v16);
    *(_WORD *)(v16 + 32) = 13;
    if ( v17 == 1 )
      sub_1C942F8(v16);
    *(_WORD *)(v16 + 34) = 10;
    if ( !v15 )
      sub_1C942F0(v16, v16);
    v18 = System_String__IndexOfAny(v15, (System_Char_array *)v16, 0);
    if ( v18 < 2 )
    {
      v19 = &StringLiteral_5087/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v20 = System_String__Substring_64463684(v15, 0, v18, 0);
    v22 = v20;
    if ( !v20 )
      sub_1C942F0(0, v21);
    if ( System_String__StartsWith(v20, (System_String_o *)StringLiteral_25513/*"~"*/, 0) )
    {
      v23 = System_String__Substring(v22, 1, 0);
      v24 = System_String__Substring(v15, v18 + 1, 0);
      UTF8 = System_Text_Encoding__get_UTF8(0);
      if ( !UTF8 )
        sub_1C942F0(0, v26);
      v27 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                   UTF8,
                                   v24,
                                   UTF8->klass->vtable._18_GetBytes.method);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v28 = Crc32__Compute(v27, 0);
      if ( System_UInt32__Parse(v23, 0) == v28 )
      {
        v29 = sub_1C94140(char___TypeInfo, 2);
        if ( !v29 )
          sub_1C942F0(0, 0);
        v30 = *(_DWORD *)(v29 + 24);
        if ( !v30 )
          sub_1C942F8(v29);
        *(_WORD *)(v29 + 32) = 13;
        if ( v30 == 1 )
          sub_1C942F8(v29);
        *(_WORD *)(v29 + 34) = 10;
        if ( !v24 )
          sub_1C942F0(v29, v29);
        this = (DataManager_o *)System_String__Split_64466952(v24, (System_Char_array *)v29, 1, 0);
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
                                  (System_String_o *)StringLiteral_1763/*"@"*/,
                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v31->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v33 = *(System_String_o **)&v31->fields._DispLog;
          this = (DataManager_o *)sub_1C94140(char___TypeInfo, 1);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v33 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_64466836(v33, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_119;
          v34 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v35 = System_String__Substring((System_String_o *)this, 1, 0);
          v36 = ManagerConfig_TypeInfo;
          v37 = v35;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v36 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v36->static_fields->MasterDataCacheVer, v37, 0) )
          {
            this = (DataManager_o *)sub_1C94140(string___TypeInfo, 5);
            if ( this )
            {
              v44 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v45 = StringLiteral_21648/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21648/*"master versiton different ("*/;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._DispLog, v45, v38, v39, v40, v41, v42, v43);
                if ( LODWORD(v44->fields.m_CancellationTokenSource) > 1 )
                {
                  v44->fields.datalist = (struct DataMasterBase_array *)v37;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v44->fields.datalist,
                    (int32_t)v37,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                  if ( LODWORD(v44->fields.m_CancellationTokenSource) > 2 )
                  {
                    v58 = StringLiteral_765/*") -> ("*/;
                    v44->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_765/*") -> ("*/;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v44->fields.lookup, v58, v52, v53, v54, v55, v56, v57);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v44->fields.m_CancellationTokenSource) > 3 )
                    {
                      v65 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v44->fields.masterDataBytes = v65;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)&v44->fields.masterDataBytes,
                        (int32_t)v65,
                        v59,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64);
                      if ( LODWORD(v44->fields.m_CancellationTokenSource) > 4 )
                      {
                        v72 = StringLiteral_756/*")"*/;
                        v44->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_756/*")"*/;
                        p_saveNameList = (GrandQuestFolderBoardItem_o *)&v44->fields.saveNameList;
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
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v34->fields.datalist, 0);
            v149 = (int)this;
            if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v75 = (int)this;
            v76 = System_Int64__Parse((System_String_o *)v34->fields.lookup, 0);
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
                this = (DataManager_o *)sub_1C94140(char___TypeInfo, 1);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v82 )
                  break;
                this = (DataManager_o *)System_String__Split_64466836(v82, (System_Char_array *)this, 0);
                if ( !this )
                  break;
                v89 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v89->fields._DispLog;
                m_CachedPtr = this->fields.m_CachedPtr;
                v91 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !m_CachedPtr )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_386AE34 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                }
                else
                {
                  v93 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v93 + 32) = method;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v93 + 32), (int32_t)method, v83, v84, v85, v86, v87, v88);
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
              this = (DataManager_o *)sub_1C94140(string___TypeInfo, 9);
              if ( this )
              {
                v44 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v101 = StringLiteral_21648/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21648/*"master versiton different ("*/;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&this->fields._DispLog,
                    v101,
                    v95,
                    v96,
                    v97,
                    v98,
                    v99,
                    v100);
                  v102 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v102 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v102->static_fields, 0);
                  if ( LODWORD(v44->fields.m_CancellationTokenSource) > 1 )
                  {
                    v44->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&v44->fields.datalist,
                      (int32_t)this,
                      v103,
                      v104,
                      v105,
                      v106,
                      v107,
                      v108);
                    if ( LODWORD(v44->fields.m_CancellationTokenSource) > 2 )
                    {
                      v115 = (int)StringLiteral_113/*" "*/;
                      v44->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_113/*" "*/;
                      sub_1C9403C(
                        (GrandQuestFolderBoardItem_o *)&v44->fields.lookup,
                        v115,
                        v109,
                        v110,
                        v111,
                        v112,
                        v113,
                        v114);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0);
                      if ( LODWORD(v44->fields.m_CancellationTokenSource) > 3 )
                      {
                        v44->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)&v44->fields.masterDataBytes,
                          (int32_t)this,
                          v116,
                          v117,
                          v118,
                          v119,
                          v120,
                          v121);
                        if ( LODWORD(v44->fields.m_CancellationTokenSource) > 4 )
                        {
                          v128 = StringLiteral_765/*") -> ("*/;
                          v44->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_765/*") -> ("*/;
                          sub_1C9403C(
                            (GrandQuestFolderBoardItem_o *)&v44->fields.saveNameList,
                            v128,
                            v122,
                            v123,
                            v124,
                            v125,
                            v126,
                            v127);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v149, 0);
                          if ( LODWORD(v44->fields.m_CancellationTokenSource) > 5 )
                          {
                            v44->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C9403C(
                              (GrandQuestFolderBoardItem_o *)&v44->fields.saveDataMapList,
                              (int32_t)this,
                              v129,
                              v130,
                              v131,
                              v132,
                              v133,
                              v134);
                            if ( LODWORD(v44->fields.m_CancellationTokenSource) > 6 )
                            {
                              v141 = (int)StringLiteral_113/*" "*/;
                              *(_QWORD *)&v44->fields.lastFrameTime = StringLiteral_113/*" "*/;
                              sub_1C9403C(
                                (GrandQuestFolderBoardItem_o *)&v44->fields.lastFrameTime,
                                v141,
                                v135,
                                v136,
                                v137,
                                v138,
                                v139,
                                v140);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v148, 0);
                              if ( LODWORD(v44->fields.m_CancellationTokenSource) > 7 )
                              {
                                v44->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C9403C(
                                  (GrandQuestFolderBoardItem_o *)&v44->fields.masterCheckName,
                                  (int32_t)this,
                                  v142,
                                  v143,
                                  v144,
                                  v145,
                                  v146,
                                  v147);
                                if ( LODWORD(v44->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v72 = StringLiteral_756/*")"*/;
                                  v44->fields.lockCountObj = (Il2CppObject *)StringLiteral_756/*")"*/;
                                  p_saveNameList = (GrandQuestFolderBoardItem_o *)&v44->fields.lockCountObj;
LABEL_104:
                                  sub_1C9403C(p_saveNameList, v72, v66, v67, v68, v69, v70, v71);
                                  if ( System_String__Concat_64458276((System_String_array *)v44, 0) )
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
                sub_1C942F8(this);
              }
            }
LABEL_119:
            sub_1C942F0(this, method);
          }
          v19 = &StringLiteral_5086/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v19 = &StringLiteral_5085/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v19 = &StringLiteral_5083/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v19 = &StringLiteral_5088/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v19 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *DataManager__readMasterVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2C2F8 & 1) == 0 )
  {
    sub_1C94098(&DataManager__readMasterVersion_d__47_TypeInfo);
    byte_4D2C2F8 = 1;
  }
  v3 = sub_1C942E4(DataManager__readMasterVersion_d__47_TypeInfo);
  DataManager__readMasterVersion_d__47___ctor((DataManager__readMasterVersion_d__47_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v6; // x1
  System_String_o *AllText; // x20
  System_String_o *v8; // x20
  __int64 v9; // x0
  System_String_o *v10; // x20
  __int64 v11; // x0
  int v12; // w8
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
  __int64 v24; // x0
  int v25; // w8
  __int64 v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  System_String_o *v29; // x20
  __int64 v30; // x20
  System_String_o *v31; // x0
  ManagerConfig_c *v32; // x8
  System_String_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x20
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w1
  System_String_o *v69; // x8
  DataManager_c *v70; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v73; // x8
  int32_t v74; // w19
  struct DataManager_StaticFields *v75; // x8
  int64_t v76; // x0
  struct DataManager_StaticFields *v77; // x8

  if ( (byte_4D2C305 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&char___TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_5082/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_1C94098(&StringLiteral_5079/*"DataManager boot load error : list file break"*/);
    sub_1C94098(&StringLiteral_5081/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_1C94098(&StringLiteral_5077/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    sub_1C94098(&StringLiteral_21647/*"master data versiton different ("*/);
    sub_1C94098(&StringLiteral_765/*") -> ("*/);
    sub_1C94098(&StringLiteral_756/*")"*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_5080/*"DataManager boot load error : list file parameter error"*/);
    byte_4D2C305 = 1;
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
  if ( !System_IO_File__Exists(CacheVersionFileName, 0) )
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
    static_fields->dateVersion = 0;
    DataManager__ClearSaveDataList(this, v6);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v8 = CatAndMouseGame__MouseGame1(AllText, 0, 0);
  if ( v8 )
  {
    v9 = sub_1C94140(char___TypeInfo, 1);
    if ( !v9 )
      sub_1C942F0(0, 0);
    if ( !*(_DWORD *)(v9 + 24) )
      sub_1C942F8(v9);
    *(_WORD *)(v9 + 32) = -257;
    v10 = System_String__Trim_64474308(v8, (System_Char_array *)v9, 0);
    v11 = sub_1C94140(char___TypeInfo, 2);
    if ( !v11 )
      sub_1C942F0(0, 0);
    v12 = *(_DWORD *)(v11 + 24);
    if ( !v12 )
      sub_1C942F8(v11);
    *(_WORD *)(v11 + 32) = 13;
    if ( v12 == 1 )
      sub_1C942F8(v11);
    *(_WORD *)(v11 + 34) = 10;
    if ( !v10 )
      sub_1C942F0(v11, v11);
    v13 = System_String__IndexOfAny(v10, (System_Char_array *)v11, 0);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5081/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v69 = (System_String_o *)*v14;
LABEL_58:
      if ( v69 )
        goto LABEL_59;
      return 1;
    }
    v15 = System_String__Substring_64463684(v10, 0, v13, 0);
    v17 = v15;
    if ( !v15 )
      sub_1C942F0(0, v16);
    if ( !System_String__StartsWith(v15, (System_String_o *)StringLiteral_25513/*"~"*/, 0) )
    {
      v14 = &StringLiteral_5082/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v18 = System_String__Substring(v17, 1, 0);
    v19 = System_String__Substring(v10, v13 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_1C942F0(0, v21);
    v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v19,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v23 = Crc32__Compute(v22, 0);
    if ( System_UInt32__Parse(v18, 0) != v23 )
    {
      v14 = &StringLiteral_5077/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v24 = sub_1C94140(char___TypeInfo, 2);
    if ( !v24 )
      sub_1C942F0(0, 0);
    v25 = *(_DWORD *)(v24 + 24);
    if ( !v25 )
      sub_1C942F8(v24);
    *(_WORD *)(v24 + 32) = 13;
    if ( v25 == 1 )
      sub_1C942F8(v24);
    *(_WORD *)(v24 + 34) = 10;
    if ( !v19 )
      sub_1C942F0(v24, v24);
    v26 = (__int64)System_String__Split_64466952(v19, (System_Char_array *)v24, 1, 0);
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
      v26 = System_String__StartsWith((System_String_o *)v26, (System_String_o *)StringLiteral_1763/*"@"*/, 0);
      if ( (v26 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_78;
        v29 = *(System_String_o **)(v27 + 32);
        v26 = sub_1C94140(char___TypeInfo, 1);
        if ( v26 )
        {
          v6 = (const MethodInfo *)v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_78;
          *(_WORD *)(v26 + 32) = 44;
          if ( v29 )
          {
            v26 = (__int64)System_String__Split_64466836(v29, (System_Char_array *)v26, 0);
            if ( v26 )
            {
              v30 = v26;
              if ( !*(_DWORD *)(v26 + 24) )
                goto LABEL_78;
              v26 = *(_QWORD *)(v26 + 32);
              if ( v26 )
              {
                v31 = System_String__Substring((System_String_o *)v26, 1, 0);
                v32 = ManagerConfig_TypeInfo;
                v33 = v31;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v32 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v32->static_fields->MasterDataCacheVer, v33, 0) )
                {
                  if ( *(_DWORD *)(v30 + 24) != 3 )
                  {
                    v14 = &StringLiteral_5080/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v26 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0);
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
                    v76 = System_Int64__Parse(*(System_String_o **)(v30 + 48), 0);
                    v77 = DataManager_TypeInfo->static_fields;
                    v77->dateVersion = v76;
                    v77->readDateVersion = v76;
                    return 1;
                  }
LABEL_78:
                  sub_1C942F8(v26);
                }
                v26 = sub_1C94140(string___TypeInfo, 5);
                if ( v26 )
                {
                  v40 = v26;
                  if ( *(_DWORD *)(v26 + 24) )
                  {
                    v41 = StringLiteral_21647/*"master data versiton different ("*/;
                    *(_QWORD *)(v26 + 32) = StringLiteral_21647/*"master data versiton different ("*/;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 32), v41, v34, v35, v36, v37, v38, v39);
                    if ( *(_DWORD *)(v40 + 24) > 1u )
                    {
                      *(_QWORD *)(v40 + 40) = v33;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 40), (int32_t)v33, v42, v43, v44, v45, v46, v47);
                      if ( *(_DWORD *)(v40 + 24) > 2u )
                      {
                        v54 = StringLiteral_765/*") -> ("*/;
                        *(_QWORD *)(v40 + 48) = StringLiteral_765/*") -> ("*/;
                        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 48), v54, v48, v49, v50, v51, v52, v53);
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
                          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 56), v61, v55, v56, v57, v58, v59, v60);
                          if ( *(_DWORD *)(v40 + 24) > 4u )
                          {
                            v68 = StringLiteral_756/*")"*/;
                            *(_QWORD *)(v40 + 64) = StringLiteral_756/*")"*/;
                            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 64), v68, v62, v63, v64, v65, v66, v67);
                            v69 = System_String__Concat_64458276((System_String_array *)v40, 0);
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
        sub_1C942F0(v26, v6);
      }
    }
    v14 = &StringLiteral_5079/*"DataManager boot load error : list file break"*/;
    goto LABEL_57;
  }
  return 1;
}


void DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataManager_c *v11; // x0
  struct DataManager_StaticFields *static_fields; // x8
  GrandQuestFolderBoardItem_o *p_updateData; // x0
  int32_t v14; // w1
  struct DataManager_StaticFields *v15; // x0

  if ( (byte_4D2C2F5 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F5 = 1;
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
    static_fields->updateData = 0;
    p_updateData = (GrandQuestFolderBoardItem_o *)&static_fields->updateData;
    v14 = 0;
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
    v14 = (int)obj;
    v15->updateData = obj;
    p_updateData = (GrandQuestFolderBoardItem_o *)&v15->updateData;
    LODWORD(p_updateData[-1].fields._ListCreatedTime_k__BackingField) = dataVer;
    p_updateData[-1].fields._ClosedMessage_k__BackingField = (struct System_String_o *)dateVer;
  }
  sub_1C9403C(p_updateData, v14, dateVer, (int32_t)obj, (System_String_o *)method, v5, v6, v7);
}


void DataManager__setMasterDataVersion(DataManager_o *this, int32_t dataVer, int64_t dateVer, const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4D2C2F4 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F4 = 1;
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


void DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataManager_c *v9; // x0
  int32_t v10; // w1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x0
  DataManager_c *v23; // x8
  struct DataManager_StaticFields *v24; // x0
  DataManager_c *v25; // x0

  if ( (byte_4D2C2EE & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C2EE = 1;
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->serverHash, v10, (int32_t)method, v3, v4, v5, v6, v7);
  if ( obj )
  {
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                               obj,
                               obj->klass->vtable[3].method);
    v13 = System_String__op_Equality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v13 )
    {
      if ( !v12 )
        sub_1C942F0(v13, v14);
      v15 = System_String__Substring(v12, v12->fields._stringLength - 1, 0);
      if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
      {
        v22 = System_String__Substring_64463684(v12, 0, v12->fields._stringLength - 1, 0);
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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->serverHash, (int32_t)v12, v16, v17, v18, v19, v20, v21);
    }
  }
}


void DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4D2C2F0 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2C2F0 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->webViewData,
    (int32_t)obj,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4D2C309 & 1) == 0 )
  {
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_4D2C309 = 1;
  }
  if ( obj
    && ((naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
         obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C9468C(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_42371396(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void DataManager__updateJsonData_42371396(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  DataManager_o *v5; // x21
  __int64 naturalAligment; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v9; // w26
  unsigned int v10; // w9
  __int64 v11; // x27
  DataMasterBase_o *v12; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v14; // x8
  DataMasterBase_o *v15; // x23
  __int64 v16; // x9
  struct DataMasterBase_array *v17; // x8
  int v18; // w9
  int v19; // w26
  unsigned int v20; // w9
  __int64 v21; // x27
  DataMasterBase_o *v22; // x8
  Il2CppObject *v23; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct DataMasterBase_array *v27; // x8
  int v28; // w9
  int v29; // w25
  unsigned int v30; // w9
  __int64 v31; // x26
  DataMasterBase_o *v32; // x8
  Il2CppObject *v33; // x21
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x22
  DataManager_o *v36; // x0
  const MethodInfo *v37; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4D2C30A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&StringLiteral_24692/*"updated"*/);
    sub_1C94098(&StringLiteral_18674/*"deleted"*/);
    this = (DataManager_o *)sub_1C94098(&StringLiteral_23279/*"replaced"*/);
    byte_4D2C30A = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1C942F0(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18674/*"deleted"*/,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18674/*"deleted"*/,
                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
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
      while ( v10 < LODWORD(datalist->max_length) )
      {
        v11 = (int)v10;
        v12 = datalist->m_Items[v10];
        if ( !v12 || !v5 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v12->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v4->fields.datalist;
          if ( !v14 )
            goto LABEL_57;
          if ( (unsigned int)v11 >= LODWORD(v14->max_length) )
            break;
          v15 = v14->m_Items[v11];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v15 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v15->klass[1]._1.element_class)(
                                    v15,
                                    this,
                                    v15->klass[1]._1.castClass);
        }
        if ( v9 == (_DWORD)v11 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v10 = v11 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1C942F8(this);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24692/*"updated"*/,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24692/*"updated"*/,
                            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C9468C(v5);
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
    while ( v20 < LODWORD(v17->max_length) )
    {
      v21 = (int)v20;
      v22 = v17->m_Items[v20];
      if ( !v22 || !v5 )
        goto LABEL_57;
      v23 = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                v23,
                                (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.datalist;
        if ( !v24 )
          goto LABEL_57;
        if ( (unsigned int)v21 >= LODWORD(v24->max_length) )
          goto LABEL_59;
        v25 = v24->m_Items[v21];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v5,
                                  v23,
                                  (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD))v25->klass[1]._1.this_arg.data)(
                                  v25,
                                  this,
                                  *(_QWORD *)&v25->klass[1]._1.this_arg.bits);
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
          (Il2CppObject *)StringLiteral_23279/*"replaced"*/,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23279/*"replaced"*/,
                            (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C9468C(v3);
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
    while ( v30 < LODWORD(v27->max_length) )
    {
      v31 = (int)v30;
      v32 = v27->m_Items[v30];
      if ( !v32 || !v3 )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v33,
                                (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= LODWORD(v34->max_length) )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v33,
                                  (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, const char *))v35->klass[1]._1.name)(
                                  v35,
                                  this,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v35->klass[1]._1.namespaze);
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


System_Collections_IEnumerator_o *DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2C2FB & 1) == 0 )
  {
    sub_1C94098(&DataManager__updateMasterData_d__50_TypeInfo);
    byte_4D2C2FB = 1;
  }
  v5 = sub_1C942E4(DataManager__updateMasterData_d__50_TypeInfo);
  DataManager__updateMasterData_d__50___ctor((DataManager__updateMasterData_d__50_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *DataManager__updateWebViewData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2C2F1 & 1) == 0 )
  {
    sub_1C94098(&DataManager__updateWebViewData_d__39_TypeInfo);
    byte_4D2C2F1 = 1;
  }
  v3 = sub_1C942E4(DataManager__updateWebViewData_d__39_TypeInfo);
  DataManager__updateWebViewData_d__39___ctor((DataManager__updateWebViewData_d__39_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  uint32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C308 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&System_IO_StreamWriter_TypeInfo);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&uint_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_25516/*"~{0}\n{1}"*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D2C308 = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_64495056(v10, (size << 7) + 128, 0);
    if ( !v10 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)StringLiteral_1763/*"@"*/, 0);
    v11 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_64501704(v10, v11->static_fields->MasterDataCacheVer, 0);
    System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)StringLiteral_808/*","*/, 0);
    System_Text_StringBuilder__Append_64504200(v10, DataManager_TypeInfo->static_fields->dataVersion, 0);
    System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)StringLiteral_808/*","*/, 0);
    System_Text_StringBuilder__Append_64504288(v10, DataManager_TypeInfo->static_fields->dateVersion, 0);
    System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
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
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)Item, 0);
        System_Text_StringBuilder__Append_64501704(v10, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        if ( v13 == v14 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v14;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v10->klass->vtable._3_ToString.methodPtr)(
                            v10,
                            v10->klass->vtable._3_ToString.method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0);
    if ( !CacheListFileName )
LABEL_17:
      sub_1C942F0(CacheListFileName, v6);
    v17 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, const MethodInfo *))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.methodPtr)(
                                 CacheListFileName,
                                 v16,
                                 CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v29 = Crc32__Compute(v17, 0);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v29);
    v19 = System_String__Format_64459052((System_String_o *)StringLiteral_25516/*"~{0}\n{1}"*/, v18, v16, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v20 = CatAndMouseGame__CatGame3(v19, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    v22 = (System_IO_StreamWriter_o *)sub_1C942E4(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_65262212(v22, v9, 0, UTF8, 0);
    if ( !v22 )
      sub_1C942F0(v23, v24);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v22->klass->vtable._16_Write.methodPtr)(
      v22,
      v20,
      v22->klass->vtable._16_Write.method);
    klass = v22->klass;
    v26 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v28 = sub_1C6A420(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v28)(v22, *(_QWORD *)(v28 + 8));
  }
}


void DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  char *v13; // x20
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  System_String_o *v55; // x20
  System_Byte_array *v56; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x20
  System_String_o *v59; // x20
  System_Text_Encoding_o *v60; // x22
  System_IO_StreamWriter_o *v61; // x21
  uint32_t v62; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2C306 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&System_IO_StreamWriter_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_25513/*"~"*/);
    sub_1C94098(&StringLiteral_1763/*"@"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D2C306 = 1;
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
    UTF8 = (char *)sub_1C94140(string___TypeInfo, 7);
    if ( !UTF8 )
      goto LABEL_27;
    v13 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v14 = StringLiteral_1763/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1763/*"@"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(UTF8 + 32), v14, v7, v8, v9, v10, v11, v12);
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 40), v21, v15, v16, v17, v18, v19, v20);
    if ( *((_DWORD *)v13 + 6) <= 2u )
      goto LABEL_26;
    v28 = StringLiteral_808/*","*/;
    *((_QWORD *)v13 + 6) = StringLiteral_808/*","*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 48), v28, v22, v23, v24, v25, v26, v27);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0);
    if ( *((_DWORD *)v13 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v13 + 7) = UTF8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 56), (int32_t)UTF8, v29, v30, v31, v32, v33, v34);
    if ( *((_DWORD *)v13 + 6) <= 4u
      || (v41 = StringLiteral_808/*","*/,
          *((_QWORD *)v13 + 8) = StringLiteral_808/*","*/,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 64), v41, v35, v36, v37, v38, v39, v40),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0),
          *((_DWORD *)v13 + 6) <= 5u)
      || (*((_QWORD *)v13 + 9) = UTF8,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 72), (int32_t)UTF8, v42, v43, v44, v45, v46, v47),
          *((_DWORD *)v13 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C942F8(UTF8);
    }
    v54 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v13 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 80), v54, v48, v49, v50, v51, v52, v53);
    v55 = System_String__Concat_64458276((System_String_array *)v13, 0);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_27;
    v56 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v55,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v62 = Crc32__Compute(v56, 0);
    v57 = System_UInt32__ToString((uint32_t)&v62, 0);
    v58 = System_String__Concat_64458012(
            (System_String_o *)StringLiteral_25513/*"~"*/,
            v57,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v55,
            0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v59 = CatAndMouseGame__CatGame1(v58, 0, 0);
    v60 = System_Text_Encoding__get_UTF8(0);
    v61 = (System_IO_StreamWriter_o *)sub_1C942E4(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_65262212(v61, CacheVersionFileName, 0, v60, 0);
    if ( !v61 )
LABEL_27:
      sub_1C942F0(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v61->klass->vtable._16_Write.methodPtr)(
      v61,
      v59,
      v61->klass->vtable._16_Write.method);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v61->klass->vtable._8_Close.methodPtr)(
      v61,
      v61->klass->vtable._8_Close.method);
  }
}


void DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C311 & 1) == 0 )
  {
    sub_1C94098(&DataManager___c_TypeInfo);
    byte_4D2C311 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)DataManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataManager___c___LoadMasterDataThread_b__59_1(DataManager___c_o *this, Il2CppObject *_, const MethodInfo *method)
{
  ;
}


void DataManager___c__DisplayClass50_0___ctor(DataManager___c__DisplayClass50_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass50_0___updateMasterData_b__1(
        DataManager___c__DisplayClass50_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


bool DataManager___c__DisplayClass50_0___updateMasterData_b__2(
        DataManager___c__DisplayClass50_0_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass50_1___ctor(DataManager___c__DisplayClass50_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass50_1___updateMasterData_b__3(
        DataManager___c__DisplayClass50_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0);
}


void DataManager___c__DisplayClass57_0___ctor(DataManager___c__DisplayClass57_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t DataManager___c__DisplayClass57_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass57_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass57_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  struct DataManager_o *v8; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4D2C312 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_0_o *)sub_1C94098(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_4D2C312 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass57_0_o *)_4__this->fields.saveDataMapList;
  if ( !this )
    goto LABEL_12;
  this = (DataManager___c__DisplayClass57_0_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  b,
                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v8 = v6->fields.__4__this;
  if ( !v8
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v8->fields.saveDataMapList) == 0
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass57_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0) )
  {
LABEL_12:
    sub_1C942F0(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C942F8(this);
  return (_DWORD)monitor - LODWORD(this[1].monitor);
}


void DataManager___c__DisplayClass57_1___ctor(DataManager___c__DisplayClass57_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DataManager___c__DisplayClass57_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass57_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass57_1_o *v4; // x20
  struct DataManager___c__DisplayClass57_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_4D2C313 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_1_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2C313 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (this = (DataManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.loadedIndices) == 0 )
      sub_1C942F0(this, *(_QWORD *)&x);
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void DataManager___c__DisplayClass59_0___ctor(DataManager___c__DisplayClass59_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataManager___c__DisplayClass59_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass59_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0);
}


void DataManager__readMasterData_d__48___ctor(
        DataManager__readMasterData_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterData_d__48__MoveNext(DataManager__readMasterData_d__48_o *this, const MethodInfo *method)
{
  DataManager__readMasterData_d__48_o *v2; // x20
  struct DataManager_o *_4__this; // x19
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  char v12; // w8
  DataManager_c *v13; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v15; // w10
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v17; // x21
  System_IO_Stream_o *v18; // x24
  System_IO_Stream_o *v19; // x25
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_WaitForEndOfFrame_o *v25; // x19
  GrandQuestFolderBoardItem_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int v33; // w8
  DataManager_c *v34; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  System_IO_Stream_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_IO_MemoryStream_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v57; // x21
  System_IO_BinaryReader_o *v58; // x24
  __int64 v59; // x0
  __int64 v60; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v63; // x0
  __int64 v64; // x1
  int v65; // w22
  __int64 v66; // x23
  __int64 v67; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  __int64 v76; // x1
  int v77; // w8
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_IO_BinaryReader_c *v82; // x8
  __int64 v83; // x9
  int32_t *v84; // x10
  __int64 v85; // x0
  System_IO_MemoryStream_c *v86; // x8
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  UnityEngine_WaitForEndOfFrame_o *v90; // x19
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7

  v2 = this;
  if ( (byte_4D2C314 & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&byte___TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&System_GC_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__48_o *)sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2C314 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_96;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
        v2->fields.__2__current = (Il2CppObject *)v4;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)v4, v6, v7, v8, v9, v10, v11);
        v12 = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return v12 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName(0);
        if ( System_IO_File__Exists(CacheFileName, 0) )
        {
          v17 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v17, 0);
          v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v19 = CatAndMouseGame__MouseGameZ(v18, 0);
          v20 = sub_1C94140(byte___TypeInfo, 0x4000);
          v22 = v20;
          if ( !v20 )
            sub_1C942F0(0, v21);
          if ( !v19 )
            sub_1C942F0(v20, v21);
          while ( 1 )
          {
            v23 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v19->klass->vtable._31_unknown.methodPtr)(
                    v19,
                    v22,
                    0,
                    *(unsigned int *)(v22 + 24),
                    v19->klass->vtable._31_unknown.method);
            if ( (int)v23 <= 0 )
              break;
            if ( !v17 )
              sub_1C942F0(v23, v24);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v17->klass->vtable._34_Write.methodPtr)(
              v17,
              v22,
              0,
              (unsigned int)v23,
              v17->klass->vtable._34_Write.method);
          }
          klass = v19->klass;
          v36 = *(unsigned __int16 *)&v19->klass->_2.rank;
          if ( *(_WORD *)&v19->klass->_2.rank )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v36;
              p_offset += 4;
              if ( !v36 )
                goto LABEL_37;
            }
            v38 = (__int64)&klass->vtable + 16 * *p_offset;
          }
          else
          {
LABEL_37:
            v38 = sub_1C6A420(v19, System_IDisposable_TypeInfo, 0);
          }
          v39 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
          if ( v18 )
          {
            v41 = v18->klass;
            v42 = *(unsigned __int16 *)&v18->klass->_2.rank;
            if ( *(_WORD *)&v18->klass->_2.rank )
            {
              v43 = &v41->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
              {
                --v42;
                v43 += 4;
                if ( !v42 )
                  goto LABEL_44;
              }
              v44 = (__int64)&v41->vtable + 16 * *v43;
            }
            else
            {
LABEL_44:
              v44 = sub_1C6A420(v18, System_IDisposable_TypeInfo, 0);
            }
            v39 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v44)(v18, *(_QWORD *)(v44 + 8));
          }
          if ( !v17 )
            sub_1C942F0(v39, v40);
          v45 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v17->klass->vtable._40_ToArray.methodPtr)(
                  v17,
                  v17->klass->vtable._40_ToArray.method);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v45;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields.masterDataBytes,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
          v52 = v17->klass;
          v53 = *(unsigned __int16 *)&v17->klass->_2.rank;
          if ( *(_WORD *)&v17->klass->_2.rank )
          {
            v54 = &v52->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
            {
              --v53;
              v54 += 4;
              if ( !v53 )
                goto LABEL_52;
            }
            v55 = (__int64)&v52->vtable + 16 * *v54;
          }
          else
          {
LABEL_52:
            v55 = sub_1C6A420(v17, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v55)(v17, *(_QWORD *)(v55 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v57 = (System_IO_MemoryStream_o *)sub_1C942E4(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_65238668(v57, masterDataBytes, 0);
          v58 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v58, (System_IO_Stream_o *)v57, 0);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C942F0(v59, v60);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v58 )
            {
LABEL_76:
              if ( v57 )
              {
                v86 = v57->klass;
                v87 = *(unsigned __int16 *)&v57->klass->_2.rank;
                if ( *(_WORD *)&v57->klass->_2.rank )
                {
                  v88 = &v86->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v87;
                    v88 += 4;
                    if ( !v87 )
                      goto LABEL_81;
                  }
                  v89 = (__int64)&v86->vtable + 16 * *v88;
                }
                else
                {
LABEL_81:
                  v89 = sub_1C6A420(v57, System_IDisposable_TypeInfo, 0);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v89)(v57, *(_QWORD *)(v89 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v90 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v90, 0);
              v2->fields.__2__current = (Il2CppObject *)v90;
              v26 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C9403C(v26, (int32_t)v90, v91, v92, v93, v94, v95, v96);
              v33 = 2;
LABEL_87:
              LODWORD(v26[-1].fields._ClosedMessage_k__BackingField) = v33;
              v12 = 1;
              return v12 & 1;
            }
          }
          else
          {
            if ( !v58 )
              sub_1C942F0(v59, v60);
            do
            {
              v63 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v58->klass->vtable._15_ReadInt32.methodPtr)(
                      v58,
                      v58->klass->vtable._15_ReadInt32.method);
              if ( !v57 )
                sub_1C942F0(v63, v64);
              v65 = v63;
              v66 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v57->klass->vtable._12_get_Position.methodPtr)(
                      v57,
                      v57->klass->vtable._12_get_Position.method);
              v67 = v65;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, const MethodInfo *))v57->klass->vtable._29_Seek.methodPtr)(
                v57,
                v65,
                1,
                v57->klass->vtable._29_Seek.method);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v69 = sub_1C94140(long___TypeInfo, 2);
              v76 = v69;
              if ( !v69 )
                sub_1C942F0(0, 0);
              v77 = *(_DWORD *)(v69 + 24);
              if ( !v77 )
                sub_1C942F8(v69);
              *(_QWORD *)(v69 + 32) = v66;
              if ( v77 == 1 )
                sub_1C942F8(v69);
              *(_QWORD *)(v69 + 40) = v67;
              if ( !saveDataMapList )
                sub_1C942F0(v69, v69);
              items = saveDataMapList->fields._items;
              v79 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C942F0(v69, v69);
              v80 = saveDataMapList->fields._size;
              if ( (unsigned int)v80 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v69,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                v81 = &items->obj.klass + v80;
                saveDataMapList->fields._size = v80 + 1;
                v81[4] = (Il2CppClass *)v76;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v81 + 4), v76, v70, v71, v72, v73, v74, v75);
              }
              --size;
            }
            while ( size );
          }
          v82 = v58->klass;
          v83 = *(unsigned __int16 *)&v58->klass->_2.rank;
          if ( *(_WORD *)&v58->klass->_2.rank )
          {
            v84 = &v82->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
            {
              --v83;
              v84 += 4;
              if ( !v83 )
                goto LABEL_73;
            }
            v85 = (__int64)&v82->vtable + 16 * *v84;
          }
          else
          {
LABEL_73:
            v85 = sub_1C6A420(v58, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v85)(v58, *(_QWORD *)(v85 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v25, 0);
        v2->fields.__2__current = (Il2CppObject *)v25;
        v26 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C9403C(v26, (int32_t)v25, v27, v28, v29, v30, v31, v32);
        v33 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, 0);
      v34 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v34 = DataManager_TypeInfo;
      }
      static_fields = v34->static_fields;
      v12 = 0;
      v15 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v15;
      return v12 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v13 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v13 = DataManager_TypeInfo;
      }
      static_fields = v13->static_fields;
      v12 = 0;
      v15 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1C942F0(this, method);
      goto LABEL_28;
    default:
      v12 = 0;
      return v12 & 1;
  }
}


Il2CppObject *DataManager__readMasterData_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterData_d__48__System_Collections_IEnumerator_Reset(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DataManager__readMasterData_d__48_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *DataManager__readMasterData_d__48__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterData_d__48__System_IDisposable_Dispose(
        DataManager__readMasterData_d__48_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__readMasterVersion_d__47___ctor(
        DataManager__readMasterVersion_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__readMasterVersion_d__47__MoveNext(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  DataManager__readMasterVersion_d__47_o *v2; // x19
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v15; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v17; // w9

  v2 = this;
  if ( (byte_4D2C315 & 1) == 0 )
  {
    sub_1C94098(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__47_o *)sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D2C315 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)v5, v7, v8, v9, v10, v11, v12);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C942F0(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0);
  v15 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v17 = 1;
  else
    v17 = 5;
  static_fields->readMasterVersionResult = v17;
  return result;
}


Il2CppObject *DataManager__readMasterVersion_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__readMasterVersion_d__47__System_Collections_IEnumerator_Reset(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DataManager__readMasterVersion_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *DataManager__readMasterVersion_d__47__System_Collections_IEnumerator_get_Current(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__readMasterVersion_d__47__System_IDisposable_Dispose(
        DataManager__readMasterVersion_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateMasterData_d__50___ctor(
        DataManager__updateMasterData_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateMasterData_d__50__MoveNext(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataManager__updateMasterData_d__50_o *v8; // x19
  struct DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  int v11; // w8
  MasterDataUnpakcer_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  GrandQuestFolderBoardItem_o *v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int v30; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v32; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v34; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x1
  DataManager_c *v57; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v59; // x21
  System_Byte_array *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  DataManager_c *v73; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v75; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  System_Func_bool__o *v105; // x21
  UnityEngine_WaitUntil_o *v106; // x20
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  int32_t v113; // w1
  GrandQuestFolderBoardItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v115; // x20
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  UnityEngine_WaitForEndOfFrame_o *v122; // x20
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  int v129; // w8
  DataManager_c *v130; // x8
  struct DataManager_StaticFields *v131; // x8
  int v132; // w9
  Il2CppObject *v133; // x22
  DataManager__updateMasterData_d__50_o **p__8__1; // x21
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  struct DataMasterBase_array *v147; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v149; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass50_0_o *_8__1; // x8
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  __int64 v158; // x0
  __int64 v159; // x1
  struct DataManager___c__DisplayClass50_0_o *v160; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  struct DataManager___c__DisplayClass50_0_o *v169; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__50_o *v172; // x24
  System_Predicate_object__o *v173; // x23
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  System_Collections_Generic_List_object__o *v186; // x22
  DataManager__updateMasterData_d__50_o *v187; // x24
  System_Predicate_object__o *v188; // x23
  int32_t Index; // w0
  int32_t v190; // w22
  int32_t v191; // w2
  int32_t v192; // w3
  System_String_o *v193; // x4
  int32_t v194; // w5
  int64_t v195; // x6
  System_String_o *v196; // x7
  __int64 v197; // x8
  _QWORD *v198; // x9
  __int64 _2__current_low; // x10
  __int64 v200; // x8
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  __int64 v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  __int64 v210; // x8
  UnityEngine_WaitForEndOfFrame_o *v211; // x20
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x4
  int32_t v215; // w5
  int64_t v216; // x6
  System_String_o *v217; // x7
  ManagerConfig_c *v218; // x0
  int32_t v219; // w2
  int32_t v220; // w3
  System_String_o *v221; // x4
  int32_t v222; // w5
  int64_t v223; // x6
  System_String_o *v224; // x7
  int32_t v225; // w2
  int32_t v226; // w3
  System_String_o *v227; // x4
  int32_t v228; // w5
  int64_t v229; // x6
  System_String_o *v230; // x7
  struct System_Collections_Generic_List_string__o *v231; // x8
  System_Collections_Generic_List_int__o *v232; // x22
  int32_t v233; // w2
  int32_t v234; // w3
  System_String_o *v235; // x4
  int32_t v236; // w5
  int64_t v237; // x6
  System_String_o *v238; // x7
  ManagerConfig_c *v239; // x0
  __int64 v240; // x22
  int32_t v241; // w2
  int32_t v242; // w3
  System_String_o *v243; // x4
  int32_t v244; // w5
  int64_t v245; // x6
  System_String_o *v246; // x7
  DataManager__updateMasterData_d__50_o *v247; // x23
  int32_t v248; // w2
  int32_t v249; // w3
  System_String_o *v250; // x4
  int32_t v251; // w5
  int64_t v252; // x6
  System_String_o *v253; // x7
  DataManager__updateMasterData_d__50_o *v254; // x23
  int32_t v255; // w2
  int32_t v256; // w3
  System_String_o *v257; // x4
  int32_t v258; // w5
  int64_t v259; // x6
  System_String_o *v260; // x7
  DataManager__updateMasterData_d__50_o *v261; // x23
  int32_t v262; // w2
  int32_t v263; // w3
  System_String_o *v264; // x4
  int32_t v265; // w5
  int64_t v266; // x6
  System_String_o *v267; // x7
  DataManager__updateMasterData_d__50_o *v268; // x23
  int32_t v269; // w2
  int32_t v270; // w3
  System_String_o *v271; // x4
  int32_t v272; // w5
  int64_t v273; // x6
  System_String_o *v274; // x7
  DataManager__updateMasterData_d__50_o *v275; // x23
  int32_t v276; // w2
  int32_t v277; // w3
  System_String_o *v278; // x4
  int32_t v279; // w5
  int64_t v280; // x6
  System_String_o *v281; // x7
  DataManager__updateMasterData_d__50_o *v282; // x23
  int32_t v283; // w2
  int32_t v284; // w3
  System_String_o *v285; // x4
  int32_t v286; // w5
  int64_t v287; // x6
  System_String_o *v288; // x7
  DataManager__updateMasterData_d__50_o *v289; // x23
  int32_t v290; // w2
  int32_t v291; // w3
  System_String_o *v292; // x4
  int32_t v293; // w5
  int64_t v294; // x6
  System_String_o *v295; // x7
  DataManager__updateMasterData_d__50_o *v296; // x23
  int32_t v297; // w2
  int32_t v298; // w3
  System_String_o *v299; // x4
  int32_t v300; // w5
  int64_t v301; // x6
  System_String_o *v302; // x7
  DataManager__updateMasterData_d__50_o *v303; // x23
  __int64 v304; // x8
  __int64 v305; // x29
  _QWORD *v306; // x23
  __int64 v307; // x24
  int32_t v308; // w2
  int32_t v309; // w3
  System_String_o *v310; // x4
  int32_t v311; // w5
  int64_t v312; // x6
  System_String_o *v313; // x7
  __int64 v314; // x1
  System_Collections_Generic_List_object__o *v315; // x25
  System_Predicate_object__o *v316; // x26
  int32_t v317; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_3993B78 *v319; // x3
  const MethodInfo_3993B78 *v320; // x3
  __int64 v321; // x8
  _QWORD *v322; // x9
  __int64 v323; // x10
  UnityEngine_WaitForEndOfFrame_o *v324; // x20
  int32_t v325; // w2
  int32_t v326; // w3
  System_String_o *v327; // x4
  int32_t v328; // w5
  int64_t v329; // x6
  System_String_o *v330; // x7
  ManagerConfig_c *v331; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v333; // x0
  int v334; // w21
  DataManager_c *v335; // x8
  UnityEngine_WaitForEndOfFrame_o *v336; // x20
  int32_t v337; // w2
  int32_t v338; // w3
  System_String_o *v339; // x4
  int32_t v340; // w5
  int64_t v341; // x6
  System_String_o *v342; // x7
  int32_t v343; // w3
  System_String_o *v344; // x4
  int32_t v345; // w5
  int64_t v346; // x6
  System_String_o *v347; // x7
  struct System_Collections_Generic_List_string__o *v348; // x8
  int32_t size; // w2
  int v350; // w9
  struct System_Collections_Generic_List_long____o *v351; // x8
  int32_t v352; // w2
  int v353; // w9
  UnityEngine_WaitForEndOfFrame_o *v354; // x20
  int32_t v355; // w2
  int32_t v356; // w3
  System_String_o *v357; // x4
  int32_t v358; // w5
  int64_t v359; // x6
  System_String_o *v360; // x7
  UnityEngine_WaitForEndOfFrame_o *v361; // x20
  int32_t v362; // w2
  int32_t v363; // w3
  System_String_o *v364; // x4
  int32_t v365; // w5
  int64_t v366; // x6
  System_String_o *v367; // x7
  UnityEngine_WaitForEndOfFrame_o *v368; // x20
  int32_t v369; // w2
  int32_t v370; // w3
  System_String_o *v371; // x4
  int32_t v372; // w5
  int64_t v373; // x6
  System_String_o *v374; // x7
  __int64 v375; // x0
  struct DataMasterBase_array *v376; // x9
  EventRandomMissionClearManager_c *v377; // x0
  DataManager_c *v378; // x8
  UnityEngine_WaitForEndOfFrame_o *v379; // x20
  int32_t v380; // w2
  int32_t v381; // w3
  System_String_o *v382; // x4
  int32_t v383; // w5
  int64_t v384; // x6
  System_String_o *v385; // x7
  DataManager__updateMasterData_d__50_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  __int64 v387; // [xsp+8h] [xbp-98h] BYREF
  __int64 v388; // [xsp+10h] [xbp-90h]
  __int64 v389; // [xsp+18h] [xbp-88h] BYREF
  __int64 v390; // [xsp+20h] [xbp-80h]
  int v391; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v393; // 0:x0.16
  System_Nullable_long__o v394; // 0:x0.16

  v8 = this;
  if ( (byte_4D2C316 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_1C94098(&Method_DataManager__updateMasterData_b__50_0__);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&DataMasterBase___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_1C94098(&EventRandomMissionClearManager_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&System_GC_TypeInfo);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&LogoMain_TypeInfo);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&MasterDataUnpakcer_TypeInfo);
    sub_1C94098(&MaterialBranchRouteManager_TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C94098(&Method_System_Nullable_long___ctor__);
    sub_1C94098(&OtherUserNewManager_TypeInfo);
    sub_1C94098(&System_Predicate_string__TypeInfo);
    sub_1C94098(&ServantCommentManager_TypeInfo);
    sub_1C94098(&ServantProfileEventJoinManager_TypeInfo);
    sub_1C94098(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__);
    sub_1C94098(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__);
    sub_1C94098(&DataManager___c__DisplayClass50_0_TypeInfo);
    sub_1C94098(&Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__);
    sub_1C94098(&DataManager___c__DisplayClass50_1_TypeInfo);
    sub_1C94098(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C94098(&UserCommandCodeNewManager_TypeInfo);
    sub_1C94098(&UserEquipNewManager_TypeInfo);
    sub_1C94098(&UserMissionProgressManager_TypeInfo);
    sub_1C94098(&UserServantCollectionManager_TypeInfo);
    sub_1C94098(&UserServantLockManager_TypeInfo);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C94098(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C94098(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__50_o *)sub_1C94098(&StringLiteral_11528/*"SCRIPT"*/);
    byte_4D2C316 = 1;
  }
  lockTaken = 0;
  v391 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields._values) = 0;
      if ( !_4__this )
        goto LABEL_291;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_291;
      v8->fields._dataListCount_5__2 = datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_291;
      v8->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath(0);
      if ( !System_IO_Directory__Exists(CachePath, 0) )
        System_IO_Directory__CreateDirectory(CachePath, 0);
      v8->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_134;
      v8->fields._dataMapDict_5__6 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._dataMapDict_5__6, 0, v38, v39, v40, v41, v42, v43);
      v8->fields._dataMapObject_5__7 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._dataMapObject_5__7, 0, v44, v45, v46, v47, v48, v49);
      v8->fields._cryptBytes_5__8 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._cryptBytes_5__8, 0, v50, v51, v52, v53, v54, v55);
      v57 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v57 = DataManager_TypeInfo;
      }
      updateData = v57->static_fields->updateData;
      if ( !updateData )
        sub_1C942F0(0, v56);
      v59 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))updateData->klass->vtable[3].methodPtr)(
                                 updateData,
                                 updateData->klass->vtable[3].method);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v60 = System_Convert__FromBase64String(v59, 0);
      v8->fields._cryptBytes_5__8 = v60;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._cryptBytes_5__8,
        (int32_t)v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      v73 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v73 = DataManager_TypeInfo;
      }
      static_fields = v73->static_fields;
      static_fields->updateData = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->updateData, 0, v67, v68, v69, v70, v71, v72);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v75, 0);
      v8->fields.__2__current = (Il2CppObject *)v75;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(p__2__current, (int32_t)v75, v77, v78, v79, v80, v81, v82);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v85 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0);
      if ( !_4__this )
        sub_1C942F0(v85, v85);
      _4__this->fields.masterDataBytes = v85;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.masterDataBytes,
        (int32_t)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      v8->fields._cryptBytes_5__8 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._cryptBytes_5__8, 0, v92, v93, v94, v95, v96, v97);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v98, 0);
      v8->fields.__2__current = (Il2CppObject *)v98;
      v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(v23, (int32_t)v98, v99, v100, v101, v102, v103, v104);
      v30 = 2;
      goto LABEL_82;
    case 2:
      v8->fields.__1__state = -1;
      v12 = (MasterDataUnpakcer_o *)sub_1C942E4(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v12, 0);
      if ( !_4__this )
        sub_1C942F0(v13, v14);
      if ( !v12 )
        sub_1C942F0(v13, v14);
      v15 = MasterDataUnpakcer__Unpack_41801184(v12, _4__this->fields.masterDataBytes, 0);
      v8->fields._dataMapObject_5__7 = v15;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._dataMapObject_5__7,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v22, 0);
      v8->fields.__2__current = (Il2CppObject *)v22;
      v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(v23, (int32_t)v22, v24, v25, v26, v27, v28, v29);
      v30 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v32 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        naturalAligment = System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.naturalAligment;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v34 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v34 = 0;
        }
        else
        {
          v34 = 0;
        }
        v8->fields._dataMapDict_5__6 = v34;
        p_dataMapDict_5__6 = (GrandQuestFolderBoardItem_o *)&v8->fields._dataMapDict_5__6;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == v32 )
            v113 = (int)dataMapObject_5__7;
          else
            v113 = 0;
        }
        else
        {
          v113 = 0;
        }
      }
      else
      {
        v113 = 0;
        v8->fields._dataMapDict_5__6 = 0;
        p_dataMapDict_5__6 = (GrandQuestFolderBoardItem_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_1C9403C(p_dataMapDict_5__6, v113, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v122 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v122, 0);
        v8->fields.__2__current = (Il2CppObject *)v122;
        v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C9403C(v23, (int32_t)v122, v123, v124, v125, v126, v127, v128);
        v30 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v129 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v129 < v8->fields._dataListCount_5__2 )
        {
          v133 = (Il2CppObject *)sub_1C942E4(DataManager___c__DisplayClass50_0_TypeInfo);
          System_Object___ctor(v133, 0);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass50_0_o *)v133;
          p__8__1 = (DataManager__updateMasterData_d__50_o **)&v8->fields.__8__1;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v8->fields.__8__1,
            (int32_t)v133,
            v135,
            v136,
            v137,
            v138,
            v139,
            v140);
          v147 = _4__this->fields.datalist;
          if ( !v147 )
            goto LABEL_291;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v147->max_length) )
            goto LABEL_292;
          v149 = v147->m_Items[i_5__9];
          if ( !v149 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v149->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields,
            (int32_t)MasterName_k__BackingField,
            v141,
            v142,
            v143,
            v144,
            v145,
            v146);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__50_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v8->fields._dataMap_5__10,
              0,
              v152,
              v153,
              v154,
              v155,
              v156,
              v157);
            v160 = v8->fields.__8__1;
            if ( !v160 )
              sub_1C942F0(v158, v159);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C942F0(0, v159);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v160->fields.masterName,
                     (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v8->fields._dataMap_5__10,
              (int32_t)Item,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v368 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v368, 0);
              v8->fields.__2__current = (Il2CppObject *)v368;
              v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v23, (int32_t)v368, v369, v370, v371, v372, v373, v374);
              v30 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__50_o **)&v8->fields.__8__1;
            v169 = v8->fields.__8__1;
            if ( !v169 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v169->fields.masterName,
                                                              (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( SLODWORD(dataMap_5__10->max_length) < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v335 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v335 = DataManager_TypeInfo;
                }
                v131 = v335->static_fields;
                result = 0;
                v132 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v172 = *p__8__1;
            v173 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v173,
              (Il2CppObject *)v172,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__,
              0);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v173,
                                                              (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v197 = *(_QWORD *)&this->fields.__1__state;
              v198 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v197 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v197 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
              }
              else
              {
                v200 = v197 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v200 + 32) = method;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)(v200 + 32),
                  (int32_t)method,
                  v174,
                  v175,
                  v176,
                  v177,
                  v178,
                  v179);
              }
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v207 = *(_QWORD *)&this->fields.__1__state;
              v208 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v207 )
                goto LABEL_291;
              v209 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v209 >= *(_DWORD *)(v207 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
              }
              else
              {
                v210 = v207 + 8 * v209;
                LODWORD(this->fields.__2__current) = v209 + 1;
                *(_QWORD *)(v210 + 32) = method;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)(v210 + 32),
                  (int32_t)method,
                  v201,
                  v202,
                  v203,
                  v204,
                  v205,
                  v206);
              }
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v8->fields._dataMap_5__10->obj,
                (const MethodInfo_386ABB8 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0;
            v8->fields._isAdd_5__4 = 1;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v8->fields._dataMap_5__10,
              0,
              v180,
              v181,
              v182,
              v183,
              v184,
              v185);
          }
          else
          {
            v186 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v187 = *p__8__1;
            v188 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v188,
              (Il2CppObject *)v187,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__,
              0);
            if ( !v186 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v186,
                      (System_Predicate_T__o *)v188,
                      (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( Index < 0 )
              goto LABEL_125;
            v190 = Index;
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v190,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v190,
              (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)p__8__1, 0, v191, v192, v193, v194, v195, v196);
LABEL_125:
          v129 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v129;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0) )
      {
LABEL_129:
        if ( !v8->fields._isAdd_5__4 )
        {
          v218 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v218 = ManagerConfig_TypeInfo;
          }
          if ( !v218->static_fields->UseMock )
            goto LABEL_83;
        }
        v8->fields._dataMapDict_5__6 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._dataMapDict_5__6, 0, v2, v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._dataMapObject_5__7,
          0,
          v219,
          v220,
          v221,
          v222,
          v223,
          v224);
        v8->fields._cryptBytes_5__8 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._cryptBytes_5__8, 0, v225, v226, v227, v228, v229, v230);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v231 = _4__this->fields.saveNameList;
        if ( !v231 )
LABEL_291:
          sub_1C942F0(this, method);
        if ( v231->fields._size <= 0 )
        {
LABEL_83:
          v130 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v130 = DataManager_TypeInfo;
          }
          v131 = v130->static_fields;
          result = 0;
          v132 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v232 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v232,
          (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v232;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v8->fields._loadedIndices_5__5,
          (int32_t)v232,
          v233,
          v234,
          v235,
          v236,
          v237,
          v238);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__50_o **)&v8->fields._loadedIndices_5__5;
        if ( v8->fields.isUseTips )
        {
          v239 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v239 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v239->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11528/*"SCRIPT"*/,
                 0) )
          {
            this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0) )
            {
              v240 = sub_1C94140(DataMasterBase___TypeInfo, 9);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v240 )
                goto LABEL_291;
              v247 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v240 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v240 + 32) = v247;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 32), (int32_t)v247, v241, v242, v243, v244, v245, v246);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v254 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 40) = v254;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 40), (int32_t)v254, v248, v249, v250, v251, v252, v253);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v261 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 48) = v261;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 48), (int32_t)v261, v255, v256, v257, v258, v259, v260);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v268 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 56) = v268;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 56), (int32_t)v268, v262, v263, v264, v265, v266, v267);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v275 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 64) = v275;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 64), (int32_t)v275, v269, v270, v271, v272, v273, v274);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventServantMaster___);
              v282 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 72) = v282;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 72), (int32_t)v282, v276, v277, v278, v279, v280, v281);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v289 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 80) = v289;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 80), (int32_t)v289, v283, v284, v285, v286, v287, v288);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v296 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v240 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v240 + 88) = v296;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 88), (int32_t)v296, v290, v291, v292, v293, v294, v295);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantAddMaster___);
              v303 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__50_o *)sub_1C941D4(this, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v375 = sub_1C94314(this);
                  sub_1C941C0(v375, 0);
                }
              }
              if ( *(_DWORD *)(v240 + 24) <= 8u )
LABEL_292:
                sub_1C942F8(this);
              *(_QWORD *)(v240 + 96) = v303;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v240 + 96), (int32_t)v303, v297, v298, v299, v300, v301, v302);
              v304 = *(_QWORD *)(v240 + 24);
              if ( (int)v304 >= 1 )
              {
                v305 = 0;
                while ( (unsigned int)v305 < (unsigned int)v304 )
                {
                  v306 = *(_QWORD **)(v240 + 32 + 8 * v305);
                  v307 = sub_1C942E4(DataManager___c__DisplayClass50_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v307, 0);
                  if ( !v306 )
                    goto LABEL_291;
                  if ( !v307 )
                    goto LABEL_291;
                  v314 = v306[3];
                  *(_QWORD *)(v307 + 16) = v314;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v307 + 16), v314, v308, v309, v310, v311, v312, v313);
                  v315 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v316 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v316,
                    (Il2CppObject *)v307,
                    Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__,
                    0);
                  if ( !v315 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v315,
                                                                    (System_Predicate_T__o *)v316,
                                                                    (const MethodInfo_386B68C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v317 = (int)this;
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v317,
                                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v393.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v393.fields.hasValue = &v389;
                    v389 = 0;
                    v390 = 0;
                    System_Nullable_long____ctor(v393, Method_System_Nullable_long___ctor__, v319);
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v317,
                                                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v394.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v394.fields.hasValue = &v387;
                    v387 = 0;
                    v388 = 0;
                    System_Nullable_long____ctor(v394, Method_System_Nullable_long___ctor__, v320);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v306 + 424LL))(
                      v306,
                      masterDataBytes,
                      v389,
                      v390,
                      v387,
                      v388,
                      *(_QWORD *)(*v306 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v321 = *(_QWORD *)&this->fields.__1__state;
                    v322 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v321 )
                      goto LABEL_291;
                    v323 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v323 >= *(_DWORD *)(v321 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v317,
                        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v323 + 1;
                      *(_DWORD *)(v321 + 4 * v323 + 32) = v317;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v304 = *(_QWORD *)(v240 + 24);
                  if ( (int)++v305 >= (int)v304 )
                    goto LABEL_192;
                }
                goto LABEL_292;
              }
LABEL_192:
              this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_291;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0) >= 1 )
              {
                if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
                ServantProfileLimitCountManager__Initialize(0);
                if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
                ServantProfileEventJoinManager__Initialize(0);
                if ( !LogoMain_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
                if ( LogoMain__IsPLayLogo(0) )
                  goto LABEL_204;
                this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0);
                  v324 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v324, 0);
                  v8->fields.__2__current = (Il2CppObject *)v324;
                  v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                  sub_1C9403C(v23, (int32_t)v324, v325, v326, v327, v328, v329, v330);
                  v30 = 7;
                  goto LABEL_82;
                }
                goto LABEL_291;
              }
            }
          }
        }
LABEL_205:
        DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0);
        if ( v8->fields._isAdd_5__4 )
        {
          v331 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v331 = ManagerConfig_TypeInfo;
          }
          if ( !v331->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v361 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v361, 0);
              v8->fields.__2__current = (Il2CppObject *)v361;
              v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v23, (int32_t)v361, v362, v363, v364, v365, v366, v367);
              v30 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__50_o *)DataManager__getCacheFileName(0);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0);
              v105 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v105,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__50_0__,
                0);
              v106 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v106, v105, 0);
              v8->fields.__2__current = (Il2CppObject *)v106;
              v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v23, (int32_t)v106, v107, v108, v109, v110, v111, v112);
              v30 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_66345384(lockCountObj, &lockTaken, 0);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v334 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v333 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v333 = DataManager_TypeInfo;
          }
          v333->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0);
          v334 = 20;
        }
        else
        {
          v334 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0);
        if ( v334 == 62 )
        {
          v336 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v336, 0);
          v8->fields.__2__current = (Il2CppObject *)v336;
          v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C9403C(v23, (int32_t)v336, v337, v338, v339, v340, v341, v342);
          v30 = 11;
          goto LABEL_82;
        }
        if ( v334 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0);
          v348 = _4__this->fields.saveNameList;
          if ( v348 )
          {
            size = v348->fields._size;
            v350 = v348->fields._version + 1;
            v348->fields._size = 0;
            v348->fields._version = v350;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v348->fields._items, 0, size, 0);
            v351 = _4__this->fields.saveDataMapList;
            if ( v351 )
            {
              v352 = v351->fields._size;
              v353 = v351->fields._version + 1;
              v351->fields._size = 0;
              v351->fields._version = v353;
              if ( v352 >= 1 )
                System_Array__Clear((System_Array_o *)v351->fields._items, 0, v352, 0);
              _4__this->fields.masterDataBytes = 0;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&_4__this->fields.masterDataBytes,
                0,
                v352,
                v343,
                v344,
                v345,
                v346,
                v347);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v354 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v354, 0);
              v8->fields.__2__current = (Il2CppObject *)v354;
              v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C9403C(v23, (int32_t)v354, v355, v356, v357, v358, v359, v360);
              v30 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v211 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v211, 0);
      v8->fields.__2__current = (Il2CppObject *)v211;
      v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(v23, (int32_t)v211, v212, v213, v214, v215, v216, v217);
      v30 = 6;
LABEL_82:
      LODWORD(v23[-1].fields._ClosedMessage_k__BackingField) = v30;
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
      goto LABEL_96;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_129;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_205;
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
        DataManager__StopMasterLoadThread(_4__this, 0);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, 0);
      DataManager__writeMasterVersionFile(_4__this, 0);
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v115 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v115, 0);
        v8->fields.__2__current = (Il2CppObject *)v115;
        v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C9403C(v23, (int32_t)v115, v116, v117, v118, v119, v120, v121);
        v30 = 10;
        goto LABEL_82;
      }
      goto LABEL_209;
    case 0xA:
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_209;
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
        v376 = _4__this->fields.datalist;
        if ( !v376 )
          goto LABEL_291;
        if ( (unsigned int)v11 >= LODWORD(v376->max_length) )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__50_o *)v376->m_Items[v11];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__50_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__50_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__50_o *)DataManager__CheckWaitforFrame(_4__this, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v379 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v379, 0);
            v8->fields.__2__current = (Il2CppObject *)v379;
            v23 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
            sub_1C9403C(v23, (int32_t)v379, v380, v381, v382, v383, v384, v385);
            v30 = 13;
            goto LABEL_82;
          }
        }
      }
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      BalanceConfig__Initialize(0);
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__Initialize(0);
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__Initialize(0);
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__Initialize(0);
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      ServantCommentManager__Initialize(0);
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      OtherUserNewManager__Initialize(0);
      if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      UserCommandCodeNewManager__Initialize(0);
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      UserCommandCodeCollectionManager__Initialize(0);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      ImageLimitCount__Initialize(0);
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__Initialize(0);
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      UserMissionProgressManager__Initialize(0);
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__Initialize(0);
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize(0);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0);
      v377 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v377);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0);
      v378 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v378 = DataManager_TypeInfo;
      }
      v131 = v378->static_fields;
      result = 0;
      v132 = 1;
LABEL_289:
      v131->updateMasterDataResult = v132;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *DataManager__updateMasterData_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateMasterData_d__50__System_Collections_IEnumerator_Reset(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DataManager__updateMasterData_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *DataManager__updateMasterData_d__50__System_Collections_IEnumerator_get_Current(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateMasterData_d__50__System_IDisposable_Dispose(
        DataManager__updateMasterData_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void DataManager__updateWebViewData_d__39___ctor(
        DataManager__updateWebViewData_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DataManager__updateWebViewData_d__39__MoveNext(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  DataManager_c *v24; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  DataManager_c *v39; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v42; // x1
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v53; // x21
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  UnityEngine_WaitForEndOfFrame_o *v61; // x20
  Il2CppObject **v62; // x19
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int v69; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_41773744; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  UnityEngine_WaitForEndOfFrame_o *v78; // x20
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v87; // x21
  System_String_o *v88; // x22
  Il2CppObject *v89; // x0
  System_Collections_Generic_Dictionary_string__object__o *v90; // x23
  __int64 naturalAligment; // x9
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7

  if ( (byte_4D2C317 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C94098(&StringLiteral_18328/*"contactURL"*/);
    sub_1C94098(&StringLiteral_19602/*"filePass"*/);
    sub_1C94098(&StringLiteral_17125/*"baseURL"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2C317 = 1;
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
      this->fields._data_5__2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._data_5__2, 0, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._cryptString_5__3, 0, v11, v12, v13, v14, v15, v16);
      this->fields._dataObject_5__4 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._dataObject_5__4, 0, v17, v18, v19, v20, v21, v22);
      v24 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v24 = DataManager_TypeInfo;
      }
      webViewData = v24->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v26 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))webViewData->klass->vtable[3].methodPtr)(
                                        webViewData,
                                        webViewData->klass->vtable[3].method);
      this->fields._cryptString_5__3 = v26;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields._cryptString_5__3,
        (int32_t)v26,
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
      static_fields->webViewData = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->webViewData, 0, v33, v34, v35, v36, v37, v38);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
        this->fields.__2__current = (Il2CppObject *)v43;
        p__2__current = &this->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v43, v45, v46, v47, v48, v49, v50);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v53 = System_Convert__FromBase64String(cryptString_5__3, 0);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v54 = CatAndMouseGame__MouseGame2MsgPack(v53, 0, 0);
      this->fields._dataObject_5__4 = v54;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields._dataObject_5__4,
        (int32_t)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v61 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v61, 0);
        this->fields.__2__current = (Il2CppObject *)v61;
        v62 = &this->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v62, (int32_t)v61, v63, v64, v65, v66, v67, v68);
        v69 = 2;
LABEL_30:
        *((_DWORD *)v62 - 2) = v69;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_41773744 = JsonManager__getDictionary_41773744(dataObject_5__4, 0);
      this->fields._data_5__2 = Dictionary_41773744;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields._data_5__2,
        (int32_t)Dictionary_41773744,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v78 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C942E4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v78, 0);
        this->fields.__2__current = (Il2CppObject *)v78;
        v62 = &this->fields.__2__current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v62, (int32_t)v78, v79, v80, v81, v82, v83, v84);
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
              (Il2CppObject *)StringLiteral_17125/*"baseURL"*/,
              (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17125/*"baseURL"*/,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v88 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18328/*"contactURL"*/,
              (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18328/*"contactURL"*/,
               (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v87 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19602/*"filePass"*/,
             (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C942F0(Item, v42);
        v89 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19602/*"filePass"*/,
                (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v90 = (System_Collections_Generic_Dictionary_string__object__o *)v89;
        if ( v89 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v89->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (System_Collections_Generic_Dictionary_string__object__c *)v89->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C9468C(v89);
LABEL_54:
            sub_1C942F0(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v88, v87, v90, 0);
      }
LABEL_50:
      this->fields._data_5__2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._data_5__2, 0, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._cryptString_5__3, 0, v92, v93, v94, v95, v96, v97);
      this->fields._dataObject_5__4 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._dataObject_5__4, 0, v98, v99, v100, v101, v102, v103);
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


Il2CppObject *DataManager__updateWebViewData_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DataManager__updateWebViewData_d__39__System_Collections_IEnumerator_Reset(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_DataManager__updateWebViewData_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *DataManager__updateWebViewData_d__39__System_Collections_IEnumerator_get_Current(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DataManager__updateWebViewData_d__39__System_IDisposable_Dispose(
        DataManager__updateWebViewData_d__39_o *this,
        const MethodInfo *method)
{
  ;
}