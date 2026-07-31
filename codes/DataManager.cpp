void DataManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  struct DataManager_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_5938138 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938138 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0;
  static_fields->updateData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->updateData, 0, v1, v2, v3, v4, v5, v6);
  v8 = DataManager_TypeInfo->static_fields;
  v8->webViewData = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->webViewData, 0, v9, v10, v11, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  v16 = DataManager_TypeInfo->static_fields;
  v16->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->serverHash, v15, v17, v18, v19, v20, v21, v22);
}


void DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5938137 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long____TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_5938137 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  this->fields._DispLog = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.saveNameList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.saveDataMapList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (Il2CppObject *)sub_21FFEBC(object_TypeInfo);
  System_Object___ctor(v18, 0);
  this->fields.lockCountObj = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lockCountObj,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  float v4; // s1

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  v4 = realtimeSinceStartup - this->fields.lastFrameTime;
  if ( v4 > 0.1 )
    this->fields.lastFrameTime = realtimeSinceStartup;
  return v4 > 0.1;
}


void DataManager__ClearCacheAll(const MethodInfo *method)
{
  __int64 v1; // x1
  DataManager_c *v2; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5938115 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938115 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(CachePath, v4);
}


// positive sp value has been detected, the output may be wrong!
void DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_c *v4; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_5938116 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938116 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0) )
    System_IO_Directory__Delete(cachePath, 1, 0);
  v4 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
    v4 = DataManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
}


void DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  __int64 v1; // x1
  DataManager_c *v2; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5938114 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938114 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v4);
}


void DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v7; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v9; // w2
  int v10; // w9

  if ( (byte_593812E & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____Clear__);
    byte_593812E = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  saveNameList = this->fields.saveNameList;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0;
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
    sub_21FFECC(v3, method);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  ServantCommentMaster_o *v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  ServantProfileMaster_o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  WarMaster_o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UserMaster_o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UserGameMaster_o *v48; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  TblUserMaster_o *v55; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  UserItemMaster_o *v62; // x20
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  UserServantMaster_o *v69; // x20
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  UserServantStorageMaster_o *v76; // x20
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  UserAccessaryMaster_o *v83; // x20
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  UserQuestMaster_o *v90; // x20
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  BattleMaster_o *v97; // x20
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  OtherUserGameMaster_o *v104; // x20
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  TblFriendMaster_o *v111; // x20
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  AreaMaster_o *v118; // x20
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  ServantCardMaster_o *v125; // x20
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  EventMaster_o *v132; // x20
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  ItemMaster_o *v139; // x20
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  QuestMaster_o *v146; // x20
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  QuestAddMaster_o *v153; // x20
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  QuestReleaseMaster_o *v160; // x20
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  QuestDateRangeMaster_o *v167; // x20
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  QuestPhaseMaster_o *v174; // x20
  System_String_o *v175; // x2
  System_String_o *v176; // x3
  int32_t v177; // w4
  int32_t v178; // w5
  bool v179; // w6
  bool v180; // w7
  QuestPhaseDetailMaster_o *v181; // x20
  System_String_o *v182; // x2
  System_String_o *v183; // x3
  int32_t v184; // w4
  int32_t v185; // w5
  bool v186; // w6
  bool v187; // w7
  QuestGroupMaster_o *v188; // x20
  System_String_o *v189; // x2
  System_String_o *v190; // x3
  int32_t v191; // w4
  int32_t v192; // w5
  bool v193; // w6
  bool v194; // w7
  QuestRandomGroupMaster_o *v195; // x20
  System_String_o *v196; // x2
  System_String_o *v197; // x3
  int32_t v198; // w4
  int32_t v199; // w5
  bool v200; // w6
  bool v201; // w7
  QuestConsumeItemMaster_o *v202; // x20
  System_String_o *v203; // x2
  System_String_o *v204; // x3
  int32_t v205; // w4
  int32_t v206; // w5
  bool v207; // w6
  bool v208; // w7
  QuestMessageMaster_o *v209; // x20
  System_String_o *v210; // x2
  System_String_o *v211; // x3
  int32_t v212; // w4
  int32_t v213; // w5
  bool v214; // w6
  bool v215; // w7
  UserQuestInfoMaster_o *v216; // x20
  System_String_o *v217; // x2
  System_String_o *v218; // x3
  int32_t v219; // w4
  int32_t v220; // w5
  bool v221; // w6
  bool v222; // w7
  UserQuestRecordMaster_o *v223; // x20
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  ViewQuestInfoMaster_o *v230; // x20
  System_String_o *v231; // x2
  System_String_o *v232; // x3
  int32_t v233; // w4
  int32_t v234; // w5
  bool v235; // w6
  bool v236; // w7
  ViewEnemyMaster_o *v237; // x20
  System_String_o *v238; // x2
  System_String_o *v239; // x3
  int32_t v240; // w4
  int32_t v241; // w5
  bool v242; // w6
  bool v243; // w7
  ViewQuestEnemyInfoMaster_o *v244; // x20
  System_String_o *v245; // x2
  System_String_o *v246; // x3
  int32_t v247; // w4
  int32_t v248; // w5
  bool v249; // w6
  bool v250; // w7
  BlankEarthSpotMaster_o *v251; // x20
  System_String_o *v252; // x2
  System_String_o *v253; // x3
  int32_t v254; // w4
  int32_t v255; // w5
  bool v256; // w6
  bool v257; // w7
  BlankEarthSpotAddMaster_o *v258; // x20
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  SpotMaster_o *v265; // x20
  System_String_o *v266; // x2
  System_String_o *v267; // x3
  int32_t v268; // w4
  int32_t v269; // w5
  bool v270; // w6
  bool v271; // w7
  SpotImageMaster_o *v272; // x20
  System_String_o *v273; // x2
  System_String_o *v274; // x3
  int32_t v275; // w4
  int32_t v276; // w5
  bool v277; // w6
  bool v278; // w7
  SpotRoadMaster_o *v279; // x20
  System_String_o *v280; // x2
  System_String_o *v281; // x3
  int32_t v282; // w4
  int32_t v283; // w5
  bool v284; // w6
  bool v285; // w7
  SpotPathMaster_o *v286; // x20
  System_String_o *v287; // x2
  System_String_o *v288; // x3
  int32_t v289; // w4
  int32_t v290; // w5
  bool v291; // w6
  bool v292; // w7
  SpotAddMaster_o *v293; // x20
  System_String_o *v294; // x2
  System_String_o *v295; // x3
  int32_t v296; // w4
  int32_t v297; // w5
  bool v298; // w6
  bool v299; // w7
  MapGimmickMaster_o *v300; // x20
  System_String_o *v301; // x2
  System_String_o *v302; // x3
  int32_t v303; // w4
  int32_t v304; // w5
  bool v305; // w6
  bool v306; // w7
  GiftMaster_o *v307; // x20
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  GiftAddMaster_o *v314; // x20
  System_String_o *v315; // x2
  System_String_o *v316; // x3
  int32_t v317; // w4
  int32_t v318; // w5
  bool v319; // w6
  bool v320; // w7
  ShopMaster_o *v321; // x20
  System_String_o *v322; // x2
  System_String_o *v323; // x3
  int32_t v324; // w4
  int32_t v325; // w5
  bool v326; // w6
  bool v327; // w7
  ShopDailyMaster_o *v328; // x20
  System_String_o *v329; // x2
  System_String_o *v330; // x3
  int32_t v331; // w4
  int32_t v332; // w5
  bool v333; // w6
  bool v334; // w7
  StoneShopMaster_o *v335; // x20
  System_String_o *v336; // x2
  System_String_o *v337; // x3
  int32_t v338; // w4
  int32_t v339; // w5
  bool v340; // w6
  bool v341; // w7
  BankShopMaster_o *v342; // x20
  System_String_o *v343; // x2
  System_String_o *v344; // x3
  int32_t v345; // w4
  int32_t v346; // w5
  bool v347; // w6
  bool v348; // w7
  ShopScriptMaster_o *v349; // x20
  System_String_o *v350; // x2
  System_String_o *v351; // x3
  int32_t v352; // w4
  int32_t v353; // w5
  bool v354; // w6
  bool v355; // w7
  ShopAddMaster_o *v356; // x20
  System_String_o *v357; // x2
  System_String_o *v358; // x3
  int32_t v359; // w4
  int32_t v360; // w5
  bool v361; // w6
  bool v362; // w7
  StageMaster_o *v363; // x20
  System_String_o *v364; // x2
  System_String_o *v365; // x3
  int32_t v366; // w4
  int32_t v367; // w5
  bool v368; // w6
  bool v369; // w7
  ServantGroupMaster_o *v370; // x20
  System_String_o *v371; // x2
  System_String_o *v372; // x3
  int32_t v373; // w4
  int32_t v374; // w5
  bool v375; // w6
  bool v376; // w7
  ServantLimitMaster_o *v377; // x20
  System_String_o *v378; // x2
  System_String_o *v379; // x3
  int32_t v380; // w4
  int32_t v381; // w5
  bool v382; // w6
  bool v383; // w7
  ServantLimitAddMaster_o *v384; // x20
  System_String_o *v385; // x2
  System_String_o *v386; // x3
  int32_t v387; // w4
  int32_t v388; // w5
  bool v389; // w6
  bool v390; // w7
  ServantSkillMaster_o *v391; // x20
  System_String_o *v392; // x2
  System_String_o *v393; // x3
  int32_t v394; // w4
  int32_t v395; // w5
  bool v396; // w6
  bool v397; // w7
  ServantPassiveSkillMaster_o *v398; // x20
  System_String_o *v399; // x2
  System_String_o *v400; // x3
  int32_t v401; // w4
  int32_t v402; // w5
  bool v403; // w6
  bool v404; // w7
  BgmMaster_o *v405; // x20
  System_String_o *v406; // x2
  System_String_o *v407; // x3
  int32_t v408; // w4
  int32_t v409; // w5
  bool v410; // w6
  bool v411; // w7
  ServantScriptMaster_o *v412; // x20
  System_String_o *v413; // x2
  System_String_o *v414; // x3
  int32_t v415; // w4
  int32_t v416; // w5
  bool v417; // w6
  bool v418; // w7
  NewsMaster_o *v419; // x20
  System_String_o *v420; // x2
  System_String_o *v421; // x3
  int32_t v422; // w4
  int32_t v423; // w5
  bool v424; // w6
  bool v425; // w7
  TelopMaster_o *v426; // x20
  System_String_o *v427; // x2
  System_String_o *v428; // x3
  int32_t v429; // w4
  int32_t v430; // w5
  bool v431; // w6
  bool v432; // w7
  UserExpMaster_o *v433; // x20
  System_String_o *v434; // x2
  System_String_o *v435; // x3
  int32_t v436; // w4
  int32_t v437; // w5
  bool v438; // w6
  bool v439; // w7
  TreasureDvcMaster_o *v440; // x20
  System_String_o *v441; // x2
  System_String_o *v442; // x3
  int32_t v443; // w4
  int32_t v444; // w5
  bool v445; // w6
  bool v446; // w7
  ServantTreasureDvcMaster_o *v447; // x20
  System_String_o *v448; // x2
  System_String_o *v449; // x3
  int32_t v450; // w4
  int32_t v451; // w5
  bool v452; // w6
  bool v453; // w7
  SkillMaster_o *v454; // x20
  System_String_o *v455; // x2
  System_String_o *v456; // x3
  int32_t v457; // w4
  int32_t v458; // w5
  bool v459; // w6
  bool v460; // w7
  SkillLvMaster_o *v461; // x20
  System_String_o *v462; // x2
  System_String_o *v463; // x3
  int32_t v464; // w4
  int32_t v465; // w5
  bool v466; // w6
  bool v467; // w7
  SkillDetailMaster_o *v468; // x20
  System_String_o *v469; // x2
  System_String_o *v470; // x3
  int32_t v471; // w4
  int32_t v472; // w5
  bool v473; // w6
  bool v474; // w7
  CommandSpellMaster_o *v475; // x20
  System_String_o *v476; // x2
  System_String_o *v477; // x3
  int32_t v478; // w4
  int32_t v479; // w5
  bool v480; // w6
  bool v481; // w7
  EquipMaster_o *v482; // x20
  System_String_o *v483; // x2
  System_String_o *v484; // x3
  int32_t v485; // w4
  int32_t v486; // w5
  bool v487; // w6
  bool v488; // w7
  EquipExpMaster_o *v489; // x20
  System_String_o *v490; // x2
  System_String_o *v491; // x3
  int32_t v492; // w4
  int32_t v493; // w5
  bool v494; // w6
  bool v495; // w7
  EquipSkillMaster_o *v496; // x20
  System_String_o *v497; // x2
  System_String_o *v498; // x3
  int32_t v499; // w4
  int32_t v500; // w5
  bool v501; // w6
  bool v502; // w7
  SubEquipMaster_o *v503; // x20
  System_String_o *v504; // x2
  System_String_o *v505; // x3
  int32_t v506; // w4
  int32_t v507; // w5
  bool v508; // w6
  bool v509; // w7
  AccessaryMaster_o *v510; // x20
  System_String_o *v511; // x2
  System_String_o *v512; // x3
  int32_t v513; // w4
  int32_t v514; // w5
  bool v515; // w6
  bool v516; // w7
  UserPresentBoxMaster_o *v517; // x20
  System_String_o *v518; // x2
  System_String_o *v519; // x3
  int32_t v520; // w4
  int32_t v521; // w5
  bool v522; // w6
  bool v523; // w7
  UserDeckMaster_o *v524; // x20
  System_String_o *v525; // x2
  System_String_o *v526; // x3
  int32_t v527; // w4
  int32_t v528; // w5
  bool v529; // w6
  bool v530; // w7
  UserSubEquipMaster_o *v531; // x20
  System_String_o *v532; // x2
  System_String_o *v533; // x3
  int32_t v534; // w4
  int32_t v535; // w5
  bool v536; // w6
  bool v537; // w7
  GachaMaster_o *v538; // x20
  System_String_o *v539; // x2
  System_String_o *v540; // x3
  int32_t v541; // w4
  int32_t v542; // w5
  bool v543; // w6
  bool v544; // w7
  GachaImageMaster_o *v545; // x20
  System_String_o *v546; // x2
  System_String_o *v547; // x3
  int32_t v548; // w4
  int32_t v549; // w5
  bool v550; // w6
  bool v551; // w7
  UserGachaMaster_o *v552; // x20
  System_String_o *v553; // x2
  System_String_o *v554; // x3
  int32_t v555; // w4
  int32_t v556; // w5
  bool v557; // w6
  bool v558; // w7
  UserEquipMaster_o *v559; // x20
  System_String_o *v560; // x2
  System_String_o *v561; // x3
  int32_t v562; // w4
  int32_t v563; // w5
  bool v564; // w6
  bool v565; // w7
  UserServantCollectionMaster_o *v566; // x20
  System_String_o *v567; // x2
  System_String_o *v568; // x3
  int32_t v569; // w4
  int32_t v570; // w5
  bool v571; // w6
  bool v572; // w7
  FriendshipMaster_o *v573; // x20
  System_String_o *v574; // x2
  System_String_o *v575; // x3
  int32_t v576; // w4
  int32_t v577; // w5
  bool v578; // w6
  bool v579; // w7
  GachaTicketMaster_o *v580; // x20
  System_String_o *v581; // x2
  System_String_o *v582; // x3
  int32_t v583; // w4
  int32_t v584; // w5
  bool v585; // w6
  bool v586; // w7
  UserFormationMaster_o *v587; // x20
  System_String_o *v588; // x2
  System_String_o *v589; // x3
  int32_t v590; // w4
  int32_t v591; // w5
  bool v592; // w6
  bool v593; // w7
  FunctionMaster_o *v594; // x20
  System_String_o *v595; // x2
  System_String_o *v596; // x3
  int32_t v597; // w4
  int32_t v598; // w5
  bool v599; // w6
  bool v600; // w7
  BuffMaster_o *v601; // x20
  System_String_o *v602; // x2
  System_String_o *v603; // x3
  int32_t v604; // w4
  int32_t v605; // w5
  bool v606; // w6
  bool v607; // w7
  GachaReleaseMaster_o *v608; // x20
  System_String_o *v609; // x2
  System_String_o *v610; // x3
  int32_t v611; // w4
  int32_t v612; // w5
  bool v613; // w6
  bool v614; // w7
  CombineQpMaster_o *v615; // x20
  System_String_o *v616; // x2
  System_String_o *v617; // x3
  int32_t v618; // w4
  int32_t v619; // w5
  bool v620; // w6
  bool v621; // w7
  CombineMaterialMaster_o *v622; // x20
  System_String_o *v623; // x2
  System_String_o *v624; // x3
  int32_t v625; // w4
  int32_t v626; // w5
  bool v627; // w6
  bool v628; // w7
  EventCombineMaster_o *v629; // x20
  System_String_o *v630; // x2
  System_String_o *v631; // x3
  int32_t v632; // w4
  int32_t v633; // w5
  bool v634; // w6
  bool v635; // w7
  ServantExpMaster_o *v636; // x20
  System_String_o *v637; // x2
  System_String_o *v638; // x3
  int32_t v639; // w4
  int32_t v640; // w5
  bool v641; // w6
  bool v642; // w7
  CombineSkillMaster_o *v643; // x20
  System_String_o *v644; // x2
  System_String_o *v645; // x3
  int32_t v646; // w4
  int32_t v647; // w5
  bool v648; // w6
  bool v649; // w7
  CombineTdMaster_o *v650; // x20
  System_String_o *v651; // x2
  System_String_o *v652; // x3
  int32_t v653; // w4
  int32_t v654; // w5
  bool v655; // w6
  bool v656; // w7
  EventQuestMaster_o *v657; // x20
  System_String_o *v658; // x2
  System_String_o *v659; // x3
  int32_t v660; // w4
  int32_t v661; // w5
  bool v662; // w6
  bool v663; // w7
  EventCampaignMaster_o *v664; // x20
  System_String_o *v665; // x2
  System_String_o *v666; // x3
  int32_t v667; // w4
  int32_t v668; // w5
  bool v669; // w6
  bool v670; // w7
  IllustratorMaster_o *v671; // x20
  System_String_o *v672; // x2
  System_String_o *v673; // x3
  int32_t v674; // w4
  int32_t v675; // w5
  bool v676; // w6
  bool v677; // w7
  CvMaster_o *v678; // x20
  System_String_o *v679; // x2
  System_String_o *v680; // x3
  int32_t v681; // w4
  int32_t v682; // w5
  bool v683; // w6
  bool v684; // w7
  TreasureDvcLvMaster_o *v685; // x20
  System_String_o *v686; // x2
  System_String_o *v687; // x3
  int32_t v688; // w4
  int32_t v689; // w5
  bool v690; // w6
  bool v691; // w7
  TreasureDvcDetailMaster_o *v692; // x20
  System_String_o *v693; // x2
  System_String_o *v694; // x3
  int32_t v695; // w4
  int32_t v696; // w5
  bool v697; // w6
  bool v698; // w7
  UserFollowerMaster_o *v699; // x20
  System_String_o *v700; // x2
  System_String_o *v701; // x3
  int32_t v702; // w4
  int32_t v703; // w5
  bool v704; // w6
  bool v705; // w7
  NpcFollowerMaster_o *v706; // x20
  System_String_o *v707; // x2
  System_String_o *v708; // x3
  int32_t v709; // w4
  int32_t v710; // w5
  bool v711; // w6
  bool v712; // w7
  NpcServantFollowerMaster_o *v713; // x20
  System_String_o *v714; // x2
  System_String_o *v715; // x3
  int32_t v716; // w4
  int32_t v717; // w5
  bool v718; // w6
  bool v719; // w7
  UserEventMaster_o *v720; // x20
  System_String_o *v721; // x2
  System_String_o *v722; // x3
  int32_t v723; // w4
  int32_t v724; // w5
  bool v725; // w6
  bool v726; // w7
  UserShopMaster_o *v727; // x20
  System_String_o *v728; // x2
  System_String_o *v729; // x3
  int32_t v730; // w4
  int32_t v731; // w5
  bool v732; // w6
  bool v733; // w7
  UserShopDailyMaster_o *v734; // x20
  System_String_o *v735; // x2
  System_String_o *v736; // x3
  int32_t v737; // w4
  int32_t v738; // w5
  bool v739; // w6
  bool v740; // w7
  UserContinueMaster_o *v741; // x20
  System_String_o *v742; // x2
  System_String_o *v743; // x3
  int32_t v744; // w4
  int32_t v745; // w5
  bool v746; // w6
  bool v747; // w7
  ConstantMaster_o *v748; // x20
  System_String_o *v749; // x2
  System_String_o *v750; // x3
  int32_t v751; // w4
  int32_t v752; // w5
  bool v753; // w6
  bool v754; // w7
  ConstantLongMaster_o *v755; // x20
  System_String_o *v756; // x2
  System_String_o *v757; // x3
  int32_t v758; // w4
  int32_t v759; // w5
  bool v760; // w6
  bool v761; // w7
  ConstantStrMaster_o *v762; // x20
  System_String_o *v763; // x2
  System_String_o *v764; // x3
  int32_t v765; // w4
  int32_t v766; // w5
  bool v767; // w6
  bool v768; // w7
  AiMaster_o *v769; // x20
  System_String_o *v770; // x2
  System_String_o *v771; // x3
  int32_t v772; // w4
  int32_t v773; // w5
  bool v774; // w6
  bool v775; // w7
  AiActMaster_o *v776; // x20
  System_String_o *v777; // x2
  System_String_o *v778; // x3
  int32_t v779; // w4
  int32_t v780; // w5
  bool v781; // w6
  bool v782; // w7
  AttriRelationMaster_o *v783; // x20
  System_String_o *v784; // x2
  System_String_o *v785; // x3
  int32_t v786; // w4
  int32_t v787; // w5
  bool v788; // w6
  bool v789; // w7
  ClassRelationMaster_o *v790; // x20
  System_String_o *v791; // x2
  System_String_o *v792; // x3
  int32_t v793; // w4
  int32_t v794; // w5
  bool v795; // w6
  bool v796; // w7
  EffectMaster_o *v797; // x20
  System_String_o *v798; // x2
  System_String_o *v799; // x3
  int32_t v800; // w4
  int32_t v801; // w5
  bool v802; // w6
  bool v803; // w7
  EquipImageMaster_o *v804; // x20
  System_String_o *v805; // x2
  System_String_o *v806; // x3
  int32_t v807; // w4
  int32_t v808; // w5
  bool v809; // w6
  bool v810; // w7
  ServantVoiceMaster_o *v811; // x20
  System_String_o *v812; // x2
  System_String_o *v813; // x3
  int32_t v814; // w4
  int32_t v815; // w5
  bool v816; // w6
  bool v817; // w7
  CombineLimitMaster_o *v818; // x20
  System_String_o *v819; // x2
  System_String_o *v820; // x3
  int32_t v821; // w4
  int32_t v822; // w5
  bool v823; // w6
  bool v824; // w7
  CardMaster_o *v825; // x20
  System_String_o *v826; // x2
  System_String_o *v827; // x3
  int32_t v828; // w4
  int32_t v829; // w5
  bool v830; // w6
  bool v831; // w7
  CombineQpSvtEquipMaster_o *v832; // x20
  System_String_o *v833; // x2
  System_String_o *v834; // x3
  int32_t v835; // w4
  int32_t v836; // w5
  bool v837; // w6
  bool v838; // w7
  ServantRarityMaster_o *v839; // x20
  System_String_o *v840; // x2
  System_String_o *v841; // x3
  int32_t v842; // w4
  int32_t v843; // w5
  bool v844; // w6
  bool v845; // w7
  SetItemMaster_o *v846; // x20
  System_String_o *v847; // x2
  System_String_o *v848; // x3
  int32_t v849; // w4
  int32_t v850; // w5
  bool v851; // w6
  bool v852; // w7
  RecoverMaster_o *v853; // x20
  System_String_o *v854; // x2
  System_String_o *v855; // x3
  int32_t v856; // w4
  int32_t v857; // w5
  bool v858; // w6
  bool v859; // w7
  BannerMaster_o *v860; // x20
  System_String_o *v861; // x2
  System_String_o *v862; // x3
  int32_t v863; // w4
  int32_t v864; // w5
  bool v865; // w6
  bool v866; // w7
  ShopReleaseMaster_o *v867; // x20
  System_String_o *v868; // x2
  System_String_o *v869; // x3
  int32_t v870; // w4
  int32_t v871; // w5
  bool v872; // w6
  bool v873; // w7
  EventRewardMaster_o *v874; // x20
  System_String_o *v875; // x2
  System_String_o *v876; // x3
  int32_t v877; // w4
  int32_t v878; // w5
  bool v879; // w6
  bool v880; // w7
  EventDetailMaster_o *v881; // x20
  System_String_o *v882; // x2
  System_String_o *v883; // x3
  int32_t v884; // w4
  int32_t v885; // w5
  bool v886; // w6
  bool v887; // w7
  EventServantMaster_o *v888; // x20
  System_String_o *v889; // x2
  System_String_o *v890; // x3
  int32_t v891; // w4
  int32_t v892; // w5
  bool v893; // w6
  bool v894; // w7
  BoxGachaMaster_o *v895; // x20
  System_String_o *v896; // x2
  System_String_o *v897; // x3
  int32_t v898; // w4
  int32_t v899; // w5
  bool v900; // w6
  bool v901; // w7
  BoxGachaBaseMaster_o *v902; // x20
  System_String_o *v903; // x2
  System_String_o *v904; // x3
  int32_t v905; // w4
  int32_t v906; // w5
  bool v907; // w6
  bool v908; // w7
  BoxGachaTalkMaster_o *v909; // x20
  System_String_o *v910; // x2
  System_String_o *v911; // x3
  int32_t v912; // w4
  int32_t v913; // w5
  bool v914; // w6
  bool v915; // w7
  UserBoxGachaMaster_o *v916; // x20
  System_String_o *v917; // x2
  System_String_o *v918; // x3
  int32_t v919; // w4
  int32_t v920; // w5
  bool v921; // w6
  bool v922; // w7
  BoxGachaHistoryMaster_o *v923; // x20
  System_String_o *v924; // x2
  System_String_o *v925; // x3
  int32_t v926; // w4
  int32_t v927; // w5
  bool v928; // w6
  bool v929; // w7
  BattleBgMaster_o *v930; // x20
  System_String_o *v931; // x2
  System_String_o *v932; // x3
  int32_t v933; // w4
  int32_t v934; // w5
  bool v935; // w6
  bool v936; // w7
  TipsBattleMaster_o *v937; // x20
  System_String_o *v938; // x2
  System_String_o *v939; // x3
  int32_t v940; // w4
  int32_t v941; // w5
  bool v942; // w6
  bool v943; // w7
  UserLoginMaster_o *v944; // x20
  System_String_o *v945; // x2
  System_String_o *v946; // x3
  int32_t v947; // w4
  int32_t v948; // w5
  bool v949; // w6
  bool v950; // w7
  VoiceMaster_o *v951; // x20
  System_String_o *v952; // x2
  System_String_o *v953; // x3
  int32_t v954; // w4
  int32_t v955; // w5
  bool v956; // w6
  bool v957; // w7
  EventRewardExtraMaster_o *v958; // x20
  System_String_o *v959; // x2
  System_String_o *v960; // x3
  int32_t v961; // w4
  int32_t v962; // w5
  bool v963; // w6
  bool v964; // w7
  EventMissionMaster_o *v965; // x20
  System_String_o *v966; // x2
  System_String_o *v967; // x3
  int32_t v968; // w4
  int32_t v969; // w5
  bool v970; // w6
  bool v971; // w7
  EventMissionActionMaster_o *v972; // x20
  System_String_o *v973; // x2
  System_String_o *v974; // x3
  int32_t v975; // w4
  int32_t v976; // w5
  bool v977; // w6
  bool v978; // w7
  EventMissionActionAddMaster_o *v979; // x20
  System_String_o *v980; // x2
  System_String_o *v981; // x3
  int32_t v982; // w4
  int32_t v983; // w5
  bool v984; // w6
  bool v985; // w7
  EventMissionConditionMaster_o *v986; // x20
  System_String_o *v987; // x2
  System_String_o *v988; // x3
  int32_t v989; // w4
  int32_t v990; // w5
  bool v991; // w6
  bool v992; // w7
  EventMissionCondDetailMaster_o *v993; // x20
  System_String_o *v994; // x2
  System_String_o *v995; // x3
  int32_t v996; // w4
  int32_t v997; // w5
  bool v998; // w6
  bool v999; // w7
  EventMissionAddMaster_o *v1000; // x20
  System_String_o *v1001; // x2
  System_String_o *v1002; // x3
  int32_t v1003; // w4
  int32_t v1004; // w5
  bool v1005; // w6
  bool v1006; // w7
  CompleteMissionMaster_o *v1007; // x20
  System_String_o *v1008; // x2
  System_String_o *v1009; // x3
  int32_t v1010; // w4
  int32_t v1011; // w5
  bool v1012; // w6
  bool v1013; // w7
  EventRewardSetMaster_o *v1014; // x20
  System_String_o *v1015; // x2
  System_String_o *v1016; // x3
  int32_t v1017; // w4
  int32_t v1018; // w5
  bool v1019; // w6
  bool v1020; // w7
  UserEventMissionMaster_o *v1021; // x20
  System_String_o *v1022; // x2
  System_String_o *v1023; // x3
  int32_t v1024; // w4
  int32_t v1025; // w5
  bool v1026; // w6
  bool v1027; // w7
  UserEventMissionCondDetailMaster_o *v1028; // x20
  System_String_o *v1029; // x2
  System_String_o *v1030; // x3
  int32_t v1031; // w4
  int32_t v1032; // w5
  bool v1033; // w6
  bool v1034; // w7
  BoxGachaBaseDetailMaster_o *v1035; // x20
  System_String_o *v1036; // x2
  System_String_o *v1037; // x3
  int32_t v1038; // w4
  int32_t v1039; // w5
  bool v1040; // w6
  bool v1041; // w7
  UserServantLeaderMaster_o *v1042; // x20
  System_String_o *v1043; // x2
  System_String_o *v1044; // x3
  int32_t v1045; // w4
  int32_t v1046; // w5
  bool v1047; // w6
  bool v1048; // w7
  ClosedMessageMaster_o *v1049; // x20
  System_String_o *v1050; // x2
  System_String_o *v1051; // x3
  int32_t v1052; // w4
  int32_t v1053; // w5
  bool v1054; // w6
  bool v1055; // w7
  FunctionGroupMaster_o *v1056; // x20
  System_String_o *v1057; // x2
  System_String_o *v1058; // x3
  int32_t v1059; // w4
  int32_t v1060; // w5
  bool v1061; // w6
  bool v1062; // w7
  EventRaidMaster_o *v1063; // x20
  System_String_o *v1064; // x2
  System_String_o *v1065; // x3
  int32_t v1066; // w4
  int32_t v1067; // w5
  bool v1068; // w6
  bool v1069; // w7
  TotalEventRaidMaster_o *v1070; // x20
  System_String_o *v1071; // x2
  System_String_o *v1072; // x3
  int32_t v1073; // w4
  int32_t v1074; // w5
  bool v1075; // w6
  bool v1076; // w7
  UserEventRaidMaster_o *v1077; // x20
  System_String_o *v1078; // x2
  System_String_o *v1079; // x3
  int32_t v1080; // w4
  int32_t v1081; // w5
  bool v1082; // w6
  bool v1083; // w7
  EventPointMaster_o *v1084; // x20
  System_String_o *v1085; // x2
  System_String_o *v1086; // x3
  int32_t v1087; // w4
  int32_t v1088; // w5
  bool v1089; // w6
  bool v1090; // w7
  EventPointGroupMaster_o *v1091; // x20
  System_String_o *v1092; // x2
  System_String_o *v1093; // x3
  int32_t v1094; // w4
  int32_t v1095; // w5
  bool v1096; // w6
  bool v1097; // w7
  TotalEventPointMaster_o *v1098; // x20
  System_String_o *v1099; // x2
  System_String_o *v1100; // x3
  int32_t v1101; // w4
  int32_t v1102; // w5
  bool v1103; // w6
  bool v1104; // w7
  UserEventPointMaster_o *v1105; // x20
  System_String_o *v1106; // x2
  System_String_o *v1107; // x3
  int32_t v1108; // w4
  int32_t v1109; // w5
  bool v1110; // w6
  bool v1111; // w7
  EventPointUpperMaster_o *v1112; // x20
  System_String_o *v1113; // x2
  System_String_o *v1114; // x3
  int32_t v1115; // w4
  int32_t v1116; // w5
  bool v1117; // w6
  bool v1118; // w7
  EventPointUpperReleaseMaster_o *v1119; // x20
  System_String_o *v1120; // x2
  System_String_o *v1121; // x3
  int32_t v1122; // w4
  int32_t v1123; // w5
  bool v1124; // w6
  bool v1125; // w7
  EventRaceMaster_o *v1126; // x20
  System_String_o *v1127; // x2
  System_String_o *v1128; // x3
  int32_t v1129; // w4
  int32_t v1130; // w5
  bool v1131; // w6
  bool v1132; // w7
  EventRaceResultMaster_o *v1133; // x20
  System_String_o *v1134; // x2
  System_String_o *v1135; // x3
  int32_t v1136; // w4
  int32_t v1137; // w5
  bool v1138; // w6
  bool v1139; // w7
  QuestRacePointMaster_o *v1140; // x20
  System_String_o *v1141; // x2
  System_String_o *v1142; // x3
  int32_t v1143; // w4
  int32_t v1144; // w5
  bool v1145; // w6
  bool v1146; // w7
  UserEventRaceMaster_o *v1147; // x20
  System_String_o *v1148; // x2
  System_String_o *v1149; // x3
  int32_t v1150; // w4
  int32_t v1151; // w5
  bool v1152; // w6
  bool v1153; // w7
  EventScriptMaster_o *v1154; // x20
  System_String_o *v1155; // x2
  System_String_o *v1156; // x3
  int32_t v1157; // w4
  int32_t v1158; // w5
  bool v1159; // w6
  bool v1160; // w7
  EventScriptReleaseMaster_o *v1161; // x20
  System_String_o *v1162; // x2
  System_String_o *v1163; // x3
  int32_t v1164; // w4
  int32_t v1165; // w5
  bool v1166; // w6
  bool v1167; // w7
  UserPresentHistoryMaster_o *v1168; // x20
  System_String_o *v1169; // x2
  System_String_o *v1170; // x3
  int32_t v1171; // w4
  int32_t v1172; // w5
  bool v1173; // w6
  bool v1174; // w7
  MstMissionMaster_o *v1175; // x20
  System_String_o *v1176; // x2
  System_String_o *v1177; // x3
  int32_t v1178; // w4
  int32_t v1179; // w5
  bool v1180; // w6
  bool v1181; // w7
  ServantExceedMaster_o *v1182; // x20
  System_String_o *v1183; // x2
  System_String_o *v1184; // x3
  int32_t v1185; // w4
  int32_t v1186; // w5
  bool v1187; // w6
  bool v1188; // w7
  PartialMaintenanceMaster_o *v1189; // x20
  System_String_o *v1190; // x2
  System_String_o *v1191; // x3
  int32_t v1192; // w4
  int32_t v1193; // w5
  bool v1194; // w6
  bool v1195; // w7
  GuideMaster_o *v1196; // x20
  System_String_o *v1197; // x2
  System_String_o *v1198; // x3
  int32_t v1199; // w4
  int32_t v1200; // w5
  bool v1201; // w6
  bool v1202; // w7
  MstMissionDisplayInfoMaster_o *v1203; // x20
  System_String_o *v1204; // x2
  System_String_o *v1205; // x3
  int32_t v1206; // w4
  int32_t v1207; // w5
  bool v1208; // w6
  bool v1209; // w7
  GachaGroupMaster_o *v1210; // x20
  System_String_o *v1211; // x2
  System_String_o *v1212; // x3
  int32_t v1213; // w4
  int32_t v1214; // w5
  bool v1215; // w6
  bool v1216; // w7
  QuestResetMaster_o *v1217; // x20
  System_String_o *v1218; // x2
  System_String_o *v1219; // x3
  int32_t v1220; // w4
  int32_t v1221; // w5
  bool v1222; // w6
  bool v1223; // w7
  WarAddMaster_o *v1224; // x20
  System_String_o *v1225; // x2
  System_String_o *v1226; // x3
  int32_t v1227; // w4
  int32_t v1228; // w5
  bool v1229; // w6
  bool v1230; // w7
  EventItemDisplayMaster_o *v1231; // x20
  System_String_o *v1232; // x2
  System_String_o *v1233; // x3
  int32_t v1234; // w4
  int32_t v1235; // w5
  bool v1236; // w6
  bool v1237; // w7
  EventItemDisplayGroupMaster_o *v1238; // x20
  System_String_o *v1239; // x2
  System_String_o *v1240; // x3
  int32_t v1241; // w4
  int32_t v1242; // w5
  bool v1243; // w6
  bool v1244; // w7
  EventItemDisplayReleaseMaster_o *v1245; // x20
  System_String_o *v1246; // x2
  System_String_o *v1247; // x3
  int32_t v1248; // w4
  int32_t v1249; // w5
  bool v1250; // w6
  bool v1251; // w7
  EventTutorialMaster_o *v1252; // x20
  System_String_o *v1253; // x2
  System_String_o *v1254; // x3
  int32_t v1255; // w4
  int32_t v1256; // w5
  bool v1257; // w6
  bool v1258; // w7
  EventTutorialCondMaster_o *v1259; // x20
  System_String_o *v1260; // x2
  System_String_o *v1261; // x3
  int32_t v1262; // w4
  int32_t v1263; // w5
  bool v1264; // w6
  bool v1265; // w7
  VoiceReleaseMaster_o *v1266; // x20
  System_String_o *v1267; // x2
  System_String_o *v1268; // x3
  int32_t v1269; // w4
  int32_t v1270; // w5
  bool v1271; // w6
  bool v1272; // w7
  EventSuperBossMaster_o *v1273; // x20
  System_String_o *v1274; // x2
  System_String_o *v1275; // x3
  int32_t v1276; // w4
  int32_t v1277; // w5
  bool v1278; // w6
  bool v1279; // w7
  UserSuperBossMaster_o *v1280; // x20
  System_String_o *v1281; // x2
  System_String_o *v1282; // x3
  int32_t v1283; // w4
  int32_t v1284; // w5
  bool v1285; // w6
  bool v1286; // w7
  QuestScriptMaster_o *v1287; // x20
  System_String_o *v1288; // x2
  System_String_o *v1289; // x3
  int32_t v1290; // w4
  int32_t v1291; // w5
  bool v1292; // w6
  bool v1293; // w7
  QuestScriptReleaseMaster_o *v1294; // x20
  System_String_o *v1295; // x2
  System_String_o *v1296; // x3
  int32_t v1297; // w4
  int32_t v1298; // w5
  bool v1299; // w6
  bool v1300; // w7
  MaterialFolderMaster_o *v1301; // x20
  System_String_o *v1302; // x2
  System_String_o *v1303; // x3
  int32_t v1304; // w4
  int32_t v1305; // w5
  bool v1306; // w6
  bool v1307; // w7
  RestrictionMaster_o *v1308; // x20
  System_String_o *v1309; // x2
  System_String_o *v1310; // x3
  int32_t v1311; // w4
  int32_t v1312; // w5
  bool v1313; // w6
  bool v1314; // w7
  QuestRestrictionMaster_o *v1315; // x20
  System_String_o *v1316; // x2
  System_String_o *v1317; // x3
  int32_t v1318; // w4
  int32_t v1319; // w5
  bool v1320; // w6
  bool v1321; // w7
  ServantVoiceRelationMaster_o *v1322; // x20
  System_String_o *v1323; // x2
  System_String_o *v1324; // x3
  int32_t v1325; // w4
  int32_t v1326; // w5
  bool v1327; // w6
  bool v1328; // w7
  ShopDetailMaster_o *v1329; // x20
  System_String_o *v1330; // x2
  System_String_o *v1331; // x3
  int32_t v1332; // w4
  int32_t v1333; // w5
  bool v1334; // w6
  bool v1335; // w7
  ServantScriptAddMaster_o *v1336; // x20
  System_String_o *v1337; // x2
  System_String_o *v1338; // x3
  int32_t v1339; // w4
  int32_t v1340; // w5
  bool v1341; // w6
  bool v1342; // w7
  CombineMaster_o *v1343; // x20
  System_String_o *v1344; // x2
  System_String_o *v1345; // x3
  int32_t v1346; // w4
  int32_t v1347; // w5
  bool v1348; // w6
  bool v1349; // w7
  AiFieldMaster_o *v1350; // x20
  System_String_o *v1351; // x2
  System_String_o *v1352; // x3
  int32_t v1353; // w4
  int32_t v1354; // w5
  bool v1355; // w6
  bool v1356; // w7
  ServantCommentAddMaster_o *v1357; // x20
  System_String_o *v1358; // x2
  System_String_o *v1359; // x3
  int32_t v1360; // w4
  int32_t v1361; // w5
  bool v1362; // w6
  bool v1363; // w7
  EventFilterMaster_o *v1364; // x20
  System_String_o *v1365; // x2
  System_String_o *v1366; // x3
  int32_t v1367; // w4
  int32_t v1368; // w5
  bool v1369; // w6
  bool v1370; // w7
  UserSupportDeckMaster_o *v1371; // x20
  System_String_o *v1372; // x2
  System_String_o *v1373; // x3
  int32_t v1374; // w4
  int32_t v1375; // w5
  bool v1376; // w6
  bool v1377; // w7
  EventRewardSceneMaster_o *v1378; // x20
  System_String_o *v1379; // x2
  System_String_o *v1380; // x3
  int32_t v1381; // w4
  int32_t v1382; // w5
  bool v1383; // w6
  bool v1384; // w7
  EventVoicePlayMaster_o *v1385; // x20
  System_String_o *v1386; // x2
  System_String_o *v1387; // x3
  int32_t v1388; // w4
  int32_t v1389; // w5
  bool v1390; // w6
  bool v1391; // w7
  GachaSubMaster_o *v1392; // x20
  System_String_o *v1393; // x2
  System_String_o *v1394; // x3
  int32_t v1395; // w4
  int32_t v1396; // w5
  bool v1397; // w6
  bool v1398; // w7
  GachaDetailMaster_o *v1399; // x20
  System_String_o *v1400; // x2
  System_String_o *v1401; // x3
  int32_t v1402; // w4
  int32_t v1403; // w5
  bool v1404; // w6
  bool v1405; // w7
  GachaBaseCollateralMaster_o *v1406; // x20
  System_String_o *v1407; // x2
  System_String_o *v1408; // x3
  int32_t v1409; // w4
  int32_t v1410; // w5
  bool v1411; // w6
  bool v1412; // w7
  GachaAdjustAddMaster_o *v1413; // x20
  System_String_o *v1414; // x2
  System_String_o *v1415; // x3
  int32_t v1416; // w4
  int32_t v1417; // w5
  bool v1418; // w6
  bool v1419; // w7
  GachaBonusSelectMaster_o *v1420; // x20
  System_String_o *v1421; // x2
  System_String_o *v1422; // x3
  int32_t v1423; // w4
  int32_t v1424; // w5
  bool v1425; // w6
  bool v1426; // w7
  GachaBonusSelectLineupMaster_o *v1427; // x20
  System_String_o *v1428; // x2
  System_String_o *v1429; // x3
  int32_t v1430; // w4
  int32_t v1431; // w5
  bool v1432; // w6
  bool v1433; // w7
  ServantChangeMaster_o *v1434; // x20
  System_String_o *v1435; // x2
  System_String_o *v1436; // x3
  int32_t v1437; // w4
  int32_t v1438; // w5
  bool v1439; // w6
  bool v1440; // w7
  VoiceCondMaster_o *v1441; // x20
  System_String_o *v1442; // x2
  System_String_o *v1443; // x3
  int32_t v1444; // w4
  int32_t v1445; // w5
  bool v1446; // w6
  bool v1447; // w7
  BgmReleaseMaster_o *v1448; // x20
  System_String_o *v1449; // x2
  System_String_o *v1450; // x3
  int32_t v1451; // w4
  int32_t v1452; // w5
  bool v1453; // w6
  bool v1454; // w7
  MyRoomAddMaster_o *v1455; // x20
  System_String_o *v1456; // x2
  System_String_o *v1457; // x3
  int32_t v1458; // w4
  int32_t v1459; // w5
  bool v1460; // w6
  bool v1461; // w7
  ShopActionMaster_o *v1462; // x20
  System_String_o *v1463; // x2
  System_String_o *v1464; // x3
  int32_t v1465; // w4
  int32_t v1466; // w5
  bool v1467; // w6
  bool v1468; // w7
  EventRewardSceneReleaseMaster_o *v1469; // x20
  System_String_o *v1470; // x2
  System_String_o *v1471; // x3
  int32_t v1472; // w4
  int32_t v1473; // w5
  bool v1474; // w6
  bool v1475; // w7
  QuestBehaviorMaster_o *v1476; // x20
  System_String_o *v1477; // x2
  System_String_o *v1478; // x3
  int32_t v1479; // w4
  int32_t v1480; // w5
  bool v1481; // w6
  bool v1482; // w7
  MapMaster_o *v1483; // x20
  System_String_o *v1484; // x2
  System_String_o *v1485; // x3
  int32_t v1486; // w4
  int32_t v1487; // w5
  bool v1488; // w6
  bool v1489; // w7
  MapCondMaster_o *v1490; // x20
  System_String_o *v1491; // x2
  System_String_o *v1492; // x3
  int32_t v1493; // w4
  int32_t v1494; // w5
  bool v1495; // w6
  bool v1496; // w7
  MapButtonMaster_o *v1497; // x20
  System_String_o *v1498; // x2
  System_String_o *v1499; // x3
  int32_t v1500; // w4
  int32_t v1501; // w5
  bool v1502; // w6
  bool v1503; // w7
  BannerAddMaster_o *v1504; // x20
  System_String_o *v1505; // x2
  System_String_o *v1506; // x3
  int32_t v1507; // w4
  int32_t v1508; // w5
  bool v1509; // w6
  bool v1510; // w7
  EventAddMaster_o *v1511; // x20
  System_String_o *v1512; // x2
  System_String_o *v1513; // x3
  int32_t v1514; // w4
  int32_t v1515; // w5
  bool v1516; // w6
  bool v1517; // w7
  TotalLoginMaster_o *v1518; // x20
  System_String_o *v1519; // x2
  System_String_o *v1520; // x3
  int32_t v1521; // w4
  int32_t v1522; // w5
  bool v1523; // w6
  bool v1524; // w7
  ServantFilterMaster_o *v1525; // x20
  System_String_o *v1526; // x2
  System_String_o *v1527; // x3
  int32_t v1528; // w4
  int32_t v1529; // w5
  bool v1530; // w6
  bool v1531; // w7
  CombineCostumeMaster_o *v1532; // x20
  System_String_o *v1533; // x2
  System_String_o *v1534; // x3
  int32_t v1535; // w4
  int32_t v1536; // w5
  bool v1537; // w6
  bool v1538; // w7
  ServantCostumeMaster_o *v1539; // x20
  System_String_o *v1540; // x2
  System_String_o *v1541; // x3
  int32_t v1542; // w4
  int32_t v1543; // w5
  bool v1544; // w6
  bool v1545; // w7
  ServantCostumeReleaseMaster_o *v1546; // x20
  System_String_o *v1547; // x2
  System_String_o *v1548; // x3
  int32_t v1549; // w4
  int32_t v1550; // w5
  bool v1551; // w6
  bool v1552; // w7
  StaffPhotoMaster_o *v1553; // x20
  System_String_o *v1554; // x2
  System_String_o *v1555; // x3
  int32_t v1556; // w4
  int32_t v1557; // w5
  bool v1558; // w6
  bool v1559; // w7
  StaffPhotoCostumeMaster_o *v1560; // x20
  System_String_o *v1561; // x2
  System_String_o *v1562; // x3
  int32_t v1563; // w4
  int32_t v1564; // w5
  bool v1565; // w6
  bool v1566; // w7
  UserFriendRequestHistoryMaster_o *v1567; // x20
  System_String_o *v1568; // x2
  System_String_o *v1569; // x3
  int32_t v1570; // w4
  int32_t v1571; // w5
  bool v1572; // w6
  bool v1573; // w7
  UserBlacklistMaster_o *v1574; // x20
  System_String_o *v1575; // x2
  System_String_o *v1576; // x3
  int32_t v1577; // w4
  int32_t v1578; // w5
  bool v1579; // w6
  bool v1580; // w7
  ItemSelectMaster_o *v1581; // x20
  System_String_o *v1582; // x2
  System_String_o *v1583; // x3
  int32_t v1584; // w4
  int32_t v1585; // w5
  bool v1586; // w6
  bool v1587; // w7
  TotalEventRaceMaster_o *v1588; // x20
  System_String_o *v1589; // x2
  System_String_o *v1590; // x3
  int32_t v1591; // w4
  int32_t v1592; // w5
  bool v1593; // w6
  bool v1594; // w7
  EventPointGroupAddMaster_o *v1595; // x20
  System_String_o *v1596; // x2
  System_String_o *v1597; // x3
  int32_t v1598; // w4
  int32_t v1599; // w5
  bool v1600; // w6
  bool v1601; // w7
  VoicePlayGroupMaster_o *v1602; // x20
  System_String_o *v1603; // x2
  System_String_o *v1604; // x3
  int32_t v1605; // w4
  int32_t v1606; // w5
  bool v1607; // w6
  bool v1608; // w7
  VoicePlayCondMaster_o *v1609; // x20
  System_String_o *v1610; // x2
  System_String_o *v1611; // x3
  int32_t v1612; // w4
  int32_t v1613; // w5
  bool v1614; // w6
  bool v1615; // w7
  GachaStoryAdjustMaster_o *v1616; // x20
  System_String_o *v1617; // x2
  System_String_o *v1618; // x3
  int32_t v1619; // w4
  int32_t v1620; // w5
  bool v1621; // w6
  bool v1622; // w7
  ServantFlagMaster_o *v1623; // x20
  System_String_o *v1624; // x2
  System_String_o *v1625; // x3
  int32_t v1626; // w4
  int32_t v1627; // w5
  bool v1628; // w6
  bool v1629; // w7
  ServantFlagReleaseMaster_o *v1630; // x20
  System_String_o *v1631; // x2
  System_String_o *v1632; // x3
  int32_t v1633; // w4
  int32_t v1634; // w5
  bool v1635; // w6
  bool v1636; // w7
  EventLocationCampaignMaster_o *v1637; // x20
  System_String_o *v1638; // x2
  System_String_o *v1639; // x3
  int32_t v1640; // w4
  int32_t v1641; // w5
  bool v1642; // w6
  bool v1643; // w7
  CampaignInfoMaster_o *v1644; // x20
  System_String_o *v1645; // x2
  System_String_o *v1646; // x3
  int32_t v1647; // w4
  int32_t v1648; // w5
  bool v1649; // w6
  bool v1650; // w7
  DialogMessageMaster_o *v1651; // x20
  System_String_o *v1652; // x2
  System_String_o *v1653; // x3
  int32_t v1654; // w4
  int32_t v1655; // w5
  bool v1656; // w6
  bool v1657; // w7
  ServantIndividualityMaster_o *v1658; // x20
  System_String_o *v1659; // x2
  System_String_o *v1660; // x3
  int32_t v1661; // w4
  int32_t v1662; // w5
  bool v1663; // w6
  bool v1664; // w7
  BoardMessageMaster_o *v1665; // x20
  System_String_o *v1666; // x2
  System_String_o *v1667; // x3
  int32_t v1668; // w4
  int32_t v1669; // w5
  bool v1670; // w6
  bool v1671; // w7
  BoardMessageReleaseMaster_o *v1672; // x20
  System_String_o *v1673; // x2
  System_String_o *v1674; // x3
  int32_t v1675; // w4
  int32_t v1676; // w5
  bool v1677; // w6
  bool v1678; // w7
  EventServantFatigueMaster_o *v1679; // x20
  System_String_o *v1680; // x2
  System_String_o *v1681; // x3
  int32_t v1682; // w4
  int32_t v1683; // w5
  bool v1684; // w6
  bool v1685; // w7
  UserEventDeckMaster_o *v1686; // x20
  System_String_o *v1687; // x2
  System_String_o *v1688; // x3
  int32_t v1689; // w4
  int32_t v1690; // w5
  bool v1691; // w6
  bool v1692; // w7
  EventTowerMaster_o *v1693; // x20
  System_String_o *v1694; // x2
  System_String_o *v1695; // x3
  int32_t v1696; // w4
  int32_t v1697; // w5
  bool v1698; // w6
  bool v1699; // w7
  EventTowerRewardMaster_o *v1700; // x20
  System_String_o *v1701; // x2
  System_String_o *v1702; // x3
  int32_t v1703; // w4
  int32_t v1704; // w5
  bool v1705; // w6
  bool v1706; // w7
  EventBulletinBoardMaster_o *v1707; // x20
  System_String_o *v1708; // x2
  System_String_o *v1709; // x3
  int32_t v1710; // w4
  int32_t v1711; // w5
  bool v1712; // w6
  bool v1713; // w7
  EventBulletinBoardReleaseMaster_o *v1714; // x20
  System_String_o *v1715; // x2
  System_String_o *v1716; // x3
  int32_t v1717; // w4
  int32_t v1718; // w5
  bool v1719; // w6
  bool v1720; // w7
  EventFactoryMaster_o *v1721; // x20
  System_String_o *v1722; // x2
  System_String_o *v1723; // x3
  int32_t v1724; // w4
  int32_t v1725; // w5
  bool v1726; // w6
  bool v1727; // w7
  ShopGroupMaster_o *v1728; // x20
  System_String_o *v1729; // x2
  System_String_o *v1730; // x3
  int32_t v1731; // w4
  int32_t v1732; // w5
  bool v1733; // w6
  bool v1734; // w7
  AuraEffectMaster_o *v1735; // x20
  System_String_o *v1736; // x2
  System_String_o *v1737; // x3
  int32_t v1738; // w4
  int32_t v1739; // w5
  bool v1740; // w6
  bool v1741; // w7
  AuraEffectPosOverwriteMaster_o *v1742; // x20
  System_String_o *v1743; // x2
  System_String_o *v1744; // x3
  int32_t v1745; // w4
  int32_t v1746; // w5
  bool v1747; // w6
  bool v1748; // w7
  UserEventMissionFixMaster_o *v1749; // x20
  System_String_o *v1750; // x2
  System_String_o *v1751; // x3
  int32_t v1752; // w4
  int32_t v1753; // w5
  bool v1754; // w6
  bool v1755; // w7
  NotEndEventMissionFixMaster_o *v1756; // x20
  System_String_o *v1757; // x2
  System_String_o *v1758; // x3
  int32_t v1759; // w4
  int32_t v1760; // w5
  bool v1761; // w6
  bool v1762; // w7
  EnemyMstMaster_o *v1763; // x20
  System_String_o *v1764; // x2
  System_String_o *v1765; // x3
  int32_t v1766; // w4
  int32_t v1767; // w5
  bool v1768; // w6
  bool v1769; // w7
  EnemyMstBattleMaster_o *v1770; // x20
  System_String_o *v1771; // x2
  System_String_o *v1772; // x3
  int32_t v1773; // w4
  int32_t v1774; // w5
  bool v1775; // w6
  bool v1776; // w7
  ServantSkillReleaseMaster_o *v1777; // x20
  System_String_o *v1778; // x2
  System_String_o *v1779; // x3
  int32_t v1780; // w4
  int32_t v1781; // w5
  bool v1782; // w6
  bool v1783; // w7
  ServantPassiveSkillReleaseMaster_o *v1784; // x20
  System_String_o *v1785; // x2
  System_String_o *v1786; // x3
  int32_t v1787; // w4
  int32_t v1788; // w5
  bool v1789; // w6
  bool v1790; // w7
  ServantTreasureDeviceReleaseMaster_o *v1791; // x20
  System_String_o *v1792; // x2
  System_String_o *v1793; // x3
  int32_t v1794; // w4
  int32_t v1795; // w5
  bool v1796; // w6
  bool v1797; // w7
  MapGimmickReleaseMaster_o *v1798; // x20
  System_String_o *v1799; // x2
  System_String_o *v1800; // x3
  int32_t v1801; // w4
  int32_t v1802; // w5
  bool v1803; // w6
  bool v1804; // w7
  CommandCodeMaster_o *v1805; // x20
  System_String_o *v1806; // x2
  System_String_o *v1807; // x3
  int32_t v1808; // w4
  int32_t v1809; // w5
  bool v1810; // w6
  bool v1811; // w7
  ServantCommandCodeUnlockMaster_o *v1812; // x20
  System_String_o *v1813; // x2
  System_String_o *v1814; // x3
  int32_t v1815; // w4
  int32_t v1816; // w5
  bool v1817; // w6
  bool v1818; // w7
  UserCommandCodeMaster_o *v1819; // x20
  System_String_o *v1820; // x2
  System_String_o *v1821; // x3
  int32_t v1822; // w4
  int32_t v1823; // w5
  bool v1824; // w6
  bool v1825; // w7
  UserCommandCodeCollectionMaster_o *v1826; // x20
  System_String_o *v1827; // x2
  System_String_o *v1828; // x3
  int32_t v1829; // w4
  int32_t v1830; // w5
  bool v1831; // w6
  bool v1832; // w7
  UserServantCommandCodeMaster_o *v1833; // x20
  System_String_o *v1834; // x2
  System_String_o *v1835; // x3
  int32_t v1836; // w4
  int32_t v1837; // w5
  bool v1838; // w6
  bool v1839; // w7
  UserServantCommandCardMaster_o *v1840; // x20
  System_String_o *v1841; // x2
  System_String_o *v1842; // x3
  int32_t v1843; // w4
  int32_t v1844; // w5
  bool v1845; // w6
  bool v1846; // w7
  CommandCardRankParamMaster_o *v1847; // x20
  System_String_o *v1848; // x2
  System_String_o *v1849; // x3
  int32_t v1850; // w4
  int32_t v1851; // w5
  bool v1852; // w6
  bool v1853; // w7
  CommandCodeSkillMaster_o *v1854; // x20
  System_String_o *v1855; // x2
  System_String_o *v1856; // x3
  int32_t v1857; // w4
  int32_t v1858; // w5
  bool v1859; // w6
  bool v1860; // w7
  CommandCodeSkillReleaseMaster_o *v1861; // x20
  System_String_o *v1862; // x2
  System_String_o *v1863; // x3
  int32_t v1864; // w4
  int32_t v1865; // w5
  bool v1866; // w6
  bool v1867; // w7
  CommandCodeCommentMaster_o *v1868; // x20
  System_String_o *v1869; // x2
  System_String_o *v1870; // x3
  int32_t v1871; // w4
  int32_t v1872; // w5
  bool v1873; // w6
  bool v1874; // w7
  EventStatusMaster_o *v1875; // x20
  System_String_o *v1876; // x2
  System_String_o *v1877; // x3
  int32_t v1878; // w4
  int32_t v1879; // w5
  bool v1880; // w6
  bool v1881; // w7
  EventStatusQuestMaster_o *v1882; // x20
  System_String_o *v1883; // x2
  System_String_o *v1884; // x3
  int32_t v1885; // w4
  int32_t v1886; // w5
  bool v1887; // w6
  bool v1888; // w7
  CommonRestrictionMaster_o *v1889; // x20
  System_String_o *v1890; // x2
  System_String_o *v1891; // x3
  int32_t v1892; // w4
  int32_t v1893; // w5
  bool v1894; // w6
  bool v1895; // w7
  EventPointBuffMaster_o *v1896; // x20
  System_String_o *v1897; // x2
  System_String_o *v1898; // x3
  int32_t v1899; // w4
  int32_t v1900; // w5
  bool v1901; // w6
  bool v1902; // w7
  UserFollowMaster_o *v1903; // x20
  System_String_o *v1904; // x2
  System_String_o *v1905; // x3
  int32_t v1906; // w4
  int32_t v1907; // w5
  bool v1908; // w6
  bool v1909; // w7
  EventRewardGuideReleaseMaster_o *v1910; // x20
  System_String_o *v1911; // x2
  System_String_o *v1912; // x3
  int32_t v1913; // w4
  int32_t v1914; // w5
  bool v1915; // w6
  bool v1916; // w7
  NpcServantEquipMaster_o *v1917; // x20
  System_String_o *v1918; // x2
  System_String_o *v1919; // x3
  int32_t v1920; // w4
  int32_t v1921; // w5
  bool v1922; // w6
  bool v1923; // w7
  EventCampaignReleaseMaster_o *v1924; // x20
  System_String_o *v1925; // x2
  System_String_o *v1926; // x3
  int32_t v1927; // w4
  int32_t v1928; // w5
  bool v1929; // w6
  bool v1930; // w7
  ServantMaterialFolderMaster_o *v1931; // x20
  System_String_o *v1932; // x2
  System_String_o *v1933; // x3
  int32_t v1934; // w4
  int32_t v1935; // w5
  bool v1936; // w6
  bool v1937; // w7
  EventEquipSkillReleaseMaster_o *v1938; // x20
  System_String_o *v1939; // x2
  System_String_o *v1940; // x3
  int32_t v1941; // w4
  int32_t v1942; // w5
  bool v1943; // w6
  bool v1944; // w7
  EventPointActivityMaster_o *v1945; // x20
  System_String_o *v1946; // x2
  System_String_o *v1947; // x3
  int32_t v1948; // w4
  int32_t v1949; // w5
  bool v1950; // w6
  bool v1951; // w7
  FunctionCategoryMaster_o *v1952; // x20
  System_String_o *v1953; // x2
  System_String_o *v1954; // x3
  int32_t v1955; // w4
  int32_t v1956; // w5
  bool v1957; // w6
  bool v1958; // w7
  QuestPickupMaster_o *v1959; // x20
  System_String_o *v1960; // x2
  System_String_o *v1961; // x3
  int32_t v1962; // w4
  int32_t v1963; // w5
  bool v1964; // w6
  bool v1965; // w7
  EventUiMaster_o *v1966; // x20
  System_String_o *v1967; // x2
  System_String_o *v1968; // x3
  int32_t v1969; // w4
  int32_t v1970; // w5
  bool v1971; // w6
  bool v1972; // w7
  EventUiReleaseMaster_o *v1973; // x20
  System_String_o *v1974; // x2
  System_String_o *v1975; // x3
  int32_t v1976; // w4
  int32_t v1977; // w5
  bool v1978; // w6
  bool v1979; // w7
  EventUiValueMaster_o *v1980; // x20
  System_String_o *v1981; // x2
  System_String_o *v1982; // x3
  int32_t v1983; // w4
  int32_t v1984; // w5
  bool v1985; // w6
  bool v1986; // w7
  EventConquestRewardMaster_o *v1987; // x20
  System_String_o *v1988; // x2
  System_String_o *v1989; // x3
  int32_t v1990; // w4
  int32_t v1991; // w5
  bool v1992; // w6
  bool v1993; // w7
  NpcFollowerReleaseMaster_o *v1994; // x20
  System_String_o *v1995; // x2
  System_String_o *v1996; // x3
  int32_t v1997; // w4
  int32_t v1998; // w5
  bool v1999; // w6
  bool v2000; // w7
  EventBonusFilterMaster_o *v2001; // x20
  System_String_o *v2002; // x2
  System_String_o *v2003; // x3
  int32_t v2004; // w4
  int32_t v2005; // w5
  bool v2006; // w6
  bool v2007; // w7
  EventBonusFilterGroupInfoMaster_o *v2008; // x20
  System_String_o *v2009; // x2
  System_String_o *v2010; // x3
  int32_t v2011; // w4
  int32_t v2012; // w5
  bool v2013; // w6
  bool v2014; // w7
  EventBonusFilterGroupMemberMaster_o *v2015; // x20
  System_String_o *v2016; // x2
  System_String_o *v2017; // x3
  int32_t v2018; // w4
  int32_t v2019; // w5
  bool v2020; // w6
  bool v2021; // w7
  UserGachaExtraCountMaster_o *v2022; // x20
  System_String_o *v2023; // x2
  System_String_o *v2024; // x3
  int32_t v2025; // w4
  int32_t v2026; // w5
  bool v2027; // w6
  bool v2028; // w7
  PrivilegeMaster_o *v2029; // x20
  System_String_o *v2030; // x2
  System_String_o *v2031; // x3
  int32_t v2032; // w4
  int32_t v2033; // w5
  bool v2034; // w6
  bool v2035; // w7
  UserPrivilegeMaster_o *v2036; // x20
  System_String_o *v2037; // x2
  System_String_o *v2038; // x3
  int32_t v2039; // w4
  int32_t v2040; // w5
  bool v2041; // w6
  bool v2042; // w7
  UserQuestRouteMaster_o *v2043; // x20
  System_String_o *v2044; // x2
  System_String_o *v2045; // x3
  int32_t v2046; // w4
  int32_t v2047; // w5
  bool v2048; // w6
  bool v2049; // w7
  EventBossStatusUiMaster_o *v2050; // x20
  System_String_o *v2051; // x2
  System_String_o *v2052; // x3
  int32_t v2053; // w4
  int32_t v2054; // w5
  bool v2055; // w6
  bool v2056; // w7
  CommonReleaseMaster_o *v2057; // x20
  System_String_o *v2058; // x2
  System_String_o *v2059; // x3
  int32_t v2060; // w4
  int32_t v2061; // w5
  bool v2062; // w6
  bool v2063; // w7
  QuestSpotReleaseMaster_o *v2064; // x20
  System_String_o *v2065; // x2
  System_String_o *v2066; // x3
  int32_t v2067; // w4
  int32_t v2068; // w5
  bool v2069; // w6
  bool v2070; // w7
  VoiceMaterialCondMaster_o *v2071; // x20
  System_String_o *v2072; // x2
  System_String_o *v2073; // x3
  int32_t v2074; // w4
  int32_t v2075; // w5
  bool v2076; // w6
  bool v2077; // w7
  ClassRelationOverwriteMaster_o *v2078; // x20
  System_String_o *v2079; // x2
  System_String_o *v2080; // x3
  int32_t v2081; // w4
  int32_t v2082; // w5
  bool v2083; // w6
  bool v2084; // w7
  EventGroupMaster_o *v2085; // x20
  System_String_o *v2086; // x2
  System_String_o *v2087; // x3
  int32_t v2088; // w4
  int32_t v2089; // w5
  bool v2090; // w6
  bool v2091; // w7
  TotalBoxGachaMaster_o *v2092; // x20
  System_String_o *v2093; // x2
  System_String_o *v2094; // x3
  int32_t v2095; // w4
  int32_t v2096; // w5
  bool v2097; // w6
  bool v2098; // w7
  ServantTreasureDeviceDamageMaster_o *v2099; // x20
  System_String_o *v2100; // x2
  System_String_o *v2101; // x3
  int32_t v2102; // w4
  int32_t v2103; // w5
  bool v2104; // w6
  bool v2105; // w7
  UserEventServantFatigueMaster_o *v2106; // x20
  System_String_o *v2107; // x2
  System_String_o *v2108; // x3
  int32_t v2109; // w4
  int32_t v2110; // w5
  bool v2111; // w6
  bool v2112; // w7
  EventRewardBgMaster_o *v2113; // x20
  System_String_o *v2114; // x2
  System_String_o *v2115; // x3
  int32_t v2116; // w4
  int32_t v2117; // w5
  bool v2118; // w6
  bool v2119; // w7
  EventFatigueRecoveryMaster_o *v2120; // x20
  System_String_o *v2121; // x2
  System_String_o *v2122; // x3
  int32_t v2123; // w4
  int32_t v2124; // w5
  bool v2125; // w6
  bool v2126; // w7
  EventBoostItemUsedMaster_o *v2127; // x20
  System_String_o *v2128; // x2
  System_String_o *v2129; // x3
  int32_t v2130; // w4
  int32_t v2131; // w5
  bool v2132; // w6
  bool v2133; // w7
  StatusEffectPosOverwriteMaster_o *v2134; // x20
  System_String_o *v2135; // x2
  System_String_o *v2136; // x3
  int32_t v2137; // w4
  int32_t v2138; // w5
  bool v2139; // w6
  bool v2140; // w7
  QuestPhaseDetailAddMaster_o *v2141; // x20
  System_String_o *v2142; // x2
  System_String_o *v2143; // x3
  int32_t v2144; // w4
  int32_t v2145; // w5
  bool v2146; // w6
  bool v2147; // w7
  VoiceClosedMessageMaster_o *v2148; // x20
  System_String_o *v2149; // x2
  System_String_o *v2150; // x3
  int32_t v2151; // w4
  int32_t v2152; // w5
  bool v2153; // w6
  bool v2154; // w7
  ReprintStageMaster_o *v2155; // x20
  System_String_o *v2156; // x2
  System_String_o *v2157; // x3
  int32_t v2158; // w4
  int32_t v2159; // w5
  bool v2160; // w6
  bool v2161; // w7
  UserCombineExpMaster_o *v2162; // x20
  System_String_o *v2163; // x2
  System_String_o *v2164; // x3
  int32_t v2165; // w4
  int32_t v2166; // w5
  bool v2167; // w6
  bool v2168; // w7
  EventBoardGameCellMaster_o *v2169; // x20
  System_String_o *v2170; // x2
  System_String_o *v2171; // x3
  int32_t v2172; // w4
  int32_t v2173; // w5
  bool v2174; // w6
  bool v2175; // w7
  EventBoardGameTokenMaster_o *v2176; // x20
  System_String_o *v2177; // x2
  System_String_o *v2178; // x3
  int32_t v2179; // w4
  int32_t v2180; // w5
  bool v2181; // w6
  bool v2182; // w7
  EventBoardGameTokenRewardMaster_o *v2183; // x20
  System_String_o *v2184; // x2
  System_String_o *v2185; // x3
  int32_t v2186; // w4
  int32_t v2187; // w5
  bool v2188; // w6
  bool v2189; // w7
  UserEventBoardGameTokenMaster_o *v2190; // x20
  System_String_o *v2191; // x2
  System_String_o *v2192; // x3
  int32_t v2193; // w4
  int32_t v2194; // w5
  bool v2195; // w6
  bool v2196; // w7
  ServantAnimationOverwriteMaster_o *v2197; // x20
  System_String_o *v2198; // x2
  System_String_o *v2199; // x3
  int32_t v2200; // w4
  int32_t v2201; // w5
  bool v2202; // w6
  bool v2203; // w7
  OpeningMovieMaster_o *v2204; // x20
  System_String_o *v2205; // x2
  System_String_o *v2206; // x3
  int32_t v2207; // w4
  int32_t v2208; // w5
  bool v2209; // w6
  bool v2210; // w7
  ServantLimitSpoilerProtectionMaster_o *v2211; // x20
  System_String_o *v2212; // x2
  System_String_o *v2213; // x3
  int32_t v2214; // w4
  int32_t v2215; // w5
  bool v2216; // w6
  bool v2217; // w7
  PickupUserFollowerMaster_o *v2218; // x20
  System_String_o *v2219; // x2
  System_String_o *v2220; // x3
  int32_t v2221; // w4
  int32_t v2222; // w5
  bool v2223; // w6
  bool v2224; // w7
  ServantCollectionMaster_o *v2225; // x20
  System_String_o *v2226; // x2
  System_String_o *v2227; // x3
  int32_t v2228; // w4
  int32_t v2229; // w5
  bool v2230; // w6
  bool v2231; // w7
  GachaBehaviorMaster_o *v2232; // x20
  System_String_o *v2233; // x2
  System_String_o *v2234; // x3
  int32_t v2235; // w4
  int32_t v2236; // w5
  bool v2237; // w6
  bool v2238; // w7
  EventQuestCooltimeMaster_o *v2239; // x20
  System_String_o *v2240; // x2
  System_String_o *v2241; // x3
  int32_t v2242; // w4
  int32_t v2243; // w5
  bool v2244; // w6
  bool v2245; // w7
  UserEventQuestCooltimeMaster_o *v2246; // x20
  System_String_o *v2247; // x2
  System_String_o *v2248; // x3
  int32_t v2249; // w4
  int32_t v2250; // w5
  bool v2251; // w6
  bool v2252; // w7
  BoostMaster_o *v2253; // x20
  System_String_o *v2254; // x2
  System_String_o *v2255; // x3
  int32_t v2256; // w4
  int32_t v2257; // w5
  bool v2258; // w6
  bool v2259; // w7
  WarBoardMaster_o *v2260; // x20
  System_String_o *v2261; // x2
  System_String_o *v2262; // x3
  int32_t v2263; // w4
  int32_t v2264; // w5
  bool v2265; // w6
  bool v2266; // w7
  WarBoardSquareMaster_o *v2267; // x20
  System_String_o *v2268; // x2
  System_String_o *v2269; // x3
  int32_t v2270; // w4
  int32_t v2271; // w5
  bool v2272; // w6
  bool v2273; // w7
  WarBoardRoadMaster_o *v2274; // x20
  System_String_o *v2275; // x2
  System_String_o *v2276; // x3
  int32_t v2277; // w4
  int32_t v2278; // w5
  bool v2279; // w6
  bool v2280; // w7
  WarBoardStageMaster_o *v2281; // x20
  System_String_o *v2282; // x2
  System_String_o *v2283; // x3
  int32_t v2284; // w4
  int32_t v2285; // w5
  bool v2286; // w6
  bool v2287; // w7
  WarBoardActionPointMaster_o *v2288; // x20
  System_String_o *v2289; // x2
  System_String_o *v2290; // x3
  int32_t v2291; // w4
  int32_t v2292; // w5
  bool v2293; // w6
  bool v2294; // w7
  WarBoardActionTrendMaster_o *v2295; // x20
  System_String_o *v2296; // x2
  System_String_o *v2297; // x3
  int32_t v2298; // w4
  int32_t v2299; // w5
  bool v2300; // w6
  bool v2301; // w7
  WarBoardTacticalTrendMaster_o *v2302; // x20
  System_String_o *v2303; // x2
  System_String_o *v2304; // x3
  int32_t v2305; // w4
  int32_t v2306; // w5
  bool v2307; // w6
  bool v2308; // w7
  WarBoardStageLayoutMaster_o *v2309; // x20
  System_String_o *v2310; // x2
  System_String_o *v2311; // x3
  int32_t v2312; // w4
  int32_t v2313; // w5
  bool v2314; // w6
  bool v2315; // w7
  WarBoardStageNpcMaster_o *v2316; // x20
  System_String_o *v2317; // x2
  System_String_o *v2318; // x3
  int32_t v2319; // w4
  int32_t v2320; // w5
  bool v2321; // w6
  bool v2322; // w7
  WarBoardStageWallMaster_o *v2323; // x20
  System_String_o *v2324; // x2
  System_String_o *v2325; // x3
  int32_t v2326; // w4
  int32_t v2327; // w5
  bool v2328; // w6
  bool v2329; // w7
  WarBoardAIMaster_o *v2330; // x20
  System_String_o *v2331; // x2
  System_String_o *v2332; // x3
  int32_t v2333; // w4
  int32_t v2334; // w5
  bool v2335; // w6
  bool v2336; // w7
  WarBoardRatingBaseMaster_o *v2337; // x20
  System_String_o *v2338; // x2
  System_String_o *v2339; // x3
  int32_t v2340; // w4
  int32_t v2341; // w5
  bool v2342; // w6
  bool v2343; // w7
  WarBoardRatingOffsetMaster_o *v2344; // x20
  System_String_o *v2345; // x2
  System_String_o *v2346; // x3
  int32_t v2347; // w4
  int32_t v2348; // w5
  bool v2349; // w6
  bool v2350; // w7
  WarBoardItemMaster_o *v2351; // x20
  System_String_o *v2352; // x2
  System_String_o *v2353; // x3
  int32_t v2354; // w4
  int32_t v2355; // w5
  bool v2356; // w6
  bool v2357; // w7
  WarBoardTreasureMaster_o *v2358; // x20
  System_String_o *v2359; // x2
  System_String_o *v2360; // x3
  int32_t v2361; // w4
  int32_t v2362; // w5
  bool v2363; // w6
  bool v2364; // w7
  WarBoardQuestMaster_o *v2365; // x20
  System_String_o *v2366; // x2
  System_String_o *v2367; // x3
  int32_t v2368; // w4
  int32_t v2369; // w5
  bool v2370; // w6
  bool v2371; // w7
  WarBoardDataMaster_o *v2372; // x20
  System_String_o *v2373; // x2
  System_String_o *v2374; // x3
  int32_t v2375; // w4
  int32_t v2376; // w5
  bool v2377; // w6
  bool v2378; // w7
  WarBoardIndividualityClassMaster_o *v2379; // x20
  System_String_o *v2380; // x2
  System_String_o *v2381; // x3
  int32_t v2382; // w4
  int32_t v2383; // w5
  bool v2384; // w6
  bool v2385; // w7
  WarBoardActionTrendConditionMaster_o *v2386; // x20
  System_String_o *v2387; // x2
  System_String_o *v2388; // x3
  int32_t v2389; // w4
  int32_t v2390; // w5
  bool v2391; // w6
  bool v2392; // w7
  WarBoardActionPointClassMaster_o *v2393; // x20
  System_String_o *v2394; // x2
  System_String_o *v2395; // x3
  int32_t v2396; // w4
  int32_t v2397; // w5
  bool v2398; // w6
  bool v2399; // w7
  EventPanelMapMaster_o *v2400; // x20
  System_String_o *v2401; // x2
  System_String_o *v2402; // x3
  int32_t v2403; // w4
  int32_t v2404; // w5
  bool v2405; // w6
  bool v2406; // w7
  EventPanelMapDetailMaster_o *v2407; // x20
  System_String_o *v2408; // x2
  System_String_o *v2409; // x3
  int32_t v2410; // w4
  int32_t v2411; // w5
  bool v2412; // w6
  bool v2413; // w7
  EventPanelSpotMaster_o *v2414; // x20
  System_String_o *v2415; // x2
  System_String_o *v2416; // x3
  int32_t v2417; // w4
  int32_t v2418; // w5
  bool v2419; // w6
  bool v2420; // w7
  EventPanelScanMaster_o *v2421; // x20
  System_String_o *v2422; // x2
  System_String_o *v2423; // x3
  int32_t v2424; // w4
  int32_t v2425; // w5
  bool v2426; // w6
  bool v2427; // w7
  CommonConsumeMaster_o *v2428; // x20
  System_String_o *v2429; // x2
  System_String_o *v2430; // x3
  int32_t v2431; // w4
  int32_t v2432; // w5
  bool v2433; // w6
  bool v2434; // w7
  UserEventMapMaster_o *v2435; // x20
  System_String_o *v2436; // x2
  System_String_o *v2437; // x3
  int32_t v2438; // w4
  int32_t v2439; // w5
  bool v2440; // w6
  bool v2441; // w7
  UserEventSpotMaster_o *v2442; // x20
  System_String_o *v2443; // x2
  System_String_o *v2444; // x3
  int32_t v2445; // w4
  int32_t v2446; // w5
  bool v2447; // w6
  bool v2448; // w7
  WarGroupMaster_o *v2449; // x20
  System_String_o *v2450; // x2
  System_String_o *v2451; // x3
  int32_t v2452; // w4
  int32_t v2453; // w5
  bool v2454; // w6
  bool v2455; // w7
  ServantLimitImageMaster_o *v2456; // x20
  System_String_o *v2457; // x2
  System_String_o *v2458; // x3
  int32_t v2459; // w4
  int32_t v2460; // w5
  bool v2461; // w6
  bool v2462; // w7
  FriendshipQuestDialogInfoMaster_o *v2463; // x20
  System_String_o *v2464; // x2
  System_String_o *v2465; // x3
  int32_t v2466; // w4
  int32_t v2467; // w5
  bool v2468; // w6
  bool v2469; // w7
  QuestRestrictionInfoMaster_o *v2470; // x20
  System_String_o *v2471; // x2
  System_String_o *v2472; // x3
  int32_t v2473; // w4
  int32_t v2474; // w5
  bool v2475; // w6
  bool v2476; // w7
  AssistMaster_o *v2477; // x20
  System_String_o *v2478; // x2
  System_String_o *v2479; // x3
  int32_t v2480; // w4
  int32_t v2481; // w5
  bool v2482; // w6
  bool v2483; // w7
  WarBoardEffectMaster_o *v2484; // x20
  System_String_o *v2485; // x2
  System_String_o *v2486; // x3
  int32_t v2487; // w4
  int32_t v2488; // w5
  bool v2489; // w6
  bool v2490; // w7
  WarBoardOnboardSkillMaster_o *v2491; // x20
  System_String_o *v2492; // x2
  System_String_o *v2493; // x3
  int32_t v2494; // w4
  int32_t v2495; // w5
  bool v2496; // w6
  bool v2497; // w7
  BeforeBirthDayMaster_o *v2498; // x20
  System_String_o *v2499; // x2
  System_String_o *v2500; // x3
  int32_t v2501; // w4
  int32_t v2502; // w5
  bool v2503; // w6
  bool v2504; // w7
  LoginQuestMaster_o *v2505; // x20
  System_String_o *v2506; // x2
  System_String_o *v2507; // x3
  int32_t v2508; // w4
  int32_t v2509; // w5
  bool v2510; // w6
  bool v2511; // w7
  EventCombineCostumeMaster_o *v2512; // x20
  System_String_o *v2513; // x2
  System_String_o *v2514; // x3
  int32_t v2515; // w4
  int32_t v2516; // w5
  bool v2517; // w6
  bool v2518; // w7
  WarBoardStagePieceDetailMaster_o *v2519; // x20
  System_String_o *v2520; // x2
  System_String_o *v2521; // x3
  int32_t v2522; // w4
  int32_t v2523; // w5
  bool v2524; // w6
  bool v2525; // w7
  ServantTreasureDeviceAddMaster_o *v2526; // x20
  System_String_o *v2527; // x2
  System_String_o *v2528; // x3
  int32_t v2529; // w4
  int32_t v2530; // w5
  bool v2531; // w6
  bool v2532; // w7
  SkillAddMaster_o *v2533; // x20
  System_String_o *v2534; // x2
  System_String_o *v2535; // x3
  int32_t v2536; // w4
  int32_t v2537; // w5
  bool v2538; // w6
  bool v2539; // w7
  ServantLvDetailMaster_o *v2540; // x20
  System_String_o *v2541; // x2
  System_String_o *v2542; // x3
  int32_t v2543; // w4
  int32_t v2544; // w5
  bool v2545; // w6
  bool v2546; // w7
  GachaAppendMaster_o *v2547; // x20
  System_String_o *v2548; // x2
  System_String_o *v2549; // x3
  int32_t v2550; // w4
  int32_t v2551; // w5
  bool v2552; // w6
  bool v2553; // w7
  UserGachaDrawLogMaster_o *v2554; // x20
  System_String_o *v2555; // x2
  System_String_o *v2556; // x3
  int32_t v2557; // w4
  int32_t v2558; // w5
  bool v2559; // w6
  bool v2560; // w7
  ServantAppendPassiveSkillMaster_o *v2561; // x20
  System_String_o *v2562; // x2
  System_String_o *v2563; // x3
  int32_t v2564; // w4
  int32_t v2565; // w5
  bool v2566; // w6
  bool v2567; // w7
  UserServantAppendPassiveSkillMaster_o *v2568; // x20
  System_String_o *v2569; // x2
  System_String_o *v2570; // x3
  int32_t v2571; // w4
  int32_t v2572; // w5
  bool v2573; // w6
  bool v2574; // w7
  UserServantAppendPassiveSkillLvMaster_o *v2575; // x20
  System_String_o *v2576; // x2
  System_String_o *v2577; // x3
  int32_t v2578; // w4
  int32_t v2579; // w5
  bool v2580; // w6
  bool v2581; // w7
  SvtAppendPassiveSkillUnlockMaster_o *v2582; // x20
  System_String_o *v2583; // x2
  System_String_o *v2584; // x3
  int32_t v2585; // w4
  int32_t v2586; // w5
  bool v2587; // w6
  bool v2588; // w7
  CombineAppendPassiveSkillMaster_o *v2589; // x20
  System_String_o *v2590; // x2
  System_String_o *v2591; // x3
  int32_t v2592; // w4
  int32_t v2593; // w5
  bool v2594; // w6
  bool v2595; // w7
  SvtCoinMaster_o *v2596; // x20
  System_String_o *v2597; // x2
  System_String_o *v2598; // x3
  int32_t v2599; // w4
  int32_t v2600; // w5
  bool v2601; // w6
  bool v2602; // w7
  UserSvtCoinMaster_o *v2603; // x20
  System_String_o *v2604; // x2
  System_String_o *v2605; // x3
  int32_t v2606; // w4
  int32_t v2607; // w5
  bool v2608; // w6
  bool v2609; // w7
  ServantAddMaster_o *v2610; // x20
  System_String_o *v2611; // x2
  System_String_o *v2612; // x3
  int32_t v2613; // w4
  int32_t v2614; // w5
  bool v2615; // w6
  bool v2616; // w7
  TreasureBoxMaster_o *v2617; // x20
  System_String_o *v2618; // x2
  System_String_o *v2619; // x3
  int32_t v2620; // w4
  int32_t v2621; // w5
  bool v2622; // w6
  bool v2623; // w7
  TreasureBoxGiftMaster_o *v2624; // x20
  System_String_o *v2625; // x2
  System_String_o *v2626; // x3
  int32_t v2627; // w4
  int32_t v2628; // w5
  bool v2629; // w6
  bool v2630; // w7
  TreasureBoxTalkMaster_o *v2631; // x20
  System_String_o *v2632; // x2
  System_String_o *v2633; // x3
  int32_t v2634; // w4
  int32_t v2635; // w5
  bool v2636; // w6
  bool v2637; // w7
  UserEventExpeditionMaster_o *v2638; // x20
  System_String_o *v2639; // x2
  System_String_o *v2640; // x3
  int32_t v2641; // w4
  int32_t v2642; // w5
  bool v2643; // w6
  bool v2644; // w7
  EventExpeditionMaster_o *v2645; // x20
  System_String_o *v2646; // x2
  System_String_o *v2647; // x3
  int32_t v2648; // w4
  int32_t v2649; // w5
  bool v2650; // w6
  bool v2651; // w7
  EventExpeditionPieceMaster_o *v2652; // x20
  System_String_o *v2653; // x2
  System_String_o *v2654; // x3
  int32_t v2655; // w4
  int32_t v2656; // w5
  bool v2657; // w6
  bool v2658; // w7
  EventRecipeMaster_o *v2659; // x20
  System_String_o *v2660; // x2
  System_String_o *v2661; // x3
  int32_t v2662; // w4
  int32_t v2663; // w5
  bool v2664; // w6
  bool v2665; // w7
  EventRecipeGiftMaster_o *v2666; // x20
  System_String_o *v2667; // x2
  System_String_o *v2668; // x3
  int32_t v2669; // w4
  int32_t v2670; // w5
  bool v2671; // w6
  bool v2672; // w7
  UserEventFortificationMaster_o *v2673; // x20
  System_String_o *v2674; // x2
  System_String_o *v2675; // x3
  int32_t v2676; // w4
  int32_t v2677; // w5
  bool v2678; // w6
  bool v2679; // w7
  EventFortificationMaster_o *v2680; // x20
  System_String_o *v2681; // x2
  System_String_o *v2682; // x3
  int32_t v2683; // w4
  int32_t v2684; // w5
  bool v2685; // w6
  bool v2686; // w7
  EventFortificationDetailMaster_o *v2687; // x20
  System_String_o *v2688; // x2
  System_String_o *v2689; // x3
  int32_t v2690; // w4
  int32_t v2691; // w5
  bool v2692; // w6
  bool v2693; // w7
  EventFortificationSvtMaster_o *v2694; // x20
  System_String_o *v2695; // x2
  System_String_o *v2696; // x3
  int32_t v2697; // w4
  int32_t v2698; // w5
  bool v2699; // w6
  bool v2700; // w7
  UserServantVoicePlayedMaster_o *v2701; // x20
  System_String_o *v2702; // x2
  System_String_o *v2703; // x3
  int32_t v2704; // w4
  int32_t v2705; // w5
  bool v2706; // w6
  bool v2707; // w7
  UpdateProfileDialogInfoMaster_o *v2708; // x20
  System_String_o *v2709; // x2
  System_String_o *v2710; // x3
  int32_t v2711; // w4
  int32_t v2712; // w5
  bool v2713; // w6
  bool v2714; // w7
  SvtMaterialTdMaster_o *v2715; // x20
  System_String_o *v2716; // x2
  System_String_o *v2717; // x3
  int32_t v2718; // w4
  int32_t v2719; // w5
  bool v2720; // w6
  bool v2721; // w7
  BattleMasterImageMaster_o *v2722; // x20
  System_String_o *v2723; // x2
  System_String_o *v2724; // x3
  int32_t v2725; // w4
  int32_t v2726; // w5
  bool v2727; // w6
  bool v2728; // w7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v2729; // x20
  System_String_o *v2730; // x2
  System_String_o *v2731; // x3
  int32_t v2732; // w4
  int32_t v2733; // w5
  bool v2734; // w6
  bool v2735; // w7
  UserEventRandomMissionMaster_o *v2736; // x20
  System_String_o *v2737; // x2
  System_String_o *v2738; // x3
  int32_t v2739; // w4
  int32_t v2740; // w5
  bool v2741; // w6
  bool v2742; // w7
  EventProgressValueMaster_o *v2743; // x20
  System_String_o *v2744; // x2
  System_String_o *v2745; // x3
  int32_t v2746; // w4
  int32_t v2747; // w5
  bool v2748; // w6
  bool v2749; // w7
  SvtMultiPortraitMaster_o *v2750; // x20
  System_String_o *v2751; // x2
  System_String_o *v2752; // x3
  int32_t v2753; // w4
  int32_t v2754; // w5
  bool v2755; // w6
  bool v2756; // w7
  EventRandomMissionMaster_o *v2757; // x20
  System_String_o *v2758; // x2
  System_String_o *v2759; // x3
  int32_t v2760; // w4
  int32_t v2761; // w5
  bool v2762; // w6
  bool v2763; // w7
  UserGachaHistoryMaster_o *v2764; // x20
  System_String_o *v2765; // x2
  System_String_o *v2766; // x3
  int32_t v2767; // w4
  int32_t v2768; // w5
  bool v2769; // w6
  bool v2770; // w7
  UserCoinRoomMaster_o *v2771; // x20
  System_String_o *v2772; // x2
  System_String_o *v2773; // x3
  int32_t v2774; // w4
  int32_t v2775; // w5
  bool v2776; // w6
  bool v2777; // w7
  EventBuddyPointMaster_o *v2778; // x20
  System_String_o *v2779; // x2
  System_String_o *v2780; // x3
  int32_t v2781; // w4
  int32_t v2782; // w5
  bool v2783; // w6
  bool v2784; // w7
  EventServantPointRankMaster_o *v2785; // x20
  System_String_o *v2786; // x2
  System_String_o *v2787; // x3
  int32_t v2788; // w4
  int32_t v2789; // w5
  bool v2790; // w6
  bool v2791; // w7
  UserEventServantPointMaster_o *v2792; // x20
  System_String_o *v2793; // x2
  System_String_o *v2794; // x3
  int32_t v2795; // w4
  int32_t v2796; // w5
  bool v2797; // w6
  bool v2798; // w7
  FieldMotionMaster_o *v2799; // x20
  System_String_o *v2800; // x2
  System_String_o *v2801; // x3
  int32_t v2802; // w4
  int32_t v2803; // w5
  bool v2804; // w6
  bool v2805; // w7
  UserDeleteReservationMaster_o *v2806; // x20
  System_String_o *v2807; // x2
  System_String_o *v2808; // x3
  int32_t v2809; // w4
  int32_t v2810; // w5
  bool v2811; // w6
  bool v2812; // w7
  ServantScriptMultipleMaster_o *v2813; // x20
  System_String_o *v2814; // x2
  System_String_o *v2815; // x3
  int32_t v2816; // w4
  int32_t v2817; // w5
  bool v2818; // w6
  bool v2819; // w7
  EquipAddMaster_o *v2820; // x20
  System_String_o *v2821; // x2
  System_String_o *v2822; // x3
  int32_t v2823; // w4
  int32_t v2824; // w5
  bool v2825; // w6
  bool v2826; // w7
  QuestReleaseOverwriteMaster_o *v2827; // x20
  System_String_o *v2828; // x2
  System_String_o *v2829; // x3
  int32_t v2830; // w4
  int32_t v2831; // w5
  bool v2832; // w6
  bool v2833; // w7
  UserEventAlloutBattleMaster_o *v2834; // x20
  System_String_o *v2835; // x2
  System_String_o *v2836; // x3
  int32_t v2837; // w4
  int32_t v2838; // w5
  bool v2839; // w6
  bool v2840; // w7
  QuestScriptMaterialNextMaster_o *v2841; // x20
  System_String_o *v2842; // x2
  System_String_o *v2843; // x3
  int32_t v2844; // w4
  int32_t v2845; // w5
  bool v2846; // w6
  bool v2847; // w7
  EventDiggingMaster_o *v2848; // x20
  System_String_o *v2849; // x2
  System_String_o *v2850; // x3
  int32_t v2851; // w4
  int32_t v2852; // w5
  bool v2853; // w6
  bool v2854; // w7
  EventDiggingBlockMaster_o *v2855; // x20
  System_String_o *v2856; // x2
  System_String_o *v2857; // x3
  int32_t v2858; // w4
  int32_t v2859; // w5
  bool v2860; // w6
  bool v2861; // w7
  EventDiggingRewardMaster_o *v2862; // x20
  System_String_o *v2863; // x2
  System_String_o *v2864; // x3
  int32_t v2865; // w4
  int32_t v2866; // w5
  bool v2867; // w6
  bool v2868; // w7
  UserEventDiggingMaster_o *v2869; // x20
  System_String_o *v2870; // x2
  System_String_o *v2871; // x3
  int32_t v2872; // w4
  int32_t v2873; // w5
  bool v2874; // w6
  bool v2875; // w7
  BattleMessageMaster_o *v2876; // x20
  System_String_o *v2877; // x2
  System_String_o *v2878; // x3
  int32_t v2879; // w4
  int32_t v2880; // w5
  bool v2881; // w6
  bool v2882; // w7
  BattleMessageGroupMaster_o *v2883; // x20
  System_String_o *v2884; // x2
  System_String_o *v2885; // x3
  int32_t v2886; // w4
  int32_t v2887; // w5
  bool v2888; // w6
  bool v2889; // w7
  UserNpcSvtRecordMaster_o *v2890; // x20
  System_String_o *v2891; // x2
  System_String_o *v2892; // x3
  int32_t v2893; // w4
  int32_t v2894; // w5
  bool v2895; // w6
  bool v2896; // w7
  BuffTypeDetailMaster_o *v2897; // x20
  System_String_o *v2898; // x2
  System_String_o *v2899; // x3
  int32_t v2900; // w4
  int32_t v2901; // w5
  bool v2902; // w6
  bool v2903; // w7
  WarBoardMessageMaster_o *v2904; // x20
  System_String_o *v2905; // x2
  System_String_o *v2906; // x3
  int32_t v2907; // w4
  int32_t v2908; // w5
  bool v2909; // w6
  bool v2910; // w7
  WarBoardPartySkillMaster_o *v2911; // x20
  System_String_o *v2912; // x2
  System_String_o *v2913; // x3
  int32_t v2914; // w4
  int32_t v2915; // w5
  bool v2916; // w6
  bool v2917; // w7
  WarBoardMessageScriptMaster_o *v2918; // x20
  System_String_o *v2919; // x2
  System_String_o *v2920; // x3
  int32_t v2921; // w4
  int32_t v2922; // w5
  bool v2923; // w6
  bool v2924; // w7
  WarQuestSelectionMaster_o *v2925; // x20
  System_String_o *v2926; // x2
  System_String_o *v2927; // x3
  int32_t v2928; // w4
  int32_t v2929; // w5
  bool v2930; // w6
  bool v2931; // w7
  WarBoardStageDetailMaster_o *v2932; // x20
  System_String_o *v2933; // x2
  System_String_o *v2934; // x3
  int32_t v2935; // w4
  int32_t v2936; // w5
  bool v2937; // w6
  bool v2938; // w7
  QuestScriptMaterialOverwriteMaster_o *v2939; // x20
  System_String_o *v2940; // x2
  System_String_o *v2941; // x3
  int32_t v2942; // w4
  int32_t v2943; // w5
  bool v2944; // w6
  bool v2945; // w7
  QuestScriptBranchMaterialMaster_o *v2946; // x20
  System_String_o *v2947; // x2
  System_String_o *v2948; // x3
  int32_t v2949; // w4
  int32_t v2950; // w5
  bool v2951; // w6
  bool v2952; // w7
  AdCheckPointMaster_o *v2953; // x20
  System_String_o *v2954; // x2
  System_String_o *v2955; // x3
  int32_t v2956; // w4
  int32_t v2957; // w5
  bool v2958; // w6
  bool v2959; // w7
  GiftDetailMaster_o *v2960; // x20
  System_String_o *v2961; // x2
  System_String_o *v2962; // x3
  int32_t v2963; // w4
  int32_t v2964; // w5
  bool v2965; // w6
  bool v2966; // w7
  CombineLimitGiftMaster_o *v2967; // x20
  System_String_o *v2968; // x2
  System_String_o *v2969; // x3
  int32_t v2970; // w4
  int32_t v2971; // w5
  bool v2972; // w6
  bool v2973; // w7
  EventCooltimeRewardMaster_o *v2974; // x20
  System_String_o *v2975; // x2
  System_String_o *v2976; // x3
  int32_t v2977; // w4
  int32_t v2978; // w5
  bool v2979; // w6
  bool v2980; // w7
  UserEventCooltimeRewardMaster_o *v2981; // x20
  System_String_o *v2982; // x2
  System_String_o *v2983; // x3
  int32_t v2984; // w4
  int32_t v2985; // w5
  bool v2986; // w6
  bool v2987; // w7
  ClassBoardBaseMaster_o *v2988; // x20
  System_String_o *v2989; // x2
  System_String_o *v2990; // x3
  int32_t v2991; // w4
  int32_t v2992; // w5
  bool v2993; // w6
  bool v2994; // w7
  ClassBoardLockMaster_o *v2995; // x20
  System_String_o *v2996; // x2
  System_String_o *v2997; // x3
  int32_t v2998; // w4
  int32_t v2999; // w5
  bool v3000; // w6
  bool v3001; // w7
  ClassBoardSquareMaster_o *v3002; // x20
  System_String_o *v3003; // x2
  System_String_o *v3004; // x3
  int32_t v3005; // w4
  int32_t v3006; // w5
  bool v3007; // w6
  bool v3008; // w7
  ClassBoardLineMaster_o *v3009; // x20
  System_String_o *v3010; // x2
  System_String_o *v3011; // x3
  int32_t v3012; // w4
  int32_t v3013; // w5
  bool v3014; // w6
  bool v3015; // w7
  UserClassBoardSquareMaster_o *v3016; // x20
  System_String_o *v3017; // x2
  System_String_o *v3018; // x3
  int32_t v3019; // w4
  int32_t v3020; // w5
  bool v3021; // w6
  bool v3022; // w7
  ServantCardAddMaster_o *v3023; // x20
  System_String_o *v3024; // x2
  System_String_o *v3025; // x3
  int32_t v3026; // w4
  int32_t v3027; // w5
  bool v3028; // w6
  bool v3029; // w7
  MapLayerMaster_o *v3030; // x20
  System_String_o *v3031; // x2
  System_String_o *v3032; // x3
  int32_t v3033; // w4
  int32_t v3034; // w5
  bool v3035; // w6
  bool v3036; // w7
  SpotLayerMaster_o *v3037; // x20
  System_String_o *v3038; // x2
  System_String_o *v3039; // x3
  int32_t v3040; // w4
  int32_t v3041; // w5
  bool v3042; // w6
  bool v3043; // w7
  MapGimmickLayerMaster_o *v3044; // x20
  System_String_o *v3045; // x2
  System_String_o *v3046; // x3
  int32_t v3047; // w4
  int32_t v3048; // w5
  bool v3049; // w6
  bool v3050; // w7
  EventDataLostBattleMaster_o *v3051; // x20
  System_String_o *v3052; // x2
  System_String_o *v3053; // x3
  int32_t v3054; // w4
  int32_t v3055; // w5
  bool v3056; // w6
  bool v3057; // w7
  EventDataLostBattleResetMaster_o *v3058; // x20
  System_String_o *v3059; // x2
  System_String_o *v3060; // x3
  int32_t v3061; // w4
  int32_t v3062; // w5
  bool v3063; // w6
  bool v3064; // w7
  UserEventDataLostMaster_o *v3065; // x20
  System_String_o *v3066; // x2
  System_String_o *v3067; // x3
  int32_t v3068; // w4
  int32_t v3069; // w5
  bool v3070; // w6
  bool v3071; // w7
  QuestHintMaster_o *v3072; // x20
  System_String_o *v3073; // x2
  System_String_o *v3074; // x3
  int32_t v3075; // w4
  int32_t v3076; // w5
  bool v3077; // w6
  bool v3078; // w7
  FuncTypeDetailMaster_o *v3079; // x20
  System_String_o *v3080; // x2
  System_String_o *v3081; // x3
  int32_t v3082; // w4
  int32_t v3083; // w5
  bool v3084; // w6
  bool v3085; // w7
  BuffConvertMaster_o *v3086; // x20
  System_String_o *v3087; // x2
  System_String_o *v3088; // x3
  int32_t v3089; // w4
  int32_t v3090; // w5
  bool v3091; // w6
  bool v3092; // w7
  SkillGroupMaster_o *v3093; // x20
  System_String_o *v3094; // x2
  System_String_o *v3095; // x3
  int32_t v3096; // w4
  int32_t v3097; // w5
  bool v3098; // w6
  bool v3099; // w7
  SkillGroupOverwriteMaster_o *v3100; // x20
  System_String_o *v3101; // x2
  System_String_o *v3102; // x3
  int32_t v3103; // w4
  int32_t v3104; // w5
  bool v3105; // w6
  bool v3106; // w7
  SkillIndividualityMaster_o *v3107; // x20
  System_String_o *v3108; // x2
  System_String_o *v3109; // x3
  int32_t v3110; // w4
  int32_t v3111; // w5
  bool v3112; // w6
  bool v3113; // w7
  RestrictionBaseMaster_o *v3114; // x20
  System_String_o *v3115; // x2
  System_String_o *v3116; // x3
  int32_t v3117; // w4
  int32_t v3118; // w5
  bool v3119; // w6
  bool v3120; // w7
  RestrictionSlotMaster_o *v3121; // x20
  System_String_o *v3122; // x2
  System_String_o *v3123; // x3
  int32_t v3124; // w4
  int32_t v3125; // w5
  bool v3126; // w6
  bool v3127; // w7
  RestrictionSlotDetailMaster_o *v3128; // x20
  System_String_o *v3129; // x2
  System_String_o *v3130; // x3
  int32_t v3131; // w4
  int32_t v3132; // w5
  bool v3133; // w6
  bool v3134; // w7
  RestrictionMessageMaster_o *v3135; // x20
  System_String_o *v3136; // x2
  System_String_o *v3137; // x3
  int32_t v3138; // w4
  int32_t v3139; // w5
  bool v3140; // w6
  bool v3141; // w7
  RestrictionWholeMaster_o *v3142; // x20
  System_String_o *v3143; // x2
  System_String_o *v3144; // x3
  int32_t v3145; // w4
  int32_t v3146; // w5
  bool v3147; // w6
  bool v3148; // w7
  FuncDispMaster_o *v3149; // x20
  System_String_o *v3150; // x2
  System_String_o *v3151; // x3
  int32_t v3152; // w4
  int32_t v3153; // w5
  bool v3154; // w6
  bool v3155; // w7
  ClassBoardCommandSpellMaster_o *v3156; // x20
  System_String_o *v3157; // x2
  System_String_o *v3158; // x3
  int32_t v3159; // w4
  int32_t v3160; // w5
  bool v3161; // w6
  bool v3162; // w7
  ClassBoardClassMaster_o *v3163; // x20
  System_String_o *v3164; // x2
  System_String_o *v3165; // x3
  int32_t v3166; // w4
  int32_t v3167; // w5
  bool v3168; // w6
  bool v3169; // w7
  EventCommandAssistMaster_o *v3170; // x20
  System_String_o *v3171; // x2
  System_String_o *v3172; // x3
  int32_t v3173; // w4
  int32_t v3174; // w5
  bool v3175; // w6
  bool v3176; // w7
  EventMissionGroupMaster_o *v3177; // x20
  System_String_o *v3178; // x2
  System_String_o *v3179; // x3
  int32_t v3180; // w4
  int32_t v3181; // w5
  bool v3182; // w6
  bool v3183; // w7
  CombineLimitReleaseMaster_o *v3184; // x20
  System_String_o *v3185; // x2
  System_String_o *v3186; // x3
  int32_t v3187; // w4
  int32_t v3188; // w5
  bool v3189; // w6
  bool v3190; // w7
  HeelPortraitMaster_o *v3191; // x20
  System_String_o *v3192; // x2
  System_String_o *v3193; // x3
  int32_t v3194; // w4
  int32_t v3195; // w5
  bool v3196; // w6
  bool v3197; // w7
  UserHeelPortraitMaster_o *v3198; // x20
  System_String_o *v3199; // x2
  System_String_o *v3200; // x3
  int32_t v3201; // w4
  int32_t v3202; // w5
  bool v3203; // w6
  bool v3204; // w7
  TreasureDeviceSequenceWeightMaster_o *v3205; // x20
  System_String_o *v3206; // x2
  System_String_o *v3207; // x3
  int32_t v3208; // w4
  int32_t v3209; // w5
  bool v3210; // w6
  bool v3211; // w7
  NpcServantFollowerIndividualityMaster_o *v3212; // x20
  System_String_o *v3213; // x2
  System_String_o *v3214; // x3
  int32_t v3215; // w4
  int32_t v3216; // w5
  bool v3217; // w6
  bool v3218; // w7
  GachaExtraGiftMaster_o *v3219; // x20
  System_String_o *v3220; // x2
  System_String_o *v3221; // x3
  int32_t v3222; // w4
  int32_t v3223; // w5
  bool v3224; // w6
  bool v3225; // w7
  EventMuralMaster_o *v3226; // x20
  System_String_o *v3227; // x2
  System_String_o *v3228; // x3
  int32_t v3229; // w4
  int32_t v3230; // w5
  bool v3231; // w6
  bool v3232; // w7
  ViewWaveEnemyMaster_o *v3233; // x20
  System_String_o *v3234; // x2
  System_String_o *v3235; // x3
  int32_t v3236; // w4
  int32_t v3237; // w5
  bool v3238; // w6
  bool v3239; // w7
  BlankEarthSpotNavimenuMaster_o *v3240; // x20
  System_String_o *v3241; // x2
  System_String_o *v3242; // x3
  int32_t v3243; // w4
  int32_t v3244; // w5
  bool v3245; // w6
  bool v3246; // w7
  BlankEarthGimmickMaster_o *v3247; // x20
  System_String_o *v3248; // x2
  System_String_o *v3249; // x3
  int32_t v3250; // w4
  int32_t v3251; // w5
  bool v3252; // w6
  bool v3253; // w7
  TerminalOverwriteMaster_o *v3254; // x20
  System_String_o *v3255; // x2
  System_String_o *v3256; // x3
  int32_t v3257; // w4
  int32_t v3258; // w5
  bool v3259; // w6
  bool v3260; // w7
  UserExchangeSvtMaster_o *v3261; // x20
  System_String_o *v3262; // x2
  System_String_o *v3263; // x3
  int32_t v3264; // w4
  int32_t v3265; // w5
  bool v3266; // w6
  bool v3267; // w7
  WarBoardCommonReleaseMaster_o *v3268; // x20
  System_String_o *v3269; // x2
  System_String_o *v3270; // x3
  int32_t v3271; // w4
  int32_t v3272; // w5
  bool v3273; // w6
  bool v3274; // w7
  WarBoardEventMaster_o *v3275; // x20
  System_String_o *v3276; // x2
  System_String_o *v3277; // x3
  int32_t v3278; // w4
  int32_t v3279; // w5
  bool v3280; // w6
  bool v3281; // w7
  WarBoardEventScriptMaster_o *v3282; // x20
  System_String_o *v3283; // x2
  System_String_o *v3284; // x3
  int32_t v3285; // w4
  int32_t v3286; // w5
  bool v3287; // w6
  bool v3288; // w7
  WarBoardStageBossMaster_o *v3289; // x20
  System_String_o *v3290; // x2
  System_String_o *v3291; // x3
  int32_t v3292; // w4
  int32_t v3293; // w5
  bool v3294; // w6
  bool v3295; // w7
  WarBoardSquareIndexGroupMaster_o *v3296; // x20
  System_String_o *v3297; // x2
  System_String_o *v3298; // x3
  int32_t v3299; // w4
  int32_t v3300; // w5
  bool v3301; // w6
  bool v3302; // w7
  WarBoardActionTrendGroupMaster_o *v3303; // x20
  System_String_o *v3304; // x2
  System_String_o *v3305; // x3
  int32_t v3306; // w4
  int32_t v3307; // w5
  bool v3308; // w6
  bool v3309; // w7
  WarBoardRatingOffsetGroupMaster_o *v3310; // x20
  System_String_o *v3311; // x2
  System_String_o *v3312; // x3
  int32_t v3313; // w4
  int32_t v3314; // w5
  bool v3315; // w6
  bool v3316; // w7
  WarBoardReinforcementsMaster_o *v3317; // x20
  System_String_o *v3318; // x2
  System_String_o *v3319; // x3
  int32_t v3320; // w4
  int32_t v3321; // w5
  bool v3322; // w6
  bool v3323; // w7
  WarBoardStageReinforcementsMaster_o *v3324; // x20
  System_String_o *v3325; // x2
  System_String_o *v3326; // x3
  int32_t v3327; // w4
  int32_t v3328; // w5
  bool v3329; // w6
  bool v3330; // w7
  WarBoardFutureActionTrendMaster_o *v3331; // x20
  System_String_o *v3332; // x2
  System_String_o *v3333; // x3
  int32_t v3334; // w4
  int32_t v3335; // w5
  bool v3336; // w6
  bool v3337; // w7
  ServantProfilePushMaster_o *v3338; // x20
  System_String_o *v3339; // x2
  System_String_o *v3340; // x3
  int32_t v3341; // w4
  int32_t v3342; // w5
  bool v3343; // w6
  bool v3344; // w7
  MapGimmickPathMaster_o *v3345; // x20
  System_String_o *v3346; // x2
  System_String_o *v3347; // x3
  int32_t v3348; // w4
  int32_t v3349; // w5
  bool v3350; // w6
  bool v3351; // w7
  MapGimmickPathReleaseMaster_o *v3352; // x20
  System_String_o *v3353; // x2
  System_String_o *v3354; // x3
  int32_t v3355; // w4
  int32_t v3356; // w5
  bool v3357; // w6
  bool v3358; // w7
  ServantOverwriteMaster_o *v3359; // x20
  System_String_o *v3360; // x2
  System_String_o *v3361; // x3
  int32_t v3362; // w4
  int32_t v3363; // w5
  bool v3364; // w6
  bool v3365; // w7
  IndividualityPolicyMaster_o *v3366; // x20
  System_String_o *v3367; // x2
  System_String_o *v3368; // x3
  int32_t v3369; // w4
  int32_t v3370; // w5
  bool v3371; // w6
  bool v3372; // w7
  IndividualityPersonalityMaster_o *v3373; // x20
  System_String_o *v3374; // x2
  System_String_o *v3375; // x3
  int32_t v3376; // w4
  int32_t v3377; // w5
  bool v3378; // w6
  bool v3379; // w7
  AttriMaster_o *v3380; // x20
  System_String_o *v3381; // x2
  System_String_o *v3382; // x3
  int32_t v3383; // w4
  int32_t v3384; // w5
  bool v3385; // w6
  bool v3386; // w7
  ServantVoicePatternMaster_o *v3387; // x20
  System_String_o *v3388; // x2
  System_String_o *v3389; // x3
  int32_t v3390; // w4
  int32_t v3391; // w5
  bool v3392; // w6
  bool v3393; // w7
  UserGameCommonMaster_o *v3394; // x20
  System_String_o *v3395; // x2
  System_String_o *v3396; // x3
  int32_t v3397; // w4
  int32_t v3398; // w5
  bool v3399; // w6
  bool v3400; // w7
  ServantPhotoMaster_o *v3401; // x20
  System_String_o *v3402; // x2
  System_String_o *v3403; // x3
  int32_t v3404; // w4
  int32_t v3405; // w5
  bool v3406; // w6
  bool v3407; // w7
  MasterPhotoMaster_o *v3408; // x20
  System_String_o *v3409; // x2
  System_String_o *v3410; // x3
  int32_t v3411; // w4
  int32_t v3412; // w5
  bool v3413; // w6
  bool v3414; // w7
  PhotoFrameMaster_o *v3415; // x20
  System_String_o *v3416; // x2
  System_String_o *v3417; // x3
  int32_t v3418; // w4
  int32_t v3419; // w5
  bool v3420; // w6
  bool v3421; // w7
  WarMessageMaster_o *v3422; // x20
  System_String_o *v3423; // x2
  System_String_o *v3424; // x3
  int32_t v3425; // w4
  int32_t v3426; // w5
  bool v3427; // w6
  bool v3428; // w7
  QuestAutoOrganizationAdjustMaster_o *v3429; // x20
  System_String_o *v3430; // x2
  System_String_o *v3431; // x3
  int32_t v3432; // w4
  int32_t v3433; // w5
  bool v3434; // w6
  bool v3435; // w7
  ExcludeMotionMaster_o *v3436; // x20
  System_String_o *v3437; // x2
  System_String_o *v3438; // x3
  int32_t v3439; // w4
  int32_t v3440; // w5
  bool v3441; // w6
  bool v3442; // w7
  UserInterruptionQuestMaster_o *v3443; // x20
  System_String_o *v3444; // x2
  System_String_o *v3445; // x3
  int32_t v3446; // w4
  int32_t v3447; // w5
  bool v3448; // w6
  bool v3449; // w7
  ServantTransformMaster_o *v3450; // x20
  System_String_o *v3451; // x2
  System_String_o *v3452; // x3
  int32_t v3453; // w4
  int32_t v3454; // w5
  bool v3455; // w6
  bool v3456; // w7
  MapUpdateScheduleMaster_o *v3457; // x20
  System_String_o *v3458; // x2
  System_String_o *v3459; // x3
  int32_t v3460; // w4
  int32_t v3461; // w5
  bool v3462; // w6
  bool v3463; // w7
  QuestPhasePresentMaster_o *v3464; // x20
  System_String_o *v3465; // x2
  System_String_o *v3466; // x3
  int32_t v3467; // w4
  int32_t v3468; // w5
  bool v3469; // w6
  bool v3470; // w7
  UserAccountLinkageMaster_o *v3471; // x20
  System_String_o *v3472; // x2
  System_String_o *v3473; // x3
  int32_t v3474; // w4
  int32_t v3475; // w5
  bool v3476; // w6
  bool v3477; // w7
  MissionNaviTransitionMaster_o *v3478; // x20
  System_String_o *v3479; // x2
  System_String_o *v3480; // x3
  int32_t v3481; // w4
  int32_t v3482; // w5
  bool v3483; // w6
  bool v3484; // w7
  MissionNaviQuestMaster_o *v3485; // x20
  System_String_o *v3486; // x2
  System_String_o *v3487; // x3
  int32_t v3488; // w4
  int32_t v3489; // w5
  bool v3490; // w6
  bool v3491; // w7
  EventTradeGoodsMaster_o *v3492; // x20
  System_String_o *v3493; // x2
  System_String_o *v3494; // x3
  int32_t v3495; // w4
  int32_t v3496; // w5
  bool v3497; // w6
  bool v3498; // w7
  EventTradeStoreMaster_o *v3499; // x20
  System_String_o *v3500; // x2
  System_String_o *v3501; // x3
  int32_t v3502; // w4
  int32_t v3503; // w5
  bool v3504; // w6
  bool v3505; // w7
  EventTradePickupMaster_o *v3506; // x20
  System_String_o *v3507; // x2
  System_String_o *v3508; // x3
  int32_t v3509; // w4
  int32_t v3510; // w5
  bool v3511; // w6
  bool v3512; // w7
  UserEventTradeMaster_o *v3513; // x20
  System_String_o *v3514; // x2
  System_String_o *v3515; // x3
  int32_t v3516; // w4
  int32_t v3517; // w5
  bool v3518; // w6
  bool v3519; // w7
  PaymentHistoryMaster_o *v3520; // x20
  System_String_o *v3521; // x2
  System_String_o *v3522; // x3
  int32_t v3523; // w4
  int32_t v3524; // w5
  bool v3525; // w6
  bool v3526; // w7
  UserExternalPaymentStoneMaster_o *v3527; // x20
  System_String_o *v3528; // x2
  System_String_o *v3529; // x3
  int32_t v3530; // w4
  int32_t v3531; // w5
  bool v3532; // w6
  bool v3533; // w7
  QuestPhaseIndividualityMaster_o *v3534; // x20
  System_String_o *v3535; // x2
  System_String_o *v3536; // x3
  int32_t v3537; // w4
  int32_t v3538; // w5
  bool v3539; // w6
  bool v3540; // w7
  ViewGachaFeaturedServantMaster_o *v3541; // x20
  System_String_o *v3542; // x2
  System_String_o *v3543; // x3
  int32_t v3544; // w4
  int32_t v3545; // w5
  bool v3546; // w6
  bool v3547; // w7
  UserGachaPickupCollateralMaster_o *v3548; // x20
  System_String_o *v3549; // x2
  System_String_o *v3550; // x3
  int32_t v3551; // w4
  int32_t v3552; // w5
  bool v3553; // w6
  bool v3554; // w7
  GachaPickupCollateralMaster_o *v3555; // x20
  System_String_o *v3556; // x2
  System_String_o *v3557; // x3
  int32_t v3558; // w4
  int32_t v3559; // w5
  bool v3560; // w6
  bool v3561; // w7
  GachaPickupCollateralGroupMaster_o *v3562; // x20
  System_String_o *v3563; // x2
  System_String_o *v3564; // x3
  int32_t v3565; // w4
  int32_t v3566; // w5
  bool v3567; // w6
  bool v3568; // w7
  BattlePointMaster_o *v3569; // x20
  System_String_o *v3570; // x2
  System_String_o *v3571; // x3
  int32_t v3572; // w4
  int32_t v3573; // w5
  bool v3574; // w6
  bool v3575; // w7
  BattlePointPhaseMaster_o *v3576; // x20
  System_String_o *v3577; // x2
  System_String_o *v3578; // x3
  int32_t v3579; // w4
  int32_t v3580; // w5
  bool v3581; // w6
  bool v3582; // w7
  ServantBattlePointMaster_o *v3583; // x20
  System_String_o *v3584; // x2
  System_String_o *v3585; // x3
  int32_t v3586; // w4
  int32_t v3587; // w5
  bool v3588; // w6
  bool v3589; // w7
  EffectMovieMaster_o *v3590; // x20
  System_String_o *v3591; // x2
  System_String_o *v3592; // x3
  int32_t v3593; // w4
  int32_t v3594; // w5
  bool v3595; // w6
  bool v3596; // w7
  PaymentLimitMaster_o *v3597; // x20
  System_String_o *v3598; // x2
  System_String_o *v3599; // x3
  int32_t v3600; // w4
  int32_t v3601; // w5
  bool v3602; // w6
  bool v3603; // w7
  UserPaymentLimitMaster_o *v3604; // x20
  System_String_o *v3605; // x2
  System_String_o *v3606; // x3
  int32_t v3607; // w4
  int32_t v3608; // w5
  bool v3609; // w6
  bool v3610; // w7
  RoadmapMaster_o *v3611; // x20
  System_String_o *v3612; // x2
  System_String_o *v3613; // x3
  int32_t v3614; // w4
  int32_t v3615; // w5
  bool v3616; // w6
  bool v3617; // w7
  UserRecommendSupportMaster_o *v3618; // x20
  System_String_o *v3619; // x2
  System_String_o *v3620; // x3
  int32_t v3621; // w4
  int32_t v3622; // w5
  bool v3623; // w6
  bool v3624; // w7
  RecommendSupportQuestMaster_o *v3625; // x20
  System_String_o *v3626; // x2
  System_String_o *v3627; // x3
  int32_t v3628; // w4
  int32_t v3629; // w5
  bool v3630; // w6
  bool v3631; // w7
  RecommendAdviceMessageMaster_o *v3632; // x20
  System_String_o *v3633; // x2
  System_String_o *v3634; // x3
  int32_t v3635; // w4
  int32_t v3636; // w5
  bool v3637; // w6
  bool v3638; // w7
  UserRecommendFollowerMaster_o *v3639; // x20
  System_String_o *v3640; // x2
  System_String_o *v3641; // x3
  int32_t v3642; // w4
  int32_t v3643; // w5
  bool v3644; // w6
  bool v3645; // w7
  ItemDropEfficiencyMaster_o *v3646; // x20
  System_String_o *v3647; // x2
  System_String_o *v3648; // x3
  int32_t v3649; // w4
  int32_t v3650; // w5
  bool v3651; // w6
  bool v3652; // w7
  BlankEarthGimmickAddMaster_o *v3653; // x20
  System_String_o *v3654; // x2
  System_String_o *v3655; // x3
  int32_t v3656; // w4
  int32_t v3657; // w5
  bool v3658; // w6
  bool v3659; // w7
  WarReleaseMaster_o *v3660; // x20
  System_String_o *v3661; // x2
  System_String_o *v3662; // x3
  int32_t v3663; // w4
  int32_t v3664; // w5
  bool v3665; // w6
  bool v3666; // w7
  SelectBonusBaseMaster_o *v3667; // x20
  System_String_o *v3668; // x2
  System_String_o *v3669; // x3
  int32_t v3670; // w4
  int32_t v3671; // w5
  bool v3672; // w6
  bool v3673; // w7
  SelectBonusMaster_o *v3674; // x20
  System_String_o *v3675; // x2
  System_String_o *v3676; // x3
  int32_t v3677; // w4
  int32_t v3678; // w5
  bool v3679; // w6
  bool v3680; // w7
  MyroomServantSpecialImageMaster_o *v3681; // x20
  System_String_o *v3682; // x2
  System_String_o *v3683; // x3
  int32_t v3684; // w4
  int32_t v3685; // w5
  bool v3686; // w6
  bool v3687; // w7
  ShopResetMaster_o *v3688; // x20
  System_String_o *v3689; // x2
  System_String_o *v3690; // x3
  int32_t v3691; // w4
  int32_t v3692; // w5
  bool v3693; // w6
  bool v3694; // w7
  NpcServantDisplayTypeDetailMaster_o *v3695; // x20
  System_String_o *v3696; // x2
  System_String_o *v3697; // x3
  int32_t v3698; // w4
  int32_t v3699; // w5
  bool v3700; // w6
  bool v3701; // w7
  FriendshipServantMaster_o *v3702; // x20
  System_String_o *v3703; // x2
  System_String_o *v3704; // x3
  int32_t v3705; // w4
  int32_t v3706; // w5
  bool v3707; // w6
  bool v3708; // w7
  ExchangeSvtCoinGivenNumMaster_o *v3709; // x20
  System_String_o *v3710; // x2
  System_String_o *v3711; // x3
  int32_t v3712; // w4
  int32_t v3713; // w5
  bool v3714; // w6
  bool v3715; // w7
  ChaldeaGatePickupMaster_o *v3716; // x20
  System_String_o *v3717; // x2
  System_String_o *v3718; // x3
  int32_t v3719; // w4
  int32_t v3720; // w5
  bool v3721; // w6
  bool v3722; // w7
  WarGroupIgnoreMaster_o *v3723; // x20
  System_String_o *v3724; // x2
  System_String_o *v3725; // x3
  int32_t v3726; // w4
  int32_t v3727; // w5
  bool v3728; // w6
  bool v3729; // w7
  ImagePartsGroupMaster_o *v3730; // x20
  System_String_o *v3731; // x2
  System_String_o *v3732; // x3
  int32_t v3733; // w4
  int32_t v3734; // w5
  bool v3735; // w6
  bool v3736; // w7
  UserImagePartsGroupMaster_o *v3737; // x20
  System_String_o *v3738; // x2
  System_String_o *v3739; // x3
  int32_t v3740; // w4
  int32_t v3741; // w5
  bool v3742; // w6
  bool v3743; // w7
  MissionItemDisplayMaster_o *v3744; // x20
  System_String_o *v3745; // x2
  System_String_o *v3746; // x3
  int32_t v3747; // w4
  int32_t v3748; // w5
  bool v3749; // w6
  bool v3750; // w7
  QuestUseItemGroupMaster_o *v3751; // x20
  System_String_o *v3752; // x2
  System_String_o *v3753; // x3
  int32_t v3754; // w4
  int32_t v3755; // w5
  bool v3756; // w6
  bool v3757; // w7
  QuestUseItemPickupMaster_o *v3758; // x20
  System_String_o *v3759; // x2
  System_String_o *v3760; // x3
  int32_t v3761; // w4
  int32_t v3762; // w5
  bool v3763; // w6
  bool v3764; // w7
  UserEventItemLinkSvtMaster_o *v3765; // x20
  System_String_o *v3766; // x2
  System_String_o *v3767; // x3
  int32_t v3768; // w4
  int32_t v3769; // w5
  bool v3770; // w6
  bool v3771; // w7
  QuestHintOverwriteMaster_o *v3772; // x20
  System_String_o *v3773; // x2
  System_String_o *v3774; // x3
  int32_t v3775; // w4
  int32_t v3776; // w5
  bool v3777; // w6
  bool v3778; // w7
  ReachedWaveInfoMaster_o *v3779; // x20
  System_String_o *v3780; // x2
  System_String_o *v3781; // x3
  int32_t v3782; // w4
  int32_t v3783; // w5
  bool v3784; // w6
  bool v3785; // w7
  GalleryMaster_o *v3786; // x20
  System_String_o *v3787; // x2
  System_String_o *v3788; // x3
  int32_t v3789; // w4
  int32_t v3790; // w5
  bool v3791; // w6
  bool v3792; // w7
  GalleryResourceMaster_o *v3793; // x20
  System_String_o *v3794; // x2
  System_String_o *v3795; // x3
  int32_t v3796; // w4
  int32_t v3797; // w5
  bool v3798; // w6
  bool v3799; // w7
  ServantSkillAddMaster_o *v3800; // x20
  System_String_o *v3801; // x2
  System_String_o *v3802; // x3
  int32_t v3803; // w4
  int32_t v3804; // w5
  bool v3805; // w6
  bool v3806; // w7
  GalleryFolderReleaseMaster_o *v3807; // x20
  System_String_o *v3808; // x2
  System_String_o *v3809; // x3
  int32_t v3810; // w4
  int32_t v3811; // w5
  bool v3812; // w6
  bool v3813; // w7
  UserSvtFirstGetTimeMaster_o *v3814; // x20
  System_String_o *v3815; // x2
  System_String_o *v3816; // x3
  int32_t v3817; // w4
  int32_t v3818; // w5
  bool v3819; // w6
  bool v3820; // w7
  QuestExtensionMaster_o *v3821; // x20
  System_String_o *v3822; // x2
  System_String_o *v3823; // x3
  int32_t v3824; // w4
  int32_t v3825; // w5
  bool v3826; // w6
  bool v3827; // w7
  UserServantGrandMaster_o *v3828; // x20
  System_String_o *v3829; // x2
  System_String_o *v3830; // x3
  int32_t v3831; // w4
  int32_t v3832; // w5
  bool v3833; // w6
  bool v3834; // w7
  GrandGraphMaster_o *v3835; // x20
  System_String_o *v3836; // x2
  System_String_o *v3837; // x3
  int32_t v3838; // w4
  int32_t v3839; // w5
  bool v3840; // w6
  bool v3841; // w7
  GrandGraphDetailMaster_o *v3842; // x20
  System_String_o *v3843; // x2
  System_String_o *v3844; // x3
  int32_t v3845; // w4
  int32_t v3846; // w5
  bool v3847; // w6
  bool v3848; // w7
  UserClassStatisticsMaster_o *v3849; // x20
  System_String_o *v3850; // x2
  System_String_o *v3851; // x3
  int32_t v3852; // w4
  int32_t v3853; // w5
  bool v3854; // w6
  bool v3855; // w7
  EventEquipSkillPartsMaster_o *v3856; // x20
  System_String_o *v3857; // x2
  System_String_o *v3858; // x3
  int32_t v3859; // w4
  int32_t v3860; // w5
  bool v3861; // w6
  bool v3862; // w7
  MasterIndividualitySelectMaster_o *v3863; // x20
  System_String_o *v3864; // x2
  System_String_o *v3865; // x3
  int32_t v3866; // w4
  int32_t v3867; // w5
  bool v3868; // w6
  bool v3869; // w7
  MyroomAddBgDiffMaster_o *v3870; // x20
  System_String_o *v3871; // x2
  System_String_o *v3872; // x3
  int32_t v3873; // w4
  int32_t v3874; // w5
  bool v3875; // w6
  bool v3876; // w7
  BattleScriptMaster_o *v3877; // x20
  System_String_o *v3878; // x2
  System_String_o *v3879; // x3
  int32_t v3880; // w4
  int32_t v3881; // w5
  bool v3882; // w6
  bool v3883; // w7
  DropAddMaster_o *v3884; // x20
  System_String_o *v3885; // x2
  System_String_o *v3886; // x3
  int32_t v3887; // w4
  int32_t v3888; // w5
  bool v3889; // w6
  bool v3890; // w7
  UserBgImagePartsGroupMaster_o *v3891; // x20
  System_String_o *v3892; // x2
  System_String_o *v3893; // x3
  int32_t v3894; // w4
  int32_t v3895; // w5
  bool v3896; // w6
  bool v3897; // w7
  EventJobMaster_o *v3898; // x20
  System_String_o *v3899; // x2
  System_String_o *v3900; // x3
  int32_t v3901; // w4
  int32_t v3902; // w5
  bool v3903; // w6
  bool v3904; // w7
  EventJobPassportMaster_o *v3905; // x20
  System_String_o *v3906; // x2
  System_String_o *v3907; // x3
  int32_t v3908; // w4
  int32_t v3909; // w5
  bool v3910; // w6
  bool v3911; // w7
  EventJobPointBonusMaster_o *v3912; // x20
  System_String_o *v3913; // x2
  System_String_o *v3914; // x3
  int32_t v3915; // w4
  int32_t v3916; // w5
  bool v3917; // w6
  bool v3918; // w7
  EventJobQuestMaster_o *v3919; // x20
  System_String_o *v3920; // x2
  System_String_o *v3921; // x3
  int32_t v3922; // w4
  int32_t v3923; // w5
  bool v3924; // w6
  bool v3925; // w7
  UserEventJobMaster_o *v3926; // x20
  System_String_o *v3927; // x2
  System_String_o *v3928; // x3
  int32_t v3929; // w4
  int32_t v3930; // w5
  bool v3931; // w6
  bool v3932; // w7
  UserEventMapGimmickMaster_o *v3933; // x20
  System_String_o *v3934; // x2
  System_String_o *v3935; // x3
  int32_t v3936; // w4
  int32_t v3937; // w5
  bool v3938; // w6
  bool v3939; // w7
  __int64 v3941; // x0

  if ( (byte_5938136 & 1) == 0 )
  {
    sub_21FFC50(&AccessaryMaster_TypeInfo);
    sub_21FFC50(&AdCheckPointMaster_TypeInfo);
    sub_21FFC50(&AiActMaster_TypeInfo);
    sub_21FFC50(&AiFieldMaster_TypeInfo);
    sub_21FFC50(&AiMaster_TypeInfo);
    sub_21FFC50(&AreaMaster_TypeInfo);
    sub_21FFC50(&AssistMaster_TypeInfo);
    sub_21FFC50(&AttriMaster_TypeInfo);
    sub_21FFC50(&AttriRelationMaster_TypeInfo);
    sub_21FFC50(&AuraEffectMaster_TypeInfo);
    sub_21FFC50(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_21FFC50(&BankShopMaster_TypeInfo);
    sub_21FFC50(&BannerAddMaster_TypeInfo);
    sub_21FFC50(&BannerMaster_TypeInfo);
    sub_21FFC50(&BattleBgMaster_TypeInfo);
    sub_21FFC50(&BattleMasterImageMaster_TypeInfo);
    sub_21FFC50(&BattleMaster_TypeInfo);
    sub_21FFC50(&BattleMessageGroupMaster_TypeInfo);
    sub_21FFC50(&BattleMessageMaster_TypeInfo);
    sub_21FFC50(&BattlePointMaster_TypeInfo);
    sub_21FFC50(&BattlePointPhaseMaster_TypeInfo);
    sub_21FFC50(&BattleScriptMaster_TypeInfo);
    sub_21FFC50(&BeforeBirthDayMaster_TypeInfo);
    sub_21FFC50(&BgmMaster_TypeInfo);
    sub_21FFC50(&BgmReleaseMaster_TypeInfo);
    sub_21FFC50(&BlankEarthGimmickAddMaster_TypeInfo);
    sub_21FFC50(&BlankEarthGimmickMaster_TypeInfo);
    sub_21FFC50(&BlankEarthSpotAddMaster_TypeInfo);
    sub_21FFC50(&BlankEarthSpotMaster_TypeInfo);
    sub_21FFC50(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_21FFC50(&BoardMessageMaster_TypeInfo);
    sub_21FFC50(&BoardMessageReleaseMaster_TypeInfo);
    sub_21FFC50(&BoostMaster_TypeInfo);
    sub_21FFC50(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_21FFC50(&BoxGachaBaseMaster_TypeInfo);
    sub_21FFC50(&BoxGachaHistoryMaster_TypeInfo);
    sub_21FFC50(&BoxGachaMaster_TypeInfo);
    sub_21FFC50(&BoxGachaTalkMaster_TypeInfo);
    sub_21FFC50(&BuffConvertMaster_TypeInfo);
    sub_21FFC50(&BuffMaster_TypeInfo);
    sub_21FFC50(&BuffTypeDetailMaster_TypeInfo);
    sub_21FFC50(&CampaignInfoMaster_TypeInfo);
    sub_21FFC50(&CardMaster_TypeInfo);
    sub_21FFC50(&ChaldeaGatePickupMaster_TypeInfo);
    sub_21FFC50(&ClassBoardBaseMaster_TypeInfo);
    sub_21FFC50(&ClassBoardClassMaster_TypeInfo);
    sub_21FFC50(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_21FFC50(&ClassBoardLineMaster_TypeInfo);
    sub_21FFC50(&ClassBoardLockMaster_TypeInfo);
    sub_21FFC50(&ClassBoardSquareMaster_TypeInfo);
    sub_21FFC50(&ClassRelationMaster_TypeInfo);
    sub_21FFC50(&ClassRelationOverwriteMaster_TypeInfo);
    sub_21FFC50(&ClosedMessageMaster_TypeInfo);
    sub_21FFC50(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_21FFC50(&CombineCostumeMaster_TypeInfo);
    sub_21FFC50(&CombineLimitGiftMaster_TypeInfo);
    sub_21FFC50(&CombineLimitMaster_TypeInfo);
    sub_21FFC50(&CombineLimitReleaseMaster_TypeInfo);
    sub_21FFC50(&CombineMaster_TypeInfo);
    sub_21FFC50(&CombineMaterialMaster_TypeInfo);
    sub_21FFC50(&CombineQpMaster_TypeInfo);
    sub_21FFC50(&CombineQpSvtEquipMaster_TypeInfo);
    sub_21FFC50(&CombineSkillMaster_TypeInfo);
    sub_21FFC50(&CombineTdMaster_TypeInfo);
    sub_21FFC50(&CommandCardRankParamMaster_TypeInfo);
    sub_21FFC50(&CommandCodeCommentMaster_TypeInfo);
    sub_21FFC50(&CommandCodeMaster_TypeInfo);
    sub_21FFC50(&CommandCodeSkillMaster_TypeInfo);
    sub_21FFC50(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_21FFC50(&CommandSpellMaster_TypeInfo);
    sub_21FFC50(&CommonConsumeMaster_TypeInfo);
    sub_21FFC50(&CommonReleaseMaster_TypeInfo);
    sub_21FFC50(&CommonRestrictionMaster_TypeInfo);
    sub_21FFC50(&CompleteMissionMaster_TypeInfo);
    sub_21FFC50(&ConstantLongMaster_TypeInfo);
    sub_21FFC50(&ConstantMaster_TypeInfo);
    sub_21FFC50(&ConstantStrMaster_TypeInfo);
    sub_21FFC50(&CvMaster_TypeInfo);
    sub_21FFC50(&DataMasterBase___TypeInfo);
    sub_21FFC50(&DialogMessageMaster_TypeInfo);
    sub_21FFC50(&DropAddMaster_TypeInfo);
    sub_21FFC50(&EffectMaster_TypeInfo);
    sub_21FFC50(&EffectMovieMaster_TypeInfo);
    sub_21FFC50(&EnemyMstBattleMaster_TypeInfo);
    sub_21FFC50(&EnemyMstMaster_TypeInfo);
    sub_21FFC50(&EquipAddMaster_TypeInfo);
    sub_21FFC50(&EquipExpMaster_TypeInfo);
    sub_21FFC50(&EquipImageMaster_TypeInfo);
    sub_21FFC50(&EquipMaster_TypeInfo);
    sub_21FFC50(&EquipSkillMaster_TypeInfo);
    sub_21FFC50(&EventAddMaster_TypeInfo);
    sub_21FFC50(&EventBoardGameCellMaster_TypeInfo);
    sub_21FFC50(&EventBoardGameTokenMaster_TypeInfo);
    sub_21FFC50(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_21FFC50(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_21FFC50(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_21FFC50(&EventBonusFilterMaster_TypeInfo);
    sub_21FFC50(&EventBoostItemUsedMaster_TypeInfo);
    sub_21FFC50(&EventBossStatusUiMaster_TypeInfo);
    sub_21FFC50(&EventBuddyPointMaster_TypeInfo);
    sub_21FFC50(&EventBulletinBoardMaster_TypeInfo);
    sub_21FFC50(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_21FFC50(&EventCampaignMaster_TypeInfo);
    sub_21FFC50(&EventCampaignReleaseMaster_TypeInfo);
    sub_21FFC50(&EventCombineCostumeMaster_TypeInfo);
    sub_21FFC50(&EventCombineMaster_TypeInfo);
    sub_21FFC50(&EventCommandAssistMaster_TypeInfo);
    sub_21FFC50(&EventConquestRewardMaster_TypeInfo);
    sub_21FFC50(&EventCooltimeRewardMaster_TypeInfo);
    sub_21FFC50(&EventDataLostBattleMaster_TypeInfo);
    sub_21FFC50(&EventDataLostBattleResetMaster_TypeInfo);
    sub_21FFC50(&EventDetailMaster_TypeInfo);
    sub_21FFC50(&EventDiggingBlockMaster_TypeInfo);
    sub_21FFC50(&EventDiggingMaster_TypeInfo);
    sub_21FFC50(&EventDiggingRewardMaster_TypeInfo);
    sub_21FFC50(&EventEquipSkillPartsMaster_TypeInfo);
    sub_21FFC50(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_21FFC50(&EventExpeditionMaster_TypeInfo);
    sub_21FFC50(&EventExpeditionPieceMaster_TypeInfo);
    sub_21FFC50(&EventFactoryMaster_TypeInfo);
    sub_21FFC50(&EventFatigueRecoveryMaster_TypeInfo);
    sub_21FFC50(&EventFilterMaster_TypeInfo);
    sub_21FFC50(&EventFortificationDetailMaster_TypeInfo);
    sub_21FFC50(&EventFortificationMaster_TypeInfo);
    sub_21FFC50(&EventFortificationSvtMaster_TypeInfo);
    sub_21FFC50(&EventGroupMaster_TypeInfo);
    sub_21FFC50(&EventItemDisplayGroupMaster_TypeInfo);
    sub_21FFC50(&EventItemDisplayMaster_TypeInfo);
    sub_21FFC50(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_21FFC50(&EventJobMaster_TypeInfo);
    sub_21FFC50(&EventJobPassportMaster_TypeInfo);
    sub_21FFC50(&EventJobPointBonusMaster_TypeInfo);
    sub_21FFC50(&EventJobQuestMaster_TypeInfo);
    sub_21FFC50(&EventLocationCampaignMaster_TypeInfo);
    sub_21FFC50(&EventMaster_TypeInfo);
    sub_21FFC50(&EventMissionActionAddMaster_TypeInfo);
    sub_21FFC50(&EventMissionActionMaster_TypeInfo);
    sub_21FFC50(&EventMissionAddMaster_TypeInfo);
    sub_21FFC50(&EventMissionCondDetailMaster_TypeInfo);
    sub_21FFC50(&EventMissionConditionMaster_TypeInfo);
    sub_21FFC50(&EventMissionGroupMaster_TypeInfo);
    sub_21FFC50(&EventMissionMaster_TypeInfo);
    sub_21FFC50(&EventMuralMaster_TypeInfo);
    sub_21FFC50(&EventPanelMapDetailMaster_TypeInfo);
    sub_21FFC50(&EventPanelMapMaster_TypeInfo);
    sub_21FFC50(&EventPanelScanMaster_TypeInfo);
    sub_21FFC50(&EventPanelSpotMaster_TypeInfo);
    sub_21FFC50(&EventPointActivityMaster_TypeInfo);
    sub_21FFC50(&EventPointBuffMaster_TypeInfo);
    sub_21FFC50(&EventPointGroupAddMaster_TypeInfo);
    sub_21FFC50(&EventPointGroupMaster_TypeInfo);
    sub_21FFC50(&EventPointMaster_TypeInfo);
    sub_21FFC50(&EventPointUpperMaster_TypeInfo);
    sub_21FFC50(&EventPointUpperReleaseMaster_TypeInfo);
    sub_21FFC50(&EventProgressValueMaster_TypeInfo);
    sub_21FFC50(&EventQuestCooltimeMaster_TypeInfo);
    sub_21FFC50(&EventQuestMaster_TypeInfo);
    sub_21FFC50(&EventRaceMaster_TypeInfo);
    sub_21FFC50(&EventRaceResultMaster_TypeInfo);
    sub_21FFC50(&EventRaidMaster_TypeInfo);
    sub_21FFC50(&EventRandomMissionMaster_TypeInfo);
    sub_21FFC50(&EventRecipeGiftMaster_TypeInfo);
    sub_21FFC50(&EventRecipeMaster_TypeInfo);
    sub_21FFC50(&EventRewardBgMaster_TypeInfo);
    sub_21FFC50(&EventRewardExtraMaster_TypeInfo);
    sub_21FFC50(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_21FFC50(&EventRewardMaster_TypeInfo);
    sub_21FFC50(&EventRewardSceneMaster_TypeInfo);
    sub_21FFC50(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_21FFC50(&EventRewardSetMaster_TypeInfo);
    sub_21FFC50(&EventScriptMaster_TypeInfo);
    sub_21FFC50(&EventScriptReleaseMaster_TypeInfo);
    sub_21FFC50(&EventServantFatigueMaster_TypeInfo);
    sub_21FFC50(&EventServantMaster_TypeInfo);
    sub_21FFC50(&EventServantPointRankMaster_TypeInfo);
    sub_21FFC50(&EventStatusMaster_TypeInfo);
    sub_21FFC50(&EventStatusQuestMaster_TypeInfo);
    sub_21FFC50(&EventSuperBossMaster_TypeInfo);
    sub_21FFC50(&EventTowerMaster_TypeInfo);
    sub_21FFC50(&EventTowerRewardMaster_TypeInfo);
    sub_21FFC50(&EventTradeGoodsMaster_TypeInfo);
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    sub_21FFC50(&EventTradeStoreMaster_TypeInfo);
    sub_21FFC50(&EventTutorialCondMaster_TypeInfo);
    sub_21FFC50(&EventTutorialMaster_TypeInfo);
    sub_21FFC50(&EventUiMaster_TypeInfo);
    sub_21FFC50(&EventUiReleaseMaster_TypeInfo);
    sub_21FFC50(&EventUiValueMaster_TypeInfo);
    sub_21FFC50(&EventVoicePlayMaster_TypeInfo);
    sub_21FFC50(&ExchangeSvtCoinGivenNumMaster_TypeInfo);
    sub_21FFC50(&ExcludeMotionMaster_TypeInfo);
    sub_21FFC50(&FieldMotionMaster_TypeInfo);
    sub_21FFC50(&FriendshipMaster_TypeInfo);
    sub_21FFC50(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_21FFC50(&FriendshipServantMaster_TypeInfo);
    sub_21FFC50(&FuncDispMaster_TypeInfo);
    sub_21FFC50(&FuncTypeDetailMaster_TypeInfo);
    sub_21FFC50(&FunctionCategoryMaster_TypeInfo);
    sub_21FFC50(&FunctionGroupMaster_TypeInfo);
    sub_21FFC50(&FunctionMaster_TypeInfo);
    sub_21FFC50(&GachaAdjustAddMaster_TypeInfo);
    sub_21FFC50(&GachaAppendMaster_TypeInfo);
    sub_21FFC50(&GachaBaseCollateralMaster_TypeInfo);
    sub_21FFC50(&GachaBehaviorMaster_TypeInfo);
    sub_21FFC50(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_21FFC50(&GachaBonusSelectMaster_TypeInfo);
    sub_21FFC50(&GachaDetailMaster_TypeInfo);
    sub_21FFC50(&GachaExtraGiftMaster_TypeInfo);
    sub_21FFC50(&GachaGroupMaster_TypeInfo);
    sub_21FFC50(&GachaImageMaster_TypeInfo);
    sub_21FFC50(&GachaMaster_TypeInfo);
    sub_21FFC50(&GachaPickupCollateralGroupMaster_TypeInfo);
    sub_21FFC50(&GachaPickupCollateralMaster_TypeInfo);
    sub_21FFC50(&GachaReleaseMaster_TypeInfo);
    sub_21FFC50(&GachaStoryAdjustMaster_TypeInfo);
    sub_21FFC50(&GachaSubMaster_TypeInfo);
    sub_21FFC50(&GachaTicketMaster_TypeInfo);
    sub_21FFC50(&GalleryFolderReleaseMaster_TypeInfo);
    sub_21FFC50(&GalleryMaster_TypeInfo);
    sub_21FFC50(&GalleryResourceMaster_TypeInfo);
    sub_21FFC50(&GiftAddMaster_TypeInfo);
    sub_21FFC50(&GiftDetailMaster_TypeInfo);
    sub_21FFC50(&GiftMaster_TypeInfo);
    sub_21FFC50(&GrandGraphDetailMaster_TypeInfo);
    sub_21FFC50(&GrandGraphMaster_TypeInfo);
    sub_21FFC50(&GuideMaster_TypeInfo);
    sub_21FFC50(&HeelPortraitMaster_TypeInfo);
    sub_21FFC50(&IllustratorMaster_TypeInfo);
    sub_21FFC50(&ImagePartsGroupMaster_TypeInfo);
    sub_21FFC50(&IndividualityPersonalityMaster_TypeInfo);
    sub_21FFC50(&IndividualityPolicyMaster_TypeInfo);
    sub_21FFC50(&ItemDropEfficiencyMaster_TypeInfo);
    sub_21FFC50(&ItemMaster_TypeInfo);
    sub_21FFC50(&ItemSelectMaster_TypeInfo);
    sub_21FFC50(&LoginQuestMaster_TypeInfo);
    sub_21FFC50(&MapButtonMaster_TypeInfo);
    sub_21FFC50(&MapCondMaster_TypeInfo);
    sub_21FFC50(&MapGimmickLayerMaster_TypeInfo);
    sub_21FFC50(&MapGimmickMaster_TypeInfo);
    sub_21FFC50(&MapGimmickPathMaster_TypeInfo);
    sub_21FFC50(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_21FFC50(&MapGimmickReleaseMaster_TypeInfo);
    sub_21FFC50(&MapLayerMaster_TypeInfo);
    sub_21FFC50(&MapMaster_TypeInfo);
    sub_21FFC50(&MapUpdateScheduleMaster_TypeInfo);
    sub_21FFC50(&MasterIndividualitySelectMaster_TypeInfo);
    sub_21FFC50(&MasterPhotoMaster_TypeInfo);
    sub_21FFC50(&MaterialFolderMaster_TypeInfo);
    sub_21FFC50(&MissionItemDisplayMaster_TypeInfo);
    sub_21FFC50(&MissionNaviQuestMaster_TypeInfo);
    sub_21FFC50(&MissionNaviTransitionMaster_TypeInfo);
    sub_21FFC50(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_21FFC50(&MstMissionMaster_TypeInfo);
    sub_21FFC50(&MyRoomAddMaster_TypeInfo);
    sub_21FFC50(&MyroomAddBgDiffMaster_TypeInfo);
    sub_21FFC50(&MyroomServantSpecialImageMaster_TypeInfo);
    sub_21FFC50(&NewsMaster_TypeInfo);
    sub_21FFC50(&NotEndEventMissionFixMaster_TypeInfo);
    sub_21FFC50(&NpcFollowerMaster_TypeInfo);
    sub_21FFC50(&NpcFollowerReleaseMaster_TypeInfo);
    sub_21FFC50(&NpcServantDisplayTypeDetailMaster_TypeInfo);
    sub_21FFC50(&NpcServantEquipMaster_TypeInfo);
    sub_21FFC50(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_21FFC50(&NpcServantFollowerMaster_TypeInfo);
    sub_21FFC50(&OpeningMovieMaster_TypeInfo);
    sub_21FFC50(&OtherUserGameMaster_TypeInfo);
    sub_21FFC50(&PartialMaintenanceMaster_TypeInfo);
    sub_21FFC50(&PaymentHistoryMaster_TypeInfo);
    sub_21FFC50(&PaymentLimitMaster_TypeInfo);
    sub_21FFC50(&PhotoFrameMaster_TypeInfo);
    sub_21FFC50(&PickupUserFollowerMaster_TypeInfo);
    sub_21FFC50(&PrivilegeMaster_TypeInfo);
    sub_21FFC50(&QuestAddMaster_TypeInfo);
    sub_21FFC50(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_21FFC50(&QuestBehaviorMaster_TypeInfo);
    sub_21FFC50(&QuestConsumeItemMaster_TypeInfo);
    sub_21FFC50(&QuestDateRangeMaster_TypeInfo);
    sub_21FFC50(&QuestExtensionMaster_TypeInfo);
    sub_21FFC50(&QuestGroupMaster_TypeInfo);
    sub_21FFC50(&QuestHintMaster_TypeInfo);
    sub_21FFC50(&QuestHintOverwriteMaster_TypeInfo);
    sub_21FFC50(&QuestMaster_TypeInfo);
    sub_21FFC50(&QuestMessageMaster_TypeInfo);
    sub_21FFC50(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_21FFC50(&QuestPhaseDetailMaster_TypeInfo);
    sub_21FFC50(&QuestPhaseIndividualityMaster_TypeInfo);
    sub_21FFC50(&QuestPhaseMaster_TypeInfo);
    sub_21FFC50(&QuestPhasePresentMaster_TypeInfo);
    sub_21FFC50(&QuestPickupMaster_TypeInfo);
    sub_21FFC50(&QuestRacePointMaster_TypeInfo);
    sub_21FFC50(&QuestRandomGroupMaster_TypeInfo);
    sub_21FFC50(&QuestReleaseMaster_TypeInfo);
    sub_21FFC50(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_21FFC50(&QuestResetMaster_TypeInfo);
    sub_21FFC50(&QuestRestrictionInfoMaster_TypeInfo);
    sub_21FFC50(&QuestRestrictionMaster_TypeInfo);
    sub_21FFC50(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_21FFC50(&QuestScriptMaster_TypeInfo);
    sub_21FFC50(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_21FFC50(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_21FFC50(&QuestScriptReleaseMaster_TypeInfo);
    sub_21FFC50(&QuestSpotReleaseMaster_TypeInfo);
    sub_21FFC50(&QuestUseItemGroupMaster_TypeInfo);
    sub_21FFC50(&QuestUseItemPickupMaster_TypeInfo);
    sub_21FFC50(&ReachedWaveInfoMaster_TypeInfo);
    sub_21FFC50(&RecommendAdviceMessageMaster_TypeInfo);
    sub_21FFC50(&RecommendSupportQuestMaster_TypeInfo);
    sub_21FFC50(&RecoverMaster_TypeInfo);
    sub_21FFC50(&ReprintStageMaster_TypeInfo);
    sub_21FFC50(&RestrictionBaseMaster_TypeInfo);
    sub_21FFC50(&RestrictionMaster_TypeInfo);
    sub_21FFC50(&RestrictionMessageMaster_TypeInfo);
    sub_21FFC50(&RestrictionSlotDetailMaster_TypeInfo);
    sub_21FFC50(&RestrictionSlotMaster_TypeInfo);
    sub_21FFC50(&RestrictionWholeMaster_TypeInfo);
    sub_21FFC50(&RoadmapMaster_TypeInfo);
    sub_21FFC50(&SelectBonusBaseMaster_TypeInfo);
    sub_21FFC50(&SelectBonusMaster_TypeInfo);
    sub_21FFC50(&ServantAddMaster_TypeInfo);
    sub_21FFC50(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_21FFC50(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_21FFC50(&ServantBattlePointMaster_TypeInfo);
    sub_21FFC50(&ServantCardAddMaster_TypeInfo);
    sub_21FFC50(&ServantCardMaster_TypeInfo);
    sub_21FFC50(&ServantChangeMaster_TypeInfo);
    sub_21FFC50(&ServantClassMaster_TypeInfo);
    sub_21FFC50(&ServantCollectionMaster_TypeInfo);
    sub_21FFC50(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_21FFC50(&ServantCommentAddMaster_TypeInfo);
    sub_21FFC50(&ServantCommentMaster_TypeInfo);
    sub_21FFC50(&ServantCostumeMaster_TypeInfo);
    sub_21FFC50(&ServantCostumeReleaseMaster_TypeInfo);
    sub_21FFC50(&ServantExceedMaster_TypeInfo);
    sub_21FFC50(&ServantExpMaster_TypeInfo);
    sub_21FFC50(&ServantFilterMaster_TypeInfo);
    sub_21FFC50(&ServantFlagMaster_TypeInfo);
    sub_21FFC50(&ServantFlagReleaseMaster_TypeInfo);
    sub_21FFC50(&ServantGroupMaster_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    sub_21FFC50(&ServantLimitAddMaster_TypeInfo);
    sub_21FFC50(&ServantLimitImageMaster_TypeInfo);
    sub_21FFC50(&ServantLimitMaster_TypeInfo);
    sub_21FFC50(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_21FFC50(&ServantLvDetailMaster_TypeInfo);
    sub_21FFC50(&ServantMaster_TypeInfo);
    sub_21FFC50(&ServantMaterialFolderMaster_TypeInfo);
    sub_21FFC50(&ServantOverwriteMaster_TypeInfo);
    sub_21FFC50(&ServantPassiveSkillMaster_TypeInfo);
    sub_21FFC50(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_21FFC50(&ServantPhotoMaster_TypeInfo);
    sub_21FFC50(&ServantProfileMaster_TypeInfo);
    sub_21FFC50(&ServantProfilePushMaster_TypeInfo);
    sub_21FFC50(&ServantRarityMaster_TypeInfo);
    sub_21FFC50(&ServantScriptAddMaster_TypeInfo);
    sub_21FFC50(&ServantScriptMaster_TypeInfo);
    sub_21FFC50(&ServantScriptMultipleMaster_TypeInfo);
    sub_21FFC50(&ServantSkillAddMaster_TypeInfo);
    sub_21FFC50(&ServantSkillMaster_TypeInfo);
    sub_21FFC50(&ServantSkillReleaseMaster_TypeInfo);
    sub_21FFC50(&ServantTransformMaster_TypeInfo);
    sub_21FFC50(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_21FFC50(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_21FFC50(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_21FFC50(&ServantTreasureDvcMaster_TypeInfo);
    sub_21FFC50(&ServantVoiceMaster_TypeInfo);
    sub_21FFC50(&ServantVoicePatternMaster_TypeInfo);
    sub_21FFC50(&ServantVoiceRelationMaster_TypeInfo);
    sub_21FFC50(&SetItemMaster_TypeInfo);
    sub_21FFC50(&ShopActionMaster_TypeInfo);
    sub_21FFC50(&ShopAddMaster_TypeInfo);
    sub_21FFC50(&ShopDailyMaster_TypeInfo);
    sub_21FFC50(&ShopDetailMaster_TypeInfo);
    sub_21FFC50(&ShopGroupMaster_TypeInfo);
    sub_21FFC50(&ShopMaster_TypeInfo);
    sub_21FFC50(&ShopReleaseMaster_TypeInfo);
    sub_21FFC50(&ShopResetMaster_TypeInfo);
    sub_21FFC50(&ShopScriptMaster_TypeInfo);
    sub_21FFC50(&SkillAddMaster_TypeInfo);
    sub_21FFC50(&SkillDetailMaster_TypeInfo);
    sub_21FFC50(&SkillGroupMaster_TypeInfo);
    sub_21FFC50(&SkillGroupOverwriteMaster_TypeInfo);
    sub_21FFC50(&SkillIndividualityMaster_TypeInfo);
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    sub_21FFC50(&SkillMaster_TypeInfo);
    sub_21FFC50(&SpotAddMaster_TypeInfo);
    sub_21FFC50(&SpotImageMaster_TypeInfo);
    sub_21FFC50(&SpotLayerMaster_TypeInfo);
    sub_21FFC50(&SpotMaster_TypeInfo);
    sub_21FFC50(&SpotPathMaster_TypeInfo);
    sub_21FFC50(&SpotRoadMaster_TypeInfo);
    sub_21FFC50(&StaffPhotoCostumeMaster_TypeInfo);
    sub_21FFC50(&StaffPhotoMaster_TypeInfo);
    sub_21FFC50(&StageMaster_TypeInfo);
    sub_21FFC50(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_21FFC50(&StoneShopMaster_TypeInfo);
    sub_21FFC50(&SubEquipMaster_TypeInfo);
    sub_21FFC50(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_21FFC50(&SvtCoinMaster_TypeInfo);
    sub_21FFC50(&SvtMaterialTdMaster_TypeInfo);
    sub_21FFC50(&SvtMultiPortraitMaster_TypeInfo);
    sub_21FFC50(&TblFriendMaster_TypeInfo);
    sub_21FFC50(&TblUserMaster_TypeInfo);
    sub_21FFC50(&TelopMaster_TypeInfo);
    sub_21FFC50(&TerminalOverwriteMaster_TypeInfo);
    sub_21FFC50(&TipsBattleMaster_TypeInfo);
    sub_21FFC50(&TotalBoxGachaMaster_TypeInfo);
    sub_21FFC50(&TotalEventPointMaster_TypeInfo);
    sub_21FFC50(&TotalEventRaceMaster_TypeInfo);
    sub_21FFC50(&TotalEventRaidMaster_TypeInfo);
    sub_21FFC50(&TotalLoginMaster_TypeInfo);
    sub_21FFC50(&TreasureBoxGiftMaster_TypeInfo);
    sub_21FFC50(&TreasureBoxMaster_TypeInfo);
    sub_21FFC50(&TreasureBoxTalkMaster_TypeInfo);
    sub_21FFC50(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_21FFC50(&TreasureDvcDetailMaster_TypeInfo);
    sub_21FFC50(&TreasureDvcLvMaster_TypeInfo);
    sub_21FFC50(&TreasureDvcMaster_TypeInfo);
    sub_21FFC50(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_21FFC50(&UserAccessaryMaster_TypeInfo);
    sub_21FFC50(&UserAccountLinkageMaster_TypeInfo);
    sub_21FFC50(&UserBgImagePartsGroupMaster_TypeInfo);
    sub_21FFC50(&UserBlacklistMaster_TypeInfo);
    sub_21FFC50(&UserBoxGachaMaster_TypeInfo);
    sub_21FFC50(&UserClassBoardSquareMaster_TypeInfo);
    sub_21FFC50(&UserClassStatisticsMaster_TypeInfo);
    sub_21FFC50(&UserCoinRoomMaster_TypeInfo);
    sub_21FFC50(&UserCombineExpMaster_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_21FFC50(&UserCommandCodeMaster_TypeInfo);
    sub_21FFC50(&UserContinueMaster_TypeInfo);
    sub_21FFC50(&UserDeckMaster_TypeInfo);
    sub_21FFC50(&UserDeleteReservationMaster_TypeInfo);
    sub_21FFC50(&UserEquipMaster_TypeInfo);
    sub_21FFC50(&UserEventAlloutBattleMaster_TypeInfo);
    sub_21FFC50(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_21FFC50(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_21FFC50(&UserEventDataLostMaster_TypeInfo);
    sub_21FFC50(&UserEventDeckMaster_TypeInfo);
    sub_21FFC50(&UserEventDiggingMaster_TypeInfo);
    sub_21FFC50(&UserEventExpeditionMaster_TypeInfo);
    sub_21FFC50(&UserEventFortificationMaster_TypeInfo);
    sub_21FFC50(&UserEventItemLinkSvtMaster_TypeInfo);
    sub_21FFC50(&UserEventJobMaster_TypeInfo);
    sub_21FFC50(&UserEventMapGimmickMaster_TypeInfo);
    sub_21FFC50(&UserEventMapMaster_TypeInfo);
    sub_21FFC50(&UserEventMaster_TypeInfo);
    sub_21FFC50(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_21FFC50(&UserEventMissionFixMaster_TypeInfo);
    sub_21FFC50(&UserEventMissionMaster_TypeInfo);
    sub_21FFC50(&UserEventPointMaster_TypeInfo);
    sub_21FFC50(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_21FFC50(&UserEventRaceMaster_TypeInfo);
    sub_21FFC50(&UserEventRaidMaster_TypeInfo);
    sub_21FFC50(&UserEventRandomMissionMaster_TypeInfo);
    sub_21FFC50(&UserEventServantFatigueMaster_TypeInfo);
    sub_21FFC50(&UserEventServantPointMaster_TypeInfo);
    sub_21FFC50(&UserEventSpotMaster_TypeInfo);
    sub_21FFC50(&UserEventTradeMaster_TypeInfo);
    sub_21FFC50(&UserExchangeSvtMaster_TypeInfo);
    sub_21FFC50(&UserExpMaster_TypeInfo);
    sub_21FFC50(&UserExternalPaymentStoneMaster_TypeInfo);
    sub_21FFC50(&UserFollowMaster_TypeInfo);
    sub_21FFC50(&UserFollowerMaster_TypeInfo);
    sub_21FFC50(&UserFormationMaster_TypeInfo);
    sub_21FFC50(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_21FFC50(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_21FFC50(&UserGachaDrawLogMaster_TypeInfo);
    sub_21FFC50(&UserGachaExtraCountMaster_TypeInfo);
    sub_21FFC50(&UserGachaHistoryMaster_TypeInfo);
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    sub_21FFC50(&UserGachaPickupCollateralMaster_TypeInfo);
    sub_21FFC50(&UserGameCommonMaster_TypeInfo);
    sub_21FFC50(&UserGameMaster_TypeInfo);
    sub_21FFC50(&UserHeelPortraitMaster_TypeInfo);
    sub_21FFC50(&UserImagePartsGroupMaster_TypeInfo);
    sub_21FFC50(&UserInterruptionQuestMaster_TypeInfo);
    sub_21FFC50(&UserItemMaster_TypeInfo);
    sub_21FFC50(&UserLoginMaster_TypeInfo);
    sub_21FFC50(&UserMaster_TypeInfo);
    sub_21FFC50(&UserNpcSvtRecordMaster_TypeInfo);
    sub_21FFC50(&UserPaymentLimitMaster_TypeInfo);
    sub_21FFC50(&UserPresentBoxMaster_TypeInfo);
    sub_21FFC50(&UserPresentHistoryMaster_TypeInfo);
    sub_21FFC50(&UserPrivilegeMaster_TypeInfo);
    sub_21FFC50(&UserQuestInfoMaster_TypeInfo);
    sub_21FFC50(&UserQuestMaster_TypeInfo);
    sub_21FFC50(&UserQuestRecordMaster_TypeInfo);
    sub_21FFC50(&UserQuestRouteMaster_TypeInfo);
    sub_21FFC50(&UserRecommendFollowerMaster_TypeInfo);
    sub_21FFC50(&UserRecommendSupportMaster_TypeInfo);
    sub_21FFC50(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_21FFC50(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_21FFC50(&UserServantCollectionMaster_TypeInfo);
    sub_21FFC50(&UserServantCommandCardMaster_TypeInfo);
    sub_21FFC50(&UserServantCommandCodeMaster_TypeInfo);
    sub_21FFC50(&UserServantGrandMaster_TypeInfo);
    sub_21FFC50(&UserServantLeaderMaster_TypeInfo);
    sub_21FFC50(&UserServantMaster_TypeInfo);
    sub_21FFC50(&UserServantStorageMaster_TypeInfo);
    sub_21FFC50(&UserServantVoicePlayedMaster_TypeInfo);
    sub_21FFC50(&UserShopDailyMaster_TypeInfo);
    sub_21FFC50(&UserShopMaster_TypeInfo);
    sub_21FFC50(&UserSubEquipMaster_TypeInfo);
    sub_21FFC50(&UserSuperBossMaster_TypeInfo);
    sub_21FFC50(&UserSupportDeckMaster_TypeInfo);
    sub_21FFC50(&UserSvtCoinMaster_TypeInfo);
    sub_21FFC50(&UserSvtFirstGetTimeMaster_TypeInfo);
    sub_21FFC50(&ViewEnemyMaster_TypeInfo);
    sub_21FFC50(&ViewGachaFeaturedServantMaster_TypeInfo);
    sub_21FFC50(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_21FFC50(&ViewQuestInfoMaster_TypeInfo);
    sub_21FFC50(&ViewWaveEnemyMaster_TypeInfo);
    sub_21FFC50(&VoiceClosedMessageMaster_TypeInfo);
    sub_21FFC50(&VoiceCondMaster_TypeInfo);
    sub_21FFC50(&VoiceMaster_TypeInfo);
    sub_21FFC50(&VoiceMaterialCondMaster_TypeInfo);
    sub_21FFC50(&VoicePlayCondMaster_TypeInfo);
    sub_21FFC50(&VoicePlayGroupMaster_TypeInfo);
    sub_21FFC50(&VoiceReleaseMaster_TypeInfo);
    sub_21FFC50(&WarAddMaster_TypeInfo);
    sub_21FFC50(&WarBoardAIMaster_TypeInfo);
    sub_21FFC50(&WarBoardActionPointClassMaster_TypeInfo);
    sub_21FFC50(&WarBoardActionPointMaster_TypeInfo);
    sub_21FFC50(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_21FFC50(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_21FFC50(&WarBoardActionTrendMaster_TypeInfo);
    sub_21FFC50(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_21FFC50(&WarBoardDataMaster_TypeInfo);
    sub_21FFC50(&WarBoardEffectMaster_TypeInfo);
    sub_21FFC50(&WarBoardEventMaster_TypeInfo);
    sub_21FFC50(&WarBoardEventScriptMaster_TypeInfo);
    sub_21FFC50(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_21FFC50(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_21FFC50(&WarBoardItemMaster_TypeInfo);
    sub_21FFC50(&WarBoardMaster_TypeInfo);
    sub_21FFC50(&WarBoardMessageMaster_TypeInfo);
    sub_21FFC50(&WarBoardMessageScriptMaster_TypeInfo);
    sub_21FFC50(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_21FFC50(&WarBoardPartySkillMaster_TypeInfo);
    sub_21FFC50(&WarBoardQuestMaster_TypeInfo);
    sub_21FFC50(&WarBoardRatingBaseMaster_TypeInfo);
    sub_21FFC50(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_21FFC50(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_21FFC50(&WarBoardReinforcementsMaster_TypeInfo);
    sub_21FFC50(&WarBoardRoadMaster_TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_21FFC50(&WarBoardSquareMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageBossMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageDetailMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageLayoutMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageNpcMaster_TypeInfo);
    sub_21FFC50(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_21FFC50(&WarBoardStageWallMaster_TypeInfo);
    sub_21FFC50(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_21FFC50(&WarBoardTreasureMaster_TypeInfo);
    sub_21FFC50(&WarGroupIgnoreMaster_TypeInfo);
    sub_21FFC50(&WarGroupMaster_TypeInfo);
    sub_21FFC50(&WarMaster_TypeInfo);
    sub_21FFC50(&WarMessageMaster_TypeInfo);
    sub_21FFC50(&WarQuestSelectionMaster_TypeInfo);
    sub_21FFC50(&WarReleaseMaster_TypeInfo);
    byte_5938136 = 1;
  }
  v1 = (DataMasterBase_array *)sub_21FFD10(DataMasterBase___TypeInfo, 562);
  v2 = (ServantMaster_o *)sub_21FFEBC(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0);
  if ( !v1 )
    sub_21FFECC(v3, v4);
  if ( v2 )
  {
    v3 = sub_21FFDA4(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  p_max_length = &v1->max_length;
  if ( !LODWORD(v1->max_length) )
    goto LABEL_1691;
  v1->m_Items[0] = (DataMasterBase_o *)v2;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v1->m_Items, (int32_t)v2, v5, v6, v7, v8, v9, v10);
  v13 = (ServantClassMaster_o *)sub_21FFEBC(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v13, 0);
  if ( v13 )
  {
    v3 = sub_21FFDA4(v13, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_1691;
  v1->m_Items[1] = (DataMasterBase_o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[1], (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (ServantCommentMaster_o *)sub_21FFEBC(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v20, 0);
  if ( v20 )
  {
    v3 = sub_21FFDA4(v20, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 2u )
    goto LABEL_1691;
  v1->m_Items[2] = (DataMasterBase_o *)v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[2], (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (ServantProfileMaster_o *)sub_21FFEBC(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v27, 0);
  if ( v27 )
  {
    v3 = sub_21FFDA4(v27, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_1691;
  v1->m_Items[3] = (DataMasterBase_o *)v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[3], (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (WarMaster_o *)sub_21FFEBC(WarMaster_TypeInfo);
  WarMaster___ctor(v34, 0);
  if ( v34 )
  {
    v3 = sub_21FFDA4(v34, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 4u )
    goto LABEL_1691;
  v1->m_Items[4] = (DataMasterBase_o *)v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[4], (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (UserMaster_o *)sub_21FFEBC(UserMaster_TypeInfo);
  UserMaster___ctor(v41, 0);
  if ( v41 )
  {
    v3 = sub_21FFDA4(v41, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 5u )
    goto LABEL_1691;
  v1->m_Items[5] = (DataMasterBase_o *)v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[5], (int32_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (UserGameMaster_o *)sub_21FFEBC(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v48, 0);
  if ( v48 )
  {
    v3 = sub_21FFDA4(v48, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 6u )
    goto LABEL_1691;
  v1->m_Items[6] = (DataMasterBase_o *)v48;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[6], (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = (TblUserMaster_o *)sub_21FFEBC(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v55, 0);
  if ( v55 )
  {
    v3 = sub_21FFDA4(v55, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_1691;
  v1->m_Items[7] = (DataMasterBase_o *)v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[7], (int32_t)v55, v56, v57, v58, v59, v60, v61);
  v62 = (UserItemMaster_o *)sub_21FFEBC(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v62, 0);
  if ( v62 )
  {
    v3 = sub_21FFDA4(v62, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 8u )
    goto LABEL_1691;
  v1->m_Items[8] = (DataMasterBase_o *)v62;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[8], (int32_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = (UserServantMaster_o *)sub_21FFEBC(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v69, 0);
  if ( v69 )
  {
    v3 = sub_21FFDA4(v69, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 9u )
    goto LABEL_1691;
  v1->m_Items[9] = (DataMasterBase_o *)v69;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[9], (int32_t)v69, v70, v71, v72, v73, v74, v75);
  v76 = (UserServantStorageMaster_o *)sub_21FFEBC(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v76, 0);
  if ( v76 )
  {
    v3 = sub_21FFDA4(v76, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xAu )
    goto LABEL_1691;
  v1->m_Items[10] = (DataMasterBase_o *)v76;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[10], (int32_t)v76, v77, v78, v79, v80, v81, v82);
  v83 = (UserAccessaryMaster_o *)sub_21FFEBC(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v83, 0);
  if ( v83 )
  {
    v3 = sub_21FFDA4(v83, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBu )
    goto LABEL_1691;
  v1->m_Items[11] = (DataMasterBase_o *)v83;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[11], (int32_t)v83, v84, v85, v86, v87, v88, v89);
  v90 = (UserQuestMaster_o *)sub_21FFEBC(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v90, 0);
  if ( v90 )
  {
    v3 = sub_21FFDA4(v90, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCu )
    goto LABEL_1691;
  v1->m_Items[12] = (DataMasterBase_o *)v90;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[12], (int32_t)v90, v91, v92, v93, v94, v95, v96);
  v97 = (BattleMaster_o *)sub_21FFEBC(BattleMaster_TypeInfo);
  BattleMaster___ctor(v97, 0);
  if ( v97 )
  {
    v3 = sub_21FFDA4(v97, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDu )
    goto LABEL_1691;
  v1->m_Items[13] = (DataMasterBase_o *)v97;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[13], (int32_t)v97, v98, v99, v100, v101, v102, v103);
  v104 = (OtherUserGameMaster_o *)sub_21FFEBC(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v104, 0);
  if ( v104 )
  {
    v3 = sub_21FFDA4(v104, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEu )
    goto LABEL_1691;
  v1->m_Items[14] = (DataMasterBase_o *)v104;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[14], (int32_t)v104, v105, v106, v107, v108, v109, v110);
  v111 = (TblFriendMaster_o *)sub_21FFEBC(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v111, 0);
  if ( v111 )
  {
    v3 = sub_21FFDA4(v111, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFF0) == 0 )
    goto LABEL_1691;
  v1->m_Items[15] = (DataMasterBase_o *)v111;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[15], (int32_t)v111, v112, v113, v114, v115, v116, v117);
  v118 = (AreaMaster_o *)sub_21FFEBC(AreaMaster_TypeInfo);
  AreaMaster___ctor(v118, 0);
  if ( v118 )
  {
    v3 = sub_21FFDA4(v118, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10u )
    goto LABEL_1691;
  v1->m_Items[16] = (DataMasterBase_o *)v118;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[16], (int32_t)v118, v119, v120, v121, v122, v123, v124);
  v125 = (ServantCardMaster_o *)sub_21FFEBC(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v125, 0);
  if ( v125 )
  {
    v3 = sub_21FFDA4(v125, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11u )
    goto LABEL_1691;
  v1->m_Items[17] = (DataMasterBase_o *)v125;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[17], (int32_t)v125, v126, v127, v128, v129, v130, v131);
  v132 = (EventMaster_o *)sub_21FFEBC(EventMaster_TypeInfo);
  EventMaster___ctor(v132, 0);
  if ( v132 )
  {
    v3 = sub_21FFDA4(v132, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12u )
    goto LABEL_1691;
  v1->m_Items[18] = (DataMasterBase_o *)v132;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[18], (int32_t)v132, v133, v134, v135, v136, v137, v138);
  v139 = (ItemMaster_o *)sub_21FFEBC(ItemMaster_TypeInfo);
  ItemMaster___ctor(v139, 0);
  if ( v139 )
  {
    v3 = sub_21FFDA4(v139, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13u )
    goto LABEL_1691;
  v1->m_Items[19] = (DataMasterBase_o *)v139;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[19], (int32_t)v139, v140, v141, v142, v143, v144, v145);
  v146 = (QuestMaster_o *)sub_21FFEBC(QuestMaster_TypeInfo);
  QuestMaster___ctor(v146, 0);
  if ( v146 )
  {
    v3 = sub_21FFDA4(v146, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14u )
    goto LABEL_1691;
  v1->m_Items[20] = (DataMasterBase_o *)v146;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[20], (int32_t)v146, v147, v148, v149, v150, v151, v152);
  v153 = (QuestAddMaster_o *)sub_21FFEBC(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v153, 0);
  if ( v153 )
  {
    v3 = sub_21FFDA4(v153, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15u )
    goto LABEL_1691;
  v1->m_Items[21] = (DataMasterBase_o *)v153;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[21], (int32_t)v153, v154, v155, v156, v157, v158, v159);
  v160 = (QuestReleaseMaster_o *)sub_21FFEBC(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v160, 0);
  if ( v160 )
  {
    v3 = sub_21FFDA4(v160, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16u )
    goto LABEL_1691;
  v1->m_Items[22] = (DataMasterBase_o *)v160;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[22], (int32_t)v160, v161, v162, v163, v164, v165, v166);
  v167 = (QuestDateRangeMaster_o *)sub_21FFEBC(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v167, 0);
  if ( v167 )
  {
    v3 = sub_21FFDA4(v167, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17u )
    goto LABEL_1691;
  v1->m_Items[23] = (DataMasterBase_o *)v167;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[23], (int32_t)v167, v168, v169, v170, v171, v172, v173);
  v174 = (QuestPhaseMaster_o *)sub_21FFEBC(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v174, 0);
  if ( v174 )
  {
    v3 = sub_21FFDA4(v174, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18u )
    goto LABEL_1691;
  v1->m_Items[24] = (DataMasterBase_o *)v174;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[24], (int32_t)v174, v175, v176, v177, v178, v179, v180);
  v181 = (QuestPhaseDetailMaster_o *)sub_21FFEBC(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v181, 0);
  if ( v181 )
  {
    v3 = sub_21FFDA4(v181, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19u )
    goto LABEL_1691;
  v1->m_Items[25] = (DataMasterBase_o *)v181;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[25], (int32_t)v181, v182, v183, v184, v185, v186, v187);
  v188 = (QuestGroupMaster_o *)sub_21FFEBC(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v188, 0);
  if ( v188 )
  {
    v3 = sub_21FFDA4(v188, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Au )
    goto LABEL_1691;
  v1->m_Items[26] = (DataMasterBase_o *)v188;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[26], (int32_t)v188, v189, v190, v191, v192, v193, v194);
  v195 = (QuestRandomGroupMaster_o *)sub_21FFEBC(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v195, 0);
  if ( v195 )
  {
    v3 = sub_21FFDA4(v195, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Bu )
    goto LABEL_1691;
  v1->m_Items[27] = (DataMasterBase_o *)v195;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[27], (int32_t)v195, v196, v197, v198, v199, v200, v201);
  v202 = (QuestConsumeItemMaster_o *)sub_21FFEBC(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v202, 0);
  if ( v202 )
  {
    v3 = sub_21FFDA4(v202, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Cu )
    goto LABEL_1691;
  v1->m_Items[28] = (DataMasterBase_o *)v202;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[28], (int32_t)v202, v203, v204, v205, v206, v207, v208);
  v209 = (QuestMessageMaster_o *)sub_21FFEBC(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v209, 0);
  if ( v209 )
  {
    v3 = sub_21FFDA4(v209, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Du )
    goto LABEL_1691;
  v1->m_Items[29] = (DataMasterBase_o *)v209;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[29], (int32_t)v209, v210, v211, v212, v213, v214, v215);
  v216 = (UserQuestInfoMaster_o *)sub_21FFEBC(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v216, 0);
  if ( v216 )
  {
    v3 = sub_21FFDA4(v216, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1Eu )
    goto LABEL_1691;
  v1->m_Items[30] = (DataMasterBase_o *)v216;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[30], (int32_t)v216, v217, v218, v219, v220, v221, v222);
  v223 = (UserQuestRecordMaster_o *)sub_21FFEBC(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v223, 0);
  if ( v223 )
  {
    v3 = sub_21FFDA4(v223, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFE0) == 0 )
    goto LABEL_1691;
  v1->m_Items[31] = (DataMasterBase_o *)v223;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[31], (int32_t)v223, v224, v225, v226, v227, v228, v229);
  v230 = (ViewQuestInfoMaster_o *)sub_21FFEBC(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v230, 0);
  if ( v230 )
  {
    v3 = sub_21FFDA4(v230, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20u )
    goto LABEL_1691;
  v1->m_Items[32] = (DataMasterBase_o *)v230;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[32], (int32_t)v230, v231, v232, v233, v234, v235, v236);
  v237 = (ViewEnemyMaster_o *)sub_21FFEBC(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v237, 0);
  if ( v237 )
  {
    v3 = sub_21FFDA4(v237, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21u )
    goto LABEL_1691;
  v1->m_Items[33] = (DataMasterBase_o *)v237;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[33], (int32_t)v237, v238, v239, v240, v241, v242, v243);
  v244 = (ViewQuestEnemyInfoMaster_o *)sub_21FFEBC(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v244, 0);
  if ( v244 )
  {
    v3 = sub_21FFDA4(v244, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22u )
    goto LABEL_1691;
  v1->m_Items[34] = (DataMasterBase_o *)v244;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[34], (int32_t)v244, v245, v246, v247, v248, v249, v250);
  v251 = (BlankEarthSpotMaster_o *)sub_21FFEBC(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v251, 0);
  if ( v251 )
  {
    v3 = sub_21FFDA4(v251, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x23u )
    goto LABEL_1691;
  v1->m_Items[35] = (DataMasterBase_o *)v251;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[35], (int32_t)v251, v252, v253, v254, v255, v256, v257);
  v258 = (BlankEarthSpotAddMaster_o *)sub_21FFEBC(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v258, 0);
  if ( v258 )
  {
    v3 = sub_21FFDA4(v258, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x24u )
    goto LABEL_1691;
  v1->m_Items[36] = (DataMasterBase_o *)v258;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[36], (int32_t)v258, v259, v260, v261, v262, v263, v264);
  v265 = (SpotMaster_o *)sub_21FFEBC(SpotMaster_TypeInfo);
  SpotMaster___ctor(v265, 0);
  if ( v265 )
  {
    v3 = sub_21FFDA4(v265, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x25u )
    goto LABEL_1691;
  v1->m_Items[37] = (DataMasterBase_o *)v265;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[37], (int32_t)v265, v266, v267, v268, v269, v270, v271);
  v272 = (SpotImageMaster_o *)sub_21FFEBC(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v272, 0);
  if ( v272 )
  {
    v3 = sub_21FFDA4(v272, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x26u )
    goto LABEL_1691;
  v1->m_Items[38] = (DataMasterBase_o *)v272;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[38], (int32_t)v272, v273, v274, v275, v276, v277, v278);
  v279 = (SpotRoadMaster_o *)sub_21FFEBC(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v279, 0);
  if ( v279 )
  {
    v3 = sub_21FFDA4(v279, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x27u )
    goto LABEL_1691;
  v1->m_Items[39] = (DataMasterBase_o *)v279;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[39], (int32_t)v279, v280, v281, v282, v283, v284, v285);
  v286 = (SpotPathMaster_o *)sub_21FFEBC(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v286, 0);
  if ( v286 )
  {
    v3 = sub_21FFDA4(v286, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x28u )
    goto LABEL_1691;
  v1->m_Items[40] = (DataMasterBase_o *)v286;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[40], (int32_t)v286, v287, v288, v289, v290, v291, v292);
  v293 = (SpotAddMaster_o *)sub_21FFEBC(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v293, 0);
  if ( v293 )
  {
    v3 = sub_21FFDA4(v293, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x29u )
    goto LABEL_1691;
  v1->m_Items[41] = (DataMasterBase_o *)v293;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[41], (int32_t)v293, v294, v295, v296, v297, v298, v299);
  v300 = (MapGimmickMaster_o *)sub_21FFEBC(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v300, 0);
  if ( v300 )
  {
    v3 = sub_21FFDA4(v300, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Au )
    goto LABEL_1691;
  v1->m_Items[42] = (DataMasterBase_o *)v300;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[42], (int32_t)v300, v301, v302, v303, v304, v305, v306);
  v307 = (GiftMaster_o *)sub_21FFEBC(GiftMaster_TypeInfo);
  GiftMaster___ctor(v307, 0);
  if ( v307 )
  {
    v3 = sub_21FFDA4(v307, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Bu )
    goto LABEL_1691;
  v1->m_Items[43] = (DataMasterBase_o *)v307;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[43], (int32_t)v307, v308, v309, v310, v311, v312, v313);
  v314 = (GiftAddMaster_o *)sub_21FFEBC(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v314, 0);
  if ( v314 )
  {
    v3 = sub_21FFDA4(v314, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Cu )
    goto LABEL_1691;
  v1->m_Items[44] = (DataMasterBase_o *)v314;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[44], (int32_t)v314, v315, v316, v317, v318, v319, v320);
  v321 = (ShopMaster_o *)sub_21FFEBC(ShopMaster_TypeInfo);
  ShopMaster___ctor(v321, 0);
  if ( v321 )
  {
    v3 = sub_21FFDA4(v321, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Du )
    goto LABEL_1691;
  v1->m_Items[45] = (DataMasterBase_o *)v321;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[45], (int32_t)v321, v322, v323, v324, v325, v326, v327);
  v328 = (ShopDailyMaster_o *)sub_21FFEBC(ShopDailyMaster_TypeInfo);
  ShopDailyMaster___ctor(v328, 0);
  if ( v328 )
  {
    v3 = sub_21FFDA4(v328, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Eu )
    goto LABEL_1691;
  v1->m_Items[46] = (DataMasterBase_o *)v328;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[46], (int32_t)v328, v329, v330, v331, v332, v333, v334);
  v335 = (StoneShopMaster_o *)sub_21FFEBC(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v335, 0);
  if ( v335 )
  {
    v3 = sub_21FFDA4(v335, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x2Fu )
    goto LABEL_1691;
  v1->m_Items[47] = (DataMasterBase_o *)v335;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[47], (int32_t)v335, v336, v337, v338, v339, v340, v341);
  v342 = (BankShopMaster_o *)sub_21FFEBC(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v342, 0);
  if ( v342 )
  {
    v3 = sub_21FFDA4(v342, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x30u )
    goto LABEL_1691;
  v1->m_Items[48] = (DataMasterBase_o *)v342;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[48], (int32_t)v342, v343, v344, v345, v346, v347, v348);
  v349 = (ShopScriptMaster_o *)sub_21FFEBC(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v349, 0);
  if ( v349 )
  {
    v3 = sub_21FFDA4(v349, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x31u )
    goto LABEL_1691;
  v1->m_Items[49] = (DataMasterBase_o *)v349;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[49], (int32_t)v349, v350, v351, v352, v353, v354, v355);
  v356 = (ShopAddMaster_o *)sub_21FFEBC(ShopAddMaster_TypeInfo);
  ShopAddMaster___ctor(v356, 0);
  if ( v356 )
  {
    v3 = sub_21FFDA4(v356, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x32u )
    goto LABEL_1691;
  v1->m_Items[50] = (DataMasterBase_o *)v356;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[50], (int32_t)v356, v357, v358, v359, v360, v361, v362);
  v363 = (StageMaster_o *)sub_21FFEBC(StageMaster_TypeInfo);
  StageMaster___ctor(v363, 0);
  if ( v363 )
  {
    v3 = sub_21FFDA4(v363, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x33u )
    goto LABEL_1691;
  v1->m_Items[51] = (DataMasterBase_o *)v363;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[51], (int32_t)v363, v364, v365, v366, v367, v368, v369);
  v370 = (ServantGroupMaster_o *)sub_21FFEBC(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v370, 0);
  if ( v370 )
  {
    v3 = sub_21FFDA4(v370, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x34u )
    goto LABEL_1691;
  v1->m_Items[52] = (DataMasterBase_o *)v370;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[52], (int32_t)v370, v371, v372, v373, v374, v375, v376);
  v377 = (ServantLimitMaster_o *)sub_21FFEBC(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v377, 0);
  if ( v377 )
  {
    v3 = sub_21FFDA4(v377, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x35u )
    goto LABEL_1691;
  v1->m_Items[53] = (DataMasterBase_o *)v377;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[53], (int32_t)v377, v378, v379, v380, v381, v382, v383);
  v384 = (ServantLimitAddMaster_o *)sub_21FFEBC(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v384, 0);
  if ( v384 )
  {
    v3 = sub_21FFDA4(v384, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x36u )
    goto LABEL_1691;
  v1->m_Items[54] = (DataMasterBase_o *)v384;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[54], (int32_t)v384, v385, v386, v387, v388, v389, v390);
  v391 = (ServantSkillMaster_o *)sub_21FFEBC(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v391, 0);
  if ( v391 )
  {
    v3 = sub_21FFDA4(v391, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x37u )
    goto LABEL_1691;
  v1->m_Items[55] = (DataMasterBase_o *)v391;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[55], (int32_t)v391, v392, v393, v394, v395, v396, v397);
  v398 = (ServantPassiveSkillMaster_o *)sub_21FFEBC(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v398, 0);
  if ( v398 )
  {
    v3 = sub_21FFDA4(v398, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x38u )
    goto LABEL_1691;
  v1->m_Items[56] = (DataMasterBase_o *)v398;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[56], (int32_t)v398, v399, v400, v401, v402, v403, v404);
  v405 = (BgmMaster_o *)sub_21FFEBC(BgmMaster_TypeInfo);
  BgmMaster___ctor(v405, 0);
  if ( v405 )
  {
    v3 = sub_21FFDA4(v405, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x39u )
    goto LABEL_1691;
  v1->m_Items[57] = (DataMasterBase_o *)v405;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[57], (int32_t)v405, v406, v407, v408, v409, v410, v411);
  v412 = (ServantScriptMaster_o *)sub_21FFEBC(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v412, 0);
  if ( v412 )
  {
    v3 = sub_21FFDA4(v412, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Au )
    goto LABEL_1691;
  v1->m_Items[58] = (DataMasterBase_o *)v412;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[58], (int32_t)v412, v413, v414, v415, v416, v417, v418);
  v419 = (NewsMaster_o *)sub_21FFEBC(NewsMaster_TypeInfo);
  NewsMaster___ctor(v419, 0);
  if ( v419 )
  {
    v3 = sub_21FFDA4(v419, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Bu )
    goto LABEL_1691;
  v1->m_Items[59] = (DataMasterBase_o *)v419;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[59], (int32_t)v419, v420, v421, v422, v423, v424, v425);
  v426 = (TelopMaster_o *)sub_21FFEBC(TelopMaster_TypeInfo);
  TelopMaster___ctor(v426, 0);
  if ( v426 )
  {
    v3 = sub_21FFDA4(v426, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Cu )
    goto LABEL_1691;
  v1->m_Items[60] = (DataMasterBase_o *)v426;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[60], (int32_t)v426, v427, v428, v429, v430, v431, v432);
  v433 = (UserExpMaster_o *)sub_21FFEBC(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v433, 0);
  if ( v433 )
  {
    v3 = sub_21FFDA4(v433, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Du )
    goto LABEL_1691;
  v1->m_Items[61] = (DataMasterBase_o *)v433;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[61], (int32_t)v433, v434, v435, v436, v437, v438, v439);
  v440 = (TreasureDvcMaster_o *)sub_21FFEBC(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v440, 0);
  if ( v440 )
  {
    v3 = sub_21FFDA4(v440, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x3Eu )
    goto LABEL_1691;
  v1->m_Items[62] = (DataMasterBase_o *)v440;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[62], (int32_t)v440, v441, v442, v443, v444, v445, v446);
  v447 = (ServantTreasureDvcMaster_o *)sub_21FFEBC(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v447, 0);
  if ( v447 )
  {
    v3 = sub_21FFDA4(v447, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFFC0) == 0 )
    goto LABEL_1691;
  v1->m_Items[63] = (DataMasterBase_o *)v447;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[63], (int32_t)v447, v448, v449, v450, v451, v452, v453);
  v454 = (SkillMaster_o *)sub_21FFEBC(SkillMaster_TypeInfo);
  SkillMaster___ctor(v454, 0);
  if ( v454 )
  {
    v3 = sub_21FFDA4(v454, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x40u )
    goto LABEL_1691;
  v1->m_Items[64] = (DataMasterBase_o *)v454;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[64], (int32_t)v454, v455, v456, v457, v458, v459, v460);
  v461 = (SkillLvMaster_o *)sub_21FFEBC(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v461, 0);
  if ( v461 )
  {
    v3 = sub_21FFDA4(v461, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x41u )
    goto LABEL_1691;
  v1->m_Items[65] = (DataMasterBase_o *)v461;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[65], (int32_t)v461, v462, v463, v464, v465, v466, v467);
  v468 = (SkillDetailMaster_o *)sub_21FFEBC(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v468, 0);
  if ( v468 )
  {
    v3 = sub_21FFDA4(v468, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x42u )
    goto LABEL_1691;
  v1->m_Items[66] = (DataMasterBase_o *)v468;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[66], (int32_t)v468, v469, v470, v471, v472, v473, v474);
  v475 = (CommandSpellMaster_o *)sub_21FFEBC(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v475, 0);
  if ( v475 )
  {
    v3 = sub_21FFDA4(v475, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x43u )
    goto LABEL_1691;
  v1->m_Items[67] = (DataMasterBase_o *)v475;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[67], (int32_t)v475, v476, v477, v478, v479, v480, v481);
  v482 = (EquipMaster_o *)sub_21FFEBC(EquipMaster_TypeInfo);
  EquipMaster___ctor(v482, 0);
  if ( v482 )
  {
    v3 = sub_21FFDA4(v482, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x44u )
    goto LABEL_1691;
  v1->m_Items[68] = (DataMasterBase_o *)v482;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[68], (int32_t)v482, v483, v484, v485, v486, v487, v488);
  v489 = (EquipExpMaster_o *)sub_21FFEBC(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v489, 0);
  if ( v489 )
  {
    v3 = sub_21FFDA4(v489, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x45u )
    goto LABEL_1691;
  v1->m_Items[69] = (DataMasterBase_o *)v489;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[69], (int32_t)v489, v490, v491, v492, v493, v494, v495);
  v496 = (EquipSkillMaster_o *)sub_21FFEBC(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v496, 0);
  if ( v496 )
  {
    v3 = sub_21FFDA4(v496, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x46u )
    goto LABEL_1691;
  v1->m_Items[70] = (DataMasterBase_o *)v496;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[70], (int32_t)v496, v497, v498, v499, v500, v501, v502);
  v503 = (SubEquipMaster_o *)sub_21FFEBC(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v503, 0);
  if ( v503 )
  {
    v3 = sub_21FFDA4(v503, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x47u )
    goto LABEL_1691;
  v1->m_Items[71] = (DataMasterBase_o *)v503;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[71], (int32_t)v503, v504, v505, v506, v507, v508, v509);
  v510 = (AccessaryMaster_o *)sub_21FFEBC(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v510, 0);
  if ( v510 )
  {
    v3 = sub_21FFDA4(v510, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x48u )
    goto LABEL_1691;
  v1->m_Items[72] = (DataMasterBase_o *)v510;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[72], (int32_t)v510, v511, v512, v513, v514, v515, v516);
  v517 = (UserPresentBoxMaster_o *)sub_21FFEBC(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v517, 0);
  if ( v517 )
  {
    v3 = sub_21FFDA4(v517, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x49u )
    goto LABEL_1691;
  v1->m_Items[73] = (DataMasterBase_o *)v517;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[73], (int32_t)v517, v518, v519, v520, v521, v522, v523);
  v524 = (UserDeckMaster_o *)sub_21FFEBC(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v524, 0);
  if ( v524 )
  {
    v3 = sub_21FFDA4(v524, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Au )
    goto LABEL_1691;
  v1->m_Items[74] = (DataMasterBase_o *)v524;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[74], (int32_t)v524, v525, v526, v527, v528, v529, v530);
  v531 = (UserSubEquipMaster_o *)sub_21FFEBC(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v531, 0);
  if ( v531 )
  {
    v3 = sub_21FFDA4(v531, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Bu )
    goto LABEL_1691;
  v1->m_Items[75] = (DataMasterBase_o *)v531;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[75], (int32_t)v531, v532, v533, v534, v535, v536, v537);
  v538 = (GachaMaster_o *)sub_21FFEBC(GachaMaster_TypeInfo);
  GachaMaster___ctor(v538, 0);
  if ( v538 )
  {
    v3 = sub_21FFDA4(v538, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Cu )
    goto LABEL_1691;
  v1->m_Items[76] = (DataMasterBase_o *)v538;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[76], (int32_t)v538, v539, v540, v541, v542, v543, v544);
  v545 = (GachaImageMaster_o *)sub_21FFEBC(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v545, 0);
  if ( v545 )
  {
    v3 = sub_21FFDA4(v545, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Du )
    goto LABEL_1691;
  v1->m_Items[77] = (DataMasterBase_o *)v545;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[77], (int32_t)v545, v546, v547, v548, v549, v550, v551);
  v552 = (UserGachaMaster_o *)sub_21FFEBC(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v552, 0);
  if ( v552 )
  {
    v3 = sub_21FFDA4(v552, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Eu )
    goto LABEL_1691;
  v1->m_Items[78] = (DataMasterBase_o *)v552;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[78], (int32_t)v552, v553, v554, v555, v556, v557, v558);
  v559 = (UserEquipMaster_o *)sub_21FFEBC(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v559, 0);
  if ( v559 )
  {
    v3 = sub_21FFDA4(v559, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x4Fu )
    goto LABEL_1691;
  v1->m_Items[79] = (DataMasterBase_o *)v559;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[79], (int32_t)v559, v560, v561, v562, v563, v564, v565);
  v566 = (UserServantCollectionMaster_o *)sub_21FFEBC(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v566, 0);
  if ( v566 )
  {
    v3 = sub_21FFDA4(v566, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x50u )
    goto LABEL_1691;
  v1->m_Items[80] = (DataMasterBase_o *)v566;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[80], (int32_t)v566, v567, v568, v569, v570, v571, v572);
  v573 = (FriendshipMaster_o *)sub_21FFEBC(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v573, 0);
  if ( v573 )
  {
    v3 = sub_21FFDA4(v573, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x51u )
    goto LABEL_1691;
  v1->m_Items[81] = (DataMasterBase_o *)v573;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[81], (int32_t)v573, v574, v575, v576, v577, v578, v579);
  v580 = (GachaTicketMaster_o *)sub_21FFEBC(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v580, 0);
  if ( v580 )
  {
    v3 = sub_21FFDA4(v580, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x52u )
    goto LABEL_1691;
  v1->m_Items[82] = (DataMasterBase_o *)v580;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[82], (int32_t)v580, v581, v582, v583, v584, v585, v586);
  v587 = (UserFormationMaster_o *)sub_21FFEBC(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v587, 0);
  if ( v587 )
  {
    v3 = sub_21FFDA4(v587, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x53u )
    goto LABEL_1691;
  v1->m_Items[83] = (DataMasterBase_o *)v587;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[83], (int32_t)v587, v588, v589, v590, v591, v592, v593);
  v594 = (FunctionMaster_o *)sub_21FFEBC(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v594, 0);
  if ( v594 )
  {
    v3 = sub_21FFDA4(v594, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x54u )
    goto LABEL_1691;
  v1->m_Items[84] = (DataMasterBase_o *)v594;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[84], (int32_t)v594, v595, v596, v597, v598, v599, v600);
  v601 = (BuffMaster_o *)sub_21FFEBC(BuffMaster_TypeInfo);
  BuffMaster___ctor(v601, 0);
  if ( v601 )
  {
    v3 = sub_21FFDA4(v601, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x55u )
    goto LABEL_1691;
  v1->m_Items[85] = (DataMasterBase_o *)v601;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[85], (int32_t)v601, v602, v603, v604, v605, v606, v607);
  v608 = (GachaReleaseMaster_o *)sub_21FFEBC(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v608, 0);
  if ( v608 )
  {
    v3 = sub_21FFDA4(v608, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x56u )
    goto LABEL_1691;
  v1->m_Items[86] = (DataMasterBase_o *)v608;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[86], (int32_t)v608, v609, v610, v611, v612, v613, v614);
  v615 = (CombineQpMaster_o *)sub_21FFEBC(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v615, 0);
  if ( v615 )
  {
    v3 = sub_21FFDA4(v615, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x57u )
    goto LABEL_1691;
  v1->m_Items[87] = (DataMasterBase_o *)v615;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[87], (int32_t)v615, v616, v617, v618, v619, v620, v621);
  v622 = (CombineMaterialMaster_o *)sub_21FFEBC(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v622, 0);
  if ( v622 )
  {
    v3 = sub_21FFDA4(v622, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x58u )
    goto LABEL_1691;
  v1->m_Items[88] = (DataMasterBase_o *)v622;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[88], (int32_t)v622, v623, v624, v625, v626, v627, v628);
  v629 = (EventCombineMaster_o *)sub_21FFEBC(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v629, 0);
  if ( v629 )
  {
    v3 = sub_21FFDA4(v629, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x59u )
    goto LABEL_1691;
  v1->m_Items[89] = (DataMasterBase_o *)v629;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[89], (int32_t)v629, v630, v631, v632, v633, v634, v635);
  v636 = (ServantExpMaster_o *)sub_21FFEBC(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v636, 0);
  if ( v636 )
  {
    v3 = sub_21FFDA4(v636, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Au )
    goto LABEL_1691;
  v1->m_Items[90] = (DataMasterBase_o *)v636;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[90], (int32_t)v636, v637, v638, v639, v640, v641, v642);
  v643 = (CombineSkillMaster_o *)sub_21FFEBC(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v643, 0);
  if ( v643 )
  {
    v3 = sub_21FFDA4(v643, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Bu )
    goto LABEL_1691;
  v1->m_Items[91] = (DataMasterBase_o *)v643;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[91], (int32_t)v643, v644, v645, v646, v647, v648, v649);
  v650 = (CombineTdMaster_o *)sub_21FFEBC(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v650, 0);
  if ( v650 )
  {
    v3 = sub_21FFDA4(v650, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Cu )
    goto LABEL_1691;
  v1->m_Items[92] = (DataMasterBase_o *)v650;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[92], (int32_t)v650, v651, v652, v653, v654, v655, v656);
  v657 = (EventQuestMaster_o *)sub_21FFEBC(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v657, 0);
  if ( v657 )
  {
    v3 = sub_21FFDA4(v657, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Du )
    goto LABEL_1691;
  v1->m_Items[93] = (DataMasterBase_o *)v657;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[93], (int32_t)v657, v658, v659, v660, v661, v662, v663);
  v664 = (EventCampaignMaster_o *)sub_21FFEBC(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v664, 0);
  if ( v664 )
  {
    v3 = sub_21FFDA4(v664, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Eu )
    goto LABEL_1691;
  v1->m_Items[94] = (DataMasterBase_o *)v664;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[94], (int32_t)v664, v665, v666, v667, v668, v669, v670);
  v671 = (IllustratorMaster_o *)sub_21FFEBC(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v671, 0);
  if ( v671 )
  {
    v3 = sub_21FFDA4(v671, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x5Fu )
    goto LABEL_1691;
  v1->m_Items[95] = (DataMasterBase_o *)v671;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[95], (int32_t)v671, v672, v673, v674, v675, v676, v677);
  v678 = (CvMaster_o *)sub_21FFEBC(CvMaster_TypeInfo);
  CvMaster___ctor(v678, 0);
  if ( v678 )
  {
    v3 = sub_21FFDA4(v678, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x60u )
    goto LABEL_1691;
  v1->m_Items[96] = (DataMasterBase_o *)v678;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[96], (int32_t)v678, v679, v680, v681, v682, v683, v684);
  v685 = (TreasureDvcLvMaster_o *)sub_21FFEBC(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v685, 0);
  if ( v685 )
  {
    v3 = sub_21FFDA4(v685, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x61u )
    goto LABEL_1691;
  v1->m_Items[97] = (DataMasterBase_o *)v685;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[97], (int32_t)v685, v686, v687, v688, v689, v690, v691);
  v692 = (TreasureDvcDetailMaster_o *)sub_21FFEBC(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v692, 0);
  if ( v692 )
  {
    v3 = sub_21FFDA4(v692, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x62u )
    goto LABEL_1691;
  v1->m_Items[98] = (DataMasterBase_o *)v692;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[98], (int32_t)v692, v693, v694, v695, v696, v697, v698);
  v699 = (UserFollowerMaster_o *)sub_21FFEBC(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v699, 0);
  if ( v699 )
  {
    v3 = sub_21FFDA4(v699, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x63u )
    goto LABEL_1691;
  v1->m_Items[99] = (DataMasterBase_o *)v699;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[99], (int32_t)v699, v700, v701, v702, v703, v704, v705);
  v706 = (NpcFollowerMaster_o *)sub_21FFEBC(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v706, 0);
  if ( v706 )
  {
    v3 = sub_21FFDA4(v706, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x64u )
    goto LABEL_1691;
  v1->m_Items[100] = (DataMasterBase_o *)v706;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[100], (int32_t)v706, v707, v708, v709, v710, v711, v712);
  v713 = (NpcServantFollowerMaster_o *)sub_21FFEBC(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v713, 0);
  if ( v713 )
  {
    v3 = sub_21FFDA4(v713, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x65u )
    goto LABEL_1691;
  v1->m_Items[101] = (DataMasterBase_o *)v713;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[101], (int32_t)v713, v714, v715, v716, v717, v718, v719);
  v720 = (UserEventMaster_o *)sub_21FFEBC(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v720, 0);
  if ( v720 )
  {
    v3 = sub_21FFDA4(v720, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x66u )
    goto LABEL_1691;
  v1->m_Items[102] = (DataMasterBase_o *)v720;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[102], (int32_t)v720, v721, v722, v723, v724, v725, v726);
  v727 = (UserShopMaster_o *)sub_21FFEBC(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v727, 0);
  if ( v727 )
  {
    v3 = sub_21FFDA4(v727, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x67u )
    goto LABEL_1691;
  v1->m_Items[103] = (DataMasterBase_o *)v727;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[103], (int32_t)v727, v728, v729, v730, v731, v732, v733);
  v734 = (UserShopDailyMaster_o *)sub_21FFEBC(UserShopDailyMaster_TypeInfo);
  UserShopDailyMaster___ctor(v734, 0);
  if ( v734 )
  {
    v3 = sub_21FFDA4(v734, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x68u )
    goto LABEL_1691;
  v1->m_Items[104] = (DataMasterBase_o *)v734;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[104], (int32_t)v734, v735, v736, v737, v738, v739, v740);
  v741 = (UserContinueMaster_o *)sub_21FFEBC(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v741, 0);
  if ( v741 )
  {
    v3 = sub_21FFDA4(v741, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x69u )
    goto LABEL_1691;
  v1->m_Items[105] = (DataMasterBase_o *)v741;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[105], (int32_t)v741, v742, v743, v744, v745, v746, v747);
  v748 = (ConstantMaster_o *)sub_21FFEBC(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v748, 0);
  if ( v748 )
  {
    v3 = sub_21FFDA4(v748, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Au )
    goto LABEL_1691;
  v1->m_Items[106] = (DataMasterBase_o *)v748;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[106], (int32_t)v748, v749, v750, v751, v752, v753, v754);
  v755 = (ConstantLongMaster_o *)sub_21FFEBC(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v755, 0);
  if ( v755 )
  {
    v3 = sub_21FFDA4(v755, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Bu )
    goto LABEL_1691;
  v1->m_Items[107] = (DataMasterBase_o *)v755;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[107], (int32_t)v755, v756, v757, v758, v759, v760, v761);
  v762 = (ConstantStrMaster_o *)sub_21FFEBC(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v762, 0);
  if ( v762 )
  {
    v3 = sub_21FFDA4(v762, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Cu )
    goto LABEL_1691;
  v1->m_Items[108] = (DataMasterBase_o *)v762;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[108], (int32_t)v762, v763, v764, v765, v766, v767, v768);
  v769 = (AiMaster_o *)sub_21FFEBC(AiMaster_TypeInfo);
  AiMaster___ctor(v769, 0);
  if ( v769 )
  {
    v3 = sub_21FFDA4(v769, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Du )
    goto LABEL_1691;
  v1->m_Items[109] = (DataMasterBase_o *)v769;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[109], (int32_t)v769, v770, v771, v772, v773, v774, v775);
  v776 = (AiActMaster_o *)sub_21FFEBC(AiActMaster_TypeInfo);
  AiActMaster___ctor(v776, 0);
  if ( v776 )
  {
    v3 = sub_21FFDA4(v776, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Eu )
    goto LABEL_1691;
  v1->m_Items[110] = (DataMasterBase_o *)v776;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[110], (int32_t)v776, v777, v778, v779, v780, v781, v782);
  v783 = (AttriRelationMaster_o *)sub_21FFEBC(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v783, 0);
  if ( v783 )
  {
    v3 = sub_21FFDA4(v783, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x6Fu )
    goto LABEL_1691;
  v1->m_Items[111] = (DataMasterBase_o *)v783;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[111], (int32_t)v783, v784, v785, v786, v787, v788, v789);
  v790 = (ClassRelationMaster_o *)sub_21FFEBC(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v790, 0);
  if ( v790 )
  {
    v3 = sub_21FFDA4(v790, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x70u )
    goto LABEL_1691;
  v1->m_Items[112] = (DataMasterBase_o *)v790;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[112], (int32_t)v790, v791, v792, v793, v794, v795, v796);
  v797 = (EffectMaster_o *)sub_21FFEBC(EffectMaster_TypeInfo);
  EffectMaster___ctor(v797, 0);
  if ( v797 )
  {
    v3 = sub_21FFDA4(v797, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x71u )
    goto LABEL_1691;
  v1->m_Items[113] = (DataMasterBase_o *)v797;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[113], (int32_t)v797, v798, v799, v800, v801, v802, v803);
  v804 = (EquipImageMaster_o *)sub_21FFEBC(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v804, 0);
  if ( v804 )
  {
    v3 = sub_21FFDA4(v804, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x72u )
    goto LABEL_1691;
  v1->m_Items[114] = (DataMasterBase_o *)v804;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[114], (int32_t)v804, v805, v806, v807, v808, v809, v810);
  v811 = (ServantVoiceMaster_o *)sub_21FFEBC(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v811, 0);
  if ( v811 )
  {
    v3 = sub_21FFDA4(v811, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x73u )
    goto LABEL_1691;
  v1->m_Items[115] = (DataMasterBase_o *)v811;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[115], (int32_t)v811, v812, v813, v814, v815, v816, v817);
  v818 = (CombineLimitMaster_o *)sub_21FFEBC(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v818, 0);
  if ( v818 )
  {
    v3 = sub_21FFDA4(v818, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x74u )
    goto LABEL_1691;
  v1->m_Items[116] = (DataMasterBase_o *)v818;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[116], (int32_t)v818, v819, v820, v821, v822, v823, v824);
  v825 = (CardMaster_o *)sub_21FFEBC(CardMaster_TypeInfo);
  CardMaster___ctor(v825, 0);
  if ( v825 )
  {
    v3 = sub_21FFDA4(v825, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x75u )
    goto LABEL_1691;
  v1->m_Items[117] = (DataMasterBase_o *)v825;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[117], (int32_t)v825, v826, v827, v828, v829, v830, v831);
  v832 = (CombineQpSvtEquipMaster_o *)sub_21FFEBC(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v832, 0);
  if ( v832 )
  {
    v3 = sub_21FFDA4(v832, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x76u )
    goto LABEL_1691;
  v1->m_Items[118] = (DataMasterBase_o *)v832;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[118], (int32_t)v832, v833, v834, v835, v836, v837, v838);
  v839 = (ServantRarityMaster_o *)sub_21FFEBC(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v839, 0);
  if ( v839 )
  {
    v3 = sub_21FFDA4(v839, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x77u )
    goto LABEL_1691;
  v1->m_Items[119] = (DataMasterBase_o *)v839;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[119], (int32_t)v839, v840, v841, v842, v843, v844, v845);
  v846 = (SetItemMaster_o *)sub_21FFEBC(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v846, 0);
  if ( v846 )
  {
    v3 = sub_21FFDA4(v846, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x78u )
    goto LABEL_1691;
  v1->m_Items[120] = (DataMasterBase_o *)v846;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[120], (int32_t)v846, v847, v848, v849, v850, v851, v852);
  v853 = (RecoverMaster_o *)sub_21FFEBC(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v853, 0);
  if ( v853 )
  {
    v3 = sub_21FFDA4(v853, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x79u )
    goto LABEL_1691;
  v1->m_Items[121] = (DataMasterBase_o *)v853;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[121], (int32_t)v853, v854, v855, v856, v857, v858, v859);
  v860 = (BannerMaster_o *)sub_21FFEBC(BannerMaster_TypeInfo);
  BannerMaster___ctor(v860, 0);
  if ( v860 )
  {
    v3 = sub_21FFDA4(v860, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Au )
    goto LABEL_1691;
  v1->m_Items[122] = (DataMasterBase_o *)v860;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[122], (int32_t)v860, v861, v862, v863, v864, v865, v866);
  v867 = (ShopReleaseMaster_o *)sub_21FFEBC(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v867, 0);
  if ( v867 )
  {
    v3 = sub_21FFDA4(v867, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Bu )
    goto LABEL_1691;
  v1->m_Items[123] = (DataMasterBase_o *)v867;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[123], (int32_t)v867, v868, v869, v870, v871, v872, v873);
  v874 = (EventRewardMaster_o *)sub_21FFEBC(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v874, 0);
  if ( v874 )
  {
    v3 = sub_21FFDA4(v874, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Cu )
    goto LABEL_1691;
  v1->m_Items[124] = (DataMasterBase_o *)v874;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[124], (int32_t)v874, v875, v876, v877, v878, v879, v880);
  v881 = (EventDetailMaster_o *)sub_21FFEBC(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v881, 0);
  if ( v881 )
  {
    v3 = sub_21FFDA4(v881, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Du )
    goto LABEL_1691;
  v1->m_Items[125] = (DataMasterBase_o *)v881;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[125], (int32_t)v881, v882, v883, v884, v885, v886, v887);
  v888 = (EventServantMaster_o *)sub_21FFEBC(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v888, 0);
  if ( v888 )
  {
    v3 = sub_21FFDA4(v888, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x7Eu )
    goto LABEL_1691;
  v1->m_Items[126] = (DataMasterBase_o *)v888;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[126], (int32_t)v888, v889, v890, v891, v892, v893, v894);
  v895 = (BoxGachaMaster_o *)sub_21FFEBC(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v895, 0);
  if ( v895 )
  {
    v3 = sub_21FFDA4(v895, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFF80) == 0 )
    goto LABEL_1691;
  v1->m_Items[127] = (DataMasterBase_o *)v895;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[127], (int32_t)v895, v896, v897, v898, v899, v900, v901);
  v902 = (BoxGachaBaseMaster_o *)sub_21FFEBC(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v902, 0);
  if ( v902 )
  {
    v3 = sub_21FFDA4(v902, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x80u )
    goto LABEL_1691;
  v1->m_Items[128] = (DataMasterBase_o *)v902;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[128], (int32_t)v902, v903, v904, v905, v906, v907, v908);
  v909 = (BoxGachaTalkMaster_o *)sub_21FFEBC(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v909, 0);
  if ( v909 )
  {
    v3 = sub_21FFDA4(v909, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x81u )
    goto LABEL_1691;
  v1->m_Items[129] = (DataMasterBase_o *)v909;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[129], (int32_t)v909, v910, v911, v912, v913, v914, v915);
  v916 = (UserBoxGachaMaster_o *)sub_21FFEBC(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v916, 0);
  if ( v916 )
  {
    v3 = sub_21FFDA4(v916, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x82u )
    goto LABEL_1691;
  v1->m_Items[130] = (DataMasterBase_o *)v916;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[130], (int32_t)v916, v917, v918, v919, v920, v921, v922);
  v923 = (BoxGachaHistoryMaster_o *)sub_21FFEBC(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v923, 0);
  if ( v923 )
  {
    v3 = sub_21FFDA4(v923, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x83u )
    goto LABEL_1691;
  v1->m_Items[131] = (DataMasterBase_o *)v923;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[131], (int32_t)v923, v924, v925, v926, v927, v928, v929);
  v930 = (BattleBgMaster_o *)sub_21FFEBC(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v930, 0);
  if ( v930 )
  {
    v3 = sub_21FFDA4(v930, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x84u )
    goto LABEL_1691;
  v1->m_Items[132] = (DataMasterBase_o *)v930;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[132], (int32_t)v930, v931, v932, v933, v934, v935, v936);
  v937 = (TipsBattleMaster_o *)sub_21FFEBC(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v937, 0);
  if ( v937 )
  {
    v3 = sub_21FFDA4(v937, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x85u )
    goto LABEL_1691;
  v1->m_Items[133] = (DataMasterBase_o *)v937;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[133], (int32_t)v937, v938, v939, v940, v941, v942, v943);
  v944 = (UserLoginMaster_o *)sub_21FFEBC(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v944, 0);
  if ( v944 )
  {
    v3 = sub_21FFDA4(v944, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x86u )
    goto LABEL_1691;
  v1->m_Items[134] = (DataMasterBase_o *)v944;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[134], (int32_t)v944, v945, v946, v947, v948, v949, v950);
  v951 = (VoiceMaster_o *)sub_21FFEBC(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v951, 0);
  if ( v951 )
  {
    v3 = sub_21FFDA4(v951, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x87u )
    goto LABEL_1691;
  v1->m_Items[135] = (DataMasterBase_o *)v951;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[135], (int32_t)v951, v952, v953, v954, v955, v956, v957);
  v958 = (EventRewardExtraMaster_o *)sub_21FFEBC(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v958, 0);
  if ( v958 )
  {
    v3 = sub_21FFDA4(v958, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x88u )
    goto LABEL_1691;
  v1->m_Items[136] = (DataMasterBase_o *)v958;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[136], (int32_t)v958, v959, v960, v961, v962, v963, v964);
  v965 = (EventMissionMaster_o *)sub_21FFEBC(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v965, 0);
  if ( v965 )
  {
    v3 = sub_21FFDA4(v965, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x89u )
    goto LABEL_1691;
  v1->m_Items[137] = (DataMasterBase_o *)v965;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[137], (int32_t)v965, v966, v967, v968, v969, v970, v971);
  v972 = (EventMissionActionMaster_o *)sub_21FFEBC(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v972, 0);
  if ( v972 )
  {
    v3 = sub_21FFDA4(v972, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Au )
    goto LABEL_1691;
  v1->m_Items[138] = (DataMasterBase_o *)v972;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[138], (int32_t)v972, v973, v974, v975, v976, v977, v978);
  v979 = (EventMissionActionAddMaster_o *)sub_21FFEBC(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v979, 0);
  if ( v979 )
  {
    v3 = sub_21FFDA4(v979, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Bu )
    goto LABEL_1691;
  v1->m_Items[139] = (DataMasterBase_o *)v979;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[139], (int32_t)v979, v980, v981, v982, v983, v984, v985);
  v986 = (EventMissionConditionMaster_o *)sub_21FFEBC(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v986, 0);
  if ( v986 )
  {
    v3 = sub_21FFDA4(v986, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Cu )
    goto LABEL_1691;
  v1->m_Items[140] = (DataMasterBase_o *)v986;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[140], (int32_t)v986, v987, v988, v989, v990, v991, v992);
  v993 = (EventMissionCondDetailMaster_o *)sub_21FFEBC(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v993, 0);
  if ( v993 )
  {
    v3 = sub_21FFDA4(v993, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Du )
    goto LABEL_1691;
  v1->m_Items[141] = (DataMasterBase_o *)v993;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v1->m_Items[141], (int32_t)v993, v994, v995, v996, v997, v998, v999);
  v1000 = (EventMissionAddMaster_o *)sub_21FFEBC(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v1000, 0);
  if ( v1000 )
  {
    v3 = sub_21FFDA4(v1000, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Eu )
    goto LABEL_1691;
  v1->m_Items[142] = (DataMasterBase_o *)v1000;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[142],
    (int32_t)v1000,
    v1001,
    v1002,
    v1003,
    v1004,
    v1005,
    v1006);
  v1007 = (CompleteMissionMaster_o *)sub_21FFEBC(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v1007, 0);
  if ( v1007 )
  {
    v3 = sub_21FFDA4(v1007, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x8Fu )
    goto LABEL_1691;
  v1->m_Items[143] = (DataMasterBase_o *)v1007;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[143],
    (int32_t)v1007,
    v1008,
    v1009,
    v1010,
    v1011,
    v1012,
    v1013);
  v1014 = (EventRewardSetMaster_o *)sub_21FFEBC(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v1014, 0);
  if ( v1014 )
  {
    v3 = sub_21FFDA4(v1014, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x90u )
    goto LABEL_1691;
  v1->m_Items[144] = (DataMasterBase_o *)v1014;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[144],
    (int32_t)v1014,
    v1015,
    v1016,
    v1017,
    v1018,
    v1019,
    v1020);
  v1021 = (UserEventMissionMaster_o *)sub_21FFEBC(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v1021, 0);
  if ( v1021 )
  {
    v3 = sub_21FFDA4(v1021, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x91u )
    goto LABEL_1691;
  v1->m_Items[145] = (DataMasterBase_o *)v1021;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[145],
    (int32_t)v1021,
    v1022,
    v1023,
    v1024,
    v1025,
    v1026,
    v1027);
  v1028 = (UserEventMissionCondDetailMaster_o *)sub_21FFEBC(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v1028, 0);
  if ( v1028 )
  {
    v3 = sub_21FFDA4(v1028, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x92u )
    goto LABEL_1691;
  v1->m_Items[146] = (DataMasterBase_o *)v1028;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[146],
    (int32_t)v1028,
    v1029,
    v1030,
    v1031,
    v1032,
    v1033,
    v1034);
  v1035 = (BoxGachaBaseDetailMaster_o *)sub_21FFEBC(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v1035, 0);
  if ( v1035 )
  {
    v3 = sub_21FFDA4(v1035, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x93u )
    goto LABEL_1691;
  v1->m_Items[147] = (DataMasterBase_o *)v1035;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[147],
    (int32_t)v1035,
    v1036,
    v1037,
    v1038,
    v1039,
    v1040,
    v1041);
  v1042 = (UserServantLeaderMaster_o *)sub_21FFEBC(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v1042, 0);
  if ( v1042 )
  {
    v3 = sub_21FFDA4(v1042, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x94u )
    goto LABEL_1691;
  v1->m_Items[148] = (DataMasterBase_o *)v1042;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[148],
    (int32_t)v1042,
    v1043,
    v1044,
    v1045,
    v1046,
    v1047,
    v1048);
  v1049 = (ClosedMessageMaster_o *)sub_21FFEBC(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v1049, 0);
  if ( v1049 )
  {
    v3 = sub_21FFDA4(v1049, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x95u )
    goto LABEL_1691;
  v1->m_Items[149] = (DataMasterBase_o *)v1049;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[149],
    (int32_t)v1049,
    v1050,
    v1051,
    v1052,
    v1053,
    v1054,
    v1055);
  v1056 = (FunctionGroupMaster_o *)sub_21FFEBC(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v1056, 0);
  if ( v1056 )
  {
    v3 = sub_21FFDA4(v1056, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x96u )
    goto LABEL_1691;
  v1->m_Items[150] = (DataMasterBase_o *)v1056;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[150],
    (int32_t)v1056,
    v1057,
    v1058,
    v1059,
    v1060,
    v1061,
    v1062);
  v1063 = (EventRaidMaster_o *)sub_21FFEBC(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v1063, 0);
  if ( v1063 )
  {
    v3 = sub_21FFDA4(v1063, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x97u )
    goto LABEL_1691;
  v1->m_Items[151] = (DataMasterBase_o *)v1063;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[151],
    (int32_t)v1063,
    v1064,
    v1065,
    v1066,
    v1067,
    v1068,
    v1069);
  v1070 = (TotalEventRaidMaster_o *)sub_21FFEBC(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v1070, 0);
  if ( v1070 )
  {
    v3 = sub_21FFDA4(v1070, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x98u )
    goto LABEL_1691;
  v1->m_Items[152] = (DataMasterBase_o *)v1070;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[152],
    (int32_t)v1070,
    v1071,
    v1072,
    v1073,
    v1074,
    v1075,
    v1076);
  v1077 = (UserEventRaidMaster_o *)sub_21FFEBC(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v1077, 0);
  if ( v1077 )
  {
    v3 = sub_21FFDA4(v1077, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x99u )
    goto LABEL_1691;
  v1->m_Items[153] = (DataMasterBase_o *)v1077;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[153],
    (int32_t)v1077,
    v1078,
    v1079,
    v1080,
    v1081,
    v1082,
    v1083);
  v1084 = (EventPointMaster_o *)sub_21FFEBC(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1084, 0);
  if ( v1084 )
  {
    v3 = sub_21FFDA4(v1084, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Au )
    goto LABEL_1691;
  v1->m_Items[154] = (DataMasterBase_o *)v1084;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[154],
    (int32_t)v1084,
    v1085,
    v1086,
    v1087,
    v1088,
    v1089,
    v1090);
  v1091 = (EventPointGroupMaster_o *)sub_21FFEBC(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1091, 0);
  if ( v1091 )
  {
    v3 = sub_21FFDA4(v1091, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Bu )
    goto LABEL_1691;
  v1->m_Items[155] = (DataMasterBase_o *)v1091;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[155],
    (int32_t)v1091,
    v1092,
    v1093,
    v1094,
    v1095,
    v1096,
    v1097);
  v1098 = (TotalEventPointMaster_o *)sub_21FFEBC(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1098, 0);
  if ( v1098 )
  {
    v3 = sub_21FFDA4(v1098, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Cu )
    goto LABEL_1691;
  v1->m_Items[156] = (DataMasterBase_o *)v1098;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[156],
    (int32_t)v1098,
    v1099,
    v1100,
    v1101,
    v1102,
    v1103,
    v1104);
  v1105 = (UserEventPointMaster_o *)sub_21FFEBC(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1105, 0);
  if ( v1105 )
  {
    v3 = sub_21FFDA4(v1105, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Du )
    goto LABEL_1691;
  v1->m_Items[157] = (DataMasterBase_o *)v1105;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[157],
    (int32_t)v1105,
    v1106,
    v1107,
    v1108,
    v1109,
    v1110,
    v1111);
  v1112 = (EventPointUpperMaster_o *)sub_21FFEBC(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1112, 0);
  if ( v1112 )
  {
    v3 = sub_21FFDA4(v1112, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Eu )
    goto LABEL_1691;
  v1->m_Items[158] = (DataMasterBase_o *)v1112;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[158],
    (int32_t)v1112,
    v1113,
    v1114,
    v1115,
    v1116,
    v1117,
    v1118);
  v1119 = (EventPointUpperReleaseMaster_o *)sub_21FFEBC(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1119, 0);
  if ( v1119 )
  {
    v3 = sub_21FFDA4(v1119, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x9Fu )
    goto LABEL_1691;
  v1->m_Items[159] = (DataMasterBase_o *)v1119;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[159],
    (int32_t)v1119,
    v1120,
    v1121,
    v1122,
    v1123,
    v1124,
    v1125);
  v1126 = (EventRaceMaster_o *)sub_21FFEBC(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1126, 0);
  if ( v1126 )
  {
    v3 = sub_21FFDA4(v1126, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA0u )
    goto LABEL_1691;
  v1->m_Items[160] = (DataMasterBase_o *)v1126;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[160],
    (int32_t)v1126,
    v1127,
    v1128,
    v1129,
    v1130,
    v1131,
    v1132);
  v1133 = (EventRaceResultMaster_o *)sub_21FFEBC(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1133, 0);
  if ( v1133 )
  {
    v3 = sub_21FFDA4(v1133, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA1u )
    goto LABEL_1691;
  v1->m_Items[161] = (DataMasterBase_o *)v1133;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[161],
    (int32_t)v1133,
    v1134,
    v1135,
    v1136,
    v1137,
    v1138,
    v1139);
  v1140 = (QuestRacePointMaster_o *)sub_21FFEBC(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1140, 0);
  if ( v1140 )
  {
    v3 = sub_21FFDA4(v1140, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA2u )
    goto LABEL_1691;
  v1->m_Items[162] = (DataMasterBase_o *)v1140;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[162],
    (int32_t)v1140,
    v1141,
    v1142,
    v1143,
    v1144,
    v1145,
    v1146);
  v1147 = (UserEventRaceMaster_o *)sub_21FFEBC(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1147, 0);
  if ( v1147 )
  {
    v3 = sub_21FFDA4(v1147, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA3u )
    goto LABEL_1691;
  v1->m_Items[163] = (DataMasterBase_o *)v1147;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[163],
    (int32_t)v1147,
    v1148,
    v1149,
    v1150,
    v1151,
    v1152,
    v1153);
  v1154 = (EventScriptMaster_o *)sub_21FFEBC(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1154, 0);
  if ( v1154 )
  {
    v3 = sub_21FFDA4(v1154, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA4u )
    goto LABEL_1691;
  v1->m_Items[164] = (DataMasterBase_o *)v1154;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[164],
    (int32_t)v1154,
    v1155,
    v1156,
    v1157,
    v1158,
    v1159,
    v1160);
  v1161 = (EventScriptReleaseMaster_o *)sub_21FFEBC(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1161, 0);
  if ( v1161 )
  {
    v3 = sub_21FFDA4(v1161, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA5u )
    goto LABEL_1691;
  v1->m_Items[165] = (DataMasterBase_o *)v1161;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[165],
    (int32_t)v1161,
    v1162,
    v1163,
    v1164,
    v1165,
    v1166,
    v1167);
  v1168 = (UserPresentHistoryMaster_o *)sub_21FFEBC(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1168, 0);
  if ( v1168 )
  {
    v3 = sub_21FFDA4(v1168, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA6u )
    goto LABEL_1691;
  v1->m_Items[166] = (DataMasterBase_o *)v1168;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[166],
    (int32_t)v1168,
    v1169,
    v1170,
    v1171,
    v1172,
    v1173,
    v1174);
  v1175 = (MstMissionMaster_o *)sub_21FFEBC(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1175, 0);
  if ( v1175 )
  {
    v3 = sub_21FFDA4(v1175, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA7u )
    goto LABEL_1691;
  v1->m_Items[167] = (DataMasterBase_o *)v1175;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[167],
    (int32_t)v1175,
    v1176,
    v1177,
    v1178,
    v1179,
    v1180,
    v1181);
  v1182 = (ServantExceedMaster_o *)sub_21FFEBC(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1182, 0);
  if ( v1182 )
  {
    v3 = sub_21FFDA4(v1182, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA8u )
    goto LABEL_1691;
  v1->m_Items[168] = (DataMasterBase_o *)v1182;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[168],
    (int32_t)v1182,
    v1183,
    v1184,
    v1185,
    v1186,
    v1187,
    v1188);
  v1189 = (PartialMaintenanceMaster_o *)sub_21FFEBC(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1189, 0);
  if ( v1189 )
  {
    v3 = sub_21FFDA4(v1189, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xA9u )
    goto LABEL_1691;
  v1->m_Items[169] = (DataMasterBase_o *)v1189;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[169],
    (int32_t)v1189,
    v1190,
    v1191,
    v1192,
    v1193,
    v1194,
    v1195);
  v1196 = (GuideMaster_o *)sub_21FFEBC(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1196, 0);
  if ( v1196 )
  {
    v3 = sub_21FFDA4(v1196, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xAAu )
    goto LABEL_1691;
  v1->m_Items[170] = (DataMasterBase_o *)v1196;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[170],
    (int32_t)v1196,
    v1197,
    v1198,
    v1199,
    v1200,
    v1201,
    v1202);
  v1203 = (MstMissionDisplayInfoMaster_o *)sub_21FFEBC(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1203, 0);
  if ( v1203 )
  {
    v3 = sub_21FFDA4(v1203, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xABu )
    goto LABEL_1691;
  v1->m_Items[171] = (DataMasterBase_o *)v1203;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[171],
    (int32_t)v1203,
    v1204,
    v1205,
    v1206,
    v1207,
    v1208,
    v1209);
  v1210 = (GachaGroupMaster_o *)sub_21FFEBC(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1210, 0);
  if ( v1210 )
  {
    v3 = sub_21FFDA4(v1210, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xACu )
    goto LABEL_1691;
  v1->m_Items[172] = (DataMasterBase_o *)v1210;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[172],
    (int32_t)v1210,
    v1211,
    v1212,
    v1213,
    v1214,
    v1215,
    v1216);
  v1217 = (QuestResetMaster_o *)sub_21FFEBC(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1217, 0);
  if ( v1217 )
  {
    v3 = sub_21FFDA4(v1217, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xADu )
    goto LABEL_1691;
  v1->m_Items[173] = (DataMasterBase_o *)v1217;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[173],
    (int32_t)v1217,
    v1218,
    v1219,
    v1220,
    v1221,
    v1222,
    v1223);
  v1224 = (WarAddMaster_o *)sub_21FFEBC(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1224, 0);
  if ( v1224 )
  {
    v3 = sub_21FFDA4(v1224, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xAEu )
    goto LABEL_1691;
  v1->m_Items[174] = (DataMasterBase_o *)v1224;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[174],
    (int32_t)v1224,
    v1225,
    v1226,
    v1227,
    v1228,
    v1229,
    v1230);
  v1231 = (EventItemDisplayMaster_o *)sub_21FFEBC(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1231, 0);
  if ( v1231 )
  {
    v3 = sub_21FFDA4(v1231, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xAFu )
    goto LABEL_1691;
  v1->m_Items[175] = (DataMasterBase_o *)v1231;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[175],
    (int32_t)v1231,
    v1232,
    v1233,
    v1234,
    v1235,
    v1236,
    v1237);
  v1238 = (EventItemDisplayGroupMaster_o *)sub_21FFEBC(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1238, 0);
  if ( v1238 )
  {
    v3 = sub_21FFDA4(v1238, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB0u )
    goto LABEL_1691;
  v1->m_Items[176] = (DataMasterBase_o *)v1238;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[176],
    (int32_t)v1238,
    v1239,
    v1240,
    v1241,
    v1242,
    v1243,
    v1244);
  v1245 = (EventItemDisplayReleaseMaster_o *)sub_21FFEBC(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1245, 0);
  if ( v1245 )
  {
    v3 = sub_21FFDA4(v1245, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB1u )
    goto LABEL_1691;
  v1->m_Items[177] = (DataMasterBase_o *)v1245;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[177],
    (int32_t)v1245,
    v1246,
    v1247,
    v1248,
    v1249,
    v1250,
    v1251);
  v1252 = (EventTutorialMaster_o *)sub_21FFEBC(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1252, 0);
  if ( v1252 )
  {
    v3 = sub_21FFDA4(v1252, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB2u )
    goto LABEL_1691;
  v1->m_Items[178] = (DataMasterBase_o *)v1252;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[178],
    (int32_t)v1252,
    v1253,
    v1254,
    v1255,
    v1256,
    v1257,
    v1258);
  v1259 = (EventTutorialCondMaster_o *)sub_21FFEBC(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1259, 0);
  if ( v1259 )
  {
    v3 = sub_21FFDA4(v1259, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB3u )
    goto LABEL_1691;
  v1->m_Items[179] = (DataMasterBase_o *)v1259;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[179],
    (int32_t)v1259,
    v1260,
    v1261,
    v1262,
    v1263,
    v1264,
    v1265);
  v1266 = (VoiceReleaseMaster_o *)sub_21FFEBC(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1266, 0);
  if ( v1266 )
  {
    v3 = sub_21FFDA4(v1266, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB4u )
    goto LABEL_1691;
  v1->m_Items[180] = (DataMasterBase_o *)v1266;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[180],
    (int32_t)v1266,
    v1267,
    v1268,
    v1269,
    v1270,
    v1271,
    v1272);
  v1273 = (EventSuperBossMaster_o *)sub_21FFEBC(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1273, 0);
  if ( v1273 )
  {
    v3 = sub_21FFDA4(v1273, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB5u )
    goto LABEL_1691;
  v1->m_Items[181] = (DataMasterBase_o *)v1273;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[181],
    (int32_t)v1273,
    v1274,
    v1275,
    v1276,
    v1277,
    v1278,
    v1279);
  v1280 = (UserSuperBossMaster_o *)sub_21FFEBC(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1280, 0);
  if ( v1280 )
  {
    v3 = sub_21FFDA4(v1280, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB6u )
    goto LABEL_1691;
  v1->m_Items[182] = (DataMasterBase_o *)v1280;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[182],
    (int32_t)v1280,
    v1281,
    v1282,
    v1283,
    v1284,
    v1285,
    v1286);
  v1287 = (QuestScriptMaster_o *)sub_21FFEBC(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1287, 0);
  if ( v1287 )
  {
    v3 = sub_21FFDA4(v1287, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB7u )
    goto LABEL_1691;
  v1->m_Items[183] = (DataMasterBase_o *)v1287;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[183],
    (int32_t)v1287,
    v1288,
    v1289,
    v1290,
    v1291,
    v1292,
    v1293);
  v1294 = (QuestScriptReleaseMaster_o *)sub_21FFEBC(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1294, 0);
  if ( v1294 )
  {
    v3 = sub_21FFDA4(v1294, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB8u )
    goto LABEL_1691;
  v1->m_Items[184] = (DataMasterBase_o *)v1294;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[184],
    (int32_t)v1294,
    v1295,
    v1296,
    v1297,
    v1298,
    v1299,
    v1300);
  v1301 = (MaterialFolderMaster_o *)sub_21FFEBC(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1301, 0);
  if ( v1301 )
  {
    v3 = sub_21FFDA4(v1301, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xB9u )
    goto LABEL_1691;
  v1->m_Items[185] = (DataMasterBase_o *)v1301;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[185],
    (int32_t)v1301,
    v1302,
    v1303,
    v1304,
    v1305,
    v1306,
    v1307);
  v1308 = (RestrictionMaster_o *)sub_21FFEBC(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1308, 0);
  if ( v1308 )
  {
    v3 = sub_21FFDA4(v1308, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBAu )
    goto LABEL_1691;
  v1->m_Items[186] = (DataMasterBase_o *)v1308;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[186],
    (int32_t)v1308,
    v1309,
    v1310,
    v1311,
    v1312,
    v1313,
    v1314);
  v1315 = (QuestRestrictionMaster_o *)sub_21FFEBC(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1315, 0);
  if ( v1315 )
  {
    v3 = sub_21FFDA4(v1315, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBBu )
    goto LABEL_1691;
  v1->m_Items[187] = (DataMasterBase_o *)v1315;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[187],
    (int32_t)v1315,
    v1316,
    v1317,
    v1318,
    v1319,
    v1320,
    v1321);
  v1322 = (ServantVoiceRelationMaster_o *)sub_21FFEBC(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1322, 0);
  if ( v1322 )
  {
    v3 = sub_21FFDA4(v1322, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBCu )
    goto LABEL_1691;
  v1->m_Items[188] = (DataMasterBase_o *)v1322;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[188],
    (int32_t)v1322,
    v1323,
    v1324,
    v1325,
    v1326,
    v1327,
    v1328);
  v1329 = (ShopDetailMaster_o *)sub_21FFEBC(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1329, 0);
  if ( v1329 )
  {
    v3 = sub_21FFDA4(v1329, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBDu )
    goto LABEL_1691;
  v1->m_Items[189] = (DataMasterBase_o *)v1329;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[189],
    (int32_t)v1329,
    v1330,
    v1331,
    v1332,
    v1333,
    v1334,
    v1335);
  v1336 = (ServantScriptAddMaster_o *)sub_21FFEBC(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1336, 0);
  if ( v1336 )
  {
    v3 = sub_21FFDA4(v1336, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBEu )
    goto LABEL_1691;
  v1->m_Items[190] = (DataMasterBase_o *)v1336;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[190],
    (int32_t)v1336,
    v1337,
    v1338,
    v1339,
    v1340,
    v1341,
    v1342);
  v1343 = (CombineMaster_o *)sub_21FFEBC(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1343, 0);
  if ( v1343 )
  {
    v3 = sub_21FFDA4(v1343, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xBFu )
    goto LABEL_1691;
  v1->m_Items[191] = (DataMasterBase_o *)v1343;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[191],
    (int32_t)v1343,
    v1344,
    v1345,
    v1346,
    v1347,
    v1348,
    v1349);
  v1350 = (AiFieldMaster_o *)sub_21FFEBC(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1350, 0);
  if ( v1350 )
  {
    v3 = sub_21FFDA4(v1350, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC0u )
    goto LABEL_1691;
  v1->m_Items[192] = (DataMasterBase_o *)v1350;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[192],
    (int32_t)v1350,
    v1351,
    v1352,
    v1353,
    v1354,
    v1355,
    v1356);
  v1357 = (ServantCommentAddMaster_o *)sub_21FFEBC(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1357, 0);
  if ( v1357 )
  {
    v3 = sub_21FFDA4(v1357, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC1u )
    goto LABEL_1691;
  v1->m_Items[193] = (DataMasterBase_o *)v1357;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[193],
    (int32_t)v1357,
    v1358,
    v1359,
    v1360,
    v1361,
    v1362,
    v1363);
  v1364 = (EventFilterMaster_o *)sub_21FFEBC(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1364, 0);
  if ( v1364 )
  {
    v3 = sub_21FFDA4(v1364, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC2u )
    goto LABEL_1691;
  v1->m_Items[194] = (DataMasterBase_o *)v1364;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[194],
    (int32_t)v1364,
    v1365,
    v1366,
    v1367,
    v1368,
    v1369,
    v1370);
  v1371 = (UserSupportDeckMaster_o *)sub_21FFEBC(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1371, 0);
  if ( v1371 )
  {
    v3 = sub_21FFDA4(v1371, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC3u )
    goto LABEL_1691;
  v1->m_Items[195] = (DataMasterBase_o *)v1371;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[195],
    (int32_t)v1371,
    v1372,
    v1373,
    v1374,
    v1375,
    v1376,
    v1377);
  v1378 = (EventRewardSceneMaster_o *)sub_21FFEBC(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1378, 0);
  if ( v1378 )
  {
    v3 = sub_21FFDA4(v1378, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC4u )
    goto LABEL_1691;
  v1->m_Items[196] = (DataMasterBase_o *)v1378;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[196],
    (int32_t)v1378,
    v1379,
    v1380,
    v1381,
    v1382,
    v1383,
    v1384);
  v1385 = (EventVoicePlayMaster_o *)sub_21FFEBC(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1385, 0);
  if ( v1385 )
  {
    v3 = sub_21FFDA4(v1385, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC5u )
    goto LABEL_1691;
  v1->m_Items[197] = (DataMasterBase_o *)v1385;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[197],
    (int32_t)v1385,
    v1386,
    v1387,
    v1388,
    v1389,
    v1390,
    v1391);
  v1392 = (GachaSubMaster_o *)sub_21FFEBC(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1392, 0);
  if ( v1392 )
  {
    v3 = sub_21FFDA4(v1392, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC6u )
    goto LABEL_1691;
  v1->m_Items[198] = (DataMasterBase_o *)v1392;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[198],
    (int32_t)v1392,
    v1393,
    v1394,
    v1395,
    v1396,
    v1397,
    v1398);
  v1399 = (GachaDetailMaster_o *)sub_21FFEBC(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1399, 0);
  if ( v1399 )
  {
    v3 = sub_21FFDA4(v1399, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC7u )
    goto LABEL_1691;
  v1->m_Items[199] = (DataMasterBase_o *)v1399;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[199],
    (int32_t)v1399,
    v1400,
    v1401,
    v1402,
    v1403,
    v1404,
    v1405);
  v1406 = (GachaBaseCollateralMaster_o *)sub_21FFEBC(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1406, 0);
  if ( v1406 )
  {
    v3 = sub_21FFDA4(v1406, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC8u )
    goto LABEL_1691;
  v1->m_Items[200] = (DataMasterBase_o *)v1406;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[200],
    (int32_t)v1406,
    v1407,
    v1408,
    v1409,
    v1410,
    v1411,
    v1412);
  v1413 = (GachaAdjustAddMaster_o *)sub_21FFEBC(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1413, 0);
  if ( v1413 )
  {
    v3 = sub_21FFDA4(v1413, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xC9u )
    goto LABEL_1691;
  v1->m_Items[201] = (DataMasterBase_o *)v1413;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[201],
    (int32_t)v1413,
    v1414,
    v1415,
    v1416,
    v1417,
    v1418,
    v1419);
  v1420 = (GachaBonusSelectMaster_o *)sub_21FFEBC(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1420, 0);
  if ( v1420 )
  {
    v3 = sub_21FFDA4(v1420, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCAu )
    goto LABEL_1691;
  v1->m_Items[202] = (DataMasterBase_o *)v1420;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[202],
    (int32_t)v1420,
    v1421,
    v1422,
    v1423,
    v1424,
    v1425,
    v1426);
  v1427 = (GachaBonusSelectLineupMaster_o *)sub_21FFEBC(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1427, 0);
  if ( v1427 )
  {
    v3 = sub_21FFDA4(v1427, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCBu )
    goto LABEL_1691;
  v1->m_Items[203] = (DataMasterBase_o *)v1427;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[203],
    (int32_t)v1427,
    v1428,
    v1429,
    v1430,
    v1431,
    v1432,
    v1433);
  v1434 = (ServantChangeMaster_o *)sub_21FFEBC(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1434, 0);
  if ( v1434 )
  {
    v3 = sub_21FFDA4(v1434, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCCu )
    goto LABEL_1691;
  v1->m_Items[204] = (DataMasterBase_o *)v1434;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[204],
    (int32_t)v1434,
    v1435,
    v1436,
    v1437,
    v1438,
    v1439,
    v1440);
  v1441 = (VoiceCondMaster_o *)sub_21FFEBC(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1441, 0);
  if ( v1441 )
  {
    v3 = sub_21FFDA4(v1441, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCDu )
    goto LABEL_1691;
  v1->m_Items[205] = (DataMasterBase_o *)v1441;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[205],
    (int32_t)v1441,
    v1442,
    v1443,
    v1444,
    v1445,
    v1446,
    v1447);
  v1448 = (BgmReleaseMaster_o *)sub_21FFEBC(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1448, 0);
  if ( v1448 )
  {
    v3 = sub_21FFDA4(v1448, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCEu )
    goto LABEL_1691;
  v1->m_Items[206] = (DataMasterBase_o *)v1448;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[206],
    (int32_t)v1448,
    v1449,
    v1450,
    v1451,
    v1452,
    v1453,
    v1454);
  v1455 = (MyRoomAddMaster_o *)sub_21FFEBC(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1455, 0);
  if ( v1455 )
  {
    v3 = sub_21FFDA4(v1455, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xCFu )
    goto LABEL_1691;
  v1->m_Items[207] = (DataMasterBase_o *)v1455;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[207],
    (int32_t)v1455,
    v1456,
    v1457,
    v1458,
    v1459,
    v1460,
    v1461);
  v1462 = (ShopActionMaster_o *)sub_21FFEBC(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1462, 0);
  if ( v1462 )
  {
    v3 = sub_21FFDA4(v1462, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD0u )
    goto LABEL_1691;
  v1->m_Items[208] = (DataMasterBase_o *)v1462;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[208],
    (int32_t)v1462,
    v1463,
    v1464,
    v1465,
    v1466,
    v1467,
    v1468);
  v1469 = (EventRewardSceneReleaseMaster_o *)sub_21FFEBC(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1469, 0);
  if ( v1469 )
  {
    v3 = sub_21FFDA4(v1469, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD1u )
    goto LABEL_1691;
  v1->m_Items[209] = (DataMasterBase_o *)v1469;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[209],
    (int32_t)v1469,
    v1470,
    v1471,
    v1472,
    v1473,
    v1474,
    v1475);
  v1476 = (QuestBehaviorMaster_o *)sub_21FFEBC(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1476, 0);
  if ( v1476 )
  {
    v3 = sub_21FFDA4(v1476, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD2u )
    goto LABEL_1691;
  v1->m_Items[210] = (DataMasterBase_o *)v1476;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[210],
    (int32_t)v1476,
    v1477,
    v1478,
    v1479,
    v1480,
    v1481,
    v1482);
  v1483 = (MapMaster_o *)sub_21FFEBC(MapMaster_TypeInfo);
  MapMaster___ctor(v1483, 0);
  if ( v1483 )
  {
    v3 = sub_21FFDA4(v1483, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD3u )
    goto LABEL_1691;
  v1->m_Items[211] = (DataMasterBase_o *)v1483;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[211],
    (int32_t)v1483,
    v1484,
    v1485,
    v1486,
    v1487,
    v1488,
    v1489);
  v1490 = (MapCondMaster_o *)sub_21FFEBC(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1490, 0);
  if ( v1490 )
  {
    v3 = sub_21FFDA4(v1490, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD4u )
    goto LABEL_1691;
  v1->m_Items[212] = (DataMasterBase_o *)v1490;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[212],
    (int32_t)v1490,
    v1491,
    v1492,
    v1493,
    v1494,
    v1495,
    v1496);
  v1497 = (MapButtonMaster_o *)sub_21FFEBC(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1497, 0);
  if ( v1497 )
  {
    v3 = sub_21FFDA4(v1497, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD5u )
    goto LABEL_1691;
  v1->m_Items[213] = (DataMasterBase_o *)v1497;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[213],
    (int32_t)v1497,
    v1498,
    v1499,
    v1500,
    v1501,
    v1502,
    v1503);
  v1504 = (BannerAddMaster_o *)sub_21FFEBC(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1504, 0);
  if ( v1504 )
  {
    v3 = sub_21FFDA4(v1504, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD6u )
    goto LABEL_1691;
  v1->m_Items[214] = (DataMasterBase_o *)v1504;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[214],
    (int32_t)v1504,
    v1505,
    v1506,
    v1507,
    v1508,
    v1509,
    v1510);
  v1511 = (EventAddMaster_o *)sub_21FFEBC(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1511, 0);
  if ( v1511 )
  {
    v3 = sub_21FFDA4(v1511, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD7u )
    goto LABEL_1691;
  v1->m_Items[215] = (DataMasterBase_o *)v1511;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[215],
    (int32_t)v1511,
    v1512,
    v1513,
    v1514,
    v1515,
    v1516,
    v1517);
  v1518 = (TotalLoginMaster_o *)sub_21FFEBC(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1518, 0);
  if ( v1518 )
  {
    v3 = sub_21FFDA4(v1518, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD8u )
    goto LABEL_1691;
  v1->m_Items[216] = (DataMasterBase_o *)v1518;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[216],
    (int32_t)v1518,
    v1519,
    v1520,
    v1521,
    v1522,
    v1523,
    v1524);
  v1525 = (ServantFilterMaster_o *)sub_21FFEBC(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1525, 0);
  if ( v1525 )
  {
    v3 = sub_21FFDA4(v1525, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xD9u )
    goto LABEL_1691;
  v1->m_Items[217] = (DataMasterBase_o *)v1525;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[217],
    (int32_t)v1525,
    v1526,
    v1527,
    v1528,
    v1529,
    v1530,
    v1531);
  v1532 = (CombineCostumeMaster_o *)sub_21FFEBC(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1532, 0);
  if ( v1532 )
  {
    v3 = sub_21FFDA4(v1532, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDAu )
    goto LABEL_1691;
  v1->m_Items[218] = (DataMasterBase_o *)v1532;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[218],
    (int32_t)v1532,
    v1533,
    v1534,
    v1535,
    v1536,
    v1537,
    v1538);
  v1539 = (ServantCostumeMaster_o *)sub_21FFEBC(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1539, 0);
  if ( v1539 )
  {
    v3 = sub_21FFDA4(v1539, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDBu )
    goto LABEL_1691;
  v1->m_Items[219] = (DataMasterBase_o *)v1539;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[219],
    (int32_t)v1539,
    v1540,
    v1541,
    v1542,
    v1543,
    v1544,
    v1545);
  v1546 = (ServantCostumeReleaseMaster_o *)sub_21FFEBC(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1546, 0);
  if ( v1546 )
  {
    v3 = sub_21FFDA4(v1546, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDCu )
    goto LABEL_1691;
  v1->m_Items[220] = (DataMasterBase_o *)v1546;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[220],
    (int32_t)v1546,
    v1547,
    v1548,
    v1549,
    v1550,
    v1551,
    v1552);
  v1553 = (StaffPhotoMaster_o *)sub_21FFEBC(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v1553, 0);
  if ( v1553 )
  {
    v3 = sub_21FFDA4(v1553, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDDu )
    goto LABEL_1691;
  v1->m_Items[221] = (DataMasterBase_o *)v1553;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[221],
    (int32_t)v1553,
    v1554,
    v1555,
    v1556,
    v1557,
    v1558,
    v1559);
  v1560 = (StaffPhotoCostumeMaster_o *)sub_21FFEBC(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v1560, 0);
  if ( v1560 )
  {
    v3 = sub_21FFDA4(v1560, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDEu )
    goto LABEL_1691;
  v1->m_Items[222] = (DataMasterBase_o *)v1560;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[222],
    (int32_t)v1560,
    v1561,
    v1562,
    v1563,
    v1564,
    v1565,
    v1566);
  v1567 = (UserFriendRequestHistoryMaster_o *)sub_21FFEBC(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1567, 0);
  if ( v1567 )
  {
    v3 = sub_21FFDA4(v1567, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xDFu )
    goto LABEL_1691;
  v1->m_Items[223] = (DataMasterBase_o *)v1567;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[223],
    (int32_t)v1567,
    v1568,
    v1569,
    v1570,
    v1571,
    v1572,
    v1573);
  v1574 = (UserBlacklistMaster_o *)sub_21FFEBC(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1574, 0);
  if ( v1574 )
  {
    v3 = sub_21FFDA4(v1574, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE0u )
    goto LABEL_1691;
  v1->m_Items[224] = (DataMasterBase_o *)v1574;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[224],
    (int32_t)v1574,
    v1575,
    v1576,
    v1577,
    v1578,
    v1579,
    v1580);
  v1581 = (ItemSelectMaster_o *)sub_21FFEBC(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1581, 0);
  if ( v1581 )
  {
    v3 = sub_21FFDA4(v1581, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE1u )
    goto LABEL_1691;
  v1->m_Items[225] = (DataMasterBase_o *)v1581;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[225],
    (int32_t)v1581,
    v1582,
    v1583,
    v1584,
    v1585,
    v1586,
    v1587);
  v1588 = (TotalEventRaceMaster_o *)sub_21FFEBC(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1588, 0);
  if ( v1588 )
  {
    v3 = sub_21FFDA4(v1588, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE2u )
    goto LABEL_1691;
  v1->m_Items[226] = (DataMasterBase_o *)v1588;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[226],
    (int32_t)v1588,
    v1589,
    v1590,
    v1591,
    v1592,
    v1593,
    v1594);
  v1595 = (EventPointGroupAddMaster_o *)sub_21FFEBC(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1595, 0);
  if ( v1595 )
  {
    v3 = sub_21FFDA4(v1595, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE3u )
    goto LABEL_1691;
  v1->m_Items[227] = (DataMasterBase_o *)v1595;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[227],
    (int32_t)v1595,
    v1596,
    v1597,
    v1598,
    v1599,
    v1600,
    v1601);
  v1602 = (VoicePlayGroupMaster_o *)sub_21FFEBC(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1602, 0);
  if ( v1602 )
  {
    v3 = sub_21FFDA4(v1602, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE4u )
    goto LABEL_1691;
  v1->m_Items[228] = (DataMasterBase_o *)v1602;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[228],
    (int32_t)v1602,
    v1603,
    v1604,
    v1605,
    v1606,
    v1607,
    v1608);
  v1609 = (VoicePlayCondMaster_o *)sub_21FFEBC(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1609, 0);
  if ( v1609 )
  {
    v3 = sub_21FFDA4(v1609, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE5u )
    goto LABEL_1691;
  v1->m_Items[229] = (DataMasterBase_o *)v1609;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[229],
    (int32_t)v1609,
    v1610,
    v1611,
    v1612,
    v1613,
    v1614,
    v1615);
  v1616 = (GachaStoryAdjustMaster_o *)sub_21FFEBC(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1616, 0);
  if ( v1616 )
  {
    v3 = sub_21FFDA4(v1616, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE6u )
    goto LABEL_1691;
  v1->m_Items[230] = (DataMasterBase_o *)v1616;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[230],
    (int32_t)v1616,
    v1617,
    v1618,
    v1619,
    v1620,
    v1621,
    v1622);
  v1623 = (ServantFlagMaster_o *)sub_21FFEBC(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1623, 0);
  if ( v1623 )
  {
    v3 = sub_21FFDA4(v1623, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE7u )
    goto LABEL_1691;
  v1->m_Items[231] = (DataMasterBase_o *)v1623;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[231],
    (int32_t)v1623,
    v1624,
    v1625,
    v1626,
    v1627,
    v1628,
    v1629);
  v1630 = (ServantFlagReleaseMaster_o *)sub_21FFEBC(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1630, 0);
  if ( v1630 )
  {
    v3 = sub_21FFDA4(v1630, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE8u )
    goto LABEL_1691;
  v1->m_Items[232] = (DataMasterBase_o *)v1630;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[232],
    (int32_t)v1630,
    v1631,
    v1632,
    v1633,
    v1634,
    v1635,
    v1636);
  v1637 = (EventLocationCampaignMaster_o *)sub_21FFEBC(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1637, 0);
  if ( v1637 )
  {
    v3 = sub_21FFDA4(v1637, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xE9u )
    goto LABEL_1691;
  v1->m_Items[233] = (DataMasterBase_o *)v1637;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[233],
    (int32_t)v1637,
    v1638,
    v1639,
    v1640,
    v1641,
    v1642,
    v1643);
  v1644 = (CampaignInfoMaster_o *)sub_21FFEBC(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1644, 0);
  if ( v1644 )
  {
    v3 = sub_21FFDA4(v1644, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEAu )
    goto LABEL_1691;
  v1->m_Items[234] = (DataMasterBase_o *)v1644;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[234],
    (int32_t)v1644,
    v1645,
    v1646,
    v1647,
    v1648,
    v1649,
    v1650);
  v1651 = (DialogMessageMaster_o *)sub_21FFEBC(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1651, 0);
  if ( v1651 )
  {
    v3 = sub_21FFDA4(v1651, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEBu )
    goto LABEL_1691;
  v1->m_Items[235] = (DataMasterBase_o *)v1651;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[235],
    (int32_t)v1651,
    v1652,
    v1653,
    v1654,
    v1655,
    v1656,
    v1657);
  v1658 = (ServantIndividualityMaster_o *)sub_21FFEBC(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1658, 0);
  if ( v1658 )
  {
    v3 = sub_21FFDA4(v1658, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xECu )
    goto LABEL_1691;
  v1->m_Items[236] = (DataMasterBase_o *)v1658;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[236],
    (int32_t)v1658,
    v1659,
    v1660,
    v1661,
    v1662,
    v1663,
    v1664);
  v1665 = (BoardMessageMaster_o *)sub_21FFEBC(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1665, 0);
  if ( v1665 )
  {
    v3 = sub_21FFDA4(v1665, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEDu )
    goto LABEL_1691;
  v1->m_Items[237] = (DataMasterBase_o *)v1665;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[237],
    (int32_t)v1665,
    v1666,
    v1667,
    v1668,
    v1669,
    v1670,
    v1671);
  v1672 = (BoardMessageReleaseMaster_o *)sub_21FFEBC(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1672, 0);
  if ( v1672 )
  {
    v3 = sub_21FFDA4(v1672, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEEu )
    goto LABEL_1691;
  v1->m_Items[238] = (DataMasterBase_o *)v1672;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[238],
    (int32_t)v1672,
    v1673,
    v1674,
    v1675,
    v1676,
    v1677,
    v1678);
  v1679 = (EventServantFatigueMaster_o *)sub_21FFEBC(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1679, 0);
  if ( v1679 )
  {
    v3 = sub_21FFDA4(v1679, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xEFu )
    goto LABEL_1691;
  v1->m_Items[239] = (DataMasterBase_o *)v1679;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[239],
    (int32_t)v1679,
    v1680,
    v1681,
    v1682,
    v1683,
    v1684,
    v1685);
  v1686 = (UserEventDeckMaster_o *)sub_21FFEBC(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1686, 0);
  if ( v1686 )
  {
    v3 = sub_21FFDA4(v1686, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF0u )
    goto LABEL_1691;
  v1->m_Items[240] = (DataMasterBase_o *)v1686;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[240],
    (int32_t)v1686,
    v1687,
    v1688,
    v1689,
    v1690,
    v1691,
    v1692);
  v1693 = (EventTowerMaster_o *)sub_21FFEBC(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1693, 0);
  if ( v1693 )
  {
    v3 = sub_21FFDA4(v1693, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF1u )
    goto LABEL_1691;
  v1->m_Items[241] = (DataMasterBase_o *)v1693;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[241],
    (int32_t)v1693,
    v1694,
    v1695,
    v1696,
    v1697,
    v1698,
    v1699);
  v1700 = (EventTowerRewardMaster_o *)sub_21FFEBC(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1700, 0);
  if ( v1700 )
  {
    v3 = sub_21FFDA4(v1700, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF2u )
    goto LABEL_1691;
  v1->m_Items[242] = (DataMasterBase_o *)v1700;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[242],
    (int32_t)v1700,
    v1701,
    v1702,
    v1703,
    v1704,
    v1705,
    v1706);
  v1707 = (EventBulletinBoardMaster_o *)sub_21FFEBC(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1707, 0);
  if ( v1707 )
  {
    v3 = sub_21FFDA4(v1707, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF3u )
    goto LABEL_1691;
  v1->m_Items[243] = (DataMasterBase_o *)v1707;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[243],
    (int32_t)v1707,
    v1708,
    v1709,
    v1710,
    v1711,
    v1712,
    v1713);
  v1714 = (EventBulletinBoardReleaseMaster_o *)sub_21FFEBC(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1714, 0);
  if ( v1714 )
  {
    v3 = sub_21FFDA4(v1714, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF4u )
    goto LABEL_1691;
  v1->m_Items[244] = (DataMasterBase_o *)v1714;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[244],
    (int32_t)v1714,
    v1715,
    v1716,
    v1717,
    v1718,
    v1719,
    v1720);
  v1721 = (EventFactoryMaster_o *)sub_21FFEBC(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1721, 0);
  if ( v1721 )
  {
    v3 = sub_21FFDA4(v1721, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF5u )
    goto LABEL_1691;
  v1->m_Items[245] = (DataMasterBase_o *)v1721;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[245],
    (int32_t)v1721,
    v1722,
    v1723,
    v1724,
    v1725,
    v1726,
    v1727);
  v1728 = (ShopGroupMaster_o *)sub_21FFEBC(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1728, 0);
  if ( v1728 )
  {
    v3 = sub_21FFDA4(v1728, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF6u )
    goto LABEL_1691;
  v1->m_Items[246] = (DataMasterBase_o *)v1728;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[246],
    (int32_t)v1728,
    v1729,
    v1730,
    v1731,
    v1732,
    v1733,
    v1734);
  v1735 = (AuraEffectMaster_o *)sub_21FFEBC(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1735, 0);
  if ( v1735 )
  {
    v3 = sub_21FFDA4(v1735, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF7u )
    goto LABEL_1691;
  v1->m_Items[247] = (DataMasterBase_o *)v1735;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[247],
    (int32_t)v1735,
    v1736,
    v1737,
    v1738,
    v1739,
    v1740,
    v1741);
  v1742 = (AuraEffectPosOverwriteMaster_o *)sub_21FFEBC(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1742, 0);
  if ( v1742 )
  {
    v3 = sub_21FFDA4(v1742, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF8u )
    goto LABEL_1691;
  v1->m_Items[248] = (DataMasterBase_o *)v1742;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[248],
    (int32_t)v1742,
    v1743,
    v1744,
    v1745,
    v1746,
    v1747,
    v1748);
  v1749 = (UserEventMissionFixMaster_o *)sub_21FFEBC(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1749, 0);
  if ( v1749 )
  {
    v3 = sub_21FFDA4(v1749, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xF9u )
    goto LABEL_1691;
  v1->m_Items[249] = (DataMasterBase_o *)v1749;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[249],
    (int32_t)v1749,
    v1750,
    v1751,
    v1752,
    v1753,
    v1754,
    v1755);
  v1756 = (NotEndEventMissionFixMaster_o *)sub_21FFEBC(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1756, 0);
  if ( v1756 )
  {
    v3 = sub_21FFDA4(v1756, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xFAu )
    goto LABEL_1691;
  v1->m_Items[250] = (DataMasterBase_o *)v1756;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[250],
    (int32_t)v1756,
    v1757,
    v1758,
    v1759,
    v1760,
    v1761,
    v1762);
  v1763 = (EnemyMstMaster_o *)sub_21FFEBC(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1763, 0);
  if ( v1763 )
  {
    v3 = sub_21FFDA4(v1763, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xFBu )
    goto LABEL_1691;
  v1->m_Items[251] = (DataMasterBase_o *)v1763;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[251],
    (int32_t)v1763,
    v1764,
    v1765,
    v1766,
    v1767,
    v1768,
    v1769);
  v1770 = (EnemyMstBattleMaster_o *)sub_21FFEBC(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1770, 0);
  if ( v1770 )
  {
    v3 = sub_21FFDA4(v1770, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xFCu )
    goto LABEL_1691;
  v1->m_Items[252] = (DataMasterBase_o *)v1770;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[252],
    (int32_t)v1770,
    v1771,
    v1772,
    v1773,
    v1774,
    v1775,
    v1776);
  v1777 = (ServantSkillReleaseMaster_o *)sub_21FFEBC(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1777, 0);
  if ( v1777 )
  {
    v3 = sub_21FFDA4(v1777, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xFDu )
    goto LABEL_1691;
  v1->m_Items[253] = (DataMasterBase_o *)v1777;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[253],
    (int32_t)v1777,
    v1778,
    v1779,
    v1780,
    v1781,
    v1782,
    v1783);
  v1784 = (ServantPassiveSkillReleaseMaster_o *)sub_21FFEBC(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1784, 0);
  if ( v1784 )
  {
    v3 = sub_21FFDA4(v1784, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0xFEu )
    goto LABEL_1691;
  v1->m_Items[254] = (DataMasterBase_o *)v1784;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[254],
    (int32_t)v1784,
    v1785,
    v1786,
    v1787,
    v1788,
    v1789,
    v1790);
  v1791 = (ServantTreasureDeviceReleaseMaster_o *)sub_21FFEBC(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1791, 0);
  if ( v1791 )
  {
    v3 = sub_21FFDA4(v1791, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFF00) == 0 )
    goto LABEL_1691;
  v1->m_Items[255] = (DataMasterBase_o *)v1791;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[255],
    (int32_t)v1791,
    v1792,
    v1793,
    v1794,
    v1795,
    v1796,
    v1797);
  v1798 = (MapGimmickReleaseMaster_o *)sub_21FFEBC(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1798, 0);
  if ( v1798 )
  {
    v3 = sub_21FFDA4(v1798, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x100u )
    goto LABEL_1691;
  v1->m_Items[256] = (DataMasterBase_o *)v1798;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[256],
    (int32_t)v1798,
    v1799,
    v1800,
    v1801,
    v1802,
    v1803,
    v1804);
  v1805 = (CommandCodeMaster_o *)sub_21FFEBC(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1805, 0);
  if ( v1805 )
  {
    v3 = sub_21FFDA4(v1805, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x101u )
    goto LABEL_1691;
  v1->m_Items[257] = (DataMasterBase_o *)v1805;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[257],
    (int32_t)v1805,
    v1806,
    v1807,
    v1808,
    v1809,
    v1810,
    v1811);
  v1812 = (ServantCommandCodeUnlockMaster_o *)sub_21FFEBC(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1812, 0);
  if ( v1812 )
  {
    v3 = sub_21FFDA4(v1812, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x102u )
    goto LABEL_1691;
  v1->m_Items[258] = (DataMasterBase_o *)v1812;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[258],
    (int32_t)v1812,
    v1813,
    v1814,
    v1815,
    v1816,
    v1817,
    v1818);
  v1819 = (UserCommandCodeMaster_o *)sub_21FFEBC(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1819, 0);
  if ( v1819 )
  {
    v3 = sub_21FFDA4(v1819, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x103u )
    goto LABEL_1691;
  v1->m_Items[259] = (DataMasterBase_o *)v1819;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[259],
    (int32_t)v1819,
    v1820,
    v1821,
    v1822,
    v1823,
    v1824,
    v1825);
  v1826 = (UserCommandCodeCollectionMaster_o *)sub_21FFEBC(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1826, 0);
  if ( v1826 )
  {
    v3 = sub_21FFDA4(v1826, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x104u )
    goto LABEL_1691;
  v1->m_Items[260] = (DataMasterBase_o *)v1826;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[260],
    (int32_t)v1826,
    v1827,
    v1828,
    v1829,
    v1830,
    v1831,
    v1832);
  v1833 = (UserServantCommandCodeMaster_o *)sub_21FFEBC(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1833, 0);
  if ( v1833 )
  {
    v3 = sub_21FFDA4(v1833, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x105u )
    goto LABEL_1691;
  v1->m_Items[261] = (DataMasterBase_o *)v1833;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[261],
    (int32_t)v1833,
    v1834,
    v1835,
    v1836,
    v1837,
    v1838,
    v1839);
  v1840 = (UserServantCommandCardMaster_o *)sub_21FFEBC(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1840, 0);
  if ( v1840 )
  {
    v3 = sub_21FFDA4(v1840, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x106u )
    goto LABEL_1691;
  v1->m_Items[262] = (DataMasterBase_o *)v1840;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[262],
    (int32_t)v1840,
    v1841,
    v1842,
    v1843,
    v1844,
    v1845,
    v1846);
  v1847 = (CommandCardRankParamMaster_o *)sub_21FFEBC(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1847, 0);
  if ( v1847 )
  {
    v3 = sub_21FFDA4(v1847, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x107u )
    goto LABEL_1691;
  v1->m_Items[263] = (DataMasterBase_o *)v1847;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[263],
    (int32_t)v1847,
    v1848,
    v1849,
    v1850,
    v1851,
    v1852,
    v1853);
  v1854 = (CommandCodeSkillMaster_o *)sub_21FFEBC(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1854, 0);
  if ( v1854 )
  {
    v3 = sub_21FFDA4(v1854, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x108u )
    goto LABEL_1691;
  v1->m_Items[264] = (DataMasterBase_o *)v1854;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[264],
    (int32_t)v1854,
    v1855,
    v1856,
    v1857,
    v1858,
    v1859,
    v1860);
  v1861 = (CommandCodeSkillReleaseMaster_o *)sub_21FFEBC(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1861, 0);
  if ( v1861 )
  {
    v3 = sub_21FFDA4(v1861, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x109u )
    goto LABEL_1691;
  v1->m_Items[265] = (DataMasterBase_o *)v1861;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[265],
    (int32_t)v1861,
    v1862,
    v1863,
    v1864,
    v1865,
    v1866,
    v1867);
  v1868 = (CommandCodeCommentMaster_o *)sub_21FFEBC(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1868, 0);
  if ( v1868 )
  {
    v3 = sub_21FFDA4(v1868, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Au )
    goto LABEL_1691;
  v1->m_Items[266] = (DataMasterBase_o *)v1868;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[266],
    (int32_t)v1868,
    v1869,
    v1870,
    v1871,
    v1872,
    v1873,
    v1874);
  v1875 = (EventStatusMaster_o *)sub_21FFEBC(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1875, 0);
  if ( v1875 )
  {
    v3 = sub_21FFDA4(v1875, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Bu )
    goto LABEL_1691;
  v1->m_Items[267] = (DataMasterBase_o *)v1875;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[267],
    (int32_t)v1875,
    v1876,
    v1877,
    v1878,
    v1879,
    v1880,
    v1881);
  v1882 = (EventStatusQuestMaster_o *)sub_21FFEBC(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1882, 0);
  if ( v1882 )
  {
    v3 = sub_21FFDA4(v1882, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Cu )
    goto LABEL_1691;
  v1->m_Items[268] = (DataMasterBase_o *)v1882;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[268],
    (int32_t)v1882,
    v1883,
    v1884,
    v1885,
    v1886,
    v1887,
    v1888);
  v1889 = (CommonRestrictionMaster_o *)sub_21FFEBC(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1889, 0);
  if ( v1889 )
  {
    v3 = sub_21FFDA4(v1889, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Du )
    goto LABEL_1691;
  v1->m_Items[269] = (DataMasterBase_o *)v1889;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[269],
    (int32_t)v1889,
    v1890,
    v1891,
    v1892,
    v1893,
    v1894,
    v1895);
  v1896 = (EventPointBuffMaster_o *)sub_21FFEBC(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1896, 0);
  if ( v1896 )
  {
    v3 = sub_21FFDA4(v1896, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Eu )
    goto LABEL_1691;
  v1->m_Items[270] = (DataMasterBase_o *)v1896;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[270],
    (int32_t)v1896,
    v1897,
    v1898,
    v1899,
    v1900,
    v1901,
    v1902);
  v1903 = (UserFollowMaster_o *)sub_21FFEBC(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1903, 0);
  if ( v1903 )
  {
    v3 = sub_21FFDA4(v1903, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x10Fu )
    goto LABEL_1691;
  v1->m_Items[271] = (DataMasterBase_o *)v1903;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[271],
    (int32_t)v1903,
    v1904,
    v1905,
    v1906,
    v1907,
    v1908,
    v1909);
  v1910 = (EventRewardGuideReleaseMaster_o *)sub_21FFEBC(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1910, 0);
  if ( v1910 )
  {
    v3 = sub_21FFDA4(v1910, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x110u )
    goto LABEL_1691;
  v1->m_Items[272] = (DataMasterBase_o *)v1910;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[272],
    (int32_t)v1910,
    v1911,
    v1912,
    v1913,
    v1914,
    v1915,
    v1916);
  v1917 = (NpcServantEquipMaster_o *)sub_21FFEBC(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1917, 0);
  if ( v1917 )
  {
    v3 = sub_21FFDA4(v1917, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x111u )
    goto LABEL_1691;
  v1->m_Items[273] = (DataMasterBase_o *)v1917;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[273],
    (int32_t)v1917,
    v1918,
    v1919,
    v1920,
    v1921,
    v1922,
    v1923);
  v1924 = (EventCampaignReleaseMaster_o *)sub_21FFEBC(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1924, 0);
  if ( v1924 )
  {
    v3 = sub_21FFDA4(v1924, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x112u )
    goto LABEL_1691;
  v1->m_Items[274] = (DataMasterBase_o *)v1924;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[274],
    (int32_t)v1924,
    v1925,
    v1926,
    v1927,
    v1928,
    v1929,
    v1930);
  v1931 = (ServantMaterialFolderMaster_o *)sub_21FFEBC(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1931, 0);
  if ( v1931 )
  {
    v3 = sub_21FFDA4(v1931, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x113u )
    goto LABEL_1691;
  v1->m_Items[275] = (DataMasterBase_o *)v1931;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[275],
    (int32_t)v1931,
    v1932,
    v1933,
    v1934,
    v1935,
    v1936,
    v1937);
  v1938 = (EventEquipSkillReleaseMaster_o *)sub_21FFEBC(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1938, 0);
  if ( v1938 )
  {
    v3 = sub_21FFDA4(v1938, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x114u )
    goto LABEL_1691;
  v1->m_Items[276] = (DataMasterBase_o *)v1938;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[276],
    (int32_t)v1938,
    v1939,
    v1940,
    v1941,
    v1942,
    v1943,
    v1944);
  v1945 = (EventPointActivityMaster_o *)sub_21FFEBC(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1945, 0);
  if ( v1945 )
  {
    v3 = sub_21FFDA4(v1945, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x115u )
    goto LABEL_1691;
  v1->m_Items[277] = (DataMasterBase_o *)v1945;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[277],
    (int32_t)v1945,
    v1946,
    v1947,
    v1948,
    v1949,
    v1950,
    v1951);
  v1952 = (FunctionCategoryMaster_o *)sub_21FFEBC(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1952, 0);
  if ( v1952 )
  {
    v3 = sub_21FFDA4(v1952, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x116u )
    goto LABEL_1691;
  v1->m_Items[278] = (DataMasterBase_o *)v1952;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[278],
    (int32_t)v1952,
    v1953,
    v1954,
    v1955,
    v1956,
    v1957,
    v1958);
  v1959 = (QuestPickupMaster_o *)sub_21FFEBC(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1959, 0);
  if ( v1959 )
  {
    v3 = sub_21FFDA4(v1959, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x117u )
    goto LABEL_1691;
  v1->m_Items[279] = (DataMasterBase_o *)v1959;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[279],
    (int32_t)v1959,
    v1960,
    v1961,
    v1962,
    v1963,
    v1964,
    v1965);
  v1966 = (EventUiMaster_o *)sub_21FFEBC(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1966, 0);
  if ( v1966 )
  {
    v3 = sub_21FFDA4(v1966, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x118u )
    goto LABEL_1691;
  v1->m_Items[280] = (DataMasterBase_o *)v1966;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[280],
    (int32_t)v1966,
    v1967,
    v1968,
    v1969,
    v1970,
    v1971,
    v1972);
  v1973 = (EventUiReleaseMaster_o *)sub_21FFEBC(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1973, 0);
  if ( v1973 )
  {
    v3 = sub_21FFDA4(v1973, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x119u )
    goto LABEL_1691;
  v1->m_Items[281] = (DataMasterBase_o *)v1973;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[281],
    (int32_t)v1973,
    v1974,
    v1975,
    v1976,
    v1977,
    v1978,
    v1979);
  v1980 = (EventUiValueMaster_o *)sub_21FFEBC(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1980, 0);
  if ( v1980 )
  {
    v3 = sub_21FFDA4(v1980, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Au )
    goto LABEL_1691;
  v1->m_Items[282] = (DataMasterBase_o *)v1980;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[282],
    (int32_t)v1980,
    v1981,
    v1982,
    v1983,
    v1984,
    v1985,
    v1986);
  v1987 = (EventConquestRewardMaster_o *)sub_21FFEBC(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1987, 0);
  if ( v1987 )
  {
    v3 = sub_21FFDA4(v1987, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Bu )
    goto LABEL_1691;
  v1->m_Items[283] = (DataMasterBase_o *)v1987;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[283],
    (int32_t)v1987,
    v1988,
    v1989,
    v1990,
    v1991,
    v1992,
    v1993);
  v1994 = (NpcFollowerReleaseMaster_o *)sub_21FFEBC(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1994, 0);
  if ( v1994 )
  {
    v3 = sub_21FFDA4(v1994, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Cu )
    goto LABEL_1691;
  v1->m_Items[284] = (DataMasterBase_o *)v1994;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[284],
    (int32_t)v1994,
    v1995,
    v1996,
    v1997,
    v1998,
    v1999,
    v2000);
  v2001 = (EventBonusFilterMaster_o *)sub_21FFEBC(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v2001, 0);
  if ( v2001 )
  {
    v3 = sub_21FFDA4(v2001, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Du )
    goto LABEL_1691;
  v1->m_Items[285] = (DataMasterBase_o *)v2001;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[285],
    (int32_t)v2001,
    v2002,
    v2003,
    v2004,
    v2005,
    v2006,
    v2007);
  v2008 = (EventBonusFilterGroupInfoMaster_o *)sub_21FFEBC(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v2008, 0);
  if ( v2008 )
  {
    v3 = sub_21FFDA4(v2008, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Eu )
    goto LABEL_1691;
  v1->m_Items[286] = (DataMasterBase_o *)v2008;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[286],
    (int32_t)v2008,
    v2009,
    v2010,
    v2011,
    v2012,
    v2013,
    v2014);
  v2015 = (EventBonusFilterGroupMemberMaster_o *)sub_21FFEBC(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v2015, 0);
  if ( v2015 )
  {
    v3 = sub_21FFDA4(v2015, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x11Fu )
    goto LABEL_1691;
  v1->m_Items[287] = (DataMasterBase_o *)v2015;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[287],
    (int32_t)v2015,
    v2016,
    v2017,
    v2018,
    v2019,
    v2020,
    v2021);
  v2022 = (UserGachaExtraCountMaster_o *)sub_21FFEBC(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v2022, 0);
  if ( v2022 )
  {
    v3 = sub_21FFDA4(v2022, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x120u )
    goto LABEL_1691;
  v1->m_Items[288] = (DataMasterBase_o *)v2022;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[288],
    (int32_t)v2022,
    v2023,
    v2024,
    v2025,
    v2026,
    v2027,
    v2028);
  v2029 = (PrivilegeMaster_o *)sub_21FFEBC(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v2029, 0);
  if ( v2029 )
  {
    v3 = sub_21FFDA4(v2029, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x121u )
    goto LABEL_1691;
  v1->m_Items[289] = (DataMasterBase_o *)v2029;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[289],
    (int32_t)v2029,
    v2030,
    v2031,
    v2032,
    v2033,
    v2034,
    v2035);
  v2036 = (UserPrivilegeMaster_o *)sub_21FFEBC(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v2036, 0);
  if ( v2036 )
  {
    v3 = sub_21FFDA4(v2036, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x122u )
    goto LABEL_1691;
  v1->m_Items[290] = (DataMasterBase_o *)v2036;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[290],
    (int32_t)v2036,
    v2037,
    v2038,
    v2039,
    v2040,
    v2041,
    v2042);
  v2043 = (UserQuestRouteMaster_o *)sub_21FFEBC(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v2043, 0);
  if ( v2043 )
  {
    v3 = sub_21FFDA4(v2043, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x123u )
    goto LABEL_1691;
  v1->m_Items[291] = (DataMasterBase_o *)v2043;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[291],
    (int32_t)v2043,
    v2044,
    v2045,
    v2046,
    v2047,
    v2048,
    v2049);
  v2050 = (EventBossStatusUiMaster_o *)sub_21FFEBC(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v2050, 0);
  if ( v2050 )
  {
    v3 = sub_21FFDA4(v2050, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x124u )
    goto LABEL_1691;
  v1->m_Items[292] = (DataMasterBase_o *)v2050;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[292],
    (int32_t)v2050,
    v2051,
    v2052,
    v2053,
    v2054,
    v2055,
    v2056);
  v2057 = (CommonReleaseMaster_o *)sub_21FFEBC(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v2057, 0);
  if ( v2057 )
  {
    v3 = sub_21FFDA4(v2057, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x125u )
    goto LABEL_1691;
  v1->m_Items[293] = (DataMasterBase_o *)v2057;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[293],
    (int32_t)v2057,
    v2058,
    v2059,
    v2060,
    v2061,
    v2062,
    v2063);
  v2064 = (QuestSpotReleaseMaster_o *)sub_21FFEBC(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v2064, 0);
  if ( v2064 )
  {
    v3 = sub_21FFDA4(v2064, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x126u )
    goto LABEL_1691;
  v1->m_Items[294] = (DataMasterBase_o *)v2064;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[294],
    (int32_t)v2064,
    v2065,
    v2066,
    v2067,
    v2068,
    v2069,
    v2070);
  v2071 = (VoiceMaterialCondMaster_o *)sub_21FFEBC(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v2071, 0);
  if ( v2071 )
  {
    v3 = sub_21FFDA4(v2071, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x127u )
    goto LABEL_1691;
  v1->m_Items[295] = (DataMasterBase_o *)v2071;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[295],
    (int32_t)v2071,
    v2072,
    v2073,
    v2074,
    v2075,
    v2076,
    v2077);
  v2078 = (ClassRelationOverwriteMaster_o *)sub_21FFEBC(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v2078, 0);
  if ( v2078 )
  {
    v3 = sub_21FFDA4(v2078, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x128u )
    goto LABEL_1691;
  v1->m_Items[296] = (DataMasterBase_o *)v2078;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[296],
    (int32_t)v2078,
    v2079,
    v2080,
    v2081,
    v2082,
    v2083,
    v2084);
  v2085 = (EventGroupMaster_o *)sub_21FFEBC(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v2085, 0);
  if ( v2085 )
  {
    v3 = sub_21FFDA4(v2085, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x129u )
    goto LABEL_1691;
  v1->m_Items[297] = (DataMasterBase_o *)v2085;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[297],
    (int32_t)v2085,
    v2086,
    v2087,
    v2088,
    v2089,
    v2090,
    v2091);
  v2092 = (TotalBoxGachaMaster_o *)sub_21FFEBC(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v2092, 0);
  if ( v2092 )
  {
    v3 = sub_21FFDA4(v2092, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Au )
    goto LABEL_1691;
  v1->m_Items[298] = (DataMasterBase_o *)v2092;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[298],
    (int32_t)v2092,
    v2093,
    v2094,
    v2095,
    v2096,
    v2097,
    v2098);
  v2099 = (ServantTreasureDeviceDamageMaster_o *)sub_21FFEBC(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v2099, 0);
  if ( v2099 )
  {
    v3 = sub_21FFDA4(v2099, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Bu )
    goto LABEL_1691;
  v1->m_Items[299] = (DataMasterBase_o *)v2099;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[299],
    (int32_t)v2099,
    v2100,
    v2101,
    v2102,
    v2103,
    v2104,
    v2105);
  v2106 = (UserEventServantFatigueMaster_o *)sub_21FFEBC(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v2106, 0);
  if ( v2106 )
  {
    v3 = sub_21FFDA4(v2106, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Cu )
    goto LABEL_1691;
  v1->m_Items[300] = (DataMasterBase_o *)v2106;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[300],
    (int32_t)v2106,
    v2107,
    v2108,
    v2109,
    v2110,
    v2111,
    v2112);
  v2113 = (EventRewardBgMaster_o *)sub_21FFEBC(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v2113, 0);
  if ( v2113 )
  {
    v3 = sub_21FFDA4(v2113, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Du )
    goto LABEL_1691;
  v1->m_Items[301] = (DataMasterBase_o *)v2113;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[301],
    (int32_t)v2113,
    v2114,
    v2115,
    v2116,
    v2117,
    v2118,
    v2119);
  v2120 = (EventFatigueRecoveryMaster_o *)sub_21FFEBC(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v2120, 0);
  if ( v2120 )
  {
    v3 = sub_21FFDA4(v2120, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Eu )
    goto LABEL_1691;
  v1->m_Items[302] = (DataMasterBase_o *)v2120;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[302],
    (int32_t)v2120,
    v2121,
    v2122,
    v2123,
    v2124,
    v2125,
    v2126);
  v2127 = (EventBoostItemUsedMaster_o *)sub_21FFEBC(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v2127, 0);
  if ( v2127 )
  {
    v3 = sub_21FFDA4(v2127, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x12Fu )
    goto LABEL_1691;
  v1->m_Items[303] = (DataMasterBase_o *)v2127;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[303],
    (int32_t)v2127,
    v2128,
    v2129,
    v2130,
    v2131,
    v2132,
    v2133);
  v2134 = (StatusEffectPosOverwriteMaster_o *)sub_21FFEBC(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v2134, 0);
  if ( v2134 )
  {
    v3 = sub_21FFDA4(v2134, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x130u )
    goto LABEL_1691;
  v1->m_Items[304] = (DataMasterBase_o *)v2134;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[304],
    (int32_t)v2134,
    v2135,
    v2136,
    v2137,
    v2138,
    v2139,
    v2140);
  v2141 = (QuestPhaseDetailAddMaster_o *)sub_21FFEBC(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v2141, 0);
  if ( v2141 )
  {
    v3 = sub_21FFDA4(v2141, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x131u )
    goto LABEL_1691;
  v1->m_Items[305] = (DataMasterBase_o *)v2141;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[305],
    (int32_t)v2141,
    v2142,
    v2143,
    v2144,
    v2145,
    v2146,
    v2147);
  v2148 = (VoiceClosedMessageMaster_o *)sub_21FFEBC(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v2148, 0);
  if ( v2148 )
  {
    v3 = sub_21FFDA4(v2148, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x132u )
    goto LABEL_1691;
  v1->m_Items[306] = (DataMasterBase_o *)v2148;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[306],
    (int32_t)v2148,
    v2149,
    v2150,
    v2151,
    v2152,
    v2153,
    v2154);
  v2155 = (ReprintStageMaster_o *)sub_21FFEBC(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v2155, 0);
  if ( v2155 )
  {
    v3 = sub_21FFDA4(v2155, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x133u )
    goto LABEL_1691;
  v1->m_Items[307] = (DataMasterBase_o *)v2155;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[307],
    (int32_t)v2155,
    v2156,
    v2157,
    v2158,
    v2159,
    v2160,
    v2161);
  v2162 = (UserCombineExpMaster_o *)sub_21FFEBC(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v2162, 0);
  if ( v2162 )
  {
    v3 = sub_21FFDA4(v2162, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x134u )
    goto LABEL_1691;
  v1->m_Items[308] = (DataMasterBase_o *)v2162;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[308],
    (int32_t)v2162,
    v2163,
    v2164,
    v2165,
    v2166,
    v2167,
    v2168);
  v2169 = (EventBoardGameCellMaster_o *)sub_21FFEBC(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v2169, 0);
  if ( v2169 )
  {
    v3 = sub_21FFDA4(v2169, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x135u )
    goto LABEL_1691;
  v1->m_Items[309] = (DataMasterBase_o *)v2169;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[309],
    (int32_t)v2169,
    v2170,
    v2171,
    v2172,
    v2173,
    v2174,
    v2175);
  v2176 = (EventBoardGameTokenMaster_o *)sub_21FFEBC(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v2176, 0);
  if ( v2176 )
  {
    v3 = sub_21FFDA4(v2176, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x136u )
    goto LABEL_1691;
  v1->m_Items[310] = (DataMasterBase_o *)v2176;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[310],
    (int32_t)v2176,
    v2177,
    v2178,
    v2179,
    v2180,
    v2181,
    v2182);
  v2183 = (EventBoardGameTokenRewardMaster_o *)sub_21FFEBC(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v2183, 0);
  if ( v2183 )
  {
    v3 = sub_21FFDA4(v2183, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x137u )
    goto LABEL_1691;
  v1->m_Items[311] = (DataMasterBase_o *)v2183;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[311],
    (int32_t)v2183,
    v2184,
    v2185,
    v2186,
    v2187,
    v2188,
    v2189);
  v2190 = (UserEventBoardGameTokenMaster_o *)sub_21FFEBC(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v2190, 0);
  if ( v2190 )
  {
    v3 = sub_21FFDA4(v2190, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x138u )
    goto LABEL_1691;
  v1->m_Items[312] = (DataMasterBase_o *)v2190;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[312],
    (int32_t)v2190,
    v2191,
    v2192,
    v2193,
    v2194,
    v2195,
    v2196);
  v2197 = (ServantAnimationOverwriteMaster_o *)sub_21FFEBC(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v2197, 0);
  if ( v2197 )
  {
    v3 = sub_21FFDA4(v2197, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x139u )
    goto LABEL_1691;
  v1->m_Items[313] = (DataMasterBase_o *)v2197;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[313],
    (int32_t)v2197,
    v2198,
    v2199,
    v2200,
    v2201,
    v2202,
    v2203);
  v2204 = (OpeningMovieMaster_o *)sub_21FFEBC(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v2204, 0);
  if ( v2204 )
  {
    v3 = sub_21FFDA4(v2204, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Au )
    goto LABEL_1691;
  v1->m_Items[314] = (DataMasterBase_o *)v2204;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[314],
    (int32_t)v2204,
    v2205,
    v2206,
    v2207,
    v2208,
    v2209,
    v2210);
  v2211 = (ServantLimitSpoilerProtectionMaster_o *)sub_21FFEBC(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v2211, 0);
  if ( v2211 )
  {
    v3 = sub_21FFDA4(v2211, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Bu )
    goto LABEL_1691;
  v1->m_Items[315] = (DataMasterBase_o *)v2211;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[315],
    (int32_t)v2211,
    v2212,
    v2213,
    v2214,
    v2215,
    v2216,
    v2217);
  v2218 = (PickupUserFollowerMaster_o *)sub_21FFEBC(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v2218, 0);
  if ( v2218 )
  {
    v3 = sub_21FFDA4(v2218, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Cu )
    goto LABEL_1691;
  v1->m_Items[316] = (DataMasterBase_o *)v2218;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[316],
    (int32_t)v2218,
    v2219,
    v2220,
    v2221,
    v2222,
    v2223,
    v2224);
  v2225 = (ServantCollectionMaster_o *)sub_21FFEBC(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v2225, 0);
  if ( v2225 )
  {
    v3 = sub_21FFDA4(v2225, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Du )
    goto LABEL_1691;
  v1->m_Items[317] = (DataMasterBase_o *)v2225;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[317],
    (int32_t)v2225,
    v2226,
    v2227,
    v2228,
    v2229,
    v2230,
    v2231);
  v2232 = (GachaBehaviorMaster_o *)sub_21FFEBC(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v2232, 0);
  if ( v2232 )
  {
    v3 = sub_21FFDA4(v2232, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Eu )
    goto LABEL_1691;
  v1->m_Items[318] = (DataMasterBase_o *)v2232;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[318],
    (int32_t)v2232,
    v2233,
    v2234,
    v2235,
    v2236,
    v2237,
    v2238);
  v2239 = (EventQuestCooltimeMaster_o *)sub_21FFEBC(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v2239, 0);
  if ( v2239 )
  {
    v3 = sub_21FFDA4(v2239, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x13Fu )
    goto LABEL_1691;
  v1->m_Items[319] = (DataMasterBase_o *)v2239;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[319],
    (int32_t)v2239,
    v2240,
    v2241,
    v2242,
    v2243,
    v2244,
    v2245);
  v2246 = (UserEventQuestCooltimeMaster_o *)sub_21FFEBC(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v2246, 0);
  if ( v2246 )
  {
    v3 = sub_21FFDA4(v2246, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x140u )
    goto LABEL_1691;
  v1->m_Items[320] = (DataMasterBase_o *)v2246;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[320],
    (int32_t)v2246,
    v2247,
    v2248,
    v2249,
    v2250,
    v2251,
    v2252);
  v2253 = (BoostMaster_o *)sub_21FFEBC(BoostMaster_TypeInfo);
  BoostMaster___ctor(v2253, 0);
  if ( v2253 )
  {
    v3 = sub_21FFDA4(v2253, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x141u )
    goto LABEL_1691;
  v1->m_Items[321] = (DataMasterBase_o *)v2253;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[321],
    (int32_t)v2253,
    v2254,
    v2255,
    v2256,
    v2257,
    v2258,
    v2259);
  v2260 = (WarBoardMaster_o *)sub_21FFEBC(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v2260, 0);
  if ( v2260 )
  {
    v3 = sub_21FFDA4(v2260, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x142u )
    goto LABEL_1691;
  v1->m_Items[322] = (DataMasterBase_o *)v2260;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[322],
    (int32_t)v2260,
    v2261,
    v2262,
    v2263,
    v2264,
    v2265,
    v2266);
  v2267 = (WarBoardSquareMaster_o *)sub_21FFEBC(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v2267, 0);
  if ( v2267 )
  {
    v3 = sub_21FFDA4(v2267, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x143u )
    goto LABEL_1691;
  v1->m_Items[323] = (DataMasterBase_o *)v2267;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[323],
    (int32_t)v2267,
    v2268,
    v2269,
    v2270,
    v2271,
    v2272,
    v2273);
  v2274 = (WarBoardRoadMaster_o *)sub_21FFEBC(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v2274, 0);
  if ( v2274 )
  {
    v3 = sub_21FFDA4(v2274, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x144u )
    goto LABEL_1691;
  v1->m_Items[324] = (DataMasterBase_o *)v2274;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[324],
    (int32_t)v2274,
    v2275,
    v2276,
    v2277,
    v2278,
    v2279,
    v2280);
  v2281 = (WarBoardStageMaster_o *)sub_21FFEBC(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v2281, 0);
  if ( v2281 )
  {
    v3 = sub_21FFDA4(v2281, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x145u )
    goto LABEL_1691;
  v1->m_Items[325] = (DataMasterBase_o *)v2281;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[325],
    (int32_t)v2281,
    v2282,
    v2283,
    v2284,
    v2285,
    v2286,
    v2287);
  v2288 = (WarBoardActionPointMaster_o *)sub_21FFEBC(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v2288, 0);
  if ( v2288 )
  {
    v3 = sub_21FFDA4(v2288, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x146u )
    goto LABEL_1691;
  v1->m_Items[326] = (DataMasterBase_o *)v2288;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[326],
    (int32_t)v2288,
    v2289,
    v2290,
    v2291,
    v2292,
    v2293,
    v2294);
  v2295 = (WarBoardActionTrendMaster_o *)sub_21FFEBC(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v2295, 0);
  if ( v2295 )
  {
    v3 = sub_21FFDA4(v2295, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x147u )
    goto LABEL_1691;
  v1->m_Items[327] = (DataMasterBase_o *)v2295;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[327],
    (int32_t)v2295,
    v2296,
    v2297,
    v2298,
    v2299,
    v2300,
    v2301);
  v2302 = (WarBoardTacticalTrendMaster_o *)sub_21FFEBC(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v2302, 0);
  if ( v2302 )
  {
    v3 = sub_21FFDA4(v2302, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x148u )
    goto LABEL_1691;
  v1->m_Items[328] = (DataMasterBase_o *)v2302;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[328],
    (int32_t)v2302,
    v2303,
    v2304,
    v2305,
    v2306,
    v2307,
    v2308);
  v2309 = (WarBoardStageLayoutMaster_o *)sub_21FFEBC(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v2309, 0);
  if ( v2309 )
  {
    v3 = sub_21FFDA4(v2309, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x149u )
    goto LABEL_1691;
  v1->m_Items[329] = (DataMasterBase_o *)v2309;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[329],
    (int32_t)v2309,
    v2310,
    v2311,
    v2312,
    v2313,
    v2314,
    v2315);
  v2316 = (WarBoardStageNpcMaster_o *)sub_21FFEBC(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v2316, 0);
  if ( v2316 )
  {
    v3 = sub_21FFDA4(v2316, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Au )
    goto LABEL_1691;
  v1->m_Items[330] = (DataMasterBase_o *)v2316;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[330],
    (int32_t)v2316,
    v2317,
    v2318,
    v2319,
    v2320,
    v2321,
    v2322);
  v2323 = (WarBoardStageWallMaster_o *)sub_21FFEBC(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v2323, 0);
  if ( v2323 )
  {
    v3 = sub_21FFDA4(v2323, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Bu )
    goto LABEL_1691;
  v1->m_Items[331] = (DataMasterBase_o *)v2323;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[331],
    (int32_t)v2323,
    v2324,
    v2325,
    v2326,
    v2327,
    v2328,
    v2329);
  v2330 = (WarBoardAIMaster_o *)sub_21FFEBC(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v2330, 0);
  if ( v2330 )
  {
    v3 = sub_21FFDA4(v2330, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Cu )
    goto LABEL_1691;
  v1->m_Items[332] = (DataMasterBase_o *)v2330;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[332],
    (int32_t)v2330,
    v2331,
    v2332,
    v2333,
    v2334,
    v2335,
    v2336);
  v2337 = (WarBoardRatingBaseMaster_o *)sub_21FFEBC(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v2337, 0);
  if ( v2337 )
  {
    v3 = sub_21FFDA4(v2337, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Du )
    goto LABEL_1691;
  v1->m_Items[333] = (DataMasterBase_o *)v2337;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[333],
    (int32_t)v2337,
    v2338,
    v2339,
    v2340,
    v2341,
    v2342,
    v2343);
  v2344 = (WarBoardRatingOffsetMaster_o *)sub_21FFEBC(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v2344, 0);
  if ( v2344 )
  {
    v3 = sub_21FFDA4(v2344, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Eu )
    goto LABEL_1691;
  v1->m_Items[334] = (DataMasterBase_o *)v2344;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[334],
    (int32_t)v2344,
    v2345,
    v2346,
    v2347,
    v2348,
    v2349,
    v2350);
  v2351 = (WarBoardItemMaster_o *)sub_21FFEBC(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v2351, 0);
  if ( v2351 )
  {
    v3 = sub_21FFDA4(v2351, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x14Fu )
    goto LABEL_1691;
  v1->m_Items[335] = (DataMasterBase_o *)v2351;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[335],
    (int32_t)v2351,
    v2352,
    v2353,
    v2354,
    v2355,
    v2356,
    v2357);
  v2358 = (WarBoardTreasureMaster_o *)sub_21FFEBC(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v2358, 0);
  if ( v2358 )
  {
    v3 = sub_21FFDA4(v2358, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x150u )
    goto LABEL_1691;
  v1->m_Items[336] = (DataMasterBase_o *)v2358;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[336],
    (int32_t)v2358,
    v2359,
    v2360,
    v2361,
    v2362,
    v2363,
    v2364);
  v2365 = (WarBoardQuestMaster_o *)sub_21FFEBC(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v2365, 0);
  if ( v2365 )
  {
    v3 = sub_21FFDA4(v2365, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x151u )
    goto LABEL_1691;
  v1->m_Items[337] = (DataMasterBase_o *)v2365;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[337],
    (int32_t)v2365,
    v2366,
    v2367,
    v2368,
    v2369,
    v2370,
    v2371);
  v2372 = (WarBoardDataMaster_o *)sub_21FFEBC(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v2372, 0);
  if ( v2372 )
  {
    v3 = sub_21FFDA4(v2372, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x152u )
    goto LABEL_1691;
  v1->m_Items[338] = (DataMasterBase_o *)v2372;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[338],
    (int32_t)v2372,
    v2373,
    v2374,
    v2375,
    v2376,
    v2377,
    v2378);
  v2379 = (WarBoardIndividualityClassMaster_o *)sub_21FFEBC(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v2379, 0);
  if ( v2379 )
  {
    v3 = sub_21FFDA4(v2379, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x153u )
    goto LABEL_1691;
  v1->m_Items[339] = (DataMasterBase_o *)v2379;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[339],
    (int32_t)v2379,
    v2380,
    v2381,
    v2382,
    v2383,
    v2384,
    v2385);
  v2386 = (WarBoardActionTrendConditionMaster_o *)sub_21FFEBC(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v2386, 0);
  if ( v2386 )
  {
    v3 = sub_21FFDA4(v2386, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x154u )
    goto LABEL_1691;
  v1->m_Items[340] = (DataMasterBase_o *)v2386;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[340],
    (int32_t)v2386,
    v2387,
    v2388,
    v2389,
    v2390,
    v2391,
    v2392);
  v2393 = (WarBoardActionPointClassMaster_o *)sub_21FFEBC(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v2393, 0);
  if ( v2393 )
  {
    v3 = sub_21FFDA4(v2393, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x155u )
    goto LABEL_1691;
  v1->m_Items[341] = (DataMasterBase_o *)v2393;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[341],
    (int32_t)v2393,
    v2394,
    v2395,
    v2396,
    v2397,
    v2398,
    v2399);
  v2400 = (EventPanelMapMaster_o *)sub_21FFEBC(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v2400, 0);
  if ( v2400 )
  {
    v3 = sub_21FFDA4(v2400, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x156u )
    goto LABEL_1691;
  v1->m_Items[342] = (DataMasterBase_o *)v2400;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[342],
    (int32_t)v2400,
    v2401,
    v2402,
    v2403,
    v2404,
    v2405,
    v2406);
  v2407 = (EventPanelMapDetailMaster_o *)sub_21FFEBC(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v2407, 0);
  if ( v2407 )
  {
    v3 = sub_21FFDA4(v2407, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x157u )
    goto LABEL_1691;
  v1->m_Items[343] = (DataMasterBase_o *)v2407;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[343],
    (int32_t)v2407,
    v2408,
    v2409,
    v2410,
    v2411,
    v2412,
    v2413);
  v2414 = (EventPanelSpotMaster_o *)sub_21FFEBC(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v2414, 0);
  if ( v2414 )
  {
    v3 = sub_21FFDA4(v2414, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x158u )
    goto LABEL_1691;
  v1->m_Items[344] = (DataMasterBase_o *)v2414;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[344],
    (int32_t)v2414,
    v2415,
    v2416,
    v2417,
    v2418,
    v2419,
    v2420);
  v2421 = (EventPanelScanMaster_o *)sub_21FFEBC(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v2421, 0);
  if ( v2421 )
  {
    v3 = sub_21FFDA4(v2421, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x159u )
    goto LABEL_1691;
  v1->m_Items[345] = (DataMasterBase_o *)v2421;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[345],
    (int32_t)v2421,
    v2422,
    v2423,
    v2424,
    v2425,
    v2426,
    v2427);
  v2428 = (CommonConsumeMaster_o *)sub_21FFEBC(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v2428, 0);
  if ( v2428 )
  {
    v3 = sub_21FFDA4(v2428, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Au )
    goto LABEL_1691;
  v1->m_Items[346] = (DataMasterBase_o *)v2428;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[346],
    (int32_t)v2428,
    v2429,
    v2430,
    v2431,
    v2432,
    v2433,
    v2434);
  v2435 = (UserEventMapMaster_o *)sub_21FFEBC(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v2435, 0);
  if ( v2435 )
  {
    v3 = sub_21FFDA4(v2435, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Bu )
    goto LABEL_1691;
  v1->m_Items[347] = (DataMasterBase_o *)v2435;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[347],
    (int32_t)v2435,
    v2436,
    v2437,
    v2438,
    v2439,
    v2440,
    v2441);
  v2442 = (UserEventSpotMaster_o *)sub_21FFEBC(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v2442, 0);
  if ( v2442 )
  {
    v3 = sub_21FFDA4(v2442, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Cu )
    goto LABEL_1691;
  v1->m_Items[348] = (DataMasterBase_o *)v2442;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[348],
    (int32_t)v2442,
    v2443,
    v2444,
    v2445,
    v2446,
    v2447,
    v2448);
  v2449 = (WarGroupMaster_o *)sub_21FFEBC(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v2449, 0);
  if ( v2449 )
  {
    v3 = sub_21FFDA4(v2449, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Du )
    goto LABEL_1691;
  v1->m_Items[349] = (DataMasterBase_o *)v2449;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[349],
    (int32_t)v2449,
    v2450,
    v2451,
    v2452,
    v2453,
    v2454,
    v2455);
  v2456 = (ServantLimitImageMaster_o *)sub_21FFEBC(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v2456, 0);
  if ( v2456 )
  {
    v3 = sub_21FFDA4(v2456, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Eu )
    goto LABEL_1691;
  v1->m_Items[350] = (DataMasterBase_o *)v2456;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[350],
    (int32_t)v2456,
    v2457,
    v2458,
    v2459,
    v2460,
    v2461,
    v2462);
  v2463 = (FriendshipQuestDialogInfoMaster_o *)sub_21FFEBC(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v2463, 0);
  if ( v2463 )
  {
    v3 = sub_21FFDA4(v2463, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x15Fu )
    goto LABEL_1691;
  v1->m_Items[351] = (DataMasterBase_o *)v2463;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[351],
    (int32_t)v2463,
    v2464,
    v2465,
    v2466,
    v2467,
    v2468,
    v2469);
  v2470 = (QuestRestrictionInfoMaster_o *)sub_21FFEBC(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v2470, 0);
  if ( v2470 )
  {
    v3 = sub_21FFDA4(v2470, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x160u )
    goto LABEL_1691;
  v1->m_Items[352] = (DataMasterBase_o *)v2470;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[352],
    (int32_t)v2470,
    v2471,
    v2472,
    v2473,
    v2474,
    v2475,
    v2476);
  v2477 = (AssistMaster_o *)sub_21FFEBC(AssistMaster_TypeInfo);
  AssistMaster___ctor(v2477, 0);
  if ( v2477 )
  {
    v3 = sub_21FFDA4(v2477, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x161u )
    goto LABEL_1691;
  v1->m_Items[353] = (DataMasterBase_o *)v2477;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[353],
    (int32_t)v2477,
    v2478,
    v2479,
    v2480,
    v2481,
    v2482,
    v2483);
  v2484 = (WarBoardEffectMaster_o *)sub_21FFEBC(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v2484, 0);
  if ( v2484 )
  {
    v3 = sub_21FFDA4(v2484, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x162u )
    goto LABEL_1691;
  v1->m_Items[354] = (DataMasterBase_o *)v2484;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[354],
    (int32_t)v2484,
    v2485,
    v2486,
    v2487,
    v2488,
    v2489,
    v2490);
  v2491 = (WarBoardOnboardSkillMaster_o *)sub_21FFEBC(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v2491, 0);
  if ( v2491 )
  {
    v3 = sub_21FFDA4(v2491, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x163u )
    goto LABEL_1691;
  v1->m_Items[355] = (DataMasterBase_o *)v2491;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[355],
    (int32_t)v2491,
    v2492,
    v2493,
    v2494,
    v2495,
    v2496,
    v2497);
  v2498 = (BeforeBirthDayMaster_o *)sub_21FFEBC(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v2498, 0);
  if ( v2498 )
  {
    v3 = sub_21FFDA4(v2498, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x164u )
    goto LABEL_1691;
  v1->m_Items[356] = (DataMasterBase_o *)v2498;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[356],
    (int32_t)v2498,
    v2499,
    v2500,
    v2501,
    v2502,
    v2503,
    v2504);
  v2505 = (LoginQuestMaster_o *)sub_21FFEBC(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v2505, 0);
  if ( v2505 )
  {
    v3 = sub_21FFDA4(v2505, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x165u )
    goto LABEL_1691;
  v1->m_Items[357] = (DataMasterBase_o *)v2505;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[357],
    (int32_t)v2505,
    v2506,
    v2507,
    v2508,
    v2509,
    v2510,
    v2511);
  v2512 = (EventCombineCostumeMaster_o *)sub_21FFEBC(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v2512, 0);
  if ( v2512 )
  {
    v3 = sub_21FFDA4(v2512, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x166u )
    goto LABEL_1691;
  v1->m_Items[358] = (DataMasterBase_o *)v2512;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[358],
    (int32_t)v2512,
    v2513,
    v2514,
    v2515,
    v2516,
    v2517,
    v2518);
  v2519 = (WarBoardStagePieceDetailMaster_o *)sub_21FFEBC(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v2519, 0);
  if ( v2519 )
  {
    v3 = sub_21FFDA4(v2519, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x167u )
    goto LABEL_1691;
  v1->m_Items[359] = (DataMasterBase_o *)v2519;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[359],
    (int32_t)v2519,
    v2520,
    v2521,
    v2522,
    v2523,
    v2524,
    v2525);
  v2526 = (ServantTreasureDeviceAddMaster_o *)sub_21FFEBC(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v2526, 0);
  if ( v2526 )
  {
    v3 = sub_21FFDA4(v2526, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x168u )
    goto LABEL_1691;
  v1->m_Items[360] = (DataMasterBase_o *)v2526;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[360],
    (int32_t)v2526,
    v2527,
    v2528,
    v2529,
    v2530,
    v2531,
    v2532);
  v2533 = (SkillAddMaster_o *)sub_21FFEBC(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v2533, 0);
  if ( v2533 )
  {
    v3 = sub_21FFDA4(v2533, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x169u )
    goto LABEL_1691;
  v1->m_Items[361] = (DataMasterBase_o *)v2533;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[361],
    (int32_t)v2533,
    v2534,
    v2535,
    v2536,
    v2537,
    v2538,
    v2539);
  v2540 = (ServantLvDetailMaster_o *)sub_21FFEBC(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v2540, 0);
  if ( v2540 )
  {
    v3 = sub_21FFDA4(v2540, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Au )
    goto LABEL_1691;
  v1->m_Items[362] = (DataMasterBase_o *)v2540;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[362],
    (int32_t)v2540,
    v2541,
    v2542,
    v2543,
    v2544,
    v2545,
    v2546);
  v2547 = (GachaAppendMaster_o *)sub_21FFEBC(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v2547, 0);
  if ( v2547 )
  {
    v3 = sub_21FFDA4(v2547, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Bu )
    goto LABEL_1691;
  v1->m_Items[363] = (DataMasterBase_o *)v2547;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[363],
    (int32_t)v2547,
    v2548,
    v2549,
    v2550,
    v2551,
    v2552,
    v2553);
  v2554 = (UserGachaDrawLogMaster_o *)sub_21FFEBC(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v2554, 0);
  if ( v2554 )
  {
    v3 = sub_21FFDA4(v2554, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Cu )
    goto LABEL_1691;
  v1->m_Items[364] = (DataMasterBase_o *)v2554;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[364],
    (int32_t)v2554,
    v2555,
    v2556,
    v2557,
    v2558,
    v2559,
    v2560);
  v2561 = (ServantAppendPassiveSkillMaster_o *)sub_21FFEBC(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v2561, 0);
  if ( v2561 )
  {
    v3 = sub_21FFDA4(v2561, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Du )
    goto LABEL_1691;
  v1->m_Items[365] = (DataMasterBase_o *)v2561;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[365],
    (int32_t)v2561,
    v2562,
    v2563,
    v2564,
    v2565,
    v2566,
    v2567);
  v2568 = (UserServantAppendPassiveSkillMaster_o *)sub_21FFEBC(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v2568, 0);
  if ( v2568 )
  {
    v3 = sub_21FFDA4(v2568, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Eu )
    goto LABEL_1691;
  v1->m_Items[366] = (DataMasterBase_o *)v2568;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[366],
    (int32_t)v2568,
    v2569,
    v2570,
    v2571,
    v2572,
    v2573,
    v2574);
  v2575 = (UserServantAppendPassiveSkillLvMaster_o *)sub_21FFEBC(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v2575, 0);
  if ( v2575 )
  {
    v3 = sub_21FFDA4(v2575, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x16Fu )
    goto LABEL_1691;
  v1->m_Items[367] = (DataMasterBase_o *)v2575;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[367],
    (int32_t)v2575,
    v2576,
    v2577,
    v2578,
    v2579,
    v2580,
    v2581);
  v2582 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_21FFEBC(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v2582, 0);
  if ( v2582 )
  {
    v3 = sub_21FFDA4(v2582, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x170u )
    goto LABEL_1691;
  v1->m_Items[368] = (DataMasterBase_o *)v2582;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[368],
    (int32_t)v2582,
    v2583,
    v2584,
    v2585,
    v2586,
    v2587,
    v2588);
  v2589 = (CombineAppendPassiveSkillMaster_o *)sub_21FFEBC(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v2589, 0);
  if ( v2589 )
  {
    v3 = sub_21FFDA4(v2589, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x171u )
    goto LABEL_1691;
  v1->m_Items[369] = (DataMasterBase_o *)v2589;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[369],
    (int32_t)v2589,
    v2590,
    v2591,
    v2592,
    v2593,
    v2594,
    v2595);
  v2596 = (SvtCoinMaster_o *)sub_21FFEBC(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v2596, 0);
  if ( v2596 )
  {
    v3 = sub_21FFDA4(v2596, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x172u )
    goto LABEL_1691;
  v1->m_Items[370] = (DataMasterBase_o *)v2596;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[370],
    (int32_t)v2596,
    v2597,
    v2598,
    v2599,
    v2600,
    v2601,
    v2602);
  v2603 = (UserSvtCoinMaster_o *)sub_21FFEBC(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v2603, 0);
  if ( v2603 )
  {
    v3 = sub_21FFDA4(v2603, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x173u )
    goto LABEL_1691;
  v1->m_Items[371] = (DataMasterBase_o *)v2603;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[371],
    (int32_t)v2603,
    v2604,
    v2605,
    v2606,
    v2607,
    v2608,
    v2609);
  v2610 = (ServantAddMaster_o *)sub_21FFEBC(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v2610, 0);
  if ( v2610 )
  {
    v3 = sub_21FFDA4(v2610, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x174u )
    goto LABEL_1691;
  v1->m_Items[372] = (DataMasterBase_o *)v2610;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[372],
    (int32_t)v2610,
    v2611,
    v2612,
    v2613,
    v2614,
    v2615,
    v2616);
  v2617 = (TreasureBoxMaster_o *)sub_21FFEBC(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v2617, 0);
  if ( v2617 )
  {
    v3 = sub_21FFDA4(v2617, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x175u )
    goto LABEL_1691;
  v1->m_Items[373] = (DataMasterBase_o *)v2617;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[373],
    (int32_t)v2617,
    v2618,
    v2619,
    v2620,
    v2621,
    v2622,
    v2623);
  v2624 = (TreasureBoxGiftMaster_o *)sub_21FFEBC(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v2624, 0);
  if ( v2624 )
  {
    v3 = sub_21FFDA4(v2624, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x176u )
    goto LABEL_1691;
  v1->m_Items[374] = (DataMasterBase_o *)v2624;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[374],
    (int32_t)v2624,
    v2625,
    v2626,
    v2627,
    v2628,
    v2629,
    v2630);
  v2631 = (TreasureBoxTalkMaster_o *)sub_21FFEBC(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v2631, 0);
  if ( v2631 )
  {
    v3 = sub_21FFDA4(v2631, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x177u )
    goto LABEL_1691;
  v1->m_Items[375] = (DataMasterBase_o *)v2631;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[375],
    (int32_t)v2631,
    v2632,
    v2633,
    v2634,
    v2635,
    v2636,
    v2637);
  v2638 = (UserEventExpeditionMaster_o *)sub_21FFEBC(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v2638, 0);
  if ( v2638 )
  {
    v3 = sub_21FFDA4(v2638, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x178u )
    goto LABEL_1691;
  v1->m_Items[376] = (DataMasterBase_o *)v2638;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[376],
    (int32_t)v2638,
    v2639,
    v2640,
    v2641,
    v2642,
    v2643,
    v2644);
  v2645 = (EventExpeditionMaster_o *)sub_21FFEBC(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v2645, 0);
  if ( v2645 )
  {
    v3 = sub_21FFDA4(v2645, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x179u )
    goto LABEL_1691;
  v1->m_Items[377] = (DataMasterBase_o *)v2645;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[377],
    (int32_t)v2645,
    v2646,
    v2647,
    v2648,
    v2649,
    v2650,
    v2651);
  v2652 = (EventExpeditionPieceMaster_o *)sub_21FFEBC(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v2652, 0);
  if ( v2652 )
  {
    v3 = sub_21FFDA4(v2652, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Au )
    goto LABEL_1691;
  v1->m_Items[378] = (DataMasterBase_o *)v2652;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[378],
    (int32_t)v2652,
    v2653,
    v2654,
    v2655,
    v2656,
    v2657,
    v2658);
  v2659 = (EventRecipeMaster_o *)sub_21FFEBC(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v2659, 0);
  if ( v2659 )
  {
    v3 = sub_21FFDA4(v2659, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Bu )
    goto LABEL_1691;
  v1->m_Items[379] = (DataMasterBase_o *)v2659;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[379],
    (int32_t)v2659,
    v2660,
    v2661,
    v2662,
    v2663,
    v2664,
    v2665);
  v2666 = (EventRecipeGiftMaster_o *)sub_21FFEBC(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v2666, 0);
  if ( v2666 )
  {
    v3 = sub_21FFDA4(v2666, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Cu )
    goto LABEL_1691;
  v1->m_Items[380] = (DataMasterBase_o *)v2666;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[380],
    (int32_t)v2666,
    v2667,
    v2668,
    v2669,
    v2670,
    v2671,
    v2672);
  v2673 = (UserEventFortificationMaster_o *)sub_21FFEBC(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v2673, 0);
  if ( v2673 )
  {
    v3 = sub_21FFDA4(v2673, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Du )
    goto LABEL_1691;
  v1->m_Items[381] = (DataMasterBase_o *)v2673;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[381],
    (int32_t)v2673,
    v2674,
    v2675,
    v2676,
    v2677,
    v2678,
    v2679);
  v2680 = (EventFortificationMaster_o *)sub_21FFEBC(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v2680, 0);
  if ( v2680 )
  {
    v3 = sub_21FFDA4(v2680, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Eu )
    goto LABEL_1691;
  v1->m_Items[382] = (DataMasterBase_o *)v2680;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[382],
    (int32_t)v2680,
    v2681,
    v2682,
    v2683,
    v2684,
    v2685,
    v2686);
  v2687 = (EventFortificationDetailMaster_o *)sub_21FFEBC(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v2687, 0);
  if ( v2687 )
  {
    v3 = sub_21FFDA4(v2687, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x17Fu )
    goto LABEL_1691;
  v1->m_Items[383] = (DataMasterBase_o *)v2687;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[383],
    (int32_t)v2687,
    v2688,
    v2689,
    v2690,
    v2691,
    v2692,
    v2693);
  v2694 = (EventFortificationSvtMaster_o *)sub_21FFEBC(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v2694, 0);
  if ( v2694 )
  {
    v3 = sub_21FFDA4(v2694, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x180u )
    goto LABEL_1691;
  v1->m_Items[384] = (DataMasterBase_o *)v2694;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[384],
    (int32_t)v2694,
    v2695,
    v2696,
    v2697,
    v2698,
    v2699,
    v2700);
  v2701 = (UserServantVoicePlayedMaster_o *)sub_21FFEBC(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v2701, 0);
  if ( v2701 )
  {
    v3 = sub_21FFDA4(v2701, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x181u )
    goto LABEL_1691;
  v1->m_Items[385] = (DataMasterBase_o *)v2701;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[385],
    (int32_t)v2701,
    v2702,
    v2703,
    v2704,
    v2705,
    v2706,
    v2707);
  v2708 = (UpdateProfileDialogInfoMaster_o *)sub_21FFEBC(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v2708, 0);
  if ( v2708 )
  {
    v3 = sub_21FFDA4(v2708, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x182u )
    goto LABEL_1691;
  v1->m_Items[386] = (DataMasterBase_o *)v2708;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[386],
    (int32_t)v2708,
    v2709,
    v2710,
    v2711,
    v2712,
    v2713,
    v2714);
  v2715 = (SvtMaterialTdMaster_o *)sub_21FFEBC(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v2715, 0);
  if ( v2715 )
  {
    v3 = sub_21FFDA4(v2715, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x183u )
    goto LABEL_1691;
  v1->m_Items[387] = (DataMasterBase_o *)v2715;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[387],
    (int32_t)v2715,
    v2716,
    v2717,
    v2718,
    v2719,
    v2720,
    v2721);
  v2722 = (BattleMasterImageMaster_o *)sub_21FFEBC(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v2722, 0);
  if ( v2722 )
  {
    v3 = sub_21FFDA4(v2722, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x184u )
    goto LABEL_1691;
  v1->m_Items[388] = (DataMasterBase_o *)v2722;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[388],
    (int32_t)v2722,
    v2723,
    v2724,
    v2725,
    v2726,
    v2727,
    v2728);
  v2729 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_21FFEBC(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v2729, 0);
  if ( v2729 )
  {
    v3 = sub_21FFDA4(v2729, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x185u )
    goto LABEL_1691;
  v1->m_Items[389] = (DataMasterBase_o *)v2729;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[389],
    (int32_t)v2729,
    v2730,
    v2731,
    v2732,
    v2733,
    v2734,
    v2735);
  v2736 = (UserEventRandomMissionMaster_o *)sub_21FFEBC(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v2736, 0);
  if ( v2736 )
  {
    v3 = sub_21FFDA4(v2736, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x186u )
    goto LABEL_1691;
  v1->m_Items[390] = (DataMasterBase_o *)v2736;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[390],
    (int32_t)v2736,
    v2737,
    v2738,
    v2739,
    v2740,
    v2741,
    v2742);
  v2743 = (EventProgressValueMaster_o *)sub_21FFEBC(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v2743, 0);
  if ( v2743 )
  {
    v3 = sub_21FFDA4(v2743, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x187u )
    goto LABEL_1691;
  v1->m_Items[391] = (DataMasterBase_o *)v2743;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[391],
    (int32_t)v2743,
    v2744,
    v2745,
    v2746,
    v2747,
    v2748,
    v2749);
  v2750 = (SvtMultiPortraitMaster_o *)sub_21FFEBC(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v2750, 0);
  if ( v2750 )
  {
    v3 = sub_21FFDA4(v2750, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x188u )
    goto LABEL_1691;
  v1->m_Items[392] = (DataMasterBase_o *)v2750;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[392],
    (int32_t)v2750,
    v2751,
    v2752,
    v2753,
    v2754,
    v2755,
    v2756);
  v2757 = (EventRandomMissionMaster_o *)sub_21FFEBC(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v2757, 0);
  if ( v2757 )
  {
    v3 = sub_21FFDA4(v2757, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x189u )
    goto LABEL_1691;
  v1->m_Items[393] = (DataMasterBase_o *)v2757;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[393],
    (int32_t)v2757,
    v2758,
    v2759,
    v2760,
    v2761,
    v2762,
    v2763);
  v2764 = (UserGachaHistoryMaster_o *)sub_21FFEBC(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v2764, 0);
  if ( v2764 )
  {
    v3 = sub_21FFDA4(v2764, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Au )
    goto LABEL_1691;
  v1->m_Items[394] = (DataMasterBase_o *)v2764;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[394],
    (int32_t)v2764,
    v2765,
    v2766,
    v2767,
    v2768,
    v2769,
    v2770);
  v2771 = (UserCoinRoomMaster_o *)sub_21FFEBC(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v2771, 0);
  if ( v2771 )
  {
    v3 = sub_21FFDA4(v2771, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Bu )
    goto LABEL_1691;
  v1->m_Items[395] = (DataMasterBase_o *)v2771;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[395],
    (int32_t)v2771,
    v2772,
    v2773,
    v2774,
    v2775,
    v2776,
    v2777);
  v2778 = (EventBuddyPointMaster_o *)sub_21FFEBC(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v2778, 0);
  if ( v2778 )
  {
    v3 = sub_21FFDA4(v2778, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Cu )
    goto LABEL_1691;
  v1->m_Items[396] = (DataMasterBase_o *)v2778;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[396],
    (int32_t)v2778,
    v2779,
    v2780,
    v2781,
    v2782,
    v2783,
    v2784);
  v2785 = (EventServantPointRankMaster_o *)sub_21FFEBC(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v2785, 0);
  if ( v2785 )
  {
    v3 = sub_21FFDA4(v2785, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Du )
    goto LABEL_1691;
  v1->m_Items[397] = (DataMasterBase_o *)v2785;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[397],
    (int32_t)v2785,
    v2786,
    v2787,
    v2788,
    v2789,
    v2790,
    v2791);
  v2792 = (UserEventServantPointMaster_o *)sub_21FFEBC(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v2792, 0);
  if ( v2792 )
  {
    v3 = sub_21FFDA4(v2792, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Eu )
    goto LABEL_1691;
  v1->m_Items[398] = (DataMasterBase_o *)v2792;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[398],
    (int32_t)v2792,
    v2793,
    v2794,
    v2795,
    v2796,
    v2797,
    v2798);
  v2799 = (FieldMotionMaster_o *)sub_21FFEBC(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v2799, 0);
  if ( v2799 )
  {
    v3 = sub_21FFDA4(v2799, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x18Fu )
    goto LABEL_1691;
  v1->m_Items[399] = (DataMasterBase_o *)v2799;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[399],
    (int32_t)v2799,
    v2800,
    v2801,
    v2802,
    v2803,
    v2804,
    v2805);
  v2806 = (UserDeleteReservationMaster_o *)sub_21FFEBC(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v2806, 0);
  if ( v2806 )
  {
    v3 = sub_21FFDA4(v2806, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x190u )
    goto LABEL_1691;
  v1->m_Items[400] = (DataMasterBase_o *)v2806;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[400],
    (int32_t)v2806,
    v2807,
    v2808,
    v2809,
    v2810,
    v2811,
    v2812);
  v2813 = (ServantScriptMultipleMaster_o *)sub_21FFEBC(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v2813, 0);
  if ( v2813 )
  {
    v3 = sub_21FFDA4(v2813, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x191u )
    goto LABEL_1691;
  v1->m_Items[401] = (DataMasterBase_o *)v2813;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[401],
    (int32_t)v2813,
    v2814,
    v2815,
    v2816,
    v2817,
    v2818,
    v2819);
  v2820 = (EquipAddMaster_o *)sub_21FFEBC(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v2820, 0);
  if ( v2820 )
  {
    v3 = sub_21FFDA4(v2820, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x192u )
    goto LABEL_1691;
  v1->m_Items[402] = (DataMasterBase_o *)v2820;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[402],
    (int32_t)v2820,
    v2821,
    v2822,
    v2823,
    v2824,
    v2825,
    v2826);
  v2827 = (QuestReleaseOverwriteMaster_o *)sub_21FFEBC(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v2827, 0);
  if ( v2827 )
  {
    v3 = sub_21FFDA4(v2827, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x193u )
    goto LABEL_1691;
  v1->m_Items[403] = (DataMasterBase_o *)v2827;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[403],
    (int32_t)v2827,
    v2828,
    v2829,
    v2830,
    v2831,
    v2832,
    v2833);
  v2834 = (UserEventAlloutBattleMaster_o *)sub_21FFEBC(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v2834, 0);
  if ( v2834 )
  {
    v3 = sub_21FFDA4(v2834, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x194u )
    goto LABEL_1691;
  v1->m_Items[404] = (DataMasterBase_o *)v2834;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[404],
    (int32_t)v2834,
    v2835,
    v2836,
    v2837,
    v2838,
    v2839,
    v2840);
  v2841 = (QuestScriptMaterialNextMaster_o *)sub_21FFEBC(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v2841, 0);
  if ( v2841 )
  {
    v3 = sub_21FFDA4(v2841, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x195u )
    goto LABEL_1691;
  v1->m_Items[405] = (DataMasterBase_o *)v2841;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[405],
    (int32_t)v2841,
    v2842,
    v2843,
    v2844,
    v2845,
    v2846,
    v2847);
  v2848 = (EventDiggingMaster_o *)sub_21FFEBC(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v2848, 0);
  if ( v2848 )
  {
    v3 = sub_21FFDA4(v2848, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x196u )
    goto LABEL_1691;
  v1->m_Items[406] = (DataMasterBase_o *)v2848;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[406],
    (int32_t)v2848,
    v2849,
    v2850,
    v2851,
    v2852,
    v2853,
    v2854);
  v2855 = (EventDiggingBlockMaster_o *)sub_21FFEBC(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v2855, 0);
  if ( v2855 )
  {
    v3 = sub_21FFDA4(v2855, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x197u )
    goto LABEL_1691;
  v1->m_Items[407] = (DataMasterBase_o *)v2855;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[407],
    (int32_t)v2855,
    v2856,
    v2857,
    v2858,
    v2859,
    v2860,
    v2861);
  v2862 = (EventDiggingRewardMaster_o *)sub_21FFEBC(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v2862, 0);
  if ( v2862 )
  {
    v3 = sub_21FFDA4(v2862, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x198u )
    goto LABEL_1691;
  v1->m_Items[408] = (DataMasterBase_o *)v2862;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[408],
    (int32_t)v2862,
    v2863,
    v2864,
    v2865,
    v2866,
    v2867,
    v2868);
  v2869 = (UserEventDiggingMaster_o *)sub_21FFEBC(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v2869, 0);
  if ( v2869 )
  {
    v3 = sub_21FFDA4(v2869, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x199u )
    goto LABEL_1691;
  v1->m_Items[409] = (DataMasterBase_o *)v2869;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[409],
    (int32_t)v2869,
    v2870,
    v2871,
    v2872,
    v2873,
    v2874,
    v2875);
  v2876 = (BattleMessageMaster_o *)sub_21FFEBC(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v2876, 0);
  if ( v2876 )
  {
    v3 = sub_21FFDA4(v2876, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Au )
    goto LABEL_1691;
  v1->m_Items[410] = (DataMasterBase_o *)v2876;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[410],
    (int32_t)v2876,
    v2877,
    v2878,
    v2879,
    v2880,
    v2881,
    v2882);
  v2883 = (BattleMessageGroupMaster_o *)sub_21FFEBC(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v2883, 0);
  if ( v2883 )
  {
    v3 = sub_21FFDA4(v2883, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Bu )
    goto LABEL_1691;
  v1->m_Items[411] = (DataMasterBase_o *)v2883;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[411],
    (int32_t)v2883,
    v2884,
    v2885,
    v2886,
    v2887,
    v2888,
    v2889);
  v2890 = (UserNpcSvtRecordMaster_o *)sub_21FFEBC(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v2890, 0);
  if ( v2890 )
  {
    v3 = sub_21FFDA4(v2890, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Cu )
    goto LABEL_1691;
  v1->m_Items[412] = (DataMasterBase_o *)v2890;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[412],
    (int32_t)v2890,
    v2891,
    v2892,
    v2893,
    v2894,
    v2895,
    v2896);
  v2897 = (BuffTypeDetailMaster_o *)sub_21FFEBC(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v2897, 0);
  if ( v2897 )
  {
    v3 = sub_21FFDA4(v2897, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Du )
    goto LABEL_1691;
  v1->m_Items[413] = (DataMasterBase_o *)v2897;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[413],
    (int32_t)v2897,
    v2898,
    v2899,
    v2900,
    v2901,
    v2902,
    v2903);
  v2904 = (WarBoardMessageMaster_o *)sub_21FFEBC(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v2904, 0);
  if ( v2904 )
  {
    v3 = sub_21FFDA4(v2904, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Eu )
    goto LABEL_1691;
  v1->m_Items[414] = (DataMasterBase_o *)v2904;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[414],
    (int32_t)v2904,
    v2905,
    v2906,
    v2907,
    v2908,
    v2909,
    v2910);
  v2911 = (WarBoardPartySkillMaster_o *)sub_21FFEBC(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v2911, 0);
  if ( v2911 )
  {
    v3 = sub_21FFDA4(v2911, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x19Fu )
    goto LABEL_1691;
  v1->m_Items[415] = (DataMasterBase_o *)v2911;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[415],
    (int32_t)v2911,
    v2912,
    v2913,
    v2914,
    v2915,
    v2916,
    v2917);
  v2918 = (WarBoardMessageScriptMaster_o *)sub_21FFEBC(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v2918, 0);
  if ( v2918 )
  {
    v3 = sub_21FFDA4(v2918, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A0u )
    goto LABEL_1691;
  v1->m_Items[416] = (DataMasterBase_o *)v2918;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[416],
    (int32_t)v2918,
    v2919,
    v2920,
    v2921,
    v2922,
    v2923,
    v2924);
  v2925 = (WarQuestSelectionMaster_o *)sub_21FFEBC(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v2925, 0);
  if ( v2925 )
  {
    v3 = sub_21FFDA4(v2925, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A1u )
    goto LABEL_1691;
  v1->m_Items[417] = (DataMasterBase_o *)v2925;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[417],
    (int32_t)v2925,
    v2926,
    v2927,
    v2928,
    v2929,
    v2930,
    v2931);
  v2932 = (WarBoardStageDetailMaster_o *)sub_21FFEBC(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v2932, 0);
  if ( v2932 )
  {
    v3 = sub_21FFDA4(v2932, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A2u )
    goto LABEL_1691;
  v1->m_Items[418] = (DataMasterBase_o *)v2932;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[418],
    (int32_t)v2932,
    v2933,
    v2934,
    v2935,
    v2936,
    v2937,
    v2938);
  v2939 = (QuestScriptMaterialOverwriteMaster_o *)sub_21FFEBC(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v2939, 0);
  if ( v2939 )
  {
    v3 = sub_21FFDA4(v2939, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A3u )
    goto LABEL_1691;
  v1->m_Items[419] = (DataMasterBase_o *)v2939;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[419],
    (int32_t)v2939,
    v2940,
    v2941,
    v2942,
    v2943,
    v2944,
    v2945);
  v2946 = (QuestScriptBranchMaterialMaster_o *)sub_21FFEBC(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v2946, 0);
  if ( v2946 )
  {
    v3 = sub_21FFDA4(v2946, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A4u )
    goto LABEL_1691;
  v1->m_Items[420] = (DataMasterBase_o *)v2946;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[420],
    (int32_t)v2946,
    v2947,
    v2948,
    v2949,
    v2950,
    v2951,
    v2952);
  v2953 = (AdCheckPointMaster_o *)sub_21FFEBC(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v2953, 0);
  if ( v2953 )
  {
    v3 = sub_21FFDA4(v2953, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A5u )
    goto LABEL_1691;
  v1->m_Items[421] = (DataMasterBase_o *)v2953;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[421],
    (int32_t)v2953,
    v2954,
    v2955,
    v2956,
    v2957,
    v2958,
    v2959);
  v2960 = (GiftDetailMaster_o *)sub_21FFEBC(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v2960, 0);
  if ( v2960 )
  {
    v3 = sub_21FFDA4(v2960, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A6u )
    goto LABEL_1691;
  v1->m_Items[422] = (DataMasterBase_o *)v2960;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[422],
    (int32_t)v2960,
    v2961,
    v2962,
    v2963,
    v2964,
    v2965,
    v2966);
  v2967 = (CombineLimitGiftMaster_o *)sub_21FFEBC(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v2967, 0);
  if ( v2967 )
  {
    v3 = sub_21FFDA4(v2967, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A7u )
    goto LABEL_1691;
  v1->m_Items[423] = (DataMasterBase_o *)v2967;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[423],
    (int32_t)v2967,
    v2968,
    v2969,
    v2970,
    v2971,
    v2972,
    v2973);
  v2974 = (EventCooltimeRewardMaster_o *)sub_21FFEBC(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v2974, 0);
  if ( v2974 )
  {
    v3 = sub_21FFDA4(v2974, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A8u )
    goto LABEL_1691;
  v1->m_Items[424] = (DataMasterBase_o *)v2974;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[424],
    (int32_t)v2974,
    v2975,
    v2976,
    v2977,
    v2978,
    v2979,
    v2980);
  v2981 = (UserEventCooltimeRewardMaster_o *)sub_21FFEBC(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v2981, 0);
  if ( v2981 )
  {
    v3 = sub_21FFDA4(v2981, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1A9u )
    goto LABEL_1691;
  v1->m_Items[425] = (DataMasterBase_o *)v2981;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[425],
    (int32_t)v2981,
    v2982,
    v2983,
    v2984,
    v2985,
    v2986,
    v2987);
  v2988 = (ClassBoardBaseMaster_o *)sub_21FFEBC(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v2988, 0);
  if ( v2988 )
  {
    v3 = sub_21FFDA4(v2988, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AAu )
    goto LABEL_1691;
  v1->m_Items[426] = (DataMasterBase_o *)v2988;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[426],
    (int32_t)v2988,
    v2989,
    v2990,
    v2991,
    v2992,
    v2993,
    v2994);
  v2995 = (ClassBoardLockMaster_o *)sub_21FFEBC(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v2995, 0);
  if ( v2995 )
  {
    v3 = sub_21FFDA4(v2995, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ABu )
    goto LABEL_1691;
  v1->m_Items[427] = (DataMasterBase_o *)v2995;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[427],
    (int32_t)v2995,
    v2996,
    v2997,
    v2998,
    v2999,
    v3000,
    v3001);
  v3002 = (ClassBoardSquareMaster_o *)sub_21FFEBC(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v3002, 0);
  if ( v3002 )
  {
    v3 = sub_21FFDA4(v3002, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ACu )
    goto LABEL_1691;
  v1->m_Items[428] = (DataMasterBase_o *)v3002;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[428],
    (int32_t)v3002,
    v3003,
    v3004,
    v3005,
    v3006,
    v3007,
    v3008);
  v3009 = (ClassBoardLineMaster_o *)sub_21FFEBC(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v3009, 0);
  if ( v3009 )
  {
    v3 = sub_21FFDA4(v3009, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ADu )
    goto LABEL_1691;
  v1->m_Items[429] = (DataMasterBase_o *)v3009;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[429],
    (int32_t)v3009,
    v3010,
    v3011,
    v3012,
    v3013,
    v3014,
    v3015);
  v3016 = (UserClassBoardSquareMaster_o *)sub_21FFEBC(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v3016, 0);
  if ( v3016 )
  {
    v3 = sub_21FFDA4(v3016, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AEu )
    goto LABEL_1691;
  v1->m_Items[430] = (DataMasterBase_o *)v3016;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[430],
    (int32_t)v3016,
    v3017,
    v3018,
    v3019,
    v3020,
    v3021,
    v3022);
  v3023 = (ServantCardAddMaster_o *)sub_21FFEBC(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v3023, 0);
  if ( v3023 )
  {
    v3 = sub_21FFDA4(v3023, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1AFu )
    goto LABEL_1691;
  v1->m_Items[431] = (DataMasterBase_o *)v3023;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[431],
    (int32_t)v3023,
    v3024,
    v3025,
    v3026,
    v3027,
    v3028,
    v3029);
  v3030 = (MapLayerMaster_o *)sub_21FFEBC(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v3030, 0);
  if ( v3030 )
  {
    v3 = sub_21FFDA4(v3030, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B0u )
    goto LABEL_1691;
  v1->m_Items[432] = (DataMasterBase_o *)v3030;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[432],
    (int32_t)v3030,
    v3031,
    v3032,
    v3033,
    v3034,
    v3035,
    v3036);
  v3037 = (SpotLayerMaster_o *)sub_21FFEBC(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v3037, 0);
  if ( v3037 )
  {
    v3 = sub_21FFDA4(v3037, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B1u )
    goto LABEL_1691;
  v1->m_Items[433] = (DataMasterBase_o *)v3037;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[433],
    (int32_t)v3037,
    v3038,
    v3039,
    v3040,
    v3041,
    v3042,
    v3043);
  v3044 = (MapGimmickLayerMaster_o *)sub_21FFEBC(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v3044, 0);
  if ( v3044 )
  {
    v3 = sub_21FFDA4(v3044, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B2u )
    goto LABEL_1691;
  v1->m_Items[434] = (DataMasterBase_o *)v3044;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[434],
    (int32_t)v3044,
    v3045,
    v3046,
    v3047,
    v3048,
    v3049,
    v3050);
  v3051 = (EventDataLostBattleMaster_o *)sub_21FFEBC(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v3051, 0);
  if ( v3051 )
  {
    v3 = sub_21FFDA4(v3051, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B3u )
    goto LABEL_1691;
  v1->m_Items[435] = (DataMasterBase_o *)v3051;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[435],
    (int32_t)v3051,
    v3052,
    v3053,
    v3054,
    v3055,
    v3056,
    v3057);
  v3058 = (EventDataLostBattleResetMaster_o *)sub_21FFEBC(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v3058, 0);
  if ( v3058 )
  {
    v3 = sub_21FFDA4(v3058, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B4u )
    goto LABEL_1691;
  v1->m_Items[436] = (DataMasterBase_o *)v3058;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[436],
    (int32_t)v3058,
    v3059,
    v3060,
    v3061,
    v3062,
    v3063,
    v3064);
  v3065 = (UserEventDataLostMaster_o *)sub_21FFEBC(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v3065, 0);
  if ( v3065 )
  {
    v3 = sub_21FFDA4(v3065, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B5u )
    goto LABEL_1691;
  v1->m_Items[437] = (DataMasterBase_o *)v3065;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[437],
    (int32_t)v3065,
    v3066,
    v3067,
    v3068,
    v3069,
    v3070,
    v3071);
  v3072 = (QuestHintMaster_o *)sub_21FFEBC(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v3072, 0);
  if ( v3072 )
  {
    v3 = sub_21FFDA4(v3072, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B6u )
    goto LABEL_1691;
  v1->m_Items[438] = (DataMasterBase_o *)v3072;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[438],
    (int32_t)v3072,
    v3073,
    v3074,
    v3075,
    v3076,
    v3077,
    v3078);
  v3079 = (FuncTypeDetailMaster_o *)sub_21FFEBC(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v3079, 0);
  if ( v3079 )
  {
    v3 = sub_21FFDA4(v3079, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B7u )
    goto LABEL_1691;
  v1->m_Items[439] = (DataMasterBase_o *)v3079;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[439],
    (int32_t)v3079,
    v3080,
    v3081,
    v3082,
    v3083,
    v3084,
    v3085);
  v3086 = (BuffConvertMaster_o *)sub_21FFEBC(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v3086, 0);
  if ( v3086 )
  {
    v3 = sub_21FFDA4(v3086, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B8u )
    goto LABEL_1691;
  v1->m_Items[440] = (DataMasterBase_o *)v3086;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[440],
    (int32_t)v3086,
    v3087,
    v3088,
    v3089,
    v3090,
    v3091,
    v3092);
  v3093 = (SkillGroupMaster_o *)sub_21FFEBC(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v3093, 0);
  if ( v3093 )
  {
    v3 = sub_21FFDA4(v3093, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1B9u )
    goto LABEL_1691;
  v1->m_Items[441] = (DataMasterBase_o *)v3093;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[441],
    (int32_t)v3093,
    v3094,
    v3095,
    v3096,
    v3097,
    v3098,
    v3099);
  v3100 = (SkillGroupOverwriteMaster_o *)sub_21FFEBC(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v3100, 0);
  if ( v3100 )
  {
    v3 = sub_21FFDA4(v3100, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BAu )
    goto LABEL_1691;
  v1->m_Items[442] = (DataMasterBase_o *)v3100;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[442],
    (int32_t)v3100,
    v3101,
    v3102,
    v3103,
    v3104,
    v3105,
    v3106);
  v3107 = (SkillIndividualityMaster_o *)sub_21FFEBC(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v3107, 0);
  if ( v3107 )
  {
    v3 = sub_21FFDA4(v3107, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BBu )
    goto LABEL_1691;
  v1->m_Items[443] = (DataMasterBase_o *)v3107;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[443],
    (int32_t)v3107,
    v3108,
    v3109,
    v3110,
    v3111,
    v3112,
    v3113);
  v3114 = (RestrictionBaseMaster_o *)sub_21FFEBC(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v3114, 0);
  if ( v3114 )
  {
    v3 = sub_21FFDA4(v3114, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BCu )
    goto LABEL_1691;
  v1->m_Items[444] = (DataMasterBase_o *)v3114;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[444],
    (int32_t)v3114,
    v3115,
    v3116,
    v3117,
    v3118,
    v3119,
    v3120);
  v3121 = (RestrictionSlotMaster_o *)sub_21FFEBC(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v3121, 0);
  if ( v3121 )
  {
    v3 = sub_21FFDA4(v3121, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BDu )
    goto LABEL_1691;
  v1->m_Items[445] = (DataMasterBase_o *)v3121;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[445],
    (int32_t)v3121,
    v3122,
    v3123,
    v3124,
    v3125,
    v3126,
    v3127);
  v3128 = (RestrictionSlotDetailMaster_o *)sub_21FFEBC(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v3128, 0);
  if ( v3128 )
  {
    v3 = sub_21FFDA4(v3128, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BEu )
    goto LABEL_1691;
  v1->m_Items[446] = (DataMasterBase_o *)v3128;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[446],
    (int32_t)v3128,
    v3129,
    v3130,
    v3131,
    v3132,
    v3133,
    v3134);
  v3135 = (RestrictionMessageMaster_o *)sub_21FFEBC(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v3135, 0);
  if ( v3135 )
  {
    v3 = sub_21FFDA4(v3135, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1BFu )
    goto LABEL_1691;
  v1->m_Items[447] = (DataMasterBase_o *)v3135;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[447],
    (int32_t)v3135,
    v3136,
    v3137,
    v3138,
    v3139,
    v3140,
    v3141);
  v3142 = (RestrictionWholeMaster_o *)sub_21FFEBC(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v3142, 0);
  if ( v3142 )
  {
    v3 = sub_21FFDA4(v3142, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C0u )
    goto LABEL_1691;
  v1->m_Items[448] = (DataMasterBase_o *)v3142;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[448],
    (int32_t)v3142,
    v3143,
    v3144,
    v3145,
    v3146,
    v3147,
    v3148);
  v3149 = (FuncDispMaster_o *)sub_21FFEBC(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v3149, 0);
  if ( v3149 )
  {
    v3 = sub_21FFDA4(v3149, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C1u )
    goto LABEL_1691;
  v1->m_Items[449] = (DataMasterBase_o *)v3149;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[449],
    (int32_t)v3149,
    v3150,
    v3151,
    v3152,
    v3153,
    v3154,
    v3155);
  v3156 = (ClassBoardCommandSpellMaster_o *)sub_21FFEBC(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v3156, 0);
  if ( v3156 )
  {
    v3 = sub_21FFDA4(v3156, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C2u )
    goto LABEL_1691;
  v1->m_Items[450] = (DataMasterBase_o *)v3156;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[450],
    (int32_t)v3156,
    v3157,
    v3158,
    v3159,
    v3160,
    v3161,
    v3162);
  v3163 = (ClassBoardClassMaster_o *)sub_21FFEBC(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v3163, 0);
  if ( v3163 )
  {
    v3 = sub_21FFDA4(v3163, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C3u )
    goto LABEL_1691;
  v1->m_Items[451] = (DataMasterBase_o *)v3163;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[451],
    (int32_t)v3163,
    v3164,
    v3165,
    v3166,
    v3167,
    v3168,
    v3169);
  v3170 = (EventCommandAssistMaster_o *)sub_21FFEBC(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v3170, 0);
  if ( v3170 )
  {
    v3 = sub_21FFDA4(v3170, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C4u )
    goto LABEL_1691;
  v1->m_Items[452] = (DataMasterBase_o *)v3170;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[452],
    (int32_t)v3170,
    v3171,
    v3172,
    v3173,
    v3174,
    v3175,
    v3176);
  v3177 = (EventMissionGroupMaster_o *)sub_21FFEBC(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v3177, 0);
  if ( v3177 )
  {
    v3 = sub_21FFDA4(v3177, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C5u )
    goto LABEL_1691;
  v1->m_Items[453] = (DataMasterBase_o *)v3177;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[453],
    (int32_t)v3177,
    v3178,
    v3179,
    v3180,
    v3181,
    v3182,
    v3183);
  v3184 = (CombineLimitReleaseMaster_o *)sub_21FFEBC(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v3184, 0);
  if ( v3184 )
  {
    v3 = sub_21FFDA4(v3184, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C6u )
    goto LABEL_1691;
  v1->m_Items[454] = (DataMasterBase_o *)v3184;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[454],
    (int32_t)v3184,
    v3185,
    v3186,
    v3187,
    v3188,
    v3189,
    v3190);
  v3191 = (HeelPortraitMaster_o *)sub_21FFEBC(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v3191, 0);
  if ( v3191 )
  {
    v3 = sub_21FFDA4(v3191, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C7u )
    goto LABEL_1691;
  v1->m_Items[455] = (DataMasterBase_o *)v3191;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[455],
    (int32_t)v3191,
    v3192,
    v3193,
    v3194,
    v3195,
    v3196,
    v3197);
  v3198 = (UserHeelPortraitMaster_o *)sub_21FFEBC(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v3198, 0);
  if ( v3198 )
  {
    v3 = sub_21FFDA4(v3198, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C8u )
    goto LABEL_1691;
  v1->m_Items[456] = (DataMasterBase_o *)v3198;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[456],
    (int32_t)v3198,
    v3199,
    v3200,
    v3201,
    v3202,
    v3203,
    v3204);
  v3205 = (TreasureDeviceSequenceWeightMaster_o *)sub_21FFEBC(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v3205, 0);
  if ( v3205 )
  {
    v3 = sub_21FFDA4(v3205, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1C9u )
    goto LABEL_1691;
  v1->m_Items[457] = (DataMasterBase_o *)v3205;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[457],
    (int32_t)v3205,
    v3206,
    v3207,
    v3208,
    v3209,
    v3210,
    v3211);
  v3212 = (NpcServantFollowerIndividualityMaster_o *)sub_21FFEBC(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v3212, 0);
  if ( v3212 )
  {
    v3 = sub_21FFDA4(v3212, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CAu )
    goto LABEL_1691;
  v1->m_Items[458] = (DataMasterBase_o *)v3212;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[458],
    (int32_t)v3212,
    v3213,
    v3214,
    v3215,
    v3216,
    v3217,
    v3218);
  v3219 = (GachaExtraGiftMaster_o *)sub_21FFEBC(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v3219, 0);
  if ( v3219 )
  {
    v3 = sub_21FFDA4(v3219, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CBu )
    goto LABEL_1691;
  v1->m_Items[459] = (DataMasterBase_o *)v3219;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[459],
    (int32_t)v3219,
    v3220,
    v3221,
    v3222,
    v3223,
    v3224,
    v3225);
  v3226 = (EventMuralMaster_o *)sub_21FFEBC(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v3226, 0);
  if ( v3226 )
  {
    v3 = sub_21FFDA4(v3226, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CCu )
    goto LABEL_1691;
  v1->m_Items[460] = (DataMasterBase_o *)v3226;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[460],
    (int32_t)v3226,
    v3227,
    v3228,
    v3229,
    v3230,
    v3231,
    v3232);
  v3233 = (ViewWaveEnemyMaster_o *)sub_21FFEBC(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v3233, 0);
  if ( v3233 )
  {
    v3 = sub_21FFDA4(v3233, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CDu )
    goto LABEL_1691;
  v1->m_Items[461] = (DataMasterBase_o *)v3233;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[461],
    (int32_t)v3233,
    v3234,
    v3235,
    v3236,
    v3237,
    v3238,
    v3239);
  v3240 = (BlankEarthSpotNavimenuMaster_o *)sub_21FFEBC(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v3240, 0);
  if ( v3240 )
  {
    v3 = sub_21FFDA4(v3240, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CEu )
    goto LABEL_1691;
  v1->m_Items[462] = (DataMasterBase_o *)v3240;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[462],
    (int32_t)v3240,
    v3241,
    v3242,
    v3243,
    v3244,
    v3245,
    v3246);
  v3247 = (BlankEarthGimmickMaster_o *)sub_21FFEBC(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v3247, 0);
  if ( v3247 )
  {
    v3 = sub_21FFDA4(v3247, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1CFu )
    goto LABEL_1691;
  v1->m_Items[463] = (DataMasterBase_o *)v3247;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[463],
    (int32_t)v3247,
    v3248,
    v3249,
    v3250,
    v3251,
    v3252,
    v3253);
  v3254 = (TerminalOverwriteMaster_o *)sub_21FFEBC(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v3254, 0);
  if ( v3254 )
  {
    v3 = sub_21FFDA4(v3254, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D0u )
    goto LABEL_1691;
  v1->m_Items[464] = (DataMasterBase_o *)v3254;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[464],
    (int32_t)v3254,
    v3255,
    v3256,
    v3257,
    v3258,
    v3259,
    v3260);
  v3261 = (UserExchangeSvtMaster_o *)sub_21FFEBC(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v3261, 0);
  if ( v3261 )
  {
    v3 = sub_21FFDA4(v3261, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D1u )
    goto LABEL_1691;
  v1->m_Items[465] = (DataMasterBase_o *)v3261;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[465],
    (int32_t)v3261,
    v3262,
    v3263,
    v3264,
    v3265,
    v3266,
    v3267);
  v3268 = (WarBoardCommonReleaseMaster_o *)sub_21FFEBC(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v3268, 0);
  if ( v3268 )
  {
    v3 = sub_21FFDA4(v3268, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D2u )
    goto LABEL_1691;
  v1->m_Items[466] = (DataMasterBase_o *)v3268;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[466],
    (int32_t)v3268,
    v3269,
    v3270,
    v3271,
    v3272,
    v3273,
    v3274);
  v3275 = (WarBoardEventMaster_o *)sub_21FFEBC(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v3275, 0);
  if ( v3275 )
  {
    v3 = sub_21FFDA4(v3275, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D3u )
    goto LABEL_1691;
  v1->m_Items[467] = (DataMasterBase_o *)v3275;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[467],
    (int32_t)v3275,
    v3276,
    v3277,
    v3278,
    v3279,
    v3280,
    v3281);
  v3282 = (WarBoardEventScriptMaster_o *)sub_21FFEBC(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v3282, 0);
  if ( v3282 )
  {
    v3 = sub_21FFDA4(v3282, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D4u )
    goto LABEL_1691;
  v1->m_Items[468] = (DataMasterBase_o *)v3282;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[468],
    (int32_t)v3282,
    v3283,
    v3284,
    v3285,
    v3286,
    v3287,
    v3288);
  v3289 = (WarBoardStageBossMaster_o *)sub_21FFEBC(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v3289, 0);
  if ( v3289 )
  {
    v3 = sub_21FFDA4(v3289, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D5u )
    goto LABEL_1691;
  v1->m_Items[469] = (DataMasterBase_o *)v3289;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[469],
    (int32_t)v3289,
    v3290,
    v3291,
    v3292,
    v3293,
    v3294,
    v3295);
  v3296 = (WarBoardSquareIndexGroupMaster_o *)sub_21FFEBC(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v3296, 0);
  if ( v3296 )
  {
    v3 = sub_21FFDA4(v3296, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D6u )
    goto LABEL_1691;
  v1->m_Items[470] = (DataMasterBase_o *)v3296;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[470],
    (int32_t)v3296,
    v3297,
    v3298,
    v3299,
    v3300,
    v3301,
    v3302);
  v3303 = (WarBoardActionTrendGroupMaster_o *)sub_21FFEBC(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v3303, 0);
  if ( v3303 )
  {
    v3 = sub_21FFDA4(v3303, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D7u )
    goto LABEL_1691;
  v1->m_Items[471] = (DataMasterBase_o *)v3303;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[471],
    (int32_t)v3303,
    v3304,
    v3305,
    v3306,
    v3307,
    v3308,
    v3309);
  v3310 = (WarBoardRatingOffsetGroupMaster_o *)sub_21FFEBC(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v3310, 0);
  if ( v3310 )
  {
    v3 = sub_21FFDA4(v3310, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D8u )
    goto LABEL_1691;
  v1->m_Items[472] = (DataMasterBase_o *)v3310;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[472],
    (int32_t)v3310,
    v3311,
    v3312,
    v3313,
    v3314,
    v3315,
    v3316);
  v3317 = (WarBoardReinforcementsMaster_o *)sub_21FFEBC(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v3317, 0);
  if ( v3317 )
  {
    v3 = sub_21FFDA4(v3317, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1D9u )
    goto LABEL_1691;
  v1->m_Items[473] = (DataMasterBase_o *)v3317;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[473],
    (int32_t)v3317,
    v3318,
    v3319,
    v3320,
    v3321,
    v3322,
    v3323);
  v3324 = (WarBoardStageReinforcementsMaster_o *)sub_21FFEBC(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v3324, 0);
  if ( v3324 )
  {
    v3 = sub_21FFDA4(v3324, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DAu )
    goto LABEL_1691;
  v1->m_Items[474] = (DataMasterBase_o *)v3324;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[474],
    (int32_t)v3324,
    v3325,
    v3326,
    v3327,
    v3328,
    v3329,
    v3330);
  v3331 = (WarBoardFutureActionTrendMaster_o *)sub_21FFEBC(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v3331, 0);
  if ( v3331 )
  {
    v3 = sub_21FFDA4(v3331, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DBu )
    goto LABEL_1691;
  v1->m_Items[475] = (DataMasterBase_o *)v3331;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[475],
    (int32_t)v3331,
    v3332,
    v3333,
    v3334,
    v3335,
    v3336,
    v3337);
  v3338 = (ServantProfilePushMaster_o *)sub_21FFEBC(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v3338, 0);
  if ( v3338 )
  {
    v3 = sub_21FFDA4(v3338, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DCu )
    goto LABEL_1691;
  v1->m_Items[476] = (DataMasterBase_o *)v3338;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[476],
    (int32_t)v3338,
    v3339,
    v3340,
    v3341,
    v3342,
    v3343,
    v3344);
  v3345 = (MapGimmickPathMaster_o *)sub_21FFEBC(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v3345, 0);
  if ( v3345 )
  {
    v3 = sub_21FFDA4(v3345, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DDu )
    goto LABEL_1691;
  v1->m_Items[477] = (DataMasterBase_o *)v3345;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[477],
    (int32_t)v3345,
    v3346,
    v3347,
    v3348,
    v3349,
    v3350,
    v3351);
  v3352 = (MapGimmickPathReleaseMaster_o *)sub_21FFEBC(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v3352, 0);
  if ( v3352 )
  {
    v3 = sub_21FFDA4(v3352, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DEu )
    goto LABEL_1691;
  v1->m_Items[478] = (DataMasterBase_o *)v3352;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[478],
    (int32_t)v3352,
    v3353,
    v3354,
    v3355,
    v3356,
    v3357,
    v3358);
  v3359 = (ServantOverwriteMaster_o *)sub_21FFEBC(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v3359, 0);
  if ( v3359 )
  {
    v3 = sub_21FFDA4(v3359, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1DFu )
    goto LABEL_1691;
  v1->m_Items[479] = (DataMasterBase_o *)v3359;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[479],
    (int32_t)v3359,
    v3360,
    v3361,
    v3362,
    v3363,
    v3364,
    v3365);
  v3366 = (IndividualityPolicyMaster_o *)sub_21FFEBC(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v3366, 0);
  if ( v3366 )
  {
    v3 = sub_21FFDA4(v3366, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E0u )
    goto LABEL_1691;
  v1->m_Items[480] = (DataMasterBase_o *)v3366;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[480],
    (int32_t)v3366,
    v3367,
    v3368,
    v3369,
    v3370,
    v3371,
    v3372);
  v3373 = (IndividualityPersonalityMaster_o *)sub_21FFEBC(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v3373, 0);
  if ( v3373 )
  {
    v3 = sub_21FFDA4(v3373, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E1u )
    goto LABEL_1691;
  v1->m_Items[481] = (DataMasterBase_o *)v3373;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[481],
    (int32_t)v3373,
    v3374,
    v3375,
    v3376,
    v3377,
    v3378,
    v3379);
  v3380 = (AttriMaster_o *)sub_21FFEBC(AttriMaster_TypeInfo);
  AttriMaster___ctor(v3380, 0);
  if ( v3380 )
  {
    v3 = sub_21FFDA4(v3380, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E2u )
    goto LABEL_1691;
  v1->m_Items[482] = (DataMasterBase_o *)v3380;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[482],
    (int32_t)v3380,
    v3381,
    v3382,
    v3383,
    v3384,
    v3385,
    v3386);
  v3387 = (ServantVoicePatternMaster_o *)sub_21FFEBC(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v3387, 0);
  if ( v3387 )
  {
    v3 = sub_21FFDA4(v3387, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E3u )
    goto LABEL_1691;
  v1->m_Items[483] = (DataMasterBase_o *)v3387;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[483],
    (int32_t)v3387,
    v3388,
    v3389,
    v3390,
    v3391,
    v3392,
    v3393);
  v3394 = (UserGameCommonMaster_o *)sub_21FFEBC(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v3394, 0);
  if ( v3394 )
  {
    v3 = sub_21FFDA4(v3394, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E4u )
    goto LABEL_1691;
  v1->m_Items[484] = (DataMasterBase_o *)v3394;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[484],
    (int32_t)v3394,
    v3395,
    v3396,
    v3397,
    v3398,
    v3399,
    v3400);
  v3401 = (ServantPhotoMaster_o *)sub_21FFEBC(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v3401, 0);
  if ( v3401 )
  {
    v3 = sub_21FFDA4(v3401, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E5u )
    goto LABEL_1691;
  v1->m_Items[485] = (DataMasterBase_o *)v3401;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[485],
    (int32_t)v3401,
    v3402,
    v3403,
    v3404,
    v3405,
    v3406,
    v3407);
  v3408 = (MasterPhotoMaster_o *)sub_21FFEBC(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v3408, 0);
  if ( v3408 )
  {
    v3 = sub_21FFDA4(v3408, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E6u )
    goto LABEL_1691;
  v1->m_Items[486] = (DataMasterBase_o *)v3408;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[486],
    (int32_t)v3408,
    v3409,
    v3410,
    v3411,
    v3412,
    v3413,
    v3414);
  v3415 = (PhotoFrameMaster_o *)sub_21FFEBC(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v3415, 0);
  if ( v3415 )
  {
    v3 = sub_21FFDA4(v3415, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E7u )
    goto LABEL_1691;
  v1->m_Items[487] = (DataMasterBase_o *)v3415;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[487],
    (int32_t)v3415,
    v3416,
    v3417,
    v3418,
    v3419,
    v3420,
    v3421);
  v3422 = (WarMessageMaster_o *)sub_21FFEBC(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v3422, 0);
  if ( v3422 )
  {
    v3 = sub_21FFDA4(v3422, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E8u )
    goto LABEL_1691;
  v1->m_Items[488] = (DataMasterBase_o *)v3422;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[488],
    (int32_t)v3422,
    v3423,
    v3424,
    v3425,
    v3426,
    v3427,
    v3428);
  v3429 = (QuestAutoOrganizationAdjustMaster_o *)sub_21FFEBC(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v3429, 0);
  if ( v3429 )
  {
    v3 = sub_21FFDA4(v3429, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1E9u )
    goto LABEL_1691;
  v1->m_Items[489] = (DataMasterBase_o *)v3429;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[489],
    (int32_t)v3429,
    v3430,
    v3431,
    v3432,
    v3433,
    v3434,
    v3435);
  v3436 = (ExcludeMotionMaster_o *)sub_21FFEBC(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v3436, 0);
  if ( v3436 )
  {
    v3 = sub_21FFDA4(v3436, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EAu )
    goto LABEL_1691;
  v1->m_Items[490] = (DataMasterBase_o *)v3436;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[490],
    (int32_t)v3436,
    v3437,
    v3438,
    v3439,
    v3440,
    v3441,
    v3442);
  v3443 = (UserInterruptionQuestMaster_o *)sub_21FFEBC(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v3443, 0);
  if ( v3443 )
  {
    v3 = sub_21FFDA4(v3443, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EBu )
    goto LABEL_1691;
  v1->m_Items[491] = (DataMasterBase_o *)v3443;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[491],
    (int32_t)v3443,
    v3444,
    v3445,
    v3446,
    v3447,
    v3448,
    v3449);
  v3450 = (ServantTransformMaster_o *)sub_21FFEBC(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v3450, 0);
  if ( v3450 )
  {
    v3 = sub_21FFDA4(v3450, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1ECu )
    goto LABEL_1691;
  v1->m_Items[492] = (DataMasterBase_o *)v3450;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[492],
    (int32_t)v3450,
    v3451,
    v3452,
    v3453,
    v3454,
    v3455,
    v3456);
  v3457 = (MapUpdateScheduleMaster_o *)sub_21FFEBC(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v3457, 0);
  if ( v3457 )
  {
    v3 = sub_21FFDA4(v3457, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EDu )
    goto LABEL_1691;
  v1->m_Items[493] = (DataMasterBase_o *)v3457;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[493],
    (int32_t)v3457,
    v3458,
    v3459,
    v3460,
    v3461,
    v3462,
    v3463);
  v3464 = (QuestPhasePresentMaster_o *)sub_21FFEBC(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v3464, 0);
  if ( v3464 )
  {
    v3 = sub_21FFDA4(v3464, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EEu )
    goto LABEL_1691;
  v1->m_Items[494] = (DataMasterBase_o *)v3464;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[494],
    (int32_t)v3464,
    v3465,
    v3466,
    v3467,
    v3468,
    v3469,
    v3470);
  v3471 = (UserAccountLinkageMaster_o *)sub_21FFEBC(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v3471, 0);
  if ( v3471 )
  {
    v3 = sub_21FFDA4(v3471, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1EFu )
    goto LABEL_1691;
  v1->m_Items[495] = (DataMasterBase_o *)v3471;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[495],
    (int32_t)v3471,
    v3472,
    v3473,
    v3474,
    v3475,
    v3476,
    v3477);
  v3478 = (MissionNaviTransitionMaster_o *)sub_21FFEBC(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v3478, 0);
  if ( v3478 )
  {
    v3 = sub_21FFDA4(v3478, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F0u )
    goto LABEL_1691;
  v1->m_Items[496] = (DataMasterBase_o *)v3478;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[496],
    (int32_t)v3478,
    v3479,
    v3480,
    v3481,
    v3482,
    v3483,
    v3484);
  v3485 = (MissionNaviQuestMaster_o *)sub_21FFEBC(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v3485, 0);
  if ( v3485 )
  {
    v3 = sub_21FFDA4(v3485, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F1u )
    goto LABEL_1691;
  v1->m_Items[497] = (DataMasterBase_o *)v3485;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[497],
    (int32_t)v3485,
    v3486,
    v3487,
    v3488,
    v3489,
    v3490,
    v3491);
  v3492 = (EventTradeGoodsMaster_o *)sub_21FFEBC(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v3492, 0);
  if ( v3492 )
  {
    v3 = sub_21FFDA4(v3492, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F2u )
    goto LABEL_1691;
  v1->m_Items[498] = (DataMasterBase_o *)v3492;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[498],
    (int32_t)v3492,
    v3493,
    v3494,
    v3495,
    v3496,
    v3497,
    v3498);
  v3499 = (EventTradeStoreMaster_o *)sub_21FFEBC(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v3499, 0);
  if ( v3499 )
  {
    v3 = sub_21FFDA4(v3499, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F3u )
    goto LABEL_1691;
  v1->m_Items[499] = (DataMasterBase_o *)v3499;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[499],
    (int32_t)v3499,
    v3500,
    v3501,
    v3502,
    v3503,
    v3504,
    v3505);
  v3506 = (EventTradePickupMaster_o *)sub_21FFEBC(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v3506, 0);
  if ( v3506 )
  {
    v3 = sub_21FFDA4(v3506, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F4u )
    goto LABEL_1691;
  v1->m_Items[500] = (DataMasterBase_o *)v3506;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[500],
    (int32_t)v3506,
    v3507,
    v3508,
    v3509,
    v3510,
    v3511,
    v3512);
  v3513 = (UserEventTradeMaster_o *)sub_21FFEBC(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v3513, 0);
  if ( v3513 )
  {
    v3 = sub_21FFDA4(v3513, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F5u )
    goto LABEL_1691;
  v1->m_Items[501] = (DataMasterBase_o *)v3513;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[501],
    (int32_t)v3513,
    v3514,
    v3515,
    v3516,
    v3517,
    v3518,
    v3519);
  v3520 = (PaymentHistoryMaster_o *)sub_21FFEBC(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v3520, 0);
  if ( v3520 )
  {
    v3 = sub_21FFDA4(v3520, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F6u )
    goto LABEL_1691;
  v1->m_Items[502] = (DataMasterBase_o *)v3520;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[502],
    (int32_t)v3520,
    v3521,
    v3522,
    v3523,
    v3524,
    v3525,
    v3526);
  v3527 = (UserExternalPaymentStoneMaster_o *)sub_21FFEBC(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v3527, 0);
  if ( v3527 )
  {
    v3 = sub_21FFDA4(v3527, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F7u )
    goto LABEL_1691;
  v1->m_Items[503] = (DataMasterBase_o *)v3527;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[503],
    (int32_t)v3527,
    v3528,
    v3529,
    v3530,
    v3531,
    v3532,
    v3533);
  v3534 = (QuestPhaseIndividualityMaster_o *)sub_21FFEBC(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v3534, 0);
  if ( v3534 )
  {
    v3 = sub_21FFDA4(v3534, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F8u )
    goto LABEL_1691;
  v1->m_Items[504] = (DataMasterBase_o *)v3534;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[504],
    (int32_t)v3534,
    v3535,
    v3536,
    v3537,
    v3538,
    v3539,
    v3540);
  v3541 = (ViewGachaFeaturedServantMaster_o *)sub_21FFEBC(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v3541, 0);
  if ( v3541 )
  {
    v3 = sub_21FFDA4(v3541, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1F9u )
    goto LABEL_1691;
  v1->m_Items[505] = (DataMasterBase_o *)v3541;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[505],
    (int32_t)v3541,
    v3542,
    v3543,
    v3544,
    v3545,
    v3546,
    v3547);
  v3548 = (UserGachaPickupCollateralMaster_o *)sub_21FFEBC(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v3548, 0);
  if ( v3548 )
  {
    v3 = sub_21FFDA4(v3548, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FAu )
    goto LABEL_1691;
  v1->m_Items[506] = (DataMasterBase_o *)v3548;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[506],
    (int32_t)v3548,
    v3549,
    v3550,
    v3551,
    v3552,
    v3553,
    v3554);
  v3555 = (GachaPickupCollateralMaster_o *)sub_21FFEBC(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v3555, 0);
  if ( v3555 )
  {
    v3 = sub_21FFDA4(v3555, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FBu )
    goto LABEL_1691;
  v1->m_Items[507] = (DataMasterBase_o *)v3555;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[507],
    (int32_t)v3555,
    v3556,
    v3557,
    v3558,
    v3559,
    v3560,
    v3561);
  v3562 = (GachaPickupCollateralGroupMaster_o *)sub_21FFEBC(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v3562, 0);
  if ( v3562 )
  {
    v3 = sub_21FFDA4(v3562, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FCu )
    goto LABEL_1691;
  v1->m_Items[508] = (DataMasterBase_o *)v3562;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[508],
    (int32_t)v3562,
    v3563,
    v3564,
    v3565,
    v3566,
    v3567,
    v3568);
  v3569 = (BattlePointMaster_o *)sub_21FFEBC(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v3569, 0);
  if ( v3569 )
  {
    v3 = sub_21FFDA4(v3569, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FDu )
    goto LABEL_1691;
  v1->m_Items[509] = (DataMasterBase_o *)v3569;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[509],
    (int32_t)v3569,
    v3570,
    v3571,
    v3572,
    v3573,
    v3574,
    v3575);
  v3576 = (BattlePointPhaseMaster_o *)sub_21FFEBC(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v3576, 0);
  if ( v3576 )
  {
    v3 = sub_21FFDA4(v3576, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x1FEu )
    goto LABEL_1691;
  v1->m_Items[510] = (DataMasterBase_o *)v3576;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[510],
    (int32_t)v3576,
    v3577,
    v3578,
    v3579,
    v3580,
    v3581,
    v3582);
  v3583 = (ServantBattlePointMaster_o *)sub_21FFEBC(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v3583, 0);
  if ( v3583 )
  {
    v3 = sub_21FFDA4(v3583, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( (*(_DWORD *)p_max_length & 0xFFFFFE00) == 0 )
    goto LABEL_1691;
  v1->m_Items[511] = (DataMasterBase_o *)v3583;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[511],
    (int32_t)v3583,
    v3584,
    v3585,
    v3586,
    v3587,
    v3588,
    v3589);
  v3590 = (EffectMovieMaster_o *)sub_21FFEBC(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v3590, 0);
  if ( v3590 )
  {
    v3 = sub_21FFDA4(v3590, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x200u )
    goto LABEL_1691;
  v1->m_Items[512] = (DataMasterBase_o *)v3590;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[512],
    (int32_t)v3590,
    v3591,
    v3592,
    v3593,
    v3594,
    v3595,
    v3596);
  v3597 = (PaymentLimitMaster_o *)sub_21FFEBC(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v3597, 0);
  if ( v3597 )
  {
    v3 = sub_21FFDA4(v3597, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x201u )
    goto LABEL_1691;
  v1->m_Items[513] = (DataMasterBase_o *)v3597;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[513],
    (int32_t)v3597,
    v3598,
    v3599,
    v3600,
    v3601,
    v3602,
    v3603);
  v3604 = (UserPaymentLimitMaster_o *)sub_21FFEBC(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v3604, 0);
  if ( v3604 )
  {
    v3 = sub_21FFDA4(v3604, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x202u )
    goto LABEL_1691;
  v1->m_Items[514] = (DataMasterBase_o *)v3604;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[514],
    (int32_t)v3604,
    v3605,
    v3606,
    v3607,
    v3608,
    v3609,
    v3610);
  v3611 = (RoadmapMaster_o *)sub_21FFEBC(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v3611, 0);
  if ( v3611 )
  {
    v3 = sub_21FFDA4(v3611, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x203u )
    goto LABEL_1691;
  v1->m_Items[515] = (DataMasterBase_o *)v3611;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[515],
    (int32_t)v3611,
    v3612,
    v3613,
    v3614,
    v3615,
    v3616,
    v3617);
  v3618 = (UserRecommendSupportMaster_o *)sub_21FFEBC(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v3618, 0);
  if ( v3618 )
  {
    v3 = sub_21FFDA4(v3618, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x204u )
    goto LABEL_1691;
  v1->m_Items[516] = (DataMasterBase_o *)v3618;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[516],
    (int32_t)v3618,
    v3619,
    v3620,
    v3621,
    v3622,
    v3623,
    v3624);
  v3625 = (RecommendSupportQuestMaster_o *)sub_21FFEBC(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v3625, 0);
  if ( v3625 )
  {
    v3 = sub_21FFDA4(v3625, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x205u )
    goto LABEL_1691;
  v1->m_Items[517] = (DataMasterBase_o *)v3625;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[517],
    (int32_t)v3625,
    v3626,
    v3627,
    v3628,
    v3629,
    v3630,
    v3631);
  v3632 = (RecommendAdviceMessageMaster_o *)sub_21FFEBC(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v3632, 0);
  if ( v3632 )
  {
    v3 = sub_21FFDA4(v3632, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x206u )
    goto LABEL_1691;
  v1->m_Items[518] = (DataMasterBase_o *)v3632;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[518],
    (int32_t)v3632,
    v3633,
    v3634,
    v3635,
    v3636,
    v3637,
    v3638);
  v3639 = (UserRecommendFollowerMaster_o *)sub_21FFEBC(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v3639, 0);
  if ( v3639 )
  {
    v3 = sub_21FFDA4(v3639, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x207u )
    goto LABEL_1691;
  v1->m_Items[519] = (DataMasterBase_o *)v3639;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[519],
    (int32_t)v3639,
    v3640,
    v3641,
    v3642,
    v3643,
    v3644,
    v3645);
  v3646 = (ItemDropEfficiencyMaster_o *)sub_21FFEBC(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v3646, 0);
  if ( v3646 )
  {
    v3 = sub_21FFDA4(v3646, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x208u )
    goto LABEL_1691;
  v1->m_Items[520] = (DataMasterBase_o *)v3646;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[520],
    (int32_t)v3646,
    v3647,
    v3648,
    v3649,
    v3650,
    v3651,
    v3652);
  v3653 = (BlankEarthGimmickAddMaster_o *)sub_21FFEBC(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v3653, 0);
  if ( v3653 )
  {
    v3 = sub_21FFDA4(v3653, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x209u )
    goto LABEL_1691;
  v1->m_Items[521] = (DataMasterBase_o *)v3653;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[521],
    (int32_t)v3653,
    v3654,
    v3655,
    v3656,
    v3657,
    v3658,
    v3659);
  v3660 = (WarReleaseMaster_o *)sub_21FFEBC(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v3660, 0);
  if ( v3660 )
  {
    v3 = sub_21FFDA4(v3660, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Au )
    goto LABEL_1691;
  v1->m_Items[522] = (DataMasterBase_o *)v3660;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[522],
    (int32_t)v3660,
    v3661,
    v3662,
    v3663,
    v3664,
    v3665,
    v3666);
  v3667 = (SelectBonusBaseMaster_o *)sub_21FFEBC(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v3667, 0);
  if ( v3667 )
  {
    v3 = sub_21FFDA4(v3667, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Bu )
    goto LABEL_1691;
  v1->m_Items[523] = (DataMasterBase_o *)v3667;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[523],
    (int32_t)v3667,
    v3668,
    v3669,
    v3670,
    v3671,
    v3672,
    v3673);
  v3674 = (SelectBonusMaster_o *)sub_21FFEBC(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v3674, 0);
  if ( v3674 )
  {
    v3 = sub_21FFDA4(v3674, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Cu )
    goto LABEL_1691;
  v1->m_Items[524] = (DataMasterBase_o *)v3674;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[524],
    (int32_t)v3674,
    v3675,
    v3676,
    v3677,
    v3678,
    v3679,
    v3680);
  v3681 = (MyroomServantSpecialImageMaster_o *)sub_21FFEBC(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v3681, 0);
  if ( v3681 )
  {
    v3 = sub_21FFDA4(v3681, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Du )
    goto LABEL_1691;
  v1->m_Items[525] = (DataMasterBase_o *)v3681;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[525],
    (int32_t)v3681,
    v3682,
    v3683,
    v3684,
    v3685,
    v3686,
    v3687);
  v3688 = (ShopResetMaster_o *)sub_21FFEBC(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v3688, 0);
  if ( v3688 )
  {
    v3 = sub_21FFDA4(v3688, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Eu )
    goto LABEL_1691;
  v1->m_Items[526] = (DataMasterBase_o *)v3688;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[526],
    (int32_t)v3688,
    v3689,
    v3690,
    v3691,
    v3692,
    v3693,
    v3694);
  v3695 = (NpcServantDisplayTypeDetailMaster_o *)sub_21FFEBC(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v3695, 0);
  if ( v3695 )
  {
    v3 = sub_21FFDA4(v3695, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x20Fu )
    goto LABEL_1691;
  v1->m_Items[527] = (DataMasterBase_o *)v3695;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[527],
    (int32_t)v3695,
    v3696,
    v3697,
    v3698,
    v3699,
    v3700,
    v3701);
  v3702 = (FriendshipServantMaster_o *)sub_21FFEBC(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v3702, 0);
  if ( v3702 )
  {
    v3 = sub_21FFDA4(v3702, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x210u )
    goto LABEL_1691;
  v1->m_Items[528] = (DataMasterBase_o *)v3702;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[528],
    (int32_t)v3702,
    v3703,
    v3704,
    v3705,
    v3706,
    v3707,
    v3708);
  v3709 = (ExchangeSvtCoinGivenNumMaster_o *)sub_21FFEBC(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v3709, 0);
  if ( v3709 )
  {
    v3 = sub_21FFDA4(v3709, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x211u )
    goto LABEL_1691;
  v1->m_Items[529] = (DataMasterBase_o *)v3709;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[529],
    (int32_t)v3709,
    v3710,
    v3711,
    v3712,
    v3713,
    v3714,
    v3715);
  v3716 = (ChaldeaGatePickupMaster_o *)sub_21FFEBC(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v3716, 0);
  if ( v3716 )
  {
    v3 = sub_21FFDA4(v3716, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x212u )
    goto LABEL_1691;
  v1->m_Items[530] = (DataMasterBase_o *)v3716;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[530],
    (int32_t)v3716,
    v3717,
    v3718,
    v3719,
    v3720,
    v3721,
    v3722);
  v3723 = (WarGroupIgnoreMaster_o *)sub_21FFEBC(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v3723, 0);
  if ( v3723 )
  {
    v3 = sub_21FFDA4(v3723, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x213u )
    goto LABEL_1691;
  v1->m_Items[531] = (DataMasterBase_o *)v3723;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[531],
    (int32_t)v3723,
    v3724,
    v3725,
    v3726,
    v3727,
    v3728,
    v3729);
  v3730 = (ImagePartsGroupMaster_o *)sub_21FFEBC(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v3730, 0);
  if ( v3730 )
  {
    v3 = sub_21FFDA4(v3730, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x214u )
    goto LABEL_1691;
  v1->m_Items[532] = (DataMasterBase_o *)v3730;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[532],
    (int32_t)v3730,
    v3731,
    v3732,
    v3733,
    v3734,
    v3735,
    v3736);
  v3737 = (UserImagePartsGroupMaster_o *)sub_21FFEBC(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v3737, 0);
  if ( v3737 )
  {
    v3 = sub_21FFDA4(v3737, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x215u )
    goto LABEL_1691;
  v1->m_Items[533] = (DataMasterBase_o *)v3737;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[533],
    (int32_t)v3737,
    v3738,
    v3739,
    v3740,
    v3741,
    v3742,
    v3743);
  v3744 = (MissionItemDisplayMaster_o *)sub_21FFEBC(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v3744, 0);
  if ( v3744 )
  {
    v3 = sub_21FFDA4(v3744, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x216u )
    goto LABEL_1691;
  v1->m_Items[534] = (DataMasterBase_o *)v3744;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[534],
    (int32_t)v3744,
    v3745,
    v3746,
    v3747,
    v3748,
    v3749,
    v3750);
  v3751 = (QuestUseItemGroupMaster_o *)sub_21FFEBC(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v3751, 0);
  if ( v3751 )
  {
    v3 = sub_21FFDA4(v3751, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x217u )
    goto LABEL_1691;
  v1->m_Items[535] = (DataMasterBase_o *)v3751;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[535],
    (int32_t)v3751,
    v3752,
    v3753,
    v3754,
    v3755,
    v3756,
    v3757);
  v3758 = (QuestUseItemPickupMaster_o *)sub_21FFEBC(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v3758, 0);
  if ( v3758 )
  {
    v3 = sub_21FFDA4(v3758, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x218u )
    goto LABEL_1691;
  v1->m_Items[536] = (DataMasterBase_o *)v3758;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[536],
    (int32_t)v3758,
    v3759,
    v3760,
    v3761,
    v3762,
    v3763,
    v3764);
  v3765 = (UserEventItemLinkSvtMaster_o *)sub_21FFEBC(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v3765, 0);
  if ( v3765 )
  {
    v3 = sub_21FFDA4(v3765, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x219u )
    goto LABEL_1691;
  v1->m_Items[537] = (DataMasterBase_o *)v3765;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[537],
    (int32_t)v3765,
    v3766,
    v3767,
    v3768,
    v3769,
    v3770,
    v3771);
  v3772 = (QuestHintOverwriteMaster_o *)sub_21FFEBC(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v3772, 0);
  if ( v3772 )
  {
    v3 = sub_21FFDA4(v3772, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Au )
    goto LABEL_1691;
  v1->m_Items[538] = (DataMasterBase_o *)v3772;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[538],
    (int32_t)v3772,
    v3773,
    v3774,
    v3775,
    v3776,
    v3777,
    v3778);
  v3779 = (ReachedWaveInfoMaster_o *)sub_21FFEBC(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v3779, 0);
  if ( v3779 )
  {
    v3 = sub_21FFDA4(v3779, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Bu )
    goto LABEL_1691;
  v1->m_Items[539] = (DataMasterBase_o *)v3779;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[539],
    (int32_t)v3779,
    v3780,
    v3781,
    v3782,
    v3783,
    v3784,
    v3785);
  v3786 = (GalleryMaster_o *)sub_21FFEBC(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v3786, 0);
  if ( v3786 )
  {
    v3 = sub_21FFDA4(v3786, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Cu )
    goto LABEL_1691;
  v1->m_Items[540] = (DataMasterBase_o *)v3786;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[540],
    (int32_t)v3786,
    v3787,
    v3788,
    v3789,
    v3790,
    v3791,
    v3792);
  v3793 = (GalleryResourceMaster_o *)sub_21FFEBC(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v3793, 0);
  if ( v3793 )
  {
    v3 = sub_21FFDA4(v3793, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Du )
    goto LABEL_1691;
  v1->m_Items[541] = (DataMasterBase_o *)v3793;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[541],
    (int32_t)v3793,
    v3794,
    v3795,
    v3796,
    v3797,
    v3798,
    v3799);
  v3800 = (ServantSkillAddMaster_o *)sub_21FFEBC(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v3800, 0);
  if ( v3800 )
  {
    v3 = sub_21FFDA4(v3800, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Eu )
    goto LABEL_1691;
  v1->m_Items[542] = (DataMasterBase_o *)v3800;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[542],
    (int32_t)v3800,
    v3801,
    v3802,
    v3803,
    v3804,
    v3805,
    v3806);
  v3807 = (GalleryFolderReleaseMaster_o *)sub_21FFEBC(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v3807, 0);
  if ( v3807 )
  {
    v3 = sub_21FFDA4(v3807, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x21Fu )
    goto LABEL_1691;
  v1->m_Items[543] = (DataMasterBase_o *)v3807;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[543],
    (int32_t)v3807,
    v3808,
    v3809,
    v3810,
    v3811,
    v3812,
    v3813);
  v3814 = (UserSvtFirstGetTimeMaster_o *)sub_21FFEBC(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v3814, 0);
  if ( v3814 )
  {
    v3 = sub_21FFDA4(v3814, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x220u )
    goto LABEL_1691;
  v1->m_Items[544] = (DataMasterBase_o *)v3814;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[544],
    (int32_t)v3814,
    v3815,
    v3816,
    v3817,
    v3818,
    v3819,
    v3820);
  v3821 = (QuestExtensionMaster_o *)sub_21FFEBC(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v3821, 0);
  if ( v3821 )
  {
    v3 = sub_21FFDA4(v3821, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x221u )
    goto LABEL_1691;
  v1->m_Items[545] = (DataMasterBase_o *)v3821;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[545],
    (int32_t)v3821,
    v3822,
    v3823,
    v3824,
    v3825,
    v3826,
    v3827);
  v3828 = (UserServantGrandMaster_o *)sub_21FFEBC(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v3828, 0);
  if ( v3828 )
  {
    v3 = sub_21FFDA4(v3828, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x222u )
    goto LABEL_1691;
  v1->m_Items[546] = (DataMasterBase_o *)v3828;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[546],
    (int32_t)v3828,
    v3829,
    v3830,
    v3831,
    v3832,
    v3833,
    v3834);
  v3835 = (GrandGraphMaster_o *)sub_21FFEBC(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v3835, 0);
  if ( v3835 )
  {
    v3 = sub_21FFDA4(v3835, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x223u )
    goto LABEL_1691;
  v1->m_Items[547] = (DataMasterBase_o *)v3835;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[547],
    (int32_t)v3835,
    v3836,
    v3837,
    v3838,
    v3839,
    v3840,
    v3841);
  v3842 = (GrandGraphDetailMaster_o *)sub_21FFEBC(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v3842, 0);
  if ( v3842 )
  {
    v3 = sub_21FFDA4(v3842, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x224u )
    goto LABEL_1691;
  v1->m_Items[548] = (DataMasterBase_o *)v3842;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[548],
    (int32_t)v3842,
    v3843,
    v3844,
    v3845,
    v3846,
    v3847,
    v3848);
  v3849 = (UserClassStatisticsMaster_o *)sub_21FFEBC(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v3849, 0);
  if ( v3849 )
  {
    v3 = sub_21FFDA4(v3849, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x225u )
    goto LABEL_1691;
  v1->m_Items[549] = (DataMasterBase_o *)v3849;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[549],
    (int32_t)v3849,
    v3850,
    v3851,
    v3852,
    v3853,
    v3854,
    v3855);
  v3856 = (EventEquipSkillPartsMaster_o *)sub_21FFEBC(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v3856, 0);
  if ( v3856 )
  {
    v3 = sub_21FFDA4(v3856, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x226u )
    goto LABEL_1691;
  v1->m_Items[550] = (DataMasterBase_o *)v3856;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[550],
    (int32_t)v3856,
    v3857,
    v3858,
    v3859,
    v3860,
    v3861,
    v3862);
  v3863 = (MasterIndividualitySelectMaster_o *)sub_21FFEBC(MasterIndividualitySelectMaster_TypeInfo);
  MasterIndividualitySelectMaster___ctor(v3863, 0);
  if ( v3863 )
  {
    v3 = sub_21FFDA4(v3863, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x227u )
    goto LABEL_1691;
  v1->m_Items[551] = (DataMasterBase_o *)v3863;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[551],
    (int32_t)v3863,
    v3864,
    v3865,
    v3866,
    v3867,
    v3868,
    v3869);
  v3870 = (MyroomAddBgDiffMaster_o *)sub_21FFEBC(MyroomAddBgDiffMaster_TypeInfo);
  MyroomAddBgDiffMaster___ctor(v3870, 0);
  if ( v3870 )
  {
    v3 = sub_21FFDA4(v3870, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x228u )
    goto LABEL_1691;
  v1->m_Items[552] = (DataMasterBase_o *)v3870;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[552],
    (int32_t)v3870,
    v3871,
    v3872,
    v3873,
    v3874,
    v3875,
    v3876);
  v3877 = (BattleScriptMaster_o *)sub_21FFEBC(BattleScriptMaster_TypeInfo);
  BattleScriptMaster___ctor(v3877, 0);
  if ( v3877 )
  {
    v3 = sub_21FFDA4(v3877, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x229u )
    goto LABEL_1691;
  v1->m_Items[553] = (DataMasterBase_o *)v3877;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[553],
    (int32_t)v3877,
    v3878,
    v3879,
    v3880,
    v3881,
    v3882,
    v3883);
  v3884 = (DropAddMaster_o *)sub_21FFEBC(DropAddMaster_TypeInfo);
  DropAddMaster___ctor(v3884, 0);
  if ( v3884 )
  {
    v3 = sub_21FFDA4(v3884, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Au )
    goto LABEL_1691;
  v1->m_Items[554] = (DataMasterBase_o *)v3884;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[554],
    (int32_t)v3884,
    v3885,
    v3886,
    v3887,
    v3888,
    v3889,
    v3890);
  v3891 = (UserBgImagePartsGroupMaster_o *)sub_21FFEBC(UserBgImagePartsGroupMaster_TypeInfo);
  UserBgImagePartsGroupMaster___ctor(v3891, 0);
  if ( v3891 )
  {
    v3 = sub_21FFDA4(v3891, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Bu )
    goto LABEL_1691;
  v1->m_Items[555] = (DataMasterBase_o *)v3891;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[555],
    (int32_t)v3891,
    v3892,
    v3893,
    v3894,
    v3895,
    v3896,
    v3897);
  v3898 = (EventJobMaster_o *)sub_21FFEBC(EventJobMaster_TypeInfo);
  EventJobMaster___ctor(v3898, 0);
  if ( v3898 )
  {
    v3 = sub_21FFDA4(v3898, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Cu )
    goto LABEL_1691;
  v1->m_Items[556] = (DataMasterBase_o *)v3898;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[556],
    (int32_t)v3898,
    v3899,
    v3900,
    v3901,
    v3902,
    v3903,
    v3904);
  v3905 = (EventJobPassportMaster_o *)sub_21FFEBC(EventJobPassportMaster_TypeInfo);
  EventJobPassportMaster___ctor(v3905, 0);
  if ( v3905 )
  {
    v3 = sub_21FFDA4(v3905, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Du )
    goto LABEL_1691;
  v1->m_Items[557] = (DataMasterBase_o *)v3905;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[557],
    (int32_t)v3905,
    v3906,
    v3907,
    v3908,
    v3909,
    v3910,
    v3911);
  v3912 = (EventJobPointBonusMaster_o *)sub_21FFEBC(EventJobPointBonusMaster_TypeInfo);
  EventJobPointBonusMaster___ctor(v3912, 0);
  if ( v3912 )
  {
    v3 = sub_21FFDA4(v3912, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Eu )
    goto LABEL_1691;
  v1->m_Items[558] = (DataMasterBase_o *)v3912;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[558],
    (int32_t)v3912,
    v3913,
    v3914,
    v3915,
    v3916,
    v3917,
    v3918);
  v3919 = (EventJobQuestMaster_o *)sub_21FFEBC(EventJobQuestMaster_TypeInfo);
  EventJobQuestMaster___ctor(v3919, 0);
  if ( v3919 )
  {
    v3 = sub_21FFDA4(v3919, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x22Fu )
    goto LABEL_1691;
  v1->m_Items[559] = (DataMasterBase_o *)v3919;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[559],
    (int32_t)v3919,
    v3920,
    v3921,
    v3922,
    v3923,
    v3924,
    v3925);
  v3926 = (UserEventJobMaster_o *)sub_21FFEBC(UserEventJobMaster_TypeInfo);
  UserEventJobMaster___ctor(v3926, 0);
  if ( v3926 )
  {
    v3 = sub_21FFDA4(v3926, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_1692;
  }
  if ( *(_DWORD *)p_max_length <= 0x230u )
    goto LABEL_1691;
  v1->m_Items[560] = (DataMasterBase_o *)v3926;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[560],
    (int32_t)v3926,
    v3927,
    v3928,
    v3929,
    v3930,
    v3931,
    v3932);
  v3933 = (UserEventMapGimmickMaster_o *)sub_21FFEBC(UserEventMapGimmickMaster_TypeInfo);
  UserEventMapGimmickMaster___ctor(v3933, 0);
  if ( v3933 )
  {
    v3 = sub_21FFDA4(v3933, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_1692:
      v3941 = sub_21FFEF0(v3, v11);
      sub_21FFD90(v3941, 0);
    }
  }
  if ( *(_DWORD *)p_max_length <= 0x231u )
LABEL_1691:
    sub_21FFED4(v3);
  v1->m_Items[561] = (DataMasterBase_o *)v3933;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v1->m_Items[561],
    (int32_t)v3933,
    v3934,
    v3935,
    v3936,
    v3937,
    v3938,
    v3939);
  return v1;
}


void DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  __int64 v5; // x1
  DataManager_c *v6; // x0
  System_String_o *CacheListFileName; // x19
  __int64 v8; // x1
  DataManager_c *v9; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_593812F & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_593812F = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    if ( System_IO_File__Exists(CacheVersionFileName, 0) )
      System_IO_File__Delete(CacheVersionFileName, 0);
    v6 = DataManager_TypeInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(CacheListFileName, 0) )
      System_IO_File__Delete(CacheListFileName, 0);
    v9 = DataManager_TypeInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(CacheFileName, 0) )
      System_IO_File__Delete(CacheFileName, 0);
  }
}


void DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w26
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  System_String_o *v15; // x20
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593812D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8898/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_593812D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v3;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_masterCheckName, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = 1;
  do
  {
    v28 = v11;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
    v14 = System_String__Format((System_String_o *)StringLiteral_8898/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v12, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v15 = LocalizationManager__Get(v14, 0);
    if ( System_String__op_Equality(v15, v14, 0) )
      break;
    v23 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v23->fields._items;
      v25 = Method_System_Collections_Generic_List_string__Add__;
      ++v23->fields._version;
      if ( items )
        continue;
    }
    sub_21FFECC(v23, v16);
    size = v23->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        (Il2CppObject *)v15,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v23->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v15;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
    }
    ++v11;
  }
  while ( v11 != 999 );
}


Il2CppObject *DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_3822EA4 *method)
{
  long double v2; // q0
  const MethodInfo_3822EA4_RGCTXs *rgctx_data; // x8
  const MethodInfo_3822EA4 *_1_TMaster; // x19
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v7; // x8
  System_Type_o *rgctxDataDummy; // x0
  int32_t *v9; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x0
  __int64 v11; // x1
  long double v12; // q0
  Il2CppObject *result; // x0
  __int64 v14; // x2
  intptr_t _2_TMaster; // x19
  System_RuntimeTypeHandle_o v16; // x0
  Il2CppObject *v17; // x19
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x19
  System_Enum_o v22; // [xsp+8h] [xbp-48h] BYREF
  int v23; // [xsp+18h] [xbp-38h]
  int v24; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_21FFC50(&DataNameKind_Kind_TypeInfo);
    sub_21FFC50(&StringLiteral_22517/*"master[{0}] is null[{1}:{2}]"*/);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_2237B54();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v7 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v7 )
  {
    sub_2237B54();
    v7 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v7[1].rgctxDataDummy;
  if ( (*(_WORD *)((_BYTE *)&rgctxDataDummy[12].fields._impl.fields.value + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_2237AF8(v2);
  if ( !this->fields.lookup )
    goto LABEL_23;
  v9 = (int32_t *)rgctxDataDummy[7].fields._impl.fields.value;
  lookup = this->fields.lookup;
  LODWORD(this) = *v9;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         *v9,
         &value,
         (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    this = (DataManager_o *)value;
    _1_TMaster = (const MethodInfo_3822EA4 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (*(_WORD *)((_BYTE *)&_1_TMaster[3].return_type + 5) & 1) == 0 )
      _1_TMaster = (const MethodInfo_3822EA4 *)sub_2237AF8(v12);
    if ( !this )
      return 0;
    result = (Il2CppObject *)sub_21FFDA4(this, _1_TMaster);
    if ( result )
      return result;
    sub_220024C(this, _1_TMaster, v14);
  }
  _2_TMaster = (intptr_t)_1_TMaster->rgctx_data->_2_TMaster;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v11);
  v16.fields.value = _2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v16, 0);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_21FFECC(rgctxDataDummy, method);
  v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))rgctxDataDummy->klass->vtable._3_ToString.methodPtr)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._3_ToString.method);
  v24 = (int)this;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v24);
  v23 = (int)this;
  v22.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v22.monitor = (void *)-1LL;
  v19 = (Il2CppObject *)System_Enum__ToString(&v22, 0);
  v21 = (Il2CppObject *)System_String__Format_75484644((System_String_o *)StringLiteral_22517/*"master[{0}] is null[{1}:{2}]"*/, v17, v18, v19, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v20);
  UnityEngine_Debug__LogError(v21, 0);
  return 0;
}


Il2CppObject *DataManager__GetMaster_object_(const MethodInfo_3822E50 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_3822EA4 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


bool DataManager__HasMaster(const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Instance; // x0
  bool v2; // w8
  unsigned __int16 *v3; // x0
  unsigned __int16 v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5938119 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
    sub_21FFC50(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938119 = 1;
  }
  Instance = (System_Collections_Generic_IEnumerable_TSource__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( Instance )
  {
    Instance = (System_Collections_Generic_IEnumerable_TSource__o *)Instance[3].klass;
    if ( Instance )
    {
      v2 = System_Linq_Enumerable__Any_KeyValuePair_int__object__(
             Instance,
             (const MethodInfo_3831EF4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__DataMasterBase____);
      v3 = &v5;
      v5 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v3,
        v2,
        (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(Instance) = v5 > 0xFFu;
    }
  }
  return (char)Instance;
}


void DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5938117 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_CreateMasterData__);
    sub_21FFC50(&System_Func_DataMasterBase____TypeInfo);
    byte_5938117 = 1;
  }
  v3 = (System_Func_object__o *)sub_21FFEBC(System_Func_DataMasterBase____TypeInfo);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int v16; // w8
  __int64 v17; // x23
  __int64 v18; // x2
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v4 = this;
  if ( (byte_5938118 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    this = (DataManager_o *)sub_21FFC50(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    byte_5938118 = 1;
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
          v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v9,
            (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_21FFECC(this, createMasterDataMethod);
    }
    v16 = *(_DWORD *)(v8 + 24);
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( (unsigned int)v17 < v16 )
      {
        v18 = *(_QWORD *)(v8 + 32 + 8 * v17);
        if ( !v18 || !v9 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          *(_DWORD *)(v18 + 16),
          (Il2CppObject *)v18,
          (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v16 = *(_DWORD *)(v8 + 24);
        if ( (int)++v17 >= v16 )
          goto LABEL_18;
      }
LABEL_20:
      sub_21FFED4(this);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.datalist, v8, v10, v11, v12, v13, v14, v15);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.lookup, (int32_t)v9, v19, v20, v21, v22, v23, v24);
  }
}


void DataManager__LoadMasterDataThread(DataManager_o *this, Il2CppObject *indexList, const MethodInfo *method)
{
  void *v3; // x23
  DataManager_o *v5; // x19
  Il2CppClass *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x20
  __int64 v11; // x26
  unsigned __int64 i; // x27
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v17; // w22
  Il2CppObject *Item; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v27; // x22
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v29; // x25
  __int64 Index_object; // x0
  __int64 v31; // x1
  const MethodInfo_45B0918 *v32; // x3
  struct DataMasterBase_array *v33; // x8
  struct System_Byte_array *masterDataBytes; // x23
  struct System_Threading_SynchronizationContext_o *context; // x24
  DataMasterBase_o *v36; // x25
  __int64 v37; // x0
  const MethodInfo_45B0918 *v38; // x3
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *lockCountObj; // x0
  int v42; // w1
  int v43; // w22
  _QWORD **v44; // x20
  __int64 v45; // x0
  int v46; // w25
  Il2CppObject *v47; // x0
  __int64 v48; // x0
  struct System_Threading_SynchronizationContext_o *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  System_Threading_SendOrPostCallback_o *v54; // x21
  __int64 v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x23
  __int64 v58; // x0
  intptr_t v59; // x0
  __int64 v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *v67; // x0
  _QWORD *exception; // x0
  __int64 v69; // [xsp+10h] [xbp-B0h]
  __int64 v70; // [xsp+18h] [xbp-A8h] BYREF
  bool *v71; // [xsp+20h] [xbp-A0h]
  Il2CppObject **v72; // [xsp+28h] [xbp-98h]
  __int64 v73; // [xsp+30h] [xbp-90h] BYREF
  __int64 v74; // [xsp+38h] [xbp-88h]
  _BYTE v75[8]; // [xsp+40h] [xbp-80h]
  int v76; // [xsp+48h] [xbp-78h]
  bool lockTaken[4]; // [xsp+54h] [xbp-6Ch] BYREF
  Il2CppObject *v78; // [xsp+58h] [xbp-68h] BYREF
  System_Nullable_long__o v79; // 0:x0.16
  System_Nullable_long__o v80; // 0:x0.16

  v5 = this;
  if ( (byte_593812A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_21FFC50(&Method_System_Nullable_long___ctor__);
    sub_21FFC50(&System_Predicate_DataMasterBase__TypeInfo);
    sub_21FFC50(&Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_21FFC50(&DataManager___c__DisplayClass59_0_TypeInfo);
    byte_593812A = 1;
  }
  v78 = 0;
  lockTaken[0] = 0;
  v76 = 0;
  if ( !indexList )
    sub_21FFECC(this, indexList);
  v6 = int___TypeInfo;
  v7 = sub_21FFDA4(indexList, int___TypeInfo);
  v10 = v7;
  if ( v7 )
  {
    v11 = *(unsigned int *)(v7 + 24);
    v69 = sub_21FFD10(byte___TypeInfo, 2000);
    if ( (int)v11 >= 1 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = sub_21FFEBC(DataManager___c__DisplayClass59_0_TypeInfo);
        DataManager___c__DisplayClass59_0___ctor((DataManager___c__DisplayClass59_0_o *)v13, 0);
        if ( i >= *(unsigned int *)(v10 + 24) )
          sub_21FFED4(v14);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_21FFECC(0, v15);
        v17 = *(_DWORD *)(v10 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v17,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v13 )
          sub_21FFECC(Item, Item);
        *(_QWORD *)(v13 + 16) = Item;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Item, v19, v20, v21, v22, v23, v24);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_21FFECC(0, v25);
        v27 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v17,
                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v13 + 16), 0) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v29 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v29,
            (Il2CppObject *)v13,
            Method_DataManager___c__DisplayClass59_0__LoadMasterDataThread_b__0__,
            0);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v29,
                           (const MethodInfo_39781C0 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v33 = v5->fields.datalist;
            if ( !v33 )
              sub_21FFECC(Index_object, v31);
            if ( (unsigned int)Index_object >= LODWORD(v33->max_length) )
              sub_21FFED4(Index_object);
            if ( !v27 )
              sub_21FFECC(Index_object, v31);
            if ( !LODWORD(v27[1].monitor) )
              sub_21FFED4(Index_object);
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v79.fields.value = (int64_t)v27[2].klass;
            v36 = v33->m_Items[(unsigned int)Index_object];
            v70 = 0;
            v71 = 0;
            *(_QWORD *)&v79.fields.hasValue = &v70;
            System_Nullable_long____ctor(v79, Method_System_Nullable_long___ctor__, v32);
            if ( ((__int64)v27[1].monitor & 0xFFFFFFFE) == 0 )
              sub_21FFED4(v37);
            v80.fields.value = (int64_t)v27[2].monitor;
            v73 = 0;
            v74 = 0;
            *(_QWORD *)&v80.fields.hasValue = &v73;
            System_Nullable_long____ctor(v80, Method_System_Nullable_long___ctor__, v38);
            if ( !v36 )
              sub_21FFECC(v39, v40);
            ((void (__fastcall *)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, bool *, __int64, __int64, __int64, _QWORD))v36->klass[1]._1.byval_arg.data)(
              v36,
              masterDataBytes,
              context,
              v70,
              v71,
              v73,
              v74,
              v69,
              *(_QWORD *)&v36->klass[1]._1.byval_arg.bits);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        v70 = 0;
        v71 = lockTaken;
        v78 = lockCountObj;
        v72 = &v78;
        System_Threading_Monitor__Enter_77339928(lockCountObj, lockTaken, 0);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(*v72, 0);
      }
    }
  }
  else
  {
    sub_220024C(indexList, v6, v8, v9);
    v43 = v42;
    sub_1FE674C(&v70);
    if ( v43 != 1 )
      sub_22ED31C();
    v44 = (_QWORD **)__cxa_begin_catch(v3);
    v45 = sub_21FFC64(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v45, **v44) & 1) != 0 )
    {
      v46 = v76;
      *(_QWORD *)&v75[8 * v76] = *v44;
      v76 = v46 + 1;
      __cxa_end_catch();
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      v70 = 0;
      v71 = lockTaken;
      v78 = v47;
      v72 = &v78;
      System_Threading_Monitor__Enter_77339928(v47, lockTaken, 0);
      v5->fields.isFailedLoad = 1;
      sub_1FE674C(&v70);
    }
    else
    {
      v48 = sub_21FFC64(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v48, **v44) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v44;
        __cxa_throw(exception, (struct type_info *)`typeinfo for'Il2CppExceptionWrapper, 0);
      }
      v46 = v76;
      *(_QWORD *)&v75[8 * v76] = *v44;
      v76 = v46 + 1;
      __cxa_end_catch();
      v49 = v5->fields.context;
      v50 = sub_21FFC64(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v50 + 228) )
        j_il2cpp_runtime_class_init_0(v50, v51);
      v52 = sub_21FFC64(&DataManager___c_TypeInfo);
      v54 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v52 + 184) + 8LL);
      if ( !v54 )
      {
        v55 = sub_21FFC64(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v55 + 228) )
          j_il2cpp_runtime_class_init_0(v55, v56);
        v57 = **(Il2CppObject ***)(sub_21FFC64(&DataManager___c_TypeInfo) + 184);
        v58 = sub_21FFC64(&System_Threading_SendOrPostCallback_TypeInfo);
        v54 = (System_Threading_SendOrPostCallback_o *)sub_21FFEBC(v58);
        v59 = sub_21FFC64(&Method_DataManager___c__LoadMasterDataThread_b__59_1__);
        System_Threading_SendOrPostCallback___ctor(v54, v57, v59, 0);
        *(_QWORD *)(*(_QWORD *)(sub_21FFC64(&DataManager___c_TypeInfo) + 184) + 8LL) = v54;
        v60 = sub_21FFC64(&DataManager___c_TypeInfo);
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(*(_QWORD *)(v60 + 184) + 8LL),
          (int32_t)v54,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
      }
      if ( !v49 )
        sub_21FFECC(v52, v53);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, const MethodInfo *))v49->klass->vtable._5_Post.methodPtr)(
        v49,
        v54,
        0,
        v49->klass->vtable._5_Post.method);
      v67 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      v70 = 0;
      v71 = lockTaken;
      v78 = v67;
      v72 = &v78;
      System_Threading_Monitor__Enter_77339928(v67, lockTaken, 0);
      v5->fields.isFailedLoad = 1;
      sub_1FE674C(&v70);
    }
    v76 = v46;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Threading_SynchronizationContext_o *Current; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_List_object__o *v29; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_int__o *v37; // x0
  System_Int32_array *v38; // x21
  System_Comparison_int__o *v39; // x22
  __int64 v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Threading_ParameterizedThreadStart_o *v47; // x24
  System_Threading_Thread_o *v48; // x23
  System_Func_int__bool__o *v49; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Int32_array *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  int v62; // w8
  bool v63; // nf

  if ( (byte_5938128 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Sort_int____91481016);
    sub_21FFC50(&System_Comparison_int__TypeInfo);
    sub_21FFC50(&Method_DataManager_LoadMasterDataThread__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_21FFC50(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_21FFC50(&System_Threading_Thread_TypeInfo);
    sub_21FFC50(&Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__);
    sub_21FFC50(&DataManager___c__DisplayClass57_0_TypeInfo);
    sub_21FFC50(&Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__);
    sub_21FFC50(&DataManager___c__DisplayClass57_1_TypeInfo);
    byte_5938128 = 1;
  }
  v7 = sub_21FFEBC(DataManager___c__DisplayClass57_0_TypeInfo);
  DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = loadedIndices;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)loadedIndices, v16, v17, v18, v19, v20, v21);
  Current = System_Threading_SynchronizationContext__get_Current(0);
  this->fields.context = Current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.context, (int32_t)Current, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v29;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.masterLoadThreads,
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
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v39 = (System_Comparison_int__o *)sub_21FFEBC(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v39,
    (Il2CppObject *)v7,
    Method_DataManager___c__DisplayClass57_0__StartMasterLoadThread_b__0__,
    0);
  System_Array__Sort_int__58221936(
    v38,
    (System_Comparison_T__o *)v39,
    (const MethodInfo_3786570 *)Method_System_Array_Sort_int____91481016);
  v40 = sub_21FFEBC(DataManager___c__DisplayClass57_1_TypeInfo);
  DataManager___c__DisplayClass57_1___ctor((DataManager___c__DisplayClass57_1_o *)v40, 0);
  if ( !v40 )
LABEL_14:
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v40 + 24) = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 24), v7, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v40 + 16) = 0;
  do
  {
    v47 = (System_Threading_ParameterizedThreadStart_o *)sub_21FFEBC(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v47,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0);
    v48 = (System_Threading_Thread_o *)sub_21FFEBC(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_77376952(v48, v47, 0);
    if ( !v48 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v48, 1, 0);
    v49 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v49,
      (Il2CppObject *)v40,
      Method_DataManager___c__DisplayClass57_1__StartMasterLoadThread_b__1__,
      0);
    v50 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v38,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
    v51 = System_Linq_Enumerable__ToArray_int_(
            v50,
            (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_77377540(v48, &v51->obj, 0);
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
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v61[4] = (Il2CppClass *)v48;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)v48, v52, v53, v54, v55, v56, v57);
    }
    v62 = *(_DWORD *)(v40 + 16) + 1;
    v63 = *(_DWORD *)(v40 + 16) - 4 < 0;
    *(_DWORD *)(v40 + 16) = v62;
  }
  while ( v63 != __OFSUB__(v62, 5) );
}


void DataManager__StartWriteLocalFile(DataManager_o *this, System_String_o *fileName, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Threading_ParameterizedThreadStart_o *v10; // x21
  System_Threading_Thread_o *v11; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1

  if ( (byte_593812B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_WriteLocalFileThread__);
    sub_21FFC50(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_21FFC50(&System_Threading_Thread_TypeInfo);
    byte_593812B = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.writeMasterDataThreadException,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Threading_ParameterizedThreadStart_o *)sub_21FFEBC(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0);
  v11 = (System_Threading_Thread_o *)sub_21FFEBC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_77376952(v11, v10, 0);
  this->fields.writeMasterDataThread = v11;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_writeMasterDataThread, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  if ( !*p_writeMasterDataThread )
    sub_21FFECC(0, v19);
  System_Threading_Thread__Start_77377540(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0);
}


void DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  MissionNaviTransitionBoardItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5938129 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_5938129 = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (MissionNaviTransitionBoardItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_21FFECC(Item, v7);
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
    sub_21FFBF4(p_masterLoadThreads, 0, v9, v10, v11, v12, v13, v14);
  }
}


void DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0) )
    {
      if ( !*p_writeMasterDataThread )
        sub_21FFECC(0, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0);
    }
    *p_writeMasterDataThread = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_writeMasterDataThread, 0, v5, v6, v7, v8, v9, v10);
  }
}


void DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  System_IO_Stream_o *v7; // x20
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int size; // w25
  int32_t i; // w20
  System_Collections_Generic_List_object__o *v21; // x0
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x0
  struct System_Byte_array *masterDataBytes; // x22
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  Il2CppClass *klass; // x23
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  System_IO_BinaryWriter_c *v32; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  System_IO_Stream_c *v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_IO_Stream_o *v40; // [xsp+48h] [xbp-48h]

  if ( (byte_593812C & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_593812C = 1;
  }
  if ( param )
  {
    if ( param->klass == (Il2CppClass *)qword_594C0B8 )
      v5 = param;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v5, 0);
  v40 = v7;
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v6);
  v8 = CatAndMouseGame__CatGameZ(v7, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v9, v8, 0);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_21FFECC(v10, v11);
  size = saveDataMapList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v21 )
        sub_21FFECC(0, v11);
      Item = System_Collections_Generic_List_object___get_Item(
               v21,
               i,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_21FFECC(0, v23);
      if ( ((__int64)Item[1].monitor & 0xFFFFFFFE) == 0 )
        sub_21FFED4(Item);
      if ( !v9 )
        sub_21FFECC(Item, v23);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
        v9,
        LODWORD(Item[2].monitor),
        v9->klass->vtable._17_Write.method);
      v25 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v25 )
        sub_21FFECC(0, v24);
      masterDataBytes = this->fields.masterDataBytes;
      v27 = System_Collections_Generic_List_object___get_Item(
              v25,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v27 )
        sub_21FFECC(0, v28);
      if ( !LODWORD(v27[1].monitor) )
        sub_21FFED4(v27);
      if ( !this->fields.saveDataMapList )
        sub_21FFECC(v27, v28);
      klass = v27[2].klass;
      v30 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v30 )
        sub_21FFECC(0, v31);
      if ( ((__int64)v30[1].monitor & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v30);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))v9->klass->vtable._11_Write.methodPtr)(
        v9,
        masterDataBytes,
        (unsigned int)klass,
        LODWORD(v30[2].monitor),
        v9->klass->vtable._11_Write.method);
    }
  }
  if ( v9 )
  {
    v32 = v9->klass;
    v33 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_29;
      }
      v35 = (__int64)&v32->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_29:
      v35 = sub_2237E2C(v9, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v9, *(_QWORD *)(v35 + 8));
  }
  if ( v40 )
  {
    v36 = v40->klass;
    v37 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_37;
      }
      v39 = (__int64)&v36->vtable + 16 * *v38;
    }
    else
    {
LABEL_37:
      v39 = sub_2237E2C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v39)(v40, *(_QWORD *)(v39 + 8));
  }
  this->fields.writeMasterDataThread = 0;
  this->fields.writeMasterDataThreadEnd = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.writeMasterDataThread, 0, v12, v13, v14, v15, v16, v17);
}


bool DataManager___updateMasterData_b__50_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *DataManager__getCacheFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  DataManager_c *v2; // x0
  __int64 v3; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5938112 & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5938112 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v3);
  FileName = DatFileName__getFileName(15, 0);
  return System_String__Concat_75481624(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  DataManager_c *v2; // x0
  __int64 v3; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5938111 & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5938111 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v3);
  FileName = DatFileName__getFileName(14, 0);
  return System_String__Concat_75481624(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_593810F & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593810F = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v2);
  FolderName = CacheFolderName__getFolderName(1, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0);
}


System_String_o *DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  DataManager_c *v2; // x0
  __int64 v3; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5938110 & 1) == 0 )
  {
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5938110 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v3);
  FileName = DatFileName__getFileName(13, 0);
  return System_String__Concat_75481624(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


int32_t DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_593811E & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593811E = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_593811F & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593811F = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dateVersion;
}


System_String_o *DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_5938113 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&CacheFolderName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5938113 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0);
  if ( !*(&CacheFolderName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v2);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0);
  return System_String__Concat_75481624(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderNameNotConverted,
           0);
}


int32_t DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_5938123 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938123 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_5938122 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938122 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
{
  struct DataMasterBase_array *datalist; // x9
  int max_length; // w8
  DataMasterBase_o **i; // x9
  DataMasterBase_o *v5; // x10

  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_8;
  max_length = datalist->max_length;
  if ( max_length >= 1 )
  {
    this = 0;
    for ( i = datalist->m_Items; ; ++i )
    {
      v5 = *i;
      if ( !*i )
        break;
      --max_length;
      this = (DataManager_o *)(unsigned int)(v5->fields.revision + (_DWORD)this);
      if ( !max_length )
        return (int)this;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_593811B & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593811B = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_5938126 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938126 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5938125 & 1) == 0 )
  {
    sub_21FFC50(&DataManager__readMasterData_d__48_TypeInfo);
    byte_5938125 = 1;
  }
  v3 = sub_21FFEBC(DataManager__readMasterData_d__48_TypeInfo);
  DataManager__readMasterData_d__48___ctor((DataManager__readMasterData_d__48_o *)v3, 0, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v12; // x1
  System_String_o *AllText; // x20
  System_String_o *v14; // x20
  __int64 v15; // x0
  System_String_o *v16; // x20
  __int64 v17; // x0
  int v18; // w8
  int v19; // w22
  __int64 *v20; // x8
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  System_String_o *v24; // x21
  System_String_o *v25; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  System_Byte_array *v29; // x22
  uint32_t v30; // w22
  __int64 v31; // x0
  int v32; // w8
  DataManager_o *v33; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v35; // x21
  DataManager_o *v36; // x21
  System_String_o *v37; // x0
  __int64 v38; // x1
  ManagerConfig_c *v39; // x8
  System_String_o *v40; // x22
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  DataManager_o *v47; // x20
  int32_t v48; // w1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  __int64 v62; // x1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_String_o *MasterDataCacheVer; // x1
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int32_t v76; // w1
  System_String_o *v77; // x0
  unsigned int v78; // w8
  int v79; // w22
  __int64 v80; // x1
  DataManager_c *v81; // x8
  DataManager_o *v82; // x21
  struct DataManager_StaticFields *static_fields; // x9
  int v84; // w8
  __int64 v85; // x22
  int v86; // w26
  System_String_o *v87; // x21
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  DataManager_o *v94; // x8
  intptr_t m_CachedPtr; // x9
  _QWORD *v96; // x8
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v98; // x8
  __int64 v99; // x1
  DataManager_c *v100; // x0
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  DataManager_o *v106; // [xsp+0h] [xbp-60h] BYREF
  int v107; // [xsp+Ch] [xbp-54h] BYREF

  v2 = this;
  if ( (byte_5938132 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____Clear__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_5258/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_21FFC50(&StringLiteral_5261/*"DataManager version load error : list file parameter error"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_26609/*"~"*/);
    sub_21FFC50(&StringLiteral_798/*") -> ("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_22493/*"master versiton different ("*/);
    sub_21FFC50(&StringLiteral_5262/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_21FFC50(&StringLiteral_5263/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    this = (DataManager_o *)sub_21FFC50(&StringLiteral_5260/*"DataManager version load error : list file break"*/);
    byte_5938132 = 1;
  }
  saveNameList = v2->fields.saveNameList;
  v107 = 0;
  v106 = 0;
  if ( !saveNameList )
    goto LABEL_111;
  size = saveNameList->fields._size;
  v5 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_111;
  v7 = saveDataMapList->fields._size;
  v8 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v7, 0);
  v9 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    goto LABEL_66;
  v10 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(CacheListFileName, 0) )
  {
LABEL_65:
    DataManager__ClearSaveDataList(v2, method);
LABEL_66:
    LOBYTE(this) = 0;
    return (char)this;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v12);
  v14 = CatAndMouseGame__MouseGame3(AllText, 0);
  if ( v14 )
  {
    v15 = sub_21FFD10(char___TypeInfo, 1);
    if ( !v15 )
      sub_21FFECC(0, 0);
    if ( !*(_DWORD *)(v15 + 24) )
      sub_21FFED4(v15);
    *(_WORD *)(v15 + 32) = -257;
    v16 = System_String__Trim_75500152(v14, (System_Char_array *)v15, 0);
    v17 = sub_21FFD10(char___TypeInfo, 2);
    if ( !v17 )
      sub_21FFECC(0, 0);
    v18 = *(_DWORD *)(v17 + 24);
    if ( !v18 )
      sub_21FFED4(v17);
    *(_WORD *)(v17 + 32) = 13;
    if ( v18 == 1 )
      sub_21FFED4(v17);
    *(_WORD *)(v17 + 34) = 10;
    if ( !v16 )
      sub_21FFECC(v17, v17);
    v19 = System_String__IndexOfAny(v16, (System_Char_array *)v17, 0);
    if ( v19 < 2 )
    {
      v20 = &StringLiteral_5262/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
LABEL_63:
      v77 = (System_String_o *)*v20;
      goto LABEL_64;
    }
    v21 = System_String__Substring_75489544(v16, 0, v19, 0);
    v23 = v21;
    if ( !v21 )
      sub_21FFECC(0, v22);
    if ( !System_String__StartsWith(v21, (System_String_o *)StringLiteral_26609/*"~"*/, 0) )
    {
      v20 = &StringLiteral_5263/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_63;
    }
    v24 = System_String__Substring(v23, 1, 0);
    v25 = System_String__Substring(v16, v19 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_21FFECC(0, v27);
    v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v25,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v28);
    v30 = Crc32__Compute(v29, 0);
    if ( System_UInt32__Parse(v24, 0) != v30 )
    {
      v20 = &StringLiteral_5258/*"DataManager version load crc error : チェックサム値が不一致"*/;
      goto LABEL_63;
    }
    v31 = sub_21FFD10(char___TypeInfo, 2);
    if ( !v31 )
      sub_21FFECC(0, 0);
    v32 = *(_DWORD *)(v31 + 24);
    if ( !v32 )
      sub_21FFED4(v31);
    *(_WORD *)(v31 + 32) = 13;
    if ( v32 == 1 )
      sub_21FFED4(v31);
    *(_WORD *)(v31 + 34) = 10;
    if ( !v25 )
      sub_21FFECC(v31, v31);
    this = (DataManager_o *)System_String__Split_75492796(v25, (System_Char_array *)v31, 1, 0);
    v33 = this;
    if ( !this )
      goto LABEL_91;
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
        goto LABEL_106;
      this = *(DataManager_o **)&this->fields._DispLog;
      if ( !this )
        goto LABEL_111;
      this = (DataManager_o *)System_String__StartsWith(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_1850/*"@"*/,
                                0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !LODWORD(v33->fields.m_CancellationTokenSource) )
          goto LABEL_106;
        v35 = *(System_String_o **)&v33->fields._DispLog;
        this = (DataManager_o *)sub_21FFD10(char___TypeInfo, 1);
        if ( this )
        {
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_106;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( v35 )
          {
            this = (DataManager_o *)System_String__Split_75492680(v35, (System_Char_array *)this, 0);
            if ( this )
            {
              v36 = this;
              if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                goto LABEL_106;
              this = *(DataManager_o **)&this->fields._DispLog;
              if ( this )
              {
                v37 = System_String__Substring((System_String_o *)this, 1, 0);
                v39 = ManagerConfig_TypeInfo;
                v40 = v37;
                if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v38);
                  v39 = ManagerConfig_TypeInfo;
                }
                if ( System_String__op_Inequality(v39->static_fields->MasterDataCacheVer, v40, 0) )
                {
                  this = (DataManager_o *)sub_21FFD10(string___TypeInfo, 5);
                  if ( this )
                  {
                    v47 = this;
                    if ( LODWORD(this->fields.m_CancellationTokenSource) )
                    {
                      v48 = StringLiteral_22493/*"master versiton different ("*/;
                      *(_QWORD *)&this->fields._DispLog = StringLiteral_22493/*"master versiton different ("*/;
                      sub_21FFBF4(
                        (MissionNaviTransitionBoardItem_o *)&this->fields._DispLog,
                        v48,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45,
                        v46);
                      if ( ((__int64)v47->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
                      {
                        v47->fields.datalist = (struct DataMasterBase_array *)v40;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)&v47->fields.datalist,
                          (int32_t)v40,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54);
                        if ( LODWORD(v47->fields.m_CancellationTokenSource) > 2 )
                        {
                          v61 = StringLiteral_798/*") -> ("*/;
                          v47->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_798/*") -> ("*/;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)&v47->fields.lookup,
                            v61,
                            v55,
                            v56,
                            v57,
                            v58,
                            v59,
                            v60);
                          this = (DataManager_o *)ManagerConfig_TypeInfo;
                          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v62);
                          if ( ((__int64)v47->fields.m_CancellationTokenSource & 0xFFFFFFFC) != 0 )
                          {
                            MasterDataCacheVer = ManagerConfig_TypeInfo->static_fields->MasterDataCacheVer;
                            v47->fields.masterDataBytes = (struct System_Byte_array *)MasterDataCacheVer;
                            sub_21FFBF4(
                              (MissionNaviTransitionBoardItem_o *)&v47->fields.masterDataBytes,
                              (int32_t)MasterDataCacheVer,
                              v63,
                              v64,
                              v65,
                              v66,
                              v67,
                              v68);
                            if ( LODWORD(v47->fields.m_CancellationTokenSource) > 4 )
                            {
                              v76 = StringLiteral_789/*")"*/;
                              v47->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_789/*")"*/;
                              sub_21FFBF4(
                                (MissionNaviTransitionBoardItem_o *)&v47->fields.saveNameList,
                                v76,
                                v70,
                                v71,
                                v72,
                                v73,
                                v74,
                                v75);
LABEL_97:
                              v77 = System_String__Concat_75483816((System_String_array *)v47, 0);
LABEL_64:
                              if ( v77 )
                                goto LABEL_65;
                              goto LABEL_91;
                            }
                          }
                        }
                      }
                    }
LABEL_106:
                    sub_21FFED4(this);
                  }
                }
                else
                {
                  if ( LODWORD(v36->fields.m_CancellationTokenSource) != 3 )
                  {
                    v20 = &StringLiteral_5261/*"DataManager version load error : list file parameter error"*/;
                    goto LABEL_63;
                  }
                  this = (DataManager_o *)System_Int32__Parse((System_String_o *)v36->fields.datalist, 0);
                  v78 = (unsigned int)v36->fields.m_CancellationTokenSource;
                  v107 = (int)this;
                  if ( v78 <= 2 )
                    goto LABEL_106;
                  v79 = (int)this;
                  this = (DataManager_o *)System_Int64__Parse((System_String_o *)v36->fields.lookup, 0);
                  v81 = DataManager_TypeInfo;
                  v82 = this;
                  v106 = this;
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v80);
                    v81 = DataManager_TypeInfo;
                  }
                  static_fields = v81->static_fields;
                  if ( static_fields->readDataVersion == v79 )
                  {
                    if ( !*(&v81->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(v81, v80);
                      static_fields = DataManager_TypeInfo->static_fields;
                    }
                    if ( (DataManager_o *)static_fields->readDateVersion == v82 )
                    {
                      v84 = (int)v33->fields.m_CancellationTokenSource;
                      if ( v84 < 2 )
                        goto LABEL_91;
                      v85 = 0;
                      v86 = v84 - 1;
                      while ( (unsigned int)(v85 + 1) < LODWORD(v33->fields.m_CancellationTokenSource) )
                      {
                        v87 = (System_String_o *)*((_QWORD *)&v33->fields.datalist + v85);
                        this = (DataManager_o *)sub_21FFD10(char___TypeInfo, 1);
                        if ( !this )
                          goto LABEL_111;
                        method = (const MethodInfo *)this;
                        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                          break;
                        *(_WORD *)&this->fields._DispLog = 44;
                        if ( !v87 )
                          goto LABEL_111;
                        this = (DataManager_o *)System_String__Split_75492680(v87, (System_Char_array *)this, 0);
                        if ( !this )
                          goto LABEL_111;
                        v94 = this;
                        if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                          goto LABEL_91;
                        this = (DataManager_o *)v2->fields.saveNameList;
                        if ( !this )
                          goto LABEL_111;
                        m_CachedPtr = this->fields.m_CachedPtr;
                        method = *(const MethodInfo **)&v94->fields._DispLog;
                        v96 = Method_System_Collections_Generic_List_string__Add__;
                        ++HIDWORD(this->fields.m_CancellationTokenSource);
                        if ( !m_CachedPtr )
                          goto LABEL_111;
                        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)this,
                            (Il2CppObject *)method,
                            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v98 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                          *(_QWORD *)(v98 + 32) = method;
                          sub_21FFBF4(
                            (MissionNaviTransitionBoardItem_o *)(v98 + 32),
                            (int32_t)method,
                            v88,
                            v89,
                            v90,
                            v91,
                            v92,
                            v93);
                        }
                        ++v85;
                        this = (DataManager_o *)(&dword_0 + 1);
                        if ( v86 == (_DWORD)v85 )
                          return (char)this;
                      }
                      goto LABEL_106;
                    }
                  }
                  this = (DataManager_o *)sub_21FFD10(string___TypeInfo, 9);
                  if ( this )
                  {
                    v47 = this;
                    sub_1FEB274(this, 0, StringLiteral_22493/*"master versiton different ("*/);
                    v100 = DataManager_TypeInfo;
                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99);
                      v100 = DataManager_TypeInfo;
                    }
                    v101 = System_Int32__ToString((int32_t)v100->static_fields, 0);
                    sub_1FEB274(v47, 1, v101);
                    sub_1FEB274(v47, 2, StringLiteral_113/*" "*/);
                    v102 = System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->readDateVersion, 0);
                    sub_1FEB274(v47, 3, v102);
                    sub_1FEB274(v47, 4, StringLiteral_798/*") -> ("*/);
                    v103 = System_Int32__ToString((int32_t)&v107, 0);
                    sub_1FEB274(v47, 5, v103);
                    sub_1FEB274(v47, 6, StringLiteral_113/*" "*/);
                    v104 = System_Int64__ToString((int64_t)&v106, 0);
                    sub_1FEB274(v47, 7, v104);
                    sub_1FEB274(v47, 8, StringLiteral_789/*")"*/);
                    goto LABEL_97;
                  }
                }
              }
            }
          }
        }
LABEL_111:
        sub_21FFECC(this, method);
      }
    }
    v20 = &StringLiteral_5260/*"DataManager version load error : list file break"*/;
    goto LABEL_63;
  }
LABEL_91:
  LOBYTE(this) = 1;
  return (char)this;
}


System_Collections_IEnumerator_o *DataManager__readMasterVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5938124 & 1) == 0 )
  {
    sub_21FFC50(&DataManager__readMasterVersion_d__47_TypeInfo);
    byte_5938124 = 1;
  }
  v3 = sub_21FFEBC(DataManager__readMasterVersion_d__47_TypeInfo);
  DataManager__readMasterVersion_d__47___ctor((DataManager__readMasterVersion_d__47_o *)v3, 0, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  System_String_o *AllText; // x20
  System_String_o *v9; // x20
  __int64 v10; // x0
  System_String_o *v11; // x20
  __int64 v12; // x0
  int v13; // w8
  int v14; // w22
  __int64 *v15; // x8
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x21
  System_String_o *v19; // x21
  System_String_o *v20; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Byte_array *v24; // x22
  uint32_t v25; // w22
  __int64 v26; // x0
  int v27; // w8
  __int64 v28; // x0
  __int64 v29; // x20
  __int64 v30; // x8
  System_String_o *v31; // x20
  __int64 v32; // x20
  System_String_o *v33; // x0
  __int64 v34; // x1
  ManagerConfig_c *v35; // x8
  System_String_o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x20
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int32_t v57; // w1
  __int64 v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_String_o *MasterDataCacheVer; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  DataManager_c *v73; // x0
  struct DataManager_StaticFields *static_fields; // x8
  __int64 v76; // x1
  DataManager_c *v77; // x8
  int32_t v78; // w19
  unsigned int v79; // w9
  struct DataManager_StaticFields *v80; // x8
  int64_t v81; // x0
  struct DataManager_StaticFields *v82; // x8

  if ( (byte_5938130 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_5257/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_21FFC50(&StringLiteral_5254/*"DataManager boot load error : list file break"*/);
    sub_21FFC50(&StringLiteral_5256/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_21FFC50(&StringLiteral_5252/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_21FFC50(&StringLiteral_26609/*"~"*/);
    sub_21FFC50(&StringLiteral_22492/*"master data versiton different ("*/);
    sub_21FFC50(&StringLiteral_798/*") -> ("*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_5255/*"DataManager boot load error : list file parameter error"*/);
    byte_5938130 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v4 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(CacheVersionFileName, 0) )
    goto LABEL_59;
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v7);
  v9 = CatAndMouseGame__MouseGame1(AllText, 0, 0);
  if ( !v9 )
    return 1;
  v10 = sub_21FFD10(char___TypeInfo, 1);
  if ( !v10 )
    sub_21FFECC(0, 0);
  if ( !*(_DWORD *)(v10 + 24) )
    sub_21FFED4(v10);
  *(_WORD *)(v10 + 32) = -257;
  v11 = System_String__Trim_75500152(v9, (System_Char_array *)v10, 0);
  v12 = sub_21FFD10(char___TypeInfo, 2);
  if ( !v12 )
    sub_21FFECC(0, 0);
  v13 = *(_DWORD *)(v12 + 24);
  if ( !v13 )
    sub_21FFED4(v12);
  *(_WORD *)(v12 + 32) = 13;
  if ( v13 == 1 )
    sub_21FFED4(v12);
  *(_WORD *)(v12 + 34) = 10;
  if ( !v11 )
    sub_21FFECC(v12, v12);
  v14 = System_String__IndexOfAny(v11, (System_Char_array *)v12, 0);
  if ( v14 < 2 )
  {
    v15 = &StringLiteral_5256/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
    goto LABEL_58;
  }
  v16 = System_String__Substring_75489544(v11, 0, v14, 0);
  v18 = v16;
  if ( !v16 )
    sub_21FFECC(0, v17);
  if ( System_String__StartsWith(v16, (System_String_o *)StringLiteral_26609/*"~"*/, 0) )
  {
    v19 = System_String__Substring(v18, 1, 0);
    v20 = System_String__Substring(v11, v14 + 1, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      sub_21FFECC(0, v22);
    v24 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, const MethodInfo *))UTF8->klass->vtable._18_GetBytes.methodPtr)(
                                 UTF8,
                                 v20,
                                 UTF8->klass->vtable._18_GetBytes.method);
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v23);
    v25 = Crc32__Compute(v24, 0);
    if ( System_UInt32__Parse(v19, 0) == v25 )
    {
      v26 = sub_21FFD10(char___TypeInfo, 2);
      if ( !v26 )
        sub_21FFECC(0, 0);
      v27 = *(_DWORD *)(v26 + 24);
      if ( !v27 )
        sub_21FFED4(v26);
      *(_WORD *)(v26 + 32) = 13;
      if ( v27 == 1 )
        sub_21FFED4(v26);
      *(_WORD *)(v26 + 34) = 10;
      if ( !v20 )
        sub_21FFECC(v26, v26);
      v28 = (__int64)System_String__Split_75492796(v20, (System_Char_array *)v26, 1, 0);
      v29 = v28;
      if ( !v28 )
        return 1;
      v30 = *(_QWORD *)(v28 + 24);
      if ( !v30 )
        goto LABEL_57;
      if ( !(_DWORD)v30 )
        goto LABEL_78;
      v28 = *(_QWORD *)(v28 + 32);
      if ( !v28 )
        goto LABEL_83;
      v28 = System_String__StartsWith((System_String_o *)v28, (System_String_o *)StringLiteral_1850/*"@"*/, 0);
      if ( (v28 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v29 + 24) )
          goto LABEL_78;
        v31 = *(System_String_o **)(v29 + 32);
        v28 = sub_21FFD10(char___TypeInfo, 1);
        if ( !v28 )
          goto LABEL_83;
        v6 = (const MethodInfo *)v28;
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_78;
        *(_WORD *)(v28 + 32) = 44;
        if ( !v31 )
          goto LABEL_83;
        v28 = (__int64)System_String__Split_75492680(v31, (System_Char_array *)v28, 0);
        if ( !v28 )
          goto LABEL_83;
        v32 = v28;
        if ( !*(_DWORD *)(v28 + 24) )
          goto LABEL_78;
        v28 = *(_QWORD *)(v28 + 32);
        if ( !v28 )
          goto LABEL_83;
        v33 = System_String__Substring((System_String_o *)v28, 1, 0);
        v35 = ManagerConfig_TypeInfo;
        v36 = v33;
        if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v34);
          v35 = ManagerConfig_TypeInfo;
        }
        if ( System_String__op_Inequality(v35->static_fields->MasterDataCacheVer, v36, 0) )
        {
          v28 = sub_21FFD10(string___TypeInfo, 5);
          if ( v28 )
          {
            v43 = v28;
            if ( *(_DWORD *)(v28 + 24) )
            {
              v44 = StringLiteral_22492/*"master data versiton different ("*/;
              *(_QWORD *)(v28 + 32) = StringLiteral_22492/*"master data versiton different ("*/;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 32), v44, v37, v38, v39, v40, v41, v42);
              if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFE) != 0 )
              {
                *(_QWORD *)(v43 + 40) = v36;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 40), (int32_t)v36, v45, v46, v47, v48, v49, v50);
                if ( *(_DWORD *)(v43 + 24) > 2u )
                {
                  v57 = StringLiteral_798/*") -> ("*/;
                  *(_QWORD *)(v43 + 48) = StringLiteral_798/*") -> ("*/;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 48), v57, v51, v52, v53, v54, v55, v56);
                  v28 = (__int64)ManagerConfig_TypeInfo;
                  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v58);
                  if ( (*(_DWORD *)(v43 + 24) & 0xFFFFFFFC) != 0 )
                  {
                    MasterDataCacheVer = ManagerConfig_TypeInfo->static_fields->MasterDataCacheVer;
                    *(_QWORD *)(v43 + 56) = MasterDataCacheVer;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)(v43 + 56),
                      (int32_t)MasterDataCacheVer,
                      v59,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64);
                    if ( *(_DWORD *)(v43 + 24) > 4u )
                    {
                      v72 = StringLiteral_789/*")"*/;
                      *(_QWORD *)(v43 + 64) = StringLiteral_789/*")"*/;
                      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 64), v72, v66, v67, v68, v69, v70, v71);
                      if ( !System_String__Concat_75483816((System_String_array *)v43, 0) )
                        return 1;
LABEL_59:
                      v73 = DataManager_TypeInfo;
                      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                      {
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
                        v73 = DataManager_TypeInfo;
                      }
                      static_fields = v73->static_fields;
                      static_fields->dataVersion = 0;
                      static_fields->dateVersion = 0;
                      DataManager__ClearSaveDataList(this, v6);
                      return 0;
                    }
                  }
                }
              }
            }
LABEL_78:
            sub_21FFED4(v28);
          }
LABEL_83:
          sub_21FFECC(v28, v6);
        }
        if ( *(_DWORD *)(v32 + 24) == 3 )
        {
          v28 = System_Int32__Parse(*(System_String_o **)(v32 + 40), 0);
          v77 = DataManager_TypeInfo;
          v78 = v28;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
            v77 = DataManager_TypeInfo;
          }
          v79 = *(_DWORD *)(v32 + 24);
          v80 = v77->static_fields;
          v80->dataVersion = v78;
          v80->readDataVersion = v78;
          if ( v79 > 2 )
          {
            v81 = System_Int64__Parse(*(System_String_o **)(v32 + 48), 0);
            v82 = DataManager_TypeInfo->static_fields;
            v82->dateVersion = v81;
            v82->readDateVersion = v81;
            return 1;
          }
          goto LABEL_78;
        }
        v15 = &StringLiteral_5255/*"DataManager boot load error : list file parameter error"*/;
      }
      else
      {
LABEL_57:
        v15 = &StringLiteral_5254/*"DataManager boot load error : list file break"*/;
      }
    }
    else
    {
      v15 = &StringLiteral_5252/*"DataManager boot load crc error : チェックサム値が不一致"*/;
    }
  }
  else
  {
    v15 = &StringLiteral_5257/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
  }
LABEL_58:
  if ( *v15 )
    goto LABEL_59;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataManager_c *v11; // x0
  struct DataManager_StaticFields *static_fields; // x8
  MissionNaviTransitionBoardItem_o *p_updateData; // x0
  int32_t v14; // w1
  struct DataManager_StaticFields *v15; // x0

  if ( (byte_5938121 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938121 = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dataVer);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_18;
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
    v11 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
      static_fields = DataManager_TypeInfo->static_fields;
    }
    static_fields->updateData = 0;
    p_updateData = (MissionNaviTransitionBoardItem_o *)&static_fields->updateData;
    v14 = 0;
  }
  else
  {
LABEL_18:
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
      v11 = DataManager_TypeInfo;
    }
    v15 = v11->static_fields;
    v14 = (int)obj;
    v15->updateData = obj;
    p_updateData = (MissionNaviTransitionBoardItem_o *)&v15->updateData;
    LODWORD(p_updateData[-1].fields._NaviAction_k__BackingField) = dataVer;
    *(_QWORD *)&p_updateData[-1].fields._BoardType_k__BackingField = dateVer;
  }
  sub_21FFBF4(p_updateData, v14, (System_String_o *)dateVer, (System_String_o *)obj, (int32_t)method, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void DataManager__setMasterDataVersion(DataManager_o *this, int32_t dataVer, int64_t dateVer, const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_5938120 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938120 = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dataVer);
    v6 = DataManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->dataVersion = dataVer;
  static_fields->dateVersion = dateVer;
}


void DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataManager_c *v9; // x0
  int32_t v10; // w1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x0
  __int64 v24; // x1
  DataManager_c *v25; // x8
  struct DataManager_StaticFields *v26; // x0
  DataManager_c *v27; // x0

  if ( (byte_593811A & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593811A = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
    v9 = DataManager_TypeInfo;
  }
  v10 = (int)StringLiteral_1/*""*/;
  static_fields = v9->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->serverHash,
    v10,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( obj )
  {
    v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))obj->klass->vtable[3].methodPtr)(
                               obj,
                               obj->klass->vtable[3].method);
    v13 = System_String__op_Equality(v12, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v13 )
    {
      if ( !v12 )
        sub_21FFECC(v13, v14);
      v15 = System_String__Substring(v12, v12->fields._stringLength - 1, 0);
      if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
      {
        v23 = System_String__Substring_75489544(v12, 0, v12->fields._stringLength - 1, 0);
        v25 = DataManager_TypeInfo;
        v12 = v23;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
          v25 = DataManager_TypeInfo;
        }
        v26 = v25->static_fields;
      }
      else
      {
        v27 = DataManager_TypeInfo;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
          v27 = DataManager_TypeInfo;
        }
        v26 = v27->static_fields;
      }
      v26->serverHash = v12;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->serverHash, (int32_t)v12, v17, v18, v19, v20, v21, v22);
    }
  }
}


void DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_593811C & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    byte_593811C = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->webViewData,
    (int32_t)obj,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 naturalAligment; // x9
  DataManager_o *v7; // x0
  Il2CppObject *v8; // x1

  if ( (byte_5938134 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_5938134 = 1;
  }
  if ( obj
    && ((naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
         obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_220024C(obj, System_Collections_Generic_Dictionary_string__object__TypeInfo, method, v3);
  }
  else
  {
    v7 = this;
    v8 = obj;
  }
  DataManager__updateJsonData_48559348(v7, (System_Collections_Generic_Dictionary_string__object__o *)v8, method);
}


void DataManager__updateJsonData_48559348(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  __int64 v5; // x2
  __int64 v6; // x3
  DataManager_o *v7; // x21
  __int64 naturalAligment; // x9
  struct DataMasterBase_array *datalist; // x8
  il2cpp_array_size_t max_length; // x26
  __int64 v11; // x27
  struct DataMasterBase_array *v12; // x8
  DataMasterBase_o *v13; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v15; // x8
  DataMasterBase_o *v16; // x23
  __int64 v17; // x9
  struct DataMasterBase_array *v18; // x8
  il2cpp_array_size_t v19; // x26
  __int64 v20; // x27
  struct DataMasterBase_array *v21; // x8
  DataMasterBase_o *v22; // x8
  Il2CppObject *v23; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x9
  struct DataMasterBase_array *v29; // x8
  il2cpp_array_size_t v30; // x25
  __int64 v31; // x26
  struct DataMasterBase_array *v32; // x8
  DataMasterBase_o *v33; // x8
  Il2CppObject *v34; // x21
  struct DataMasterBase_array *v35; // x8
  DataMasterBase_o *v36; // x22
  DataManager_o *v37; // x0
  const MethodInfo *v38; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_5938135 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_25745/*"updated"*/);
    sub_21FFC50(&StringLiteral_19363/*"deleted"*/);
    this = (DataManager_o *)sub_21FFC50(&StringLiteral_24206/*"replaced"*/);
    byte_5938135 = 1;
  }
  if ( !v3 )
    goto LABEL_56;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_19363/*"deleted"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_19363/*"deleted"*/,
                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v7 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_58;
      }
    }
    datalist = v4->fields.datalist;
    if ( !datalist )
      goto LABEL_56;
    max_length = datalist->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = v4->fields.datalist;
        if ( !v12 )
          break;
        if ( (unsigned int)v11 >= LODWORD(v12->max_length) )
          goto LABEL_57;
        v13 = v12->m_Items[v11];
        if ( !v13 || !v7 )
          break;
        MasterName_k__BackingField = (Il2CppObject *)v13->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = v4->fields.datalist;
          if ( !v15 )
            break;
          if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
LABEL_57:
            sub_21FFED4(this);
          v16 = v15->m_Items[v11];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v16 )
            break;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v16->klass[1]._1.element_class)(
                                    v16,
                                    this,
                                    v16->klass[1]._1.castClass);
        }
        if ( (_DWORD)max_length == (_DWORD)++v11 )
          goto LABEL_21;
      }
LABEL_56:
      sub_21FFECC(this, data);
    }
  }
LABEL_21:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_25745/*"updated"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_38;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_25745/*"updated"*/,
                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v17 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v17
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v17 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_58:
      sub_220024C(v7, data, v5, v6);
      goto LABEL_59;
    }
  }
  v18 = v4->fields.datalist;
  if ( !v18 )
    goto LABEL_56;
  v19 = v18->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0;
    do
    {
      v21 = v4->fields.datalist;
      if ( !v21 )
        goto LABEL_56;
      if ( (unsigned int)v20 >= LODWORD(v21->max_length) )
        goto LABEL_57;
      v22 = v21->m_Items[v20];
      if ( !v22 || !v7 )
        goto LABEL_56;
      v23 = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                v23,
                                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.datalist;
        if ( !v24 )
          goto LABEL_56;
        if ( (unsigned int)v20 >= LODWORD(v24->max_length) )
          goto LABEL_57;
        v25 = v24->m_Items[v20];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                  v23,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_56;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD))v25->klass[1]._1.this_arg.data)(
                                  v25,
                                  this,
                                  *(_QWORD *)&v25->klass[1]._1.this_arg.bits);
      }
    }
    while ( (_DWORD)v19 != (_DWORD)++v20 );
  }
LABEL_38:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24206/*"replaced"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24206/*"replaced"*/,
                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v28 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( this->klass->_2.naturalAligment < (unsigned int)v28
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_59:
      sub_220024C(v3, data, v26, v27);
      DataManager__getRevisionTotal(v37, v38);
      return;
    }
  }
  v29 = v4->fields.datalist;
  if ( !v29 )
    goto LABEL_56;
  v30 = v29->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v32 = v4->fields.datalist;
      if ( !v32 )
        goto LABEL_56;
      if ( (unsigned int)v31 >= LODWORD(v32->max_length) )
        goto LABEL_57;
      v33 = v32->m_Items[v31];
      if ( !v33 || !v3 )
        goto LABEL_56;
      v34 = (Il2CppObject *)v33->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v34,
                                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v35 = v4->fields.datalist;
        if ( !v35 )
          goto LABEL_56;
        if ( (unsigned int)v31 >= LODWORD(v35->max_length) )
          goto LABEL_57;
        v36 = v35->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v34,
                                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v36 )
          goto LABEL_56;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, const char *))v36->klass[1]._1.name)(
                                  v36,
                                  this,
                                  0,
                                  0,
                                  0,
                                  0,
                                  v36->klass[1]._1.namespaze);
      }
      if ( (_DWORD)v30 == (_DWORD)++v31 )
        return;
    }
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5938127 & 1) == 0 )
  {
    sub_21FFC50(&DataManager__updateMasterData_d__50_TypeInfo);
    byte_5938127 = 1;
  }
  v5 = sub_21FFEBC(DataManager__updateMasterData_d__50_TypeInfo);
  DataManager__updateMasterData_d__50___ctor((DataManager__updateMasterData_d__50_o *)v5, 0, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  result = (System_Collections_IEnumerator_o *)v5;
  *(_BYTE *)(v5 + 48) = isUseTips;
  return result;
}


System_Collections_IEnumerator_o *DataManager__updateWebViewData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593811D & 1) == 0 )
  {
    sub_21FFC50(&DataManager__updateWebViewData_d__39_TypeInfo);
    byte_593811D = 1;
  }
  v3 = sub_21FFEBC(DataManager__updateWebViewData_d__39_TypeInfo);
  DataManager__updateWebViewData_d__39___ctor((DataManager__updateWebViewData_d__39_o *)v3, 0, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  System_String_o *v8; // x20
  int32_t size; // w21
  System_Text_StringBuilder_o *v10; // x0
  int32_t v11; // w8
  System_Text_StringBuilder_o *v12; // x21
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  struct System_Collections_Generic_List_string__o *v15; // x8
  int v16; // w24
  int32_t v17; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x19
  __int64 v20; // x1
  System_Byte_array *v21; // x21
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x19
  System_String_o *v25; // x19
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  System_IO_StreamWriter_o *v30; // x20
  System_IO_StreamWriter_c *klass; // x8
  __int64 v32; // x9
  int *p_offset; // x10
  __int64 v34; // x0
  _QWORD v35[2]; // [xsp+8h] [xbp-58h] BYREF
  System_IO_StreamWriter_o *v36; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5938133 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&System_IO_StreamWriter_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26612/*"~{0}\n{1}"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5938133 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  v36 = 0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = DataManager_TypeInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)DataManager__getCacheListFileName((const MethodInfo *)v4);
    saveNameList = this->fields.saveNameList;
    if ( !saveNameList )
      goto LABEL_32;
    v8 = (System_String_o *)CacheListFileName;
    size = saveNameList->fields._size;
    v10 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
    v11 = size << 7;
    v12 = v10;
    System_Text_StringBuilder___ctor_75515192(v10, v11 + 128, 0);
    if ( !v12 )
      goto LABEL_32;
    System_Text_StringBuilder__Append_75521760(v12, (System_String_o *)StringLiteral_1850/*"@"*/, 0);
    v14 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v13);
      v14 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_75521760(v12, v14->static_fields->MasterDataCacheVer, 0);
    System_Text_StringBuilder__Append_75521760(v12, (System_String_o *)StringLiteral_869/*","*/, 0);
    System_Text_StringBuilder__Append_75524260(v12, DataManager_TypeInfo->static_fields->dataVersion, 0);
    System_Text_StringBuilder__Append_75521760(v12, (System_String_o *)StringLiteral_869/*","*/, 0);
    System_Text_StringBuilder__Append_75524348(v12, DataManager_TypeInfo->static_fields->dateVersion, 0);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_StringBuilder__Append_75521760(
                                                                       v12,
                                                                       (System_String_o *)StringLiteral_43/*"\n"*/,
                                                                       0);
    v15 = this->fields.saveNameList;
    if ( !v15 )
      goto LABEL_32;
    v16 = v15->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        if ( !CacheListFileName )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v17,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_75521760(v12, (System_String_o *)Item, 0);
        System_Text_StringBuilder__Append_75521760(v12, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
        if ( v16 == ++v17 )
          goto LABEL_17;
      }
LABEL_32:
      sub_21FFECC(CacheListFileName, v6);
    }
LABEL_17:
    v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                            v12,
                            v12->klass->vtable._3_ToString.method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0);
    if ( !CacheListFileName )
      goto LABEL_32;
    v21 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, const MethodInfo *))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.methodPtr)(
                                 CacheListFileName,
                                 v19,
                                 CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method);
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v20);
    LODWORD(v35[0]) = Crc32__Compute(v21, 0);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C078, v35);
    v24 = System_String__Format_75484576((System_String_o *)StringLiteral_26612/*"~{0}\n{1}"*/, v22, v19, 0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v23);
    v25 = CatAndMouseGame__CatGame3(v24, 0);
    UTF8 = System_Text_Encoding__get_UTF8(0);
    v27 = (System_IO_StreamWriter_o *)sub_21FFEBC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_76687044(v27, v8, 0, UTF8, 0);
    v35[0] = 0;
    v35[1] = &v36;
    v36 = v27;
    if ( !v27 )
      sub_21FFECC(v28, v29);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v27->klass->vtable._16_Write.methodPtr)(
      v27,
      v25,
      v27->klass->vtable._16_Write.method);
    v30 = v36;
    if ( v36 )
    {
      klass = v36->klass;
      v32 = *(unsigned __int16 *)&v36->klass->_2.rank;
      if ( *(_WORD *)&v36->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_28;
        }
        v34 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_28:
        v34 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
    }
  }
}


void DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  char *v13; // x20
  int32_t v14; // w1
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *MasterDataCacheVer; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t v29; // w1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x20
  __int64 v57; // x1
  System_Byte_array *v58; // x21
  System_String_o *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x20
  System_String_o *v62; // x20
  System_Text_Encoding_o *v63; // x22
  System_IO_StreamWriter_o *v64; // x21
  uint32_t v65; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5938131 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&System_IO_StreamWriter_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26609/*"~"*/);
    sub_21FFC50(&StringLiteral_1850/*"@"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5938131 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  v65 = 0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    UTF8 = (char *)sub_21FFD10(string___TypeInfo, 7);
    if ( !UTF8 )
      goto LABEL_27;
    v13 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v14 = StringLiteral_1850/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1850/*"@"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(UTF8 + 32), v14, v7, v8, v9, v10, v11, v12);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v15);
    if ( (*((_DWORD *)v13 + 6) & 0xFFFFFFFE) == 0 )
      goto LABEL_26;
    MasterDataCacheVer = ManagerConfig_TypeInfo->static_fields->MasterDataCacheVer;
    *((_QWORD *)v13 + 5) = MasterDataCacheVer;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v13 + 40),
      (int32_t)MasterDataCacheVer,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( *((_DWORD *)v13 + 6) <= 2u )
      goto LABEL_26;
    v29 = StringLiteral_869/*","*/;
    *((_QWORD *)v13 + 6) = StringLiteral_869/*","*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 48), v29, v23, v24, v25, v26, v27, v28);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0);
    if ( (*((_DWORD *)v13 + 6) & 0xFFFFFFFC) == 0 )
      goto LABEL_26;
    *((_QWORD *)v13 + 7) = UTF8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 56), (int32_t)UTF8, v30, v31, v32, v33, v34, v35);
    if ( *((_DWORD *)v13 + 6) <= 4u
      || (v42 = StringLiteral_869/*","*/,
          *((_QWORD *)v13 + 8) = StringLiteral_869/*","*/,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 64), v42, v36, v37, v38, v39, v40, v41),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0),
          *((_DWORD *)v13 + 6) <= 5u)
      || (*((_QWORD *)v13 + 9) = UTF8,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 72), (int32_t)UTF8, v43, v44, v45, v46, v47, v48),
          *((_DWORD *)v13 + 6) <= 6u) )
    {
LABEL_26:
      sub_21FFED4(UTF8);
    }
    v55 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v13 + 10) = StringLiteral_43/*"\n"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 80), v55, v49, v50, v51, v52, v53, v54);
    v56 = System_String__Concat_75483816((System_String_array *)v13, 0);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0);
    if ( !UTF8 )
      goto LABEL_27;
    v58 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v56,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v57);
    v65 = Crc32__Compute(v58, 0);
    v59 = System_UInt32__ToString((uint32_t)&v65, 0);
    v61 = System_String__Concat_75483552(
            (System_String_o *)StringLiteral_26609/*"~"*/,
            v59,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v56,
            0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v60);
    v62 = CatAndMouseGame__CatGame1(v61, 0, 0);
    v63 = System_Text_Encoding__get_UTF8(0);
    v64 = (System_IO_StreamWriter_o *)sub_21FFEBC(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_76687044(v64, CacheVersionFileName, 0, v63, 0);
    if ( !v64 )
LABEL_27:
      sub_21FFECC(UTF8, v6);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, const MethodInfo *))v64->klass->vtable._16_Write.methodPtr)(
      v64,
      v62,
      v64->klass->vtable._16_Write.method);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, const MethodInfo *))v64->klass->vtable._8_Close.methodPtr)(
      v64,
      v64->klass->vtable._8_Close.method);
  }
}


void DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593813C & 1) == 0 )
  {
    sub_21FFC50(&DataManager___c_TypeInfo);
    byte_593813C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)DataManager___c_TypeInfo->static_fields,
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
  if ( (byte_593813D & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_593813D = 1;
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
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( ((__int64)this->fields.loadedIndices & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  v8 = v6->fields.__4__this;
  if ( !v8
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v8->fields.saveDataMapList) == 0
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass57_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__)) == 0) )
  {
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&a);
  }
  if ( ((__int64)this->fields.loadedIndices & 0xFFFFFFFE) == 0 )
LABEL_13:
    sub_21FFED4(this);
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
  if ( (byte_593813E & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass57_1_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_593813E = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1 || (this = (DataManager___c__DisplayClass57_1_o *)CS___8__locals1->fields.loadedIndices) == 0 )
      sub_21FFECC(this, *(_QWORD *)&x);
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_21FFECC(this, 0);
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
  int _1__state; // w9
  struct DataManager_o *_4__this; // x19
  bool v5; // w8
  UnityEngine_WaitForEndOfFrame_o *v6; // x19
  MissionNaviTransitionBoardItem_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  System_String_o *CacheFileName; // x21
  System_IO_MemoryStream_o *v16; // x22
  __int64 v17; // x1
  System_IO_Stream_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x1
  UnityEngine_WaitForEndOfFrame_o *v23; // x19
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int v31; // w8
  __int64 v32; // x1
  DataManager_c *v33; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v35; // w10
  DataManager_c *v36; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  System_IO_Stream_c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_IO_MemoryStream_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v58; // x21
  System_IO_BinaryReader_o *v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w24
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  int v69; // w21
  __int64 v70; // x22
  __int64 v71; // x23
  System_Collections_Generic_List_object__o *saveDataMapList; // x21
  __int64 v73; // x0
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  __int64 v80; // x1
  int v81; // w8
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  System_IO_BinaryReader_c *v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  System_IO_MemoryStream_c *v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  UnityEngine_WaitForEndOfFrame_o *v94; // x19
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_IO_BinaryReader_o *v102; // [xsp+40h] [xbp-70h]
  System_IO_MemoryStream_o *v103; // [xsp+48h] [xbp-68h]
  System_IO_Stream_o *v104; // [xsp+50h] [xbp-60h]
  System_IO_Stream_o *v105; // [xsp+58h] [xbp-58h]

  v2 = this;
  if ( (byte_593813F & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__48_o *)sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_593813F = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v5 = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      v2->fields.__1__state = -1;
      v36 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v36 = DataManager_TypeInfo;
      }
      static_fields = v36->static_fields;
      v5 = 0;
      v35 = 1;
      goto LABEL_36;
    }
    if ( _1__state != 3 )
      return v5;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
LABEL_30:
      DataManager__ClearSaveDataList(_4__this, 0);
      v33 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
        v33 = DataManager_TypeInfo;
      }
      static_fields = v33->static_fields;
      v5 = 0;
      v35 = 5;
LABEL_36:
      static_fields->readMasterDataResult = v35;
      return v5;
    }
    goto LABEL_100;
  }
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_100;
      goto LABEL_17;
    }
    return v5;
  }
  v2->fields.__1__state = -1;
  this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (DataManager__readMasterData_d__48_o *)DataManager_TypeInfo;
  }
  HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
  if ( !_4__this )
LABEL_100:
    sub_21FFECC(this, method);
  if ( !DataManager__CheckWaitforFrame(_4__this, 0) )
  {
LABEL_17:
    if ( DataManager__readMasterDataListFile(_4__this, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      CacheFileName = DataManager__getCacheFileName(0);
      if ( System_IO_File__Exists(CacheFileName, 0) )
      {
        v16 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
        System_IO_MemoryStream___ctor(v16, 0);
        v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0);
        v105 = v18;
        if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v17);
        v104 = CatAndMouseGame__MouseGameZ(v18, 0);
        v19 = sub_21FFD10(byte___TypeInfo, 0x4000);
        v21 = v19;
        if ( !v19 )
LABEL_92:
          sub_21FFECC(v19, v20);
        while ( 1 )
        {
          v19 = (__int64)v104;
          if ( !v104 )
            goto LABEL_92;
          if ( ((int (__fastcall *)(System_IO_Stream_o *, __int64))v104->klass->vtable._31_unknown.methodPtr)(v104, v21) <= 0 )
            break;
          if ( !v16 )
            sub_21FFECC(0, v22);
          ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64))v16->klass->vtable._34_Write.methodPtr)(v16, v21);
        }
        klass = v104->klass;
        v38 = *(unsigned __int16 *)&v104->klass->_2.rank;
        if ( *(_WORD *)&v104->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
          {
            --v38;
            p_offset += 4;
            if ( !v38 )
              goto LABEL_41;
          }
          v40 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_41:
          v40 = sub_2237E2C(v104, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v104, *(_QWORD *)(v40 + 8));
        if ( v105 )
        {
          v42 = v105->klass;
          v43 = *(unsigned __int16 *)&v105->klass->_2.rank;
          if ( *(_WORD *)&v105->klass->_2.rank )
          {
            v44 = &v42->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
            {
              --v43;
              v44 += 4;
              if ( !v43 )
                goto LABEL_48;
            }
            v45 = (__int64)&v42->vtable + 16 * *v44;
          }
          else
          {
LABEL_48:
            v45 = sub_2237E2C(v105, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v45)(v105, *(_QWORD *)(v45 + 8));
        }
        if ( !v16 )
          sub_21FFECC(0, v41);
        v46 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *))v16->klass->vtable._40_ToArray.methodPtr)(
                v16,
                v16->klass->vtable._40_ToArray.method);
        _4__this->fields.masterDataBytes = (struct System_Byte_array *)v46;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.masterDataBytes,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        v53 = v16->klass;
        v54 = *(unsigned __int16 *)&v16->klass->_2.rank;
        if ( *(_WORD *)&v16->klass->_2.rank )
        {
          v55 = &v53->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_56;
          }
          v56 = (__int64)&v53->vtable + 16 * *v55;
        }
        else
        {
LABEL_56:
          v56 = sub_2237E2C(v16, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v56)(v16, *(_QWORD *)(v56 + 8));
        masterDataBytes = _4__this->fields.masterDataBytes;
        v58 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
        System_IO_MemoryStream___ctor_76663240(v58, masterDataBytes, 0);
        v103 = v58;
        v59 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
        System_IO_BinaryReader___ctor(v59, (System_IO_Stream_o *)v58, 0);
        saveNameList = _4__this->fields.saveNameList;
        v102 = v59;
        if ( !saveNameList )
          sub_21FFECC(v60, v61);
        size = saveNameList->fields._size;
        if ( size >= 1 )
        {
          do
          {
            if ( !v102 )
              sub_21FFECC(0, v61);
            v69 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *, __int64, __int64))v102->klass->vtable._15_ReadInt32.methodPtr)(
                    v102,
                    v102->klass->vtable._15_ReadInt32.method,
                    v62,
                    v63);
            if ( !v103 )
              sub_21FFECC(0, v66);
            v70 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, const MethodInfo *, __int64, __int64))v103->klass->vtable._12_get_Position.methodPtr)(
                    v103,
                    v103->klass->vtable._12_get_Position.method,
                    v67,
                    v68);
            v71 = v69;
            ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, const MethodInfo *))v103->klass->vtable._29_Seek.methodPtr)(
              v103,
              v69,
              1,
              v103->klass->vtable._29_Seek.method);
            saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
            v73 = sub_21FFD10(long___TypeInfo, 2);
            v80 = v73;
            if ( !v73 )
              sub_21FFECC(0, 0);
            v81 = *(_DWORD *)(v73 + 24);
            if ( !v81 )
              sub_21FFED4(v73);
            *(_QWORD *)(v73 + 32) = v70;
            if ( v81 == 1 )
              sub_21FFED4(v73);
            *(_QWORD *)(v73 + 40) = v71;
            if ( !saveDataMapList
              || (items = saveDataMapList->fields._items,
                  v83 = Method_System_Collections_Generic_List_long____Add__,
                  ++saveDataMapList->fields._version,
                  !items) )
            {
              sub_21FFECC(v73, v73);
            }
            v84 = saveDataMapList->fields._size;
            if ( (unsigned int)v84 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                saveDataMapList,
                (Il2CppObject *)v73,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &items->obj.klass + v84;
              saveDataMapList->fields._size = v84 + 1;
              v85[4] = (Il2CppClass *)v80;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), v80, v74, v75, v76, v77, v78, v79);
            }
            --size;
          }
          while ( size );
        }
        if ( v102 )
        {
          v86 = v102->klass;
          v87 = *(unsigned __int16 *)&v102->klass->_2.rank;
          if ( *(_WORD *)&v102->klass->_2.rank )
          {
            v88 = &v86->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
            {
              --v87;
              v88 += 4;
              if ( !v87 )
                goto LABEL_76;
            }
            v89 = (__int64)&v86->vtable + 16 * *v88;
          }
          else
          {
LABEL_76:
            v89 = sub_2237E2C(v102, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v89)(v102, *(_QWORD *)(v89 + 8));
        }
        if ( v103 )
        {
          v90 = v103->klass;
          v91 = *(unsigned __int16 *)&v103->klass->_2.rank;
          if ( *(_WORD *)&v103->klass->_2.rank )
          {
            v92 = &v90->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
            {
              --v91;
              v92 += 4;
              if ( !v91 )
                goto LABEL_84;
            }
            v93 = (__int64)&v90->vtable + 16 * *v92;
          }
          else
          {
LABEL_84:
            v93 = sub_2237E2C(v103, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v93)(v103, *(_QWORD *)(v93 + 8));
        }
        if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v61);
        System_GC__Collect(0);
        v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v94, 0);
        v2->fields.__2__current = (Il2CppObject *)v94;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v94, v95, v96, v97, v98, v99, v100);
        v31 = 2;
        goto LABEL_90;
      }
    }
    if ( DataManager__CheckWaitforFrame(_4__this, 0) )
    {
      v23 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v23, 0);
      v2->fields.__2__current = (Il2CppObject *)v23;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v23, v25, v26, v27, v28, v29, v30);
      v31 = 3;
LABEL_90:
      p__2__current[-1].fields._BoardType_k__BackingField = v31;
      return 1;
    }
    goto LABEL_30;
  }
  v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v6;
  v7 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
  sub_21FFBF4(v7, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  v5 = 1;
  v7[-1].fields._BoardType_k__BackingField = 1;
  return v5;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DataManager__readMasterData_d__48_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  bool v13; // w8
  __int64 v14; // x1
  bool MasterVersionFile; // w8
  DataManager_c *v16; // x0
  int v17; // w9
  struct DataManager_StaticFields *static_fields; // x9
  int v19; // w10

  v2 = this;
  if ( (byte_5938140 & 1) == 0 )
  {
    sub_21FFC50(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__47_o *)sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5938140 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_11;
LABEL_21:
    sub_21FFECC(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__47_o *)DataManager_TypeInfo;
  }
  LODWORD(this[4].fields.__2__current[3].monitor) = 0;
  if ( !_4__this )
    goto LABEL_21;
  if ( DataManager__CheckWaitforFrame(_4__this, 0) )
  {
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0);
    v2->fields.__2__current = (Il2CppObject *)v5;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    v13 = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return v13;
  }
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0);
  v16 = DataManager_TypeInfo;
  v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( MasterVersionFile )
  {
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      v16 = DataManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    v13 = 0;
    v19 = 1;
  }
  else
  {
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      v16 = DataManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    v13 = 0;
    v19 = 5;
  }
  static_fields->readMasterVersionResult = v19;
  return v13;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DataManager__readMasterVersion_d__47_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DataManager__updateMasterData_d__50_o *v8; // x19
  int32_t _1__state; // w8
  System_Predicate_string__c **v10; // x22
  DataManager___c__DisplayClass50_0_c **v11; // x21
  struct DataManager_o *_4__this; // x20
  DataManager_c *v13; // x0
  int v14; // w8
  MasterDataUnpakcer_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UnityEngine_WaitForEndOfFrame_o *v26; // x20
  MissionNaviTransitionBoardItem_o *v27; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int v34; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v36; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v38; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  __int64 v41; // x1
  System_String_o *CachePath; // x21
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x1
  DataManager_c *v62; // x0
  Il2CppObject *updateData; // x0
  __int64 v64; // x1
  System_String_o *v65; // x21
  System_Byte_array *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  DataManager_c *v80; // x0
  struct DataManager_StaticFields *static_fields; // x0
  __int64 v82; // x1
  UnityEngine_WaitForEndOfFrame_o *v83; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x1
  UnityEngine_WaitForEndOfFrame_o *v107; // x20
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  DataManager___c__DisplayClass50_0_c **v114; // x27
  System_Func_bool__o *v115; // x21
  UnityEngine_WaitUntil_o *v116; // x20
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  int32_t v123; // w1
  MissionNaviTransitionBoardItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v125; // x20
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  UnityEngine_WaitForEndOfFrame_o *v132; // x20
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  System_Predicate_string__c **v139; // x28
  int v140; // w8
  DataManager_c *v141; // x8
  struct DataManager_StaticFields *v142; // x8
  int v143; // w9
  Il2CppObject *v144; // x22
  DataManager__updateMasterData_d__50_o **p__8__1; // x21
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  struct DataMasterBase_array *v158; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v160; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass50_0_o *_8__1; // x8
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  __int64 v169; // x0
  __int64 v170; // x1
  struct DataManager___c__DisplayClass50_0_o *v171; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  struct DataManager___c__DisplayClass50_0_o *v180; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x21
  Il2CppObject *v183; // x23
  System_Predicate_object__o *v184; // x22
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  System_Collections_Generic_List_object__o *v197; // x22
  DataManager__updateMasterData_d__50_o *v198; // x23
  System_Predicate_object__o *v199; // x21
  int32_t Index; // w0
  int32_t v201; // w21
  System_String_o *v202; // x2
  System_String_o *v203; // x3
  int32_t v204; // w4
  int32_t v205; // w5
  bool v206; // w6
  bool v207; // w7
  struct DataManager___c__DisplayClass50_0_o *v208; // x9
  __int64 v209; // x8
  _QWORD *v210; // x9
  __int64 _2__current_low; // x10
  __int64 v212; // x8
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  __int64 v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  __int64 v222; // x8
  UnityEngine_WaitForEndOfFrame_o *v223; // x20
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  ManagerConfig_c *v230; // x0
  System_String_o *v231; // x2
  System_String_o *v232; // x3
  int32_t v233; // w4
  int32_t v234; // w5
  bool v235; // w6
  bool v236; // w7
  System_String_o *v237; // x2
  System_String_o *v238; // x3
  int32_t v239; // w4
  int32_t v240; // w5
  bool v241; // w6
  bool v242; // w7
  struct System_Collections_Generic_List_string__o *v243; // x8
  System_Collections_Generic_List_int__o *v244; // x22
  DataManager__updateMasterData_d__50_o **p_loadedIndices_5__5; // x21
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  __int64 v252; // x1
  ManagerConfig_c *v253; // x0
  __int64 v254; // x1
  __int64 v255; // x22
  DataManager__updateMasterData_d__50_o *v256; // x23
  Il2CppObject *Master_object; // x23
  Il2CppObject *v258; // x23
  Il2CppObject *v259; // x23
  Il2CppObject *v260; // x23
  Il2CppObject *v261; // x23
  Il2CppObject *v262; // x23
  Il2CppObject *v263; // x23
  Il2CppObject *v264; // x23
  int v265; // w8
  __int64 v266; // x27
  _QWORD *v267; // x23
  __int64 v268; // x24
  System_String_o *v269; // x2
  System_String_o *v270; // x3
  int32_t v271; // w4
  int32_t v272; // w5
  bool v273; // w6
  bool v274; // w7
  __int64 v275; // x1
  System_Collections_Generic_List_object__o *v276; // x25
  System_Predicate_object__o *v277; // x26
  int32_t v278; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_45B0918 *v280; // x3
  const MethodInfo_45B0918 *v281; // x3
  __int64 v282; // x8
  _QWORD *v283; // x9
  __int64 v284; // x10
  __int64 v285; // x1
  __int64 v286; // x1
  __int64 v287; // x1
  UnityEngine_WaitForEndOfFrame_o *v288; // x20
  System_String_o *v289; // x2
  System_String_o *v290; // x3
  int32_t v291; // w4
  int32_t v292; // w5
  bool v293; // w6
  bool v294; // w7
  __int64 v295; // x1
  ManagerConfig_c *v296; // x0
  Il2CppObject *lockCountObj; // x0
  __int64 v298; // x1
  DataManager_c *v299; // x0
  int v300; // w22
  DataManager_c *v301; // x8
  UnityEngine_WaitForEndOfFrame_o *v302; // x20
  System_String_o *v303; // x2
  System_String_o *v304; // x3
  int32_t v305; // w4
  int32_t v306; // w5
  bool v307; // w6
  bool v308; // w7
  __int64 v309; // x1
  System_String_o *v310; // x3
  int32_t v311; // w4
  int32_t v312; // w5
  bool v313; // w6
  bool v314; // w7
  struct System_Collections_Generic_List_string__o *v315; // x8
  int32_t size; // w2
  int v317; // w9
  struct System_Collections_Generic_List_long____o *v318; // x8
  System_String_o *v319; // x2
  int v320; // w9
  __int64 v321; // x1
  UnityEngine_WaitForEndOfFrame_o *v322; // x20
  System_String_o *v323; // x2
  System_String_o *v324; // x3
  int32_t v325; // w4
  int32_t v326; // w5
  bool v327; // w6
  bool v328; // w7
  UnityEngine_WaitForEndOfFrame_o *v329; // x20
  System_String_o *v330; // x2
  System_String_o *v331; // x3
  int32_t v332; // w4
  int32_t v333; // w5
  bool v334; // w6
  bool v335; // w7
  UnityEngine_WaitForEndOfFrame_o *v336; // x20
  System_String_o *v337; // x2
  System_String_o *v338; // x3
  int32_t v339; // w4
  int32_t v340; // w5
  bool v341; // w6
  bool v342; // w7
  struct DataMasterBase_array *v343; // x9
  __int64 v344; // x1
  __int64 v345; // x1
  __int64 v346; // x1
  __int64 v347; // x1
  __int64 v348; // x1
  __int64 v349; // x1
  __int64 v350; // x1
  __int64 v351; // x1
  __int64 v352; // x1
  __int64 v353; // x1
  __int64 v354; // x1
  __int64 v355; // x1
  EventRandomMissionClearManager_c *v356; // x0
  __int64 v357; // x1
  __int64 v358; // x1
  __int64 v359; // x1
  DataManager_c *v360; // x8
  UnityEngine_WaitForEndOfFrame_o *v361; // x20
  System_String_o *v362; // x2
  System_String_o *v363; // x3
  int32_t v364; // w4
  int32_t v365; // w5
  bool v366; // w6
  bool v367; // w7
  __int64 v368; // [xsp+8h] [xbp-A8h] BYREF
  bool *v369; // [xsp+10h] [xbp-A0h]
  Il2CppObject **v370; // [xsp+18h] [xbp-98h]
  __int64 v371; // [xsp+20h] [xbp-90h] BYREF
  __int64 v372; // [xsp+28h] [xbp-88h]
  int v373; // [xsp+38h] [xbp-78h]
  bool lockTaken[4]; // [xsp+44h] [xbp-6Ch] BYREF
  Il2CppObject *v375; // [xsp+48h] [xbp-68h] BYREF
  System_Nullable_long__o v376; // 0:x0.16
  System_Nullable_long__o v377; // 0:x0.16

  v8 = this;
  if ( (byte_5938141 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_21FFC50(&Method_DataManager__updateMasterData_b__50_0__);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&DataMasterBase___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_21FFC50(&EventRandomMissionClearManager_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&LastUsedDeckNumberManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&LogoMain_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&MasterDataUnpakcer_TypeInfo);
    sub_21FFC50(&MaterialBranchRouteManager_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&MaterialServantLimitCountManager_TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long___ctor__);
    sub_21FFC50(&OtherUserNewManager_TypeInfo);
    sub_21FFC50(&System_Predicate_string__TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&ServantProfileEventJoinManager_TypeInfo);
    sub_21FFC50(&ServantProfileLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__);
    sub_21FFC50(&Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__);
    sub_21FFC50(&DataManager___c__DisplayClass50_0_TypeInfo);
    sub_21FFC50(&Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__);
    sub_21FFC50(&DataManager___c__DisplayClass50_1_TypeInfo);
    sub_21FFC50(&UserCommandCodeCollectionManager_TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    sub_21FFC50(&UserEquipNewManager_TypeInfo);
    sub_21FFC50(&UserServantCollectionManager_TypeInfo);
    sub_21FFC50(&UserServantNewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__50_o *)sub_21FFC50(&StringLiteral_11966/*"SCRIPT"*/);
    byte_5938141 = 1;
  }
  _1__state = v8->fields.__1__state;
  v375 = 0;
  lockTaken[0] = 0;
  v373 = 0;
  v10 = &System_Predicate_string__TypeInfo;
  v11 = &DataManager___c__DisplayClass50_0_TypeInfo;
  _4__this = v8->fields.__4__this;
  switch ( _1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields._values) = 0;
      if ( !_4__this )
        goto LABEL_257;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_257;
      v8->fields._dataListCount_5__2 = datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_257;
      v8->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
      CachePath = DataManager__getCachePath(0);
      if ( !System_IO_Directory__Exists(CachePath, 0) )
        System_IO_Directory__CreateDirectory(CachePath, 0);
      this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      v8->fields._isAdd_5__4 = 0;
      if ( !HIDWORD(this[2].klass) )
      {
        j_il2cpp_runtime_class_init_0(this, method);
        this = (DataManager__updateMasterData_d__50_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_134;
      v8->fields._dataMapDict_5__6 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapDict_5__6, 0, v43, v44, v45, v46, v47, v48);
      v8->fields._dataMapObject_5__7 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapObject_5__7, 0, v49, v50, v51, v52, v53, v54);
      v8->fields._cryptBytes_5__8 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._cryptBytes_5__8, 0, v55, v56, v57, v58, v59, v60);
      v62 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
        v62 = DataManager_TypeInfo;
      }
      updateData = v62->static_fields->updateData;
      if ( !updateData )
        sub_21FFECC(0, v61);
      v65 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))updateData->klass->vtable[3].methodPtr)(
                                 updateData,
                                 updateData->klass->vtable[3].method);
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v64);
      v66 = System_Convert__FromBase64String(v65, 0);
      v8->fields._cryptBytes_5__8 = v66;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._cryptBytes_5__8,
        (int32_t)v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      v80 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v73);
        v80 = DataManager_TypeInfo;
      }
      static_fields = v80->static_fields;
      static_fields->updateData = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->updateData, 0, v74, v75, v76, v77, v78, v79);
      if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v82);
      System_GC__Collect(0);
      v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v83, 0);
      v8->fields.__2__current = (Il2CppObject *)v83;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v83, v85, v86, v87, v88, v89, v90);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, method);
      v93 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0);
      if ( !_4__this )
        sub_21FFECC(v93, v93);
      _4__this->fields.masterDataBytes = v93;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.masterDataBytes,
        (int32_t)v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      v8->fields._cryptBytes_5__8 = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._cryptBytes_5__8,
        0,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v106);
      System_GC__Collect(0);
      v107 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v107, 0);
      v8->fields.__2__current = (Il2CppObject *)v107;
      v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v27, (int32_t)v107, v108, v109, v110, v111, v112, v113);
      v34 = 2;
      goto LABEL_82;
    case 2:
      v8->fields.__1__state = -1;
      v15 = (MasterDataUnpakcer_o *)sub_21FFEBC(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v15, 0);
      if ( !_4__this )
        sub_21FFECC(v16, v17);
      if ( !v15 )
        sub_21FFECC(v16, v17);
      v18 = MasterDataUnpakcer__Unpack_47974576(v15, _4__this->fields.masterDataBytes, 0);
      v8->fields._dataMapObject_5__7 = v18;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapObject_5__7,
        (int32_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v25);
      System_GC__Collect(0);
      v26 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v26, 0);
      v8->fields.__2__current = (Il2CppObject *)v26;
      v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v27, (int32_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v36 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        naturalAligment = System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.naturalAligment;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v38 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v38 = 0;
        }
        else
        {
          v38 = 0;
        }
        v8->fields._dataMapDict_5__6 = v38;
        p_dataMapDict_5__6 = (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapDict_5__6;
        if ( dataMapObject_5__7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[naturalAligment - 1] == v36 )
            v123 = (int)dataMapObject_5__7;
          else
            v123 = 0;
        }
        else
        {
          v123 = 0;
        }
      }
      else
      {
        v123 = 0;
        v8->fields._dataMapDict_5__6 = 0;
        p_dataMapDict_5__6 = (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_21FFBF4(p_dataMapDict_5__6, v123, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_257;
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v132 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v132, 0);
        v8->fields.__2__current = (Il2CppObject *)v132;
        v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v27, (int32_t)v132, v133, v134, v135, v136, v137, v138);
        v34 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v139 = &System_Predicate_string__TypeInfo;
      v140 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v140 < v8->fields._dataListCount_5__2 )
        {
          v114 = v11;
          v144 = (Il2CppObject *)sub_21FFEBC(*v11);
          System_Object___ctor(v144, 0);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass50_0_o *)v144;
          p__8__1 = (DataManager__updateMasterData_d__50_o **)&v8->fields.__8__1;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1,
            (int32_t)v144,
            v146,
            v147,
            v148,
            v149,
            v150,
            v151);
          v158 = _4__this->fields.datalist;
          if ( !v158 )
            goto LABEL_257;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v158->max_length) )
            goto LABEL_258;
          v160 = v158->m_Items[i_5__9];
          if ( !v160 )
            goto LABEL_257;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_257;
          MasterName_k__BackingField = v160->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields,
            (int32_t)MasterName_k__BackingField,
            v152,
            v153,
            v154,
            v155,
            v156,
            v157);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_257;
          this = (DataManager__updateMasterData_d__50_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_257;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMap_5__10,
              0,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168);
            v171 = v8->fields.__8__1;
            if ( !v171 )
              sub_21FFECC(v169, v170);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_21FFECC(0, v170);
            v10 = v139;
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v171->fields.masterName,
                     (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMap_5__10,
              (int32_t)Item,
              v174,
              v175,
              v176,
              v177,
              v178,
              v179);
            this = (DataManager__updateMasterData_d__50_o *)DataManager__CheckWaitforFrame(_4__this, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v336 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v336, 0);
              v8->fields.__2__current = (Il2CppObject *)v336;
              v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v27, (int32_t)v336, v337, v338, v339, v340, v341, v342);
              v34 = 5;
              goto LABEL_82;
            }
LABEL_96:
            v180 = v8->fields.__8__1;
            if ( !v180 )
              goto LABEL_257;
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.masterCheckName;
            if ( !this )
              goto LABEL_257;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v180->fields.masterName,
                                                              (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_257;
              if ( SLODWORD(dataMap_5__10->max_length) < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v301 = DataManager_TypeInfo;
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
                  v301 = DataManager_TypeInfo;
                }
                v142 = v301->static_fields;
                result = 0;
                v143 = 6;
                goto LABEL_255;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v139 = v10;
            v183 = (Il2CppObject *)v8->fields.__8__1;
            v184 = (System_Predicate_object__o *)sub_21FFEBC(*v10);
            System_Predicate_object____ctor(
              v184,
              v183,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__1__,
              0);
            if ( !saveNameList )
              goto LABEL_257;
            this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v184,
                                                              (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              v208 = v8->fields.__8__1;
              if ( !v208 )
                goto LABEL_257;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_257;
              method = (const MethodInfo *)v208->fields.masterName;
              v209 = *(_QWORD *)&this->fields.__1__state;
              v210 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v209 )
                goto LABEL_257;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v209 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
              }
              else
              {
                v212 = v209 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v212 + 32) = method;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v212 + 32),
                  (int32_t)method,
                  v185,
                  v186,
                  v187,
                  v188,
                  v189,
                  v190);
              }
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_257;
              v219 = *(_QWORD *)&this->fields.__1__state;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v220 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v219 )
                goto LABEL_257;
              v221 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v221 >= *(_DWORD *)(v219 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
              }
              else
              {
                v222 = v219 + 8 * v221;
                LODWORD(this->fields.__2__current) = v221 + 1;
                *(_QWORD *)(v222 + 32) = method;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v222 + 32),
                  (int32_t)method,
                  v213,
                  v214,
                  v215,
                  v216,
                  v217,
                  v218);
              }
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_257;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v8->fields._dataMap_5__10->obj,
                (const MethodInfo_444F8B0 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0;
            v8->fields._isAdd_5__4 = 1;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMap_5__10,
              0,
              v191,
              v192,
              v193,
              v194,
              v195,
              v196);
          }
          else
          {
            v197 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v198 = *p__8__1;
            v199 = (System_Predicate_object__o *)sub_21FFEBC(*v139);
            System_Predicate_object____ctor(
              v199,
              (Il2CppObject *)v198,
              Method_DataManager___c__DisplayClass50_0__updateMasterData_b__2__,
              0);
            if ( !v197 )
              goto LABEL_257;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v197,
                      (System_Predicate_T__o *)v199,
                      (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( Index < 0 )
              goto LABEL_125;
            v201 = Index;
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_257;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v201,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_257;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v201,
              (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, 0, v202, v203, v204, v205, v206, v207);
LABEL_125:
          v11 = v114;
          v140 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v140;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0) )
      {
LABEL_129:
        if ( !v8->fields._isAdd_5__4 )
        {
          v230 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v230 = ManagerConfig_TypeInfo;
          }
          if ( !v230->static_fields->UseMock )
            goto LABEL_83;
        }
        v8->fields._dataMapDict_5__6 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapDict_5__6, 0, v2, v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._dataMapObject_5__7,
          0,
          v231,
          v232,
          v233,
          v234,
          v235,
          v236);
        v8->fields._cryptBytes_5__8 = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._cryptBytes_5__8,
          0,
          v237,
          v238,
          v239,
          v240,
          v241,
          v242);
        if ( !_4__this )
          goto LABEL_257;
LABEL_134:
        v243 = _4__this->fields.saveNameList;
        if ( !v243 )
LABEL_257:
          sub_21FFECC(this, method);
        if ( v243->fields._size <= 0 )
        {
LABEL_83:
          v141 = DataManager_TypeInfo;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
            v141 = DataManager_TypeInfo;
          }
          v142 = v141->static_fields;
          result = 0;
          v143 = 5;
          goto LABEL_255;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v244 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v244,
          (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v244;
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__50_o **)&v8->fields._loadedIndices_5__5;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._loadedIndices_5__5,
          (int32_t)v244,
          v246,
          v247,
          v248,
          v249,
          v250,
          v251);
        if ( v8->fields.isUseTips )
        {
          v253 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v252);
            v253 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v253->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11966/*"SCRIPT"*/,
                 0) )
          {
            this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_257;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0) )
            {
              v255 = sub_21FFD10(DataMasterBase___TypeInfo, 9);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v254);
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v255 )
                goto LABEL_257;
              v256 = this;
              sub_1FEB8A8(v255, this);
              sub_1FEB274(v255, 0, v256);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
              sub_1FEB8A8(v255, Master_object);
              sub_1FEB274(v255, 1, Master_object);
              v258 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              sub_1FEB8A8(v255, v258);
              sub_1FEB274(v255, 2, v258);
              v259 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              sub_1FEB8A8(v255, v259);
              sub_1FEB274(v255, 3, v259);
              v260 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              sub_1FEB8A8(v255, v260);
              sub_1FEB274(v255, 4, v260);
              v261 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventServantMaster___);
              sub_1FEB8A8(v255, v261);
              sub_1FEB274(v255, 5, v261);
              v262 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              sub_1FEB8A8(v255, v262);
              sub_1FEB274(v255, 6, v262);
              v263 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              sub_1FEB8A8(v255, v263);
              sub_1FEB274(v255, 7, v263);
              v264 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantAddMaster___);
              sub_1FEB8A8(v255, v264);
              this = (DataManager__updateMasterData_d__50_o *)sub_1FEB274(v255, 8, v264);
              v265 = *(_DWORD *)(v255 + 24);
              if ( v265 >= 1 )
              {
                v266 = 0;
                while ( (unsigned int)v266 < v265 )
                {
                  v267 = *(_QWORD **)(v255 + 32 + 8 * v266);
                  v268 = sub_21FFEBC(DataManager___c__DisplayClass50_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v268, 0);
                  if ( !v267 )
                    goto LABEL_257;
                  if ( !v268 )
                    goto LABEL_257;
                  v275 = v267[3];
                  *(_QWORD *)(v268 + 16) = v275;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v268 + 16), v275, v269, v270, v271, v272, v273, v274);
                  v276 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v277 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v277,
                    (Il2CppObject *)v268,
                    Method_DataManager___c__DisplayClass50_1__updateMasterData_b__3__,
                    0);
                  if ( !v276 )
                    goto LABEL_257;
                  this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v276,
                                                                    (System_Predicate_T__o *)v277,
                                                                    (const MethodInfo_4450380 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v278 = (int)this;
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_257;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v278,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_257;
                    if ( !LODWORD(this->fields.__2__current) )
                      break;
                    v376.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v376.fields.hasValue = &v368;
                    v368 = 0;
                    v369 = 0;
                    System_Nullable_long____ctor(v376, Method_System_Nullable_long___ctor__, v280);
                    this = (DataManager__updateMasterData_d__50_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_257;
                    this = (DataManager__updateMasterData_d__50_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v278,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_257;
                    if ( ((__int64)this->fields.__2__current & 0xFFFFFFFE) == 0 )
                      break;
                    v377.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v377.fields.hasValue = &v371;
                    v371 = 0;
                    v372 = 0;
                    System_Nullable_long____ctor(v377, Method_System_Nullable_long___ctor__, v281);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, bool *, __int64, __int64, _QWORD))(*v267 + 424LL))(
                      v267,
                      masterDataBytes,
                      v368,
                      v369,
                      v371,
                      v372,
                      *(_QWORD *)(*v267 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_257;
                    v282 = *(_QWORD *)&this->fields.__1__state;
                    v283 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v282 )
                      goto LABEL_257;
                    v284 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v284 >= *(_DWORD *)(v282 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v278,
                        *(const MethodInfo_4433138 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v284 + 1;
                      *(_DWORD *)(v282 + 4 * v284 + 32) = v278;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v265 = *(_DWORD *)(v255 + 24);
                  if ( (int)++v266 >= v265 )
                    goto LABEL_165;
                }
LABEL_258:
                sub_21FFED4(this);
              }
LABEL_165:
              this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_257;
              this = (DataManager__updateMasterData_d__50_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_257;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0) >= 1 )
              {
                if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v285);
                ServantProfileLimitCountManager__Initialize(0);
                if ( !*(&ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v286);
                ServantProfileEventJoinManager__Initialize(0);
                if ( !*(&LogoMain_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v287);
                if ( LogoMain__IsPLayLogo(0) )
                  goto LABEL_177;
                this = (DataManager__updateMasterData_d__50_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0);
LABEL_177:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0);
                  v288 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v288, 0);
                  v8->fields.__2__current = (Il2CppObject *)v288;
                  v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                  sub_21FFBF4(v27, (int32_t)v288, v289, v290, v291, v292, v293, v294);
                  v34 = 7;
                  goto LABEL_82;
                }
                goto LABEL_257;
              }
            }
          }
        }
LABEL_178:
        DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0);
        if ( v8->fields._isAdd_5__4 )
        {
          v296 = ManagerConfig_TypeInfo;
          if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v295);
            v296 = ManagerConfig_TypeInfo;
          }
          if ( !v296->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0);
            if ( DataManager__CheckWaitforFrame(_4__this, 0) )
            {
              v329 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v329, 0);
              v8->fields.__2__current = (Il2CppObject *)v329;
              v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v27, (int32_t)v329, v330, v331, v332, v333, v334, v335);
              v34 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
            this = (DataManager__updateMasterData_d__50_o *)DataManager__getCacheFileName(0);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0);
              v115 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v115,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__50_0__,
                0);
              v116 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v116, v115, 0);
              v8->fields.__2__current = (Il2CppObject *)v116;
              v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v27, (int32_t)v116, v117, v118, v119, v120, v121, v122);
              v34 = 9;
              goto LABEL_82;
            }
            goto LABEL_257;
          }
        }
LABEL_182:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken[0] = 0;
        v368 = 0;
        v369 = lockTaken;
        v375 = lockCountObj;
        v370 = &v375;
        System_Threading_Monitor__Enter_77339928(lockCountObj, lockTaken, 0);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v300 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v299 = DataManager_TypeInfo;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v298);
            v299 = DataManager_TypeInfo;
          }
          v299->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0);
          v300 = 20;
        }
        else
        {
          v300 = 62;
        }
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(*v370, 0);
        if ( v300 == 62 )
        {
          v302 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v302, 0);
          v8->fields.__2__current = (Il2CppObject *)v302;
          v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_21FFBF4(v27, (int32_t)v302, v303, v304, v305, v306, v307, v308);
          v34 = 11;
          goto LABEL_82;
        }
        if ( v300 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0);
          if ( !*(&MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo, v309);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0);
          v315 = _4__this->fields.saveNameList;
          if ( v315 )
          {
            size = v315->fields._size;
            v317 = v315->fields._version + 1;
            v315->fields._size = 0;
            v315->fields._version = v317;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v315->fields._items, 0, size, 0);
            v318 = _4__this->fields.saveDataMapList;
            if ( v318 )
            {
              v319 = (System_String_o *)(unsigned int)v318->fields._size;
              v320 = v318->fields._version + 1;
              v318->fields._size = 0;
              v318->fields._version = v320;
              if ( (int)v319 >= 1 )
                System_Array__Clear((System_Array_o *)v318->fields._items, 0, (int32_t)v319, 0);
              _4__this->fields.masterDataBytes = 0;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&_4__this->fields.masterDataBytes,
                0,
                v319,
                v310,
                v311,
                v312,
                v313,
                v314);
              if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v321);
              System_GC__Collect(0);
              v322 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v322, 0);
              v8->fields.__2__current = (Il2CppObject *)v322;
              v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
              sub_21FFBF4(v27, (int32_t)v322, v323, v324, v325, v326, v327, v328);
              v34 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_257;
        }
        return 0;
      }
      v223 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v223, 0);
      v8->fields.__2__current = (Il2CppObject *)v223;
      v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(v27, (int32_t)v223, v224, v225, v226, v227, v228, v229);
      v34 = 6;
LABEL_82:
      v27[-1].fields._BoardType_k__BackingField = v34;
      return 1;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_257;
      goto LABEL_75;
    case 5:
      v114 = &DataManager___c__DisplayClass50_0_TypeInfo;
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_257;
      goto LABEL_96;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_129;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_257;
      goto LABEL_178;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_257;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v13 = DataManager_TypeInfo;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          v13 = DataManager_TypeInfo;
        }
        v13->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, 0);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, 0);
      DataManager__writeMasterVersionFile(_4__this, 0);
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v125 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v125, 0);
        v8->fields.__2__current = (Il2CppObject *)v125;
        v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(v27, (int32_t)v125, v126, v127, v128, v129, v130, v131);
        v34 = 10;
        goto LABEL_82;
      }
      goto LABEL_182;
    case 10:
    case 11:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_257;
      goto LABEL_182;
    case 12:
      v14 = 0;
      v8->fields._i_5__9 = 0;
      v8->fields.__1__state = -1;
      goto LABEL_221;
    case 13:
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v14 = v8->fields._i_5__9 + 1;
        v8->fields._i_5__9 = v14;
LABEL_221:
        if ( v14 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_257;
        v343 = _4__this->fields.datalist;
        if ( !v343 )
          goto LABEL_257;
        if ( (unsigned int)v14 >= LODWORD(v343->max_length) )
          goto LABEL_258;
        this = (DataManager__updateMasterData_d__50_o *)v343->m_Items[v14];
        if ( !this )
          goto LABEL_257;
        this = (DataManager__updateMasterData_d__50_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__50_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
                                                          this,
                                                          this->klass->vtable._5_System_IDisposable_Dispose.method);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__50_o *)DataManager__CheckWaitforFrame(_4__this, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v361 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v361, 0);
            v8->fields.__2__current = (Il2CppObject *)v361;
            v27 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_21FFBF4(v27, (int32_t)v361, v362, v363, v364, v365, v366, v367);
            v34 = 13;
            goto LABEL_82;
          }
        }
      }
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      BalanceConfig__Initialize(0);
      if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v344);
      UserServantNewManager__Initialize(0);
      if ( !*(&UserServantCollectionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v345);
      UserServantCollectionManager__Initialize(0);
      if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v346);
      ServantCommentManager__Initialize(0);
      if ( !*(&OtherUserNewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v347);
      OtherUserNewManager__Initialize(0);
      if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v348);
      UserCommandCodeNewManager__Initialize(0);
      if ( !*(&UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v349);
      UserCommandCodeCollectionManager__Initialize(0);
      if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v350);
      ImageLimitCount__Initialize(0);
      if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v351);
      UserEquipNewManager__Initialize(0);
      if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v352);
      MaterialServantLimitCountManager__Initialize(0);
      if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v353);
      LastUsedDeckNumberManager__Initialize(0);
      if ( !*(&MaterialBranchRouteManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v354);
      MaterialBranchRouteManager__Initialize(0);
      v356 = EventRandomMissionClearManager_TypeInfo;
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v355);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v356);
      if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v357);
      MaterialGroupClearHistoryManager__Initialize(0);
      if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v358);
      WarBoardMovieHistoryManager__Initialize(0);
      v360 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v359);
        v360 = DataManager_TypeInfo;
      }
      v142 = v360->static_fields;
      result = 0;
      v143 = 1;
LABEL_255:
      v142->updateMasterDataResult = v143;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DataManager__updateMasterData_d__50_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  bool result; // w0
  DataManager_c *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  DataManager_c *v26; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  DataManager_c *v42; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v45; // x1
  UnityEngine_WaitForEndOfFrame_o *v46; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *cryptString_5__3; // x21
  __int64 v55; // x1
  System_Byte_array *v56; // x21
  Il2CppObject *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  UnityEngine_WaitForEndOfFrame_o *v64; // x20
  Il2CppObject **v65; // x19
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int v72; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_47951196; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  UnityEngine_WaitForEndOfFrame_o *v81; // x20
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v90; // x21
  System_String_o *v91; // x22
  Il2CppObject *v92; // x0
  System_Collections_Generic_Dictionary_string__object__c *v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_Dictionary_string__object__o *v96; // x23
  __int64 naturalAligment; // x9
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7

  if ( (byte_5938142 & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&StringLiteral_19003/*"contactURL"*/);
    sub_21FFC50(&StringLiteral_20310/*"filePass"*/);
    sub_21FFC50(&StringLiteral_17735/*"baseURL"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938142 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  result = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
        return result;
      this->fields.__1__state = -1;
      goto LABEL_35;
    }
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return result;
      this->fields.__1__state = -1;
    }
    else
    {
      this->fields.__1__state = -1;
      v12 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v12 = DataManager_TypeInfo;
      }
      if ( !v12->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._data_5__2, 0, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._cryptString_5__3, 0, v13, v14, v15, v16, v17, v18);
      this->fields._dataObject_5__4 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._dataObject_5__4, 0, v19, v20, v21, v22, v23, v24);
      v26 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
        v26 = DataManager_TypeInfo;
      }
      webViewData = v26->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_59;
      v28 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))webViewData->klass->vtable[3].methodPtr)(
                                        webViewData,
                                        webViewData->klass->vtable[3].method);
      this->fields._cryptString_5__3 = v28;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._cryptString_5__3,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v42 = DataManager_TypeInfo;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
        v42 = DataManager_TypeInfo;
      }
      static_fields = v42->static_fields;
      static_fields->webViewData = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->webViewData, 0, v36, v37, v38, v39, v40, v41);
      if ( !_4__this )
LABEL_57:
        sub_21FFECC(Item, v45);
      if ( DataManager__CheckWaitforFrame(_4__this, 0) )
      {
        v46 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v46, 0);
        this->fields.__2__current = (Il2CppObject *)v46;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v46, v48, v49, v50, v51, v52, v53);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    cryptString_5__3 = this->fields._cryptString_5__3;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, method);
    v56 = System_Convert__FromBase64String(cryptString_5__3, 0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v55);
    v57 = CatAndMouseGame__MouseGame2MsgPack(v56, 0, 0);
    this->fields._dataObject_5__4 = v57;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._dataObject_5__4,
      (int32_t)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    if ( !_4__this )
      goto LABEL_57;
    if ( DataManager__CheckWaitforFrame(_4__this, 0) )
    {
      v64 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v64, 0);
      this->fields.__2__current = (Il2CppObject *)v64;
      v65 = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v65, (int32_t)v64, v66, v67, v68, v69, v70, v71);
      v72 = 2;
LABEL_34:
      *((_DWORD *)v65 - 2) = v72;
      return 1;
    }
  }
  dataObject_5__4 = this->fields._dataObject_5__4;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  Dictionary_47951196 = JsonManager__getDictionary_47951196(dataObject_5__4, 0);
  this->fields._data_5__2 = Dictionary_47951196;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._data_5__2,
    (int32_t)Dictionary_47951196,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  if ( !_4__this )
    goto LABEL_57;
  if ( DataManager__CheckWaitforFrame(_4__this, 0) )
  {
    v81 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v81, 0);
    this->fields.__2__current = (Il2CppObject *)v81;
    v65 = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v65, (int32_t)v81, v82, v83, v84, v85, v86, v87);
    v72 = 3;
    goto LABEL_34;
  }
LABEL_35:
  p_data_5__2 = &this->fields._data_5__2;
  data_5__2 = this->fields._data_5__2;
  if ( data_5__2 )
  {
    v90 = (System_String_o *)StringLiteral_1/*""*/;
    v91 = (System_String_o *)StringLiteral_1/*""*/;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
           (Il2CppObject *)StringLiteral_17735/*"baseURL"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_57;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17735/*"baseURL"*/,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v91 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
    }
    Item = (Il2CppObject *)*p_data_5__2;
    if ( !*p_data_5__2 )
      goto LABEL_57;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)Item,
           (Il2CppObject *)StringLiteral_19003/*"contactURL"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_57;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_19003/*"contactURL"*/,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_57;
      v90 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                 Item,
                                 Item->klass->vtable[3].method);
    }
    Item = (Il2CppObject *)*p_data_5__2;
    if ( !*p_data_5__2 )
      goto LABEL_57;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)Item,
           (Il2CppObject *)StringLiteral_20310/*"filePass"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (Il2CppObject *)*p_data_5__2;
      if ( *p_data_5__2 )
      {
        v92 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_20310/*"filePass"*/,
                (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v96 = (System_Collections_Generic_Dictionary_string__object__o *)v92;
        if ( !v92
          || (v93 = System_Collections_Generic_Dictionary_string__object__TypeInfo,
              naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
              v92->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
          && (System_Collections_Generic_Dictionary_string__object__c *)v92->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
          NetworkManager__setupWebViewAddress(v91, v90, v96, 0);
          goto LABEL_54;
        }
        sub_220024C(v92, System_Collections_Generic_Dictionary_string__object__TypeInfo, v94, v95);
LABEL_59:
        sub_21FFECC(webViewData, v25);
      }
      goto LABEL_57;
    }
  }
LABEL_54:
  this->fields._data_5__2 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._data_5__2, 0, v2, v3, v4, v5, v6, v7);
  this->fields._cryptString_5__3 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._cryptString_5__3, 0, v98, v99, v100, v101, v102, v103);
  this->fields._dataObject_5__4 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._dataObject_5__4, 0, v104, v105, v106, v107, v108, v109);
  return 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_DataManager__updateWebViewData_d__39_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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