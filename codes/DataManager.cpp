void __fastcall DataManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  DataManager_c *v7; // x8
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct DataManager_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4353133 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353133 = 1;
  }
  DataManager_TypeInfo->static_fields->readDataVersion = 0;
  v7 = DataManager_TypeInfo;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  v7->static_fields->dataVersion = 0;
  v7->static_fields->dateVersion = 0LL;
  static_fields = v7->static_fields;
  static_fields->updateData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v1, v2, v3, v4, v5, v6);
  v9 = DataManager_TypeInfo->static_fields;
  v9->webViewData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v9->webViewData, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = DataManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  v16->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&v16->serverHash, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  Il2CppObject *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4353132 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long_____ctor__);
    sub_B70694(&System_Collections_Generic_List_long____TypeInfo);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager___ctor__);
    byte_4353132 = 1;
  }
  LOBYTE(this->fields.datalist) = 1;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.saveDataMapList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_long_____ctor__);
  *(_QWORD *)&this->fields.lastFrameTime = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.lastFrameTime,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_B70764(object_TypeInfo);
  System_Object___ctor(v17, 0LL);
  *(_QWORD *)&this->fields.nowLoadCount = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.nowLoadCount,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
}


bool __fastcall DataManager__CheckWaitforFrame(DataManager_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  bool result; // w0

  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  if ( (float)(realtimeSinceStartup - *(float *)&this->fields.masterCheckName) <= 0.1 )
    return 0;
  result = 1;
  *(float *)&this->fields.masterCheckName = realtimeSinceStartup;
  return result;
}


void __fastcall DataManager__ClearCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4353110 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353110 = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(CachePath, v3);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0

  if ( (byte_4353111 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353111 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_44697464(cachePath, 1, 0LL);
  v3 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  v3->static_fields->readDataVersion = 0;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
}


void __fastcall DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v3; // x1

  if ( (byte_435310F & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_435310F = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v1);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v3);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x0

  if ( (byte_4353129 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_long____Clear__);
    byte_4353129 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v3 = DataManager_TypeInfo;
  }
  v3->static_fields->readDataVersion = 0;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__),
        (saveDataMapList = *(struct System_Collections_Generic_List_long____o **)&this->fields.lastFrameTime) == 0LL) )
  {
    sub_B7076C(saveDataMapList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_long____Clear__);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  __int64 v1; // x19
  ServantMaster_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  _DWORD *v11; // x21
  ServantClassMaster_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ServantCommentMaster_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ServantProfileMaster_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarMaster_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UserMaster_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UserGameMaster_o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  TblUserMaster_o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UserItemMaster_o *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UserServantMaster_o *v68; // x20
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UserServantStorageMaster_o *v75; // x20
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UserAccessaryMaster_o *v82; // x20
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UserQuestMaster_o *v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  BattleMaster_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  OtherUserGameMaster_o *v103; // x20
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  TblFriendMaster_o *v110; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  AreaMaster_o *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  ServantCardMaster_o *v124; // x20
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  EventMaster_o *v131; // x20
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  ItemMaster_o *v138; // x20
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  QuestMaster_o *v145; // x20
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  QuestAddMaster_o *v152; // x20
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  QuestReleaseMaster_o *v159; // x20
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  QuestDateRangeMaster_o *v166; // x20
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  QuestPhaseMaster_o *v173; // x20
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  QuestPhaseDetailMaster_o *v180; // x20
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  QuestGroupMaster_o *v187; // x20
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  QuestRandomGroupMaster_o *v194; // x20
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  QuestConsumeItemMaster_o *v201; // x20
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  QuestMessageMaster_o *v208; // x20
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  UserQuestInfoMaster_o *v215; // x20
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  UserQuestRecordMaster_o *v222; // x20
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  ViewQuestInfoMaster_o *v229; // x20
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  ViewEnemyMaster_o *v236; // x20
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  ViewQuestEnemyInfoMaster_o *v243; // x20
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  BlankEarthSpotMaster_o *v250; // x20
  System_String_array **v251; // x2
  System_String_array **v252; // x3
  System_Boolean_array **v253; // x4
  System_Int32_array **v254; // x5
  System_Int32_array *v255; // x6
  System_Int32_array *v256; // x7
  BlankEarthSpotAddMaster_o *v257; // x20
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  SpotMaster_o *v264; // x20
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  SpotImageMaster_o *v271; // x20
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  SpotRoadMaster_o *v278; // x20
  System_String_array **v279; // x2
  System_String_array **v280; // x3
  System_Boolean_array **v281; // x4
  System_Int32_array **v282; // x5
  System_Int32_array *v283; // x6
  System_Int32_array *v284; // x7
  SpotPathMaster_o *v285; // x20
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  SpotAddMaster_o *v292; // x20
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  MapGimmickMaster_o *v299; // x20
  System_String_array **v300; // x2
  System_String_array **v301; // x3
  System_Boolean_array **v302; // x4
  System_Int32_array **v303; // x5
  System_Int32_array *v304; // x6
  System_Int32_array *v305; // x7
  GiftMaster_o *v306; // x20
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  GiftAddMaster_o *v313; // x20
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  ShopMaster_o *v320; // x20
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  StoneShopMaster_o *v327; // x20
  System_String_array **v328; // x2
  System_String_array **v329; // x3
  System_Boolean_array **v330; // x4
  System_Int32_array **v331; // x5
  System_Int32_array *v332; // x6
  System_Int32_array *v333; // x7
  BankShopMaster_o *v334; // x20
  System_String_array **v335; // x2
  System_String_array **v336; // x3
  System_Boolean_array **v337; // x4
  System_Int32_array **v338; // x5
  System_Int32_array *v339; // x6
  System_Int32_array *v340; // x7
  ShopScriptMaster_o *v341; // x20
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  StageMaster_o *v348; // x20
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  ServantGroupMaster_o *v355; // x20
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  ServantLimitMaster_o *v362; // x20
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  ServantLimitAddMaster_o *v369; // x20
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  ServantSkillMaster_o *v376; // x20
  System_String_array **v377; // x2
  System_String_array **v378; // x3
  System_Boolean_array **v379; // x4
  System_Int32_array **v380; // x5
  System_Int32_array *v381; // x6
  System_Int32_array *v382; // x7
  ServantPassiveSkillMaster_o *v383; // x20
  System_String_array **v384; // x2
  System_String_array **v385; // x3
  System_Boolean_array **v386; // x4
  System_Int32_array **v387; // x5
  System_Int32_array *v388; // x6
  System_Int32_array *v389; // x7
  BgmMaster_o *v390; // x20
  System_String_array **v391; // x2
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  ServantScriptMaster_o *v397; // x20
  System_String_array **v398; // x2
  System_String_array **v399; // x3
  System_Boolean_array **v400; // x4
  System_Int32_array **v401; // x5
  System_Int32_array *v402; // x6
  System_Int32_array *v403; // x7
  NewsMaster_o *v404; // x20
  System_String_array **v405; // x2
  System_String_array **v406; // x3
  System_Boolean_array **v407; // x4
  System_Int32_array **v408; // x5
  System_Int32_array *v409; // x6
  System_Int32_array *v410; // x7
  TelopMaster_o *v411; // x20
  System_String_array **v412; // x2
  System_String_array **v413; // x3
  System_Boolean_array **v414; // x4
  System_Int32_array **v415; // x5
  System_Int32_array *v416; // x6
  System_Int32_array *v417; // x7
  UserExpMaster_o *v418; // x20
  System_String_array **v419; // x2
  System_String_array **v420; // x3
  System_Boolean_array **v421; // x4
  System_Int32_array **v422; // x5
  System_Int32_array *v423; // x6
  System_Int32_array *v424; // x7
  TreasureDvcMaster_o *v425; // x20
  System_String_array **v426; // x2
  System_String_array **v427; // x3
  System_Boolean_array **v428; // x4
  System_Int32_array **v429; // x5
  System_Int32_array *v430; // x6
  System_Int32_array *v431; // x7
  ServantTreasureDvcMaster_o *v432; // x20
  System_String_array **v433; // x2
  System_String_array **v434; // x3
  System_Boolean_array **v435; // x4
  System_Int32_array **v436; // x5
  System_Int32_array *v437; // x6
  System_Int32_array *v438; // x7
  SkillMaster_o *v439; // x20
  System_String_array **v440; // x2
  System_String_array **v441; // x3
  System_Boolean_array **v442; // x4
  System_Int32_array **v443; // x5
  System_Int32_array *v444; // x6
  System_Int32_array *v445; // x7
  SkillLvMaster_o *v446; // x20
  System_String_array **v447; // x2
  System_String_array **v448; // x3
  System_Boolean_array **v449; // x4
  System_Int32_array **v450; // x5
  System_Int32_array *v451; // x6
  System_Int32_array *v452; // x7
  SkillDetailMaster_o *v453; // x20
  System_String_array **v454; // x2
  System_String_array **v455; // x3
  System_Boolean_array **v456; // x4
  System_Int32_array **v457; // x5
  System_Int32_array *v458; // x6
  System_Int32_array *v459; // x7
  CommandSpellMaster_o *v460; // x20
  System_String_array **v461; // x2
  System_String_array **v462; // x3
  System_Boolean_array **v463; // x4
  System_Int32_array **v464; // x5
  System_Int32_array *v465; // x6
  System_Int32_array *v466; // x7
  EquipMaster_o *v467; // x20
  System_String_array **v468; // x2
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  EquipExpMaster_o *v474; // x20
  System_String_array **v475; // x2
  System_String_array **v476; // x3
  System_Boolean_array **v477; // x4
  System_Int32_array **v478; // x5
  System_Int32_array *v479; // x6
  System_Int32_array *v480; // x7
  EquipSkillMaster_o *v481; // x20
  System_String_array **v482; // x2
  System_String_array **v483; // x3
  System_Boolean_array **v484; // x4
  System_Int32_array **v485; // x5
  System_Int32_array *v486; // x6
  System_Int32_array *v487; // x7
  SubEquipMaster_o *v488; // x20
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  AccessaryMaster_o *v495; // x20
  System_String_array **v496; // x2
  System_String_array **v497; // x3
  System_Boolean_array **v498; // x4
  System_Int32_array **v499; // x5
  System_Int32_array *v500; // x6
  System_Int32_array *v501; // x7
  UserPresentBoxMaster_o *v502; // x20
  System_String_array **v503; // x2
  System_String_array **v504; // x3
  System_Boolean_array **v505; // x4
  System_Int32_array **v506; // x5
  System_Int32_array *v507; // x6
  System_Int32_array *v508; // x7
  UserDeckMaster_o *v509; // x20
  System_String_array **v510; // x2
  System_String_array **v511; // x3
  System_Boolean_array **v512; // x4
  System_Int32_array **v513; // x5
  System_Int32_array *v514; // x6
  System_Int32_array *v515; // x7
  UserSubEquipMaster_o *v516; // x20
  System_String_array **v517; // x2
  System_String_array **v518; // x3
  System_Boolean_array **v519; // x4
  System_Int32_array **v520; // x5
  System_Int32_array *v521; // x6
  System_Int32_array *v522; // x7
  GachaMaster_o *v523; // x20
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  GachaImageMaster_o *v530; // x20
  System_String_array **v531; // x2
  System_String_array **v532; // x3
  System_Boolean_array **v533; // x4
  System_Int32_array **v534; // x5
  System_Int32_array *v535; // x6
  System_Int32_array *v536; // x7
  UserGachaMaster_o *v537; // x20
  System_String_array **v538; // x2
  System_String_array **v539; // x3
  System_Boolean_array **v540; // x4
  System_Int32_array **v541; // x5
  System_Int32_array *v542; // x6
  System_Int32_array *v543; // x7
  UserEquipMaster_o *v544; // x20
  System_String_array **v545; // x2
  System_String_array **v546; // x3
  System_Boolean_array **v547; // x4
  System_Int32_array **v548; // x5
  System_Int32_array *v549; // x6
  System_Int32_array *v550; // x7
  UserServantCollectionMaster_o *v551; // x20
  System_String_array **v552; // x2
  System_String_array **v553; // x3
  System_Boolean_array **v554; // x4
  System_Int32_array **v555; // x5
  System_Int32_array *v556; // x6
  System_Int32_array *v557; // x7
  FriendshipMaster_o *v558; // x20
  System_String_array **v559; // x2
  System_String_array **v560; // x3
  System_Boolean_array **v561; // x4
  System_Int32_array **v562; // x5
  System_Int32_array *v563; // x6
  System_Int32_array *v564; // x7
  GachaTicketMaster_o *v565; // x20
  System_String_array **v566; // x2
  System_String_array **v567; // x3
  System_Boolean_array **v568; // x4
  System_Int32_array **v569; // x5
  System_Int32_array *v570; // x6
  System_Int32_array *v571; // x7
  UserFormationMaster_o *v572; // x20
  System_String_array **v573; // x2
  System_String_array **v574; // x3
  System_Boolean_array **v575; // x4
  System_Int32_array **v576; // x5
  System_Int32_array *v577; // x6
  System_Int32_array *v578; // x7
  FunctionMaster_o *v579; // x20
  System_String_array **v580; // x2
  System_String_array **v581; // x3
  System_Boolean_array **v582; // x4
  System_Int32_array **v583; // x5
  System_Int32_array *v584; // x6
  System_Int32_array *v585; // x7
  BuffMaster_o *v586; // x20
  System_String_array **v587; // x2
  System_String_array **v588; // x3
  System_Boolean_array **v589; // x4
  System_Int32_array **v590; // x5
  System_Int32_array *v591; // x6
  System_Int32_array *v592; // x7
  GachaReleaseMaster_o *v593; // x20
  System_String_array **v594; // x2
  System_String_array **v595; // x3
  System_Boolean_array **v596; // x4
  System_Int32_array **v597; // x5
  System_Int32_array *v598; // x6
  System_Int32_array *v599; // x7
  CombineQpMaster_o *v600; // x20
  System_String_array **v601; // x2
  System_String_array **v602; // x3
  System_Boolean_array **v603; // x4
  System_Int32_array **v604; // x5
  System_Int32_array *v605; // x6
  System_Int32_array *v606; // x7
  CombineMaterialMaster_o *v607; // x20
  System_String_array **v608; // x2
  System_String_array **v609; // x3
  System_Boolean_array **v610; // x4
  System_Int32_array **v611; // x5
  System_Int32_array *v612; // x6
  System_Int32_array *v613; // x7
  EventCombineMaster_o *v614; // x20
  System_String_array **v615; // x2
  System_String_array **v616; // x3
  System_Boolean_array **v617; // x4
  System_Int32_array **v618; // x5
  System_Int32_array *v619; // x6
  System_Int32_array *v620; // x7
  ServantExpMaster_o *v621; // x20
  System_String_array **v622; // x2
  System_String_array **v623; // x3
  System_Boolean_array **v624; // x4
  System_Int32_array **v625; // x5
  System_Int32_array *v626; // x6
  System_Int32_array *v627; // x7
  CombineSkillMaster_o *v628; // x20
  System_String_array **v629; // x2
  System_String_array **v630; // x3
  System_Boolean_array **v631; // x4
  System_Int32_array **v632; // x5
  System_Int32_array *v633; // x6
  System_Int32_array *v634; // x7
  CombineTdMaster_o *v635; // x20
  System_String_array **v636; // x2
  System_String_array **v637; // x3
  System_Boolean_array **v638; // x4
  System_Int32_array **v639; // x5
  System_Int32_array *v640; // x6
  System_Int32_array *v641; // x7
  EventQuestMaster_o *v642; // x20
  System_String_array **v643; // x2
  System_String_array **v644; // x3
  System_Boolean_array **v645; // x4
  System_Int32_array **v646; // x5
  System_Int32_array *v647; // x6
  System_Int32_array *v648; // x7
  EventCampaignMaster_o *v649; // x20
  System_String_array **v650; // x2
  System_String_array **v651; // x3
  System_Boolean_array **v652; // x4
  System_Int32_array **v653; // x5
  System_Int32_array *v654; // x6
  System_Int32_array *v655; // x7
  IllustratorMaster_o *v656; // x20
  System_String_array **v657; // x2
  System_String_array **v658; // x3
  System_Boolean_array **v659; // x4
  System_Int32_array **v660; // x5
  System_Int32_array *v661; // x6
  System_Int32_array *v662; // x7
  CvMaster_o *v663; // x20
  const MethodInfo *v664; // x1
  System_String_array **v665; // x2
  System_String_array **v666; // x3
  System_Boolean_array **v667; // x4
  System_Int32_array **v668; // x5
  System_Int32_array *v669; // x6
  System_Int32_array *v670; // x7
  TreasureDvcLvMaster_o *v671; // x20
  System_String_array **v672; // x2
  System_String_array **v673; // x3
  System_Boolean_array **v674; // x4
  System_Int32_array **v675; // x5
  System_Int32_array *v676; // x6
  System_Int32_array *v677; // x7
  TreasureDvcDetailMaster_o *v678; // x20
  System_String_array **v679; // x2
  System_String_array **v680; // x3
  System_Boolean_array **v681; // x4
  System_Int32_array **v682; // x5
  System_Int32_array *v683; // x6
  System_Int32_array *v684; // x7
  UserFollowerMaster_o *v685; // x20
  System_String_array **v686; // x2
  System_String_array **v687; // x3
  System_Boolean_array **v688; // x4
  System_Int32_array **v689; // x5
  System_Int32_array *v690; // x6
  System_Int32_array *v691; // x7
  NpcFollowerMaster_o *v692; // x20
  System_String_array **v693; // x2
  System_String_array **v694; // x3
  System_Boolean_array **v695; // x4
  System_Int32_array **v696; // x5
  System_Int32_array *v697; // x6
  System_Int32_array *v698; // x7
  NpcServantFollowerMaster_o *v699; // x20
  System_String_array **v700; // x2
  System_String_array **v701; // x3
  System_Boolean_array **v702; // x4
  System_Int32_array **v703; // x5
  System_Int32_array *v704; // x6
  System_Int32_array *v705; // x7
  UserEventMaster_o *v706; // x20
  System_String_array **v707; // x2
  System_String_array **v708; // x3
  System_Boolean_array **v709; // x4
  System_Int32_array **v710; // x5
  System_Int32_array *v711; // x6
  System_Int32_array *v712; // x7
  UserShopMaster_o *v713; // x20
  System_String_array **v714; // x2
  System_String_array **v715; // x3
  System_Boolean_array **v716; // x4
  System_Int32_array **v717; // x5
  System_Int32_array *v718; // x6
  System_Int32_array *v719; // x7
  UserContinueMaster_o *v720; // x20
  System_String_array **v721; // x2
  System_String_array **v722; // x3
  System_Boolean_array **v723; // x4
  System_Int32_array **v724; // x5
  System_Int32_array *v725; // x6
  System_Int32_array *v726; // x7
  ConstantMaster_o *v727; // x20
  System_String_array **v728; // x2
  System_String_array **v729; // x3
  System_Boolean_array **v730; // x4
  System_Int32_array **v731; // x5
  System_Int32_array *v732; // x6
  System_Int32_array *v733; // x7
  ConstantLongMaster_o *v734; // x20
  System_String_array **v735; // x2
  System_String_array **v736; // x3
  System_Boolean_array **v737; // x4
  System_Int32_array **v738; // x5
  System_Int32_array *v739; // x6
  System_Int32_array *v740; // x7
  ConstantStrMaster_o *v741; // x20
  System_String_array **v742; // x2
  System_String_array **v743; // x3
  System_Boolean_array **v744; // x4
  System_Int32_array **v745; // x5
  System_Int32_array *v746; // x6
  System_Int32_array *v747; // x7
  AiMaster_o *v748; // x20
  System_String_array **v749; // x2
  System_String_array **v750; // x3
  System_Boolean_array **v751; // x4
  System_Int32_array **v752; // x5
  System_Int32_array *v753; // x6
  System_Int32_array *v754; // x7
  AiActMaster_o *v755; // x20
  System_String_array **v756; // x2
  System_String_array **v757; // x3
  System_Boolean_array **v758; // x4
  System_Int32_array **v759; // x5
  System_Int32_array *v760; // x6
  System_Int32_array *v761; // x7
  AttriRelationMaster_o *v762; // x20
  System_String_array **v763; // x2
  System_String_array **v764; // x3
  System_Boolean_array **v765; // x4
  System_Int32_array **v766; // x5
  System_Int32_array *v767; // x6
  System_Int32_array *v768; // x7
  ClassRelationMaster_o *v769; // x20
  System_String_array **v770; // x2
  System_String_array **v771; // x3
  System_Boolean_array **v772; // x4
  System_Int32_array **v773; // x5
  System_Int32_array *v774; // x6
  System_Int32_array *v775; // x7
  EffectMaster_o *v776; // x20
  System_String_array **v777; // x2
  System_String_array **v778; // x3
  System_Boolean_array **v779; // x4
  System_Int32_array **v780; // x5
  System_Int32_array *v781; // x6
  System_Int32_array *v782; // x7
  EquipImageMaster_o *v783; // x20
  System_String_array **v784; // x2
  System_String_array **v785; // x3
  System_Boolean_array **v786; // x4
  System_Int32_array **v787; // x5
  System_Int32_array *v788; // x6
  System_Int32_array *v789; // x7
  ServantVoiceMaster_o *v790; // x20
  System_String_array **v791; // x2
  System_String_array **v792; // x3
  System_Boolean_array **v793; // x4
  System_Int32_array **v794; // x5
  System_Int32_array *v795; // x6
  System_Int32_array *v796; // x7
  CombineLimitMaster_o *v797; // x20
  System_String_array **v798; // x2
  System_String_array **v799; // x3
  System_Boolean_array **v800; // x4
  System_Int32_array **v801; // x5
  System_Int32_array *v802; // x6
  System_Int32_array *v803; // x7
  CardMaster_o *v804; // x20
  System_String_array **v805; // x2
  System_String_array **v806; // x3
  System_Boolean_array **v807; // x4
  System_Int32_array **v808; // x5
  System_Int32_array *v809; // x6
  System_Int32_array *v810; // x7
  CombineQpSvtEquipMaster_o *v811; // x20
  System_String_array **v812; // x2
  System_String_array **v813; // x3
  System_Boolean_array **v814; // x4
  System_Int32_array **v815; // x5
  System_Int32_array *v816; // x6
  System_Int32_array *v817; // x7
  ServantRarityMaster_o *v818; // x20
  System_String_array **v819; // x2
  System_String_array **v820; // x3
  System_Boolean_array **v821; // x4
  System_Int32_array **v822; // x5
  System_Int32_array *v823; // x6
  System_Int32_array *v824; // x7
  SetItemMaster_o *v825; // x20
  System_String_array **v826; // x2
  System_String_array **v827; // x3
  System_Boolean_array **v828; // x4
  System_Int32_array **v829; // x5
  System_Int32_array *v830; // x6
  System_Int32_array *v831; // x7
  RecoverMaster_o *v832; // x20
  System_String_array **v833; // x2
  System_String_array **v834; // x3
  System_Boolean_array **v835; // x4
  System_Int32_array **v836; // x5
  System_Int32_array *v837; // x6
  System_Int32_array *v838; // x7
  BannerMaster_o *v839; // x20
  System_String_array **v840; // x2
  System_String_array **v841; // x3
  System_Boolean_array **v842; // x4
  System_Int32_array **v843; // x5
  System_Int32_array *v844; // x6
  System_Int32_array *v845; // x7
  ShopReleaseMaster_o *v846; // x20
  System_String_array **v847; // x2
  System_String_array **v848; // x3
  System_Boolean_array **v849; // x4
  System_Int32_array **v850; // x5
  System_Int32_array *v851; // x6
  System_Int32_array *v852; // x7
  EventRewardMaster_o *v853; // x20
  System_String_array **v854; // x2
  System_String_array **v855; // x3
  System_Boolean_array **v856; // x4
  System_Int32_array **v857; // x5
  System_Int32_array *v858; // x6
  System_Int32_array *v859; // x7
  EventDetailMaster_o *v860; // x20
  System_String_array **v861; // x2
  System_String_array **v862; // x3
  System_Boolean_array **v863; // x4
  System_Int32_array **v864; // x5
  System_Int32_array *v865; // x6
  System_Int32_array *v866; // x7
  EventServantMaster_o *v867; // x20
  System_String_array **v868; // x2
  System_String_array **v869; // x3
  System_Boolean_array **v870; // x4
  System_Int32_array **v871; // x5
  System_Int32_array *v872; // x6
  System_Int32_array *v873; // x7
  BoxGachaMaster_o *v874; // x20
  System_String_array **v875; // x2
  System_String_array **v876; // x3
  System_Boolean_array **v877; // x4
  System_Int32_array **v878; // x5
  System_Int32_array *v879; // x6
  System_Int32_array *v880; // x7
  BoxGachaBaseMaster_o *v881; // x20
  System_String_array **v882; // x2
  System_String_array **v883; // x3
  System_Boolean_array **v884; // x4
  System_Int32_array **v885; // x5
  System_Int32_array *v886; // x6
  System_Int32_array *v887; // x7
  BoxGachaTalkMaster_o *v888; // x20
  System_String_array **v889; // x2
  System_String_array **v890; // x3
  System_Boolean_array **v891; // x4
  System_Int32_array **v892; // x5
  System_Int32_array *v893; // x6
  System_Int32_array *v894; // x7
  UserBoxGachaMaster_o *v895; // x20
  System_String_array **v896; // x2
  System_String_array **v897; // x3
  System_Boolean_array **v898; // x4
  System_Int32_array **v899; // x5
  System_Int32_array *v900; // x6
  System_Int32_array *v901; // x7
  BoxGachaHistoryMaster_o *v902; // x20
  System_String_array **v903; // x2
  System_String_array **v904; // x3
  System_Boolean_array **v905; // x4
  System_Int32_array **v906; // x5
  System_Int32_array *v907; // x6
  System_Int32_array *v908; // x7
  BattleBgMaster_o *v909; // x20
  System_String_array **v910; // x2
  System_String_array **v911; // x3
  System_Boolean_array **v912; // x4
  System_Int32_array **v913; // x5
  System_Int32_array *v914; // x6
  System_Int32_array *v915; // x7
  TipsBattleMaster_o *v916; // x20
  System_String_array **v917; // x2
  System_String_array **v918; // x3
  System_Boolean_array **v919; // x4
  System_Int32_array **v920; // x5
  System_Int32_array *v921; // x6
  System_Int32_array *v922; // x7
  UserLoginMaster_o *v923; // x20
  System_String_array **v924; // x2
  System_String_array **v925; // x3
  System_Boolean_array **v926; // x4
  System_Int32_array **v927; // x5
  System_Int32_array *v928; // x6
  System_Int32_array *v929; // x7
  VoiceMaster_o *v930; // x20
  System_String_array **v931; // x2
  System_String_array **v932; // x3
  System_Boolean_array **v933; // x4
  System_Int32_array **v934; // x5
  System_Int32_array *v935; // x6
  System_Int32_array *v936; // x7
  EventRewardExtraMaster_o *v937; // x20
  System_String_array **v938; // x2
  System_String_array **v939; // x3
  System_Boolean_array **v940; // x4
  System_Int32_array **v941; // x5
  System_Int32_array *v942; // x6
  System_Int32_array *v943; // x7
  EventMissionMaster_o *v944; // x20
  System_String_array **v945; // x2
  System_String_array **v946; // x3
  System_Boolean_array **v947; // x4
  System_Int32_array **v948; // x5
  System_Int32_array *v949; // x6
  System_Int32_array *v950; // x7
  EventMissionActionMaster_o *v951; // x20
  System_String_array **v952; // x2
  System_String_array **v953; // x3
  System_Boolean_array **v954; // x4
  System_Int32_array **v955; // x5
  System_Int32_array *v956; // x6
  System_Int32_array *v957; // x7
  EventMissionActionAddMaster_o *v958; // x20
  System_String_array **v959; // x2
  System_String_array **v960; // x3
  System_Boolean_array **v961; // x4
  System_Int32_array **v962; // x5
  System_Int32_array *v963; // x6
  System_Int32_array *v964; // x7
  EventMissionConditionMaster_o *v965; // x20
  System_String_array **v966; // x2
  System_String_array **v967; // x3
  System_Boolean_array **v968; // x4
  System_Int32_array **v969; // x5
  System_Int32_array *v970; // x6
  System_Int32_array *v971; // x7
  EventMissionCondDetailMaster_o *v972; // x20
  System_String_array **v973; // x2
  System_String_array **v974; // x3
  System_Boolean_array **v975; // x4
  System_Int32_array **v976; // x5
  System_Int32_array *v977; // x6
  System_Int32_array *v978; // x7
  EventMissionAddMaster_o *v979; // x20
  System_String_array **v980; // x2
  System_String_array **v981; // x3
  System_Boolean_array **v982; // x4
  System_Int32_array **v983; // x5
  System_Int32_array *v984; // x6
  System_Int32_array *v985; // x7
  CompleteMissionMaster_o *v986; // x20
  System_String_array **v987; // x2
  System_String_array **v988; // x3
  System_Boolean_array **v989; // x4
  System_Int32_array **v990; // x5
  System_Int32_array *v991; // x6
  System_Int32_array *v992; // x7
  EventRewardSetMaster_o *v993; // x20
  System_String_array **v994; // x2
  System_String_array **v995; // x3
  System_Boolean_array **v996; // x4
  System_Int32_array **v997; // x5
  System_Int32_array *v998; // x6
  System_Int32_array *v999; // x7
  UserEventMissionMaster_o *v1000; // x20
  System_String_array **v1001; // x2
  System_String_array **v1002; // x3
  System_Boolean_array **v1003; // x4
  System_Int32_array **v1004; // x5
  System_Int32_array *v1005; // x6
  System_Int32_array *v1006; // x7
  UserEventMissionCondDetailMaster_o *v1007; // x20
  System_String_array **v1008; // x2
  System_String_array **v1009; // x3
  System_Boolean_array **v1010; // x4
  System_Int32_array **v1011; // x5
  System_Int32_array *v1012; // x6
  System_Int32_array *v1013; // x7
  BoxGachaBaseDetailMaster_o *v1014; // x20
  System_String_array **v1015; // x2
  System_String_array **v1016; // x3
  System_Boolean_array **v1017; // x4
  System_Int32_array **v1018; // x5
  System_Int32_array *v1019; // x6
  System_Int32_array *v1020; // x7
  UserServantLeaderMaster_o *v1021; // x20
  System_String_array **v1022; // x2
  System_String_array **v1023; // x3
  System_Boolean_array **v1024; // x4
  System_Int32_array **v1025; // x5
  System_Int32_array *v1026; // x6
  System_Int32_array *v1027; // x7
  ClosedMessageMaster_o *v1028; // x20
  System_String_array **v1029; // x2
  System_String_array **v1030; // x3
  System_Boolean_array **v1031; // x4
  System_Int32_array **v1032; // x5
  System_Int32_array *v1033; // x6
  System_Int32_array *v1034; // x7
  FunctionGroupMaster_o *v1035; // x20
  System_String_array **v1036; // x2
  System_String_array **v1037; // x3
  System_Boolean_array **v1038; // x4
  System_Int32_array **v1039; // x5
  System_Int32_array *v1040; // x6
  System_Int32_array *v1041; // x7
  EventRaidMaster_o *v1042; // x20
  System_String_array **v1043; // x2
  System_String_array **v1044; // x3
  System_Boolean_array **v1045; // x4
  System_Int32_array **v1046; // x5
  System_Int32_array *v1047; // x6
  System_Int32_array *v1048; // x7
  TotalEventRaidMaster_o *v1049; // x20
  __int64 v1050; // x0
  System_String_array **v1051; // x2
  System_String_array **v1052; // x3
  System_Boolean_array **v1053; // x4
  System_Int32_array **v1054; // x5
  System_Int32_array *v1055; // x6
  System_Int32_array *v1056; // x7
  UserEventRaidMaster_o *v1057; // x20
  System_String_array **v1058; // x2
  System_String_array **v1059; // x3
  System_Boolean_array **v1060; // x4
  System_Int32_array **v1061; // x5
  System_Int32_array *v1062; // x6
  System_Int32_array *v1063; // x7
  EventPointMaster_o *v1064; // x20
  System_String_array **v1065; // x2
  System_String_array **v1066; // x3
  System_Boolean_array **v1067; // x4
  System_Int32_array **v1068; // x5
  System_Int32_array *v1069; // x6
  System_Int32_array *v1070; // x7
  EventPointGroupMaster_o *v1071; // x20
  System_String_array **v1072; // x2
  System_String_array **v1073; // x3
  System_Boolean_array **v1074; // x4
  System_Int32_array **v1075; // x5
  System_Int32_array *v1076; // x6
  System_Int32_array *v1077; // x7
  TotalEventPointMaster_o *v1078; // x20
  System_String_array **v1079; // x2
  System_String_array **v1080; // x3
  System_Boolean_array **v1081; // x4
  System_Int32_array **v1082; // x5
  System_Int32_array *v1083; // x6
  System_Int32_array *v1084; // x7
  UserEventPointMaster_o *v1085; // x20
  System_String_array **v1086; // x2
  System_String_array **v1087; // x3
  System_Boolean_array **v1088; // x4
  System_Int32_array **v1089; // x5
  System_Int32_array *v1090; // x6
  System_Int32_array *v1091; // x7
  EventPointUpperMaster_o *v1092; // x20
  System_String_array **v1093; // x2
  System_String_array **v1094; // x3
  System_Boolean_array **v1095; // x4
  System_Int32_array **v1096; // x5
  System_Int32_array *v1097; // x6
  System_Int32_array *v1098; // x7
  EventPointUpperReleaseMaster_o *v1099; // x20
  System_String_array **v1100; // x2
  System_String_array **v1101; // x3
  System_Boolean_array **v1102; // x4
  System_Int32_array **v1103; // x5
  System_Int32_array *v1104; // x6
  System_Int32_array *v1105; // x7
  EventRaceMaster_o *v1106; // x20
  System_String_array **v1107; // x2
  System_String_array **v1108; // x3
  System_Boolean_array **v1109; // x4
  System_Int32_array **v1110; // x5
  System_Int32_array *v1111; // x6
  System_Int32_array *v1112; // x7
  EventRaceResultMaster_o *v1113; // x20
  System_String_array **v1114; // x2
  System_String_array **v1115; // x3
  System_Boolean_array **v1116; // x4
  System_Int32_array **v1117; // x5
  System_Int32_array *v1118; // x6
  System_Int32_array *v1119; // x7
  QuestRacePointMaster_o *v1120; // x20
  System_String_array **v1121; // x2
  System_String_array **v1122; // x3
  System_Boolean_array **v1123; // x4
  System_Int32_array **v1124; // x5
  System_Int32_array *v1125; // x6
  System_Int32_array *v1126; // x7
  UserEventRaceMaster_o *v1127; // x20
  System_String_array **v1128; // x2
  System_String_array **v1129; // x3
  System_Boolean_array **v1130; // x4
  System_Int32_array **v1131; // x5
  System_Int32_array *v1132; // x6
  System_Int32_array *v1133; // x7
  EventScriptMaster_o *v1134; // x20
  System_String_array **v1135; // x2
  System_String_array **v1136; // x3
  System_Boolean_array **v1137; // x4
  System_Int32_array **v1138; // x5
  System_Int32_array *v1139; // x6
  System_Int32_array *v1140; // x7
  EventScriptReleaseMaster_o *v1141; // x20
  System_String_array **v1142; // x2
  System_String_array **v1143; // x3
  System_Boolean_array **v1144; // x4
  System_Int32_array **v1145; // x5
  System_Int32_array *v1146; // x6
  System_Int32_array *v1147; // x7
  UserPresentHistoryMaster_o *v1148; // x20
  System_String_array **v1149; // x2
  System_String_array **v1150; // x3
  System_Boolean_array **v1151; // x4
  System_Int32_array **v1152; // x5
  System_Int32_array *v1153; // x6
  System_Int32_array *v1154; // x7
  MstMissionMaster_o *v1155; // x20
  System_String_array **v1156; // x2
  System_String_array **v1157; // x3
  System_Boolean_array **v1158; // x4
  System_Int32_array **v1159; // x5
  System_Int32_array *v1160; // x6
  System_Int32_array *v1161; // x7
  ServantExceedMaster_o *v1162; // x20
  System_String_array **v1163; // x2
  System_String_array **v1164; // x3
  System_Boolean_array **v1165; // x4
  System_Int32_array **v1166; // x5
  System_Int32_array *v1167; // x6
  System_Int32_array *v1168; // x7
  PartialMaintenanceMaster_o *v1169; // x20
  System_String_array **v1170; // x2
  System_String_array **v1171; // x3
  System_Boolean_array **v1172; // x4
  System_Int32_array **v1173; // x5
  System_Int32_array *v1174; // x6
  System_Int32_array *v1175; // x7
  GuideMaster_o *v1176; // x20
  System_String_array **v1177; // x2
  System_String_array **v1178; // x3
  System_Boolean_array **v1179; // x4
  System_Int32_array **v1180; // x5
  System_Int32_array *v1181; // x6
  System_Int32_array *v1182; // x7
  MstMissionDisplayInfoMaster_o *v1183; // x20
  System_String_array **v1184; // x2
  System_String_array **v1185; // x3
  System_Boolean_array **v1186; // x4
  System_Int32_array **v1187; // x5
  System_Int32_array *v1188; // x6
  System_Int32_array *v1189; // x7
  GachaGroupMaster_o *v1190; // x20
  System_String_array **v1191; // x2
  System_String_array **v1192; // x3
  System_Boolean_array **v1193; // x4
  System_Int32_array **v1194; // x5
  System_Int32_array *v1195; // x6
  System_Int32_array *v1196; // x7
  QuestResetMaster_o *v1197; // x20
  System_String_array **v1198; // x2
  System_String_array **v1199; // x3
  System_Boolean_array **v1200; // x4
  System_Int32_array **v1201; // x5
  System_Int32_array *v1202; // x6
  System_Int32_array *v1203; // x7
  WarAddMaster_o *v1204; // x20
  System_String_array **v1205; // x2
  System_String_array **v1206; // x3
  System_Boolean_array **v1207; // x4
  System_Int32_array **v1208; // x5
  System_Int32_array *v1209; // x6
  System_Int32_array *v1210; // x7
  EventItemDisplayMaster_o *v1211; // x20
  System_String_array **v1212; // x2
  System_String_array **v1213; // x3
  System_Boolean_array **v1214; // x4
  System_Int32_array **v1215; // x5
  System_Int32_array *v1216; // x6
  System_Int32_array *v1217; // x7
  EventItemDisplayGroupMaster_o *v1218; // x20
  System_String_array **v1219; // x2
  System_String_array **v1220; // x3
  System_Boolean_array **v1221; // x4
  System_Int32_array **v1222; // x5
  System_Int32_array *v1223; // x6
  System_Int32_array *v1224; // x7
  EventItemDisplayReleaseMaster_o *v1225; // x20
  System_String_array **v1226; // x2
  System_String_array **v1227; // x3
  System_Boolean_array **v1228; // x4
  System_Int32_array **v1229; // x5
  System_Int32_array *v1230; // x6
  System_Int32_array *v1231; // x7
  EventTutorialMaster_o *v1232; // x20
  System_String_array **v1233; // x2
  System_String_array **v1234; // x3
  System_Boolean_array **v1235; // x4
  System_Int32_array **v1236; // x5
  System_Int32_array *v1237; // x6
  System_Int32_array *v1238; // x7
  EventTutorialCondMaster_o *v1239; // x20
  System_String_array **v1240; // x2
  System_String_array **v1241; // x3
  System_Boolean_array **v1242; // x4
  System_Int32_array **v1243; // x5
  System_Int32_array *v1244; // x6
  System_Int32_array *v1245; // x7
  __int64 v1246; // x0
  __int64 v1247; // x0
  __int64 v1248; // x0
  __int64 v1249; // x0
  __int64 v1250; // x0
  __int64 v1251; // x0

  if ( (byte_4353131 & 1) == 0 )
  {
    sub_B70694(&AccessaryMaster_TypeInfo);
    sub_B70694(&AdCheckPointMaster_TypeInfo);
    sub_B70694(&AiActMaster_TypeInfo);
    sub_B70694(&AiFieldMaster_TypeInfo);
    sub_B70694(&AiMaster_TypeInfo);
    sub_B70694(&AreaMaster_TypeInfo);
    sub_B70694(&AssistMaster_TypeInfo);
    sub_B70694(&AttriMaster_TypeInfo);
    sub_B70694(&AttriRelationMaster_TypeInfo);
    sub_B70694(&AuraEffectMaster_TypeInfo);
    sub_B70694(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_B70694(&BankShopMaster_TypeInfo);
    sub_B70694(&BannerAddMaster_TypeInfo);
    sub_B70694(&BannerMaster_TypeInfo);
    sub_B70694(&BattleBgMaster_TypeInfo);
    sub_B70694(&BattleMasterImageMaster_TypeInfo);
    sub_B70694(&BattleMaster_TypeInfo);
    sub_B70694(&BattleMessageGroupMaster_TypeInfo);
    sub_B70694(&BattleMessageMaster_TypeInfo);
    sub_B70694(&BeforeBirthDayMaster_TypeInfo);
    sub_B70694(&BgmMaster_TypeInfo);
    sub_B70694(&BgmReleaseMaster_TypeInfo);
    sub_B70694(&BlankEarthGimmickMaster_TypeInfo);
    sub_B70694(&BlankEarthSpotAddMaster_TypeInfo);
    sub_B70694(&BlankEarthSpotMaster_TypeInfo);
    sub_B70694(&BlankEarthSpotNavimenuMaster_TypeInfo);
    sub_B70694(&BoardMessageMaster_TypeInfo);
    sub_B70694(&BoardMessageReleaseMaster_TypeInfo);
    sub_B70694(&BoostMaster_TypeInfo);
    sub_B70694(&BoxGachaBaseDetailMaster_TypeInfo);
    sub_B70694(&BoxGachaBaseMaster_TypeInfo);
    sub_B70694(&BoxGachaHistoryMaster_TypeInfo);
    sub_B70694(&BoxGachaMaster_TypeInfo);
    sub_B70694(&BoxGachaTalkMaster_TypeInfo);
    sub_B70694(&BuffConvertMaster_TypeInfo);
    sub_B70694(&BuffMaster_TypeInfo);
    sub_B70694(&BuffTypeDetailMaster_TypeInfo);
    sub_B70694(&CampaignInfoMaster_TypeInfo);
    sub_B70694(&CardMaster_TypeInfo);
    sub_B70694(&ClassBoardBaseMaster_TypeInfo);
    sub_B70694(&ClassBoardClassMaster_TypeInfo);
    sub_B70694(&ClassBoardCommandSpellMaster_TypeInfo);
    sub_B70694(&ClassBoardLineMaster_TypeInfo);
    sub_B70694(&ClassBoardLockMaster_TypeInfo);
    sub_B70694(&ClassBoardSquareMaster_TypeInfo);
    sub_B70694(&ClassRelationMaster_TypeInfo);
    sub_B70694(&ClassRelationOverwriteMaster_TypeInfo);
    sub_B70694(&ClosedMessageMaster_TypeInfo);
    sub_B70694(&CombineAppendPassiveSkillMaster_TypeInfo);
    sub_B70694(&CombineCostumeMaster_TypeInfo);
    sub_B70694(&CombineLimitGiftMaster_TypeInfo);
    sub_B70694(&CombineLimitMaster_TypeInfo);
    sub_B70694(&CombineLimitReleaseMaster_TypeInfo);
    sub_B70694(&CombineMaster_TypeInfo);
    sub_B70694(&CombineMaterialMaster_TypeInfo);
    sub_B70694(&CombineQpMaster_TypeInfo);
    sub_B70694(&CombineQpSvtEquipMaster_TypeInfo);
    sub_B70694(&CombineSkillMaster_TypeInfo);
    sub_B70694(&CombineTdMaster_TypeInfo);
    sub_B70694(&CommandCardRankParamMaster_TypeInfo);
    sub_B70694(&CommandCodeCommentMaster_TypeInfo);
    sub_B70694(&CommandCodeMaster_TypeInfo);
    sub_B70694(&CommandCodeSkillMaster_TypeInfo);
    sub_B70694(&CommandCodeSkillReleaseMaster_TypeInfo);
    sub_B70694(&CommandSpellMaster_TypeInfo);
    sub_B70694(&CommonConsumeMaster_TypeInfo);
    sub_B70694(&CommonReleaseMaster_TypeInfo);
    sub_B70694(&CommonRestrictionMaster_TypeInfo);
    sub_B70694(&CompleteMissionMaster_TypeInfo);
    sub_B70694(&ConstantLongMaster_TypeInfo);
    sub_B70694(&ConstantMaster_TypeInfo);
    sub_B70694(&ConstantStrMaster_TypeInfo);
    sub_B70694(&CvMaster_TypeInfo);
    sub_B70694(&DataMasterBase___TypeInfo);
    sub_B70694(&DialogMessageMaster_TypeInfo);
    sub_B70694(&EffectMaster_TypeInfo);
    sub_B70694(&EnemyMstBattleMaster_TypeInfo);
    sub_B70694(&EnemyMstMaster_TypeInfo);
    sub_B70694(&EquipAddMaster_TypeInfo);
    sub_B70694(&EquipExpMaster_TypeInfo);
    sub_B70694(&EquipImageMaster_TypeInfo);
    sub_B70694(&EquipMaster_TypeInfo);
    sub_B70694(&EquipSkillMaster_TypeInfo);
    sub_B70694(&EventAddMaster_TypeInfo);
    sub_B70694(&EventBoardGameCellMaster_TypeInfo);
    sub_B70694(&EventBoardGameTokenMaster_TypeInfo);
    sub_B70694(&EventBoardGameTokenRewardMaster_TypeInfo);
    sub_B70694(&EventBonusFilterGroupInfoMaster_TypeInfo);
    sub_B70694(&EventBonusFilterGroupMemberMaster_TypeInfo);
    sub_B70694(&EventBonusFilterMaster_TypeInfo);
    sub_B70694(&EventBoostItemUsedMaster_TypeInfo);
    sub_B70694(&EventBossStatusUiMaster_TypeInfo);
    sub_B70694(&EventBuddyPointMaster_TypeInfo);
    sub_B70694(&EventBulletinBoardMaster_TypeInfo);
    sub_B70694(&EventBulletinBoardReleaseMaster_TypeInfo);
    sub_B70694(&EventCampaignMaster_TypeInfo);
    sub_B70694(&EventCampaignReleaseMaster_TypeInfo);
    sub_B70694(&EventCombineCostumeMaster_TypeInfo);
    sub_B70694(&EventCombineMaster_TypeInfo);
    sub_B70694(&EventCommandAssistMaster_TypeInfo);
    sub_B70694(&EventConquestRewardMaster_TypeInfo);
    sub_B70694(&EventCooltimeRewardMaster_TypeInfo);
    sub_B70694(&EventDataLostBattleMaster_TypeInfo);
    sub_B70694(&EventDataLostBattleResetMaster_TypeInfo);
    sub_B70694(&EventDetailMaster_TypeInfo);
    sub_B70694(&EventDiggingBlockMaster_TypeInfo);
    sub_B70694(&EventDiggingMaster_TypeInfo);
    sub_B70694(&EventDiggingRewardMaster_TypeInfo);
    sub_B70694(&EventEquipSkillReleaseMaster_TypeInfo);
    sub_B70694(&EventExpeditionMaster_TypeInfo);
    sub_B70694(&EventExpeditionPieceMaster_TypeInfo);
    sub_B70694(&EventFactoryMaster_TypeInfo);
    sub_B70694(&EventFatigueRecoveryMaster_TypeInfo);
    sub_B70694(&EventFilterMaster_TypeInfo);
    sub_B70694(&EventFortificationDetailMaster_TypeInfo);
    sub_B70694(&EventFortificationMaster_TypeInfo);
    sub_B70694(&EventFortificationSvtMaster_TypeInfo);
    sub_B70694(&EventGroupMaster_TypeInfo);
    sub_B70694(&EventItemDisplayGroupMaster_TypeInfo);
    sub_B70694(&EventItemDisplayMaster_TypeInfo);
    sub_B70694(&EventItemDisplayReleaseMaster_TypeInfo);
    sub_B70694(&EventLocationCampaignMaster_TypeInfo);
    sub_B70694(&EventMaster_TypeInfo);
    sub_B70694(&EventMissionActionAddMaster_TypeInfo);
    sub_B70694(&EventMissionActionMaster_TypeInfo);
    sub_B70694(&EventMissionAddMaster_TypeInfo);
    sub_B70694(&EventMissionCondDetailMaster_TypeInfo);
    sub_B70694(&EventMissionConditionMaster_TypeInfo);
    sub_B70694(&EventMissionGroupMaster_TypeInfo);
    sub_B70694(&EventMissionMaster_TypeInfo);
    sub_B70694(&EventMuralMaster_TypeInfo);
    sub_B70694(&EventPanelMapDetailMaster_TypeInfo);
    sub_B70694(&EventPanelMapMaster_TypeInfo);
    sub_B70694(&EventPanelScanMaster_TypeInfo);
    sub_B70694(&EventPanelSpotMaster_TypeInfo);
    sub_B70694(&EventPointActivityMaster_TypeInfo);
    sub_B70694(&EventPointBuffMaster_TypeInfo);
    sub_B70694(&EventPointGroupAddMaster_TypeInfo);
    sub_B70694(&EventPointGroupMaster_TypeInfo);
    sub_B70694(&EventPointMaster_TypeInfo);
    sub_B70694(&EventPointUpperMaster_TypeInfo);
    sub_B70694(&EventPointUpperReleaseMaster_TypeInfo);
    sub_B70694(&EventProgressValueMaster_TypeInfo);
    sub_B70694(&EventQuestCooltimeMaster_TypeInfo);
    sub_B70694(&EventQuestMaster_TypeInfo);
    sub_B70694(&EventRaceMaster_TypeInfo);
    sub_B70694(&EventRaceResultMaster_TypeInfo);
    sub_B70694(&EventRaidMaster_TypeInfo);
    sub_B70694(&EventRandomMissionMaster_TypeInfo);
    sub_B70694(&EventRecipeGiftMaster_TypeInfo);
    sub_B70694(&EventRecipeMaster_TypeInfo);
    sub_B70694(&EventRewardBgMaster_TypeInfo);
    sub_B70694(&EventRewardExtraMaster_TypeInfo);
    sub_B70694(&EventRewardGuideReleaseMaster_TypeInfo);
    sub_B70694(&EventRewardMaster_TypeInfo);
    sub_B70694(&EventRewardSceneMaster_TypeInfo);
    sub_B70694(&EventRewardSceneReleaseMaster_TypeInfo);
    sub_B70694(&EventRewardSetMaster_TypeInfo);
    sub_B70694(&EventScriptMaster_TypeInfo);
    sub_B70694(&EventScriptReleaseMaster_TypeInfo);
    sub_B70694(&EventServantFatigueMaster_TypeInfo);
    sub_B70694(&EventServantMaster_TypeInfo);
    sub_B70694(&EventServantPointRankMaster_TypeInfo);
    sub_B70694(&EventStatusMaster_TypeInfo);
    sub_B70694(&EventStatusQuestMaster_TypeInfo);
    sub_B70694(&EventSuperBossMaster_TypeInfo);
    sub_B70694(&EventTowerMaster_TypeInfo);
    sub_B70694(&EventTowerRewardMaster_TypeInfo);
    sub_B70694(&EventTutorialCondMaster_TypeInfo);
    sub_B70694(&EventTutorialMaster_TypeInfo);
    sub_B70694(&EventUiMaster_TypeInfo);
    sub_B70694(&EventUiReleaseMaster_TypeInfo);
    sub_B70694(&EventUiValueMaster_TypeInfo);
    sub_B70694(&EventVoicePlayMaster_TypeInfo);
    sub_B70694(&ExcludeMotionMaster_TypeInfo);
    sub_B70694(&FieldMotionMaster_TypeInfo);
    sub_B70694(&FriendshipMaster_TypeInfo);
    sub_B70694(&FriendshipQuestDialogInfoMaster_TypeInfo);
    sub_B70694(&FuncDispMaster_TypeInfo);
    sub_B70694(&FuncTypeDetailMaster_TypeInfo);
    sub_B70694(&FunctionCategoryMaster_TypeInfo);
    sub_B70694(&FunctionGroupMaster_TypeInfo);
    sub_B70694(&FunctionMaster_TypeInfo);
    sub_B70694(&GachaAppendMaster_TypeInfo);
    sub_B70694(&GachaBehaviorMaster_TypeInfo);
    sub_B70694(&GachaBonusSelectLineupMaster_TypeInfo);
    sub_B70694(&GachaBonusSelectMaster_TypeInfo);
    sub_B70694(&GachaDetailMaster_TypeInfo);
    sub_B70694(&GachaExtraGiftMaster_TypeInfo);
    sub_B70694(&GachaGroupMaster_TypeInfo);
    sub_B70694(&GachaImageMaster_TypeInfo);
    sub_B70694(&GachaMaster_TypeInfo);
    sub_B70694(&GachaReleaseMaster_TypeInfo);
    sub_B70694(&GachaStoryAdjustMaster_TypeInfo);
    sub_B70694(&GachaSubMaster_TypeInfo);
    sub_B70694(&GachaTicketMaster_TypeInfo);
    sub_B70694(&GiftAddMaster_TypeInfo);
    sub_B70694(&GiftDetailMaster_TypeInfo);
    sub_B70694(&GiftMaster_TypeInfo);
    sub_B70694(&GuideMaster_TypeInfo);
    sub_B70694(&HeelPortraitMaster_TypeInfo);
    sub_B70694(&IllustratorMaster_TypeInfo);
    sub_B70694(&IndividualityPersonalityMaster_TypeInfo);
    sub_B70694(&IndividualityPolicyMaster_TypeInfo);
    sub_B70694(&ItemMaster_TypeInfo);
    sub_B70694(&ItemSelectMaster_TypeInfo);
    sub_B70694(&LoginQuestMaster_TypeInfo);
    sub_B70694(&MapButtonMaster_TypeInfo);
    sub_B70694(&MapCondMaster_TypeInfo);
    sub_B70694(&MapGimmickLayerMaster_TypeInfo);
    sub_B70694(&MapGimmickMaster_TypeInfo);
    sub_B70694(&MapGimmickPathMaster_TypeInfo);
    sub_B70694(&MapGimmickPathReleaseMaster_TypeInfo);
    sub_B70694(&MapGimmickReleaseMaster_TypeInfo);
    sub_B70694(&MapLayerMaster_TypeInfo);
    sub_B70694(&MapMaster_TypeInfo);
    sub_B70694(&MapUpdateScheduleMaster_TypeInfo);
    sub_B70694(&MasterPhotoMaster_TypeInfo);
    sub_B70694(&MaterialFolderMaster_TypeInfo);
    sub_B70694(&MstMissionDisplayInfoMaster_TypeInfo);
    sub_B70694(&MstMissionMaster_TypeInfo);
    sub_B70694(&MyRoomAddMaster_TypeInfo);
    sub_B70694(&NewsMaster_TypeInfo);
    sub_B70694(&NotEndEventMissionFixMaster_TypeInfo);
    sub_B70694(&NpcFollowerMaster_TypeInfo);
    sub_B70694(&NpcFollowerReleaseMaster_TypeInfo);
    sub_B70694(&NpcServantEquipMaster_TypeInfo);
    sub_B70694(&NpcServantFollowerIndividualityMaster_TypeInfo);
    sub_B70694(&NpcServantFollowerMaster_TypeInfo);
    sub_B70694(&OpeningMovieMaster_TypeInfo);
    sub_B70694(&OtherUserGameMaster_TypeInfo);
    sub_B70694(&PartialMaintenanceMaster_TypeInfo);
    sub_B70694(&PickupUserFollowerMaster_TypeInfo);
    sub_B70694(&PrivilegeMaster_TypeInfo);
    sub_B70694(&QuestAddMaster_TypeInfo);
    sub_B70694(&QuestAutoOrganizationAdjustMaster_TypeInfo);
    sub_B70694(&QuestBehaviorMaster_TypeInfo);
    sub_B70694(&QuestConsumeItemMaster_TypeInfo);
    sub_B70694(&QuestDateRangeMaster_TypeInfo);
    sub_B70694(&QuestGroupMaster_TypeInfo);
    sub_B70694(&QuestHintMaster_TypeInfo);
    sub_B70694(&QuestMaster_TypeInfo);
    sub_B70694(&QuestMessageMaster_TypeInfo);
    sub_B70694(&QuestPhaseDetailAddMaster_TypeInfo);
    sub_B70694(&QuestPhaseDetailMaster_TypeInfo);
    sub_B70694(&QuestPhaseMaster_TypeInfo);
    sub_B70694(&QuestPhasePresentMaster_TypeInfo);
    sub_B70694(&QuestPickupMaster_TypeInfo);
    sub_B70694(&QuestRacePointMaster_TypeInfo);
    sub_B70694(&QuestRandomGroupMaster_TypeInfo);
    sub_B70694(&QuestReleaseMaster_TypeInfo);
    sub_B70694(&QuestReleaseOverwriteMaster_TypeInfo);
    sub_B70694(&QuestResetMaster_TypeInfo);
    sub_B70694(&QuestRestrictionInfoMaster_TypeInfo);
    sub_B70694(&QuestRestrictionMaster_TypeInfo);
    sub_B70694(&QuestScriptBranchMaterialMaster_TypeInfo);
    sub_B70694(&QuestScriptMaster_TypeInfo);
    sub_B70694(&QuestScriptMaterialNextMaster_TypeInfo);
    sub_B70694(&QuestScriptMaterialOverwriteMaster_TypeInfo);
    sub_B70694(&QuestScriptReleaseMaster_TypeInfo);
    sub_B70694(&QuestSpotReleaseMaster_TypeInfo);
    sub_B70694(&RecoverMaster_TypeInfo);
    sub_B70694(&ReprintStageMaster_TypeInfo);
    sub_B70694(&RestrictionBaseMaster_TypeInfo);
    sub_B70694(&RestrictionMaster_TypeInfo);
    sub_B70694(&RestrictionMessageMaster_TypeInfo);
    sub_B70694(&RestrictionSlotDetailMaster_TypeInfo);
    sub_B70694(&RestrictionSlotMaster_TypeInfo);
    sub_B70694(&RestrictionWholeMaster_TypeInfo);
    sub_B70694(&ServantAddMaster_TypeInfo);
    sub_B70694(&ServantAnimationOverwriteMaster_TypeInfo);
    sub_B70694(&ServantAppendPassiveSkillMaster_TypeInfo);
    sub_B70694(&ServantCardAddMaster_TypeInfo);
    sub_B70694(&ServantCardMaster_TypeInfo);
    sub_B70694(&ServantChangeMaster_TypeInfo);
    sub_B70694(&ServantClassMaster_TypeInfo);
    sub_B70694(&ServantCollectionMaster_TypeInfo);
    sub_B70694(&ServantCommandCodeUnlockMaster_TypeInfo);
    sub_B70694(&ServantCommentAddMaster_TypeInfo);
    sub_B70694(&ServantCommentMaster_TypeInfo);
    sub_B70694(&ServantCostumeMaster_TypeInfo);
    sub_B70694(&ServantCostumeReleaseMaster_TypeInfo);
    sub_B70694(&ServantExceedMaster_TypeInfo);
    sub_B70694(&ServantExpMaster_TypeInfo);
    sub_B70694(&ServantFilterMaster_TypeInfo);
    sub_B70694(&ServantFlagMaster_TypeInfo);
    sub_B70694(&ServantFlagReleaseMaster_TypeInfo);
    sub_B70694(&ServantGroupMaster_TypeInfo);
    sub_B70694(&ServantIndividualityMaster_TypeInfo);
    sub_B70694(&ServantLimitAddMaster_TypeInfo);
    sub_B70694(&ServantLimitImageMaster_TypeInfo);
    sub_B70694(&ServantLimitMaster_TypeInfo);
    sub_B70694(&ServantLimitSpoilerProtectionMaster_TypeInfo);
    sub_B70694(&ServantLvDetailMaster_TypeInfo);
    sub_B70694(&ServantMaster_TypeInfo);
    sub_B70694(&ServantMaterialFolderMaster_TypeInfo);
    sub_B70694(&ServantOverwriteMaster_TypeInfo);
    sub_B70694(&ServantPassiveSkillMaster_TypeInfo);
    sub_B70694(&ServantPassiveSkillReleaseMaster_TypeInfo);
    sub_B70694(&ServantPhotoMaster_TypeInfo);
    sub_B70694(&ServantProfileMaster_TypeInfo);
    sub_B70694(&ServantProfilePushMaster_TypeInfo);
    sub_B70694(&ServantRarityMaster_TypeInfo);
    sub_B70694(&ServantScriptAddMaster_TypeInfo);
    sub_B70694(&ServantScriptMaster_TypeInfo);
    sub_B70694(&ServantScriptMultipleMaster_TypeInfo);
    sub_B70694(&ServantSkillMaster_TypeInfo);
    sub_B70694(&ServantSkillReleaseMaster_TypeInfo);
    sub_B70694(&ServantTransformMaster_TypeInfo);
    sub_B70694(&ServantTreasureDeviceAddMaster_TypeInfo);
    sub_B70694(&ServantTreasureDeviceDamageMaster_TypeInfo);
    sub_B70694(&ServantTreasureDeviceReleaseMaster_TypeInfo);
    sub_B70694(&ServantTreasureDvcMaster_TypeInfo);
    sub_B70694(&ServantVoiceMaster_TypeInfo);
    sub_B70694(&ServantVoicePatternMaster_TypeInfo);
    sub_B70694(&ServantVoiceRelationMaster_TypeInfo);
    sub_B70694(&SetItemMaster_TypeInfo);
    sub_B70694(&ShopActionMaster_TypeInfo);
    sub_B70694(&ShopDetailMaster_TypeInfo);
    sub_B70694(&ShopGroupMaster_TypeInfo);
    sub_B70694(&ShopMaster_TypeInfo);
    sub_B70694(&ShopReleaseMaster_TypeInfo);
    sub_B70694(&ShopScriptMaster_TypeInfo);
    sub_B70694(&SkillAddMaster_TypeInfo);
    sub_B70694(&SkillDetailMaster_TypeInfo);
    sub_B70694(&SkillGroupMaster_TypeInfo);
    sub_B70694(&SkillGroupOverwriteMaster_TypeInfo);
    sub_B70694(&SkillIndividualityMaster_TypeInfo);
    sub_B70694(&SkillLvMaster_TypeInfo);
    sub_B70694(&SkillMaster_TypeInfo);
    sub_B70694(&SpotAddMaster_TypeInfo);
    sub_B70694(&SpotImageMaster_TypeInfo);
    sub_B70694(&SpotLayerMaster_TypeInfo);
    sub_B70694(&SpotMaster_TypeInfo);
    sub_B70694(&SpotPathMaster_TypeInfo);
    sub_B70694(&SpotRoadMaster_TypeInfo);
    sub_B70694(&StageMaster_TypeInfo);
    sub_B70694(&StatusEffectPosOverwriteMaster_TypeInfo);
    sub_B70694(&StoneShopMaster_TypeInfo);
    sub_B70694(&SubEquipMaster_TypeInfo);
    sub_B70694(&SvtAppendPassiveSkillUnlockMaster_TypeInfo);
    sub_B70694(&SvtCoinMaster_TypeInfo);
    sub_B70694(&SvtMaterialTdMaster_TypeInfo);
    sub_B70694(&SvtMultiPortraitMaster_TypeInfo);
    sub_B70694(&TblFriendMaster_TypeInfo);
    sub_B70694(&TblUserMaster_TypeInfo);
    sub_B70694(&TelopMaster_TypeInfo);
    sub_B70694(&TerminalOverwriteMaster_TypeInfo);
    sub_B70694(&TipsBattleMaster_TypeInfo);
    sub_B70694(&TotalBoxGachaMaster_TypeInfo);
    sub_B70694(&TotalEventPointMaster_TypeInfo);
    sub_B70694(&TotalEventRaceMaster_TypeInfo);
    sub_B70694(&TotalEventRaidMaster_TypeInfo);
    sub_B70694(&TotalLoginMaster_TypeInfo);
    sub_B70694(&TreasureBoxGiftMaster_TypeInfo);
    sub_B70694(&TreasureBoxMaster_TypeInfo);
    sub_B70694(&TreasureBoxTalkMaster_TypeInfo);
    sub_B70694(&TreasureDeviceSequenceWeightMaster_TypeInfo);
    sub_B70694(&TreasureDvcDetailMaster_TypeInfo);
    sub_B70694(&TreasureDvcLvMaster_TypeInfo);
    sub_B70694(&TreasureDvcMaster_TypeInfo);
    sub_B70694(&UpdateProfileDialogInfoMaster_TypeInfo);
    sub_B70694(&UserAccessaryMaster_TypeInfo);
    sub_B70694(&UserBlacklistMaster_TypeInfo);
    sub_B70694(&UserBoxGachaMaster_TypeInfo);
    sub_B70694(&UserClassBoardSquareMaster_TypeInfo);
    sub_B70694(&UserCoinRoomMaster_TypeInfo);
    sub_B70694(&UserCombineExpMaster_TypeInfo);
    sub_B70694(&UserCommandCodeCollectionMaster_TypeInfo);
    sub_B70694(&UserCommandCodeMaster_TypeInfo);
    sub_B70694(&UserContinueMaster_TypeInfo);
    sub_B70694(&UserDeckMaster_TypeInfo);
    sub_B70694(&UserDeleteReservationMaster_TypeInfo);
    sub_B70694(&UserEquipMaster_TypeInfo);
    sub_B70694(&UserEventAlloutBattleMaster_TypeInfo);
    sub_B70694(&UserEventBoardGameTokenMaster_TypeInfo);
    sub_B70694(&UserEventCooltimeRewardMaster_TypeInfo);
    sub_B70694(&UserEventDataLostMaster_TypeInfo);
    sub_B70694(&UserEventDeckMaster_TypeInfo);
    sub_B70694(&UserEventDiggingMaster_TypeInfo);
    sub_B70694(&UserEventExpeditionMaster_TypeInfo);
    sub_B70694(&UserEventFortificationMaster_TypeInfo);
    sub_B70694(&UserEventMapMaster_TypeInfo);
    sub_B70694(&UserEventMaster_TypeInfo);
    sub_B70694(&UserEventMissionCondDetailMaster_TypeInfo);
    sub_B70694(&UserEventMissionFixMaster_TypeInfo);
    sub_B70694(&UserEventMissionMaster_TypeInfo);
    sub_B70694(&UserEventPointMaster_TypeInfo);
    sub_B70694(&UserEventQuestCooltimeMaster_TypeInfo);
    sub_B70694(&UserEventRaceMaster_TypeInfo);
    sub_B70694(&UserEventRaidMaster_TypeInfo);
    sub_B70694(&UserEventRandomMissionMaster_TypeInfo);
    sub_B70694(&UserEventServantFatigueMaster_TypeInfo);
    sub_B70694(&UserEventServantPointMaster_TypeInfo);
    sub_B70694(&UserEventSpotMaster_TypeInfo);
    sub_B70694(&UserExchangeSvtMaster_TypeInfo);
    sub_B70694(&UserExpMaster_TypeInfo);
    sub_B70694(&UserFollowMaster_TypeInfo);
    sub_B70694(&UserFollowerMaster_TypeInfo);
    sub_B70694(&UserFormationMaster_TypeInfo);
    sub_B70694(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
    sub_B70694(&UserFriendRequestHistoryMaster_TypeInfo);
    sub_B70694(&UserGachaDrawLogMaster_TypeInfo);
    sub_B70694(&UserGachaExtraCountMaster_TypeInfo);
    sub_B70694(&UserGachaHistoryMaster_TypeInfo);
    sub_B70694(&UserGachaMaster_TypeInfo);
    sub_B70694(&UserGameCommonMaster_TypeInfo);
    sub_B70694(&UserGameMaster_TypeInfo);
    sub_B70694(&UserHeelPortraitMaster_TypeInfo);
    sub_B70694(&UserInterruptionQuestMaster_TypeInfo);
    sub_B70694(&UserItemMaster_TypeInfo);
    sub_B70694(&UserLoginMaster_TypeInfo);
    sub_B70694(&UserMaster_TypeInfo);
    sub_B70694(&UserNpcSvtRecordMaster_TypeInfo);
    sub_B70694(&UserPresentBoxMaster_TypeInfo);
    sub_B70694(&UserPresentHistoryMaster_TypeInfo);
    sub_B70694(&UserPrivilegeMaster_TypeInfo);
    sub_B70694(&UserQuestInfoMaster_TypeInfo);
    sub_B70694(&UserQuestMaster_TypeInfo);
    sub_B70694(&UserQuestRecordMaster_TypeInfo);
    sub_B70694(&UserQuestRouteMaster_TypeInfo);
    sub_B70694(&UserServantAppendPassiveSkillLvMaster_TypeInfo);
    sub_B70694(&UserServantAppendPassiveSkillMaster_TypeInfo);
    sub_B70694(&UserServantCollectionMaster_TypeInfo);
    sub_B70694(&UserServantCommandCardMaster_TypeInfo);
    sub_B70694(&UserServantCommandCodeMaster_TypeInfo);
    sub_B70694(&UserServantLeaderMaster_TypeInfo);
    sub_B70694(&UserServantMaster_TypeInfo);
    sub_B70694(&UserServantStorageMaster_TypeInfo);
    sub_B70694(&UserServantVoicePlayedMaster_TypeInfo);
    sub_B70694(&UserShopMaster_TypeInfo);
    sub_B70694(&UserSubEquipMaster_TypeInfo);
    sub_B70694(&UserSuperBossMaster_TypeInfo);
    sub_B70694(&UserSupportDeckMaster_TypeInfo);
    sub_B70694(&UserSvtCoinMaster_TypeInfo);
    sub_B70694(&ViewEnemyMaster_TypeInfo);
    sub_B70694(&ViewQuestEnemyInfoMaster_TypeInfo);
    sub_B70694(&ViewQuestInfoMaster_TypeInfo);
    sub_B70694(&ViewWaveEnemyMaster_TypeInfo);
    sub_B70694(&VoiceClosedMessageMaster_TypeInfo);
    sub_B70694(&VoiceCondMaster_TypeInfo);
    sub_B70694(&VoiceMaster_TypeInfo);
    sub_B70694(&VoiceMaterialCondMaster_TypeInfo);
    sub_B70694(&VoicePlayCondMaster_TypeInfo);
    sub_B70694(&VoicePlayGroupMaster_TypeInfo);
    sub_B70694(&VoiceReleaseMaster_TypeInfo);
    sub_B70694(&WarAddMaster_TypeInfo);
    sub_B70694(&WarBoardAIMaster_TypeInfo);
    sub_B70694(&WarBoardActionPointClassMaster_TypeInfo);
    sub_B70694(&WarBoardActionPointMaster_TypeInfo);
    sub_B70694(&WarBoardActionTrendConditionMaster_TypeInfo);
    sub_B70694(&WarBoardActionTrendGroupMaster_TypeInfo);
    sub_B70694(&WarBoardActionTrendMaster_TypeInfo);
    sub_B70694(&WarBoardCommonReleaseMaster_TypeInfo);
    sub_B70694(&WarBoardDataMaster_TypeInfo);
    sub_B70694(&WarBoardEffectMaster_TypeInfo);
    sub_B70694(&WarBoardEventMaster_TypeInfo);
    sub_B70694(&WarBoardEventScriptMaster_TypeInfo);
    sub_B70694(&WarBoardFutureActionTrendMaster_TypeInfo);
    sub_B70694(&WarBoardIndividualityClassMaster_TypeInfo);
    sub_B70694(&WarBoardItemMaster_TypeInfo);
    sub_B70694(&WarBoardMaster_TypeInfo);
    sub_B70694(&WarBoardMessageMaster_TypeInfo);
    sub_B70694(&WarBoardMessageScriptMaster_TypeInfo);
    sub_B70694(&WarBoardOnboardSkillMaster_TypeInfo);
    sub_B70694(&WarBoardPartySkillMaster_TypeInfo);
    sub_B70694(&WarBoardQuestMaster_TypeInfo);
    sub_B70694(&WarBoardRatingBaseMaster_TypeInfo);
    sub_B70694(&WarBoardRatingOffsetGroupMaster_TypeInfo);
    sub_B70694(&WarBoardRatingOffsetMaster_TypeInfo);
    sub_B70694(&WarBoardReinforcementsMaster_TypeInfo);
    sub_B70694(&WarBoardRoadMaster_TypeInfo);
    sub_B70694(&WarBoardSquareIndexGroupMaster_TypeInfo);
    sub_B70694(&WarBoardSquareMaster_TypeInfo);
    sub_B70694(&WarBoardStageBossMaster_TypeInfo);
    sub_B70694(&WarBoardStageDetailMaster_TypeInfo);
    sub_B70694(&WarBoardStageLayoutMaster_TypeInfo);
    sub_B70694(&WarBoardStageMaster_TypeInfo);
    sub_B70694(&WarBoardStageNpcMaster_TypeInfo);
    sub_B70694(&WarBoardStagePieceDetailMaster_TypeInfo);
    sub_B70694(&WarBoardStageReinforcementsMaster_TypeInfo);
    sub_B70694(&WarBoardStageWallMaster_TypeInfo);
    sub_B70694(&WarBoardTacticalTrendMaster_TypeInfo);
    sub_B70694(&WarBoardTreasureMaster_TypeInfo);
    sub_B70694(&WarGroupMaster_TypeInfo);
    sub_B70694(&WarMaster_TypeInfo);
    sub_B70694(&WarMessageMaster_TypeInfo);
    sub_B70694(&WarQuestSelectionMaster_TypeInfo);
    byte_4353131 = 1;
  }
  v1 = sub_B706AC(DataMasterBase___TypeInfo, 487LL);
  v2 = (ServantMaster_o *)sub_B70764(ServantMaster_TypeInfo);
  ServantMaster___ctor(v2, 0LL);
  if ( !v1 )
    sub_B7076C(v3, v4);
  if ( !v2 || (v3 = sub_B70754(v2, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
  {
    v11 = (_DWORD *)(v1 + 24);
    if ( !*(_DWORD *)(v1 + 24) )
      goto LABEL_538;
    *(_QWORD *)(v1 + 32) = v2;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 32), (System_Int32_array **)v2, v5, v6, v7, v8, v9, v10);
    v12 = (ServantClassMaster_o *)sub_B70764(ServantClassMaster_TypeInfo);
    ServantClassMaster___ctor(v12, 0LL);
    if ( v12 )
    {
      v3 = sub_B70754(v12, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 1u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 40) = v12;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 40), (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
    v19 = (ServantCommentMaster_o *)sub_B70764(ServantCommentMaster_TypeInfo);
    ServantCommentMaster___ctor(v19, 0LL);
    if ( v19 )
    {
      v3 = sub_B70754(v19, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 2u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 48) = v19;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 48), (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    v26 = (ServantProfileMaster_o *)sub_B70764(ServantProfileMaster_TypeInfo);
    ServantProfileMaster___ctor(v26, 0LL);
    if ( v26 )
    {
      v3 = sub_B70754(v26, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 3u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 56) = v26;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 56), (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v33 = (WarMaster_o *)sub_B70764(WarMaster_TypeInfo);
    WarMaster___ctor(v33, 0LL);
    if ( v33 )
    {
      v3 = sub_B70754(v33, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 4u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 64) = v33;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 64), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    v40 = (UserMaster_o *)sub_B70764(UserMaster_TypeInfo);
    UserMaster___ctor(v40, 0LL);
    if ( v40 )
    {
      v3 = sub_B70754(v40, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 5u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 72) = v40;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 72), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
    v47 = (UserGameMaster_o *)sub_B70764(UserGameMaster_TypeInfo);
    UserGameMaster___ctor(v47, 0LL);
    if ( v47 )
    {
      v3 = sub_B70754(v47, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 6u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 80) = v47;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 80), (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
    v54 = (TblUserMaster_o *)sub_B70764(TblUserMaster_TypeInfo);
    TblUserMaster___ctor(v54, 0LL);
    if ( v54 )
    {
      v3 = sub_B70754(v54, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 7u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 88) = v54;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 88), (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
    v61 = (UserItemMaster_o *)sub_B70764(UserItemMaster_TypeInfo);
    UserItemMaster___ctor(v61, 0LL);
    if ( v61 )
    {
      v3 = sub_B70754(v61, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 8u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 96) = v61;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 96), (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
    v68 = (UserServantMaster_o *)sub_B70764(UserServantMaster_TypeInfo);
    UserServantMaster___ctor(v68, 0LL);
    if ( v68 )
    {
      v3 = sub_B70754(v68, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 9u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 104) = v68;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 104), (System_Int32_array **)v68, v69, v70, v71, v72, v73, v74);
    v75 = (UserServantStorageMaster_o *)sub_B70764(UserServantStorageMaster_TypeInfo);
    UserServantStorageMaster___ctor(v75, 0LL);
    if ( v75 )
    {
      v3 = sub_B70754(v75, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xAu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 112) = v75;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 112), (System_Int32_array **)v75, v76, v77, v78, v79, v80, v81);
    v82 = (UserAccessaryMaster_o *)sub_B70764(UserAccessaryMaster_TypeInfo);
    UserAccessaryMaster___ctor(v82, 0LL);
    if ( v82 )
    {
      v3 = sub_B70754(v82, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xBu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 120) = v82;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 120), (System_Int32_array **)v82, v83, v84, v85, v86, v87, v88);
    v89 = (UserQuestMaster_o *)sub_B70764(UserQuestMaster_TypeInfo);
    UserQuestMaster___ctor(v89, 0LL);
    if ( v89 )
    {
      v3 = sub_B70754(v89, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xCu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 128) = v89;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 128), (System_Int32_array **)v89, v90, v91, v92, v93, v94, v95);
    v96 = (BattleMaster_o *)sub_B70764(BattleMaster_TypeInfo);
    BattleMaster___ctor(v96, 0LL);
    if ( v96 )
    {
      v3 = sub_B70754(v96, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xDu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 136) = v96;
    sub_B70630((BattleServantConfConponent_o *)(v1 + 136), (System_Int32_array **)v96, v97, v98, v99, v100, v101, v102);
    v103 = (OtherUserGameMaster_o *)sub_B70764(OtherUserGameMaster_TypeInfo);
    OtherUserGameMaster___ctor(v103, 0LL);
    if ( v103 )
    {
      v3 = sub_B70754(v103, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xEu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 144) = v103;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 144),
      (System_Int32_array **)v103,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v110 = (TblFriendMaster_o *)sub_B70764(TblFriendMaster_TypeInfo);
    TblFriendMaster___ctor(v110, 0LL);
    if ( v110 )
    {
      v3 = sub_B70754(v110, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0xFu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 152) = v110;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 152),
      (System_Int32_array **)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
    v117 = (AreaMaster_o *)sub_B70764(AreaMaster_TypeInfo);
    AreaMaster___ctor(v117, 0LL);
    if ( v117 )
    {
      v3 = sub_B70754(v117, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x10u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 160) = v117;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 160),
      (System_Int32_array **)v117,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
    v124 = (ServantCardMaster_o *)sub_B70764(ServantCardMaster_TypeInfo);
    ServantCardMaster___ctor(v124, 0LL);
    if ( v124 )
    {
      v3 = sub_B70754(v124, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x11u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 168) = v124;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 168),
      (System_Int32_array **)v124,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    v131 = (EventMaster_o *)sub_B70764(EventMaster_TypeInfo);
    EventMaster___ctor(v131, 0LL);
    if ( v131 )
    {
      v3 = sub_B70754(v131, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x12u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 176) = v131;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 176),
      (System_Int32_array **)v131,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    v138 = (ItemMaster_o *)sub_B70764(ItemMaster_TypeInfo);
    ItemMaster___ctor(v138, 0LL);
    if ( v138 )
    {
      v3 = sub_B70754(v138, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x13u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 184) = v138;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 184),
      (System_Int32_array **)v138,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    v145 = (QuestMaster_o *)sub_B70764(QuestMaster_TypeInfo);
    QuestMaster___ctor(v145, 0LL);
    if ( v145 )
    {
      v3 = sub_B70754(v145, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x14u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 192) = v145;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 192),
      (System_Int32_array **)v145,
      v146,
      v147,
      v148,
      v149,
      v150,
      v151);
    v152 = (QuestAddMaster_o *)sub_B70764(QuestAddMaster_TypeInfo);
    QuestAddMaster___ctor(v152, 0LL);
    if ( v152 )
    {
      v3 = sub_B70754(v152, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x15u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 200) = v152;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 200),
      (System_Int32_array **)v152,
      v153,
      v154,
      v155,
      v156,
      v157,
      v158);
    v159 = (QuestReleaseMaster_o *)sub_B70764(QuestReleaseMaster_TypeInfo);
    QuestReleaseMaster___ctor(v159, 0LL);
    if ( v159 )
    {
      v3 = sub_B70754(v159, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x16u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 208) = v159;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 208),
      (System_Int32_array **)v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      v165);
    v166 = (QuestDateRangeMaster_o *)sub_B70764(QuestDateRangeMaster_TypeInfo);
    QuestDateRangeMaster___ctor(v166, 0LL);
    if ( v166 )
    {
      v3 = sub_B70754(v166, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x17u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 216) = v166;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 216),
      (System_Int32_array **)v166,
      v167,
      v168,
      v169,
      v170,
      v171,
      v172);
    v173 = (QuestPhaseMaster_o *)sub_B70764(QuestPhaseMaster_TypeInfo);
    QuestPhaseMaster___ctor(v173, 0LL);
    if ( v173 )
    {
      v3 = sub_B70754(v173, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x18u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 224) = v173;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 224),
      (System_Int32_array **)v173,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
    v180 = (QuestPhaseDetailMaster_o *)sub_B70764(QuestPhaseDetailMaster_TypeInfo);
    QuestPhaseDetailMaster___ctor(v180, 0LL);
    if ( v180 )
    {
      v3 = sub_B70754(v180, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x19u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 232) = v180;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 232),
      (System_Int32_array **)v180,
      v181,
      v182,
      v183,
      v184,
      v185,
      v186);
    v187 = (QuestGroupMaster_o *)sub_B70764(QuestGroupMaster_TypeInfo);
    QuestGroupMaster___ctor(v187, 0LL);
    if ( v187 )
    {
      v3 = sub_B70754(v187, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Au )
      goto LABEL_538;
    *(_QWORD *)(v1 + 240) = v187;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 240),
      (System_Int32_array **)v187,
      v188,
      v189,
      v190,
      v191,
      v192,
      v193);
    v194 = (QuestRandomGroupMaster_o *)sub_B70764(QuestRandomGroupMaster_TypeInfo);
    QuestRandomGroupMaster___ctor(v194, 0LL);
    if ( v194 )
    {
      v3 = sub_B70754(v194, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Bu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 248) = v194;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 248),
      (System_Int32_array **)v194,
      v195,
      v196,
      v197,
      v198,
      v199,
      v200);
    v201 = (QuestConsumeItemMaster_o *)sub_B70764(QuestConsumeItemMaster_TypeInfo);
    QuestConsumeItemMaster___ctor(v201, 0LL);
    if ( v201 )
    {
      v3 = sub_B70754(v201, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Cu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 256) = v201;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 256),
      (System_Int32_array **)v201,
      v202,
      v203,
      v204,
      v205,
      v206,
      v207);
    v208 = (QuestMessageMaster_o *)sub_B70764(QuestMessageMaster_TypeInfo);
    QuestMessageMaster___ctor(v208, 0LL);
    if ( v208 )
    {
      v3 = sub_B70754(v208, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Du )
      goto LABEL_538;
    *(_QWORD *)(v1 + 264) = v208;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 264),
      (System_Int32_array **)v208,
      v209,
      v210,
      v211,
      v212,
      v213,
      v214);
    v215 = (UserQuestInfoMaster_o *)sub_B70764(UserQuestInfoMaster_TypeInfo);
    UserQuestInfoMaster___ctor(v215, 0LL);
    if ( v215 )
    {
      v3 = sub_B70754(v215, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Eu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 272) = v215;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 272),
      (System_Int32_array **)v215,
      v216,
      v217,
      v218,
      v219,
      v220,
      v221);
    v222 = (UserQuestRecordMaster_o *)sub_B70764(UserQuestRecordMaster_TypeInfo);
    UserQuestRecordMaster___ctor(v222, 0LL);
    if ( v222 )
    {
      v3 = sub_B70754(v222, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x1Fu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 280) = v222;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 280),
      (System_Int32_array **)v222,
      v223,
      v224,
      v225,
      v226,
      v227,
      v228);
    v229 = (ViewQuestInfoMaster_o *)sub_B70764(ViewQuestInfoMaster_TypeInfo);
    ViewQuestInfoMaster___ctor(v229, 0LL);
    if ( v229 )
    {
      v3 = sub_B70754(v229, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x20u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 288) = v229;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 288),
      (System_Int32_array **)v229,
      v230,
      v231,
      v232,
      v233,
      v234,
      v235);
    v236 = (ViewEnemyMaster_o *)sub_B70764(ViewEnemyMaster_TypeInfo);
    ViewEnemyMaster___ctor(v236, 0LL);
    if ( v236 )
    {
      v3 = sub_B70754(v236, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x21u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 296) = v236;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 296),
      (System_Int32_array **)v236,
      v237,
      v238,
      v239,
      v240,
      v241,
      v242);
    v243 = (ViewQuestEnemyInfoMaster_o *)sub_B70764(ViewQuestEnemyInfoMaster_TypeInfo);
    ViewQuestEnemyInfoMaster___ctor(v243, 0LL);
    if ( v243 )
    {
      v3 = sub_B70754(v243, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x22u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 304) = v243;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 304),
      (System_Int32_array **)v243,
      v244,
      v245,
      v246,
      v247,
      v248,
      v249);
    v250 = (BlankEarthSpotMaster_o *)sub_B70764(BlankEarthSpotMaster_TypeInfo);
    BlankEarthSpotMaster___ctor(v250, 0LL);
    if ( v250 )
    {
      v3 = sub_B70754(v250, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x23u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 312) = v250;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 312),
      (System_Int32_array **)v250,
      v251,
      v252,
      v253,
      v254,
      v255,
      v256);
    v257 = (BlankEarthSpotAddMaster_o *)sub_B70764(BlankEarthSpotAddMaster_TypeInfo);
    BlankEarthSpotAddMaster___ctor(v257, 0LL);
    if ( v257 )
    {
      v3 = sub_B70754(v257, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x24u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 320) = v257;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 320),
      (System_Int32_array **)v257,
      v258,
      v259,
      v260,
      v261,
      v262,
      v263);
    v264 = (SpotMaster_o *)sub_B70764(SpotMaster_TypeInfo);
    SpotMaster___ctor(v264, 0LL);
    if ( v264 )
    {
      v3 = sub_B70754(v264, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x25u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 328) = v264;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 328),
      (System_Int32_array **)v264,
      v265,
      v266,
      v267,
      v268,
      v269,
      v270);
    v271 = (SpotImageMaster_o *)sub_B70764(SpotImageMaster_TypeInfo);
    SpotImageMaster___ctor(v271, 0LL);
    if ( v271 )
    {
      v3 = sub_B70754(v271, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x26u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 336) = v271;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 336),
      (System_Int32_array **)v271,
      v272,
      v273,
      v274,
      v275,
      v276,
      v277);
    v278 = (SpotRoadMaster_o *)sub_B70764(SpotRoadMaster_TypeInfo);
    SpotRoadMaster___ctor(v278, 0LL);
    if ( v278 )
    {
      v3 = sub_B70754(v278, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x27u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 344) = v278;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 344),
      (System_Int32_array **)v278,
      v279,
      v280,
      v281,
      v282,
      v283,
      v284);
    v285 = (SpotPathMaster_o *)sub_B70764(SpotPathMaster_TypeInfo);
    SpotPathMaster___ctor(v285, 0LL);
    if ( v285 )
    {
      v3 = sub_B70754(v285, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x28u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 352) = v285;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 352),
      (System_Int32_array **)v285,
      v286,
      v287,
      v288,
      v289,
      v290,
      v291);
    v292 = (SpotAddMaster_o *)sub_B70764(SpotAddMaster_TypeInfo);
    SpotAddMaster___ctor(v292, 0LL);
    if ( v292 )
    {
      v3 = sub_B70754(v292, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x29u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 360) = v292;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 360),
      (System_Int32_array **)v292,
      v293,
      v294,
      v295,
      v296,
      v297,
      v298);
    v299 = (MapGimmickMaster_o *)sub_B70764(MapGimmickMaster_TypeInfo);
    MapGimmickMaster___ctor(v299, 0LL);
    if ( v299 )
    {
      v3 = sub_B70754(v299, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Au )
      goto LABEL_538;
    *(_QWORD *)(v1 + 368) = v299;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 368),
      (System_Int32_array **)v299,
      v300,
      v301,
      v302,
      v303,
      v304,
      v305);
    v306 = (GiftMaster_o *)sub_B70764(GiftMaster_TypeInfo);
    GiftMaster___ctor(v306, 0LL);
    if ( v306 )
    {
      v3 = sub_B70754(v306, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Bu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 376) = v306;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 376),
      (System_Int32_array **)v306,
      v307,
      v308,
      v309,
      v310,
      v311,
      v312);
    v313 = (GiftAddMaster_o *)sub_B70764(GiftAddMaster_TypeInfo);
    GiftAddMaster___ctor(v313, 0LL);
    if ( v313 )
    {
      v3 = sub_B70754(v313, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Cu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 384) = v313;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 384),
      (System_Int32_array **)v313,
      v314,
      v315,
      v316,
      v317,
      v318,
      v319);
    v320 = (ShopMaster_o *)sub_B70764(ShopMaster_TypeInfo);
    ShopMaster___ctor(v320, 0LL);
    if ( v320 )
    {
      v3 = sub_B70754(v320, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Du )
      goto LABEL_538;
    *(_QWORD *)(v1 + 392) = v320;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 392),
      (System_Int32_array **)v320,
      v321,
      v322,
      v323,
      v324,
      v325,
      v326);
    v327 = (StoneShopMaster_o *)sub_B70764(StoneShopMaster_TypeInfo);
    StoneShopMaster___ctor(v327, 0LL);
    if ( v327 )
    {
      v3 = sub_B70754(v327, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Eu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 400) = v327;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 400),
      (System_Int32_array **)v327,
      v328,
      v329,
      v330,
      v331,
      v332,
      v333);
    v334 = (BankShopMaster_o *)sub_B70764(BankShopMaster_TypeInfo);
    BankShopMaster___ctor(v334, 0LL);
    if ( v334 )
    {
      v3 = sub_B70754(v334, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x2Fu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 408) = v334;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 408),
      (System_Int32_array **)v334,
      v335,
      v336,
      v337,
      v338,
      v339,
      v340);
    v341 = (ShopScriptMaster_o *)sub_B70764(ShopScriptMaster_TypeInfo);
    ShopScriptMaster___ctor(v341, 0LL);
    if ( v341 )
    {
      v3 = sub_B70754(v341, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x30u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 416) = v341;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 416),
      (System_Int32_array **)v341,
      v342,
      v343,
      v344,
      v345,
      v346,
      v347);
    v348 = (StageMaster_o *)sub_B70764(StageMaster_TypeInfo);
    StageMaster___ctor(v348, 0LL);
    if ( v348 )
    {
      v3 = sub_B70754(v348, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x31u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 424) = v348;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 424),
      (System_Int32_array **)v348,
      v349,
      v350,
      v351,
      v352,
      v353,
      v354);
    v355 = (ServantGroupMaster_o *)sub_B70764(ServantGroupMaster_TypeInfo);
    ServantGroupMaster___ctor(v355, 0LL);
    if ( v355 )
    {
      v3 = sub_B70754(v355, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x32u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 432) = v355;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 432),
      (System_Int32_array **)v355,
      v356,
      v357,
      v358,
      v359,
      v360,
      v361);
    v362 = (ServantLimitMaster_o *)sub_B70764(ServantLimitMaster_TypeInfo);
    ServantLimitMaster___ctor(v362, 0LL);
    if ( v362 )
    {
      v3 = sub_B70754(v362, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x33u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 440) = v362;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 440),
      (System_Int32_array **)v362,
      v363,
      v364,
      v365,
      v366,
      v367,
      v368);
    v369 = (ServantLimitAddMaster_o *)sub_B70764(ServantLimitAddMaster_TypeInfo);
    ServantLimitAddMaster___ctor(v369, 0LL);
    if ( v369 )
    {
      v3 = sub_B70754(v369, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x34u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 448) = v369;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 448),
      (System_Int32_array **)v369,
      v370,
      v371,
      v372,
      v373,
      v374,
      v375);
    v376 = (ServantSkillMaster_o *)sub_B70764(ServantSkillMaster_TypeInfo);
    ServantSkillMaster___ctor(v376, 0LL);
    if ( v376 )
    {
      v3 = sub_B70754(v376, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x35u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 456) = v376;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 456),
      (System_Int32_array **)v376,
      v377,
      v378,
      v379,
      v380,
      v381,
      v382);
    v383 = (ServantPassiveSkillMaster_o *)sub_B70764(ServantPassiveSkillMaster_TypeInfo);
    ServantPassiveSkillMaster___ctor(v383, 0LL);
    if ( v383 )
    {
      v3 = sub_B70754(v383, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x36u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 464) = v383;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 464),
      (System_Int32_array **)v383,
      v384,
      v385,
      v386,
      v387,
      v388,
      v389);
    v390 = (BgmMaster_o *)sub_B70764(BgmMaster_TypeInfo);
    BgmMaster___ctor(v390, 0LL);
    if ( v390 )
    {
      v3 = sub_B70754(v390, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x37u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 472) = v390;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 472),
      (System_Int32_array **)v390,
      v391,
      v392,
      v393,
      v394,
      v395,
      v396);
    v397 = (ServantScriptMaster_o *)sub_B70764(ServantScriptMaster_TypeInfo);
    ServantScriptMaster___ctor(v397, 0LL);
    if ( v397 )
    {
      v3 = sub_B70754(v397, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x38u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 480) = v397;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 480),
      (System_Int32_array **)v397,
      v398,
      v399,
      v400,
      v401,
      v402,
      v403);
    v404 = (NewsMaster_o *)sub_B70764(NewsMaster_TypeInfo);
    NewsMaster___ctor(v404, 0LL);
    if ( v404 )
    {
      v3 = sub_B70754(v404, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x39u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 488) = v404;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 488),
      (System_Int32_array **)v404,
      v405,
      v406,
      v407,
      v408,
      v409,
      v410);
    v411 = (TelopMaster_o *)sub_B70764(TelopMaster_TypeInfo);
    TelopMaster___ctor(v411, 0LL);
    if ( v411 )
    {
      v3 = sub_B70754(v411, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Au )
      goto LABEL_538;
    *(_QWORD *)(v1 + 496) = v411;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 496),
      (System_Int32_array **)v411,
      v412,
      v413,
      v414,
      v415,
      v416,
      v417);
    v418 = (UserExpMaster_o *)sub_B70764(UserExpMaster_TypeInfo);
    UserExpMaster___ctor(v418, 0LL);
    if ( v418 )
    {
      v3 = sub_B70754(v418, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Bu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 504) = v418;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 504),
      (System_Int32_array **)v418,
      v419,
      v420,
      v421,
      v422,
      v423,
      v424);
    v425 = (TreasureDvcMaster_o *)sub_B70764(TreasureDvcMaster_TypeInfo);
    TreasureDvcMaster___ctor(v425, 0LL);
    if ( v425 )
    {
      v3 = sub_B70754(v425, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Cu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 512) = v425;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 512),
      (System_Int32_array **)v425,
      v426,
      v427,
      v428,
      v429,
      v430,
      v431);
    v432 = (ServantTreasureDvcMaster_o *)sub_B70764(ServantTreasureDvcMaster_TypeInfo);
    ServantTreasureDvcMaster___ctor(v432, 0LL);
    if ( v432 )
    {
      v3 = sub_B70754(v432, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Du )
      goto LABEL_538;
    *(_QWORD *)(v1 + 520) = v432;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 520),
      (System_Int32_array **)v432,
      v433,
      v434,
      v435,
      v436,
      v437,
      v438);
    v439 = (SkillMaster_o *)sub_B70764(SkillMaster_TypeInfo);
    SkillMaster___ctor(v439, 0LL);
    if ( v439 )
    {
      v3 = sub_B70754(v439, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Eu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 528) = v439;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 528),
      (System_Int32_array **)v439,
      v440,
      v441,
      v442,
      v443,
      v444,
      v445);
    v446 = (SkillLvMaster_o *)sub_B70764(SkillLvMaster_TypeInfo);
    SkillLvMaster___ctor(v446, 0LL);
    if ( v446 )
    {
      v3 = sub_B70754(v446, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x3Fu )
      goto LABEL_538;
    *(_QWORD *)(v1 + 536) = v446;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 536),
      (System_Int32_array **)v446,
      v447,
      v448,
      v449,
      v450,
      v451,
      v452);
    v453 = (SkillDetailMaster_o *)sub_B70764(SkillDetailMaster_TypeInfo);
    SkillDetailMaster___ctor(v453, 0LL);
    if ( v453 )
    {
      v3 = sub_B70754(v453, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x40u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 544) = v453;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 544),
      (System_Int32_array **)v453,
      v454,
      v455,
      v456,
      v457,
      v458,
      v459);
    v460 = (CommandSpellMaster_o *)sub_B70764(CommandSpellMaster_TypeInfo);
    CommandSpellMaster___ctor(v460, 0LL);
    if ( v460 )
    {
      v3 = sub_B70754(v460, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x41u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 552) = v460;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 552),
      (System_Int32_array **)v460,
      v461,
      v462,
      v463,
      v464,
      v465,
      v466);
    v467 = (EquipMaster_o *)sub_B70764(EquipMaster_TypeInfo);
    EquipMaster___ctor(v467, 0LL);
    if ( v467 )
    {
      v3 = sub_B70754(v467, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x42u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 560) = v467;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 560),
      (System_Int32_array **)v467,
      v468,
      v469,
      v470,
      v471,
      v472,
      v473);
    v474 = (EquipExpMaster_o *)sub_B70764(EquipExpMaster_TypeInfo);
    EquipExpMaster___ctor(v474, 0LL);
    if ( v474 )
    {
      v3 = sub_B70754(v474, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x43u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 568) = v474;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 568),
      (System_Int32_array **)v474,
      v475,
      v476,
      v477,
      v478,
      v479,
      v480);
    v481 = (EquipSkillMaster_o *)sub_B70764(EquipSkillMaster_TypeInfo);
    EquipSkillMaster___ctor(v481, 0LL);
    if ( v481 )
    {
      v3 = sub_B70754(v481, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x44u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 576) = v481;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 576),
      (System_Int32_array **)v481,
      v482,
      v483,
      v484,
      v485,
      v486,
      v487);
    v488 = (SubEquipMaster_o *)sub_B70764(SubEquipMaster_TypeInfo);
    SubEquipMaster___ctor(v488, 0LL);
    if ( v488 )
    {
      v3 = sub_B70754(v488, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x45u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 584) = v488;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 584),
      (System_Int32_array **)v488,
      v489,
      v490,
      v491,
      v492,
      v493,
      v494);
    v495 = (AccessaryMaster_o *)sub_B70764(AccessaryMaster_TypeInfo);
    AccessaryMaster___ctor(v495, 0LL);
    if ( v495 )
    {
      v3 = sub_B70754(v495, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x46u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 592) = v495;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 592),
      (System_Int32_array **)v495,
      v496,
      v497,
      v498,
      v499,
      v500,
      v501);
    v502 = (UserPresentBoxMaster_o *)sub_B70764(UserPresentBoxMaster_TypeInfo);
    UserPresentBoxMaster___ctor(v502, 0LL);
    if ( v502 )
    {
      v3 = sub_B70754(v502, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x47u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 600) = v502;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 600),
      (System_Int32_array **)v502,
      v503,
      v504,
      v505,
      v506,
      v507,
      v508);
    v509 = (UserDeckMaster_o *)sub_B70764(UserDeckMaster_TypeInfo);
    UserDeckMaster___ctor(v509, 0LL);
    if ( v509 )
    {
      v3 = sub_B70754(v509, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x48u )
      goto LABEL_538;
    *(_QWORD *)(v1 + 608) = v509;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 608),
      (System_Int32_array **)v509,
      v510,
      v511,
      v512,
      v513,
      v514,
      v515);
    v516 = (UserSubEquipMaster_o *)sub_B70764(UserSubEquipMaster_TypeInfo);
    UserSubEquipMaster___ctor(v516, 0LL);
    if ( v516 )
    {
      v3 = sub_B70754(v516, *(_QWORD *)(*(_QWORD *)v1 + 64LL));
      if ( !v3 )
        goto LABEL_539;
    }
    if ( *v11 <= 0x49u )
    {
LABEL_538:
      v1248 = sub_B70798(v3);
      sub_B70738(v1248, 0LL);
    }
    *(_QWORD *)(v1 + 616) = v516;
    sub_B70630(
      (BattleServantConfConponent_o *)(v1 + 616),
      (System_Int32_array **)v516,
      v517,
      v518,
      v519,
      v520,
      v521,
      v522);
    v523 = (GachaMaster_o *)sub_B70764(GachaMaster_TypeInfo);
    GachaMaster___ctor(v523, 0LL);
    if ( !v523 || (v3 = sub_B70754(v523, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
    {
      if ( *v11 <= 0x4Au )
        goto LABEL_536;
      *(_QWORD *)(v1 + 624) = v523;
      sub_B70630(
        (BattleServantConfConponent_o *)(v1 + 624),
        (System_Int32_array **)v523,
        v524,
        v525,
        v526,
        v527,
        v528,
        v529);
      v530 = (GachaImageMaster_o *)sub_B70764(GachaImageMaster_TypeInfo);
      GachaImageMaster___ctor(v530, 0LL);
      if ( !v530 || (v3 = sub_B70754(v530, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
      {
        if ( *v11 <= 0x4Bu )
          goto LABEL_536;
        *(_QWORD *)(v1 + 632) = v530;
        sub_B70630(
          (BattleServantConfConponent_o *)(v1 + 632),
          (System_Int32_array **)v530,
          v531,
          v532,
          v533,
          v534,
          v535,
          v536);
        v537 = (UserGachaMaster_o *)sub_B70764(UserGachaMaster_TypeInfo);
        UserGachaMaster___ctor(v537, 0LL);
        if ( !v537 || (v3 = sub_B70754(v537, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
        {
          if ( *v11 <= 0x4Cu )
            goto LABEL_536;
          *(_QWORD *)(v1 + 640) = v537;
          sub_B70630(
            (BattleServantConfConponent_o *)(v1 + 640),
            (System_Int32_array **)v537,
            v538,
            v539,
            v540,
            v541,
            v542,
            v543);
          v544 = (UserEquipMaster_o *)sub_B70764(UserEquipMaster_TypeInfo);
          UserEquipMaster___ctor(v544, 0LL);
          if ( !v544 || (v3 = sub_B70754(v544, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
          {
            if ( *v11 <= 0x4Du )
              goto LABEL_536;
            *(_QWORD *)(v1 + 648) = v544;
            sub_B70630(
              (BattleServantConfConponent_o *)(v1 + 648),
              (System_Int32_array **)v544,
              v545,
              v546,
              v547,
              v548,
              v549,
              v550);
            v551 = (UserServantCollectionMaster_o *)sub_B70764(UserServantCollectionMaster_TypeInfo);
            UserServantCollectionMaster___ctor(v551, 0LL);
            if ( !v551 || (v3 = sub_B70754(v551, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
            {
              if ( *v11 <= 0x4Eu )
                goto LABEL_536;
              *(_QWORD *)(v1 + 656) = v551;
              sub_B70630(
                (BattleServantConfConponent_o *)(v1 + 656),
                (System_Int32_array **)v551,
                v552,
                v553,
                v554,
                v555,
                v556,
                v557);
              v558 = (FriendshipMaster_o *)sub_B70764(FriendshipMaster_TypeInfo);
              FriendshipMaster___ctor(v558, 0LL);
              if ( !v558 || (v3 = sub_B70754(v558, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
              {
                if ( *v11 <= 0x4Fu )
                  goto LABEL_536;
                *(_QWORD *)(v1 + 664) = v558;
                sub_B70630(
                  (BattleServantConfConponent_o *)(v1 + 664),
                  (System_Int32_array **)v558,
                  v559,
                  v560,
                  v561,
                  v562,
                  v563,
                  v564);
                v565 = (GachaTicketMaster_o *)sub_B70764(GachaTicketMaster_TypeInfo);
                GachaTicketMaster___ctor(v565, 0LL);
                if ( !v565 || (v3 = sub_B70754(v565, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                {
                  if ( *v11 <= 0x50u )
                    goto LABEL_536;
                  *(_QWORD *)(v1 + 672) = v565;
                  sub_B70630(
                    (BattleServantConfConponent_o *)(v1 + 672),
                    (System_Int32_array **)v565,
                    v566,
                    v567,
                    v568,
                    v569,
                    v570,
                    v571);
                  v572 = (UserFormationMaster_o *)sub_B70764(UserFormationMaster_TypeInfo);
                  UserFormationMaster___ctor(v572, 0LL);
                  if ( !v572 || (v3 = sub_B70754(v572, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                  {
                    if ( *v11 <= 0x51u )
                      goto LABEL_536;
                    *(_QWORD *)(v1 + 680) = v572;
                    sub_B70630(
                      (BattleServantConfConponent_o *)(v1 + 680),
                      (System_Int32_array **)v572,
                      v573,
                      v574,
                      v575,
                      v576,
                      v577,
                      v578);
                    v579 = (FunctionMaster_o *)sub_B70764(FunctionMaster_TypeInfo);
                    FunctionMaster___ctor(v579, 0LL);
                    if ( !v579 || (v3 = sub_B70754(v579, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                    {
                      if ( *v11 <= 0x52u )
                        goto LABEL_536;
                      *(_QWORD *)(v1 + 688) = v579;
                      sub_B70630(
                        (BattleServantConfConponent_o *)(v1 + 688),
                        (System_Int32_array **)v579,
                        v580,
                        v581,
                        v582,
                        v583,
                        v584,
                        v585);
                      v586 = (BuffMaster_o *)sub_B70764(BuffMaster_TypeInfo);
                      BuffMaster___ctor(v586, 0LL);
                      if ( !v586 || (v3 = sub_B70754(v586, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                      {
                        if ( *v11 <= 0x53u )
                          goto LABEL_536;
                        *(_QWORD *)(v1 + 696) = v586;
                        sub_B70630(
                          (BattleServantConfConponent_o *)(v1 + 696),
                          (System_Int32_array **)v586,
                          v587,
                          v588,
                          v589,
                          v590,
                          v591,
                          v592);
                        v593 = (GachaReleaseMaster_o *)sub_B70764(GachaReleaseMaster_TypeInfo);
                        GachaReleaseMaster___ctor(v593, 0LL);
                        if ( !v593 || (v3 = sub_B70754(v593, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                        {
                          if ( *v11 <= 0x54u )
                            goto LABEL_536;
                          *(_QWORD *)(v1 + 704) = v593;
                          sub_B70630(
                            (BattleServantConfConponent_o *)(v1 + 704),
                            (System_Int32_array **)v593,
                            v594,
                            v595,
                            v596,
                            v597,
                            v598,
                            v599);
                          v600 = (CombineQpMaster_o *)sub_B70764(CombineQpMaster_TypeInfo);
                          CombineQpMaster___ctor(v600, 0LL);
                          if ( !v600 || (v3 = sub_B70754(v600, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                          {
                            if ( *v11 <= 0x55u )
                              goto LABEL_536;
                            *(_QWORD *)(v1 + 712) = v600;
                            sub_B70630(
                              (BattleServantConfConponent_o *)(v1 + 712),
                              (System_Int32_array **)v600,
                              v601,
                              v602,
                              v603,
                              v604,
                              v605,
                              v606);
                            v607 = (CombineMaterialMaster_o *)sub_B70764(CombineMaterialMaster_TypeInfo);
                            CombineMaterialMaster___ctor(v607, 0LL);
                            if ( !v607 || (v3 = sub_B70754(v607, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                            {
                              if ( *v11 <= 0x56u )
                                goto LABEL_536;
                              *(_QWORD *)(v1 + 720) = v607;
                              sub_B70630(
                                (BattleServantConfConponent_o *)(v1 + 720),
                                (System_Int32_array **)v607,
                                v608,
                                v609,
                                v610,
                                v611,
                                v612,
                                v613);
                              v614 = (EventCombineMaster_o *)sub_B70764(EventCombineMaster_TypeInfo);
                              EventCombineMaster___ctor(v614, 0LL);
                              if ( !v614 || (v3 = sub_B70754(v614, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                              {
                                if ( *v11 <= 0x57u )
                                  goto LABEL_536;
                                *(_QWORD *)(v1 + 728) = v614;
                                sub_B70630(
                                  (BattleServantConfConponent_o *)(v1 + 728),
                                  (System_Int32_array **)v614,
                                  v615,
                                  v616,
                                  v617,
                                  v618,
                                  v619,
                                  v620);
                                v621 = (ServantExpMaster_o *)sub_B70764(ServantExpMaster_TypeInfo);
                                ServantExpMaster___ctor(v621, 0LL);
                                if ( !v621 || (v3 = sub_B70754(v621, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                {
                                  if ( *v11 <= 0x58u )
                                    goto LABEL_536;
                                  *(_QWORD *)(v1 + 736) = v621;
                                  sub_B70630(
                                    (BattleServantConfConponent_o *)(v1 + 736),
                                    (System_Int32_array **)v621,
                                    v622,
                                    v623,
                                    v624,
                                    v625,
                                    v626,
                                    v627);
                                  v628 = (CombineSkillMaster_o *)sub_B70764(CombineSkillMaster_TypeInfo);
                                  CombineSkillMaster___ctor(v628, 0LL);
                                  if ( !v628 || (v3 = sub_B70754(v628, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                  {
                                    if ( *v11 <= 0x59u )
                                      goto LABEL_536;
                                    *(_QWORD *)(v1 + 744) = v628;
                                    sub_B70630(
                                      (BattleServantConfConponent_o *)(v1 + 744),
                                      (System_Int32_array **)v628,
                                      v629,
                                      v630,
                                      v631,
                                      v632,
                                      v633,
                                      v634);
                                    v635 = (CombineTdMaster_o *)sub_B70764(CombineTdMaster_TypeInfo);
                                    CombineTdMaster___ctor(v635, 0LL);
                                    if ( !v635 || (v3 = sub_B70754(v635, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                    {
                                      if ( *v11 <= 0x5Au )
                                        goto LABEL_536;
                                      *(_QWORD *)(v1 + 752) = v635;
                                      sub_B70630(
                                        (BattleServantConfConponent_o *)(v1 + 752),
                                        (System_Int32_array **)v635,
                                        v636,
                                        v637,
                                        v638,
                                        v639,
                                        v640,
                                        v641);
                                      v642 = (EventQuestMaster_o *)sub_B70764(EventQuestMaster_TypeInfo);
                                      EventQuestMaster___ctor(v642, 0LL);
                                      if ( !v642 || (v3 = sub_B70754(v642, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                      {
                                        if ( *v11 <= 0x5Bu )
                                          goto LABEL_536;
                                        *(_QWORD *)(v1 + 760) = v642;
                                        sub_B70630(
                                          (BattleServantConfConponent_o *)(v1 + 760),
                                          (System_Int32_array **)v642,
                                          v643,
                                          v644,
                                          v645,
                                          v646,
                                          v647,
                                          v648);
                                        v649 = (EventCampaignMaster_o *)sub_B70764(EventCampaignMaster_TypeInfo);
                                        EventCampaignMaster___ctor(v649, 0LL);
                                        if ( !v649 || (v3 = sub_B70754(v649, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                        {
                                          if ( *v11 <= 0x5Cu )
                                            goto LABEL_536;
                                          *(_QWORD *)(v1 + 768) = v649;
                                          sub_B70630(
                                            (BattleServantConfConponent_o *)(v1 + 768),
                                            (System_Int32_array **)v649,
                                            v650,
                                            v651,
                                            v652,
                                            v653,
                                            v654,
                                            v655);
                                          v656 = (IllustratorMaster_o *)sub_B70764(IllustratorMaster_TypeInfo);
                                          IllustratorMaster___ctor(v656, 0LL);
                                          if ( !v656 || (v3 = sub_B70754(v656, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                          {
                                            if ( *v11 <= 0x5Du )
                                              goto LABEL_536;
                                            *(_QWORD *)(v1 + 776) = v656;
                                            sub_B70630(
                                              (BattleServantConfConponent_o *)(v1 + 776),
                                              (System_Int32_array **)v656,
                                              v657,
                                              v658,
                                              v659,
                                              v660,
                                              v661,
                                              v662);
                                            v663 = (CvMaster_o *)sub_B70764(CvMaster_TypeInfo);
                                            CvMaster___ctor(v663, v664);
                                            if ( !v663
                                              || (v3 = sub_B70754(v663, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                            {
                                              if ( *v11 <= 0x5Eu )
                                                goto LABEL_536;
                                              *(_QWORD *)(v1 + 784) = v663;
                                              sub_B70630(
                                                (BattleServantConfConponent_o *)(v1 + 784),
                                                (System_Int32_array **)v663,
                                                v665,
                                                v666,
                                                v667,
                                                v668,
                                                v669,
                                                v670);
                                              v671 = (TreasureDvcLvMaster_o *)sub_B70764(TreasureDvcLvMaster_TypeInfo);
                                              TreasureDvcLvMaster___ctor(v671, 0LL);
                                              if ( !v671
                                                || (v3 = sub_B70754(v671, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                              {
                                                if ( *v11 <= 0x5Fu )
                                                  goto LABEL_536;
                                                *(_QWORD *)(v1 + 792) = v671;
                                                sub_B70630(
                                                  (BattleServantConfConponent_o *)(v1 + 792),
                                                  (System_Int32_array **)v671,
                                                  v672,
                                                  v673,
                                                  v674,
                                                  v675,
                                                  v676,
                                                  v677);
                                                v678 = (TreasureDvcDetailMaster_o *)sub_B70764(TreasureDvcDetailMaster_TypeInfo);
                                                TreasureDvcDetailMaster___ctor(v678, 0LL);
                                                if ( !v678
                                                  || (v3 = sub_B70754(v678, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                {
                                                  if ( *v11 <= 0x60u )
                                                    goto LABEL_536;
                                                  *(_QWORD *)(v1 + 800) = v678;
                                                  sub_B70630(
                                                    (BattleServantConfConponent_o *)(v1 + 800),
                                                    (System_Int32_array **)v678,
                                                    v679,
                                                    v680,
                                                    v681,
                                                    v682,
                                                    v683,
                                                    v684);
                                                  v685 = (UserFollowerMaster_o *)sub_B70764(UserFollowerMaster_TypeInfo);
                                                  UserFollowerMaster___ctor(v685, 0LL);
                                                  if ( !v685
                                                    || (v3 = sub_B70754(v685, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                  {
                                                    if ( *v11 <= 0x61u )
                                                      goto LABEL_536;
                                                    *(_QWORD *)(v1 + 808) = v685;
                                                    sub_B70630(
                                                      (BattleServantConfConponent_o *)(v1 + 808),
                                                      (System_Int32_array **)v685,
                                                      v686,
                                                      v687,
                                                      v688,
                                                      v689,
                                                      v690,
                                                      v691);
                                                    v692 = (NpcFollowerMaster_o *)sub_B70764(NpcFollowerMaster_TypeInfo);
                                                    NpcFollowerMaster___ctor(v692, 0LL);
                                                    if ( !v692
                                                      || (v3 = sub_B70754(v692, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                    {
                                                      if ( *v11 <= 0x62u )
                                                        goto LABEL_536;
                                                      *(_QWORD *)(v1 + 816) = v692;
                                                      sub_B70630(
                                                        (BattleServantConfConponent_o *)(v1 + 816),
                                                        (System_Int32_array **)v692,
                                                        v693,
                                                        v694,
                                                        v695,
                                                        v696,
                                                        v697,
                                                        v698);
                                                      v699 = (NpcServantFollowerMaster_o *)sub_B70764(NpcServantFollowerMaster_TypeInfo);
                                                      NpcServantFollowerMaster___ctor(v699, 0LL);
                                                      if ( !v699
                                                        || (v3 = sub_B70754(v699, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                      {
                                                        if ( *v11 <= 0x63u )
                                                          goto LABEL_536;
                                                        *(_QWORD *)(v1 + 824) = v699;
                                                        sub_B70630(
                                                          (BattleServantConfConponent_o *)(v1 + 824),
                                                          (System_Int32_array **)v699,
                                                          v700,
                                                          v701,
                                                          v702,
                                                          v703,
                                                          v704,
                                                          v705);
                                                        v706 = (UserEventMaster_o *)sub_B70764(UserEventMaster_TypeInfo);
                                                        UserEventMaster___ctor(v706, 0LL);
                                                        if ( !v706
                                                          || (v3 = sub_B70754(v706, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                        {
                                                          if ( *v11 <= 0x64u )
                                                            goto LABEL_536;
                                                          *(_QWORD *)(v1 + 832) = v706;
                                                          sub_B70630(
                                                            (BattleServantConfConponent_o *)(v1 + 832),
                                                            (System_Int32_array **)v706,
                                                            v707,
                                                            v708,
                                                            v709,
                                                            v710,
                                                            v711,
                                                            v712);
                                                          v713 = (UserShopMaster_o *)sub_B70764(UserShopMaster_TypeInfo);
                                                          UserShopMaster___ctor(v713, 0LL);
                                                          if ( !v713
                                                            || (v3 = sub_B70754(v713, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                          {
                                                            if ( *v11 <= 0x65u )
                                                              goto LABEL_536;
                                                            *(_QWORD *)(v1 + 840) = v713;
                                                            sub_B70630(
                                                              (BattleServantConfConponent_o *)(v1 + 840),
                                                              (System_Int32_array **)v713,
                                                              v714,
                                                              v715,
                                                              v716,
                                                              v717,
                                                              v718,
                                                              v719);
                                                            v720 = (UserContinueMaster_o *)sub_B70764(UserContinueMaster_TypeInfo);
                                                            UserContinueMaster___ctor(v720, 0LL);
                                                            if ( !v720
                                                              || (v3 = sub_B70754(
                                                                         v720,
                                                                         *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                            {
                                                              if ( *v11 <= 0x66u )
                                                                goto LABEL_536;
                                                              *(_QWORD *)(v1 + 848) = v720;
                                                              sub_B70630(
                                                                (BattleServantConfConponent_o *)(v1 + 848),
                                                                (System_Int32_array **)v720,
                                                                v721,
                                                                v722,
                                                                v723,
                                                                v724,
                                                                v725,
                                                                v726);
                                                              v727 = (ConstantMaster_o *)sub_B70764(ConstantMaster_TypeInfo);
                                                              ConstantMaster___ctor(v727, 0LL);
                                                              if ( !v727
                                                                || (v3 = sub_B70754(
                                                                           v727,
                                                                           *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                              {
                                                                if ( *v11 <= 0x67u )
                                                                  goto LABEL_536;
                                                                *(_QWORD *)(v1 + 856) = v727;
                                                                sub_B70630(
                                                                  (BattleServantConfConponent_o *)(v1 + 856),
                                                                  (System_Int32_array **)v727,
                                                                  v728,
                                                                  v729,
                                                                  v730,
                                                                  v731,
                                                                  v732,
                                                                  v733);
                                                                v734 = (ConstantLongMaster_o *)sub_B70764(ConstantLongMaster_TypeInfo);
                                                                ConstantLongMaster___ctor(v734, 0LL);
                                                                if ( !v734
                                                                  || (v3 = sub_B70754(
                                                                             v734,
                                                                             *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                {
                                                                  if ( *v11 <= 0x68u )
                                                                    goto LABEL_536;
                                                                  *(_QWORD *)(v1 + 864) = v734;
                                                                  sub_B70630(
                                                                    (BattleServantConfConponent_o *)(v1 + 864),
                                                                    (System_Int32_array **)v734,
                                                                    v735,
                                                                    v736,
                                                                    v737,
                                                                    v738,
                                                                    v739,
                                                                    v740);
                                                                  v741 = (ConstantStrMaster_o *)sub_B70764(ConstantStrMaster_TypeInfo);
                                                                  ConstantStrMaster___ctor(v741, 0LL);
                                                                  if ( !v741
                                                                    || (v3 = sub_B70754(
                                                                               v741,
                                                                               *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                  {
                                                                    if ( *v11 <= 0x69u )
                                                                      goto LABEL_536;
                                                                    *(_QWORD *)(v1 + 872) = v741;
                                                                    sub_B70630(
                                                                      (BattleServantConfConponent_o *)(v1 + 872),
                                                                      (System_Int32_array **)v741,
                                                                      v742,
                                                                      v743,
                                                                      v744,
                                                                      v745,
                                                                      v746,
                                                                      v747);
                                                                    v748 = (AiMaster_o *)sub_B70764(AiMaster_TypeInfo);
                                                                    AiMaster___ctor(v748, 0LL);
                                                                    if ( !v748
                                                                      || (v3 = sub_B70754(
                                                                                 v748,
                                                                                 *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                    {
                                                                      if ( *v11 <= 0x6Au )
                                                                        goto LABEL_536;
                                                                      *(_QWORD *)(v1 + 880) = v748;
                                                                      sub_B70630(
                                                                        (BattleServantConfConponent_o *)(v1 + 880),
                                                                        (System_Int32_array **)v748,
                                                                        v749,
                                                                        v750,
                                                                        v751,
                                                                        v752,
                                                                        v753,
                                                                        v754);
                                                                      v755 = (AiActMaster_o *)sub_B70764(AiActMaster_TypeInfo);
                                                                      AiActMaster___ctor(v755, 0LL);
                                                                      if ( !v755
                                                                        || (v3 = sub_B70754(
                                                                                   v755,
                                                                                   *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                      {
                                                                        if ( *v11 <= 0x6Bu )
                                                                          goto LABEL_536;
                                                                        *(_QWORD *)(v1 + 888) = v755;
                                                                        sub_B70630(
                                                                          (BattleServantConfConponent_o *)(v1 + 888),
                                                                          (System_Int32_array **)v755,
                                                                          v756,
                                                                          v757,
                                                                          v758,
                                                                          v759,
                                                                          v760,
                                                                          v761);
                                                                        v762 = (AttriRelationMaster_o *)sub_B70764(AttriRelationMaster_TypeInfo);
                                                                        AttriRelationMaster___ctor(v762, 0LL);
                                                                        if ( !v762
                                                                          || (v3 = sub_B70754(
                                                                                     v762,
                                                                                     *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                        {
                                                                          if ( *v11 <= 0x6Cu )
                                                                            goto LABEL_536;
                                                                          *(_QWORD *)(v1 + 896) = v762;
                                                                          sub_B70630(
                                                                            (BattleServantConfConponent_o *)(v1 + 896),
                                                                            (System_Int32_array **)v762,
                                                                            v763,
                                                                            v764,
                                                                            v765,
                                                                            v766,
                                                                            v767,
                                                                            v768);
                                                                          v769 = (ClassRelationMaster_o *)sub_B70764(ClassRelationMaster_TypeInfo);
                                                                          ClassRelationMaster___ctor(v769, 0LL);
                                                                          if ( !v769
                                                                            || (v3 = sub_B70754(
                                                                                       v769,
                                                                                       *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                          {
                                                                            if ( *v11 <= 0x6Du )
                                                                              goto LABEL_536;
                                                                            *(_QWORD *)(v1 + 904) = v769;
                                                                            sub_B70630(
                                                                              (BattleServantConfConponent_o *)(v1 + 904),
                                                                              (System_Int32_array **)v769,
                                                                              v770,
                                                                              v771,
                                                                              v772,
                                                                              v773,
                                                                              v774,
                                                                              v775);
                                                                            v776 = (EffectMaster_o *)sub_B70764(EffectMaster_TypeInfo);
                                                                            EffectMaster___ctor(v776, 0LL);
                                                                            if ( !v776
                                                                              || (v3 = sub_B70754(
                                                                                         v776,
                                                                                         *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                            {
                                                                              if ( *v11 <= 0x6Eu )
                                                                                goto LABEL_536;
                                                                              *(_QWORD *)(v1 + 912) = v776;
                                                                              sub_B70630(
                                                                                (BattleServantConfConponent_o *)(v1 + 912),
                                                                                (System_Int32_array **)v776,
                                                                                v777,
                                                                                v778,
                                                                                v779,
                                                                                v780,
                                                                                v781,
                                                                                v782);
                                                                              v783 = (EquipImageMaster_o *)sub_B70764(EquipImageMaster_TypeInfo);
                                                                              EquipImageMaster___ctor(v783, 0LL);
                                                                              if ( !v783
                                                                                || (v3 = sub_B70754(
                                                                                           v783,
                                                                                           *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                              {
                                                                                if ( *v11 <= 0x6Fu )
                                                                                  goto LABEL_536;
                                                                                *(_QWORD *)(v1 + 920) = v783;
                                                                                sub_B70630(
                                                                                  (BattleServantConfConponent_o *)(v1 + 920),
                                                                                  (System_Int32_array **)v783,
                                                                                  v784,
                                                                                  v785,
                                                                                  v786,
                                                                                  v787,
                                                                                  v788,
                                                                                  v789);
                                                                                v790 = (ServantVoiceMaster_o *)sub_B70764(ServantVoiceMaster_TypeInfo);
                                                                                ServantVoiceMaster___ctor(v790, 0LL);
                                                                                if ( !v790
                                                                                  || (v3 = sub_B70754(
                                                                                             v790,
                                                                                             *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                {
                                                                                  if ( *v11 <= 0x70u )
                                                                                    goto LABEL_536;
                                                                                  *(_QWORD *)(v1 + 928) = v790;
                                                                                  sub_B70630(
                                                                                    (BattleServantConfConponent_o *)(v1 + 928),
                                                                                    (System_Int32_array **)v790,
                                                                                    v791,
                                                                                    v792,
                                                                                    v793,
                                                                                    v794,
                                                                                    v795,
                                                                                    v796);
                                                                                  v797 = (CombineLimitMaster_o *)sub_B70764(CombineLimitMaster_TypeInfo);
                                                                                  CombineLimitMaster___ctor(v797, 0LL);
                                                                                  if ( !v797
                                                                                    || (v3 = sub_B70754(
                                                                                               v797,
                                                                                               *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                  {
                                                                                    if ( *v11 <= 0x71u )
                                                                                      goto LABEL_536;
                                                                                    *(_QWORD *)(v1 + 936) = v797;
                                                                                    sub_B70630(
                                                                                      (BattleServantConfConponent_o *)(v1 + 936),
                                                                                      (System_Int32_array **)v797,
                                                                                      v798,
                                                                                      v799,
                                                                                      v800,
                                                                                      v801,
                                                                                      v802,
                                                                                      v803);
                                                                                    v804 = (CardMaster_o *)sub_B70764(CardMaster_TypeInfo);
                                                                                    CardMaster___ctor(v804, 0LL);
                                                                                    if ( !v804
                                                                                      || (v3 = sub_B70754(
                                                                                                 v804,
                                                                                                 *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                    {
                                                                                      if ( *v11 <= 0x72u )
                                                                                        goto LABEL_536;
                                                                                      *(_QWORD *)(v1 + 944) = v804;
                                                                                      sub_B70630(
                                                                                        (BattleServantConfConponent_o *)(v1 + 944),
                                                                                        (System_Int32_array **)v804,
                                                                                        v805,
                                                                                        v806,
                                                                                        v807,
                                                                                        v808,
                                                                                        v809,
                                                                                        v810);
                                                                                      v811 = (CombineQpSvtEquipMaster_o *)sub_B70764(CombineQpSvtEquipMaster_TypeInfo);
                                                                                      CombineQpSvtEquipMaster___ctor(
                                                                                        v811,
                                                                                        0LL);
                                                                                      if ( !v811
                                                                                        || (v3 = sub_B70754(
                                                                                                   v811,
                                                                                                   *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                      {
                                                                                        if ( *v11 <= 0x73u )
                                                                                          goto LABEL_536;
                                                                                        *(_QWORD *)(v1 + 952) = v811;
                                                                                        sub_B70630(
                                                                                          (BattleServantConfConponent_o *)(v1 + 952),
                                                                                          (System_Int32_array **)v811,
                                                                                          v812,
                                                                                          v813,
                                                                                          v814,
                                                                                          v815,
                                                                                          v816,
                                                                                          v817);
                                                                                        v818 = (ServantRarityMaster_o *)sub_B70764(ServantRarityMaster_TypeInfo);
                                                                                        ServantRarityMaster___ctor(
                                                                                          v818,
                                                                                          0LL);
                                                                                        if ( !v818
                                                                                          || (v3 = sub_B70754(
                                                                                                     v818,
                                                                                                     *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                        {
                                                                                          if ( *v11 <= 0x74u )
                                                                                            goto LABEL_536;
                                                                                          *(_QWORD *)(v1 + 960) = v818;
                                                                                          sub_B70630(
                                                                                            (BattleServantConfConponent_o *)(v1 + 960),
                                                                                            (System_Int32_array **)v818,
                                                                                            v819,
                                                                                            v820,
                                                                                            v821,
                                                                                            v822,
                                                                                            v823,
                                                                                            v824);
                                                                                          v825 = (SetItemMaster_o *)sub_B70764(SetItemMaster_TypeInfo);
                                                                                          SetItemMaster___ctor(
                                                                                            v825,
                                                                                            0LL);
                                                                                          if ( !v825
                                                                                            || (v3 = sub_B70754(v825, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                          {
                                                                                            if ( *v11 <= 0x75u )
                                                                                              goto LABEL_536;
                                                                                            *(_QWORD *)(v1 + 968) = v825;
                                                                                            sub_B70630(
                                                                                              (BattleServantConfConponent_o *)(v1 + 968),
                                                                                              (System_Int32_array **)v825,
                                                                                              v826,
                                                                                              v827,
                                                                                              v828,
                                                                                              v829,
                                                                                              v830,
                                                                                              v831);
                                                                                            v832 = (RecoverMaster_o *)sub_B70764(RecoverMaster_TypeInfo);
                                                                                            RecoverMaster___ctor(
                                                                                              v832,
                                                                                              0LL);
                                                                                            if ( !v832
                                                                                              || (v3 = sub_B70754(v832, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                            {
                                                                                              if ( *v11 <= 0x76u )
                                                                                                goto LABEL_536;
                                                                                              *(_QWORD *)(v1 + 976) = v832;
                                                                                              sub_B70630(
                                                                                                (BattleServantConfConponent_o *)(v1 + 976),
                                                                                                (System_Int32_array **)v832,
                                                                                                v833,
                                                                                                v834,
                                                                                                v835,
                                                                                                v836,
                                                                                                v837,
                                                                                                v838);
                                                                                              v839 = (BannerMaster_o *)sub_B70764(BannerMaster_TypeInfo);
                                                                                              BannerMaster___ctor(
                                                                                                v839,
                                                                                                0LL);
                                                                                              if ( !v839
                                                                                                || (v3 = sub_B70754(v839, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                              {
                                                                                                if ( *v11 <= 0x77u )
                                                                                                  goto LABEL_536;
                                                                                                *(_QWORD *)(v1 + 984) = v839;
                                                                                                sub_B70630(
                                                                                                  (BattleServantConfConponent_o *)(v1 + 984),
                                                                                                  (System_Int32_array **)v839,
                                                                                                  v840,
                                                                                                  v841,
                                                                                                  v842,
                                                                                                  v843,
                                                                                                  v844,
                                                                                                  v845);
                                                                                                v846 = (ShopReleaseMaster_o *)sub_B70764(ShopReleaseMaster_TypeInfo);
                                                                                                ShopReleaseMaster___ctor(
                                                                                                  v846,
                                                                                                  0LL);
                                                                                                if ( !v846 || (v3 = sub_B70754(v846, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                {
                                                                                                  if ( *v11 <= 0x78u )
                                                                                                    goto LABEL_536;
                                                                                                  *(_QWORD *)(v1 + 992) = v846;
                                                                                                  sub_B70630(
                                                                                                    (BattleServantConfConponent_o *)(v1 + 992),
                                                                                                    (System_Int32_array **)v846,
                                                                                                    v847,
                                                                                                    v848,
                                                                                                    v849,
                                                                                                    v850,
                                                                                                    v851,
                                                                                                    v852);
                                                                                                  v853 = (EventRewardMaster_o *)sub_B70764(EventRewardMaster_TypeInfo);
                                                                                                  EventRewardMaster___ctor(
                                                                                                    v853,
                                                                                                    0LL);
                                                                                                  if ( !v853 || (v3 = sub_B70754(v853, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                  {
                                                                                                    if ( *v11 <= 0x79u )
                                                                                                      goto LABEL_536;
                                                                                                    *(_QWORD *)(v1 + 1000) = v853;
                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1000), (System_Int32_array **)v853, v854, v855, v856, v857, v858, v859);
                                                                                                    v860 = (EventDetailMaster_o *)sub_B70764(EventDetailMaster_TypeInfo);
                                                                                                    EventDetailMaster___ctor(v860, 0LL);
                                                                                                    if ( !v860 || (v3 = sub_B70754(v860, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                    {
                                                                                                      if ( *v11 <= 0x7Au )
                                                                                                        goto LABEL_536;
                                                                                                      *(_QWORD *)(v1 + 1008) = v860;
                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1008), (System_Int32_array **)v860, v861, v862, v863, v864, v865, v866);
                                                                                                      v867 = (EventServantMaster_o *)sub_B70764(EventServantMaster_TypeInfo);
                                                                                                      EventServantMaster___ctor(v867, 0LL);
                                                                                                      if ( !v867 || (v3 = sub_B70754(v867, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                      {
                                                                                                        if ( *v11 <= 0x7Bu )
                                                                                                          goto LABEL_536;
                                                                                                        *(_QWORD *)(v1 + 1016) = v867;
                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1016), (System_Int32_array **)v867, v868, v869, v870, v871, v872, v873);
                                                                                                        v874 = (BoxGachaMaster_o *)sub_B70764(BoxGachaMaster_TypeInfo);
                                                                                                        BoxGachaMaster___ctor(v874, 0LL);
                                                                                                        if ( !v874 || (v3 = sub_B70754(v874, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                        {
                                                                                                          if ( *v11 <= 0x7Cu )
                                                                                                            goto LABEL_536;
                                                                                                          *(_QWORD *)(v1 + 1024) = v874;
                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1024), (System_Int32_array **)v874, v875, v876, v877, v878, v879, v880);
                                                                                                          v881 = (BoxGachaBaseMaster_o *)sub_B70764(BoxGachaBaseMaster_TypeInfo);
                                                                                                          BoxGachaBaseMaster___ctor(v881, 0LL);
                                                                                                          if ( !v881 || (v3 = sub_B70754(v881, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                          {
                                                                                                            if ( *v11 <= 0x7Du )
                                                                                                              goto LABEL_536;
                                                                                                            *(_QWORD *)(v1 + 1032) = v881;
                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1032), (System_Int32_array **)v881, v882, v883, v884, v885, v886, v887);
                                                                                                            v888 = (BoxGachaTalkMaster_o *)sub_B70764(BoxGachaTalkMaster_TypeInfo);
                                                                                                            BoxGachaTalkMaster___ctor(v888, 0LL);
                                                                                                            if ( !v888 || (v3 = sub_B70754(v888, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                            {
                                                                                                              if ( *v11 <= 0x7Eu )
                                                                                                                goto LABEL_536;
                                                                                                              *(_QWORD *)(v1 + 1040) = v888;
                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1040), (System_Int32_array **)v888, v889, v890, v891, v892, v893, v894);
                                                                                                              v895 = (UserBoxGachaMaster_o *)sub_B70764(UserBoxGachaMaster_TypeInfo);
                                                                                                              UserBoxGachaMaster___ctor(v895, 0LL);
                                                                                                              if ( !v895 || (v3 = sub_B70754(v895, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                              {
                                                                                                                if ( *v11 <= 0x7Fu )
                                                                                                                  goto LABEL_536;
                                                                                                                *(_QWORD *)(v1 + 1048) = v895;
                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1048), (System_Int32_array **)v895, v896, v897, v898, v899, v900, v901);
                                                                                                                v902 = (BoxGachaHistoryMaster_o *)sub_B70764(BoxGachaHistoryMaster_TypeInfo);
                                                                                                                BoxGachaHistoryMaster___ctor(v902, 0LL);
                                                                                                                if ( !v902 || (v3 = sub_B70754(v902, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                {
                                                                                                                  if ( *v11 <= 0x80u )
                                                                                                                    goto LABEL_536;
                                                                                                                  *(_QWORD *)(v1 + 1056) = v902;
                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1056), (System_Int32_array **)v902, v903, v904, v905, v906, v907, v908);
                                                                                                                  v909 = (BattleBgMaster_o *)sub_B70764(BattleBgMaster_TypeInfo);
                                                                                                                  BattleBgMaster___ctor(v909, 0LL);
                                                                                                                  if ( !v909 || (v3 = sub_B70754(v909, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                  {
                                                                                                                    if ( *v11 <= 0x81u )
                                                                                                                      goto LABEL_536;
                                                                                                                    *(_QWORD *)(v1 + 1064) = v909;
                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1064), (System_Int32_array **)v909, v910, v911, v912, v913, v914, v915);
                                                                                                                    v916 = (TipsBattleMaster_o *)sub_B70764(TipsBattleMaster_TypeInfo);
                                                                                                                    TipsBattleMaster___ctor(v916, 0LL);
                                                                                                                    if ( !v916 || (v3 = sub_B70754(v916, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                    {
                                                                                                                      if ( *v11 <= 0x82u )
                                                                                                                        goto LABEL_536;
                                                                                                                      *(_QWORD *)(v1 + 1072) = v916;
                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1072), (System_Int32_array **)v916, v917, v918, v919, v920, v921, v922);
                                                                                                                      v923 = (UserLoginMaster_o *)sub_B70764(UserLoginMaster_TypeInfo);
                                                                                                                      UserLoginMaster___ctor(v923, 0LL);
                                                                                                                      if ( !v923 || (v3 = sub_B70754(v923, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                      {
                                                                                                                        if ( *v11 <= 0x83u )
                                                                                                                          goto LABEL_536;
                                                                                                                        *(_QWORD *)(v1 + 1080) = v923;
                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1080), (System_Int32_array **)v923, v924, v925, v926, v927, v928, v929);
                                                                                                                        v930 = (VoiceMaster_o *)sub_B70764(VoiceMaster_TypeInfo);
                                                                                                                        VoiceMaster___ctor(v930, 0LL);
                                                                                                                        if ( !v930 || (v3 = sub_B70754(v930, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                        {
                                                                                                                          if ( *v11 <= 0x84u )
                                                                                                                            goto LABEL_536;
                                                                                                                          *(_QWORD *)(v1 + 1088) = v930;
                                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1088), (System_Int32_array **)v930, v931, v932, v933, v934, v935, v936);
                                                                                                                          v937 = (EventRewardExtraMaster_o *)sub_B70764(EventRewardExtraMaster_TypeInfo);
                                                                                                                          EventRewardExtraMaster___ctor(v937, 0LL);
                                                                                                                          if ( !v937 || (v3 = sub_B70754(v937, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                          {
                                                                                                                            if ( *v11 <= 0x85u )
                                                                                                                              goto LABEL_536;
                                                                                                                            *(_QWORD *)(v1 + 1096) = v937;
                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1096), (System_Int32_array **)v937, v938, v939, v940, v941, v942, v943);
                                                                                                                            v944 = (EventMissionMaster_o *)sub_B70764(EventMissionMaster_TypeInfo);
                                                                                                                            EventMissionMaster___ctor(v944, 0LL);
                                                                                                                            if ( !v944 || (v3 = sub_B70754(v944, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                            {
                                                                                                                              if ( *v11 <= 0x86u )
                                                                                                                                goto LABEL_536;
                                                                                                                              *(_QWORD *)(v1 + 1104) = v944;
                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1104), (System_Int32_array **)v944, v945, v946, v947, v948, v949, v950);
                                                                                                                              v951 = (EventMissionActionMaster_o *)sub_B70764(EventMissionActionMaster_TypeInfo);
                                                                                                                              EventMissionActionMaster___ctor(v951, 0LL);
                                                                                                                              if ( !v951 || (v3 = sub_B70754(v951, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                              {
                                                                                                                                if ( *v11 <= 0x87u )
                                                                                                                                  goto LABEL_536;
                                                                                                                                *(_QWORD *)(v1 + 1112) = v951;
                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1112), (System_Int32_array **)v951, v952, v953, v954, v955, v956, v957);
                                                                                                                                v958 = (EventMissionActionAddMaster_o *)sub_B70764(EventMissionActionAddMaster_TypeInfo);
                                                                                                                                EventMissionActionAddMaster___ctor(v958, 0LL);
                                                                                                                                if ( !v958 || (v3 = sub_B70754(v958, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                {
                                                                                                                                  if ( *v11 <= 0x88u )
                                                                                                                                    goto LABEL_536;
                                                                                                                                  *(_QWORD *)(v1 + 1120) = v958;
                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1120), (System_Int32_array **)v958, v959, v960, v961, v962, v963, v964);
                                                                                                                                  v965 = (EventMissionConditionMaster_o *)sub_B70764(EventMissionConditionMaster_TypeInfo);
                                                                                                                                  EventMissionConditionMaster___ctor(v965, 0LL);
                                                                                                                                  if ( !v965 || (v3 = sub_B70754(v965, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                  {
                                                                                                                                    if ( *v11 <= 0x89u )
                                                                                                                                      goto LABEL_536;
                                                                                                                                    *(_QWORD *)(v1 + 1128) = v965;
                                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1128), (System_Int32_array **)v965, v966, v967, v968, v969, v970, v971);
                                                                                                                                    v972 = (EventMissionCondDetailMaster_o *)sub_B70764(EventMissionCondDetailMaster_TypeInfo);
                                                                                                                                    EventMissionCondDetailMaster___ctor(v972, 0LL);
                                                                                                                                    if ( !v972 || (v3 = sub_B70754(v972, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                    {
                                                                                                                                      if ( *v11 <= 0x8Au )
                                                                                                                                        goto LABEL_536;
                                                                                                                                      *(_QWORD *)(v1 + 1136) = v972;
                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1136), (System_Int32_array **)v972, v973, v974, v975, v976, v977, v978);
                                                                                                                                      v979 = (EventMissionAddMaster_o *)sub_B70764(EventMissionAddMaster_TypeInfo);
                                                                                                                                      EventMissionAddMaster___ctor(v979, 0LL);
                                                                                                                                      if ( !v979 || (v3 = sub_B70754(v979, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                      {
                                                                                                                                        if ( *v11 <= 0x8Bu )
                                                                                                                                          goto LABEL_536;
                                                                                                                                        *(_QWORD *)(v1 + 1144) = v979;
                                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1144), (System_Int32_array **)v979, v980, v981, v982, v983, v984, v985);
                                                                                                                                        v986 = (CompleteMissionMaster_o *)sub_B70764(CompleteMissionMaster_TypeInfo);
                                                                                                                                        CompleteMissionMaster___ctor(v986, 0LL);
                                                                                                                                        if ( !v986 || (v3 = sub_B70754(v986, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                        {
                                                                                                                                          if ( *v11 <= 0x8Cu )
                                                                                                                                            goto LABEL_536;
                                                                                                                                          *(_QWORD *)(v1 + 1152) = v986;
                                                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1152), (System_Int32_array **)v986, v987, v988, v989, v990, v991, v992);
                                                                                                                                          v993 = (EventRewardSetMaster_o *)sub_B70764(EventRewardSetMaster_TypeInfo);
                                                                                                                                          EventRewardSetMaster___ctor(v993, 0LL);
                                                                                                                                          if ( !v993 || (v3 = sub_B70754(v993, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                          {
                                                                                                                                            if ( *v11 <= 0x8Du )
                                                                                                                                              goto LABEL_536;
                                                                                                                                            *(_QWORD *)(v1 + 1160) = v993;
                                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1160), (System_Int32_array **)v993, v994, v995, v996, v997, v998, v999);
                                                                                                                                            v1000 = (UserEventMissionMaster_o *)sub_B70764(UserEventMissionMaster_TypeInfo);
                                                                                                                                            UserEventMissionMaster___ctor(v1000, 0LL);
                                                                                                                                            if ( !v1000 || (v3 = sub_B70754(v1000, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                            {
                                                                                                                                              if ( *v11 <= 0x8Eu )
                                                                                                                                                goto LABEL_536;
                                                                                                                                              *(_QWORD *)(v1 + 1168) = v1000;
                                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1168), (System_Int32_array **)v1000, v1001, v1002, v1003, v1004, v1005, v1006);
                                                                                                                                              v1007 = (UserEventMissionCondDetailMaster_o *)sub_B70764(UserEventMissionCondDetailMaster_TypeInfo);
                                                                                                                                              UserEventMissionCondDetailMaster___ctor(v1007, 0LL);
                                                                                                                                              if ( !v1007 || (v3 = sub_B70754(v1007, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                              {
                                                                                                                                                if ( *v11 <= 0x8Fu )
                                                                                                                                                  goto LABEL_536;
                                                                                                                                                *(_QWORD *)(v1 + 1176) = v1007;
                                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1176), (System_Int32_array **)v1007, v1008, v1009, v1010, v1011, v1012, v1013);
                                                                                                                                                v1014 = (BoxGachaBaseDetailMaster_o *)sub_B70764(BoxGachaBaseDetailMaster_TypeInfo);
                                                                                                                                                BoxGachaBaseDetailMaster___ctor(v1014, 0LL);
                                                                                                                                                if ( !v1014 || (v3 = sub_B70754(v1014, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                {
                                                                                                                                                  if ( *v11 <= 0x90u )
                                                                                                                                                    goto LABEL_536;
                                                                                                                                                  *(_QWORD *)(v1 + 1184) = v1014;
                                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1184), (System_Int32_array **)v1014, v1015, v1016, v1017, v1018, v1019, v1020);
                                                                                                                                                  v1021 = (UserServantLeaderMaster_o *)sub_B70764(UserServantLeaderMaster_TypeInfo);
                                                                                                                                                  UserServantLeaderMaster___ctor(v1021, 0LL);
                                                                                                                                                  if ( !v1021 || (v3 = sub_B70754(v1021, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                  {
                                                                                                                                                    if ( *v11 <= 0x91u )
                                                                                                                                                      goto LABEL_536;
                                                                                                                                                    *(_QWORD *)(v1 + 1192) = v1021;
                                                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1192), (System_Int32_array **)v1021, v1022, v1023, v1024, v1025, v1026, v1027);
                                                                                                                                                    v1028 = (ClosedMessageMaster_o *)sub_B70764(ClosedMessageMaster_TypeInfo);
                                                                                                                                                    ClosedMessageMaster___ctor(v1028, 0LL);
                                                                                                                                                    if ( !v1028 || (v3 = sub_B70754(v1028, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                    {
                                                                                                                                                      if ( *v11 <= 0x92u )
                                                                                                                                                        goto LABEL_536;
                                                                                                                                                      *(_QWORD *)(v1 + 1200) = v1028;
                                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1200), (System_Int32_array **)v1028, v1029, v1030, v1031, v1032, v1033, v1034);
                                                                                                                                                      v1035 = (FunctionGroupMaster_o *)sub_B70764(FunctionGroupMaster_TypeInfo);
                                                                                                                                                      FunctionGroupMaster___ctor(v1035, 0LL);
                                                                                                                                                      if ( !v1035 || (v3 = sub_B70754(v1035, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                      {
                                                                                                                                                        if ( *v11 <= 0x93u )
                                                                                                                                                          goto LABEL_536;
                                                                                                                                                        *(_QWORD *)(v1 + 1208) = v1035;
                                                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1208), (System_Int32_array **)v1035, v1036, v1037, v1038, v1039, v1040, v1041);
                                                                                                                                                        v1042 = (EventRaidMaster_o *)sub_B70764(EventRaidMaster_TypeInfo);
                                                                                                                                                        EventRaidMaster___ctor(v1042, 0LL);
                                                                                                                                                        if ( !v1042 || (v3 = sub_B70754(v1042, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                        {
                                                                                                                                                          if ( *v11 > 0x94u )
                                                                                                                                                          {
                                                                                                                                                            *(_QWORD *)(v1 + 1216) = v1042;
                                                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1216), (System_Int32_array **)v1042, v1043, v1044, v1045, v1046, v1047, v1048);
                                                                                                                                                            v1049 = (TotalEventRaidMaster_o *)sub_B70764(TotalEventRaidMaster_TypeInfo);
                                                                                                                                                            TotalEventRaidMaster___ctor(v1049, 0LL);
                                                                                                                                                            if ( !v1049 || (v1050 = sub_B70754(v1049, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                            {
                                                                                                                                                              if ( *v11 <= 0x95u )
                                                                                                                                                                goto LABEL_537;
                                                                                                                                                              *(_QWORD *)(v1 + 1224) = v1049;
                                                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1224), (System_Int32_array **)v1049, v1051, v1052, v1053, v1054, v1055, v1056);
                                                                                                                                                              v1057 = (UserEventRaidMaster_o *)sub_B70764(UserEventRaidMaster_TypeInfo);
                                                                                                                                                              UserEventRaidMaster___ctor(v1057, 0LL);
                                                                                                                                                              if ( !v1057 || (v1050 = sub_B70754(v1057, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                              {
                                                                                                                                                                if ( *v11 <= 0x96u )
                                                                                                                                                                  goto LABEL_537;
                                                                                                                                                                *(_QWORD *)(v1 + 1232) = v1057;
                                                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1232), (System_Int32_array **)v1057, v1058, v1059, v1060, v1061, v1062, v1063);
                                                                                                                                                                v1064 = (EventPointMaster_o *)sub_B70764(EventPointMaster_TypeInfo);
                                                                                                                                                                EventPointMaster___ctor(v1064, 0LL);
                                                                                                                                                                if ( !v1064 || (v1050 = sub_B70754(v1064, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                {
                                                                                                                                                                  if ( *v11 <= 0x97u )
                                                                                                                                                                    goto LABEL_537;
                                                                                                                                                                  *(_QWORD *)(v1 + 1240) = v1064;
                                                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1240), (System_Int32_array **)v1064, v1065, v1066, v1067, v1068, v1069, v1070);
                                                                                                                                                                  v1071 = (EventPointGroupMaster_o *)sub_B70764(EventPointGroupMaster_TypeInfo);
                                                                                                                                                                  EventPointGroupMaster___ctor(v1071, 0LL);
                                                                                                                                                                  if ( !v1071 || (v1050 = sub_B70754(v1071, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                  {
                                                                                                                                                                    if ( *v11 <= 0x98u )
                                                                                                                                                                      goto LABEL_537;
                                                                                                                                                                    *(_QWORD *)(v1 + 1248) = v1071;
                                                                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1248), (System_Int32_array **)v1071, v1072, v1073, v1074, v1075, v1076, v1077);
                                                                                                                                                                    v1078 = (TotalEventPointMaster_o *)sub_B70764(TotalEventPointMaster_TypeInfo);
                                                                                                                                                                    TotalEventPointMaster___ctor(v1078, 0LL);
                                                                                                                                                                    if ( !v1078 || (v1050 = sub_B70754(v1078, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                    {
                                                                                                                                                                      if ( *v11 <= 0x99u )
                                                                                                                                                                        goto LABEL_537;
                                                                                                                                                                      *(_QWORD *)(v1 + 1256) = v1078;
                                                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1256), (System_Int32_array **)v1078, v1079, v1080, v1081, v1082, v1083, v1084);
                                                                                                                                                                      v1085 = (UserEventPointMaster_o *)sub_B70764(UserEventPointMaster_TypeInfo);
                                                                                                                                                                      UserEventPointMaster___ctor(v1085, 0LL);
                                                                                                                                                                      if ( !v1085 || (v1050 = sub_B70754(v1085, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                      {
                                                                                                                                                                        if ( *v11 <= 0x9Au )
                                                                                                                                                                          goto LABEL_537;
                                                                                                                                                                        *(_QWORD *)(v1 + 1264) = v1085;
                                                                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1264), (System_Int32_array **)v1085, v1086, v1087, v1088, v1089, v1090, v1091);
                                                                                                                                                                        v1092 = (EventPointUpperMaster_o *)sub_B70764(EventPointUpperMaster_TypeInfo);
                                                                                                                                                                        EventPointUpperMaster___ctor(v1092, 0LL);
                                                                                                                                                                        if ( !v1092 || (v1050 = sub_B70754(v1092, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                        {
                                                                                                                                                                          if ( *v11 <= 0x9Bu )
                                                                                                                                                                            goto LABEL_537;
                                                                                                                                                                          *(_QWORD *)(v1 + 1272) = v1092;
                                                                                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1272), (System_Int32_array **)v1092, v1093, v1094, v1095, v1096, v1097, v1098);
                                                                                                                                                                          v1099 = (EventPointUpperReleaseMaster_o *)sub_B70764(EventPointUpperReleaseMaster_TypeInfo);
                                                                                                                                                                          EventPointUpperReleaseMaster___ctor(v1099, 0LL);
                                                                                                                                                                          if ( !v1099 || (v1050 = sub_B70754(v1099, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                          {
                                                                                                                                                                            if ( *v11 <= 0x9Cu )
                                                                                                                                                                              goto LABEL_537;
                                                                                                                                                                            *(_QWORD *)(v1 + 1280) = v1099;
                                                                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1280), (System_Int32_array **)v1099, v1100, v1101, v1102, v1103, v1104, v1105);
                                                                                                                                                                            v1106 = (EventRaceMaster_o *)sub_B70764(EventRaceMaster_TypeInfo);
                                                                                                                                                                            EventRaceMaster___ctor(v1106, 0LL);
                                                                                                                                                                            if ( !v1106 || (v1050 = sub_B70754(v1106, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                            {
                                                                                                                                                                              if ( *v11 <= 0x9Du )
                                                                                                                                                                                goto LABEL_537;
                                                                                                                                                                              *(_QWORD *)(v1 + 1288) = v1106;
                                                                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1288), (System_Int32_array **)v1106, v1107, v1108, v1109, v1110, v1111, v1112);
                                                                                                                                                                              v1113 = (EventRaceResultMaster_o *)sub_B70764(EventRaceResultMaster_TypeInfo);
                                                                                                                                                                              EventRaceResultMaster___ctor(v1113, 0LL);
                                                                                                                                                                              if ( !v1113 || (v1050 = sub_B70754(v1113, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                              {
                                                                                                                                                                                if ( *v11 <= 0x9Eu )
                                                                                                                                                                                  goto LABEL_537;
                                                                                                                                                                                *(_QWORD *)(v1 + 1296) = v1113;
                                                                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1296), (System_Int32_array **)v1113, v1114, v1115, v1116, v1117, v1118, v1119);
                                                                                                                                                                                v1120 = (QuestRacePointMaster_o *)sub_B70764(QuestRacePointMaster_TypeInfo);
                                                                                                                                                                                QuestRacePointMaster___ctor(v1120, 0LL);
                                                                                                                                                                                if ( !v1120 || (v1050 = sub_B70754(v1120, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                {
                                                                                                                                                                                  if ( *v11 <= 0x9Fu )
                                                                                                                                                                                    goto LABEL_537;
                                                                                                                                                                                  *(_QWORD *)(v1 + 1304) = v1120;
                                                                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1304), (System_Int32_array **)v1120, v1121, v1122, v1123, v1124, v1125, v1126);
                                                                                                                                                                                  v1127 = (UserEventRaceMaster_o *)sub_B70764(UserEventRaceMaster_TypeInfo);
                                                                                                                                                                                  UserEventRaceMaster___ctor(v1127, 0LL);
                                                                                                                                                                                  if ( !v1127 || (v1050 = sub_B70754(v1127, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                  {
                                                                                                                                                                                    if ( *v11 <= 0xA0u )
                                                                                                                                                                                      goto LABEL_537;
                                                                                                                                                                                    *(_QWORD *)(v1 + 1312) = v1127;
                                                                                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1312), (System_Int32_array **)v1127, v1128, v1129, v1130, v1131, v1132, v1133);
                                                                                                                                                                                    v1134 = (EventScriptMaster_o *)sub_B70764(EventScriptMaster_TypeInfo);
                                                                                                                                                                                    EventScriptMaster___ctor(v1134, 0LL);
                                                                                                                                                                                    if ( !v1134 || (v1050 = sub_B70754(v1134, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                    {
                                                                                                                                                                                      if ( *v11 <= 0xA1u )
                                                                                                                                                                                        goto LABEL_537;
                                                                                                                                                                                      *(_QWORD *)(v1 + 1320) = v1134;
                                                                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1320), (System_Int32_array **)v1134, v1135, v1136, v1137, v1138, v1139, v1140);
                                                                                                                                                                                      v1141 = (EventScriptReleaseMaster_o *)sub_B70764(EventScriptReleaseMaster_TypeInfo);
                                                                                                                                                                                      EventScriptReleaseMaster___ctor(v1141, 0LL);
                                                                                                                                                                                      if ( !v1141 || (v1050 = sub_B70754(v1141, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                      {
                                                                                                                                                                                        if ( *v11 <= 0xA2u )
                                                                                                                                                                                          goto LABEL_537;
                                                                                                                                                                                        *(_QWORD *)(v1 + 1328) = v1141;
                                                                                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1328), (System_Int32_array **)v1141, v1142, v1143, v1144, v1145, v1146, v1147);
                                                                                                                                                                                        v1148 = (UserPresentHistoryMaster_o *)sub_B70764(UserPresentHistoryMaster_TypeInfo);
                                                                                                                                                                                        UserPresentHistoryMaster___ctor(v1148, 0LL);
                                                                                                                                                                                        if ( !v1148 || (v1050 = sub_B70754(v1148, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                        {
                                                                                                                                                                                          if ( *v11 <= 0xA3u )
                                                                                                                                                                                            goto LABEL_537;
                                                                                                                                                                                          *(_QWORD *)(v1 + 1336) = v1148;
                                                                                                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1336), (System_Int32_array **)v1148, v1149, v1150, v1151, v1152, v1153, v1154);
                                                                                                                                                                                          v1155 = (MstMissionMaster_o *)sub_B70764(MstMissionMaster_TypeInfo);
                                                                                                                                                                                          MstMissionMaster___ctor(v1155, 0LL);
                                                                                                                                                                                          if ( !v1155 || (v1050 = sub_B70754(v1155, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                          {
                                                                                                                                                                                            if ( *v11 <= 0xA4u )
                                                                                                                                                                                              goto LABEL_537;
                                                                                                                                                                                            *(_QWORD *)(v1 + 1344) = v1155;
                                                                                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1344), (System_Int32_array **)v1155, v1156, v1157, v1158, v1159, v1160, v1161);
                                                                                                                                                                                            v1162 = (ServantExceedMaster_o *)sub_B70764(ServantExceedMaster_TypeInfo);
                                                                                                                                                                                            ServantExceedMaster___ctor(v1162, 0LL);
                                                                                                                                                                                            if ( !v1162 || (v1050 = sub_B70754(v1162, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                            {
                                                                                                                                                                                              if ( *v11 <= 0xA5u )
                                                                                                                                                                                                goto LABEL_537;
                                                                                                                                                                                              *(_QWORD *)(v1 + 1352) = v1162;
                                                                                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1352), (System_Int32_array **)v1162, v1163, v1164, v1165, v1166, v1167, v1168);
                                                                                                                                                                                              v1169 = (PartialMaintenanceMaster_o *)sub_B70764(PartialMaintenanceMaster_TypeInfo);
                                                                                                                                                                                              PartialMaintenanceMaster___ctor(v1169, 0LL);
                                                                                                                                                                                              if ( !v1169 || (v1050 = sub_B70754(v1169, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                              {
                                                                                                                                                                                                if ( *v11 <= 0xA6u )
                                                                                                                                                                                                  goto LABEL_537;
                                                                                                                                                                                                *(_QWORD *)(v1 + 1360) = v1169;
                                                                                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1360), (System_Int32_array **)v1169, v1170, v1171, v1172, v1173, v1174, v1175);
                                                                                                                                                                                                v1176 = (GuideMaster_o *)sub_B70764(GuideMaster_TypeInfo);
                                                                                                                                                                                                GuideMaster___ctor(v1176, 0LL);
                                                                                                                                                                                                if ( !v1176 || (v1050 = sub_B70754(v1176, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                {
                                                                                                                                                                                                  if ( *v11 <= 0xA7u )
                                                                                                                                                                                                    goto LABEL_537;
                                                                                                                                                                                                  *(_QWORD *)(v1 + 1368) = v1176;
                                                                                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1368), (System_Int32_array **)v1176, v1177, v1178, v1179, v1180, v1181, v1182);
                                                                                                                                                                                                  v1183 = (MstMissionDisplayInfoMaster_o *)sub_B70764(MstMissionDisplayInfoMaster_TypeInfo);
                                                                                                                                                                                                  MstMissionDisplayInfoMaster___ctor(v1183, 0LL);
                                                                                                                                                                                                  if ( !v1183 || (v1050 = sub_B70754(v1183, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if ( *v11 <= 0xA8u )
                                                                                                                                                                                                      goto LABEL_537;
                                                                                                                                                                                                    *(_QWORD *)(v1 + 1376) = v1183;
                                                                                                                                                                                                    sub_B70630((BattleServantConfConponent_o *)(v1 + 1376), (System_Int32_array **)v1183, v1184, v1185, v1186, v1187, v1188, v1189);
                                                                                                                                                                                                    v1190 = (GachaGroupMaster_o *)sub_B70764(GachaGroupMaster_TypeInfo);
                                                                                                                                                                                                    GachaGroupMaster___ctor(v1190, 0LL);
                                                                                                                                                                                                    if ( !v1190 || (v1050 = sub_B70754(v1190, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if ( *v11 <= 0xA9u )
                                                                                                                                                                                                        goto LABEL_537;
                                                                                                                                                                                                      *(_QWORD *)(v1 + 1384) = v1190;
                                                                                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1384), (System_Int32_array **)v1190, v1191, v1192, v1193, v1194, v1195, v1196);
                                                                                                                                                                                                      v1197 = (QuestResetMaster_o *)sub_B70764(QuestResetMaster_TypeInfo);
                                                                                                                                                                                                      QuestResetMaster___ctor(v1197, 0LL);
                                                                                                                                                                                                      if ( !v1197 || (v1050 = sub_B70754(v1197, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if ( *v11 <= 0xAAu )
                                                                                                                                                                                                          goto LABEL_537;
                                                                                                                                                                                                        *(_QWORD *)(v1 + 1392) = v1197;
                                                                                                                                                                                                        sub_B70630((BattleServantConfConponent_o *)(v1 + 1392), (System_Int32_array **)v1197, v1198, v1199, v1200, v1201, v1202, v1203);
                                                                                                                                                                                                        v1204 = (WarAddMaster_o *)sub_B70764(WarAddMaster_TypeInfo);
                                                                                                                                                                                                        WarAddMaster___ctor(v1204, 0LL);
                                                                                                                                                                                                        if ( !v1204 || (v1050 = sub_B70754(v1204, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if ( *v11 <= 0xABu )
                                                                                                                                                                                                            goto LABEL_537;
                                                                                                                                                                                                          *(_QWORD *)(v1 + 1400) = v1204;
                                                                                                                                                                                                          sub_B70630((BattleServantConfConponent_o *)(v1 + 1400), (System_Int32_array **)v1204, v1205, v1206, v1207, v1208, v1209, v1210);
                                                                                                                                                                                                          v1211 = (EventItemDisplayMaster_o *)sub_B70764(EventItemDisplayMaster_TypeInfo);
                                                                                                                                                                                                          EventItemDisplayMaster___ctor(v1211, 0LL);
                                                                                                                                                                                                          if ( !v1211 || (v1050 = sub_B70754(v1211, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if ( *v11 <= 0xACu )
                                                                                                                                                                                                              goto LABEL_537;
                                                                                                                                                                                                            *(_QWORD *)(v1 + 1408) = v1211;
                                                                                                                                                                                                            sub_B70630((BattleServantConfConponent_o *)(v1 + 1408), (System_Int32_array **)v1211, v1212, v1213, v1214, v1215, v1216, v1217);
                                                                                                                                                                                                            v1218 = (EventItemDisplayGroupMaster_o *)sub_B70764(EventItemDisplayGroupMaster_TypeInfo);
                                                                                                                                                                                                            EventItemDisplayGroupMaster___ctor(v1218, 0LL);
                                                                                                                                                                                                            if ( !v1218 || (v1050 = sub_B70754(v1218, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if ( *v11 <= 0xADu )
                                                                                                                                                                                                                goto LABEL_537;
                                                                                                                                                                                                              *(_QWORD *)(v1 + 1416) = v1218;
                                                                                                                                                                                                              sub_B70630((BattleServantConfConponent_o *)(v1 + 1416), (System_Int32_array **)v1218, v1219, v1220, v1221, v1222, v1223, v1224);
                                                                                                                                                                                                              v1225 = (EventItemDisplayReleaseMaster_o *)sub_B70764(EventItemDisplayReleaseMaster_TypeInfo);
                                                                                                                                                                                                              EventItemDisplayReleaseMaster___ctor(v1225, 0LL);
                                                                                                                                                                                                              if ( !v1225 || (v1050 = sub_B70754(v1225, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                              {
                                                                                                                                                                                                                if ( *v11 <= 0xAEu )
                                                                                                                                                                                                                  goto LABEL_537;
                                                                                                                                                                                                                *(_QWORD *)(v1 + 1424) = v1225;
                                                                                                                                                                                                                sub_B70630((BattleServantConfConponent_o *)(v1 + 1424), (System_Int32_array **)v1225, v1226, v1227, v1228, v1229, v1230, v1231);
                                                                                                                                                                                                                v1232 = (EventTutorialMaster_o *)sub_B70764(EventTutorialMaster_TypeInfo);
                                                                                                                                                                                                                EventTutorialMaster___ctor(v1232, 0LL);
                                                                                                                                                                                                                if ( !v1232 || (v1050 = sub_B70754(v1232, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if ( *v11 <= 0xAFu )
                                                                                                                                                                                                                    goto LABEL_537;
                                                                                                                                                                                                                  *(_QWORD *)(v1 + 1432) = v1232;
                                                                                                                                                                                                                  sub_B70630((BattleServantConfConponent_o *)(v1 + 1432), (System_Int32_array **)v1232, v1233, v1234, v1235, v1236, v1237, v1238);
                                                                                                                                                                                                                  v1239 = (EventTutorialCondMaster_o *)sub_B70764(EventTutorialCondMaster_TypeInfo);
                                                                                                                                                                                                                  EventTutorialCondMaster___ctor(v1239, 0LL);
                                                                                                                                                                                                                  if ( !v1239 || (v1050 = sub_B70754(v1239, *(_QWORD *)(*(_QWORD *)v1 + 64LL))) != 0 )
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    if ( *v11 > 0xB0u )
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      *(_QWORD *)(v1 + 1440) = v1239;
                                                                                                                                                                                                                      sub_B70630((BattleServantConfConponent_o *)(v1 + 1440), (System_Int32_array **)v1239, v1240, v1241, v1242, v1243, v1244, v1245);
                                                                                                                                                                                                                      JUMPOUT(0x1A7437CLL);
                                                                                                                                                                                                                    }
LABEL_537:
                                                                                                                                                                                                                    v1247 = sub_B70798(v1050);
                                                                                                                                                                                                                    sub_B70738(v1247, 0LL);
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                            v1250 = sub_B7078C(v1050);
                                                                                                                                                            sub_B70738(v1250, 0LL);
                                                                                                                                                          }
LABEL_536:
                                                                                                                                                          v1246 = sub_B70798(v3);
                                                                                                                                                          sub_B70738(v1246, 0LL);
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v1251 = sub_B7078C(v3);
      sub_B70738(v1251, 0LL);
    }
  }
LABEL_539:
  v1249 = sub_B7078C(v3);
  sub_B70738(v1249, 0LL);
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

  if ( (byte_435312A & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_435312A = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v5 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v7 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v7);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  Il2CppObject **p_lockCountObj; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x2
  unsigned int i; // w22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x1
  unsigned int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4353127 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_8732/*"MASTER_DATA_EMPTY_LIST{0:000}"*/);
    byte_4353127 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.lockCountObj = (Il2CppObject *)v3;
  p_lockCountObj = &this->fields.lockCountObj;
  sub_B70630((BattleServantConfConponent_o *)p_lockCountObj, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  for ( i = 0; i < 0x3E6; ++i )
  {
    v17 = i + 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11);
    v14 = System_String__Format((System_String_o *)StringLiteral_8732/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v13, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get(v14, 0LL);
    if ( System_String__op_Equality(v15, v14, 0LL) )
      break;
    if ( !*p_lockCountObj )
      sub_B7076C(0LL, v16);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_lockCountObj,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  }
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMasterData_WarQuestSelectionMaster_(
        DataManager_o *this,
        const MethodInfo_1CA35A0 *method)
{
  System_Type_o *TypeFromHandle; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *masterDataBytes; // x8
  WarBoardEvalValueSquare_CalcEval_o *v7; // x20
  WarQuestSelectionMaster_o *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v10; // x19
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x19
  __int64 v15[2]; // [xsp+0h] [xbp-40h] BYREF
  int v16; // [xsp+10h] [xbp-30h]
  int v17; // [xsp+1Ch] [xbp-24h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  if ( (byte_43546D0 & 1) == 0 )
  {
    sub_B70694(&DataMasterBase_TypeInfo);
    sub_B70694(&UnityEngine_Debug_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&DataNameKind_Kind_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    sub_B70694(&StringLiteral_20731/*"master[{0}] is null[{1}:{2}]"*/);
    byte_43546D0 = 1;
  }
  value = 0LL;
  if ( (BYTE3(DataMasterBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataMasterBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataMasterBase_TypeInfo);
  }
  TypeFromHandle = (System_Type_o *)((__int64 (*)(void))method->rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->methodPointer)();
  masterDataBytes = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.masterDataBytes;
  if ( !masterDataBytes )
    goto LABEL_23;
  LODWORD(v7) = (_DWORD)TypeFromHandle;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         masterDataBytes,
         (int32_t)TypeFromHandle,
         &value,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v7 = value;
    method = (const MethodInfo_1CA35A0 *)method->rgctx_data->_1_TMaster;
    if ( (method[3].token & 0x10000) == 0 )
      sub_B08394(method);
    if ( !v7 )
      return 0LL;
    result = (WarQuestSelectionMaster_o *)sub_B70754(v7, method);
    if ( result )
      return result;
    sub_B70A60(v7);
  }
  _2_TMaster = method->rgctx_data->_2_TMaster;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = (int)_2_TMaster;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  if ( !TypeFromHandle )
LABEL_23:
    sub_B7076C(TypeFromHandle, v5);
  v10 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))TypeFromHandle->klass->vtable._3_ToString.method)(
                          TypeFromHandle,
                          TypeFromHandle->klass->vtable._4_unknown.methodPtr);
  v17 = (int)v7;
  v16 = (int)v7;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11);
  v15[0] = (__int64)DataNameKind_Kind_TypeInfo;
  v15[1] = -1LL;
  v13 = (Il2CppObject *)((__int64 (__fastcall *)(__int64 *, Il2CppMethodPointer))DataNameKind_Kind_TypeInfo->vtable._3_ToString.method)(
                          v15,
                          DataNameKind_Kind_TypeInfo->vtable._4_CompareTo.methodPtr);
  v14 = (Il2CppObject *)System_String__Format_44759232((System_String_o *)StringLiteral_20731/*"master[{0}] is null[{1}:{2}]"*/, v10, v12, v13, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v14, 0LL);
  return 0LL;
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMaster_WarQuestSelectionMaster_(const MethodInfo_1CA3540 *method)
{
  __int64 v2; // x1

  if ( (byte_43546CF & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43546CF = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    sub_B7076C(0LL, v2);
  return (WarQuestSelectionMaster_o *)((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMasterData_TMaster_->methodPointer)();
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  System_Func_Task_ContingentProperties__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4353112 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_CreateMasterData__);
    sub_B70694(&Method_System_Func_DataMasterBase_____ctor__);
    sub_B70694(&System_Func_DataMasterBase____TypeInfo);
    byte_4353112 = 1;
  }
  v3 = (System_Func_Task_ContingentProperties__o *)sub_B70764(System_Func_DataMasterBase____TypeInfo);
  System_Func_Task_ContingentProperties____ctor(
    v3,
    0LL,
    Method_DataManager_CreateMasterData__,
    (const MethodInfo_2994AB0 *)Method_System_Func_DataMasterBase_____ctor__);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v3, v4);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int entries; // w8
  __int64 v7; // x19
  Il2CppObject *v8; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int monitor; // w8
  unsigned int v17; // w23
  __int64 v18; // x2
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0

  v4 = this;
  if ( (byte_4353113 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo);
    this = (DataManager_o *)sub_B70694(&Method_System_Func_DataMasterBase____Invoke__);
    byte_4353113 = 1;
  }
  lookup = v4->fields.lookup;
  if ( lookup )
  {
    entries = (int)lookup->fields.entries;
    if ( entries >= 1 )
    {
      v7 = 0LL;
      while ( (unsigned int)v7 < entries )
      {
        this = (DataManager_o *)*((_QWORD *)&lookup->fields.count + v7);
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
                                  method);
        entries = (int)lookup->fields.entries;
        if ( (int)++v7 >= entries )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v8 = System_Func_object___Invoke(
                 (System_Func_object__o *)createMasterDataMethod,
                 (const MethodInfo_2994AC4 *)Method_System_Func_DataMasterBase____Invoke__),
          v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
            v9,
            (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v8) )
    {
LABEL_19:
      sub_B7076C(this, createMasterDataMethod);
    }
    monitor = (int)v8[1].monitor;
    if ( monitor >= 1 )
    {
      v17 = 0;
      while ( v17 < monitor )
      {
        v18 = *((_QWORD *)&v8[2].klass + (int)v17);
        if ( !v18 || !v9 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v9,
          *(_DWORD *)(v18 + 16),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
          (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        monitor = (int)v8[1].monitor;
        if ( (int)++v17 >= monitor )
          goto LABEL_18;
      }
LABEL_20:
      v25 = sub_B70798(this);
      sub_B70738(v25, 0LL);
    }
LABEL_18:
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v8;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.lookup,
      (System_Int32_array **)v8,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v4->fields.masterDataBytes = (struct System_Byte_array *)v9;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.masterDataBytes,
      (System_Int32_array **)v9,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  int v8; // w28
  unsigned __int64 v9; // x25
  signed __int64 v10; // x26
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x23
  __int64 v21; // x21
  System_Int32_array **v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x24
  __int64 v26; // x21
  WarBoardPieceData_array *lookup; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x24
  __int64 Index_WarBoardPieceData; // x0
  __int64 v30; // x1
  const MethodInfo_24389F0 *v31; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v32; // x8
  DataMasterBase_o *v33; // x24
  Il2CppObject *saveNameList; // x22
  System_Threading_SynchronizationContext_o *writeMasterDataThread; // x23
  __int64 v36; // x0
  const MethodInfo_24389F0 *v37; // x3
  __int64 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x22
  int v41; // w8
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  void *v46; // x0
  int v47; // w1
  _QWORD **v48; // x20
  __int64 v49; // x0
  __int64 v50; // x0
  struct System_Threading_Thread_o *v51; // x19
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  System_Threading_SendOrPostCallback_o *v55; // x20
  __int64 v56; // x0
  Il2CppObject *v57; // x22
  __int64 v58; // x0
  intptr_t v59; // w0
  __int64 v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v69; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v70[2]; // [xsp+28h] [xbp-78h] BYREF
  int v71; // [xsp+48h] [xbp-58h]
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF
  System_Nullable_long__o v73; // 0:x0.16
  System_Nullable_long__o v74; // 0:x0.16

  v4 = this;
  if ( (byte_4353124 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindIndex_DataMasterBase___);
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    sub_B70694(&Method_System_Predicate_DataMasterBase___ctor__);
    sub_B70694(&System_Predicate_DataMasterBase__TypeInfo);
    sub_B70694(&Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__);
    this = (DataManager_o *)sub_B70694(&DataManager___c__DisplayClass57_0_TypeInfo);
    byte_4353124 = 1;
  }
  lockTaken = 0;
  v71 = 0;
  if ( !indexList )
    sub_B7076C(this, indexList);
  v5 = sub_B70754(indexList, int___TypeInfo);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 24);
    work = (System_Byte_array *)sub_B706AC(byte___TypeInfo, 2000LL);
    if ( (int)v7 >= 1 )
    {
      v8 = 0;
      v9 = 0LL;
      v10 = (int)v7;
      do
      {
        v11 = sub_B70764(DataManager___c__DisplayClass57_0_TypeInfo);
        DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v11, 0LL);
        if ( v9 >= *(unsigned int *)(v6 + 24) )
        {
          v42 = sub_B70798(v12);
          sub_B70738(v42, 0LL);
        }
        saveDataMapList = v4->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_B7076C(v12, v13);
        v21 = *(int *)(v6 + 32 + 4 * v9);
        if ( saveDataMapList->fields._size <= (unsigned int)v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v11 )
          sub_B7076C(v12, v13);
        v22 = (System_Int32_array **)saveDataMapList->fields._items->m_Items[v21];
        *(_QWORD *)(v11 + 16) = v22;
        sub_B70630((BattleServantConfConponent_o *)(v11 + 16), v22, v14, v15, v16, v17, v18, v19);
        v25 = *(_QWORD *)&v4->fields.lastFrameTime;
        if ( !v25 )
          sub_B7076C(v23, v24);
        if ( *(_DWORD *)(v25 + 24) <= (unsigned int)v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 8 * v21 + 32);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 16), 0LL) )
        {
          lookup = (WarBoardPieceData_array *)v4->fields.lookup;
          v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v28,
            (Il2CppObject *)v11,
            Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_DataMasterBase___ctor__);
          Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                      lookup,
                                      (System_Predicate_T__o *)v28,
                                      (const MethodInfo_1FCB328 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
          {
            v32 = v4->fields.lookup;
            if ( !v32 )
              sub_B7076C(Index_WarBoardPieceData, v30);
            if ( (unsigned int)Index_WarBoardPieceData >= LODWORD(v32->fields.entries) )
            {
              v43 = sub_B70798(Index_WarBoardPieceData);
              sub_B70738(v43, 0LL);
            }
            if ( !v26 )
              sub_B7076C(Index_WarBoardPieceData, v30);
            if ( !*(_DWORD *)(v26 + 24) )
            {
              v45 = sub_B70798(Index_WarBoardPieceData);
              sub_B70738(v45, 0LL);
            }
            v33 = (DataMasterBase_o *)*((_QWORD *)&v32->fields.count + (int)Index_WarBoardPieceData);
            saveNameList = (Il2CppObject *)v4->fields.saveNameList;
            writeMasterDataThread = (System_Threading_SynchronizationContext_o *)v4->fields.writeMasterDataThread;
            *(_QWORD *)&v73.fields.has_value = *(_QWORD *)(v26 + 32);
            v70[0].fields.value = 0LL;
            *(_QWORD *)&v70[0].fields.has_value = 0LL;
            v73.fields.value = (int64_t)v70;
            System_Nullable_long____ctor(v73, Method_System_Nullable_long___ctor__, v31);
            if ( *(_DWORD *)(v26 + 24) <= 1u )
            {
              v44 = sub_B70798(v36);
              sub_B70738(v44, 0LL);
            }
            *(_QWORD *)&v74.fields.has_value = *(_QWORD *)(v26 + 40);
            v69.fields.value = 0LL;
            *(_QWORD *)&v69.fields.has_value = 0LL;
            v74.fields.value = (int64_t)&v69;
            System_Nullable_long____ctor(v74, Method_System_Nullable_long___ctor__, v37);
            if ( !v33 )
              sub_B7076C(v38, v39);
            DataMasterBase__ReplacedForThread(v33, saveNameList, writeMasterDataThread, v70[0], v69, work, 0LL);
          }
        }
        v40 = *(Il2CppObject **)&v4->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15668400(v40, &lockTaken, 0LL);
        ++LODWORD(v4->fields.masterLoadThreads);
        *((_DWORD *)&v70[1].fields.value + v8) = 215;
        v8 = ++v71;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v40, 0LL);
        if ( v8 )
        {
          v41 = v8 - 1;
          if ( *((_DWORD *)&v70[0].fields.has_value + v8 + 1) == 215 )
          {
            --v8;
            v71 = v41;
          }
        }
        ++v9;
      }
      while ( (__int64)v9 < v10 );
    }
  }
  else
  {
    v46 = (void *)sub_B70A60(indexList);
    if ( v47 != 1 )
      _Unwind_Resume(v46);
    v48 = (_QWORD **)__cxa_begin_catch(v46);
    v49 = sub_B70698(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v49, **v48) & 1) != 0 )
    {
      __cxa_end_catch();
    }
    else
    {
      v50 = sub_B70698(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v50, **v48) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v48;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v51 = v4->fields.writeMasterDataThread;
      if ( (*(_BYTE *)(sub_B70698(&DataManager___c_TypeInfo) + 307) & 4) != 0
        && !*(_DWORD *)(sub_B70698(&DataManager___c_TypeInfo) + 224) )
      {
        v52 = sub_B70698(&DataManager___c_TypeInfo);
        j_il2cpp_runtime_class_init_0(v52);
      }
      v53 = sub_B70698(&DataManager___c_TypeInfo);
      v55 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v53 + 184) + 8LL);
      if ( !v55 )
      {
        if ( (*(_BYTE *)(sub_B70698(&DataManager___c_TypeInfo) + 307) & 4) != 0
          && !*(_DWORD *)(sub_B70698(&DataManager___c_TypeInfo) + 224) )
        {
          v56 = sub_B70698(&DataManager___c_TypeInfo);
          j_il2cpp_runtime_class_init_0(v56);
        }
        v57 = **(Il2CppObject ***)(sub_B70698(&DataManager___c_TypeInfo) + 184);
        v58 = sub_B70698(&System_Threading_SendOrPostCallback_TypeInfo);
        v55 = (System_Threading_SendOrPostCallback_o *)sub_B70764(v58);
        v59 = sub_B70698(&Method_DataManager___c__LoadMasterDataThread_b__57_1__);
        System_Threading_SendOrPostCallback___ctor(v55, v57, v59, 0LL);
        v60 = *(_QWORD *)(sub_B70698(&DataManager___c_TypeInfo) + 184);
        *(_QWORD *)(v60 + 8) = v55;
        sub_B70630((BattleServantConfConponent_o *)(v60 + 8), (System_Int32_array **)v55, v61, v62, v63, v64, v65, v66);
      }
      if ( !v51 )
        sub_B7076C(v53, v54);
      ((void (__fastcall *)(struct System_Threading_Thread_o *, System_Threading_SendOrPostCallback_o *, _QWORD, void *))v51->klass[1]._1.namespaze)(
        v51,
        v55,
        0LL,
        v51->klass[1]._1.byval_arg.data);
    }
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
  __int64 v6; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Threading_SynchronizationContext_o *Current; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  struct System_Threading_SynchronizationContext_o **p_context; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x21
  System_Comparison_int__o *v38; // x23
  __int64 v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Threading_ParameterizedThreadStart_o *v46; // x24
  System_Threading_Thread_o *v47; // x22
  System_Func_int__bool__o *v48; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Int32_array *v50; // x0
  int v51; // w8
  bool v52; // nf

  if ( (byte_4353122 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Sort_int____69231064);
    sub_B70694(&Method_System_Comparison_int___ctor__);
    sub_B70694(&System_Comparison_int__TypeInfo);
    sub_B70694(&Method_DataManager_LoadMasterDataThread__);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Thread__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Thread___ctor__);
    sub_B70694(&System_Collections_Generic_List_Thread__TypeInfo);
    sub_B70694(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_B70694(&System_Threading_Thread_TypeInfo);
    sub_B70694(&Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__);
    sub_B70694(&DataManager___c__DisplayClass55_0_TypeInfo);
    sub_B70694(&Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__);
    sub_B70694(&DataManager___c__DisplayClass55_1_TypeInfo);
    byte_4353122 = 1;
  }
  v6 = sub_B70764(DataManager___c__DisplayClass55_0_TypeInfo);
  DataManager___c__DisplayClass55_0___ctor((DataManager___c__DisplayClass55_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = loadedIndices;
  sub_B70630(
    (BattleServantConfConponent_o *)(v6 + 24),
    (System_Int32_array **)loadedIndices,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)Current;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThread,
    (System_Int32_array **)Current,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Thread___ctor__);
  p_context = &this->fields.context;
  this->fields.context = (struct System_Threading_SynchronizationContext_o *)v28;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.context,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v37 = System_Linq_Enumerable__ToArray_int_(
          v36,
          (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v38 = (System_Comparison_int__o *)sub_B70764(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v38,
    (Il2CppObject *)v6,
    Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__,
    (const MethodInfo_2B04204 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__29152136(
    v37,
    (System_Comparison_T__o *)v38,
    (const MethodInfo_1BCD388 *)Method_System_Array_Sort_int____69231064);
  v39 = sub_B70764(DataManager___c__DisplayClass55_1_TypeInfo);
  DataManager___c__DisplayClass55_1___ctor((DataManager___c__DisplayClass55_1_o *)v39, 0LL);
  if ( !v39 )
LABEL_10:
    sub_B7076C(v7, v8);
  *(_QWORD *)(v39 + 24) = v6;
  sub_B70630((BattleServantConfConponent_o *)(v39 + 24), (System_Int32_array **)v6, v40, v41, v42, v43, v44, v45);
  *(_DWORD *)(v39 + 16) = 0;
  do
  {
    v46 = (System_Threading_ParameterizedThreadStart_o *)sub_B70764(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v46,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v47 = (System_Threading_Thread_o *)sub_B70764(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_41925104(v47, v46, 0LL);
    if ( !v47 )
      goto LABEL_10;
    System_Threading_Thread__set_IsBackground(v47, 1, 0LL);
    v48 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v48,
      (Il2CppObject *)v39,
      Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    v49 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v37,
            (System_Func_TSource__bool__o *)v48,
            (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
    v50 = System_Linq_Enumerable__ToArray_int_(
            v49,
            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_41925508(v47, &v50->obj, 0LL);
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_context;
    if ( !*p_context )
      goto LABEL_10;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v7,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Thread__Add__);
    v51 = *(_DWORD *)(v39 + 16) + 1;
    v52 = *(_DWORD *)(v39 + 16) - 4 < 0;
    *(_DWORD *)(v39 + 16) = v51;
  }
  while ( v52 != __OFSUB__(v51, 5) );
}


void __fastcall DataManager__StartWriteLocalFile(
        DataManager_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Threading_ParameterizedThreadStart_o *v10; // x21
  System_Threading_Thread_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  System_Threading_Thread_o *v19; // x0

  if ( (byte_4353125 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_WriteLocalFileThread__);
    sub_B70694(&System_Threading_ParameterizedThreadStart_TypeInfo);
    sub_B70694(&System_Threading_Thread_TypeInfo);
    byte_4353125 = 1;
  }
  LOBYTE(this->fields.writeMasterDataThreadException) = 0;
  this[1].klass = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this[1], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v10 = (System_Threading_ParameterizedThreadStart_o *)sub_B70764(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v11 = (System_Threading_Thread_o *)sub_B70764(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_41925104(v11, v10, 0LL);
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v19 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( !v19 )
    sub_B7076C(0LL, v18);
  System_Threading_Thread__Start_41925508(v19, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  DataManager_o *v2; // x19
  BattleServantConfConponent_o *p_context; // x19
  BattleServantConfConponent_c *klass; // x20
  struct System_Threading_SynchronizationContext_o *context; // t1
  unsigned int v6; // w21
  __int64 v7; // x8
  System_Threading_Thread_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v2 = this;
  if ( (byte_4353123 & 1) == 0 )
  {
    this = (DataManager_o *)sub_B70694(&Method_System_Collections_Generic_List_Thread__get_Item__);
    byte_4353123 = 1;
  }
  context = v2->fields.context;
  p_context = (BattleServantConfConponent_o *)&v2->fields.context;
  klass = (BattleServantConfConponent_c *)context;
  if ( context )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( LODWORD(klass->_1.namespaze) <= v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v7 = (__int64)&klass->_1.name[8 * v6];
      v8 = *(System_Threading_Thread_o **)(v7 + 32);
      if ( !v8 )
LABEL_12:
        sub_B7076C(this, method);
      this = (DataManager_o *)System_Threading_Thread__get_IsAlive(*(System_Threading_Thread_o **)(v7 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        System_Threading_Thread__Abort(v8, 0LL);
      if ( v6 > 3 )
        break;
      klass = p_context->klass;
      ++v6;
      if ( !p_context->klass )
        goto LABEL_12;
    }
    p_context->klass = 0LL;
    sub_B70630(p_context, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *v2; // x0
  System_Threading_Thread_o **p_writeMasterDataThreadEnd; // x19
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_writeMasterDataThreadEnd = (System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  v2 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( v2 )
  {
    if ( System_Threading_Thread__get_IsAlive(v2, 0LL) )
    {
      if ( !*p_writeMasterDataThreadEnd )
        sub_B7076C(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThreadEnd, 0LL);
    }
    *p_writeMasterDataThreadEnd = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_writeMasterDataThreadEnd, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x22
  int v18; // w24
  unsigned int v19; // w25
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 v25; // x27
  __int64 v26; // x23
  __int64 v27; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  System_IO_Stream_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_4353126 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_B70694(&string_TypeInfo);
    byte_4353126 = 1;
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
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v7 = CatAndMouseGame__CatGameZ(v6, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v8, v7, 0LL);
  v17 = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !v17 )
    sub_B7076C(v9, v10);
  v18 = *(_DWORD *)(v17 + 24);
  if ( v18 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v17 + 24) <= v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 8LL * (int)v19 + 32);
      if ( !v20 )
        sub_B7076C(v9, v10);
      if ( *(_DWORD *)(v20 + 24) <= 1u )
      {
        v36 = sub_B70798(v9);
        sub_B70738(v36, 0LL);
      }
      if ( !v8 )
        sub_B7076C(v9, v10);
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
              v8,
              *(unsigned int *)(v20 + 40),
              v8->klass->vtable._18_Write.methodPtr);
      v23 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v23 )
        sub_B7076C(v21, v22);
      if ( *(_DWORD *)(v23 + 24) <= v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 8LL * (int)v19 + 32);
      if ( !v24 )
        sub_B7076C(v21, v22);
      if ( !*(_DWORD *)(v24 + 24) )
      {
        v38 = sub_B70798(v21);
        sub_B70738(v38, 0LL);
      }
      v25 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v25 )
        sub_B7076C(v21, v22);
      v26 = *(_QWORD *)(v24 + 32);
      if ( *(_DWORD *)(v25 + 24) <= v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v27 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 8LL * (int)v19 + 32);
      if ( !v27 )
        sub_B7076C(v21, v22);
      if ( *(_DWORD *)(v27 + 24) <= 1u )
      {
        v37 = sub_B70798(v21);
        sub_B70738(v37, 0LL);
      }
      v9 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Collections_Generic_List_string__o *, _QWORD, _QWORD, Il2CppMethodPointer))v8->klass->vtable._11_Write.method)(
             v8,
             this->fields.saveNameList,
             (unsigned int)v26,
             *(unsigned int *)(v27 + 40),
             v8->klass->vtable._12_Write.methodPtr);
      if ( (int)++v19 >= v18 )
        break;
      v17 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v17 )
        sub_B7076C(v9, v10);
    }
  }
  if ( v8 )
  {
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v31 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
  }
  if ( v6 )
  {
    v32 = v6->klass;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
    }
    else
    {
LABEL_45:
      v35 = sub_B08590(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v35)(v6, *(_QWORD *)(v35 + 8));
  }
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = 0LL;
  LOBYTE(this->fields.writeMasterDataThreadException) = 1;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd, 0LL, v11, v12, v13, v14, v15, v16);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.writeMasterDataThreadException;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_435310D & 1) == 0 )
  {
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435310D = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, v2);
  return System_String__Concat_44760452(CachePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_435310C & 1) == 0 )
  {
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435310C = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, v2);
  return System_String__Concat_44760452(CachePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_435310A & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435310A = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  DataManager_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_435310B & 1) == 0 )
  {
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435310B = 1;
  }
  v1 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v1);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, v2);
  return System_String__Concat_44760452(CachePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_QuestReleaseMaster_(
        DataManager_o *this,
        const MethodInfo_1CA37BC *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_43546D1 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_43546D1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v3 = ((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)();
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)(v3 + 32);
}


WarEntity_array *__fastcall DataManager__getEntitys_WarMaster__WarEntity_(
        DataManager_o *this,
        const MethodInfo_1CA3834 *method)
{
  __int64 v3; // x1

  if ( (byte_43546D2 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_43546D2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)() )
    sub_B7076C(0LL, v3);
  return (WarEntity_array *)((__int64 (*)(void))method->rgctx_data->_2_DataMasterBase_getEntitys_T_->methodPointer)();
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4353118 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353118 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->dataVersion;
}


int64_t __fastcall DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4353119 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353119 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4353128 & 1) == 0 )
  {
    sub_B70694(&Crc32_TypeInfo);
    byte_4353128 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B7076C(0LL, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
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

  if ( (byte_435310E & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&CacheFolderName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435310E = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( (BYTE3(CacheFolderName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CacheFolderName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  }
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_44760452(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_890/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_435311D & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_435311D = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterDataResult;
}


int32_t __fastcall DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_435311C & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_435311C = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->readMasterVersionResult;
}


int32_t __fastcall DataManager__getRevisionTotal(DataManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x10
  int entries; // w8
  __int64 v4; // x9
  int32_t *p_count; // x10
  __int64 v6; // x11

  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_9;
  entries = (int)lookup->fields.entries;
  if ( entries >= 1 )
  {
    v4 = 0LL;
    this = 0LL;
    p_count = &lookup->fields.count;
    while ( 1 )
    {
      v6 = *(_QWORD *)&p_count[2 * v4];
      if ( !v6 )
        break;
      ++v4;
      this = (DataManager_o *)(unsigned int)(*(_DWORD *)(v6 + 64) + (_DWORD)this);
      if ( (int)v4 >= entries )
        return (int)this;
    }
LABEL_9:
    sub_B7076C(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4353115 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353115 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->serverHash;
}


int32_t __fastcall DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4353120 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353120 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v2 = DataManager_TypeInfo;
  }
  return v2->static_fields->updateMasterDataResult;
}


bool __fastcall DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.datalist;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435311F & 1) == 0 )
  {
    sub_B70694(&DataManager__readMasterData_d__47_TypeInfo);
    byte_435311F = 1;
  }
  v3 = sub_B70764(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 saveDataMapList; // x0
  ManagerConfig_c *v4; // x0
  DataManager_c *v5; // x0
  System_String_o *CacheListFileName; // x20
  System_String_o *AllText; // x21
  System_String_o *v8; // x21
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
  __int64 v26; // x20
  __int64 v27; // x8
  System_String_o *v28; // x21
  __int64 v29; // x22
  System_String_o *v30; // x0
  ManagerConfig_c *v31; // x8
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array *v39; // x20
  System_Int32_array **v40; // x1
  int v42; // w23
  int64_t v43; // x0
  DataManager_c *v44; // x8
  int64_t v45; // x21
  struct DataManager_StaticFields *static_fields; // x9
  __int64 v47; // x22
  int v48; // w23
  System_String_o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  BattleServantConfConponent_o *v84; // x0
  DataManager_c *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x21
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x21
  __int64 v135; // x0
  __int64 v136; // x0
  __int64 v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x0
  int64_t v142; // [xsp+20h] [xbp-60h] BYREF
  int v143; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_435312D & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_long____Clear__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_5172/*"DataManager version load crc error : チェックサム値が不一致"*/);
    sub_B70694(&StringLiteral_5175/*"DataManager version load error : list file parameter error"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_24082/*"~"*/);
    sub_B70694(&StringLiteral_671/*") -> ("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_1565/*"@"*/);
    sub_B70694(&StringLiteral_20707/*"master versiton different ("*/);
    sub_B70694(&StringLiteral_5176/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/);
    sub_B70694(&StringLiteral_5177/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_B70694(&StringLiteral_5174/*"DataManager version load error : list file break"*/);
    byte_435312D = 1;
  }
  v143 = 0;
  v142 = 0LL;
  saveDataMapList = (__int64)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
  saveDataMapList = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_long____Clear__);
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 0;
  v5 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v5);
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_60:
    DataManager__ClearSaveDataList(this, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v8 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v8 )
  {
    v9 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v9 )
      sub_B7076C(0LL, 0LL);
    if ( !v9->max_length )
    {
      v135 = sub_B70798(v9);
      sub_B70738(v135, 0LL);
    }
    v9->m_Items[2] = -257;
    v10 = System_String__Trim(v8, v9, 0LL);
    v11 = (System_Char_array *)sub_B706AC(char___TypeInfo, 2LL);
    if ( !v11 )
      sub_B7076C(0LL, 0LL);
    max_length = v11->max_length;
    if ( !max_length )
    {
      v136 = sub_B70798(v11);
      sub_B70738(v136, 0LL);
    }
    v11->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v137 = sub_B70798(v11);
      sub_B70738(v137, 0LL);
    }
    v11->m_Items[3] = 10;
    if ( !v10 )
      sub_B7076C(v11, v11);
    v13 = System_String__IndexOfAny(v10, v11, 0LL);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5176/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_59;
    }
    v15 = System_String__Substring_44821904(v10, 0, v13, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_B7076C(0LL, v16);
    if ( System_String__StartsWith(v15, (System_String_o *)StringLiteral_24082/*"~"*/, 0LL) )
    {
      v18 = System_String__Substring(v17, 1, 0LL);
      v19 = System_String__Substring(v10, v13 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B7076C(0LL, v21);
      v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v19,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v23 = Crc32__Compute(v22, 0LL);
      if ( System_UInt32__Parse(v18, 0LL) == v23 )
      {
        v24 = (System_Char_array *)sub_B706AC(char___TypeInfo, 2LL);
        if ( !v24 )
          sub_B7076C(0LL, 0LL);
        v25 = v24->max_length;
        if ( !v25 )
        {
          v139 = sub_B70798(v24);
          sub_B70738(v139, 0LL);
        }
        v24->m_Items[2] = 13;
        if ( v25 == 1 )
        {
          v140 = sub_B70798(v24);
          sub_B70738(v140, 0LL);
        }
        v24->m_Items[3] = 10;
        if ( !v19 )
          sub_B7076C(v24, v24);
        saveDataMapList = (__int64)System_String__Split_44818952(v19, v24, 1, 0LL);
        v26 = saveDataMapList;
        if ( !saveDataMapList )
          return 1;
        v27 = *(_QWORD *)(saveDataMapList + 24);
        if ( !v27 )
          goto LABEL_58;
        if ( !(_DWORD)v27 )
          goto LABEL_157;
        saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
        if ( !saveDataMapList )
          goto LABEL_164;
        saveDataMapList = System_String__StartsWith(
                            (System_String_o *)saveDataMapList,
                            (System_String_o *)StringLiteral_1565/*"@"*/,
                            0LL);
        if ( (saveDataMapList & 1) != 0 )
        {
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_157;
          v28 = *(System_String_o **)(v26 + 32);
          saveDataMapList = sub_B706AC(char___TypeInfo, 1LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          method = (const MethodInfo *)saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          *(_WORD *)(saveDataMapList + 32) = 44;
          if ( !v28 )
            goto LABEL_164;
          saveDataMapList = (__int64)System_String__Split(v28, (System_Char_array *)saveDataMapList, 0LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          v29 = saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
          if ( !saveDataMapList )
            goto LABEL_164;
          v30 = System_String__Substring((System_String_o *)saveDataMapList, 1, 0LL);
          v31 = ManagerConfig_TypeInfo;
          v32 = (System_Int32_array **)v30;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v31 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v31->static_fields->MasterDataCacheVer, (System_String_o *)v32, 0LL) )
          {
            saveDataMapList = sub_B706AC(string___TypeInfo, 5LL);
            if ( saveDataMapList )
            {
              v39 = (System_String_array *)saveDataMapList;
              saveDataMapList = StringLiteral_20707/*"master versiton different ("*/;
              if ( StringLiteral_20707/*"master versiton different ("*/ )
              {
                saveDataMapList = sub_B70754(StringLiteral_20707/*"master versiton different ("*/, v39->obj.klass->_1.element_class);
                if ( !saveDataMapList )
                  goto LABEL_163;
                v40 = (System_Int32_array **)StringLiteral_20707/*"master versiton different ("*/;
              }
              else
              {
                v40 = 0LL;
              }
              if ( !v39->max_length )
                goto LABEL_157;
              v39->m_Items[0] = (System_String_o *)v40;
              sub_B70630((BattleServantConfConponent_o *)v39->m_Items, v40, v33, v34, v35, v36, v37, v38);
              if ( !v32 || (saveDataMapList = sub_B70754(v32, v39->obj.klass->_1.element_class)) != 0 )
              {
                if ( v39->max_length <= 1 )
                  goto LABEL_157;
                v39->m_Items[1] = (System_String_o *)v32;
                sub_B70630((BattleServantConfConponent_o *)&v39->m_Items[1], v32, v50, v51, v52, v53, v54, v55);
                saveDataMapList = StringLiteral_671/*") -> ("*/;
                if ( StringLiteral_671/*") -> ("*/ )
                {
                  saveDataMapList = sub_B70754(StringLiteral_671/*") -> ("*/, v39->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v62 = (System_Int32_array **)StringLiteral_671/*") -> ("*/;
                }
                else
                {
                  v62 = 0LL;
                }
                if ( v39->max_length <= 2 )
                  goto LABEL_157;
                v39->m_Items[2] = (System_String_o *)v62;
                sub_B70630((BattleServantConfConponent_o *)&v39->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
                saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                }
                v76 = *(System_Int32_array ***)(*(_QWORD *)(saveDataMapList + 184) + 32LL);
                if ( !v76 || (saveDataMapList = sub_B70754(v76, v39->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v39->max_length <= 3 )
                    goto LABEL_157;
                  v39->m_Items[3] = (System_String_o *)v76;
                  sub_B70630((BattleServantConfConponent_o *)&v39->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
                  saveDataMapList = StringLiteral_663/*")"*/;
                  if ( !StringLiteral_663/*")"*/ )
                  {
                    v83 = 0LL;
LABEL_108:
                    if ( v39->max_length > 4 )
                    {
                      v39->m_Items[4] = (System_String_o *)v83;
                      v84 = (BattleServantConfConponent_o *)&v39->m_Items[4];
                      goto LABEL_148;
                    }
                    goto LABEL_157;
                  }
                  saveDataMapList = sub_B70754(StringLiteral_663/*")"*/, v39->obj.klass->_1.element_class);
                  if ( saveDataMapList )
                  {
                    v83 = (System_Int32_array **)StringLiteral_663/*")"*/;
                    goto LABEL_108;
                  }
                }
              }
              goto LABEL_163;
            }
            goto LABEL_164;
          }
          if ( *(_DWORD *)(v29 + 24) == 3 )
          {
            saveDataMapList = System_Int32__Parse(*(System_String_o **)(v29 + 40), 0LL);
            v143 = saveDataMapList;
            if ( *(_DWORD *)(v29 + 24) <= 2u )
              goto LABEL_157;
            v42 = saveDataMapList;
            v43 = System_Int64__Parse(*(System_String_o **)(v29 + 48), 0LL);
            v44 = DataManager_TypeInfo;
            v142 = v43;
            v45 = v43;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v44 = DataManager_TypeInfo;
            }
            static_fields = v44->static_fields;
            if ( static_fields->readDataVersion != v42 )
              goto LABEL_92;
            if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v44);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v45 )
            {
              v47 = *(_QWORD *)(v26 + 24);
              if ( (int)v47 < 2 )
                return 1;
              v48 = 1;
              while ( 1 )
              {
                v49 = *(System_String_o **)(v26 + 8LL * v48 + 32);
                saveDataMapList = sub_B706AC(char___TypeInfo, 1LL);
                if ( !saveDataMapList )
                  break;
                method = (const MethodInfo *)saveDataMapList;
                if ( !*(_DWORD *)(saveDataMapList + 24) )
                  goto LABEL_157;
                *(_WORD *)(saveDataMapList + 32) = 44;
                if ( !v49 )
                  break;
                saveDataMapList = (__int64)System_String__Split(v49, (System_Char_array *)saveDataMapList, 0LL);
                if ( !saveDataMapList )
                  break;
                if ( *(_DWORD *)(saveDataMapList + 24) != 1 )
                  return 1;
                if ( !this->fields.saveDataMapList )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.saveDataMapList,
                  *(EventMissionProgressRequest_Argument_ProgressData_o **)(saveDataMapList + 32),
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
                if ( ++v48 >= (int)v47 )
                  return 1;
                if ( (unsigned int)v48 >= *(_DWORD *)(v26 + 24) )
                  goto LABEL_157;
              }
            }
            else
            {
LABEL_92:
              saveDataMapList = sub_B706AC(string___TypeInfo, 9LL);
              if ( saveDataMapList )
              {
                v39 = (System_String_array *)saveDataMapList;
                saveDataMapList = StringLiteral_20707/*"master versiton different ("*/;
                if ( StringLiteral_20707/*"master versiton different ("*/ )
                {
                  saveDataMapList = sub_B70754(StringLiteral_20707/*"master versiton different ("*/, v39->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v69 = (System_Int32_array **)StringLiteral_20707/*"master versiton different ("*/;
                }
                else
                {
                  v69 = 0LL;
                }
                if ( !v39->max_length )
                  goto LABEL_157;
                v39->m_Items[0] = (System_String_o *)v69;
                sub_B70630((BattleServantConfConponent_o *)v39->m_Items, v69, v63, v64, v65, v66, v67, v68);
                v85 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v85 = DataManager_TypeInfo;
                }
                saveDataMapList = (__int64)System_Int32__ToString((int32_t)v85->static_fields, 0LL);
                v92 = (System_Int32_array **)saveDataMapList;
                if ( !saveDataMapList
                  || (saveDataMapList = sub_B70754(saveDataMapList, v39->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v39->max_length <= 1 )
                    goto LABEL_157;
                  v39->m_Items[1] = (System_String_o *)v92;
                  sub_B70630((BattleServantConfConponent_o *)&v39->m_Items[1], v92, v86, v87, v88, v89, v90, v91);
                  saveDataMapList = StringLiteral_82/*" "*/;
                  if ( StringLiteral_82/*" "*/ )
                  {
                    saveDataMapList = sub_B70754(StringLiteral_82/*" "*/, v39->obj.klass->_1.element_class);
                    if ( !saveDataMapList )
                      goto LABEL_163;
                    v99 = (System_Int32_array **)StringLiteral_82/*" "*/;
                  }
                  else
                  {
                    v99 = 0LL;
                  }
                  if ( v39->max_length <= 2 )
                    goto LABEL_157;
                  v39->m_Items[2] = (System_String_o *)v99;
                  sub_B70630((BattleServantConfConponent_o *)&v39->m_Items[2], v99, v93, v94, v95, v96, v97, v98);
                  saveDataMapList = (__int64)System_Int64__ToString(
                                               (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                               0LL);
                  v106 = (System_Int32_array **)saveDataMapList;
                  if ( !saveDataMapList
                    || (saveDataMapList = sub_B70754(saveDataMapList, v39->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v39->max_length <= 3 )
                      goto LABEL_157;
                    v39->m_Items[3] = (System_String_o *)v106;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&v39->m_Items[3],
                      v106,
                      v100,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105);
                    saveDataMapList = StringLiteral_671/*") -> ("*/;
                    if ( StringLiteral_671/*") -> ("*/ )
                    {
                      saveDataMapList = sub_B70754(StringLiteral_671/*") -> ("*/, v39->obj.klass->_1.element_class);
                      if ( !saveDataMapList )
                        goto LABEL_163;
                      v113 = (System_Int32_array **)StringLiteral_671/*") -> ("*/;
                    }
                    else
                    {
                      v113 = 0LL;
                    }
                    if ( v39->max_length <= 4 )
                      goto LABEL_157;
                    v39->m_Items[4] = (System_String_o *)v113;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&v39->m_Items[4],
                      v113,
                      v107,
                      v108,
                      v109,
                      v110,
                      v111,
                      v112);
                    saveDataMapList = (__int64)System_Int32__ToString((int32_t)&v143, 0LL);
                    v120 = (System_Int32_array **)saveDataMapList;
                    if ( !saveDataMapList
                      || (saveDataMapList = sub_B70754(saveDataMapList, v39->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v39->max_length <= 5 )
                        goto LABEL_157;
                      v39->m_Items[5] = (System_String_o *)v120;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&v39->m_Items[5],
                        v120,
                        v114,
                        v115,
                        v116,
                        v117,
                        v118,
                        v119);
                      saveDataMapList = StringLiteral_82/*" "*/;
                      if ( StringLiteral_82/*" "*/ )
                      {
                        saveDataMapList = sub_B70754(StringLiteral_82/*" "*/, v39->obj.klass->_1.element_class);
                        if ( !saveDataMapList )
                          goto LABEL_163;
                        v127 = (System_Int32_array **)StringLiteral_82/*" "*/;
                      }
                      else
                      {
                        v127 = 0LL;
                      }
                      if ( v39->max_length <= 6 )
                        goto LABEL_157;
                      v39->m_Items[6] = (System_String_o *)v127;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&v39->m_Items[6],
                        v127,
                        v121,
                        v122,
                        v123,
                        v124,
                        v125,
                        v126);
                      saveDataMapList = (__int64)System_Int64__ToString((int64_t)&v142, 0LL);
                      v134 = (System_Int32_array **)saveDataMapList;
                      if ( !saveDataMapList
                        || (saveDataMapList = sub_B70754(saveDataMapList, v39->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( v39->max_length <= 7 )
                          goto LABEL_157;
                        v39->m_Items[7] = (System_String_o *)v134;
                        sub_B70630(
                          (BattleServantConfConponent_o *)&v39->m_Items[7],
                          v134,
                          v128,
                          v129,
                          v130,
                          v131,
                          v132,
                          v133);
                        saveDataMapList = StringLiteral_663/*")"*/;
                        if ( StringLiteral_663/*")"*/ )
                        {
                          saveDataMapList = sub_B70754(StringLiteral_663/*")"*/, v39->obj.klass->_1.element_class);
                          if ( !saveDataMapList )
                            goto LABEL_163;
                          v83 = (System_Int32_array **)StringLiteral_663/*")"*/;
                        }
                        else
                        {
                          v83 = 0LL;
                        }
                        if ( v39->max_length > 8 )
                        {
                          v39->m_Items[8] = (System_String_o *)v83;
                          v84 = (BattleServantConfConponent_o *)&v39->m_Items[8];
LABEL_148:
                          sub_B70630(v84, v83, v77, v78, v79, v80, v81, v82);
                          if ( System_String__Concat_44838292(v39, 0LL) )
                            goto LABEL_60;
                          return 1;
                        }
LABEL_157:
                        v138 = sub_B70798(saveDataMapList);
                        sub_B70738(v138, 0LL);
                      }
                    }
                  }
                }
LABEL_163:
                v141 = sub_B7078C(saveDataMapList);
                sub_B70738(v141, 0LL);
              }
            }
LABEL_164:
            sub_B7076C(saveDataMapList, method);
          }
          v14 = &StringLiteral_5175/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_58:
          v14 = &StringLiteral_5174/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v14 = &StringLiteral_5172/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v14 = &StringLiteral_5177/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_59:
    if ( *v14 )
      goto LABEL_60;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435311E & 1) == 0 )
  {
    sub_B70694(&DataManager__readMasterVersion_d__46_TypeInfo);
    byte_435311E = 1;
  }
  v3 = sub_B70764(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x20
  const MethodInfo *v6; // x1
  System_String_o *AllText; // x21
  System_String_o *v8; // x21
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
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x20
  System_Int32_array **v41; // x1
  DataManager_c *v42; // x0
  DataManager_c *v44; // x8
  int32_t v45; // w19
  int64_t v46; // x0
  DataManager_c *v47; // x8
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x0

  if ( (byte_435312B & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_5171/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/);
    sub_B70694(&StringLiteral_5168/*"DataManager boot load error : list file break"*/);
    sub_B70694(&StringLiteral_5170/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/);
    sub_B70694(&StringLiteral_5166/*"DataManager boot load crc error : チェックサム値が不一致"*/);
    sub_B70694(&StringLiteral_24082/*"~"*/);
    sub_B70694(&StringLiteral_20705/*"master data versiton different ("*/);
    sub_B70694(&StringLiteral_671/*") -> ("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_1565/*"@"*/);
    sub_B70694(&StringLiteral_5169/*"DataManager boot load error : list file parameter error"*/);
    byte_435312B = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
    AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v8 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
    if ( !v8 )
      return 1;
    v9 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v9 )
      sub_B7076C(0LL, 0LL);
    if ( !v9->max_length )
    {
      v75 = sub_B70798(v9);
      sub_B70738(v75, 0LL);
    }
    v9->m_Items[2] = -257;
    v10 = System_String__Trim(v8, v9, 0LL);
    v11 = (System_Char_array *)sub_B706AC(char___TypeInfo, 2LL);
    if ( !v11 )
      sub_B7076C(0LL, 0LL);
    max_length = v11->max_length;
    if ( !max_length )
    {
      v76 = sub_B70798(v11);
      sub_B70738(v76, 0LL);
    }
    v11->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v77 = sub_B70798(v11);
      sub_B70738(v77, 0LL);
    }
    v11->m_Items[3] = 10;
    if ( !v10 )
      sub_B7076C(v11, v11);
    v13 = System_String__IndexOfAny(v10, v11, 0LL);
    if ( v13 < 2 )
    {
      v14 = &StringLiteral_5170/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_57;
    }
    v15 = System_String__Substring_44821904(v10, 0, v13, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_B7076C(0LL, v16);
    if ( System_String__StartsWith(v15, (System_String_o *)StringLiteral_24082/*"~"*/, 0LL) )
    {
      v18 = System_String__Substring(v17, 1, 0LL);
      v19 = System_String__Substring(v10, v13 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B7076C(0LL, v21);
      v22 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v19,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v23 = Crc32__Compute(v22, 0LL);
      if ( System_UInt32__Parse(v18, 0LL) == v23 )
      {
        v24 = (System_Char_array *)sub_B706AC(char___TypeInfo, 2LL);
        if ( !v24 )
          sub_B7076C(0LL, 0LL);
        v25 = v24->max_length;
        if ( !v25 )
        {
          v79 = sub_B70798(v24);
          sub_B70738(v79, 0LL);
        }
        v24->m_Items[2] = 13;
        if ( v25 == 1 )
        {
          v80 = sub_B70798(v24);
          sub_B70738(v80, 0LL);
        }
        v24->m_Items[3] = 10;
        if ( !v19 )
          sub_B7076C(v24, v24);
        v26 = (__int64)System_String__Split_44818952(v19, v24, 1, 0LL);
        v27 = v26;
        if ( !v26 )
          return 1;
        v28 = *(_QWORD *)(v26 + 24);
        if ( !v28 )
          goto LABEL_56;
        if ( !(_DWORD)v28 )
          goto LABEL_102;
        v26 = *(_QWORD *)(v26 + 32);
        if ( !v26 )
          goto LABEL_108;
        v26 = System_String__StartsWith((System_String_o *)v26, (System_String_o *)StringLiteral_1565/*"@"*/, 0LL);
        if ( (v26 & 1) != 0 )
        {
          if ( !*(_DWORD *)(v27 + 24) )
            goto LABEL_102;
          v29 = *(System_String_o **)(v27 + 32);
          v26 = sub_B706AC(char___TypeInfo, 1LL);
          if ( !v26 )
            goto LABEL_108;
          v6 = (const MethodInfo *)v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_102;
          *(_WORD *)(v26 + 32) = 44;
          if ( !v29 )
            goto LABEL_108;
          v26 = (__int64)System_String__Split(v29, (System_Char_array *)v26, 0LL);
          if ( !v26 )
            goto LABEL_108;
          v30 = v26;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_102;
          v26 = *(_QWORD *)(v26 + 32);
          if ( !v26 )
            goto LABEL_108;
          v31 = System_String__Substring((System_String_o *)v26, 1, 0LL);
          v32 = ManagerConfig_TypeInfo;
          v33 = (System_Int32_array **)v31;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v32 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v32->static_fields->MasterDataCacheVer, (System_String_o *)v33, 0LL) )
          {
            v26 = sub_B706AC(string___TypeInfo, 5LL);
            if ( v26 )
            {
              v40 = (System_String_array *)v26;
              v26 = StringLiteral_20705/*"master data versiton different ("*/;
              if ( StringLiteral_20705/*"master data versiton different ("*/ )
              {
                v26 = sub_B70754(StringLiteral_20705/*"master data versiton different ("*/, v40->obj.klass->_1.element_class);
                if ( !v26 )
                  goto LABEL_107;
                v41 = (System_Int32_array **)StringLiteral_20705/*"master data versiton different ("*/;
              }
              else
              {
                v41 = 0LL;
              }
              if ( !v40->max_length )
                goto LABEL_102;
              v40->m_Items[0] = (System_String_o *)v41;
              sub_B70630((BattleServantConfConponent_o *)v40->m_Items, v41, v34, v35, v36, v37, v38, v39);
              if ( !v33 || (v26 = sub_B70754(v33, v40->obj.klass->_1.element_class)) != 0 )
              {
                if ( v40->max_length <= 1 )
                  goto LABEL_102;
                v40->m_Items[1] = (System_String_o *)v33;
                sub_B70630((BattleServantConfConponent_o *)&v40->m_Items[1], v33, v48, v49, v50, v51, v52, v53);
                v26 = StringLiteral_671/*") -> ("*/;
                if ( StringLiteral_671/*") -> ("*/ )
                {
                  v26 = sub_B70754(StringLiteral_671/*") -> ("*/, v40->obj.klass->_1.element_class);
                  if ( !v26 )
                    goto LABEL_107;
                  v60 = (System_Int32_array **)StringLiteral_671/*") -> ("*/;
                }
                else
                {
                  v60 = 0LL;
                }
                if ( v40->max_length <= 2 )
                  goto LABEL_102;
                v40->m_Items[2] = (System_String_o *)v60;
                sub_B70630((BattleServantConfConponent_o *)&v40->m_Items[2], v60, v54, v55, v56, v57, v58, v59);
                v26 = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v26 = (__int64)ManagerConfig_TypeInfo;
                }
                v67 = *(System_Int32_array ***)(*(_QWORD *)(v26 + 184) + 32LL);
                if ( !v67 || (v26 = sub_B70754(v67, v40->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v40->max_length <= 3 )
                    goto LABEL_102;
                  v40->m_Items[3] = (System_String_o *)v67;
                  sub_B70630((BattleServantConfConponent_o *)&v40->m_Items[3], v67, v61, v62, v63, v64, v65, v66);
                  v26 = StringLiteral_663/*")"*/;
                  if ( !StringLiteral_663/*")"*/ )
                  {
                    v74 = 0LL;
LABEL_91:
                    if ( v40->max_length > 4 )
                    {
                      v40->m_Items[4] = (System_String_o *)v74;
                      sub_B70630((BattleServantConfConponent_o *)&v40->m_Items[4], v74, v68, v69, v70, v71, v72, v73);
                      if ( System_String__Concat_44838292(v40, 0LL) )
                        goto LABEL_58;
                      return 1;
                    }
LABEL_102:
                    v78 = sub_B70798(v26);
                    sub_B70738(v78, 0LL);
                  }
                  v26 = sub_B70754(StringLiteral_663/*")"*/, v40->obj.klass->_1.element_class);
                  if ( v26 )
                  {
                    v74 = (System_Int32_array **)StringLiteral_663/*")"*/;
                    goto LABEL_91;
                  }
                }
              }
LABEL_107:
              v81 = sub_B7078C(v26);
              sub_B70738(v81, 0LL);
            }
LABEL_108:
            sub_B7076C(v26, v6);
          }
          if ( *(_DWORD *)(v30 + 24) == 3 )
          {
            v26 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0LL);
            v44 = DataManager_TypeInfo;
            v45 = v26;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v44 = DataManager_TypeInfo;
            }
            v44->static_fields->dataVersion = v45;
            v44->static_fields->readDataVersion = v45;
            if ( *(_DWORD *)(v30 + 24) > 2u )
            {
              v46 = System_Int64__Parse(*(System_String_o **)(v30 + 48), 0LL);
              v47 = DataManager_TypeInfo;
              DataManager_TypeInfo->static_fields->dateVersion = v46;
              v47->static_fields->readDateVersion = v46;
              return 1;
            }
            goto LABEL_102;
          }
          v14 = &StringLiteral_5169/*"DataManager boot load error : list file parameter error"*/;
        }
        else
        {
LABEL_56:
          v14 = &StringLiteral_5168/*"DataManager boot load error : list file break"*/;
        }
      }
      else
      {
        v14 = &StringLiteral_5166/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v14 = &StringLiteral_5171/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_57:
    if ( *v14 )
      goto LABEL_58;
    return 1;
  }
LABEL_58:
  v42 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v42 = DataManager_TypeInfo;
  }
  v42->static_fields->dataVersion = 0;
  v42->static_fields->dateVersion = 0LL;
  DataManager__ClearSaveDataList(this, v6);
  return 0;
}


void __fastcall DataManager__setMasterData(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_c *v11; // x0
  struct DataManager_StaticFields *static_fields; // x8
  BattleServantConfConponent_o *p_updateData; // x0
  System_Int32_array **v14; // x1
  struct DataManager_StaticFields *v15; // x0

  if ( (byte_435311B & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_435311B = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_22;
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = DataManager_TypeInfo->static_fields;
    }
    static_fields->updateData = 0LL;
    p_updateData = (BattleServantConfConponent_o *)&static_fields->updateData;
    v14 = 0LL;
  }
  else
  {
LABEL_22:
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DataManager_TypeInfo;
    }
    v14 = (System_Int32_array **)obj;
    v11->static_fields->dataVersion = dataVer;
    v11->static_fields->dateVersion = dateVer;
    v15 = v11->static_fields;
    v15->updateData = obj;
    p_updateData = (BattleServantConfConponent_o *)&v15->updateData;
  }
  sub_B70630(
    p_updateData,
    v14,
    (System_String_array **)dateVer,
    (System_String_array **)obj,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
}


void __fastcall DataManager__setMasterDataVersion(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0

  if ( (byte_435311A & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_435311A = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v6 = DataManager_TypeInfo;
  }
  v6->static_fields->dataVersion = dataVer;
  v6->static_fields->dateVersion = dateVer;
}


void __fastcall DataManager__setServerHash(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  System_String_o *v12; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *v22; // x0
  DataManager_c *v23; // x8
  struct DataManager_StaticFields *v24; // x0
  DataManager_c *v25; // x0

  if ( (byte_4353114 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353114 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->serverHash,
    v11,
    (System_String_array **)method,
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
        sub_B7076C(v13, v14);
      v15 = System_String__Substring(v12, v12->fields.m_stringLength - 1, 0LL);
      if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
      {
        v22 = System_String__Substring_44821904(v12, 0, v12->fields.m_stringLength - 1, 0LL);
        v23 = DataManager_TypeInfo;
        v12 = v22;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v23 = DataManager_TypeInfo;
        }
        v24 = v23->static_fields;
      }
      else
      {
        v25 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v25 = DataManager_TypeInfo;
        }
        v24 = v25->static_fields;
      }
      v24->serverHash = v12;
      sub_B70630(
        (BattleServantConfConponent_o *)&v24->serverHash,
        (System_Int32_array **)v12,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_c *v9; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4353116 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    byte_4353116 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->webViewData,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v5; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_435312F & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    byte_435312F = 1;
  }
  if ( obj
    && ((v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v5 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    v6 = (DataManager_o *)sub_B70A60(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_27692300(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_27692300(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v3; // x20
  DataManager_o *v4; // x19
  DataManager_o *v5; // x21
  __int64 v6; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int entries; // w26
  int v9; // w27
  int v10; // w9
  __int64 v11; // x23
  __int64 v12; // x8
  System_Xml_XmlQualifiedName_o *v13; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v14; // x8
  DataMasterBase_o *v15; // x23
  __int64 v16; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v17; // x8
  int v18; // w26
  int v19; // w27
  int v20; // w9
  __int64 v21; // x23
  __int64 v22; // x8
  System_Xml_XmlQualifiedName_o *v23; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v27; // x8
  int v28; // w25
  int v29; // w26
  int v30; // w9
  __int64 v31; // x22
  __int64 v32; // x8
  System_Xml_XmlQualifiedName_o *v33; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v34; // x8
  DataMasterBase_o *v35; // x22
  __int64 v36; // x0
  DataManager_o *v37; // x0
  const MethodInfo *v38; // x1
  System_Nullable_long__o v39; // 0:x2.16
  System_Nullable_long__o v40; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)data;
  v4 = this;
  if ( (byte_4353130 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&StringLiteral_23326/*"updated"*/);
    sub_B70694(&StringLiteral_18233/*"deleted"*/);
    this = (DataManager_o *)sub_B70694(&StringLiteral_22138/*"replaced"*/);
    byte_4353130 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_B7076C(this, data);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18233/*"deleted"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              v3,
                              (System_Type_o *)StringLiteral_18233/*"deleted"*/,
                              (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v5 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v6
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_60;
      }
    }
    lookup = v4->fields.lookup;
    if ( !lookup )
      goto LABEL_57;
    entries = (int)lookup->fields.entries;
    if ( entries >= 1 )
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = v9 - 1;
        if ( (unsigned int)(v9 - 1) >= LODWORD(lookup->fields.entries) )
          break;
        v11 = v10;
        v12 = *((_QWORD *)&lookup->fields.count + v10);
        if ( !v12 || !v5 )
          goto LABEL_57;
        v13 = *(System_Xml_XmlQualifiedName_o **)(v12 + 24);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5,
                                  v13,
                                  (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v14 = v4->fields.lookup;
          if ( !v14 )
            goto LABEL_57;
          if ( (unsigned int)v11 >= LODWORD(v14->fields.entries) )
            break;
          v15 = (DataMasterBase_o *)*((_QWORD *)&v14->fields.count + v11);
          this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5,
                                    (System_Type_o *)v13,
                                    (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v15 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v15, (Il2CppObject *)this, 0LL);
        }
        if ( v9 >= entries )
          goto LABEL_22;
        lookup = v4->fields.lookup;
        ++v9;
        if ( !lookup )
          goto LABEL_57;
      }
LABEL_59:
      v36 = sub_B70798(this);
      sub_B70738(v36, 0LL);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23326/*"updated"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_23326/*"updated"*/,
                            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v5 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_B70A60(v5);
      goto LABEL_61;
    }
  }
  v17 = v4->fields.lookup;
  if ( !v17 )
    goto LABEL_57;
  v18 = (int)v17->fields.entries;
  if ( v18 >= 1 )
  {
    v19 = 1;
    while ( 1 )
    {
      v20 = v19 - 1;
      if ( (unsigned int)(v19 - 1) >= LODWORD(v17->fields.entries) )
        goto LABEL_59;
      v21 = v20;
      v22 = *((_QWORD *)&v17->fields.count + v20);
      if ( !v22 || !v5 )
        goto LABEL_57;
      v23 = *(System_Xml_XmlQualifiedName_o **)(v22 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5,
                                v23,
                                (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = v4->fields.lookup;
        if ( !v24 )
          goto LABEL_57;
        if ( (unsigned int)v21 >= LODWORD(v24->fields.entries) )
          goto LABEL_59;
        v25 = (DataMasterBase_o *)*((_QWORD *)&v24->fields.count + v21);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5,
                                  (System_Type_o *)v23,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v25 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v25, (Il2CppObject *)this, 0LL);
      }
      if ( v19 >= v18 )
        break;
      v17 = v4->fields.lookup;
      ++v19;
      if ( !v17 )
        goto LABEL_57;
    }
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22138/*"replaced"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_22138/*"replaced"*/,
                            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      v37 = (DataManager_o *)sub_B70A60(v3);
      DataManager__getRevisionTotal(v37, v38);
      return;
    }
  }
  v27 = v4->fields.lookup;
  if ( !v27 )
    goto LABEL_57;
  v28 = (int)v27->fields.entries;
  if ( v28 >= 1 )
  {
    v29 = 1;
    while ( 1 )
    {
      v30 = v29 - 1;
      if ( (unsigned int)(v29 - 1) >= LODWORD(v27->fields.entries) )
        goto LABEL_59;
      v31 = v30;
      v32 = *((_QWORD *)&v27->fields.count + v30);
      if ( !v32 || !v3 )
        goto LABEL_57;
      v33 = *(System_Xml_XmlQualifiedName_o **)(v32 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
                                v33,
                                (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.lookup;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= LODWORD(v34->fields.entries) )
          goto LABEL_59;
        v35 = (DataMasterBase_o *)*((_QWORD *)&v34->fields.count + v31);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  v3,
                                  (System_Type_o *)v33,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        v39.fields.value = 0LL;
        *(_QWORD *)&v39.fields.has_value = 0LL;
        v40.fields.value = 0LL;
        *(_QWORD *)&v40.fields.has_value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v35, (Il2CppObject *)this, v39, v40, 0LL);
      }
      if ( v29 >= v28 )
        return;
      v27 = v4->fields.lookup;
      ++v29;
      if ( !v27 )
        goto LABEL_57;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4353121 & 1) == 0 )
  {
    sub_B70694(&DataManager__updateMasterData_d__49_TypeInfo);
    byte_4353121 = 1;
  }
  v5 = sub_B70764(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4353117 & 1) == 0 )
  {
    sub_B70694(&DataManager__updateWebViewData_d__38_TypeInfo);
    byte_4353117 = 1;
  }
  v3 = sub_B70764(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheListFileName; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t size; // w24
  System_String_o *v9; // x20
  System_Text_StringBuilder_o *v10; // x21
  ManagerConfig_c *v11; // x0
  struct System_Collections_Generic_List_long____o *v12; // x25
  signed __int64 v13; // x23
  unsigned __int64 v14; // x24
  Il2CppObject *v15; // x19
  System_Byte_array *v16; // x21
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  System_IO_StreamWriter_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  uint32_t v29; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v30; // [xsp+18h] [xbp-38h]

  if ( (byte_435312E & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&System_IO_StreamWriter_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&uint_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_24085/*"~{0}\n{1}"*/);
    sub_B70694(&StringLiteral_1565/*"@"*/);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_435312E = 1;
  }
  HIDWORD(v30) = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v4);
    saveDataMapList = this->fields.saveDataMapList;
    if ( !saveDataMapList )
      goto LABEL_23;
    size = saveDataMapList->fields._size;
    v9 = CacheListFileName;
    v10 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42596008(v10, (size << 7) + 128, 0LL);
    if ( !v10 )
      goto LABEL_23;
    System_Text_StringBuilder__Append_42601980(v10, (System_String_o *)StringLiteral_1565/*"@"*/, 0LL);
    v11 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v11 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_42601980(v10, v11->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_42601980(v10, (System_String_o *)StringLiteral_712/*","*/, 0LL);
    System_Text_StringBuilder__Append_42605320(v10, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_42601980(v10, (System_String_o *)StringLiteral_712/*","*/, 0LL);
    System_Text_StringBuilder__Append_42605460(v10, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                             v10,
                                             (System_String_o *)StringLiteral_26/*"\n"*/,
                                             0LL);
    v12 = this->fields.saveDataMapList;
    if ( !v12 )
      goto LABEL_23;
    v13 = v12->fields._size;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        System_Text_StringBuilder__Append_42601980(v10, (System_String_o *)v12->fields._items->m_Items[v14], 0LL);
        CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42601980(
                                                 v10,
                                                 (System_String_o *)StringLiteral_26/*"\n"*/,
                                                 0LL);
        if ( (__int64)++v14 >= v13 )
          break;
        v12 = this->fields.saveDataMapList;
        if ( !v12 )
          goto LABEL_23;
      }
    }
    v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                            v10,
                            v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_23:
      sub_B7076C(CacheListFileName, v6);
    v16 = (System_Byte_array *)((__int64 (__fastcall *)(System_String_o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_IConvertible_ToDouble.method)(
                                 CacheListFileName,
                                 v15,
                                 CacheListFileName->klass->vtable._19_System_IConvertible_ToDecimal.methodPtr);
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v29 = Crc32__Compute(v16, 0LL);
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v29, v17);
    v19 = System_String__Format_44753704((System_String_o *)StringLiteral_24085/*"~{0}\n{1}"*/, v18, v15, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v20 = CatAndMouseGame__CatGame3(v19, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v22 = (System_IO_StreamWriter_o *)sub_B70764(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_44808640(v22, v9, 0, UTF8, 0LL);
    if ( !v22 )
      sub_B7076C(v23, v24);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v22->klass->vtable._16_Write.method)(
      v22,
      v20,
      v22->klass->vtable._17_Write.methodPtr);
    v30 = 0x100000113LL;
    klass = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v28 = sub_B08590(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v28)(v22, *(_QWORD *)(v28 + 8));
    if ( (_DWORD)v30 == 275 )
      HIDWORD(v30) = 0;
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  DataManager_c *v3; // x0
  System_String_o *CacheVersionFileName; // x19
  System_Text_Encoding_o *UTF8; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array *v13; // x20
  System_Int32_array **v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_o *v58; // x20
  System_Byte_array *v59; // x21
  System_String_o *v60; // x0
  System_String_o *v61; // x20
  System_String_o *v62; // x20
  System_Text_Encoding_o *v63; // x22
  System_IO_StreamWriter_o *v64; // x21
  __int64 v65; // x0
  __int64 v66; // x0
  uint32_t v67; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435312C & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&System_IO_StreamWriter_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_24082/*"~"*/);
    sub_B70694(&StringLiteral_1565/*"@"*/);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_435312C = 1;
  }
  v67 = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v3);
    UTF8 = (System_Text_Encoding_o *)sub_B706AC(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_55;
    v13 = (System_String_array *)UTF8;
    v14 = (System_Int32_array **)StringLiteral_1565/*"@"*/;
    if ( StringLiteral_1565/*"@"*/ )
    {
      v14 = (System_Int32_array **)sub_B70754(StringLiteral_1565/*"@"*/, v13->obj.klass->_1.element_class);
      if ( !v14 )
        goto LABEL_54;
      v15 = (System_Int32_array **)StringLiteral_1565/*"@"*/;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v13->max_length )
      goto LABEL_53;
    v13->m_Items[0] = (System_String_o *)v15;
    sub_B70630((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
    v14 = (System_Int32_array **)ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v14 = (System_Int32_array **)ManagerConfig_TypeInfo;
    }
    v22 = *(System_Int32_array ***)&v14[23]->m_Items[1];
    if ( !v22 || (v14 = (System_Int32_array **)sub_B70754(v22, v13->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v13->max_length <= 1 )
        goto LABEL_53;
      v13->m_Items[1] = (System_String_o *)v22;
      sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
      v14 = (System_Int32_array **)StringLiteral_712/*","*/;
      if ( StringLiteral_712/*","*/ )
      {
        v14 = (System_Int32_array **)sub_B70754(StringLiteral_712/*","*/, v13->obj.klass->_1.element_class);
        if ( !v14 )
          goto LABEL_54;
        v29 = (System_Int32_array **)StringLiteral_712/*","*/;
      }
      else
      {
        v29 = 0LL;
      }
      if ( v13->max_length <= 2 )
        goto LABEL_53;
      v13->m_Items[2] = (System_String_o *)v29;
      sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
      v14 = (System_Int32_array **)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
      v36 = v14;
      if ( !v14 || (v14 = (System_Int32_array **)sub_B70754(v14, v13->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v13->max_length <= 3 )
          goto LABEL_53;
        v13->m_Items[3] = (System_String_o *)v36;
        sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
        v14 = (System_Int32_array **)StringLiteral_712/*","*/;
        if ( StringLiteral_712/*","*/ )
        {
          v14 = (System_Int32_array **)sub_B70754(StringLiteral_712/*","*/, v13->obj.klass->_1.element_class);
          if ( !v14 )
            goto LABEL_54;
          v43 = (System_Int32_array **)StringLiteral_712/*","*/;
        }
        else
        {
          v43 = 0LL;
        }
        if ( v13->max_length <= 4 )
          goto LABEL_53;
        v13->m_Items[4] = (System_String_o *)v43;
        sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
        v14 = (System_Int32_array **)System_Int64__ToString(
                                       (int64_t)&DataManager_TypeInfo->static_fields->dateVersion,
                                       0LL);
        v50 = v14;
        if ( !v14 || (v14 = (System_Int32_array **)sub_B70754(v14, v13->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v13->max_length <= 5 )
            goto LABEL_53;
          v13->m_Items[5] = (System_String_o *)v50;
          sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
          v14 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
          if ( !StringLiteral_26/*"\n"*/ )
          {
            v57 = 0LL;
LABEL_42:
            if ( v13->max_length > 6 )
            {
              v13->m_Items[6] = (System_String_o *)v57;
              sub_B70630((BattleServantConfConponent_o *)&v13->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
              v58 = System_String__Concat_44838292(v13, 0LL);
              UTF8 = System_Text_Encoding__get_UTF8(0LL);
              if ( UTF8 )
              {
                v59 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                             UTF8,
                                             v58,
                                             UTF8->klass->vtable._19_GetBytes.methodPtr);
                if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
                v67 = Crc32__Compute(v59, 0LL);
                v60 = System_UInt32__ToString((uint32_t)&v67, 0LL);
                v61 = System_String__Concat_44761580(
                        (System_String_o *)StringLiteral_24082/*"~"*/,
                        v60,
                        (System_String_o *)StringLiteral_26/*"\n"*/,
                        v58,
                        0LL);
                if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
                }
                v62 = CatAndMouseGame__CatGame1(v61, 0, 0LL);
                v63 = System_Text_Encoding__get_UTF8(0LL);
                v64 = (System_IO_StreamWriter_o *)sub_B70764(System_IO_StreamWriter_TypeInfo);
                System_IO_StreamWriter___ctor_44808640(v64, CacheVersionFileName, 0, v63, 0LL);
                if ( v64 )
                {
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v64->klass->vtable._16_Write.method)(
                    v64,
                    v62,
                    v64->klass->vtable._17_Write.methodPtr);
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v64->klass->vtable._8_Close.method)(
                    v64,
                    v64->klass->vtable._9_Dispose.methodPtr);
                  return;
                }
              }
LABEL_55:
              sub_B7076C(UTF8, v6);
            }
LABEL_53:
            v65 = sub_B70798(v14);
            sub_B70738(v65, 0LL);
          }
          v14 = (System_Int32_array **)sub_B70754(StringLiteral_26/*"\n"*/, v13->obj.klass->_1.element_class);
          if ( v14 )
          {
            v57 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_54:
    v66 = sub_B7078C(v14);
    sub_B70738(v66, 0LL);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FB11 & 1) == 0 )
  {
    sub_B70694(&DataManager___c_TypeInfo);
    byte_434FB11 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(DataManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall DataManager___c___ctor(DataManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataManager___c___LoadMasterDataThread_b__57_1(
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


void __fastcall DataManager___c__DisplayClass49_1___ctor(
        DataManager___c__DisplayClass49_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass49_1___updateMasterData_b__2(
        DataManager___c__DisplayClass49_1_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_String__op_Equality(x, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass55_0___ctor(
        DataManager___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall DataManager___c__DisplayClass55_0___StartMasterLoadThread_b__0(
        DataManager___c__DisplayClass55_0_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass55_0_o *v6; // x20
  struct DataManager_o *_4__this; // x8
  __int64 v8; // x22
  __int64 v9; // x8
  struct DataManager_o *v10; // x9
  __int64 v11; // x21
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v15; // x0

  v6 = this;
  if ( (byte_434FB12 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_0_o *)sub_B70694(&Method_System_Collections_Generic_List_long____get_Item__);
    byte_434FB12 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v8 = *(_QWORD *)&_4__this->fields.lastFrameTime;
  if ( !v8 )
    goto LABEL_16;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)b )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8LL * b + 32);
  if ( !v9 )
    goto LABEL_16;
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_17;
  v10 = v6->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  v11 = *(_QWORD *)&v10->fields.lastFrameTime;
  if ( !v11 )
    goto LABEL_16;
  v12 = *(_QWORD *)(v9 + 40);
  if ( *(_DWORD *)(v11 + 24) <= (unsigned int)a )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * a + 32);
  if ( !v13 )
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&a);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
  {
LABEL_17:
    v15 = sub_B70798(this);
    sub_B70738(v15, 0LL);
  }
  return v12 - *(_DWORD *)(v13 + 40);
}


void __fastcall DataManager___c__DisplayClass55_1___ctor(
        DataManager___c__DisplayClass55_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DataManager___c__DisplayClass55_1___StartMasterLoadThread_b__1(
        DataManager___c__DisplayClass55_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DataManager___c__DisplayClass55_1_o *v4; // x20
  struct DataManager___c__DisplayClass55_0_o *CS___8__locals1; // x8

  v4 = this;
  if ( (byte_434FB13 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_1_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_434FB13 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass55_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_B7076C(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void __fastcall DataManager___c__DisplayClass57_0___ctor(
        DataManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataManager___c__DisplayClass57_0___LoadMasterDataThread_b__0(
        DataManager___c__DisplayClass57_0_o *this,
        DataMasterBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
  DataManager__readMasterData_d__47_o *v2; // x19
  struct DataManager_o *_4__this; // x26
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  DataManager_c *v13; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v15; // w9
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v17; // x21
  System_IO_Stream_o *v18; // x22
  System_IO_Stream_o *v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_WaitForEndOfFrame_o *v25; // x20
  BattleServantConfConponent_o *v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8
  DataManager_c *v34; // x8
  System_IO_Stream_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  int v41; // w8
  System_IO_Stream_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_IO_MemoryStream_c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  System_Byte_array *saveNameList; // x22
  System_IO_MemoryStream_o *v58; // x21
  System_IO_BinaryReader_o *v59; // x22
  __int64 v60; // x0
  __int64 v61; // x1
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int size; // w26
  int i; // w27
  __int64 v65; // x0
  __int64 v66; // x1
  int v67; // w24
  __int64 v68; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x25
  __int64 v70; // x0
  int v71; // w8
  System_IO_BinaryReader_c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  int v76; // w8
  System_IO_MemoryStream_c *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  UnityEngine_WaitForEndOfFrame_o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x0
  DataManager_o *v90; // [xsp+8h] [xbp-78h]
  _DWORD v91[7]; // [xsp+10h] [xbp-70h]
  int v92; // [xsp+2Ch] [xbp-54h]

  v2 = this;
  if ( (byte_434FB14 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&System_GC_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    this = (DataManager__readMasterData_d__47_o *)sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_434FB14 = 1;
  }
  v92 = 0;
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_112;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v4;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(p__2__current, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
LABEL_17:
      if ( DataManager__readMasterDataListFile(_4__this, 0LL) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        CacheFileName = DataManager__getCacheFileName(0LL);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v90 = _4__this;
          v17 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v17, 0LL);
          v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          }
          v19 = CatAndMouseGame__MouseGameZ(v18, 0LL);
          v20 = sub_B706AC(byte___TypeInfo, 0x4000LL);
          v22 = v20;
          if ( !v20 )
            sub_B7076C(0LL, v21);
          if ( !v19 )
            sub_B7076C(v20, v21);
          while ( 1 )
          {
            v23 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v19->klass->vtable._30_unknown.method)(
                    v19,
                    v22,
                    0LL,
                    *(unsigned int *)(v22 + 24),
                    v19->klass->vtable._31_ReadByte.methodPtr);
            if ( (int)v23 < 1 )
              break;
            if ( !v17 )
              sub_B7076C(v23, v24);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v17->klass->vtable._32_Write.method)(
              v17,
              v22,
              0LL,
              (unsigned int)v23,
              v17->klass->vtable._33_WriteByte.methodPtr);
          }
          v91[v92++] = 198;
          klass = v19->klass;
          if ( *(_WORD *)&v19->klass->_2.bitflags1 )
          {
            v36 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              ++v36;
              p_offset += 4;
              if ( v36 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_42:
            v38 = sub_B08590(v19, System_IDisposable_TypeInfo, 0LL);
          }
          v39 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v38)(v19, *(_QWORD *)(v38 + 8));
          v41 = v92;
          if ( v92 && v91[v92 - 1] == 198 )
            v41 = --v92;
          v91[v41] = 212;
          ++v92;
          if ( v18 )
          {
            v42 = v18->klass;
            if ( *(_WORD *)&v18->klass->_2.bitflags1 )
            {
              v43 = 0LL;
              v44 = &v42->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
              {
                ++v43;
                v44 += 4;
                if ( v43 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v44);
            }
            else
            {
LABEL_52:
              v45 = sub_B08590(v18, System_IDisposable_TypeInfo, 0LL);
            }
            v39 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v45)(v18, *(_QWORD *)(v45 + 8));
          }
          if ( v92 && v91[v92 - 1] == 212 )
            --v92;
          if ( !v17 )
            sub_B7076C(v39, v40);
          v46 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v17->klass->vtable._37_ToArray.method)(
                                         v17,
                                         v17->klass[1]._1.image);
          _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v46;
          sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.saveNameList, v46, v47, v48, v49, v50, v51, v52);
          v91[v92++] = 239;
          v53 = v17->klass;
          if ( *(_WORD *)&v17->klass->_2.bitflags1 )
          {
            v54 = 0LL;
            v55 = &v53->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
            {
              ++v54;
              v55 += 4;
              if ( v54 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
                goto LABEL_63;
            }
            v56 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v55);
          }
          else
          {
LABEL_63:
            v56 = sub_B08590(v17, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v56)(v17, *(_QWORD *)(v56 + 8));
          if ( v92 && v91[v92 - 1] == 239 )
            --v92;
          saveNameList = (System_Byte_array *)_4__this->fields.saveNameList;
          v58 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_45610760(v58, saveNameList, 0LL);
          v59 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v59, (System_IO_Stream_o *)v58, 0LL);
          saveDataMapList = _4__this->fields.saveDataMapList;
          if ( !saveDataMapList )
            sub_B7076C(v60, v61);
          size = saveDataMapList->fields._size;
          if ( size >= 1 )
          {
            if ( !v59 )
              sub_B7076C(v60, v61);
            for ( i = 0; i < size; ++i )
            {
              v65 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v59->klass->vtable._15_ReadInt32.method)(
                      v59,
                      v59->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v58 )
                sub_B7076C(v65, v66);
              v67 = v65;
              v68 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v58->klass->vtable._12_get_Position.method)(
                      v58,
                      v58->klass->vtable._13_set_Position.methodPtr);
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v58->klass->vtable._28_Seek.method)(
                v58,
                v67,
                1LL,
                v58->klass->vtable._29_SetLength.methodPtr);
              v69 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v90->fields.lastFrameTime;
              v70 = sub_B706AC(long___TypeInfo, 2LL);
              if ( !v70 )
                sub_B7076C(0LL, 0LL);
              v71 = *(_DWORD *)(v70 + 24);
              if ( !v71 )
              {
                v88 = sub_B70798(v70);
                sub_B70738(v88, 0LL);
              }
              *(_QWORD *)(v70 + 32) = v68;
              if ( v71 == 1 )
              {
                v89 = sub_B70798(v70);
                sub_B70738(v89, 0LL);
              }
              *(_QWORD *)(v70 + 40) = v67;
              if ( !v69 )
                sub_B7076C(v70, v70);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v69,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_long____Add__);
            }
          }
          v91[v92++] = 362;
          if ( v59 )
          {
            v72 = v59->klass;
            if ( *(_WORD *)&v59->klass->_2.bitflags1 )
            {
              v73 = 0LL;
              v74 = &v72->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
              {
                ++v73;
                v74 += 4;
                if ( v73 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
                  goto LABEL_83;
              }
              v75 = (__int64)(&v72->vtable._0_Equals.method + 2 * *v74);
            }
            else
            {
LABEL_83:
              v75 = sub_B08590(v59, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v75)(v59, *(_QWORD *)(v75 + 8));
          }
          v76 = v92;
          if ( v92 && v91[v92 - 1] == 362 )
            v76 = --v92;
          v91[v76] = 376;
          ++v92;
          if ( v58 )
          {
            v77 = v58->klass;
            if ( *(_WORD *)&v58->klass->_2.bitflags1 )
            {
              v78 = 0LL;
              v79 = &v77->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
              {
                ++v78;
                v79 += 4;
                if ( v78 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
                  goto LABEL_94;
              }
              v80 = (__int64)(&v77->vtable._0_Equals.method + 2 * *v79);
            }
            else
            {
LABEL_94:
              v80 = sub_B08590(v58, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v80)(v58, *(_QWORD *)(v80 + 8));
          }
          if ( v92 && v91[v92 - 1] == 376 )
            --v92;
          if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_GC_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
          }
          System_GC__Collect_44134460(0LL);
          v81 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v81, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v81;
          v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B70630(v26, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
          v33 = 2;
LABEL_104:
          *(_DWORD *)&v26[-1].fields.isOpenAfter = v33;
          return 1;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v25, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v25;
        v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(v26, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
        v33 = 3;
        goto LABEL_104;
      }
LABEL_32:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v34 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v34 = DataManager_TypeInfo;
      }
      static_fields = v34->static_fields;
      result = 0;
      v15 = 5;
LABEL_36:
      static_fields->readMasterDataResult = v15;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_112;
    case 2:
      v2->fields.__1__state = -1;
      v13 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v13 = DataManager_TypeInfo;
      }
      static_fields = v13->static_fields;
      result = 0;
      v15 = 1;
      goto LABEL_36;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_112:
        sub_B7076C(this, method);
      goto LABEL_32;
    default:
      return 0;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  UnityEngine_WaitForEndOfFrame_o *v5; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  bool MasterVersionFile; // w0
  DataManager_c *v15; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v17; // w9

  v2 = this;
  if ( (byte_434FB15 & 1) == 0 )
  {
    sub_B70694(&DataManager_TypeInfo);
    this = (DataManager__readMasterVersion_d__46_o *)sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_434FB15 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v5;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(p__2__current, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      goto LABEL_12;
    }
LABEL_23:
    sub_B7076C(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
LABEL_12:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v15 = DataManager_TypeInfo;
  if ( MasterVersionFile )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager_TypeInfo;
    }
    static_fields = v15->static_fields;
    result = 0;
    v17 = 1;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v15 = DataManager_TypeInfo;
    }
    static_fields = v15->static_fields;
    result = 0;
    v17 = 5;
  }
  static_fields->readMasterVersionResult = v17;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager__updateMasterData_d__49_o *v8; // x19
  struct DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  bool result; // w0
  int32_t *v12; // x21
  int v13; // w8
  MasterDataUnpakcer_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_WaitForEndOfFrame_o *v24; // x20
  BattleServantConfConponent_o *v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // w8
  System_Int32_array **dataMapObject_5__7; // x8
  __int64 v34; // x11
  System_Int32_array **v35; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v37; // x8
  System_String_o *CachePath; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  DataManager_c *v58; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v60; // x21
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  DataManager_c *v74; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Byte_array *cryptBytes_5__8; // x22
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Func_bool__o *v105; // x21
  UnityEngine_WaitUntil_o *v106; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  UnityEngine_WaitForEndOfFrame_o *v120; // x20
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  int v127; // w8
  int32_t *p_i_5__9; // x23
  DataManager_c *v129; // x8
  struct DataManager_StaticFields *v130; // x8
  int v131; // w9
  Il2CppObject *v132; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v146; // x8
  __int64 i_5__9; // x9
  __int64 v148; // x8
  System_Int32_array **v149; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x0
  __int64 v158; // x1
  struct DataManager___c__DisplayClass49_0_o *v159; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *dataMapDict_5__6; // x0
  System_Int32_array **Item; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct DataManager___c__DisplayClass49_0_o *v168; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *saveDataMapList; // x22
  DataManager__updateMasterData_d__49_o *v171; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v172; // x23
  BattleServantConfConponent_o *p_dataMap_5__10; // x22
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  UnityEngine_WaitForEndOfFrame_o *v180; // x20
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  ManagerConfig_c *v187; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_String_array **v194; // x2
  System_String_array **v195; // x3
  System_Boolean_array **v196; // x4
  System_Int32_array **v197; // x5
  System_Int32_array *v198; // x6
  System_Int32_array *v199; // x7
  struct System_Collections_Generic_List_long____o *v200; // x8
  System_Collections_Generic_List_int__o *v201; // x22
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  ManagerConfig_c *v208; // x0
  __int64 v209; // x27
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Int32_array **v216; // x23
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x23
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Int32_array **v230; // x23
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  System_Int32_array **v237; // x23
  System_String_array **v238; // x2
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  System_Int32_array **v244; // x23
  System_String_array **v245; // x2
  System_String_array **v246; // x3
  System_Boolean_array **v247; // x4
  System_Int32_array **v248; // x5
  System_Int32_array *v249; // x6
  System_Int32_array *v250; // x7
  System_Int32_array **v251; // x23
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  System_Int32_array **v258; // x23
  System_String_array **v259; // x2
  System_String_array **v260; // x3
  System_Boolean_array **v261; // x4
  System_Int32_array **v262; // x5
  System_Int32_array *v263; // x6
  System_Int32_array *v264; // x7
  System_Int32_array **v265; // x23
  __int64 v266; // x8
  __int64 v267; // x28
  DataMasterBase_o *v268; // x23
  __int64 v269; // x24
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  System_Int32_array **MasterName_k__BackingField; // x1
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v277; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v278; // x26
  const MethodInfo_24389F0 *v279; // x3
  __int64 v280; // x26
  Il2CppObject *saveNameList; // x25
  int32_t v282; // w24
  __int64 v283; // x8
  const MethodInfo_24389F0 *v284; // x3
  __int64 v285; // x26
  __int64 v286; // x8
  UnityEngine_WaitForEndOfFrame_o *v287; // x20
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  ManagerConfig_c *v294; // x0
  Il2CppObject *v295; // x22
  int v296; // w8
  System_String_array **v297; // x2
  System_String_array **v298; // x3
  System_Boolean_array **v299; // x4
  System_Int32_array **v300; // x5
  System_Int32_array *v301; // x6
  System_Int32_array *v302; // x7
  UnityEngine_WaitForEndOfFrame_o *v303; // x20
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  DataManager_c *v310; // x8
  UnityEngine_WaitForEndOfFrame_o *v311; // x20
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  UnityEngine_WaitForEndOfFrame_o *v318; // x20
  System_String_array **v319; // x2
  System_String_array **v320; // x3
  System_Boolean_array **v321; // x4
  System_Int32_array **v322; // x5
  System_Int32_array *v323; // x6
  System_Int32_array *v324; // x7
  UnityEngine_WaitForEndOfFrame_o *v325; // x20
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  __int64 v332; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v333; // x9
  DataManager_c *v334; // x8
  UnityEngine_WaitForEndOfFrame_o *v335; // x20
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  __int64 v342; // x0
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-F0h]
  System_Nullable_long__o v344; // [xsp+10h] [xbp-E0h] BYREF
  System_Nullable_long__o v345; // [xsp+20h] [xbp-D0h] BYREF
  int v346; // [xsp+30h] [xbp-C0h]
  int v347; // [xsp+78h] [xbp-78h]
  int v348; // [xsp+88h] [xbp-68h]
  bool lockTaken; // [xsp+94h] [xbp-5Ch] BYREF
  System_Nullable_long__o v350; // 0:x0.16
  System_Nullable_long__o v351; // 0:x0.16

  v8 = this;
  if ( (byte_434FB16 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantCommentAddMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantCommentMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantProfileMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantProfilePushMaster___);
    sub_B70694(&Method_DataManager__updateMasterData_b__49_0__);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&DataMasterBase___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__long____TypeInfo);
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&System_GC_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&LastUsedDeckNumberManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_long____Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long____get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long____get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_long____set_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&LogoMain_TypeInfo);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&MasterDataUnpakcer_TypeInfo);
    sub_B70694(&MaterialBranchRouteManager_TypeInfo);
    sub_B70694(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_B70694(&MaterialServantLimitCountManager_TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    sub_B70694(&OtherUserNewManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_string___ctor__);
    sub_B70694(&System_Predicate_string__TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&ServantProfileEventJoinManager_TypeInfo);
    sub_B70694(&ServantProfileLimitCountManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__);
    sub_B70694(&DataManager___c__DisplayClass49_0_TypeInfo);
    sub_B70694(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__);
    sub_B70694(&DataManager___c__DisplayClass49_1_TypeInfo);
    sub_B70694(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B70694(&UserCommandCodeNewManager_TypeInfo);
    sub_B70694(&UserEquipNewManager_TypeInfo);
    sub_B70694(&UserMissionProgressManager_TypeInfo);
    sub_B70694(&UserServantCollectionManager_TypeInfo);
    sub_B70694(&UserServantLockManager_TypeInfo);
    sub_B70694(&UserServantNewManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    sub_B70694(&WarBoardMovieHistoryManager_TypeInfo);
    this = (DataManager__updateMasterData_d__49_o *)sub_B70694(&StringLiteral_11739/*"SCRIPT"*/);
    byte_434FB16 = 1;
  }
  lockTaken = 0;
  v348 = 0;
  v347 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields.values) = 0;
      if ( !_4__this )
        goto LABEL_302;
      lookup = _4__this->fields.lookup;
      if ( !lookup )
        goto LABEL_302;
      v8->fields._dataListCount_5__2 = (int32_t)lookup->fields.entries;
      v37 = *(_QWORD *)&_4__this->fields.lastFrameTime;
      if ( !v37 )
        goto LABEL_302;
      v8->fields._saveDataCount_5__3 = *(_DWORD *)(v37 + 24);
      DataManager__GetMasterCheckName(_4__this, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      CachePath = DataManager__getCachePath(0LL);
      if ( !System_IO_Directory__Exists(CachePath, 0LL) )
        System_IO_Directory__CreateDirectory(CachePath, 0LL);
      v8->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields.count )
        goto LABEL_128;
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v39, v40, v41, v42, v43, v44);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7, 0LL, v45, v46, v47, v48, v49, v50);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v51, v52, v53, v54, v55, v56);
      v58 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v58 = DataManager_TypeInfo;
      }
      updateData = v58->static_fields->updateData;
      if ( !updateData )
        sub_B7076C(0LL, v57);
      v60 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                 updateData,
                                 updateData->klass->vtable[4].methodPtr);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v61 = (System_Int32_array **)System_Convert__FromBase64String(v60, 0LL);
      v8->fields._cryptBytes_5__8 = (struct System_Byte_array *)v61;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, v61, v62, v63, v64, v65, v66, v67);
      v74 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v74 = DataManager_TypeInfo;
      }
      static_fields = v74->static_fields;
      static_fields->updateData = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v68, v69, v70, v71, v72, v73);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44134460(0LL);
      v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v76;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(p__2__current, (System_Int32_array **)v76, v78, v79, v80, v81, v82, v83);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v85 = (System_Int32_array **)CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_B7076C(v85, v85);
      _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v85;
      sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.saveNameList, v85, v86, v87, v88, v89, v90, v91);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v92, v93, v94, v95, v96, v97);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44134460(0LL);
      v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v98, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v98;
      v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(v25, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
      v32 = 2;
      goto LABEL_88;
    case 2:
      v8->fields.__1__state = -1;
      v14 = (MasterDataUnpakcer_o *)sub_B70764(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v14, 0LL);
      if ( !_4__this )
        sub_B7076C(v15, v16);
      if ( !v14 )
        sub_B7076C(v15, v16);
      v17 = (System_Int32_array **)MasterDataUnpakcer__Unpack_30965448(
                                     v14,
                                     (System_Byte_array *)_4__this->fields.saveNameList,
                                     0LL);
      v8->fields._dataMapObject_5__7 = (Il2CppObject *)v17;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7, v17, v18, v19, v20, v21, v22, v23);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_44134460(0LL);
      v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v24;
      v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B70630(v25, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
      v32 = 3;
      goto LABEL_88;
    case 3:
      dataMapObject_5__7 = (System_Int32_array **)v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7
        && (v34 = *(&System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.bitflags2 + 1),
            LOBYTE((*dataMapObject_5__7)->m_Items[68]) >= (unsigned int)v34) )
      {
        if ( *(System_Collections_Generic_Dictionary_string__long____c **)(*(_QWORD *)&(*dataMapObject_5__7)->m_Items[43]
                                                                         + 8 * v34
                                                                         - 8) == System_Collections_Generic_Dictionary_string__long____TypeInfo )
          v35 = dataMapObject_5__7;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      v8->fields._dataMapDict_5__6 = (struct System_Collections_Generic_Dictionary_string__long____o *)v35;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, v35, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_302;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v120 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v120, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v120;
        v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(v25, (System_Int32_array **)v120, v121, v122, v123, v124, v125, v126);
        v32 = 4;
        goto LABEL_88;
      }
LABEL_82:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_89;
      v127 = 0;
      v8->fields._i_5__9 = 0;
      p_i_5__9 = &v8->fields._i_5__9;
      while ( 2 )
      {
        if ( v127 < v8->fields._dataListCount_5__2 )
        {
          v132 = (Il2CppObject *)sub_B70764(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v132, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v132;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_B70630(
            (BattleServantConfConponent_o *)&v8->fields.__8__1,
            (System_Int32_array **)v132,
            v134,
            v135,
            v136,
            v137,
            v138,
            v139);
          v146 = _4__this->fields.lookup;
          if ( !v146 )
            goto LABEL_302;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v146->fields.entries) )
            goto LABEL_303;
          v148 = *((_QWORD *)&v146->fields.count + i_5__9);
          if ( !v148 )
            goto LABEL_302;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_302;
          v149 = *(System_Int32_array ***)(v148 + 24);
          *(_QWORD *)&this->fields.__1__state = v149;
          sub_B70630((BattleServantConfConponent_o *)&this->fields, v149, v140, v141, v142, v143, v144, v145);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_302;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                 (System_Xml_XmlQualifiedName_o *)_8__1->fields.masterName,
                 (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_B70630(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              0LL,
              v151,
              v152,
              v153,
              v154,
              v155,
              v156);
            v159 = v8->fields.__8__1;
            if ( !v159 )
              sub_B7076C(v157, v158);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_B7076C(0LL, v158);
            Item = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            dataMapDict_5__6,
                                            (System_Type_o *)v159->fields.masterName,
                                            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_B70630(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              Item,
              v162,
              v163,
              v164,
              v165,
              v166,
              v167);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v325 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v325, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v325;
              v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B70630(v25, (System_Int32_array **)v325, v326, v327, v328, v329, v330, v331);
              v32 = 5;
              goto LABEL_88;
            }
LABEL_103:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.lockCountObj;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v168 = v8->fields.__8__1;
            if ( !v168 || !this )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                              (WarBoardManager_TaskList_o *)v168->fields.masterName,
                                                              (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_302;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v310 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v310 = DataManager_TypeInfo;
                }
                v130 = v310->static_fields;
                result = 0;
                v131 = 6;
                goto LABEL_300;
              }
            }
            saveDataMapList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
            v171 = *p__8__1;
            v172 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_string__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v172,
              (Il2CppObject *)v171,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              (const MethodInfo_2BF23B8 *)Method_System_Predicate_string___ctor__);
            if ( !saveDataMapList )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                              saveDataMapList,
                                                              (System_Predicate_T__o *)v172,
                                                              (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_302;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_302;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)&(*p__8__1)->fields.__1__state,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_long____Add__);
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                (int32_t)method,
                (WarBoardManager_TaskList_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_30253E0 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._isAdd_5__4 = 1;
            v8->fields._dataMap_5__10 = 0LL;
            sub_B70630(p_dataMap_5__10, 0LL, v174, v175, v176, v177, v178, v179);
            p_i_5__9 = &v8->fields._i_5__9;
          }
          *p__8__1 = 0LL;
          sub_B70630((BattleServantConfConponent_o *)p__8__1, 0LL, v151, v152, v153, v154, v155, v156);
          v127 = *p_i_5__9 + 1;
          *p_i_5__9 = v127;
          continue;
        }
        break;
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v180 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v180, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v180;
        v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(v25, (System_Int32_array **)v180, v181, v182, v183, v184, v185, v186);
        v32 = 6;
LABEL_88:
        *(_DWORD *)&v25[-1].fields.isOpenAfter = v32;
        return 1;
      }
LABEL_122:
      if ( !v8->fields._isAdd_5__4 )
      {
        v187 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v187 = ManagerConfig_TypeInfo;
        }
        if ( !v187->static_fields->UseMock )
          goto LABEL_89;
      }
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v188,
        v189,
        v190,
        v191,
        v192,
        v193);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v194, v195, v196, v197, v198, v199);
      if ( !_4__this )
        goto LABEL_302;
LABEL_128:
      v200 = _4__this->fields.saveDataMapList;
      if ( !v200 )
        goto LABEL_302;
      if ( v200->fields._size <= 0 )
      {
LABEL_89:
        v129 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v129 = DataManager_TypeInfo;
        }
        v130 = v129->static_fields;
        result = 0;
        v131 = 5;
        goto LABEL_300;
      }
      LODWORD(_4__this->fields.masterLoadThreads) = 0;
      v201 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v201,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      v8->fields._loadedIndices_5__5 = v201;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->fields._loadedIndices_5__5,
        (System_Int32_array **)v201,
        v202,
        v203,
        v204,
        v205,
        v206,
        v207);
      p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
      if ( !v8->fields.isUseTips )
        goto LABEL_201;
      v208 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v208 = ManagerConfig_TypeInfo;
      }
      if ( !System_String__op_Inequality(
              v208->static_fields->ServerDefaultType,
              (System_String_o *)StringLiteral_11739/*"SCRIPT"*/,
              0LL) )
        goto LABEL_201;
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_302;
      if ( CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
        goto LABEL_201;
      v209 = sub_B706AC(DataMasterBase___TypeInfo, 8LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v209 )
        goto LABEL_302;
      v216 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( !*(_DWORD *)(v209 + 24) )
        goto LABEL_303;
      *(_QWORD *)(v209 + 32) = v216;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 32), v216, v210, v211, v212, v213, v214, v215);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantClassMaster___);
      v223 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 1u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 40) = v223;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 40), v223, v217, v218, v219, v220, v221, v222);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v230 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 2u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 48) = v230;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 48), v230, v224, v225, v226, v227, v228, v229);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
      v237 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 3u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 56) = v237;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 56), v237, v231, v232, v233, v234, v235, v236);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantProfileMaster___);
      v244 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 4u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 64) = v244;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 64), v244, v238, v239, v240, v241, v242, v243);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventServantMaster___);
      v251 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 5u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 72) = v251;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 72), v251, v245, v246, v247, v248, v249, v250);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v258 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v209 + 24) <= 6u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 80) = v258;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 80), v258, v252, v253, v254, v255, v256, v257);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
      v265 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B70754(this, *(_QWORD *)(*(_QWORD *)v209 + 64LL));
        if ( !this )
        {
LABEL_233:
          v332 = sub_B7078C();
          sub_B70738(v332, 0LL);
        }
      }
      if ( *(_DWORD *)(v209 + 24) <= 7u )
        goto LABEL_303;
      *(_QWORD *)(v209 + 88) = v265;
      sub_B70630((BattleServantConfConponent_o *)(v209 + 88), v265, v259, v260, v261, v262, v263, v264);
      v266 = *(_QWORD *)(v209 + 24);
      if ( (int)v266 >= 1 )
      {
        v267 = 0LL;
        while ( (unsigned int)v267 < (unsigned int)v266 )
        {
          v268 = *(DataMasterBase_o **)(v209 + 32 + 8 * v267);
          v269 = sub_B70764(DataManager___c__DisplayClass49_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v269, 0LL);
          if ( !v268 )
            goto LABEL_302;
          if ( !v269 )
            goto LABEL_302;
          MasterName_k__BackingField = (System_Int32_array **)v268->fields._MasterName_k__BackingField;
          *(_QWORD *)(v269 + 16) = MasterName_k__BackingField;
          sub_B70630(
            (BattleServantConfConponent_o *)(v269 + 16),
            MasterName_k__BackingField,
            v270,
            v271,
            v272,
            v273,
            v274,
            v275);
          v277 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
          v278 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_string__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v278,
            (Il2CppObject *)v269,
            Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__,
            (const MethodInfo_2BF23B8 *)Method_System_Predicate_string___ctor__);
          if ( !v277 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                            v277,
                                                            (System_Predicate_T__o *)v278,
                                                            (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_string__FindIndex__);
          if ( ((unsigned int)this & 0x80000000) == 0 )
          {
            v280 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v280 )
              goto LABEL_302;
            saveNameList = (Il2CppObject *)_4__this->fields.saveNameList;
            v282 = (int)this;
            if ( *(_DWORD *)(v280 + 24) <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v283 = *(_QWORD *)(*(_QWORD *)(v280 + 16) + 8LL * (int)this + 32);
            if ( !v283 )
              goto LABEL_302;
            if ( !*(_DWORD *)(v283 + 24) )
              break;
            *(_QWORD *)&v350.fields.has_value = *(_QWORD *)(v283 + 32);
            v350.fields.value = (int64_t)&v345;
            v345.fields.value = 0LL;
            *(_QWORD *)&v345.fields.has_value = 0LL;
            System_Nullable_long____ctor(v350, Method_System_Nullable_long___ctor__, v279);
            v285 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v285 )
              goto LABEL_302;
            if ( *(_DWORD *)(v285 + 24) <= (unsigned int)v282 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v286 = *(_QWORD *)(*(_QWORD *)(v285 + 16) + 8LL * v282 + 32);
            if ( !v286 )
              goto LABEL_302;
            if ( *(_DWORD *)(v286 + 24) <= 1u )
              break;
            *(_QWORD *)&v351.fields.has_value = *(_QWORD *)(v286 + 40);
            v351.fields.value = (int64_t)&v344;
            v344.fields.value = 0LL;
            *(_QWORD *)&v344.fields.has_value = 0LL;
            System_Nullable_long____ctor(v351, Method_System_Nullable_long___ctor__, v284);
            DataMasterBase__Replaced(v268, saveNameList, v345, v344, 0LL);
            this = *p_loadedIndices_5__5;
            if ( !*p_loadedIndices_5__5 )
              goto LABEL_302;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v282,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            ++LODWORD(_4__this->fields.masterLoadThreads);
          }
          v266 = *(_QWORD *)(v209 + 24);
          if ( (int)++v267 >= (int)v266 )
            goto LABEL_185;
        }
LABEL_303:
        v342 = sub_B70798(this);
        sub_B70738(v342, 0LL);
      }
LABEL_185:
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_302;
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
      if ( !this )
        goto LABEL_302;
      if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0LL) >= 1 )
      {
        if ( (BYTE3(ServantProfileLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        }
        ServantProfileLimitCountManager__Initialize(0LL);
        if ( (BYTE3(ServantProfileEventJoinManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo);
        }
        ServantProfileEventJoinManager__Initialize(0LL);
        if ( (BYTE3(LogoMain_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !LogoMain_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo);
        if ( LogoMain__IsPLayLogo(0LL) )
          goto LABEL_200;
        this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
          *(float *)&_4__this->fields.masterCheckName = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v287 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v287, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v287;
          v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B70630(v25, (System_Int32_array **)v287, v288, v289, v290, v291, v292, v293);
          v32 = 7;
          goto LABEL_88;
        }
LABEL_302:
        sub_B7076C(this, method);
      }
LABEL_201:
      DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0LL);
      if ( v8->fields._isAdd_5__4 )
      {
        v294 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v294 = ManagerConfig_TypeInfo;
        }
        if ( !v294->static_fields->UseMock )
        {
          DataManager__DeleteCacheFile(_4__this, 0LL);
          if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
          {
            v318 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v318, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v318;
            v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B70630(v25, (System_Int32_array **)v318, v319, v320, v321, v322, v323, v324);
            v32 = 8;
            goto LABEL_88;
          }
LABEL_68:
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName(0LL);
          if ( _4__this )
          {
            DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0LL);
            v105 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v105,
              (Il2CppObject *)_4__this,
              Method_DataManager__updateMasterData_b__49_0__,
              (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
            v106 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v106, v105, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v106;
            v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B70630(v25, (System_Int32_array **)v106, v107, v108, v109, v110, v111, v112);
            v32 = 9;
            goto LABEL_88;
          }
          goto LABEL_302;
        }
      }
      goto LABEL_206;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_302;
      goto LABEL_82;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_302;
      goto LABEL_103;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_122;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_302;
      goto LABEL_201;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_68;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_302;
      if ( !_4__this[1].klass )
      {
        DataManager__writeMasterDataListFile(_4__this, 0LL);
        DataManager__writeMasterVersionFile(_4__this, 0LL);
        if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
        {
          v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v113;
          v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B70630(v25, (System_Int32_array **)v113, v114, v115, v116, v117, v118, v119);
          v32 = 10;
          goto LABEL_88;
        }
LABEL_206:
        v295 = *(Il2CppObject **)&_4__this->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15668400(v295, &lockTaken, 0LL);
        if ( SLODWORD(_4__this->fields.masterLoadThreads) >= v8->fields._saveDataCount_5__3 )
          v296 = 1739;
        else
          v296 = 1709;
        v346 = v296;
        v347 = 1;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v295, 0LL);
        if ( v346 == 1709 )
        {
          v347 = 0;
        }
        else if ( v346 == 1739 )
        {
          v347 = 0;
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          if ( (BYTE3(MiniMessagePack_MiniMessagePacker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          }
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
          if ( this )
          {
            System_Collections_Generic_List_XWeaponTrail_Element___Clear(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
              (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
            this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
            if ( this )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
                (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_long____Clear__);
              _4__this->fields.saveNameList = 0LL;
              sub_B70630(
                (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
                0LL,
                v297,
                v298,
                v299,
                v300,
                v301,
                v302);
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_44134460(0LL);
              v303 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v303, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v303;
              v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B70630(v25, (System_Int32_array **)v303, v304, v305, v306, v307, v308, v309);
              v32 = 12;
              goto LABEL_88;
            }
          }
          goto LABEL_302;
        }
        v311 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v311, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v311;
        v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(v25, (System_Int32_array **)v311, v312, v313, v314, v315, v316, v317);
        v32 = 11;
        goto LABEL_88;
      }
      v10 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager_TypeInfo;
      }
      v10->static_fields->updateMasterDataResult = 4;
      DataManager__StopMasterLoadThread(_4__this, 0LL);
      return 0;
    case 0xA:
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_302;
      goto LABEL_206;
    case 0xC:
      v8->fields._i_5__9 = 0;
      v12 = &v8->fields._i_5__9;
      v13 = 0;
      v8->fields.__1__state = -1;
      goto LABEL_241;
    case 0xD:
      v12 = &v8->fields._i_5__9;
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v13 = *v12 + 1;
        *v12 = v13;
LABEL_241:
        if ( v13 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_302;
        v333 = _4__this->fields.lookup;
        if ( !v333 )
          goto LABEL_302;
        if ( (unsigned int)v13 >= LODWORD(v333->fields.entries) )
          goto LABEL_303;
        this = (DataManager__updateMasterData_d__49_o *)*((_QWORD *)&v333->fields.count + v13);
        if ( !this )
          goto LABEL_302;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                          this,
                                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__49_o *)DataManager__CheckWaitforFrame(_4__this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v335 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v335, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v335;
            v25 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B70630(v25, (System_Int32_array **)v335, v336, v337, v338, v339, v340, v341);
            v32 = 13;
            goto LABEL_88;
          }
        }
      }
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      BalanceConfig__Initialize(0LL);
      if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantLockManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      }
      UserServantLockManager__Initialize(0LL);
      if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      }
      UserServantNewManager__Initialize(0LL);
      if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      }
      UserServantCollectionManager__Initialize(0LL);
      if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantCommentManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
      }
      ServantCommentManager__Initialize(0LL);
      if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      }
      OtherUserNewManager__Initialize(0LL);
      if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      }
      UserCommandCodeNewManager__Initialize(0LL);
      if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      }
      UserCommandCodeCollectionManager__Initialize(0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      ImageLimitCount__Initialize(0LL);
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      }
      UserEquipNewManager__Initialize(0LL);
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      }
      UserMissionProgressManager__Initialize(0LL);
      if ( (BYTE3(MaterialServantLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      }
      MaterialServantLimitCountManager__Initialize(0LL);
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      LastUsedDeckNumberManager__Initialize(0LL);
      if ( (BYTE3(MaterialBranchRouteManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      }
      MaterialBranchRouteManager__Initialize(0LL);
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      }
      EventRandomMissionClearManager__Initialize(0LL);
      if ( (BYTE3(MaterialGroupClearHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      }
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      }
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      }
      WarBoardMovieHistoryManager__Initialize(0LL);
      v334 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v334 = DataManager_TypeInfo;
      }
      v130 = v334->static_fields;
      result = 0;
      v131 = 1;
LABEL_300:
      v130->updateMasterDataResult = v131;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *_4__this; // x20
  DataManager_c *v10; // x0
  struct System_String_o **p_cryptString_5__3; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  DataManager_c *v25; // x0
  __int64 webViewData; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  DataManager_c *v40; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Item; // x0
  __int64 v43; // x1
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  bool result; // w0
  Il2CppObject **p_dataObject_5__4; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **p_data_5__2; // x21
  System_String_o *v55; // x21
  System_Byte_array *v56; // x21
  Il2CppObject *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_WaitForEndOfFrame_o *v64; // x20
  Il2CppObject **v65; // x19
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  int v72; // w8
  Il2CppObject *v73; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_23905808; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_WaitForEndOfFrame_o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_o *v88; // x20
  System_String_o *v89; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v90; // x0
  System_Collections_Generic_Dictionary_string__object__o *v91; // x23
  __int64 v92; // x9
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7

  if ( (byte_434FB17 & 1) == 0 )
  {
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B70694(&StringLiteral_17930/*"contactURL"*/);
    sub_B70694(&StringLiteral_19018/*"filePass"*/);
    sub_B70694(&StringLiteral_16863/*"baseURL"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FB17 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v10 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager_TypeInfo;
      }
      if ( !v10->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      p_cryptString_5__3 = &this->fields._cryptString_5__3;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, 0LL, v12, v13, v14, v15, v16, v17);
      this->fields._dataObject_5__4 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._dataObject_5__4, 0LL, v18, v19, v20, v21, v22, v23);
      v25 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v25 = DataManager_TypeInfo;
      }
      webViewData = (__int64)v25->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_61;
      v27 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)webViewData + 360LL))(
                                     webViewData,
                                     *(_QWORD *)(*(_QWORD *)webViewData + 368LL));
      *p_cryptString_5__3 = (struct System_String_o *)v27;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, v27, v28, v29, v30, v31, v32, v33);
      v40 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v40 = DataManager_TypeInfo;
      }
      static_fields = v40->static_fields;
      static_fields->webViewData = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&static_fields->webViewData, 0LL, v34, v35, v36, v37, v38, v39);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
        this->fields.__2__current = (Il2CppObject *)v44;
        p__2__current = &this->fields.__2__current;
        sub_B70630(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v44,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_21:
      v55 = *p_cryptString_5__3;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v56 = System_Convert__FromBase64String(v55, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v57 = CatAndMouseGame__MouseGame2MsgPack(v56, 0, 0LL);
      this->fields._dataObject_5__4 = v57;
      p_dataObject_5__4 = &this->fields._dataObject_5__4;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        (System_Int32_array **)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v64 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v64, 0LL);
        this->fields.__2__current = (Il2CppObject *)v64;
        v65 = &this->fields.__2__current;
        sub_B70630((BattleServantConfConponent_o *)v65, (System_Int32_array **)v64, v66, v67, v68, v69, v70, v71);
        v72 = 2;
LABEL_36:
        *((_DWORD *)v65 - 2) = v72;
        return 1;
      }
LABEL_30:
      v73 = *p_dataObject_5__4;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      Dictionary_23905808 = JsonManager__getDictionary_23905808(v73, 0LL);
      this->fields._data_5__2 = Dictionary_23905808;
      p_data_5__2 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields._data_5__2;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields._data_5__2,
        (System_Int32_array **)Dictionary_23905808,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v81 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v81, 0LL);
        this->fields.__2__current = (Il2CppObject *)v81;
        v65 = &this->fields.__2__current;
        sub_B70630((BattleServantConfConponent_o *)v65, (System_Int32_array **)v81, v82, v83, v84, v85, v86, v87);
        v72 = 3;
        goto LABEL_36;
      }
LABEL_37:
      if ( !*p_data_5__2 )
        goto LABEL_57;
      v88 = (System_String_o *)StringLiteral_1/*""*/;
      v89 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              *p_data_5__2,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_16863/*"baseURL"*/,
              (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_42;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_16863/*"baseURL"*/,
                                                                                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v89 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                 Item,
                                 Item->klass->vtable._4_unknown.methodPtr);
LABEL_42:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              Item,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_17930/*"contactURL"*/,
              (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_47;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_17930/*"contactURL"*/,
                                                                                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v88 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                 Item,
                                 Item->klass->vtable._4_unknown.methodPtr);
LABEL_47:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             Item,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_19018/*"filePass"*/,
             (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = *p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_59:
          sub_B7076C(Item, v43);
        v90 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                (System_Type_o *)StringLiteral_19018/*"filePass"*/,
                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v91 = (System_Collections_Generic_Dictionary_string__object__o *)v90;
        if ( v90 )
        {
          v92 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v90->klass->_2.bitflags2 + 1) < (unsigned int)v92
            || (System_Collections_Generic_Dictionary_string__object__c *)v90->klass->_2.typeHierarchy[v92 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            webViewData = sub_B70A60(v90);
LABEL_61:
            sub_B7076C(webViewData, v24);
          }
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__setupWebViewAddress(v89, v88, v91, 0LL);
      }
LABEL_57:
      this->fields._data_5__2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)p_data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, 0LL, v93, v94, v95, v96, v97, v98);
      this->fields._dataObject_5__4 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields._dataObject_5__4, 0LL, v99, v100, v101, v102, v103, v104);
      return 0;
    case 1:
      p_cryptString_5__3 = &this->fields._cryptString_5__3;
      this->fields.__1__state = -1;
      goto LABEL_21;
    case 2:
      p_dataObject_5__4 = &this->fields._dataObject_5__4;
      this->fields.__1__state = -1;
      goto LABEL_30;
    case 3:
      p_data_5__2 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields._data_5__2;
      this->fields.__1__state = -1;
      goto LABEL_37;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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