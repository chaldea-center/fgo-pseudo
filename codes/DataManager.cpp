void __fastcall DataManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  void *v18; // x1
  struct DataManager_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B15D2A & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B15D2A = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = DataManager_TypeInfo->static_fields;
  v11->webViewData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->webViewData, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  v19 = DataManager_TypeInfo->static_fields;
  v19->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->serverHash, (int64_t)v18, v20, v21, v22, v23, v24, v25);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B15D29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_long____TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager___ctor__, v13, v14);
    byte_4B15D29 = 1;
  }
  this->fields._DispLog = 1;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.saveNameList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long____TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.saveDataMapList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v35 = (Il2CppObject *)sub_1BCAA2C(object_TypeInfo, v32, v33, v34);
  System_Object___ctor(v35, 0LL);
  this->fields.lockCountObj = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lockCountObj, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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
  __int64 v1; // x1
  __int64 v2; // x2
  DataManager_c *v3; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B15D07 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, v1, v2);
    byte_4B15D07 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v3);
  DataManager__ClearCacheAllCommonProc(CachePath, v5);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4B15D08 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D08 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete(cachePath, 1, 0LL);
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
}


void __fastcall DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  DataManager_c *v3; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B15D06 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, v1, v2);
    byte_4B15D06 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v3);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v5);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_c *v8; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v14; // w2
  int v15; // w9

  if ( (byte_4B15D20 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____Clear__, v6, v7);
    byte_4B15D20 = 1;
  }
  v8 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v8 = DataManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v12 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1BCAA3C(v8, method);
  v14 = saveDataMapList->fields._size;
  v15 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v15;
  if ( v14 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v14, 0LL);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x1
  __int64 v182; // x2
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x1
  __int64 v188; // x2
  __int64 v189; // x1
  __int64 v190; // x2
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x1
  __int64 v194; // x2
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x1
  __int64 v202; // x2
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x1
  __int64 v210; // x2
  __int64 v211; // x1
  __int64 v212; // x2
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x1
  __int64 v216; // x2
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x1
  __int64 v220; // x2
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x1
  __int64 v224; // x2
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x1
  __int64 v228; // x2
  __int64 v229; // x1
  __int64 v230; // x2
  __int64 v231; // x1
  __int64 v232; // x2
  __int64 v233; // x1
  __int64 v234; // x2
  __int64 v235; // x1
  __int64 v236; // x2
  __int64 v237; // x1
  __int64 v238; // x2
  __int64 v239; // x1
  __int64 v240; // x2
  __int64 v241; // x1
  __int64 v242; // x2
  __int64 v243; // x1
  __int64 v244; // x2
  __int64 v245; // x1
  __int64 v246; // x2
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x1
  __int64 v252; // x2
  __int64 v253; // x1
  __int64 v254; // x2
  __int64 v255; // x1
  __int64 v256; // x2
  __int64 v257; // x1
  __int64 v258; // x2
  __int64 v259; // x1
  __int64 v260; // x2
  __int64 v261; // x1
  __int64 v262; // x2
  __int64 v263; // x1
  __int64 v264; // x2
  __int64 v265; // x1
  __int64 v266; // x2
  __int64 v267; // x1
  __int64 v268; // x2
  __int64 v269; // x1
  __int64 v270; // x2
  __int64 v271; // x1
  __int64 v272; // x2
  __int64 v273; // x1
  __int64 v274; // x2
  __int64 v275; // x1
  __int64 v276; // x2
  __int64 v277; // x1
  __int64 v278; // x2
  __int64 v279; // x1
  __int64 v280; // x2
  __int64 v281; // x1
  __int64 v282; // x2
  __int64 v283; // x1
  __int64 v284; // x2
  __int64 v285; // x1
  __int64 v286; // x2
  __int64 v287; // x1
  __int64 v288; // x2
  __int64 v289; // x1
  __int64 v290; // x2
  __int64 v291; // x1
  __int64 v292; // x2
  __int64 v293; // x1
  __int64 v294; // x2
  __int64 v295; // x1
  __int64 v296; // x2
  __int64 v297; // x1
  __int64 v298; // x2
  __int64 v299; // x1
  __int64 v300; // x2
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x1
  __int64 v304; // x2
  __int64 v305; // x1
  __int64 v306; // x2
  __int64 v307; // x1
  __int64 v308; // x2
  __int64 v309; // x1
  __int64 v310; // x2
  __int64 v311; // x1
  __int64 v312; // x2
  __int64 v313; // x1
  __int64 v314; // x2
  __int64 v315; // x1
  __int64 v316; // x2
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x1
  __int64 v320; // x2
  __int64 v321; // x1
  __int64 v322; // x2
  __int64 v323; // x1
  __int64 v324; // x2
  __int64 v325; // x1
  __int64 v326; // x2
  __int64 v327; // x1
  __int64 v328; // x2
  __int64 v329; // x1
  __int64 v330; // x2
  __int64 v331; // x1
  __int64 v332; // x2
  __int64 v333; // x1
  __int64 v334; // x2
  __int64 v335; // x1
  __int64 v336; // x2
  __int64 v337; // x1
  __int64 v338; // x2
  __int64 v339; // x1
  __int64 v340; // x2
  __int64 v341; // x1
  __int64 v342; // x2
  __int64 v343; // x1
  __int64 v344; // x2
  __int64 v345; // x1
  __int64 v346; // x2
  __int64 v347; // x1
  __int64 v348; // x2
  __int64 v349; // x1
  __int64 v350; // x2
  __int64 v351; // x1
  __int64 v352; // x2
  __int64 v353; // x1
  __int64 v354; // x2
  __int64 v355; // x1
  __int64 v356; // x2
  __int64 v357; // x1
  __int64 v358; // x2
  __int64 v359; // x1
  __int64 v360; // x2
  __int64 v361; // x1
  __int64 v362; // x2
  __int64 v363; // x1
  __int64 v364; // x2
  __int64 v365; // x1
  __int64 v366; // x2
  __int64 v367; // x1
  __int64 v368; // x2
  __int64 v369; // x1
  __int64 v370; // x2
  __int64 v371; // x1
  __int64 v372; // x2
  __int64 v373; // x1
  __int64 v374; // x2
  __int64 v375; // x1
  __int64 v376; // x2
  __int64 v377; // x1
  __int64 v378; // x2
  __int64 v379; // x1
  __int64 v380; // x2
  __int64 v381; // x1
  __int64 v382; // x2
  __int64 v383; // x1
  __int64 v384; // x2
  __int64 v385; // x1
  __int64 v386; // x2
  __int64 v387; // x1
  __int64 v388; // x2
  __int64 v389; // x1
  __int64 v390; // x2
  __int64 v391; // x1
  __int64 v392; // x2
  __int64 v393; // x1
  __int64 v394; // x2
  __int64 v395; // x1
  __int64 v396; // x2
  __int64 v397; // x1
  __int64 v398; // x2
  __int64 v399; // x1
  __int64 v400; // x2
  __int64 v401; // x1
  __int64 v402; // x2
  __int64 v403; // x1
  __int64 v404; // x2
  __int64 v405; // x1
  __int64 v406; // x2
  __int64 v407; // x1
  __int64 v408; // x2
  __int64 v409; // x1
  __int64 v410; // x2
  __int64 v411; // x1
  __int64 v412; // x2
  __int64 v413; // x1
  __int64 v414; // x2
  __int64 v415; // x1
  __int64 v416; // x2
  __int64 v417; // x1
  __int64 v418; // x2
  __int64 v419; // x1
  __int64 v420; // x2
  __int64 v421; // x1
  __int64 v422; // x2
  __int64 v423; // x1
  __int64 v424; // x2
  __int64 v425; // x1
  __int64 v426; // x2
  __int64 v427; // x1
  __int64 v428; // x2
  __int64 v429; // x1
  __int64 v430; // x2
  __int64 v431; // x1
  __int64 v432; // x2
  __int64 v433; // x1
  __int64 v434; // x2
  __int64 v435; // x1
  __int64 v436; // x2
  __int64 v437; // x1
  __int64 v438; // x2
  __int64 v439; // x1
  __int64 v440; // x2
  __int64 v441; // x1
  __int64 v442; // x2
  __int64 v443; // x1
  __int64 v444; // x2
  __int64 v445; // x1
  __int64 v446; // x2
  __int64 v447; // x1
  __int64 v448; // x2
  __int64 v449; // x1
  __int64 v450; // x2
  __int64 v451; // x1
  __int64 v452; // x2
  __int64 v453; // x1
  __int64 v454; // x2
  __int64 v455; // x1
  __int64 v456; // x2
  __int64 v457; // x1
  __int64 v458; // x2
  __int64 v459; // x1
  __int64 v460; // x2
  __int64 v461; // x1
  __int64 v462; // x2
  __int64 v463; // x1
  __int64 v464; // x2
  __int64 v465; // x1
  __int64 v466; // x2
  __int64 v467; // x1
  __int64 v468; // x2
  __int64 v469; // x1
  __int64 v470; // x2
  __int64 v471; // x1
  __int64 v472; // x2
  __int64 v473; // x1
  __int64 v474; // x2
  __int64 v475; // x1
  __int64 v476; // x2
  __int64 v477; // x1
  __int64 v478; // x2
  __int64 v479; // x1
  __int64 v480; // x2
  __int64 v481; // x1
  __int64 v482; // x2
  __int64 v483; // x1
  __int64 v484; // x2
  __int64 v485; // x1
  __int64 v486; // x2
  __int64 v487; // x1
  __int64 v488; // x2
  __int64 v489; // x1
  __int64 v490; // x2
  __int64 v491; // x1
  __int64 v492; // x2
  __int64 v493; // x1
  __int64 v494; // x2
  __int64 v495; // x1
  __int64 v496; // x2
  __int64 v497; // x1
  __int64 v498; // x2
  __int64 v499; // x1
  __int64 v500; // x2
  __int64 v501; // x1
  __int64 v502; // x2
  __int64 v503; // x1
  __int64 v504; // x2
  __int64 v505; // x1
  __int64 v506; // x2
  __int64 v507; // x1
  __int64 v508; // x2
  __int64 v509; // x1
  __int64 v510; // x2
  __int64 v511; // x1
  __int64 v512; // x2
  __int64 v513; // x1
  __int64 v514; // x2
  __int64 v515; // x1
  __int64 v516; // x2
  __int64 v517; // x1
  __int64 v518; // x2
  __int64 v519; // x1
  __int64 v520; // x2
  __int64 v521; // x1
  __int64 v522; // x2
  __int64 v523; // x1
  __int64 v524; // x2
  __int64 v525; // x1
  __int64 v526; // x2
  __int64 v527; // x1
  __int64 v528; // x2
  __int64 v529; // x1
  __int64 v530; // x2
  __int64 v531; // x1
  __int64 v532; // x2
  __int64 v533; // x1
  __int64 v534; // x2
  __int64 v535; // x1
  __int64 v536; // x2
  __int64 v537; // x1
  __int64 v538; // x2
  __int64 v539; // x1
  __int64 v540; // x2
  __int64 v541; // x1
  __int64 v542; // x2
  __int64 v543; // x1
  __int64 v544; // x2
  __int64 v545; // x1
  __int64 v546; // x2
  __int64 v547; // x1
  __int64 v548; // x2
  __int64 v549; // x1
  __int64 v550; // x2
  __int64 v551; // x1
  __int64 v552; // x2
  __int64 v553; // x1
  __int64 v554; // x2
  __int64 v555; // x1
  __int64 v556; // x2
  __int64 v557; // x1
  __int64 v558; // x2
  __int64 v559; // x1
  __int64 v560; // x2
  __int64 v561; // x1
  __int64 v562; // x2
  __int64 v563; // x1
  __int64 v564; // x2
  __int64 v565; // x1
  __int64 v566; // x2
  __int64 v567; // x1
  __int64 v568; // x2
  __int64 v569; // x1
  __int64 v570; // x2
  __int64 v571; // x1
  __int64 v572; // x2
  __int64 v573; // x1
  __int64 v574; // x2
  __int64 v575; // x1
  __int64 v576; // x2
  __int64 v577; // x1
  __int64 v578; // x2
  __int64 v579; // x1
  __int64 v580; // x2
  __int64 v581; // x1
  __int64 v582; // x2
  __int64 v583; // x1
  __int64 v584; // x2
  __int64 v585; // x1
  __int64 v586; // x2
  __int64 v587; // x1
  __int64 v588; // x2
  __int64 v589; // x1
  __int64 v590; // x2
  __int64 v591; // x1
  __int64 v592; // x2
  __int64 v593; // x1
  __int64 v594; // x2
  __int64 v595; // x1
  __int64 v596; // x2
  __int64 v597; // x1
  __int64 v598; // x2
  __int64 v599; // x1
  __int64 v600; // x2
  __int64 v601; // x1
  __int64 v602; // x2
  __int64 v603; // x1
  __int64 v604; // x2
  __int64 v605; // x1
  __int64 v606; // x2
  __int64 v607; // x1
  __int64 v608; // x2
  __int64 v609; // x1
  __int64 v610; // x2
  __int64 v611; // x1
  __int64 v612; // x2
  __int64 v613; // x1
  __int64 v614; // x2
  __int64 v615; // x1
  __int64 v616; // x2
  __int64 v617; // x1
  __int64 v618; // x2
  __int64 v619; // x1
  __int64 v620; // x2
  __int64 v621; // x1
  __int64 v622; // x2
  __int64 v623; // x1
  __int64 v624; // x2
  __int64 v625; // x1
  __int64 v626; // x2
  __int64 v627; // x1
  __int64 v628; // x2
  __int64 v629; // x1
  __int64 v630; // x2
  __int64 v631; // x1
  __int64 v632; // x2
  __int64 v633; // x1
  __int64 v634; // x2
  __int64 v635; // x1
  __int64 v636; // x2
  __int64 v637; // x1
  __int64 v638; // x2
  __int64 v639; // x1
  __int64 v640; // x2
  __int64 v641; // x1
  __int64 v642; // x2
  __int64 v643; // x1
  __int64 v644; // x2
  __int64 v645; // x1
  __int64 v646; // x2
  __int64 v647; // x1
  __int64 v648; // x2
  __int64 v649; // x1
  __int64 v650; // x2
  __int64 v651; // x1
  __int64 v652; // x2
  __int64 v653; // x1
  __int64 v654; // x2
  __int64 v655; // x1
  __int64 v656; // x2
  __int64 v657; // x1
  __int64 v658; // x2
  __int64 v659; // x1
  __int64 v660; // x2
  __int64 v661; // x1
  __int64 v662; // x2
  __int64 v663; // x1
  __int64 v664; // x2
  __int64 v665; // x1
  __int64 v666; // x2
  __int64 v667; // x1
  __int64 v668; // x2
  __int64 v669; // x1
  __int64 v670; // x2
  __int64 v671; // x1
  __int64 v672; // x2
  __int64 v673; // x1
  __int64 v674; // x2
  __int64 v675; // x1
  __int64 v676; // x2
  __int64 v677; // x1
  __int64 v678; // x2
  __int64 v679; // x1
  __int64 v680; // x2
  __int64 v681; // x1
  __int64 v682; // x2
  __int64 v683; // x1
  __int64 v684; // x2
  __int64 v685; // x1
  __int64 v686; // x2
  __int64 v687; // x1
  __int64 v688; // x2
  __int64 v689; // x1
  __int64 v690; // x2
  __int64 v691; // x1
  __int64 v692; // x2
  __int64 v693; // x1
  __int64 v694; // x2
  __int64 v695; // x1
  __int64 v696; // x2
  __int64 v697; // x1
  __int64 v698; // x2
  __int64 v699; // x1
  __int64 v700; // x2
  __int64 v701; // x1
  __int64 v702; // x2
  __int64 v703; // x1
  __int64 v704; // x2
  __int64 v705; // x1
  __int64 v706; // x2
  __int64 v707; // x1
  __int64 v708; // x2
  __int64 v709; // x1
  __int64 v710; // x2
  __int64 v711; // x1
  __int64 v712; // x2
  __int64 v713; // x1
  __int64 v714; // x2
  __int64 v715; // x1
  __int64 v716; // x2
  __int64 v717; // x1
  __int64 v718; // x2
  __int64 v719; // x1
  __int64 v720; // x2
  __int64 v721; // x1
  __int64 v722; // x2
  __int64 v723; // x1
  __int64 v724; // x2
  __int64 v725; // x1
  __int64 v726; // x2
  __int64 v727; // x1
  __int64 v728; // x2
  __int64 v729; // x1
  __int64 v730; // x2
  __int64 v731; // x1
  __int64 v732; // x2
  __int64 v733; // x1
  __int64 v734; // x2
  __int64 v735; // x1
  __int64 v736; // x2
  __int64 v737; // x1
  __int64 v738; // x2
  __int64 v739; // x1
  __int64 v740; // x2
  __int64 v741; // x1
  __int64 v742; // x2
  __int64 v743; // x1
  __int64 v744; // x2
  __int64 v745; // x1
  __int64 v746; // x2
  __int64 v747; // x1
  __int64 v748; // x2
  __int64 v749; // x1
  __int64 v750; // x2
  __int64 v751; // x1
  __int64 v752; // x2
  __int64 v753; // x1
  __int64 v754; // x2
  __int64 v755; // x1
  __int64 v756; // x2
  __int64 v757; // x1
  __int64 v758; // x2
  __int64 v759; // x1
  __int64 v760; // x2
  __int64 v761; // x1
  __int64 v762; // x2
  __int64 v763; // x1
  __int64 v764; // x2
  __int64 v765; // x1
  __int64 v766; // x2
  __int64 v767; // x1
  __int64 v768; // x2
  __int64 v769; // x1
  __int64 v770; // x2
  __int64 v771; // x1
  __int64 v772; // x2
  __int64 v773; // x1
  __int64 v774; // x2
  __int64 v775; // x1
  __int64 v776; // x2
  __int64 v777; // x1
  __int64 v778; // x2
  __int64 v779; // x1
  __int64 v780; // x2
  __int64 v781; // x1
  __int64 v782; // x2
  __int64 v783; // x1
  __int64 v784; // x2
  __int64 v785; // x1
  __int64 v786; // x2
  __int64 v787; // x1
  __int64 v788; // x2
  __int64 v789; // x1
  __int64 v790; // x2
  __int64 v791; // x1
  __int64 v792; // x2
  __int64 v793; // x1
  __int64 v794; // x2
  __int64 v795; // x1
  __int64 v796; // x2
  __int64 v797; // x1
  __int64 v798; // x2
  __int64 v799; // x1
  __int64 v800; // x2
  __int64 v801; // x1
  __int64 v802; // x2
  __int64 v803; // x1
  __int64 v804; // x2
  __int64 v805; // x1
  __int64 v806; // x2
  __int64 v807; // x1
  __int64 v808; // x2
  __int64 v809; // x1
  __int64 v810; // x2
  __int64 v811; // x1
  __int64 v812; // x2
  __int64 v813; // x1
  __int64 v814; // x2
  __int64 v815; // x1
  __int64 v816; // x2
  __int64 v817; // x1
  __int64 v818; // x2
  __int64 v819; // x1
  __int64 v820; // x2
  __int64 v821; // x1
  __int64 v822; // x2
  __int64 v823; // x1
  __int64 v824; // x2
  __int64 v825; // x1
  __int64 v826; // x2
  __int64 v827; // x1
  __int64 v828; // x2
  __int64 v829; // x1
  __int64 v830; // x2
  __int64 v831; // x1
  __int64 v832; // x2
  __int64 v833; // x1
  __int64 v834; // x2
  __int64 v835; // x1
  __int64 v836; // x2
  __int64 v837; // x1
  __int64 v838; // x2
  __int64 v839; // x1
  __int64 v840; // x2
  __int64 v841; // x1
  __int64 v842; // x2
  __int64 v843; // x1
  __int64 v844; // x2
  __int64 v845; // x1
  __int64 v846; // x2
  __int64 v847; // x1
  __int64 v848; // x2
  __int64 v849; // x1
  __int64 v850; // x2
  __int64 v851; // x1
  __int64 v852; // x2
  __int64 v853; // x1
  __int64 v854; // x2
  __int64 v855; // x1
  __int64 v856; // x2
  __int64 v857; // x1
  __int64 v858; // x2
  __int64 v859; // x1
  __int64 v860; // x2
  __int64 v861; // x1
  __int64 v862; // x2
  __int64 v863; // x1
  __int64 v864; // x2
  __int64 v865; // x1
  __int64 v866; // x2
  __int64 v867; // x1
  __int64 v868; // x2
  __int64 v869; // x1
  __int64 v870; // x2
  __int64 v871; // x1
  __int64 v872; // x2
  __int64 v873; // x1
  __int64 v874; // x2
  __int64 v875; // x1
  __int64 v876; // x2
  __int64 v877; // x1
  __int64 v878; // x2
  __int64 v879; // x1
  __int64 v880; // x2
  __int64 v881; // x1
  __int64 v882; // x2
  __int64 v883; // x1
  __int64 v884; // x2
  __int64 v885; // x1
  __int64 v886; // x2
  __int64 v887; // x1
  __int64 v888; // x2
  __int64 v889; // x1
  __int64 v890; // x2
  __int64 v891; // x1
  __int64 v892; // x2
  __int64 v893; // x1
  __int64 v894; // x2
  __int64 v895; // x1
  __int64 v896; // x2
  __int64 v897; // x1
  __int64 v898; // x2
  __int64 v899; // x1
  __int64 v900; // x2
  __int64 v901; // x1
  __int64 v902; // x2
  __int64 v903; // x1
  __int64 v904; // x2
  __int64 v905; // x1
  __int64 v906; // x2
  __int64 v907; // x1
  __int64 v908; // x2
  __int64 v909; // x1
  __int64 v910; // x2
  __int64 v911; // x1
  __int64 v912; // x2
  __int64 v913; // x1
  __int64 v914; // x2
  __int64 v915; // x1
  __int64 v916; // x2
  __int64 v917; // x1
  __int64 v918; // x2
  __int64 v919; // x1
  __int64 v920; // x2
  __int64 v921; // x1
  __int64 v922; // x2
  __int64 v923; // x1
  __int64 v924; // x2
  __int64 v925; // x1
  __int64 v926; // x2
  __int64 v927; // x1
  __int64 v928; // x2
  __int64 v929; // x1
  __int64 v930; // x2
  __int64 v931; // x1
  __int64 v932; // x2
  __int64 v933; // x1
  __int64 v934; // x2
  __int64 v935; // x1
  __int64 v936; // x2
  __int64 v937; // x1
  __int64 v938; // x2
  __int64 v939; // x1
  __int64 v940; // x2
  __int64 v941; // x1
  __int64 v942; // x2
  __int64 v943; // x1
  __int64 v944; // x2
  __int64 v945; // x1
  __int64 v946; // x2
  __int64 v947; // x1
  __int64 v948; // x2
  __int64 v949; // x1
  __int64 v950; // x2
  __int64 v951; // x1
  __int64 v952; // x2
  __int64 v953; // x1
  __int64 v954; // x2
  __int64 v955; // x1
  __int64 v956; // x2
  __int64 v957; // x1
  __int64 v958; // x2
  __int64 v959; // x1
  __int64 v960; // x2
  __int64 v961; // x1
  __int64 v962; // x2
  __int64 v963; // x1
  __int64 v964; // x2
  __int64 v965; // x1
  __int64 v966; // x2
  __int64 v967; // x1
  __int64 v968; // x2
  __int64 v969; // x1
  __int64 v970; // x2
  __int64 v971; // x1
  __int64 v972; // x2
  __int64 v973; // x1
  __int64 v974; // x2
  __int64 v975; // x1
  __int64 v976; // x2
  __int64 v977; // x1
  __int64 v978; // x2
  __int64 v979; // x1
  __int64 v980; // x2
  __int64 v981; // x1
  __int64 v982; // x2
  __int64 v983; // x1
  __int64 v984; // x2
  __int64 v985; // x1
  __int64 v986; // x2
  __int64 v987; // x1
  __int64 v988; // x2
  __int64 v989; // x1
  __int64 v990; // x2
  __int64 v991; // x1
  __int64 v992; // x2
  __int64 v993; // x1
  __int64 v994; // x2
  __int64 v995; // x1
  __int64 v996; // x2
  __int64 v997; // x1
  __int64 v998; // x2
  __int64 v999; // x1
  __int64 v1000; // x2
  __int64 v1001; // x1
  __int64 v1002; // x2
  __int64 v1003; // x1
  __int64 v1004; // x2
  __int64 v1005; // x1
  __int64 v1006; // x2
  __int64 v1007; // x1
  __int64 v1008; // x2
  __int64 v1009; // x1
  __int64 v1010; // x2
  __int64 v1011; // x1
  __int64 v1012; // x2
  __int64 v1013; // x1
  __int64 v1014; // x2
  __int64 v1015; // x1
  __int64 v1016; // x2
  __int64 v1017; // x1
  __int64 v1018; // x2
  __int64 v1019; // x1
  __int64 v1020; // x2
  __int64 v1021; // x1
  __int64 v1022; // x2
  __int64 v1023; // x1
  __int64 v1024; // x2
  __int64 v1025; // x1
  __int64 v1026; // x2
  __int64 v1027; // x1
  __int64 v1028; // x2
  __int64 v1029; // x1
  __int64 v1030; // x2
  __int64 v1031; // x1
  __int64 v1032; // x2
  __int64 v1033; // x1
  __int64 v1034; // x2
  __int64 v1035; // x1
  __int64 v1036; // x2
  __int64 v1037; // x1
  __int64 v1038; // x2
  __int64 v1039; // x1
  __int64 v1040; // x2
  __int64 v1041; // x1
  __int64 v1042; // x2
  __int64 v1043; // x1
  __int64 v1044; // x2
  __int64 v1045; // x1
  __int64 v1046; // x2
  DataMasterBase_array *v1047; // x19
  __int64 v1048; // x1
  __int64 v1049; // x2
  __int64 v1050; // x3
  ServantMaster_o *v1051; // x20
  __int64 v1052; // x0
  __int64 v1053; // x1
  int64_t v1054; // x2
  int32_t v1055; // w3
  System_String_o *v1056; // x4
  BattleSetupInfo_o *v1057; // x5
  FollowerInfo_o *v1058; // x6
  PartyListViewItem_o *v1059; // x7
  il2cpp_array_size_t *p_max_length; // x21
  __int64 v1061; // x1
  __int64 v1062; // x2
  __int64 v1063; // x3
  ServantClassMaster_o *v1064; // x20
  int64_t v1065; // x2
  int32_t v1066; // w3
  System_String_o *v1067; // x4
  BattleSetupInfo_o *v1068; // x5
  FollowerInfo_o *v1069; // x6
  PartyListViewItem_o *v1070; // x7
  __int64 v1071; // x1
  __int64 v1072; // x2
  __int64 v1073; // x3
  ServantCommentMaster_o *v1074; // x20
  int64_t v1075; // x2
  int32_t v1076; // w3
  System_String_o *v1077; // x4
  BattleSetupInfo_o *v1078; // x5
  FollowerInfo_o *v1079; // x6
  PartyListViewItem_o *v1080; // x7
  __int64 v1081; // x1
  __int64 v1082; // x2
  __int64 v1083; // x3
  ServantProfileMaster_o *v1084; // x20
  int64_t v1085; // x2
  int32_t v1086; // w3
  System_String_o *v1087; // x4
  BattleSetupInfo_o *v1088; // x5
  FollowerInfo_o *v1089; // x6
  PartyListViewItem_o *v1090; // x7
  __int64 v1091; // x1
  __int64 v1092; // x2
  __int64 v1093; // x3
  WarMaster_o *v1094; // x20
  int64_t v1095; // x2
  int32_t v1096; // w3
  System_String_o *v1097; // x4
  BattleSetupInfo_o *v1098; // x5
  FollowerInfo_o *v1099; // x6
  PartyListViewItem_o *v1100; // x7
  __int64 v1101; // x1
  __int64 v1102; // x2
  __int64 v1103; // x3
  UserMaster_o *v1104; // x20
  int64_t v1105; // x2
  int32_t v1106; // w3
  System_String_o *v1107; // x4
  BattleSetupInfo_o *v1108; // x5
  FollowerInfo_o *v1109; // x6
  PartyListViewItem_o *v1110; // x7
  __int64 v1111; // x1
  __int64 v1112; // x2
  __int64 v1113; // x3
  UserGameMaster_o *v1114; // x20
  int64_t v1115; // x2
  int32_t v1116; // w3
  System_String_o *v1117; // x4
  BattleSetupInfo_o *v1118; // x5
  FollowerInfo_o *v1119; // x6
  PartyListViewItem_o *v1120; // x7
  __int64 v1121; // x1
  __int64 v1122; // x2
  __int64 v1123; // x3
  TblUserMaster_o *v1124; // x20
  int64_t v1125; // x2
  int32_t v1126; // w3
  System_String_o *v1127; // x4
  BattleSetupInfo_o *v1128; // x5
  FollowerInfo_o *v1129; // x6
  PartyListViewItem_o *v1130; // x7
  __int64 v1131; // x1
  __int64 v1132; // x2
  __int64 v1133; // x3
  UserItemMaster_o *v1134; // x20
  int64_t v1135; // x2
  int32_t v1136; // w3
  System_String_o *v1137; // x4
  BattleSetupInfo_o *v1138; // x5
  FollowerInfo_o *v1139; // x6
  PartyListViewItem_o *v1140; // x7
  __int64 v1141; // x1
  __int64 v1142; // x2
  __int64 v1143; // x3
  UserServantMaster_o *v1144; // x20
  int64_t v1145; // x2
  int32_t v1146; // w3
  System_String_o *v1147; // x4
  BattleSetupInfo_o *v1148; // x5
  FollowerInfo_o *v1149; // x6
  PartyListViewItem_o *v1150; // x7
  __int64 v1151; // x1
  __int64 v1152; // x2
  __int64 v1153; // x3
  UserServantStorageMaster_o *v1154; // x20
  int64_t v1155; // x2
  int32_t v1156; // w3
  System_String_o *v1157; // x4
  BattleSetupInfo_o *v1158; // x5
  FollowerInfo_o *v1159; // x6
  PartyListViewItem_o *v1160; // x7
  __int64 v1161; // x1
  __int64 v1162; // x2
  __int64 v1163; // x3
  UserAccessaryMaster_o *v1164; // x20
  int64_t v1165; // x2
  int32_t v1166; // w3
  System_String_o *v1167; // x4
  BattleSetupInfo_o *v1168; // x5
  FollowerInfo_o *v1169; // x6
  PartyListViewItem_o *v1170; // x7
  __int64 v1171; // x1
  __int64 v1172; // x2
  __int64 v1173; // x3
  UserQuestMaster_o *v1174; // x20
  int64_t v1175; // x2
  int32_t v1176; // w3
  System_String_o *v1177; // x4
  BattleSetupInfo_o *v1178; // x5
  FollowerInfo_o *v1179; // x6
  PartyListViewItem_o *v1180; // x7
  __int64 v1181; // x1
  __int64 v1182; // x2
  __int64 v1183; // x3
  BattleMaster_o *v1184; // x20
  int64_t v1185; // x2
  int32_t v1186; // w3
  System_String_o *v1187; // x4
  BattleSetupInfo_o *v1188; // x5
  FollowerInfo_o *v1189; // x6
  PartyListViewItem_o *v1190; // x7
  __int64 v1191; // x1
  __int64 v1192; // x2
  __int64 v1193; // x3
  OtherUserGameMaster_o *v1194; // x20
  int64_t v1195; // x2
  int32_t v1196; // w3
  System_String_o *v1197; // x4
  BattleSetupInfo_o *v1198; // x5
  FollowerInfo_o *v1199; // x6
  PartyListViewItem_o *v1200; // x7
  __int64 v1201; // x1
  __int64 v1202; // x2
  __int64 v1203; // x3
  TblFriendMaster_o *v1204; // x20
  int64_t v1205; // x2
  int32_t v1206; // w3
  System_String_o *v1207; // x4
  BattleSetupInfo_o *v1208; // x5
  FollowerInfo_o *v1209; // x6
  PartyListViewItem_o *v1210; // x7
  __int64 v1211; // x1
  __int64 v1212; // x2
  __int64 v1213; // x3
  AreaMaster_o *v1214; // x20
  int64_t v1215; // x2
  int32_t v1216; // w3
  System_String_o *v1217; // x4
  BattleSetupInfo_o *v1218; // x5
  FollowerInfo_o *v1219; // x6
  PartyListViewItem_o *v1220; // x7
  __int64 v1221; // x1
  __int64 v1222; // x2
  __int64 v1223; // x3
  ServantCardMaster_o *v1224; // x20
  int64_t v1225; // x2
  int32_t v1226; // w3
  System_String_o *v1227; // x4
  BattleSetupInfo_o *v1228; // x5
  FollowerInfo_o *v1229; // x6
  PartyListViewItem_o *v1230; // x7
  __int64 v1231; // x1
  __int64 v1232; // x2
  __int64 v1233; // x3
  EventMaster_o *v1234; // x20
  int64_t v1235; // x2
  int32_t v1236; // w3
  System_String_o *v1237; // x4
  BattleSetupInfo_o *v1238; // x5
  FollowerInfo_o *v1239; // x6
  PartyListViewItem_o *v1240; // x7
  __int64 v1241; // x1
  __int64 v1242; // x2
  __int64 v1243; // x3
  ItemMaster_o *v1244; // x20
  int64_t v1245; // x2
  int32_t v1246; // w3
  System_String_o *v1247; // x4
  BattleSetupInfo_o *v1248; // x5
  FollowerInfo_o *v1249; // x6
  PartyListViewItem_o *v1250; // x7
  __int64 v1251; // x1
  __int64 v1252; // x2
  __int64 v1253; // x3
  QuestMaster_o *v1254; // x20
  int64_t v1255; // x2
  int32_t v1256; // w3
  System_String_o *v1257; // x4
  BattleSetupInfo_o *v1258; // x5
  FollowerInfo_o *v1259; // x6
  PartyListViewItem_o *v1260; // x7
  __int64 v1261; // x1
  __int64 v1262; // x2
  __int64 v1263; // x3
  QuestAddMaster_o *v1264; // x20
  int64_t v1265; // x2
  int32_t v1266; // w3
  System_String_o *v1267; // x4
  BattleSetupInfo_o *v1268; // x5
  FollowerInfo_o *v1269; // x6
  PartyListViewItem_o *v1270; // x7
  __int64 v1271; // x1
  __int64 v1272; // x2
  __int64 v1273; // x3
  QuestReleaseMaster_o *v1274; // x20
  int64_t v1275; // x2
  int32_t v1276; // w3
  System_String_o *v1277; // x4
  BattleSetupInfo_o *v1278; // x5
  FollowerInfo_o *v1279; // x6
  PartyListViewItem_o *v1280; // x7
  __int64 v1281; // x1
  __int64 v1282; // x2
  __int64 v1283; // x3
  QuestDateRangeMaster_o *v1284; // x20
  int64_t v1285; // x2
  int32_t v1286; // w3
  System_String_o *v1287; // x4
  BattleSetupInfo_o *v1288; // x5
  FollowerInfo_o *v1289; // x6
  PartyListViewItem_o *v1290; // x7
  __int64 v1291; // x1
  __int64 v1292; // x2
  __int64 v1293; // x3
  QuestPhaseMaster_o *v1294; // x20
  int64_t v1295; // x2
  int32_t v1296; // w3
  System_String_o *v1297; // x4
  BattleSetupInfo_o *v1298; // x5
  FollowerInfo_o *v1299; // x6
  PartyListViewItem_o *v1300; // x7
  __int64 v1301; // x1
  __int64 v1302; // x2
  __int64 v1303; // x3
  QuestPhaseDetailMaster_o *v1304; // x20
  int64_t v1305; // x2
  int32_t v1306; // w3
  System_String_o *v1307; // x4
  BattleSetupInfo_o *v1308; // x5
  FollowerInfo_o *v1309; // x6
  PartyListViewItem_o *v1310; // x7
  __int64 v1311; // x1
  __int64 v1312; // x2
  __int64 v1313; // x3
  QuestGroupMaster_o *v1314; // x20
  int64_t v1315; // x2
  int32_t v1316; // w3
  System_String_o *v1317; // x4
  BattleSetupInfo_o *v1318; // x5
  FollowerInfo_o *v1319; // x6
  PartyListViewItem_o *v1320; // x7
  __int64 v1321; // x1
  __int64 v1322; // x2
  __int64 v1323; // x3
  QuestRandomGroupMaster_o *v1324; // x20
  int64_t v1325; // x2
  int32_t v1326; // w3
  System_String_o *v1327; // x4
  BattleSetupInfo_o *v1328; // x5
  FollowerInfo_o *v1329; // x6
  PartyListViewItem_o *v1330; // x7
  __int64 v1331; // x1
  __int64 v1332; // x2
  __int64 v1333; // x3
  QuestConsumeItemMaster_o *v1334; // x20
  int64_t v1335; // x2
  int32_t v1336; // w3
  System_String_o *v1337; // x4
  BattleSetupInfo_o *v1338; // x5
  FollowerInfo_o *v1339; // x6
  PartyListViewItem_o *v1340; // x7
  __int64 v1341; // x1
  __int64 v1342; // x2
  __int64 v1343; // x3
  QuestMessageMaster_o *v1344; // x20
  int64_t v1345; // x2
  int32_t v1346; // w3
  System_String_o *v1347; // x4
  BattleSetupInfo_o *v1348; // x5
  FollowerInfo_o *v1349; // x6
  PartyListViewItem_o *v1350; // x7
  __int64 v1351; // x1
  __int64 v1352; // x2
  __int64 v1353; // x3
  UserQuestInfoMaster_o *v1354; // x20
  int64_t v1355; // x2
  int32_t v1356; // w3
  System_String_o *v1357; // x4
  BattleSetupInfo_o *v1358; // x5
  FollowerInfo_o *v1359; // x6
  PartyListViewItem_o *v1360; // x7
  __int64 v1361; // x1
  __int64 v1362; // x2
  __int64 v1363; // x3
  UserQuestRecordMaster_o *v1364; // x20
  int64_t v1365; // x2
  int32_t v1366; // w3
  System_String_o *v1367; // x4
  BattleSetupInfo_o *v1368; // x5
  FollowerInfo_o *v1369; // x6
  PartyListViewItem_o *v1370; // x7
  __int64 v1371; // x1
  __int64 v1372; // x2
  __int64 v1373; // x3
  ViewQuestInfoMaster_o *v1374; // x20
  int64_t v1375; // x2
  int32_t v1376; // w3
  System_String_o *v1377; // x4
  BattleSetupInfo_o *v1378; // x5
  FollowerInfo_o *v1379; // x6
  PartyListViewItem_o *v1380; // x7
  __int64 v1381; // x1
  __int64 v1382; // x2
  __int64 v1383; // x3
  ViewEnemyMaster_o *v1384; // x20
  int64_t v1385; // x2
  int32_t v1386; // w3
  System_String_o *v1387; // x4
  BattleSetupInfo_o *v1388; // x5
  FollowerInfo_o *v1389; // x6
  PartyListViewItem_o *v1390; // x7
  __int64 v1391; // x1
  __int64 v1392; // x2
  __int64 v1393; // x3
  ViewQuestEnemyInfoMaster_o *v1394; // x20
  int64_t v1395; // x2
  int32_t v1396; // w3
  System_String_o *v1397; // x4
  BattleSetupInfo_o *v1398; // x5
  FollowerInfo_o *v1399; // x6
  PartyListViewItem_o *v1400; // x7
  __int64 v1401; // x1
  __int64 v1402; // x2
  __int64 v1403; // x3
  BlankEarthSpotMaster_o *v1404; // x20
  int64_t v1405; // x2
  int32_t v1406; // w3
  System_String_o *v1407; // x4
  BattleSetupInfo_o *v1408; // x5
  FollowerInfo_o *v1409; // x6
  PartyListViewItem_o *v1410; // x7
  __int64 v1411; // x1
  __int64 v1412; // x2
  __int64 v1413; // x3
  BlankEarthSpotAddMaster_o *v1414; // x20
  int64_t v1415; // x2
  int32_t v1416; // w3
  System_String_o *v1417; // x4
  BattleSetupInfo_o *v1418; // x5
  FollowerInfo_o *v1419; // x6
  PartyListViewItem_o *v1420; // x7
  __int64 v1421; // x1
  __int64 v1422; // x2
  __int64 v1423; // x3
  SpotMaster_o *v1424; // x20
  int64_t v1425; // x2
  int32_t v1426; // w3
  System_String_o *v1427; // x4
  BattleSetupInfo_o *v1428; // x5
  FollowerInfo_o *v1429; // x6
  PartyListViewItem_o *v1430; // x7
  __int64 v1431; // x1
  __int64 v1432; // x2
  __int64 v1433; // x3
  SpotImageMaster_o *v1434; // x20
  int64_t v1435; // x2
  int32_t v1436; // w3
  System_String_o *v1437; // x4
  BattleSetupInfo_o *v1438; // x5
  FollowerInfo_o *v1439; // x6
  PartyListViewItem_o *v1440; // x7
  __int64 v1441; // x1
  __int64 v1442; // x2
  __int64 v1443; // x3
  SpotRoadMaster_o *v1444; // x20
  int64_t v1445; // x2
  int32_t v1446; // w3
  System_String_o *v1447; // x4
  BattleSetupInfo_o *v1448; // x5
  FollowerInfo_o *v1449; // x6
  PartyListViewItem_o *v1450; // x7
  __int64 v1451; // x1
  __int64 v1452; // x2
  __int64 v1453; // x3
  SpotPathMaster_o *v1454; // x20
  int64_t v1455; // x2
  int32_t v1456; // w3
  System_String_o *v1457; // x4
  BattleSetupInfo_o *v1458; // x5
  FollowerInfo_o *v1459; // x6
  PartyListViewItem_o *v1460; // x7
  __int64 v1461; // x1
  __int64 v1462; // x2
  __int64 v1463; // x3
  SpotAddMaster_o *v1464; // x20
  int64_t v1465; // x2
  int32_t v1466; // w3
  System_String_o *v1467; // x4
  BattleSetupInfo_o *v1468; // x5
  FollowerInfo_o *v1469; // x6
  PartyListViewItem_o *v1470; // x7
  __int64 v1471; // x1
  __int64 v1472; // x2
  __int64 v1473; // x3
  MapGimmickMaster_o *v1474; // x20
  int64_t v1475; // x2
  int32_t v1476; // w3
  System_String_o *v1477; // x4
  BattleSetupInfo_o *v1478; // x5
  FollowerInfo_o *v1479; // x6
  PartyListViewItem_o *v1480; // x7
  __int64 v1481; // x1
  __int64 v1482; // x2
  __int64 v1483; // x3
  GiftMaster_o *v1484; // x20
  int64_t v1485; // x2
  int32_t v1486; // w3
  System_String_o *v1487; // x4
  BattleSetupInfo_o *v1488; // x5
  FollowerInfo_o *v1489; // x6
  PartyListViewItem_o *v1490; // x7
  __int64 v1491; // x1
  __int64 v1492; // x2
  __int64 v1493; // x3
  GiftAddMaster_o *v1494; // x20
  int64_t v1495; // x2
  int32_t v1496; // w3
  System_String_o *v1497; // x4
  BattleSetupInfo_o *v1498; // x5
  FollowerInfo_o *v1499; // x6
  PartyListViewItem_o *v1500; // x7
  __int64 v1501; // x1
  __int64 v1502; // x2
  __int64 v1503; // x3
  ShopMaster_o *v1504; // x20
  int64_t v1505; // x2
  int32_t v1506; // w3
  System_String_o *v1507; // x4
  BattleSetupInfo_o *v1508; // x5
  FollowerInfo_o *v1509; // x6
  PartyListViewItem_o *v1510; // x7
  __int64 v1511; // x1
  __int64 v1512; // x2
  __int64 v1513; // x3
  StoneShopMaster_o *v1514; // x20
  int64_t v1515; // x2
  int32_t v1516; // w3
  System_String_o *v1517; // x4
  BattleSetupInfo_o *v1518; // x5
  FollowerInfo_o *v1519; // x6
  PartyListViewItem_o *v1520; // x7
  __int64 v1521; // x1
  __int64 v1522; // x2
  __int64 v1523; // x3
  BankShopMaster_o *v1524; // x20
  int64_t v1525; // x2
  int32_t v1526; // w3
  System_String_o *v1527; // x4
  BattleSetupInfo_o *v1528; // x5
  FollowerInfo_o *v1529; // x6
  PartyListViewItem_o *v1530; // x7
  __int64 v1531; // x1
  __int64 v1532; // x2
  __int64 v1533; // x3
  ShopScriptMaster_o *v1534; // x20
  int64_t v1535; // x2
  int32_t v1536; // w3
  System_String_o *v1537; // x4
  BattleSetupInfo_o *v1538; // x5
  FollowerInfo_o *v1539; // x6
  PartyListViewItem_o *v1540; // x7
  __int64 v1541; // x1
  __int64 v1542; // x2
  __int64 v1543; // x3
  StageMaster_o *v1544; // x20
  int64_t v1545; // x2
  int32_t v1546; // w3
  System_String_o *v1547; // x4
  BattleSetupInfo_o *v1548; // x5
  FollowerInfo_o *v1549; // x6
  PartyListViewItem_o *v1550; // x7
  __int64 v1551; // x1
  __int64 v1552; // x2
  __int64 v1553; // x3
  ServantGroupMaster_o *v1554; // x20
  int64_t v1555; // x2
  int32_t v1556; // w3
  System_String_o *v1557; // x4
  BattleSetupInfo_o *v1558; // x5
  FollowerInfo_o *v1559; // x6
  PartyListViewItem_o *v1560; // x7
  __int64 v1561; // x1
  __int64 v1562; // x2
  __int64 v1563; // x3
  ServantLimitMaster_o *v1564; // x20
  int64_t v1565; // x2
  int32_t v1566; // w3
  System_String_o *v1567; // x4
  BattleSetupInfo_o *v1568; // x5
  FollowerInfo_o *v1569; // x6
  PartyListViewItem_o *v1570; // x7
  __int64 v1571; // x1
  __int64 v1572; // x2
  __int64 v1573; // x3
  ServantLimitAddMaster_o *v1574; // x20
  int64_t v1575; // x2
  int32_t v1576; // w3
  System_String_o *v1577; // x4
  BattleSetupInfo_o *v1578; // x5
  FollowerInfo_o *v1579; // x6
  PartyListViewItem_o *v1580; // x7
  __int64 v1581; // x1
  __int64 v1582; // x2
  __int64 v1583; // x3
  ServantSkillMaster_o *v1584; // x20
  int64_t v1585; // x2
  int32_t v1586; // w3
  System_String_o *v1587; // x4
  BattleSetupInfo_o *v1588; // x5
  FollowerInfo_o *v1589; // x6
  PartyListViewItem_o *v1590; // x7
  __int64 v1591; // x1
  __int64 v1592; // x2
  __int64 v1593; // x3
  ServantPassiveSkillMaster_o *v1594; // x20
  int64_t v1595; // x2
  int32_t v1596; // w3
  System_String_o *v1597; // x4
  BattleSetupInfo_o *v1598; // x5
  FollowerInfo_o *v1599; // x6
  PartyListViewItem_o *v1600; // x7
  __int64 v1601; // x1
  __int64 v1602; // x2
  __int64 v1603; // x3
  BgmMaster_o *v1604; // x20
  int64_t v1605; // x2
  int32_t v1606; // w3
  System_String_o *v1607; // x4
  BattleSetupInfo_o *v1608; // x5
  FollowerInfo_o *v1609; // x6
  PartyListViewItem_o *v1610; // x7
  __int64 v1611; // x1
  __int64 v1612; // x2
  __int64 v1613; // x3
  ServantScriptMaster_o *v1614; // x20
  int64_t v1615; // x2
  int32_t v1616; // w3
  System_String_o *v1617; // x4
  BattleSetupInfo_o *v1618; // x5
  FollowerInfo_o *v1619; // x6
  PartyListViewItem_o *v1620; // x7
  __int64 v1621; // x1
  __int64 v1622; // x2
  __int64 v1623; // x3
  NewsMaster_o *v1624; // x20
  int64_t v1625; // x2
  int32_t v1626; // w3
  System_String_o *v1627; // x4
  BattleSetupInfo_o *v1628; // x5
  FollowerInfo_o *v1629; // x6
  PartyListViewItem_o *v1630; // x7
  __int64 v1631; // x1
  __int64 v1632; // x2
  __int64 v1633; // x3
  TelopMaster_o *v1634; // x20
  int64_t v1635; // x2
  int32_t v1636; // w3
  System_String_o *v1637; // x4
  BattleSetupInfo_o *v1638; // x5
  FollowerInfo_o *v1639; // x6
  PartyListViewItem_o *v1640; // x7
  __int64 v1641; // x1
  __int64 v1642; // x2
  __int64 v1643; // x3
  UserExpMaster_o *v1644; // x20
  int64_t v1645; // x2
  int32_t v1646; // w3
  System_String_o *v1647; // x4
  BattleSetupInfo_o *v1648; // x5
  FollowerInfo_o *v1649; // x6
  PartyListViewItem_o *v1650; // x7
  __int64 v1651; // x1
  __int64 v1652; // x2
  __int64 v1653; // x3
  TreasureDvcMaster_o *v1654; // x20
  int64_t v1655; // x2
  int32_t v1656; // w3
  System_String_o *v1657; // x4
  BattleSetupInfo_o *v1658; // x5
  FollowerInfo_o *v1659; // x6
  PartyListViewItem_o *v1660; // x7
  __int64 v1661; // x1
  __int64 v1662; // x2
  __int64 v1663; // x3
  ServantTreasureDvcMaster_o *v1664; // x20
  int64_t v1665; // x2
  int32_t v1666; // w3
  System_String_o *v1667; // x4
  BattleSetupInfo_o *v1668; // x5
  FollowerInfo_o *v1669; // x6
  PartyListViewItem_o *v1670; // x7
  __int64 v1671; // x1
  __int64 v1672; // x2
  __int64 v1673; // x3
  SkillMaster_o *v1674; // x20
  int64_t v1675; // x2
  int32_t v1676; // w3
  System_String_o *v1677; // x4
  BattleSetupInfo_o *v1678; // x5
  FollowerInfo_o *v1679; // x6
  PartyListViewItem_o *v1680; // x7
  __int64 v1681; // x1
  __int64 v1682; // x2
  __int64 v1683; // x3
  SkillLvMaster_o *v1684; // x20
  int64_t v1685; // x2
  int32_t v1686; // w3
  System_String_o *v1687; // x4
  BattleSetupInfo_o *v1688; // x5
  FollowerInfo_o *v1689; // x6
  PartyListViewItem_o *v1690; // x7
  __int64 v1691; // x1
  __int64 v1692; // x2
  __int64 v1693; // x3
  SkillDetailMaster_o *v1694; // x20
  int64_t v1695; // x2
  int32_t v1696; // w3
  System_String_o *v1697; // x4
  BattleSetupInfo_o *v1698; // x5
  FollowerInfo_o *v1699; // x6
  PartyListViewItem_o *v1700; // x7
  __int64 v1701; // x1
  __int64 v1702; // x2
  __int64 v1703; // x3
  CommandSpellMaster_o *v1704; // x20
  int64_t v1705; // x2
  int32_t v1706; // w3
  System_String_o *v1707; // x4
  BattleSetupInfo_o *v1708; // x5
  FollowerInfo_o *v1709; // x6
  PartyListViewItem_o *v1710; // x7
  __int64 v1711; // x1
  __int64 v1712; // x2
  __int64 v1713; // x3
  EquipMaster_o *v1714; // x20
  int64_t v1715; // x2
  int32_t v1716; // w3
  System_String_o *v1717; // x4
  BattleSetupInfo_o *v1718; // x5
  FollowerInfo_o *v1719; // x6
  PartyListViewItem_o *v1720; // x7
  __int64 v1721; // x1
  __int64 v1722; // x2
  __int64 v1723; // x3
  EquipExpMaster_o *v1724; // x20
  int64_t v1725; // x2
  int32_t v1726; // w3
  System_String_o *v1727; // x4
  BattleSetupInfo_o *v1728; // x5
  FollowerInfo_o *v1729; // x6
  PartyListViewItem_o *v1730; // x7
  __int64 v1731; // x1
  __int64 v1732; // x2
  __int64 v1733; // x3
  EquipSkillMaster_o *v1734; // x20
  int64_t v1735; // x2
  int32_t v1736; // w3
  System_String_o *v1737; // x4
  BattleSetupInfo_o *v1738; // x5
  FollowerInfo_o *v1739; // x6
  PartyListViewItem_o *v1740; // x7
  __int64 v1741; // x1
  __int64 v1742; // x2
  __int64 v1743; // x3
  SubEquipMaster_o *v1744; // x20
  int64_t v1745; // x2
  int32_t v1746; // w3
  System_String_o *v1747; // x4
  BattleSetupInfo_o *v1748; // x5
  FollowerInfo_o *v1749; // x6
  PartyListViewItem_o *v1750; // x7
  __int64 v1751; // x1
  __int64 v1752; // x2
  __int64 v1753; // x3
  AccessaryMaster_o *v1754; // x20
  int64_t v1755; // x2
  int32_t v1756; // w3
  System_String_o *v1757; // x4
  BattleSetupInfo_o *v1758; // x5
  FollowerInfo_o *v1759; // x6
  PartyListViewItem_o *v1760; // x7
  __int64 v1761; // x1
  __int64 v1762; // x2
  __int64 v1763; // x3
  UserPresentBoxMaster_o *v1764; // x20
  int64_t v1765; // x2
  int32_t v1766; // w3
  System_String_o *v1767; // x4
  BattleSetupInfo_o *v1768; // x5
  FollowerInfo_o *v1769; // x6
  PartyListViewItem_o *v1770; // x7
  __int64 v1771; // x1
  __int64 v1772; // x2
  __int64 v1773; // x3
  UserDeckMaster_o *v1774; // x20
  int64_t v1775; // x2
  int32_t v1776; // w3
  System_String_o *v1777; // x4
  BattleSetupInfo_o *v1778; // x5
  FollowerInfo_o *v1779; // x6
  PartyListViewItem_o *v1780; // x7
  __int64 v1781; // x1
  __int64 v1782; // x2
  __int64 v1783; // x3
  UserSubEquipMaster_o *v1784; // x20
  int64_t v1785; // x2
  int32_t v1786; // w3
  System_String_o *v1787; // x4
  BattleSetupInfo_o *v1788; // x5
  FollowerInfo_o *v1789; // x6
  PartyListViewItem_o *v1790; // x7
  __int64 v1791; // x1
  __int64 v1792; // x2
  __int64 v1793; // x3
  GachaMaster_o *v1794; // x20
  int64_t v1795; // x2
  int32_t v1796; // w3
  System_String_o *v1797; // x4
  BattleSetupInfo_o *v1798; // x5
  FollowerInfo_o *v1799; // x6
  PartyListViewItem_o *v1800; // x7
  __int64 v1801; // x1
  __int64 v1802; // x2
  __int64 v1803; // x3
  GachaImageMaster_o *v1804; // x20
  int64_t v1805; // x2
  int32_t v1806; // w3
  System_String_o *v1807; // x4
  BattleSetupInfo_o *v1808; // x5
  FollowerInfo_o *v1809; // x6
  PartyListViewItem_o *v1810; // x7
  __int64 v1811; // x1
  __int64 v1812; // x2
  __int64 v1813; // x3
  UserGachaMaster_o *v1814; // x20
  int64_t v1815; // x2
  int32_t v1816; // w3
  System_String_o *v1817; // x4
  BattleSetupInfo_o *v1818; // x5
  FollowerInfo_o *v1819; // x6
  PartyListViewItem_o *v1820; // x7
  __int64 v1821; // x1
  __int64 v1822; // x2
  __int64 v1823; // x3
  UserEquipMaster_o *v1824; // x20
  int64_t v1825; // x2
  int32_t v1826; // w3
  System_String_o *v1827; // x4
  BattleSetupInfo_o *v1828; // x5
  FollowerInfo_o *v1829; // x6
  PartyListViewItem_o *v1830; // x7
  __int64 v1831; // x1
  __int64 v1832; // x2
  __int64 v1833; // x3
  UserServantCollectionMaster_o *v1834; // x20
  int64_t v1835; // x2
  int32_t v1836; // w3
  System_String_o *v1837; // x4
  BattleSetupInfo_o *v1838; // x5
  FollowerInfo_o *v1839; // x6
  PartyListViewItem_o *v1840; // x7
  __int64 v1841; // x1
  __int64 v1842; // x2
  __int64 v1843; // x3
  FriendshipMaster_o *v1844; // x20
  int64_t v1845; // x2
  int32_t v1846; // w3
  System_String_o *v1847; // x4
  BattleSetupInfo_o *v1848; // x5
  FollowerInfo_o *v1849; // x6
  PartyListViewItem_o *v1850; // x7
  __int64 v1851; // x1
  __int64 v1852; // x2
  __int64 v1853; // x3
  GachaTicketMaster_o *v1854; // x20
  int64_t v1855; // x2
  int32_t v1856; // w3
  System_String_o *v1857; // x4
  BattleSetupInfo_o *v1858; // x5
  FollowerInfo_o *v1859; // x6
  PartyListViewItem_o *v1860; // x7
  __int64 v1861; // x1
  __int64 v1862; // x2
  __int64 v1863; // x3
  UserFormationMaster_o *v1864; // x20
  int64_t v1865; // x2
  int32_t v1866; // w3
  System_String_o *v1867; // x4
  BattleSetupInfo_o *v1868; // x5
  FollowerInfo_o *v1869; // x6
  PartyListViewItem_o *v1870; // x7
  __int64 v1871; // x1
  __int64 v1872; // x2
  __int64 v1873; // x3
  FunctionMaster_o *v1874; // x20
  int64_t v1875; // x2
  int32_t v1876; // w3
  System_String_o *v1877; // x4
  BattleSetupInfo_o *v1878; // x5
  FollowerInfo_o *v1879; // x6
  PartyListViewItem_o *v1880; // x7
  __int64 v1881; // x1
  __int64 v1882; // x2
  __int64 v1883; // x3
  BuffMaster_o *v1884; // x20
  int64_t v1885; // x2
  int32_t v1886; // w3
  System_String_o *v1887; // x4
  BattleSetupInfo_o *v1888; // x5
  FollowerInfo_o *v1889; // x6
  PartyListViewItem_o *v1890; // x7
  __int64 v1891; // x1
  __int64 v1892; // x2
  __int64 v1893; // x3
  GachaReleaseMaster_o *v1894; // x20
  int64_t v1895; // x2
  int32_t v1896; // w3
  System_String_o *v1897; // x4
  BattleSetupInfo_o *v1898; // x5
  FollowerInfo_o *v1899; // x6
  PartyListViewItem_o *v1900; // x7
  __int64 v1901; // x1
  __int64 v1902; // x2
  __int64 v1903; // x3
  CombineQpMaster_o *v1904; // x20
  int64_t v1905; // x2
  int32_t v1906; // w3
  System_String_o *v1907; // x4
  BattleSetupInfo_o *v1908; // x5
  FollowerInfo_o *v1909; // x6
  PartyListViewItem_o *v1910; // x7
  __int64 v1911; // x1
  __int64 v1912; // x2
  __int64 v1913; // x3
  CombineMaterialMaster_o *v1914; // x20
  int64_t v1915; // x2
  int32_t v1916; // w3
  System_String_o *v1917; // x4
  BattleSetupInfo_o *v1918; // x5
  FollowerInfo_o *v1919; // x6
  PartyListViewItem_o *v1920; // x7
  __int64 v1921; // x1
  __int64 v1922; // x2
  __int64 v1923; // x3
  EventCombineMaster_o *v1924; // x20
  int64_t v1925; // x2
  int32_t v1926; // w3
  System_String_o *v1927; // x4
  BattleSetupInfo_o *v1928; // x5
  FollowerInfo_o *v1929; // x6
  PartyListViewItem_o *v1930; // x7
  __int64 v1931; // x1
  __int64 v1932; // x2
  __int64 v1933; // x3
  ServantExpMaster_o *v1934; // x20
  int64_t v1935; // x2
  int32_t v1936; // w3
  System_String_o *v1937; // x4
  BattleSetupInfo_o *v1938; // x5
  FollowerInfo_o *v1939; // x6
  PartyListViewItem_o *v1940; // x7
  __int64 v1941; // x1
  __int64 v1942; // x2
  __int64 v1943; // x3
  CombineSkillMaster_o *v1944; // x20
  int64_t v1945; // x2
  int32_t v1946; // w3
  System_String_o *v1947; // x4
  BattleSetupInfo_o *v1948; // x5
  FollowerInfo_o *v1949; // x6
  PartyListViewItem_o *v1950; // x7
  __int64 v1951; // x1
  __int64 v1952; // x2
  __int64 v1953; // x3
  CombineTdMaster_o *v1954; // x20
  int64_t v1955; // x2
  int32_t v1956; // w3
  System_String_o *v1957; // x4
  BattleSetupInfo_o *v1958; // x5
  FollowerInfo_o *v1959; // x6
  PartyListViewItem_o *v1960; // x7
  __int64 v1961; // x1
  __int64 v1962; // x2
  __int64 v1963; // x3
  EventQuestMaster_o *v1964; // x20
  int64_t v1965; // x2
  int32_t v1966; // w3
  System_String_o *v1967; // x4
  BattleSetupInfo_o *v1968; // x5
  FollowerInfo_o *v1969; // x6
  PartyListViewItem_o *v1970; // x7
  __int64 v1971; // x1
  __int64 v1972; // x2
  __int64 v1973; // x3
  EventCampaignMaster_o *v1974; // x20
  int64_t v1975; // x2
  int32_t v1976; // w3
  System_String_o *v1977; // x4
  BattleSetupInfo_o *v1978; // x5
  FollowerInfo_o *v1979; // x6
  PartyListViewItem_o *v1980; // x7
  __int64 v1981; // x1
  __int64 v1982; // x2
  __int64 v1983; // x3
  IllustratorMaster_o *v1984; // x20
  int64_t v1985; // x2
  int32_t v1986; // w3
  System_String_o *v1987; // x4
  BattleSetupInfo_o *v1988; // x5
  FollowerInfo_o *v1989; // x6
  PartyListViewItem_o *v1990; // x7
  __int64 v1991; // x1
  __int64 v1992; // x2
  __int64 v1993; // x3
  CvMaster_o *v1994; // x20
  int64_t v1995; // x2
  int32_t v1996; // w3
  System_String_o *v1997; // x4
  BattleSetupInfo_o *v1998; // x5
  FollowerInfo_o *v1999; // x6
  PartyListViewItem_o *v2000; // x7
  __int64 v2001; // x1
  __int64 v2002; // x2
  __int64 v2003; // x3
  TreasureDvcLvMaster_o *v2004; // x20
  int64_t v2005; // x2
  int32_t v2006; // w3
  System_String_o *v2007; // x4
  BattleSetupInfo_o *v2008; // x5
  FollowerInfo_o *v2009; // x6
  PartyListViewItem_o *v2010; // x7
  __int64 v2011; // x1
  __int64 v2012; // x2
  __int64 v2013; // x3
  TreasureDvcDetailMaster_o *v2014; // x20
  int64_t v2015; // x2
  int32_t v2016; // w3
  System_String_o *v2017; // x4
  BattleSetupInfo_o *v2018; // x5
  FollowerInfo_o *v2019; // x6
  PartyListViewItem_o *v2020; // x7
  __int64 v2021; // x1
  __int64 v2022; // x2
  __int64 v2023; // x3
  UserFollowerMaster_o *v2024; // x20
  int64_t v2025; // x2
  int32_t v2026; // w3
  System_String_o *v2027; // x4
  BattleSetupInfo_o *v2028; // x5
  FollowerInfo_o *v2029; // x6
  PartyListViewItem_o *v2030; // x7
  __int64 v2031; // x1
  __int64 v2032; // x2
  __int64 v2033; // x3
  NpcFollowerMaster_o *v2034; // x20
  int64_t v2035; // x2
  int32_t v2036; // w3
  System_String_o *v2037; // x4
  BattleSetupInfo_o *v2038; // x5
  FollowerInfo_o *v2039; // x6
  PartyListViewItem_o *v2040; // x7
  __int64 v2041; // x1
  __int64 v2042; // x2
  __int64 v2043; // x3
  NpcServantFollowerMaster_o *v2044; // x20
  int64_t v2045; // x2
  int32_t v2046; // w3
  System_String_o *v2047; // x4
  BattleSetupInfo_o *v2048; // x5
  FollowerInfo_o *v2049; // x6
  PartyListViewItem_o *v2050; // x7
  __int64 v2051; // x1
  __int64 v2052; // x2
  __int64 v2053; // x3
  UserEventMaster_o *v2054; // x20
  int64_t v2055; // x2
  int32_t v2056; // w3
  System_String_o *v2057; // x4
  BattleSetupInfo_o *v2058; // x5
  FollowerInfo_o *v2059; // x6
  PartyListViewItem_o *v2060; // x7
  __int64 v2061; // x1
  __int64 v2062; // x2
  __int64 v2063; // x3
  UserShopMaster_o *v2064; // x20
  int64_t v2065; // x2
  int32_t v2066; // w3
  System_String_o *v2067; // x4
  BattleSetupInfo_o *v2068; // x5
  FollowerInfo_o *v2069; // x6
  PartyListViewItem_o *v2070; // x7
  __int64 v2071; // x1
  __int64 v2072; // x2
  __int64 v2073; // x3
  UserContinueMaster_o *v2074; // x20
  int64_t v2075; // x2
  int32_t v2076; // w3
  System_String_o *v2077; // x4
  BattleSetupInfo_o *v2078; // x5
  FollowerInfo_o *v2079; // x6
  PartyListViewItem_o *v2080; // x7
  __int64 v2081; // x1
  __int64 v2082; // x2
  __int64 v2083; // x3
  ConstantMaster_o *v2084; // x20
  int64_t v2085; // x2
  int32_t v2086; // w3
  System_String_o *v2087; // x4
  BattleSetupInfo_o *v2088; // x5
  FollowerInfo_o *v2089; // x6
  PartyListViewItem_o *v2090; // x7
  __int64 v2091; // x1
  __int64 v2092; // x2
  __int64 v2093; // x3
  ConstantLongMaster_o *v2094; // x20
  int64_t v2095; // x2
  int32_t v2096; // w3
  System_String_o *v2097; // x4
  BattleSetupInfo_o *v2098; // x5
  FollowerInfo_o *v2099; // x6
  PartyListViewItem_o *v2100; // x7
  __int64 v2101; // x1
  __int64 v2102; // x2
  __int64 v2103; // x3
  ConstantStrMaster_o *v2104; // x20
  int64_t v2105; // x2
  int32_t v2106; // w3
  System_String_o *v2107; // x4
  BattleSetupInfo_o *v2108; // x5
  FollowerInfo_o *v2109; // x6
  PartyListViewItem_o *v2110; // x7
  __int64 v2111; // x1
  __int64 v2112; // x2
  __int64 v2113; // x3
  AiMaster_o *v2114; // x20
  int64_t v2115; // x2
  int32_t v2116; // w3
  System_String_o *v2117; // x4
  BattleSetupInfo_o *v2118; // x5
  FollowerInfo_o *v2119; // x6
  PartyListViewItem_o *v2120; // x7
  __int64 v2121; // x1
  __int64 v2122; // x2
  __int64 v2123; // x3
  AiActMaster_o *v2124; // x20
  int64_t v2125; // x2
  int32_t v2126; // w3
  System_String_o *v2127; // x4
  BattleSetupInfo_o *v2128; // x5
  FollowerInfo_o *v2129; // x6
  PartyListViewItem_o *v2130; // x7
  __int64 v2131; // x1
  __int64 v2132; // x2
  __int64 v2133; // x3
  AttriRelationMaster_o *v2134; // x20
  int64_t v2135; // x2
  int32_t v2136; // w3
  System_String_o *v2137; // x4
  BattleSetupInfo_o *v2138; // x5
  FollowerInfo_o *v2139; // x6
  PartyListViewItem_o *v2140; // x7
  __int64 v2141; // x1
  __int64 v2142; // x2
  __int64 v2143; // x3
  ClassRelationMaster_o *v2144; // x20
  int64_t v2145; // x2
  int32_t v2146; // w3
  System_String_o *v2147; // x4
  BattleSetupInfo_o *v2148; // x5
  FollowerInfo_o *v2149; // x6
  PartyListViewItem_o *v2150; // x7
  __int64 v2151; // x1
  __int64 v2152; // x2
  __int64 v2153; // x3
  EffectMaster_o *v2154; // x20
  int64_t v2155; // x2
  int32_t v2156; // w3
  System_String_o *v2157; // x4
  BattleSetupInfo_o *v2158; // x5
  FollowerInfo_o *v2159; // x6
  PartyListViewItem_o *v2160; // x7
  __int64 v2161; // x1
  __int64 v2162; // x2
  __int64 v2163; // x3
  EquipImageMaster_o *v2164; // x20
  int64_t v2165; // x2
  int32_t v2166; // w3
  System_String_o *v2167; // x4
  BattleSetupInfo_o *v2168; // x5
  FollowerInfo_o *v2169; // x6
  PartyListViewItem_o *v2170; // x7
  __int64 v2171; // x1
  __int64 v2172; // x2
  __int64 v2173; // x3
  ServantVoiceMaster_o *v2174; // x20
  int64_t v2175; // x2
  int32_t v2176; // w3
  System_String_o *v2177; // x4
  BattleSetupInfo_o *v2178; // x5
  FollowerInfo_o *v2179; // x6
  PartyListViewItem_o *v2180; // x7
  __int64 v2181; // x1
  __int64 v2182; // x2
  __int64 v2183; // x3
  CombineLimitMaster_o *v2184; // x20
  int64_t v2185; // x2
  int32_t v2186; // w3
  System_String_o *v2187; // x4
  BattleSetupInfo_o *v2188; // x5
  FollowerInfo_o *v2189; // x6
  PartyListViewItem_o *v2190; // x7
  __int64 v2191; // x1
  __int64 v2192; // x2
  __int64 v2193; // x3
  CardMaster_o *v2194; // x20
  int64_t v2195; // x2
  int32_t v2196; // w3
  System_String_o *v2197; // x4
  BattleSetupInfo_o *v2198; // x5
  FollowerInfo_o *v2199; // x6
  PartyListViewItem_o *v2200; // x7
  __int64 v2201; // x1
  __int64 v2202; // x2
  __int64 v2203; // x3
  CombineQpSvtEquipMaster_o *v2204; // x20
  int64_t v2205; // x2
  int32_t v2206; // w3
  System_String_o *v2207; // x4
  BattleSetupInfo_o *v2208; // x5
  FollowerInfo_o *v2209; // x6
  PartyListViewItem_o *v2210; // x7
  __int64 v2211; // x1
  __int64 v2212; // x2
  __int64 v2213; // x3
  ServantRarityMaster_o *v2214; // x20
  int64_t v2215; // x2
  int32_t v2216; // w3
  System_String_o *v2217; // x4
  BattleSetupInfo_o *v2218; // x5
  FollowerInfo_o *v2219; // x6
  PartyListViewItem_o *v2220; // x7
  __int64 v2221; // x1
  __int64 v2222; // x2
  __int64 v2223; // x3
  SetItemMaster_o *v2224; // x20
  int64_t v2225; // x2
  int32_t v2226; // w3
  System_String_o *v2227; // x4
  BattleSetupInfo_o *v2228; // x5
  FollowerInfo_o *v2229; // x6
  PartyListViewItem_o *v2230; // x7
  __int64 v2231; // x1
  __int64 v2232; // x2
  __int64 v2233; // x3
  RecoverMaster_o *v2234; // x20
  int64_t v2235; // x2
  int32_t v2236; // w3
  System_String_o *v2237; // x4
  BattleSetupInfo_o *v2238; // x5
  FollowerInfo_o *v2239; // x6
  PartyListViewItem_o *v2240; // x7
  __int64 v2241; // x1
  __int64 v2242; // x2
  __int64 v2243; // x3
  BannerMaster_o *v2244; // x20
  int64_t v2245; // x2
  int32_t v2246; // w3
  System_String_o *v2247; // x4
  BattleSetupInfo_o *v2248; // x5
  FollowerInfo_o *v2249; // x6
  PartyListViewItem_o *v2250; // x7
  __int64 v2251; // x1
  __int64 v2252; // x2
  __int64 v2253; // x3
  ShopReleaseMaster_o *v2254; // x20
  int64_t v2255; // x2
  int32_t v2256; // w3
  System_String_o *v2257; // x4
  BattleSetupInfo_o *v2258; // x5
  FollowerInfo_o *v2259; // x6
  PartyListViewItem_o *v2260; // x7
  __int64 v2261; // x1
  __int64 v2262; // x2
  __int64 v2263; // x3
  EventRewardMaster_o *v2264; // x20
  int64_t v2265; // x2
  int32_t v2266; // w3
  System_String_o *v2267; // x4
  BattleSetupInfo_o *v2268; // x5
  FollowerInfo_o *v2269; // x6
  PartyListViewItem_o *v2270; // x7
  __int64 v2271; // x1
  __int64 v2272; // x2
  __int64 v2273; // x3
  EventDetailMaster_o *v2274; // x20
  int64_t v2275; // x2
  int32_t v2276; // w3
  System_String_o *v2277; // x4
  BattleSetupInfo_o *v2278; // x5
  FollowerInfo_o *v2279; // x6
  PartyListViewItem_o *v2280; // x7
  __int64 v2281; // x1
  __int64 v2282; // x2
  __int64 v2283; // x3
  EventServantMaster_o *v2284; // x20
  int64_t v2285; // x2
  int32_t v2286; // w3
  System_String_o *v2287; // x4
  BattleSetupInfo_o *v2288; // x5
  FollowerInfo_o *v2289; // x6
  PartyListViewItem_o *v2290; // x7
  __int64 v2291; // x1
  __int64 v2292; // x2
  __int64 v2293; // x3
  BoxGachaMaster_o *v2294; // x20
  int64_t v2295; // x2
  int32_t v2296; // w3
  System_String_o *v2297; // x4
  BattleSetupInfo_o *v2298; // x5
  FollowerInfo_o *v2299; // x6
  PartyListViewItem_o *v2300; // x7
  __int64 v2301; // x1
  __int64 v2302; // x2
  __int64 v2303; // x3
  BoxGachaBaseMaster_o *v2304; // x20
  int64_t v2305; // x2
  int32_t v2306; // w3
  System_String_o *v2307; // x4
  BattleSetupInfo_o *v2308; // x5
  FollowerInfo_o *v2309; // x6
  PartyListViewItem_o *v2310; // x7
  __int64 v2311; // x1
  __int64 v2312; // x2
  __int64 v2313; // x3
  BoxGachaTalkMaster_o *v2314; // x20
  int64_t v2315; // x2
  int32_t v2316; // w3
  System_String_o *v2317; // x4
  BattleSetupInfo_o *v2318; // x5
  FollowerInfo_o *v2319; // x6
  PartyListViewItem_o *v2320; // x7
  __int64 v2321; // x1
  __int64 v2322; // x2
  __int64 v2323; // x3
  UserBoxGachaMaster_o *v2324; // x20
  int64_t v2325; // x2
  int32_t v2326; // w3
  System_String_o *v2327; // x4
  BattleSetupInfo_o *v2328; // x5
  FollowerInfo_o *v2329; // x6
  PartyListViewItem_o *v2330; // x7
  __int64 v2331; // x1
  __int64 v2332; // x2
  __int64 v2333; // x3
  BoxGachaHistoryMaster_o *v2334; // x20
  int64_t v2335; // x2
  int32_t v2336; // w3
  System_String_o *v2337; // x4
  BattleSetupInfo_o *v2338; // x5
  FollowerInfo_o *v2339; // x6
  PartyListViewItem_o *v2340; // x7
  __int64 v2341; // x1
  __int64 v2342; // x2
  __int64 v2343; // x3
  BattleBgMaster_o *v2344; // x20
  int64_t v2345; // x2
  int32_t v2346; // w3
  System_String_o *v2347; // x4
  BattleSetupInfo_o *v2348; // x5
  FollowerInfo_o *v2349; // x6
  PartyListViewItem_o *v2350; // x7
  __int64 v2351; // x1
  __int64 v2352; // x2
  __int64 v2353; // x3
  TipsBattleMaster_o *v2354; // x20
  int64_t v2355; // x2
  int32_t v2356; // w3
  System_String_o *v2357; // x4
  BattleSetupInfo_o *v2358; // x5
  FollowerInfo_o *v2359; // x6
  PartyListViewItem_o *v2360; // x7
  __int64 v2361; // x1
  __int64 v2362; // x2
  __int64 v2363; // x3
  UserLoginMaster_o *v2364; // x20
  int64_t v2365; // x2
  int32_t v2366; // w3
  System_String_o *v2367; // x4
  BattleSetupInfo_o *v2368; // x5
  FollowerInfo_o *v2369; // x6
  PartyListViewItem_o *v2370; // x7
  __int64 v2371; // x1
  __int64 v2372; // x2
  __int64 v2373; // x3
  VoiceMaster_o *v2374; // x20
  int64_t v2375; // x2
  int32_t v2376; // w3
  System_String_o *v2377; // x4
  BattleSetupInfo_o *v2378; // x5
  FollowerInfo_o *v2379; // x6
  PartyListViewItem_o *v2380; // x7
  __int64 v2381; // x1
  __int64 v2382; // x2
  __int64 v2383; // x3
  EventRewardExtraMaster_o *v2384; // x20
  int64_t v2385; // x2
  int32_t v2386; // w3
  System_String_o *v2387; // x4
  BattleSetupInfo_o *v2388; // x5
  FollowerInfo_o *v2389; // x6
  PartyListViewItem_o *v2390; // x7
  __int64 v2391; // x1
  __int64 v2392; // x2
  __int64 v2393; // x3
  EventMissionMaster_o *v2394; // x20
  int64_t v2395; // x2
  int32_t v2396; // w3
  System_String_o *v2397; // x4
  BattleSetupInfo_o *v2398; // x5
  FollowerInfo_o *v2399; // x6
  PartyListViewItem_o *v2400; // x7
  __int64 v2401; // x1
  __int64 v2402; // x2
  __int64 v2403; // x3
  EventMissionActionMaster_o *v2404; // x20
  int64_t v2405; // x2
  int32_t v2406; // w3
  System_String_o *v2407; // x4
  BattleSetupInfo_o *v2408; // x5
  FollowerInfo_o *v2409; // x6
  PartyListViewItem_o *v2410; // x7
  __int64 v2411; // x1
  __int64 v2412; // x2
  __int64 v2413; // x3
  EventMissionActionAddMaster_o *v2414; // x20
  int64_t v2415; // x2
  int32_t v2416; // w3
  System_String_o *v2417; // x4
  BattleSetupInfo_o *v2418; // x5
  FollowerInfo_o *v2419; // x6
  PartyListViewItem_o *v2420; // x7
  __int64 v2421; // x1
  __int64 v2422; // x2
  __int64 v2423; // x3
  EventMissionConditionMaster_o *v2424; // x20
  int64_t v2425; // x2
  int32_t v2426; // w3
  System_String_o *v2427; // x4
  BattleSetupInfo_o *v2428; // x5
  FollowerInfo_o *v2429; // x6
  PartyListViewItem_o *v2430; // x7
  __int64 v2431; // x1
  __int64 v2432; // x2
  __int64 v2433; // x3
  EventMissionCondDetailMaster_o *v2434; // x20
  int64_t v2435; // x2
  int32_t v2436; // w3
  System_String_o *v2437; // x4
  BattleSetupInfo_o *v2438; // x5
  FollowerInfo_o *v2439; // x6
  PartyListViewItem_o *v2440; // x7
  __int64 v2441; // x1
  __int64 v2442; // x2
  __int64 v2443; // x3
  EventMissionAddMaster_o *v2444; // x20
  int64_t v2445; // x2
  int32_t v2446; // w3
  System_String_o *v2447; // x4
  BattleSetupInfo_o *v2448; // x5
  FollowerInfo_o *v2449; // x6
  PartyListViewItem_o *v2450; // x7
  __int64 v2451; // x1
  __int64 v2452; // x2
  __int64 v2453; // x3
  CompleteMissionMaster_o *v2454; // x20
  int64_t v2455; // x2
  int32_t v2456; // w3
  System_String_o *v2457; // x4
  BattleSetupInfo_o *v2458; // x5
  FollowerInfo_o *v2459; // x6
  PartyListViewItem_o *v2460; // x7
  __int64 v2461; // x1
  __int64 v2462; // x2
  __int64 v2463; // x3
  EventRewardSetMaster_o *v2464; // x20
  int64_t v2465; // x2
  int32_t v2466; // w3
  System_String_o *v2467; // x4
  BattleSetupInfo_o *v2468; // x5
  FollowerInfo_o *v2469; // x6
  PartyListViewItem_o *v2470; // x7
  __int64 v2471; // x1
  __int64 v2472; // x2
  __int64 v2473; // x3
  UserEventMissionMaster_o *v2474; // x20
  int64_t v2475; // x2
  int32_t v2476; // w3
  System_String_o *v2477; // x4
  BattleSetupInfo_o *v2478; // x5
  FollowerInfo_o *v2479; // x6
  PartyListViewItem_o *v2480; // x7
  __int64 v2481; // x1
  __int64 v2482; // x2
  __int64 v2483; // x3
  UserEventMissionCondDetailMaster_o *v2484; // x20
  int64_t v2485; // x2
  int32_t v2486; // w3
  System_String_o *v2487; // x4
  BattleSetupInfo_o *v2488; // x5
  FollowerInfo_o *v2489; // x6
  PartyListViewItem_o *v2490; // x7
  __int64 v2491; // x1
  __int64 v2492; // x2
  __int64 v2493; // x3
  BoxGachaBaseDetailMaster_o *v2494; // x20
  int64_t v2495; // x2
  int32_t v2496; // w3
  System_String_o *v2497; // x4
  BattleSetupInfo_o *v2498; // x5
  FollowerInfo_o *v2499; // x6
  PartyListViewItem_o *v2500; // x7
  __int64 v2501; // x1
  __int64 v2502; // x2
  __int64 v2503; // x3
  UserServantLeaderMaster_o *v2504; // x20
  int64_t v2505; // x2
  int32_t v2506; // w3
  System_String_o *v2507; // x4
  BattleSetupInfo_o *v2508; // x5
  FollowerInfo_o *v2509; // x6
  PartyListViewItem_o *v2510; // x7
  __int64 v2511; // x1
  __int64 v2512; // x2
  __int64 v2513; // x3
  ClosedMessageMaster_o *v2514; // x20
  int64_t v2515; // x2
  int32_t v2516; // w3
  System_String_o *v2517; // x4
  BattleSetupInfo_o *v2518; // x5
  FollowerInfo_o *v2519; // x6
  PartyListViewItem_o *v2520; // x7
  __int64 v2521; // x1
  __int64 v2522; // x2
  __int64 v2523; // x3
  FunctionGroupMaster_o *v2524; // x20
  int64_t v2525; // x2
  int32_t v2526; // w3
  System_String_o *v2527; // x4
  BattleSetupInfo_o *v2528; // x5
  FollowerInfo_o *v2529; // x6
  PartyListViewItem_o *v2530; // x7
  __int64 v2531; // x1
  __int64 v2532; // x2
  __int64 v2533; // x3
  EventRaidMaster_o *v2534; // x20
  int64_t v2535; // x2
  int32_t v2536; // w3
  System_String_o *v2537; // x4
  BattleSetupInfo_o *v2538; // x5
  FollowerInfo_o *v2539; // x6
  PartyListViewItem_o *v2540; // x7
  __int64 v2541; // x1
  __int64 v2542; // x2
  __int64 v2543; // x3
  TotalEventRaidMaster_o *v2544; // x20
  int64_t v2545; // x2
  int32_t v2546; // w3
  System_String_o *v2547; // x4
  BattleSetupInfo_o *v2548; // x5
  FollowerInfo_o *v2549; // x6
  PartyListViewItem_o *v2550; // x7
  __int64 v2551; // x1
  __int64 v2552; // x2
  __int64 v2553; // x3
  UserEventRaidMaster_o *v2554; // x20
  int64_t v2555; // x2
  int32_t v2556; // w3
  System_String_o *v2557; // x4
  BattleSetupInfo_o *v2558; // x5
  FollowerInfo_o *v2559; // x6
  PartyListViewItem_o *v2560; // x7
  __int64 v2561; // x1
  __int64 v2562; // x2
  __int64 v2563; // x3
  EventPointMaster_o *v2564; // x20
  int64_t v2565; // x2
  int32_t v2566; // w3
  System_String_o *v2567; // x4
  BattleSetupInfo_o *v2568; // x5
  FollowerInfo_o *v2569; // x6
  PartyListViewItem_o *v2570; // x7
  __int64 v2571; // x1
  __int64 v2572; // x2
  __int64 v2573; // x3
  EventPointGroupMaster_o *v2574; // x20
  int64_t v2575; // x2
  int32_t v2576; // w3
  System_String_o *v2577; // x4
  BattleSetupInfo_o *v2578; // x5
  FollowerInfo_o *v2579; // x6
  PartyListViewItem_o *v2580; // x7
  __int64 v2581; // x1
  __int64 v2582; // x2
  __int64 v2583; // x3
  TotalEventPointMaster_o *v2584; // x20
  int64_t v2585; // x2
  int32_t v2586; // w3
  System_String_o *v2587; // x4
  BattleSetupInfo_o *v2588; // x5
  FollowerInfo_o *v2589; // x6
  PartyListViewItem_o *v2590; // x7
  __int64 v2591; // x1
  __int64 v2592; // x2
  __int64 v2593; // x3
  UserEventPointMaster_o *v2594; // x20
  int64_t v2595; // x2
  int32_t v2596; // w3
  System_String_o *v2597; // x4
  BattleSetupInfo_o *v2598; // x5
  FollowerInfo_o *v2599; // x6
  PartyListViewItem_o *v2600; // x7
  __int64 v2601; // x1
  __int64 v2602; // x2
  __int64 v2603; // x3
  EventPointUpperMaster_o *v2604; // x20
  int64_t v2605; // x2
  int32_t v2606; // w3
  System_String_o *v2607; // x4
  BattleSetupInfo_o *v2608; // x5
  FollowerInfo_o *v2609; // x6
  PartyListViewItem_o *v2610; // x7
  __int64 v2611; // x1
  __int64 v2612; // x2
  __int64 v2613; // x3
  EventPointUpperReleaseMaster_o *v2614; // x20
  int64_t v2615; // x2
  int32_t v2616; // w3
  System_String_o *v2617; // x4
  BattleSetupInfo_o *v2618; // x5
  FollowerInfo_o *v2619; // x6
  PartyListViewItem_o *v2620; // x7
  __int64 v2621; // x1
  __int64 v2622; // x2
  __int64 v2623; // x3
  EventRaceMaster_o *v2624; // x20
  int64_t v2625; // x2
  int32_t v2626; // w3
  System_String_o *v2627; // x4
  BattleSetupInfo_o *v2628; // x5
  FollowerInfo_o *v2629; // x6
  PartyListViewItem_o *v2630; // x7
  __int64 v2631; // x1
  __int64 v2632; // x2
  __int64 v2633; // x3
  EventRaceResultMaster_o *v2634; // x20
  int64_t v2635; // x2
  int32_t v2636; // w3
  System_String_o *v2637; // x4
  BattleSetupInfo_o *v2638; // x5
  FollowerInfo_o *v2639; // x6
  PartyListViewItem_o *v2640; // x7
  __int64 v2641; // x1
  __int64 v2642; // x2
  __int64 v2643; // x3
  QuestRacePointMaster_o *v2644; // x20
  int64_t v2645; // x2
  int32_t v2646; // w3
  System_String_o *v2647; // x4
  BattleSetupInfo_o *v2648; // x5
  FollowerInfo_o *v2649; // x6
  PartyListViewItem_o *v2650; // x7
  __int64 v2651; // x1
  __int64 v2652; // x2
  __int64 v2653; // x3
  UserEventRaceMaster_o *v2654; // x20
  int64_t v2655; // x2
  int32_t v2656; // w3
  System_String_o *v2657; // x4
  BattleSetupInfo_o *v2658; // x5
  FollowerInfo_o *v2659; // x6
  PartyListViewItem_o *v2660; // x7
  __int64 v2661; // x1
  __int64 v2662; // x2
  __int64 v2663; // x3
  EventScriptMaster_o *v2664; // x20
  int64_t v2665; // x2
  int32_t v2666; // w3
  System_String_o *v2667; // x4
  BattleSetupInfo_o *v2668; // x5
  FollowerInfo_o *v2669; // x6
  PartyListViewItem_o *v2670; // x7
  __int64 v2671; // x1
  __int64 v2672; // x2
  __int64 v2673; // x3
  EventScriptReleaseMaster_o *v2674; // x20
  int64_t v2675; // x2
  int32_t v2676; // w3
  System_String_o *v2677; // x4
  BattleSetupInfo_o *v2678; // x5
  FollowerInfo_o *v2679; // x6
  PartyListViewItem_o *v2680; // x7
  __int64 v2681; // x1
  __int64 v2682; // x2
  __int64 v2683; // x3
  UserPresentHistoryMaster_o *v2684; // x20
  int64_t v2685; // x2
  int32_t v2686; // w3
  System_String_o *v2687; // x4
  BattleSetupInfo_o *v2688; // x5
  FollowerInfo_o *v2689; // x6
  PartyListViewItem_o *v2690; // x7
  __int64 v2691; // x1
  __int64 v2692; // x2
  __int64 v2693; // x3
  MstMissionMaster_o *v2694; // x20
  int64_t v2695; // x2
  int32_t v2696; // w3
  System_String_o *v2697; // x4
  BattleSetupInfo_o *v2698; // x5
  FollowerInfo_o *v2699; // x6
  PartyListViewItem_o *v2700; // x7
  __int64 v2701; // x1
  __int64 v2702; // x2
  __int64 v2703; // x3
  ServantExceedMaster_o *v2704; // x20
  int64_t v2705; // x2
  int32_t v2706; // w3
  System_String_o *v2707; // x4
  BattleSetupInfo_o *v2708; // x5
  FollowerInfo_o *v2709; // x6
  PartyListViewItem_o *v2710; // x7
  __int64 v2711; // x1
  __int64 v2712; // x2
  __int64 v2713; // x3
  PartialMaintenanceMaster_o *v2714; // x20
  int64_t v2715; // x2
  int32_t v2716; // w3
  System_String_o *v2717; // x4
  BattleSetupInfo_o *v2718; // x5
  FollowerInfo_o *v2719; // x6
  PartyListViewItem_o *v2720; // x7
  __int64 v2721; // x1
  __int64 v2722; // x2
  __int64 v2723; // x3
  GuideMaster_o *v2724; // x20
  int64_t v2725; // x2
  int32_t v2726; // w3
  System_String_o *v2727; // x4
  BattleSetupInfo_o *v2728; // x5
  FollowerInfo_o *v2729; // x6
  PartyListViewItem_o *v2730; // x7
  __int64 v2731; // x1
  __int64 v2732; // x2
  __int64 v2733; // x3
  MstMissionDisplayInfoMaster_o *v2734; // x20
  int64_t v2735; // x2
  int32_t v2736; // w3
  System_String_o *v2737; // x4
  BattleSetupInfo_o *v2738; // x5
  FollowerInfo_o *v2739; // x6
  PartyListViewItem_o *v2740; // x7
  __int64 v2741; // x1
  __int64 v2742; // x2
  __int64 v2743; // x3
  GachaGroupMaster_o *v2744; // x20
  int64_t v2745; // x2
  int32_t v2746; // w3
  System_String_o *v2747; // x4
  BattleSetupInfo_o *v2748; // x5
  FollowerInfo_o *v2749; // x6
  PartyListViewItem_o *v2750; // x7
  __int64 v2751; // x1
  __int64 v2752; // x2
  __int64 v2753; // x3
  QuestResetMaster_o *v2754; // x20
  int64_t v2755; // x2
  int32_t v2756; // w3
  System_String_o *v2757; // x4
  BattleSetupInfo_o *v2758; // x5
  FollowerInfo_o *v2759; // x6
  PartyListViewItem_o *v2760; // x7
  __int64 v2761; // x1
  __int64 v2762; // x2
  __int64 v2763; // x3
  WarAddMaster_o *v2764; // x20
  int64_t v2765; // x2
  int32_t v2766; // w3
  System_String_o *v2767; // x4
  BattleSetupInfo_o *v2768; // x5
  FollowerInfo_o *v2769; // x6
  PartyListViewItem_o *v2770; // x7
  __int64 v2771; // x1
  __int64 v2772; // x2
  __int64 v2773; // x3
  EventItemDisplayMaster_o *v2774; // x20
  int64_t v2775; // x2
  int32_t v2776; // w3
  System_String_o *v2777; // x4
  BattleSetupInfo_o *v2778; // x5
  FollowerInfo_o *v2779; // x6
  PartyListViewItem_o *v2780; // x7
  __int64 v2781; // x1
  __int64 v2782; // x2
  __int64 v2783; // x3
  EventItemDisplayGroupMaster_o *v2784; // x20
  int64_t v2785; // x2
  int32_t v2786; // w3
  System_String_o *v2787; // x4
  BattleSetupInfo_o *v2788; // x5
  FollowerInfo_o *v2789; // x6
  PartyListViewItem_o *v2790; // x7
  __int64 v2791; // x1
  __int64 v2792; // x2
  __int64 v2793; // x3
  EventItemDisplayReleaseMaster_o *v2794; // x20
  int64_t v2795; // x2
  int32_t v2796; // w3
  System_String_o *v2797; // x4
  BattleSetupInfo_o *v2798; // x5
  FollowerInfo_o *v2799; // x6
  PartyListViewItem_o *v2800; // x7
  __int64 v2801; // x1
  __int64 v2802; // x2
  __int64 v2803; // x3
  EventTutorialMaster_o *v2804; // x20
  int64_t v2805; // x2
  int32_t v2806; // w3
  System_String_o *v2807; // x4
  BattleSetupInfo_o *v2808; // x5
  FollowerInfo_o *v2809; // x6
  PartyListViewItem_o *v2810; // x7
  __int64 v2811; // x1
  __int64 v2812; // x2
  __int64 v2813; // x3
  EventTutorialCondMaster_o *v2814; // x20
  int64_t v2815; // x2
  int32_t v2816; // w3
  System_String_o *v2817; // x4
  BattleSetupInfo_o *v2818; // x5
  FollowerInfo_o *v2819; // x6
  PartyListViewItem_o *v2820; // x7
  __int64 v2821; // x1
  __int64 v2822; // x2
  __int64 v2823; // x3
  VoiceReleaseMaster_o *v2824; // x20
  int64_t v2825; // x2
  int32_t v2826; // w3
  System_String_o *v2827; // x4
  BattleSetupInfo_o *v2828; // x5
  FollowerInfo_o *v2829; // x6
  PartyListViewItem_o *v2830; // x7
  __int64 v2831; // x1
  __int64 v2832; // x2
  __int64 v2833; // x3
  EventSuperBossMaster_o *v2834; // x20
  int64_t v2835; // x2
  int32_t v2836; // w3
  System_String_o *v2837; // x4
  BattleSetupInfo_o *v2838; // x5
  FollowerInfo_o *v2839; // x6
  PartyListViewItem_o *v2840; // x7
  __int64 v2841; // x1
  __int64 v2842; // x2
  __int64 v2843; // x3
  UserSuperBossMaster_o *v2844; // x20
  int64_t v2845; // x2
  int32_t v2846; // w3
  System_String_o *v2847; // x4
  BattleSetupInfo_o *v2848; // x5
  FollowerInfo_o *v2849; // x6
  PartyListViewItem_o *v2850; // x7
  __int64 v2851; // x1
  __int64 v2852; // x2
  __int64 v2853; // x3
  QuestScriptMaster_o *v2854; // x20
  int64_t v2855; // x2
  int32_t v2856; // w3
  System_String_o *v2857; // x4
  BattleSetupInfo_o *v2858; // x5
  FollowerInfo_o *v2859; // x6
  PartyListViewItem_o *v2860; // x7
  __int64 v2861; // x1
  __int64 v2862; // x2
  __int64 v2863; // x3
  QuestScriptReleaseMaster_o *v2864; // x20
  int64_t v2865; // x2
  int32_t v2866; // w3
  System_String_o *v2867; // x4
  BattleSetupInfo_o *v2868; // x5
  FollowerInfo_o *v2869; // x6
  PartyListViewItem_o *v2870; // x7
  __int64 v2871; // x1
  __int64 v2872; // x2
  __int64 v2873; // x3
  MaterialFolderMaster_o *v2874; // x20
  int64_t v2875; // x2
  int32_t v2876; // w3
  System_String_o *v2877; // x4
  BattleSetupInfo_o *v2878; // x5
  FollowerInfo_o *v2879; // x6
  PartyListViewItem_o *v2880; // x7
  __int64 v2881; // x1
  __int64 v2882; // x2
  __int64 v2883; // x3
  RestrictionMaster_o *v2884; // x20
  int64_t v2885; // x2
  int32_t v2886; // w3
  System_String_o *v2887; // x4
  BattleSetupInfo_o *v2888; // x5
  FollowerInfo_o *v2889; // x6
  PartyListViewItem_o *v2890; // x7
  __int64 v2891; // x1
  __int64 v2892; // x2
  __int64 v2893; // x3
  QuestRestrictionMaster_o *v2894; // x20
  int64_t v2895; // x2
  int32_t v2896; // w3
  System_String_o *v2897; // x4
  BattleSetupInfo_o *v2898; // x5
  FollowerInfo_o *v2899; // x6
  PartyListViewItem_o *v2900; // x7
  __int64 v2901; // x1
  __int64 v2902; // x2
  __int64 v2903; // x3
  ServantVoiceRelationMaster_o *v2904; // x20
  int64_t v2905; // x2
  int32_t v2906; // w3
  System_String_o *v2907; // x4
  BattleSetupInfo_o *v2908; // x5
  FollowerInfo_o *v2909; // x6
  PartyListViewItem_o *v2910; // x7
  __int64 v2911; // x1
  __int64 v2912; // x2
  __int64 v2913; // x3
  ShopDetailMaster_o *v2914; // x20
  int64_t v2915; // x2
  int32_t v2916; // w3
  System_String_o *v2917; // x4
  BattleSetupInfo_o *v2918; // x5
  FollowerInfo_o *v2919; // x6
  PartyListViewItem_o *v2920; // x7
  __int64 v2921; // x1
  __int64 v2922; // x2
  __int64 v2923; // x3
  ServantScriptAddMaster_o *v2924; // x20
  int64_t v2925; // x2
  int32_t v2926; // w3
  System_String_o *v2927; // x4
  BattleSetupInfo_o *v2928; // x5
  FollowerInfo_o *v2929; // x6
  PartyListViewItem_o *v2930; // x7
  __int64 v2931; // x1
  __int64 v2932; // x2
  __int64 v2933; // x3
  CombineMaster_o *v2934; // x20
  int64_t v2935; // x2
  int32_t v2936; // w3
  System_String_o *v2937; // x4
  BattleSetupInfo_o *v2938; // x5
  FollowerInfo_o *v2939; // x6
  PartyListViewItem_o *v2940; // x7
  __int64 v2941; // x1
  __int64 v2942; // x2
  __int64 v2943; // x3
  AiFieldMaster_o *v2944; // x20
  int64_t v2945; // x2
  int32_t v2946; // w3
  System_String_o *v2947; // x4
  BattleSetupInfo_o *v2948; // x5
  FollowerInfo_o *v2949; // x6
  PartyListViewItem_o *v2950; // x7
  __int64 v2951; // x1
  __int64 v2952; // x2
  __int64 v2953; // x3
  ServantCommentAddMaster_o *v2954; // x20
  int64_t v2955; // x2
  int32_t v2956; // w3
  System_String_o *v2957; // x4
  BattleSetupInfo_o *v2958; // x5
  FollowerInfo_o *v2959; // x6
  PartyListViewItem_o *v2960; // x7
  __int64 v2961; // x1
  __int64 v2962; // x2
  __int64 v2963; // x3
  EventFilterMaster_o *v2964; // x20
  int64_t v2965; // x2
  int32_t v2966; // w3
  System_String_o *v2967; // x4
  BattleSetupInfo_o *v2968; // x5
  FollowerInfo_o *v2969; // x6
  PartyListViewItem_o *v2970; // x7
  __int64 v2971; // x1
  __int64 v2972; // x2
  __int64 v2973; // x3
  UserSupportDeckMaster_o *v2974; // x20
  int64_t v2975; // x2
  int32_t v2976; // w3
  System_String_o *v2977; // x4
  BattleSetupInfo_o *v2978; // x5
  FollowerInfo_o *v2979; // x6
  PartyListViewItem_o *v2980; // x7
  __int64 v2981; // x1
  __int64 v2982; // x2
  __int64 v2983; // x3
  EventRewardSceneMaster_o *v2984; // x20
  int64_t v2985; // x2
  int32_t v2986; // w3
  System_String_o *v2987; // x4
  BattleSetupInfo_o *v2988; // x5
  FollowerInfo_o *v2989; // x6
  PartyListViewItem_o *v2990; // x7
  __int64 v2991; // x1
  __int64 v2992; // x2
  __int64 v2993; // x3
  EventVoicePlayMaster_o *v2994; // x20
  int64_t v2995; // x2
  int32_t v2996; // w3
  System_String_o *v2997; // x4
  BattleSetupInfo_o *v2998; // x5
  FollowerInfo_o *v2999; // x6
  PartyListViewItem_o *v3000; // x7
  __int64 v3001; // x1
  __int64 v3002; // x2
  __int64 v3003; // x3
  GachaSubMaster_o *v3004; // x20
  int64_t v3005; // x2
  int32_t v3006; // w3
  System_String_o *v3007; // x4
  BattleSetupInfo_o *v3008; // x5
  FollowerInfo_o *v3009; // x6
  PartyListViewItem_o *v3010; // x7
  __int64 v3011; // x1
  __int64 v3012; // x2
  __int64 v3013; // x3
  GachaDetailMaster_o *v3014; // x20
  int64_t v3015; // x2
  int32_t v3016; // w3
  System_String_o *v3017; // x4
  BattleSetupInfo_o *v3018; // x5
  FollowerInfo_o *v3019; // x6
  PartyListViewItem_o *v3020; // x7
  __int64 v3021; // x1
  __int64 v3022; // x2
  __int64 v3023; // x3
  GachaBonusSelectMaster_o *v3024; // x20
  int64_t v3025; // x2
  int32_t v3026; // w3
  System_String_o *v3027; // x4
  BattleSetupInfo_o *v3028; // x5
  FollowerInfo_o *v3029; // x6
  PartyListViewItem_o *v3030; // x7
  __int64 v3031; // x1
  __int64 v3032; // x2
  __int64 v3033; // x3
  GachaBonusSelectLineupMaster_o *v3034; // x20
  int64_t v3035; // x2
  int32_t v3036; // w3
  System_String_o *v3037; // x4
  BattleSetupInfo_o *v3038; // x5
  FollowerInfo_o *v3039; // x6
  PartyListViewItem_o *v3040; // x7
  __int64 v3041; // x1
  __int64 v3042; // x2
  __int64 v3043; // x3
  ServantChangeMaster_o *v3044; // x20
  int64_t v3045; // x2
  int32_t v3046; // w3
  System_String_o *v3047; // x4
  BattleSetupInfo_o *v3048; // x5
  FollowerInfo_o *v3049; // x6
  PartyListViewItem_o *v3050; // x7
  __int64 v3051; // x1
  __int64 v3052; // x2
  __int64 v3053; // x3
  VoiceCondMaster_o *v3054; // x20
  int64_t v3055; // x2
  int32_t v3056; // w3
  System_String_o *v3057; // x4
  BattleSetupInfo_o *v3058; // x5
  FollowerInfo_o *v3059; // x6
  PartyListViewItem_o *v3060; // x7
  __int64 v3061; // x1
  __int64 v3062; // x2
  __int64 v3063; // x3
  BgmReleaseMaster_o *v3064; // x20
  int64_t v3065; // x2
  int32_t v3066; // w3
  System_String_o *v3067; // x4
  BattleSetupInfo_o *v3068; // x5
  FollowerInfo_o *v3069; // x6
  PartyListViewItem_o *v3070; // x7
  __int64 v3071; // x1
  __int64 v3072; // x2
  __int64 v3073; // x3
  MyRoomAddMaster_o *v3074; // x20
  int64_t v3075; // x2
  int32_t v3076; // w3
  System_String_o *v3077; // x4
  BattleSetupInfo_o *v3078; // x5
  FollowerInfo_o *v3079; // x6
  PartyListViewItem_o *v3080; // x7
  __int64 v3081; // x1
  __int64 v3082; // x2
  __int64 v3083; // x3
  ShopActionMaster_o *v3084; // x20
  int64_t v3085; // x2
  int32_t v3086; // w3
  System_String_o *v3087; // x4
  BattleSetupInfo_o *v3088; // x5
  FollowerInfo_o *v3089; // x6
  PartyListViewItem_o *v3090; // x7
  __int64 v3091; // x1
  __int64 v3092; // x2
  __int64 v3093; // x3
  EventRewardSceneReleaseMaster_o *v3094; // x20
  int64_t v3095; // x2
  int32_t v3096; // w3
  System_String_o *v3097; // x4
  BattleSetupInfo_o *v3098; // x5
  FollowerInfo_o *v3099; // x6
  PartyListViewItem_o *v3100; // x7
  __int64 v3101; // x1
  __int64 v3102; // x2
  __int64 v3103; // x3
  QuestBehaviorMaster_o *v3104; // x20
  int64_t v3105; // x2
  int32_t v3106; // w3
  System_String_o *v3107; // x4
  BattleSetupInfo_o *v3108; // x5
  FollowerInfo_o *v3109; // x6
  PartyListViewItem_o *v3110; // x7
  __int64 v3111; // x1
  __int64 v3112; // x2
  __int64 v3113; // x3
  MapMaster_o *v3114; // x20
  int64_t v3115; // x2
  int32_t v3116; // w3
  System_String_o *v3117; // x4
  BattleSetupInfo_o *v3118; // x5
  FollowerInfo_o *v3119; // x6
  PartyListViewItem_o *v3120; // x7
  __int64 v3121; // x1
  __int64 v3122; // x2
  __int64 v3123; // x3
  MapCondMaster_o *v3124; // x20
  int64_t v3125; // x2
  int32_t v3126; // w3
  System_String_o *v3127; // x4
  BattleSetupInfo_o *v3128; // x5
  FollowerInfo_o *v3129; // x6
  PartyListViewItem_o *v3130; // x7
  __int64 v3131; // x1
  __int64 v3132; // x2
  __int64 v3133; // x3
  MapButtonMaster_o *v3134; // x20
  int64_t v3135; // x2
  int32_t v3136; // w3
  System_String_o *v3137; // x4
  BattleSetupInfo_o *v3138; // x5
  FollowerInfo_o *v3139; // x6
  PartyListViewItem_o *v3140; // x7
  __int64 v3141; // x1
  __int64 v3142; // x2
  __int64 v3143; // x3
  BannerAddMaster_o *v3144; // x20
  int64_t v3145; // x2
  int32_t v3146; // w3
  System_String_o *v3147; // x4
  BattleSetupInfo_o *v3148; // x5
  FollowerInfo_o *v3149; // x6
  PartyListViewItem_o *v3150; // x7
  __int64 v3151; // x1
  __int64 v3152; // x2
  __int64 v3153; // x3
  EventAddMaster_o *v3154; // x20
  int64_t v3155; // x2
  int32_t v3156; // w3
  System_String_o *v3157; // x4
  BattleSetupInfo_o *v3158; // x5
  FollowerInfo_o *v3159; // x6
  PartyListViewItem_o *v3160; // x7
  __int64 v3161; // x1
  __int64 v3162; // x2
  __int64 v3163; // x3
  TotalLoginMaster_o *v3164; // x20
  int64_t v3165; // x2
  int32_t v3166; // w3
  System_String_o *v3167; // x4
  BattleSetupInfo_o *v3168; // x5
  FollowerInfo_o *v3169; // x6
  PartyListViewItem_o *v3170; // x7
  __int64 v3171; // x1
  __int64 v3172; // x2
  __int64 v3173; // x3
  ServantFilterMaster_o *v3174; // x20
  int64_t v3175; // x2
  int32_t v3176; // w3
  System_String_o *v3177; // x4
  BattleSetupInfo_o *v3178; // x5
  FollowerInfo_o *v3179; // x6
  PartyListViewItem_o *v3180; // x7
  __int64 v3181; // x1
  __int64 v3182; // x2
  __int64 v3183; // x3
  CombineCostumeMaster_o *v3184; // x20
  int64_t v3185; // x2
  int32_t v3186; // w3
  System_String_o *v3187; // x4
  BattleSetupInfo_o *v3188; // x5
  FollowerInfo_o *v3189; // x6
  PartyListViewItem_o *v3190; // x7
  __int64 v3191; // x1
  __int64 v3192; // x2
  __int64 v3193; // x3
  ServantCostumeMaster_o *v3194; // x20
  int64_t v3195; // x2
  int32_t v3196; // w3
  System_String_o *v3197; // x4
  BattleSetupInfo_o *v3198; // x5
  FollowerInfo_o *v3199; // x6
  PartyListViewItem_o *v3200; // x7
  __int64 v3201; // x1
  __int64 v3202; // x2
  __int64 v3203; // x3
  ServantCostumeReleaseMaster_o *v3204; // x20
  int64_t v3205; // x2
  int32_t v3206; // w3
  System_String_o *v3207; // x4
  BattleSetupInfo_o *v3208; // x5
  FollowerInfo_o *v3209; // x6
  PartyListViewItem_o *v3210; // x7
  __int64 v3211; // x1
  __int64 v3212; // x2
  __int64 v3213; // x3
  UserFriendRequestHistoryMaster_o *v3214; // x20
  int64_t v3215; // x2
  int32_t v3216; // w3
  System_String_o *v3217; // x4
  BattleSetupInfo_o *v3218; // x5
  FollowerInfo_o *v3219; // x6
  PartyListViewItem_o *v3220; // x7
  __int64 v3221; // x1
  __int64 v3222; // x2
  __int64 v3223; // x3
  UserBlacklistMaster_o *v3224; // x20
  int64_t v3225; // x2
  int32_t v3226; // w3
  System_String_o *v3227; // x4
  BattleSetupInfo_o *v3228; // x5
  FollowerInfo_o *v3229; // x6
  PartyListViewItem_o *v3230; // x7
  __int64 v3231; // x1
  __int64 v3232; // x2
  __int64 v3233; // x3
  ItemSelectMaster_o *v3234; // x20
  int64_t v3235; // x2
  int32_t v3236; // w3
  System_String_o *v3237; // x4
  BattleSetupInfo_o *v3238; // x5
  FollowerInfo_o *v3239; // x6
  PartyListViewItem_o *v3240; // x7
  __int64 v3241; // x1
  __int64 v3242; // x2
  __int64 v3243; // x3
  TotalEventRaceMaster_o *v3244; // x20
  int64_t v3245; // x2
  int32_t v3246; // w3
  System_String_o *v3247; // x4
  BattleSetupInfo_o *v3248; // x5
  FollowerInfo_o *v3249; // x6
  PartyListViewItem_o *v3250; // x7
  __int64 v3251; // x1
  __int64 v3252; // x2
  __int64 v3253; // x3
  EventPointGroupAddMaster_o *v3254; // x20
  int64_t v3255; // x2
  int32_t v3256; // w3
  System_String_o *v3257; // x4
  BattleSetupInfo_o *v3258; // x5
  FollowerInfo_o *v3259; // x6
  PartyListViewItem_o *v3260; // x7
  __int64 v3261; // x1
  __int64 v3262; // x2
  __int64 v3263; // x3
  VoicePlayGroupMaster_o *v3264; // x20
  int64_t v3265; // x2
  int32_t v3266; // w3
  System_String_o *v3267; // x4
  BattleSetupInfo_o *v3268; // x5
  FollowerInfo_o *v3269; // x6
  PartyListViewItem_o *v3270; // x7
  __int64 v3271; // x1
  __int64 v3272; // x2
  __int64 v3273; // x3
  VoicePlayCondMaster_o *v3274; // x20
  int64_t v3275; // x2
  int32_t v3276; // w3
  System_String_o *v3277; // x4
  BattleSetupInfo_o *v3278; // x5
  FollowerInfo_o *v3279; // x6
  PartyListViewItem_o *v3280; // x7
  __int64 v3281; // x1
  __int64 v3282; // x2
  __int64 v3283; // x3
  GachaStoryAdjustMaster_o *v3284; // x20
  int64_t v3285; // x2
  int32_t v3286; // w3
  System_String_o *v3287; // x4
  BattleSetupInfo_o *v3288; // x5
  FollowerInfo_o *v3289; // x6
  PartyListViewItem_o *v3290; // x7
  __int64 v3291; // x1
  __int64 v3292; // x2
  __int64 v3293; // x3
  ServantFlagMaster_o *v3294; // x20
  int64_t v3295; // x2
  int32_t v3296; // w3
  System_String_o *v3297; // x4
  BattleSetupInfo_o *v3298; // x5
  FollowerInfo_o *v3299; // x6
  PartyListViewItem_o *v3300; // x7
  __int64 v3301; // x1
  __int64 v3302; // x2
  __int64 v3303; // x3
  ServantFlagReleaseMaster_o *v3304; // x20
  int64_t v3305; // x2
  int32_t v3306; // w3
  System_String_o *v3307; // x4
  BattleSetupInfo_o *v3308; // x5
  FollowerInfo_o *v3309; // x6
  PartyListViewItem_o *v3310; // x7
  __int64 v3311; // x1
  __int64 v3312; // x2
  __int64 v3313; // x3
  EventLocationCampaignMaster_o *v3314; // x20
  int64_t v3315; // x2
  int32_t v3316; // w3
  System_String_o *v3317; // x4
  BattleSetupInfo_o *v3318; // x5
  FollowerInfo_o *v3319; // x6
  PartyListViewItem_o *v3320; // x7
  __int64 v3321; // x1
  __int64 v3322; // x2
  __int64 v3323; // x3
  CampaignInfoMaster_o *v3324; // x20
  int64_t v3325; // x2
  int32_t v3326; // w3
  System_String_o *v3327; // x4
  BattleSetupInfo_o *v3328; // x5
  FollowerInfo_o *v3329; // x6
  PartyListViewItem_o *v3330; // x7
  __int64 v3331; // x1
  __int64 v3332; // x2
  __int64 v3333; // x3
  DialogMessageMaster_o *v3334; // x20
  int64_t v3335; // x2
  int32_t v3336; // w3
  System_String_o *v3337; // x4
  BattleSetupInfo_o *v3338; // x5
  FollowerInfo_o *v3339; // x6
  PartyListViewItem_o *v3340; // x7
  __int64 v3341; // x1
  __int64 v3342; // x2
  __int64 v3343; // x3
  ServantIndividualityMaster_o *v3344; // x20
  int64_t v3345; // x2
  int32_t v3346; // w3
  System_String_o *v3347; // x4
  BattleSetupInfo_o *v3348; // x5
  FollowerInfo_o *v3349; // x6
  PartyListViewItem_o *v3350; // x7
  __int64 v3351; // x1
  __int64 v3352; // x2
  __int64 v3353; // x3
  BoardMessageMaster_o *v3354; // x20
  int64_t v3355; // x2
  int32_t v3356; // w3
  System_String_o *v3357; // x4
  BattleSetupInfo_o *v3358; // x5
  FollowerInfo_o *v3359; // x6
  PartyListViewItem_o *v3360; // x7
  __int64 v3361; // x1
  __int64 v3362; // x2
  __int64 v3363; // x3
  BoardMessageReleaseMaster_o *v3364; // x20
  int64_t v3365; // x2
  int32_t v3366; // w3
  System_String_o *v3367; // x4
  BattleSetupInfo_o *v3368; // x5
  FollowerInfo_o *v3369; // x6
  PartyListViewItem_o *v3370; // x7
  __int64 v3371; // x1
  __int64 v3372; // x2
  __int64 v3373; // x3
  EventServantFatigueMaster_o *v3374; // x20
  int64_t v3375; // x2
  int32_t v3376; // w3
  System_String_o *v3377; // x4
  BattleSetupInfo_o *v3378; // x5
  FollowerInfo_o *v3379; // x6
  PartyListViewItem_o *v3380; // x7
  __int64 v3381; // x1
  __int64 v3382; // x2
  __int64 v3383; // x3
  UserEventDeckMaster_o *v3384; // x20
  int64_t v3385; // x2
  int32_t v3386; // w3
  System_String_o *v3387; // x4
  BattleSetupInfo_o *v3388; // x5
  FollowerInfo_o *v3389; // x6
  PartyListViewItem_o *v3390; // x7
  __int64 v3391; // x1
  __int64 v3392; // x2
  __int64 v3393; // x3
  EventTowerMaster_o *v3394; // x20
  int64_t v3395; // x2
  int32_t v3396; // w3
  System_String_o *v3397; // x4
  BattleSetupInfo_o *v3398; // x5
  FollowerInfo_o *v3399; // x6
  PartyListViewItem_o *v3400; // x7
  __int64 v3401; // x1
  __int64 v3402; // x2
  __int64 v3403; // x3
  EventTowerRewardMaster_o *v3404; // x20
  int64_t v3405; // x2
  int32_t v3406; // w3
  System_String_o *v3407; // x4
  BattleSetupInfo_o *v3408; // x5
  FollowerInfo_o *v3409; // x6
  PartyListViewItem_o *v3410; // x7
  __int64 v3411; // x1
  __int64 v3412; // x2
  __int64 v3413; // x3
  EventBulletinBoardMaster_o *v3414; // x20
  int64_t v3415; // x2
  int32_t v3416; // w3
  System_String_o *v3417; // x4
  BattleSetupInfo_o *v3418; // x5
  FollowerInfo_o *v3419; // x6
  PartyListViewItem_o *v3420; // x7
  __int64 v3421; // x1
  __int64 v3422; // x2
  __int64 v3423; // x3
  EventBulletinBoardReleaseMaster_o *v3424; // x20
  int64_t v3425; // x2
  int32_t v3426; // w3
  System_String_o *v3427; // x4
  BattleSetupInfo_o *v3428; // x5
  FollowerInfo_o *v3429; // x6
  PartyListViewItem_o *v3430; // x7
  __int64 v3431; // x1
  __int64 v3432; // x2
  __int64 v3433; // x3
  EventFactoryMaster_o *v3434; // x20
  int64_t v3435; // x2
  int32_t v3436; // w3
  System_String_o *v3437; // x4
  BattleSetupInfo_o *v3438; // x5
  FollowerInfo_o *v3439; // x6
  PartyListViewItem_o *v3440; // x7
  __int64 v3441; // x1
  __int64 v3442; // x2
  __int64 v3443; // x3
  ShopGroupMaster_o *v3444; // x20
  int64_t v3445; // x2
  int32_t v3446; // w3
  System_String_o *v3447; // x4
  BattleSetupInfo_o *v3448; // x5
  FollowerInfo_o *v3449; // x6
  PartyListViewItem_o *v3450; // x7
  __int64 v3451; // x1
  __int64 v3452; // x2
  __int64 v3453; // x3
  AuraEffectMaster_o *v3454; // x20
  int64_t v3455; // x2
  int32_t v3456; // w3
  System_String_o *v3457; // x4
  BattleSetupInfo_o *v3458; // x5
  FollowerInfo_o *v3459; // x6
  PartyListViewItem_o *v3460; // x7
  __int64 v3461; // x1
  __int64 v3462; // x2
  __int64 v3463; // x3
  AuraEffectPosOverwriteMaster_o *v3464; // x20
  int64_t v3465; // x2
  int32_t v3466; // w3
  System_String_o *v3467; // x4
  BattleSetupInfo_o *v3468; // x5
  FollowerInfo_o *v3469; // x6
  PartyListViewItem_o *v3470; // x7
  __int64 v3471; // x1
  __int64 v3472; // x2
  __int64 v3473; // x3
  UserEventMissionFixMaster_o *v3474; // x20
  int64_t v3475; // x2
  int32_t v3476; // w3
  System_String_o *v3477; // x4
  BattleSetupInfo_o *v3478; // x5
  FollowerInfo_o *v3479; // x6
  PartyListViewItem_o *v3480; // x7
  __int64 v3481; // x1
  __int64 v3482; // x2
  __int64 v3483; // x3
  NotEndEventMissionFixMaster_o *v3484; // x20
  int64_t v3485; // x2
  int32_t v3486; // w3
  System_String_o *v3487; // x4
  BattleSetupInfo_o *v3488; // x5
  FollowerInfo_o *v3489; // x6
  PartyListViewItem_o *v3490; // x7
  __int64 v3491; // x1
  __int64 v3492; // x2
  __int64 v3493; // x3
  EnemyMstMaster_o *v3494; // x20
  int64_t v3495; // x2
  int32_t v3496; // w3
  System_String_o *v3497; // x4
  BattleSetupInfo_o *v3498; // x5
  FollowerInfo_o *v3499; // x6
  PartyListViewItem_o *v3500; // x7
  __int64 v3501; // x1
  __int64 v3502; // x2
  __int64 v3503; // x3
  EnemyMstBattleMaster_o *v3504; // x20
  int64_t v3505; // x2
  int32_t v3506; // w3
  System_String_o *v3507; // x4
  BattleSetupInfo_o *v3508; // x5
  FollowerInfo_o *v3509; // x6
  PartyListViewItem_o *v3510; // x7
  __int64 v3511; // x1
  __int64 v3512; // x2
  __int64 v3513; // x3
  ServantSkillReleaseMaster_o *v3514; // x20
  int64_t v3515; // x2
  int32_t v3516; // w3
  System_String_o *v3517; // x4
  BattleSetupInfo_o *v3518; // x5
  FollowerInfo_o *v3519; // x6
  PartyListViewItem_o *v3520; // x7
  __int64 v3521; // x1
  __int64 v3522; // x2
  __int64 v3523; // x3
  ServantPassiveSkillReleaseMaster_o *v3524; // x20
  int64_t v3525; // x2
  int32_t v3526; // w3
  System_String_o *v3527; // x4
  BattleSetupInfo_o *v3528; // x5
  FollowerInfo_o *v3529; // x6
  PartyListViewItem_o *v3530; // x7
  __int64 v3531; // x1
  __int64 v3532; // x2
  __int64 v3533; // x3
  ServantTreasureDeviceReleaseMaster_o *v3534; // x20
  int64_t v3535; // x2
  int32_t v3536; // w3
  System_String_o *v3537; // x4
  BattleSetupInfo_o *v3538; // x5
  FollowerInfo_o *v3539; // x6
  PartyListViewItem_o *v3540; // x7
  __int64 v3541; // x1
  __int64 v3542; // x2
  __int64 v3543; // x3
  MapGimmickReleaseMaster_o *v3544; // x20
  int64_t v3545; // x2
  int32_t v3546; // w3
  System_String_o *v3547; // x4
  BattleSetupInfo_o *v3548; // x5
  FollowerInfo_o *v3549; // x6
  PartyListViewItem_o *v3550; // x7
  __int64 v3551; // x1
  __int64 v3552; // x2
  __int64 v3553; // x3
  CommandCodeMaster_o *v3554; // x20
  int64_t v3555; // x2
  int32_t v3556; // w3
  System_String_o *v3557; // x4
  BattleSetupInfo_o *v3558; // x5
  FollowerInfo_o *v3559; // x6
  PartyListViewItem_o *v3560; // x7
  __int64 v3561; // x1
  __int64 v3562; // x2
  __int64 v3563; // x3
  ServantCommandCodeUnlockMaster_o *v3564; // x20
  int64_t v3565; // x2
  int32_t v3566; // w3
  System_String_o *v3567; // x4
  BattleSetupInfo_o *v3568; // x5
  FollowerInfo_o *v3569; // x6
  PartyListViewItem_o *v3570; // x7
  __int64 v3571; // x1
  __int64 v3572; // x2
  __int64 v3573; // x3
  UserCommandCodeMaster_o *v3574; // x20
  int64_t v3575; // x2
  int32_t v3576; // w3
  System_String_o *v3577; // x4
  BattleSetupInfo_o *v3578; // x5
  FollowerInfo_o *v3579; // x6
  PartyListViewItem_o *v3580; // x7
  __int64 v3581; // x1
  __int64 v3582; // x2
  __int64 v3583; // x3
  UserCommandCodeCollectionMaster_o *v3584; // x20
  int64_t v3585; // x2
  int32_t v3586; // w3
  System_String_o *v3587; // x4
  BattleSetupInfo_o *v3588; // x5
  FollowerInfo_o *v3589; // x6
  PartyListViewItem_o *v3590; // x7
  __int64 v3591; // x1
  __int64 v3592; // x2
  __int64 v3593; // x3
  UserServantCommandCodeMaster_o *v3594; // x20
  int64_t v3595; // x2
  int32_t v3596; // w3
  System_String_o *v3597; // x4
  BattleSetupInfo_o *v3598; // x5
  FollowerInfo_o *v3599; // x6
  PartyListViewItem_o *v3600; // x7
  __int64 v3601; // x1
  __int64 v3602; // x2
  __int64 v3603; // x3
  UserServantCommandCardMaster_o *v3604; // x20
  int64_t v3605; // x2
  int32_t v3606; // w3
  System_String_o *v3607; // x4
  BattleSetupInfo_o *v3608; // x5
  FollowerInfo_o *v3609; // x6
  PartyListViewItem_o *v3610; // x7
  __int64 v3611; // x1
  __int64 v3612; // x2
  __int64 v3613; // x3
  CommandCardRankParamMaster_o *v3614; // x20
  int64_t v3615; // x2
  int32_t v3616; // w3
  System_String_o *v3617; // x4
  BattleSetupInfo_o *v3618; // x5
  FollowerInfo_o *v3619; // x6
  PartyListViewItem_o *v3620; // x7
  __int64 v3621; // x1
  __int64 v3622; // x2
  __int64 v3623; // x3
  CommandCodeSkillMaster_o *v3624; // x20
  int64_t v3625; // x2
  int32_t v3626; // w3
  System_String_o *v3627; // x4
  BattleSetupInfo_o *v3628; // x5
  FollowerInfo_o *v3629; // x6
  PartyListViewItem_o *v3630; // x7
  __int64 v3631; // x1
  __int64 v3632; // x2
  __int64 v3633; // x3
  CommandCodeSkillReleaseMaster_o *v3634; // x20
  int64_t v3635; // x2
  int32_t v3636; // w3
  System_String_o *v3637; // x4
  BattleSetupInfo_o *v3638; // x5
  FollowerInfo_o *v3639; // x6
  PartyListViewItem_o *v3640; // x7
  __int64 v3641; // x1
  __int64 v3642; // x2
  __int64 v3643; // x3
  CommandCodeCommentMaster_o *v3644; // x20
  int64_t v3645; // x2
  int32_t v3646; // w3
  System_String_o *v3647; // x4
  BattleSetupInfo_o *v3648; // x5
  FollowerInfo_o *v3649; // x6
  PartyListViewItem_o *v3650; // x7
  __int64 v3651; // x1
  __int64 v3652; // x2
  __int64 v3653; // x3
  EventStatusMaster_o *v3654; // x20
  int64_t v3655; // x2
  int32_t v3656; // w3
  System_String_o *v3657; // x4
  BattleSetupInfo_o *v3658; // x5
  FollowerInfo_o *v3659; // x6
  PartyListViewItem_o *v3660; // x7
  __int64 v3661; // x1
  __int64 v3662; // x2
  __int64 v3663; // x3
  EventStatusQuestMaster_o *v3664; // x20
  int64_t v3665; // x2
  int32_t v3666; // w3
  System_String_o *v3667; // x4
  BattleSetupInfo_o *v3668; // x5
  FollowerInfo_o *v3669; // x6
  PartyListViewItem_o *v3670; // x7
  __int64 v3671; // x1
  __int64 v3672; // x2
  __int64 v3673; // x3
  CommonRestrictionMaster_o *v3674; // x20
  int64_t v3675; // x2
  int32_t v3676; // w3
  System_String_o *v3677; // x4
  BattleSetupInfo_o *v3678; // x5
  FollowerInfo_o *v3679; // x6
  PartyListViewItem_o *v3680; // x7
  __int64 v3681; // x1
  __int64 v3682; // x2
  __int64 v3683; // x3
  EventPointBuffMaster_o *v3684; // x20
  int64_t v3685; // x2
  int32_t v3686; // w3
  System_String_o *v3687; // x4
  BattleSetupInfo_o *v3688; // x5
  FollowerInfo_o *v3689; // x6
  PartyListViewItem_o *v3690; // x7
  __int64 v3691; // x1
  __int64 v3692; // x2
  __int64 v3693; // x3
  UserFollowMaster_o *v3694; // x20
  int64_t v3695; // x2
  int32_t v3696; // w3
  System_String_o *v3697; // x4
  BattleSetupInfo_o *v3698; // x5
  FollowerInfo_o *v3699; // x6
  PartyListViewItem_o *v3700; // x7
  __int64 v3701; // x1
  __int64 v3702; // x2
  __int64 v3703; // x3
  EventRewardGuideReleaseMaster_o *v3704; // x20
  int64_t v3705; // x2
  int32_t v3706; // w3
  System_String_o *v3707; // x4
  BattleSetupInfo_o *v3708; // x5
  FollowerInfo_o *v3709; // x6
  PartyListViewItem_o *v3710; // x7
  __int64 v3711; // x1
  __int64 v3712; // x2
  __int64 v3713; // x3
  NpcServantEquipMaster_o *v3714; // x20
  int64_t v3715; // x2
  int32_t v3716; // w3
  System_String_o *v3717; // x4
  BattleSetupInfo_o *v3718; // x5
  FollowerInfo_o *v3719; // x6
  PartyListViewItem_o *v3720; // x7
  __int64 v3721; // x1
  __int64 v3722; // x2
  __int64 v3723; // x3
  EventCampaignReleaseMaster_o *v3724; // x20
  int64_t v3725; // x2
  int32_t v3726; // w3
  System_String_o *v3727; // x4
  BattleSetupInfo_o *v3728; // x5
  FollowerInfo_o *v3729; // x6
  PartyListViewItem_o *v3730; // x7
  __int64 v3731; // x1
  __int64 v3732; // x2
  __int64 v3733; // x3
  ServantMaterialFolderMaster_o *v3734; // x20
  int64_t v3735; // x2
  int32_t v3736; // w3
  System_String_o *v3737; // x4
  BattleSetupInfo_o *v3738; // x5
  FollowerInfo_o *v3739; // x6
  PartyListViewItem_o *v3740; // x7
  __int64 v3741; // x1
  __int64 v3742; // x2
  __int64 v3743; // x3
  EventEquipSkillReleaseMaster_o *v3744; // x20
  int64_t v3745; // x2
  int32_t v3746; // w3
  System_String_o *v3747; // x4
  BattleSetupInfo_o *v3748; // x5
  FollowerInfo_o *v3749; // x6
  PartyListViewItem_o *v3750; // x7
  __int64 v3751; // x1
  __int64 v3752; // x2
  __int64 v3753; // x3
  EventPointActivityMaster_o *v3754; // x20
  int64_t v3755; // x2
  int32_t v3756; // w3
  System_String_o *v3757; // x4
  BattleSetupInfo_o *v3758; // x5
  FollowerInfo_o *v3759; // x6
  PartyListViewItem_o *v3760; // x7
  __int64 v3761; // x1
  __int64 v3762; // x2
  __int64 v3763; // x3
  FunctionCategoryMaster_o *v3764; // x20
  int64_t v3765; // x2
  int32_t v3766; // w3
  System_String_o *v3767; // x4
  BattleSetupInfo_o *v3768; // x5
  FollowerInfo_o *v3769; // x6
  PartyListViewItem_o *v3770; // x7
  __int64 v3771; // x1
  __int64 v3772; // x2
  __int64 v3773; // x3
  QuestPickupMaster_o *v3774; // x20
  int64_t v3775; // x2
  int32_t v3776; // w3
  System_String_o *v3777; // x4
  BattleSetupInfo_o *v3778; // x5
  FollowerInfo_o *v3779; // x6
  PartyListViewItem_o *v3780; // x7
  __int64 v3781; // x1
  __int64 v3782; // x2
  __int64 v3783; // x3
  EventUiMaster_o *v3784; // x20
  int64_t v3785; // x2
  int32_t v3786; // w3
  System_String_o *v3787; // x4
  BattleSetupInfo_o *v3788; // x5
  FollowerInfo_o *v3789; // x6
  PartyListViewItem_o *v3790; // x7
  __int64 v3791; // x1
  __int64 v3792; // x2
  __int64 v3793; // x3
  EventUiReleaseMaster_o *v3794; // x20
  int64_t v3795; // x2
  int32_t v3796; // w3
  System_String_o *v3797; // x4
  BattleSetupInfo_o *v3798; // x5
  FollowerInfo_o *v3799; // x6
  PartyListViewItem_o *v3800; // x7
  __int64 v3801; // x1
  __int64 v3802; // x2
  __int64 v3803; // x3
  EventUiValueMaster_o *v3804; // x20
  int64_t v3805; // x2
  int32_t v3806; // w3
  System_String_o *v3807; // x4
  BattleSetupInfo_o *v3808; // x5
  FollowerInfo_o *v3809; // x6
  PartyListViewItem_o *v3810; // x7
  __int64 v3811; // x1
  __int64 v3812; // x2
  __int64 v3813; // x3
  EventConquestRewardMaster_o *v3814; // x20
  int64_t v3815; // x2
  int32_t v3816; // w3
  System_String_o *v3817; // x4
  BattleSetupInfo_o *v3818; // x5
  FollowerInfo_o *v3819; // x6
  PartyListViewItem_o *v3820; // x7
  __int64 v3821; // x1
  __int64 v3822; // x2
  __int64 v3823; // x3
  NpcFollowerReleaseMaster_o *v3824; // x20
  int64_t v3825; // x2
  int32_t v3826; // w3
  System_String_o *v3827; // x4
  BattleSetupInfo_o *v3828; // x5
  FollowerInfo_o *v3829; // x6
  PartyListViewItem_o *v3830; // x7
  __int64 v3831; // x1
  __int64 v3832; // x2
  __int64 v3833; // x3
  EventBonusFilterMaster_o *v3834; // x20
  int64_t v3835; // x2
  int32_t v3836; // w3
  System_String_o *v3837; // x4
  BattleSetupInfo_o *v3838; // x5
  FollowerInfo_o *v3839; // x6
  PartyListViewItem_o *v3840; // x7
  __int64 v3841; // x1
  __int64 v3842; // x2
  __int64 v3843; // x3
  EventBonusFilterGroupInfoMaster_o *v3844; // x20
  int64_t v3845; // x2
  int32_t v3846; // w3
  System_String_o *v3847; // x4
  BattleSetupInfo_o *v3848; // x5
  FollowerInfo_o *v3849; // x6
  PartyListViewItem_o *v3850; // x7
  __int64 v3851; // x1
  __int64 v3852; // x2
  __int64 v3853; // x3
  EventBonusFilterGroupMemberMaster_o *v3854; // x20
  int64_t v3855; // x2
  int32_t v3856; // w3
  System_String_o *v3857; // x4
  BattleSetupInfo_o *v3858; // x5
  FollowerInfo_o *v3859; // x6
  PartyListViewItem_o *v3860; // x7
  __int64 v3861; // x1
  __int64 v3862; // x2
  __int64 v3863; // x3
  UserGachaExtraCountMaster_o *v3864; // x20
  int64_t v3865; // x2
  int32_t v3866; // w3
  System_String_o *v3867; // x4
  BattleSetupInfo_o *v3868; // x5
  FollowerInfo_o *v3869; // x6
  PartyListViewItem_o *v3870; // x7
  __int64 v3871; // x1
  __int64 v3872; // x2
  __int64 v3873; // x3
  PrivilegeMaster_o *v3874; // x20
  int64_t v3875; // x2
  int32_t v3876; // w3
  System_String_o *v3877; // x4
  BattleSetupInfo_o *v3878; // x5
  FollowerInfo_o *v3879; // x6
  PartyListViewItem_o *v3880; // x7
  __int64 v3881; // x1
  __int64 v3882; // x2
  __int64 v3883; // x3
  UserPrivilegeMaster_o *v3884; // x20
  int64_t v3885; // x2
  int32_t v3886; // w3
  System_String_o *v3887; // x4
  BattleSetupInfo_o *v3888; // x5
  FollowerInfo_o *v3889; // x6
  PartyListViewItem_o *v3890; // x7
  __int64 v3891; // x1
  __int64 v3892; // x2
  __int64 v3893; // x3
  UserQuestRouteMaster_o *v3894; // x20
  int64_t v3895; // x2
  int32_t v3896; // w3
  System_String_o *v3897; // x4
  BattleSetupInfo_o *v3898; // x5
  FollowerInfo_o *v3899; // x6
  PartyListViewItem_o *v3900; // x7
  __int64 v3901; // x1
  __int64 v3902; // x2
  __int64 v3903; // x3
  EventBossStatusUiMaster_o *v3904; // x20
  int64_t v3905; // x2
  int32_t v3906; // w3
  System_String_o *v3907; // x4
  BattleSetupInfo_o *v3908; // x5
  FollowerInfo_o *v3909; // x6
  PartyListViewItem_o *v3910; // x7
  __int64 v3911; // x1
  __int64 v3912; // x2
  __int64 v3913; // x3
  CommonReleaseMaster_o *v3914; // x20
  int64_t v3915; // x2
  int32_t v3916; // w3
  System_String_o *v3917; // x4
  BattleSetupInfo_o *v3918; // x5
  FollowerInfo_o *v3919; // x6
  PartyListViewItem_o *v3920; // x7
  __int64 v3921; // x1
  __int64 v3922; // x2
  __int64 v3923; // x3
  QuestSpotReleaseMaster_o *v3924; // x20
  int64_t v3925; // x2
  int32_t v3926; // w3
  System_String_o *v3927; // x4
  BattleSetupInfo_o *v3928; // x5
  FollowerInfo_o *v3929; // x6
  PartyListViewItem_o *v3930; // x7
  __int64 v3931; // x1
  __int64 v3932; // x2
  __int64 v3933; // x3
  VoiceMaterialCondMaster_o *v3934; // x20
  int64_t v3935; // x2
  int32_t v3936; // w3
  System_String_o *v3937; // x4
  BattleSetupInfo_o *v3938; // x5
  FollowerInfo_o *v3939; // x6
  PartyListViewItem_o *v3940; // x7
  __int64 v3941; // x1
  __int64 v3942; // x2
  __int64 v3943; // x3
  ClassRelationOverwriteMaster_o *v3944; // x20
  int64_t v3945; // x2
  int32_t v3946; // w3
  System_String_o *v3947; // x4
  BattleSetupInfo_o *v3948; // x5
  FollowerInfo_o *v3949; // x6
  PartyListViewItem_o *v3950; // x7
  __int64 v3951; // x1
  __int64 v3952; // x2
  __int64 v3953; // x3
  EventGroupMaster_o *v3954; // x20
  int64_t v3955; // x2
  int32_t v3956; // w3
  System_String_o *v3957; // x4
  BattleSetupInfo_o *v3958; // x5
  FollowerInfo_o *v3959; // x6
  PartyListViewItem_o *v3960; // x7
  __int64 v3961; // x1
  __int64 v3962; // x2
  __int64 v3963; // x3
  TotalBoxGachaMaster_o *v3964; // x20
  int64_t v3965; // x2
  int32_t v3966; // w3
  System_String_o *v3967; // x4
  BattleSetupInfo_o *v3968; // x5
  FollowerInfo_o *v3969; // x6
  PartyListViewItem_o *v3970; // x7
  __int64 v3971; // x1
  __int64 v3972; // x2
  __int64 v3973; // x3
  ServantTreasureDeviceDamageMaster_o *v3974; // x20
  int64_t v3975; // x2
  int32_t v3976; // w3
  System_String_o *v3977; // x4
  BattleSetupInfo_o *v3978; // x5
  FollowerInfo_o *v3979; // x6
  PartyListViewItem_o *v3980; // x7
  __int64 v3981; // x1
  __int64 v3982; // x2
  __int64 v3983; // x3
  UserEventServantFatigueMaster_o *v3984; // x20
  int64_t v3985; // x2
  int32_t v3986; // w3
  System_String_o *v3987; // x4
  BattleSetupInfo_o *v3988; // x5
  FollowerInfo_o *v3989; // x6
  PartyListViewItem_o *v3990; // x7
  __int64 v3991; // x1
  __int64 v3992; // x2
  __int64 v3993; // x3
  EventRewardBgMaster_o *v3994; // x20
  int64_t v3995; // x2
  int32_t v3996; // w3
  System_String_o *v3997; // x4
  BattleSetupInfo_o *v3998; // x5
  FollowerInfo_o *v3999; // x6
  PartyListViewItem_o *v4000; // x7
  __int64 v4001; // x1
  __int64 v4002; // x2
  __int64 v4003; // x3
  EventFatigueRecoveryMaster_o *v4004; // x20
  int64_t v4005; // x2
  int32_t v4006; // w3
  System_String_o *v4007; // x4
  BattleSetupInfo_o *v4008; // x5
  FollowerInfo_o *v4009; // x6
  PartyListViewItem_o *v4010; // x7
  __int64 v4011; // x1
  __int64 v4012; // x2
  __int64 v4013; // x3
  EventBoostItemUsedMaster_o *v4014; // x20
  int64_t v4015; // x2
  int32_t v4016; // w3
  System_String_o *v4017; // x4
  BattleSetupInfo_o *v4018; // x5
  FollowerInfo_o *v4019; // x6
  PartyListViewItem_o *v4020; // x7
  __int64 v4021; // x1
  __int64 v4022; // x2
  __int64 v4023; // x3
  StatusEffectPosOverwriteMaster_o *v4024; // x20
  int64_t v4025; // x2
  int32_t v4026; // w3
  System_String_o *v4027; // x4
  BattleSetupInfo_o *v4028; // x5
  FollowerInfo_o *v4029; // x6
  PartyListViewItem_o *v4030; // x7
  __int64 v4031; // x1
  __int64 v4032; // x2
  __int64 v4033; // x3
  QuestPhaseDetailAddMaster_o *v4034; // x20
  int64_t v4035; // x2
  int32_t v4036; // w3
  System_String_o *v4037; // x4
  BattleSetupInfo_o *v4038; // x5
  FollowerInfo_o *v4039; // x6
  PartyListViewItem_o *v4040; // x7
  __int64 v4041; // x1
  __int64 v4042; // x2
  __int64 v4043; // x3
  VoiceClosedMessageMaster_o *v4044; // x20
  int64_t v4045; // x2
  int32_t v4046; // w3
  System_String_o *v4047; // x4
  BattleSetupInfo_o *v4048; // x5
  FollowerInfo_o *v4049; // x6
  PartyListViewItem_o *v4050; // x7
  __int64 v4051; // x1
  __int64 v4052; // x2
  __int64 v4053; // x3
  ReprintStageMaster_o *v4054; // x20
  int64_t v4055; // x2
  int32_t v4056; // w3
  System_String_o *v4057; // x4
  BattleSetupInfo_o *v4058; // x5
  FollowerInfo_o *v4059; // x6
  PartyListViewItem_o *v4060; // x7
  __int64 v4061; // x1
  __int64 v4062; // x2
  __int64 v4063; // x3
  UserCombineExpMaster_o *v4064; // x20
  int64_t v4065; // x2
  int32_t v4066; // w3
  System_String_o *v4067; // x4
  BattleSetupInfo_o *v4068; // x5
  FollowerInfo_o *v4069; // x6
  PartyListViewItem_o *v4070; // x7
  __int64 v4071; // x1
  __int64 v4072; // x2
  __int64 v4073; // x3
  EventBoardGameCellMaster_o *v4074; // x20
  int64_t v4075; // x2
  int32_t v4076; // w3
  System_String_o *v4077; // x4
  BattleSetupInfo_o *v4078; // x5
  FollowerInfo_o *v4079; // x6
  PartyListViewItem_o *v4080; // x7
  __int64 v4081; // x1
  __int64 v4082; // x2
  __int64 v4083; // x3
  EventBoardGameTokenMaster_o *v4084; // x20
  int64_t v4085; // x2
  int32_t v4086; // w3
  System_String_o *v4087; // x4
  BattleSetupInfo_o *v4088; // x5
  FollowerInfo_o *v4089; // x6
  PartyListViewItem_o *v4090; // x7
  __int64 v4091; // x1
  __int64 v4092; // x2
  __int64 v4093; // x3
  EventBoardGameTokenRewardMaster_o *v4094; // x20
  int64_t v4095; // x2
  int32_t v4096; // w3
  System_String_o *v4097; // x4
  BattleSetupInfo_o *v4098; // x5
  FollowerInfo_o *v4099; // x6
  PartyListViewItem_o *v4100; // x7
  __int64 v4101; // x1
  __int64 v4102; // x2
  __int64 v4103; // x3
  UserEventBoardGameTokenMaster_o *v4104; // x20
  int64_t v4105; // x2
  int32_t v4106; // w3
  System_String_o *v4107; // x4
  BattleSetupInfo_o *v4108; // x5
  FollowerInfo_o *v4109; // x6
  PartyListViewItem_o *v4110; // x7
  __int64 v4111; // x1
  __int64 v4112; // x2
  __int64 v4113; // x3
  ServantAnimationOverwriteMaster_o *v4114; // x20
  int64_t v4115; // x2
  int32_t v4116; // w3
  System_String_o *v4117; // x4
  BattleSetupInfo_o *v4118; // x5
  FollowerInfo_o *v4119; // x6
  PartyListViewItem_o *v4120; // x7
  __int64 v4121; // x1
  __int64 v4122; // x2
  __int64 v4123; // x3
  OpeningMovieMaster_o *v4124; // x20
  int64_t v4125; // x2
  int32_t v4126; // w3
  System_String_o *v4127; // x4
  BattleSetupInfo_o *v4128; // x5
  FollowerInfo_o *v4129; // x6
  PartyListViewItem_o *v4130; // x7
  __int64 v4131; // x1
  __int64 v4132; // x2
  __int64 v4133; // x3
  ServantLimitSpoilerProtectionMaster_o *v4134; // x20
  int64_t v4135; // x2
  int32_t v4136; // w3
  System_String_o *v4137; // x4
  BattleSetupInfo_o *v4138; // x5
  FollowerInfo_o *v4139; // x6
  PartyListViewItem_o *v4140; // x7
  __int64 v4141; // x1
  __int64 v4142; // x2
  __int64 v4143; // x3
  PickupUserFollowerMaster_o *v4144; // x20
  int64_t v4145; // x2
  int32_t v4146; // w3
  System_String_o *v4147; // x4
  BattleSetupInfo_o *v4148; // x5
  FollowerInfo_o *v4149; // x6
  PartyListViewItem_o *v4150; // x7
  __int64 v4151; // x1
  __int64 v4152; // x2
  __int64 v4153; // x3
  ServantCollectionMaster_o *v4154; // x20
  int64_t v4155; // x2
  int32_t v4156; // w3
  System_String_o *v4157; // x4
  BattleSetupInfo_o *v4158; // x5
  FollowerInfo_o *v4159; // x6
  PartyListViewItem_o *v4160; // x7
  __int64 v4161; // x1
  __int64 v4162; // x2
  __int64 v4163; // x3
  GachaBehaviorMaster_o *v4164; // x20
  int64_t v4165; // x2
  int32_t v4166; // w3
  System_String_o *v4167; // x4
  BattleSetupInfo_o *v4168; // x5
  FollowerInfo_o *v4169; // x6
  PartyListViewItem_o *v4170; // x7
  __int64 v4171; // x1
  __int64 v4172; // x2
  __int64 v4173; // x3
  EventQuestCooltimeMaster_o *v4174; // x20
  int64_t v4175; // x2
  int32_t v4176; // w3
  System_String_o *v4177; // x4
  BattleSetupInfo_o *v4178; // x5
  FollowerInfo_o *v4179; // x6
  PartyListViewItem_o *v4180; // x7
  __int64 v4181; // x1
  __int64 v4182; // x2
  __int64 v4183; // x3
  UserEventQuestCooltimeMaster_o *v4184; // x20
  int64_t v4185; // x2
  int32_t v4186; // w3
  System_String_o *v4187; // x4
  BattleSetupInfo_o *v4188; // x5
  FollowerInfo_o *v4189; // x6
  PartyListViewItem_o *v4190; // x7
  __int64 v4191; // x1
  __int64 v4192; // x2
  __int64 v4193; // x3
  BoostMaster_o *v4194; // x20
  int64_t v4195; // x2
  int32_t v4196; // w3
  System_String_o *v4197; // x4
  BattleSetupInfo_o *v4198; // x5
  FollowerInfo_o *v4199; // x6
  PartyListViewItem_o *v4200; // x7
  __int64 v4201; // x1
  __int64 v4202; // x2
  __int64 v4203; // x3
  WarBoardMaster_o *v4204; // x20
  int64_t v4205; // x2
  int32_t v4206; // w3
  System_String_o *v4207; // x4
  BattleSetupInfo_o *v4208; // x5
  FollowerInfo_o *v4209; // x6
  PartyListViewItem_o *v4210; // x7
  __int64 v4211; // x1
  __int64 v4212; // x2
  __int64 v4213; // x3
  WarBoardSquareMaster_o *v4214; // x20
  int64_t v4215; // x2
  int32_t v4216; // w3
  System_String_o *v4217; // x4
  BattleSetupInfo_o *v4218; // x5
  FollowerInfo_o *v4219; // x6
  PartyListViewItem_o *v4220; // x7
  __int64 v4221; // x1
  __int64 v4222; // x2
  __int64 v4223; // x3
  WarBoardRoadMaster_o *v4224; // x20
  int64_t v4225; // x2
  int32_t v4226; // w3
  System_String_o *v4227; // x4
  BattleSetupInfo_o *v4228; // x5
  FollowerInfo_o *v4229; // x6
  PartyListViewItem_o *v4230; // x7
  __int64 v4231; // x1
  __int64 v4232; // x2
  __int64 v4233; // x3
  WarBoardStageMaster_o *v4234; // x20
  int64_t v4235; // x2
  int32_t v4236; // w3
  System_String_o *v4237; // x4
  BattleSetupInfo_o *v4238; // x5
  FollowerInfo_o *v4239; // x6
  PartyListViewItem_o *v4240; // x7
  __int64 v4241; // x1
  __int64 v4242; // x2
  __int64 v4243; // x3
  WarBoardActionPointMaster_o *v4244; // x20
  int64_t v4245; // x2
  int32_t v4246; // w3
  System_String_o *v4247; // x4
  BattleSetupInfo_o *v4248; // x5
  FollowerInfo_o *v4249; // x6
  PartyListViewItem_o *v4250; // x7
  __int64 v4251; // x1
  __int64 v4252; // x2
  __int64 v4253; // x3
  WarBoardActionTrendMaster_o *v4254; // x20
  int64_t v4255; // x2
  int32_t v4256; // w3
  System_String_o *v4257; // x4
  BattleSetupInfo_o *v4258; // x5
  FollowerInfo_o *v4259; // x6
  PartyListViewItem_o *v4260; // x7
  __int64 v4261; // x1
  __int64 v4262; // x2
  __int64 v4263; // x3
  WarBoardTacticalTrendMaster_o *v4264; // x20
  int64_t v4265; // x2
  int32_t v4266; // w3
  System_String_o *v4267; // x4
  BattleSetupInfo_o *v4268; // x5
  FollowerInfo_o *v4269; // x6
  PartyListViewItem_o *v4270; // x7
  __int64 v4271; // x1
  __int64 v4272; // x2
  __int64 v4273; // x3
  WarBoardStageLayoutMaster_o *v4274; // x20
  int64_t v4275; // x2
  int32_t v4276; // w3
  System_String_o *v4277; // x4
  BattleSetupInfo_o *v4278; // x5
  FollowerInfo_o *v4279; // x6
  PartyListViewItem_o *v4280; // x7
  __int64 v4281; // x1
  __int64 v4282; // x2
  __int64 v4283; // x3
  WarBoardStageNpcMaster_o *v4284; // x20
  int64_t v4285; // x2
  int32_t v4286; // w3
  System_String_o *v4287; // x4
  BattleSetupInfo_o *v4288; // x5
  FollowerInfo_o *v4289; // x6
  PartyListViewItem_o *v4290; // x7
  __int64 v4291; // x1
  __int64 v4292; // x2
  __int64 v4293; // x3
  WarBoardStageWallMaster_o *v4294; // x20
  int64_t v4295; // x2
  int32_t v4296; // w3
  System_String_o *v4297; // x4
  BattleSetupInfo_o *v4298; // x5
  FollowerInfo_o *v4299; // x6
  PartyListViewItem_o *v4300; // x7
  __int64 v4301; // x1
  __int64 v4302; // x2
  __int64 v4303; // x3
  WarBoardAIMaster_o *v4304; // x20
  int64_t v4305; // x2
  int32_t v4306; // w3
  System_String_o *v4307; // x4
  BattleSetupInfo_o *v4308; // x5
  FollowerInfo_o *v4309; // x6
  PartyListViewItem_o *v4310; // x7
  __int64 v4311; // x1
  __int64 v4312; // x2
  __int64 v4313; // x3
  WarBoardRatingBaseMaster_o *v4314; // x20
  int64_t v4315; // x2
  int32_t v4316; // w3
  System_String_o *v4317; // x4
  BattleSetupInfo_o *v4318; // x5
  FollowerInfo_o *v4319; // x6
  PartyListViewItem_o *v4320; // x7
  __int64 v4321; // x1
  __int64 v4322; // x2
  __int64 v4323; // x3
  WarBoardRatingOffsetMaster_o *v4324; // x20
  int64_t v4325; // x2
  int32_t v4326; // w3
  System_String_o *v4327; // x4
  BattleSetupInfo_o *v4328; // x5
  FollowerInfo_o *v4329; // x6
  PartyListViewItem_o *v4330; // x7
  __int64 v4331; // x1
  __int64 v4332; // x2
  __int64 v4333; // x3
  WarBoardItemMaster_o *v4334; // x20
  int64_t v4335; // x2
  int32_t v4336; // w3
  System_String_o *v4337; // x4
  BattleSetupInfo_o *v4338; // x5
  FollowerInfo_o *v4339; // x6
  PartyListViewItem_o *v4340; // x7
  __int64 v4341; // x1
  __int64 v4342; // x2
  __int64 v4343; // x3
  WarBoardTreasureMaster_o *v4344; // x20
  int64_t v4345; // x2
  int32_t v4346; // w3
  System_String_o *v4347; // x4
  BattleSetupInfo_o *v4348; // x5
  FollowerInfo_o *v4349; // x6
  PartyListViewItem_o *v4350; // x7
  __int64 v4351; // x1
  __int64 v4352; // x2
  __int64 v4353; // x3
  WarBoardQuestMaster_o *v4354; // x20
  int64_t v4355; // x2
  int32_t v4356; // w3
  System_String_o *v4357; // x4
  BattleSetupInfo_o *v4358; // x5
  FollowerInfo_o *v4359; // x6
  PartyListViewItem_o *v4360; // x7
  __int64 v4361; // x1
  __int64 v4362; // x2
  __int64 v4363; // x3
  WarBoardDataMaster_o *v4364; // x20
  int64_t v4365; // x2
  int32_t v4366; // w3
  System_String_o *v4367; // x4
  BattleSetupInfo_o *v4368; // x5
  FollowerInfo_o *v4369; // x6
  PartyListViewItem_o *v4370; // x7
  __int64 v4371; // x1
  __int64 v4372; // x2
  __int64 v4373; // x3
  WarBoardIndividualityClassMaster_o *v4374; // x20
  int64_t v4375; // x2
  int32_t v4376; // w3
  System_String_o *v4377; // x4
  BattleSetupInfo_o *v4378; // x5
  FollowerInfo_o *v4379; // x6
  PartyListViewItem_o *v4380; // x7
  __int64 v4381; // x1
  __int64 v4382; // x2
  __int64 v4383; // x3
  WarBoardActionTrendConditionMaster_o *v4384; // x20
  int64_t v4385; // x2
  int32_t v4386; // w3
  System_String_o *v4387; // x4
  BattleSetupInfo_o *v4388; // x5
  FollowerInfo_o *v4389; // x6
  PartyListViewItem_o *v4390; // x7
  __int64 v4391; // x1
  __int64 v4392; // x2
  __int64 v4393; // x3
  WarBoardActionPointClassMaster_o *v4394; // x20
  int64_t v4395; // x2
  int32_t v4396; // w3
  System_String_o *v4397; // x4
  BattleSetupInfo_o *v4398; // x5
  FollowerInfo_o *v4399; // x6
  PartyListViewItem_o *v4400; // x7
  __int64 v4401; // x1
  __int64 v4402; // x2
  __int64 v4403; // x3
  EventPanelMapMaster_o *v4404; // x20
  int64_t v4405; // x2
  int32_t v4406; // w3
  System_String_o *v4407; // x4
  BattleSetupInfo_o *v4408; // x5
  FollowerInfo_o *v4409; // x6
  PartyListViewItem_o *v4410; // x7
  __int64 v4411; // x1
  __int64 v4412; // x2
  __int64 v4413; // x3
  EventPanelMapDetailMaster_o *v4414; // x20
  int64_t v4415; // x2
  int32_t v4416; // w3
  System_String_o *v4417; // x4
  BattleSetupInfo_o *v4418; // x5
  FollowerInfo_o *v4419; // x6
  PartyListViewItem_o *v4420; // x7
  __int64 v4421; // x1
  __int64 v4422; // x2
  __int64 v4423; // x3
  EventPanelSpotMaster_o *v4424; // x20
  int64_t v4425; // x2
  int32_t v4426; // w3
  System_String_o *v4427; // x4
  BattleSetupInfo_o *v4428; // x5
  FollowerInfo_o *v4429; // x6
  PartyListViewItem_o *v4430; // x7
  __int64 v4431; // x1
  __int64 v4432; // x2
  __int64 v4433; // x3
  EventPanelScanMaster_o *v4434; // x20
  int64_t v4435; // x2
  int32_t v4436; // w3
  System_String_o *v4437; // x4
  BattleSetupInfo_o *v4438; // x5
  FollowerInfo_o *v4439; // x6
  PartyListViewItem_o *v4440; // x7
  __int64 v4441; // x1
  __int64 v4442; // x2
  __int64 v4443; // x3
  CommonConsumeMaster_o *v4444; // x20
  int64_t v4445; // x2
  int32_t v4446; // w3
  System_String_o *v4447; // x4
  BattleSetupInfo_o *v4448; // x5
  FollowerInfo_o *v4449; // x6
  PartyListViewItem_o *v4450; // x7
  __int64 v4451; // x1
  __int64 v4452; // x2
  __int64 v4453; // x3
  UserEventMapMaster_o *v4454; // x20
  int64_t v4455; // x2
  int32_t v4456; // w3
  System_String_o *v4457; // x4
  BattleSetupInfo_o *v4458; // x5
  FollowerInfo_o *v4459; // x6
  PartyListViewItem_o *v4460; // x7
  __int64 v4461; // x1
  __int64 v4462; // x2
  __int64 v4463; // x3
  UserEventSpotMaster_o *v4464; // x20
  int64_t v4465; // x2
  int32_t v4466; // w3
  System_String_o *v4467; // x4
  BattleSetupInfo_o *v4468; // x5
  FollowerInfo_o *v4469; // x6
  PartyListViewItem_o *v4470; // x7
  __int64 v4471; // x1
  __int64 v4472; // x2
  __int64 v4473; // x3
  WarGroupMaster_o *v4474; // x20
  int64_t v4475; // x2
  int32_t v4476; // w3
  System_String_o *v4477; // x4
  BattleSetupInfo_o *v4478; // x5
  FollowerInfo_o *v4479; // x6
  PartyListViewItem_o *v4480; // x7
  __int64 v4481; // x1
  __int64 v4482; // x2
  __int64 v4483; // x3
  ServantLimitImageMaster_o *v4484; // x20
  int64_t v4485; // x2
  int32_t v4486; // w3
  System_String_o *v4487; // x4
  BattleSetupInfo_o *v4488; // x5
  FollowerInfo_o *v4489; // x6
  PartyListViewItem_o *v4490; // x7
  __int64 v4491; // x1
  __int64 v4492; // x2
  __int64 v4493; // x3
  FriendshipQuestDialogInfoMaster_o *v4494; // x20
  int64_t v4495; // x2
  int32_t v4496; // w3
  System_String_o *v4497; // x4
  BattleSetupInfo_o *v4498; // x5
  FollowerInfo_o *v4499; // x6
  PartyListViewItem_o *v4500; // x7
  __int64 v4501; // x1
  __int64 v4502; // x2
  __int64 v4503; // x3
  QuestRestrictionInfoMaster_o *v4504; // x20
  int64_t v4505; // x2
  int32_t v4506; // w3
  System_String_o *v4507; // x4
  BattleSetupInfo_o *v4508; // x5
  FollowerInfo_o *v4509; // x6
  PartyListViewItem_o *v4510; // x7
  __int64 v4511; // x1
  __int64 v4512; // x2
  __int64 v4513; // x3
  AssistMaster_o *v4514; // x20
  int64_t v4515; // x2
  int32_t v4516; // w3
  System_String_o *v4517; // x4
  BattleSetupInfo_o *v4518; // x5
  FollowerInfo_o *v4519; // x6
  PartyListViewItem_o *v4520; // x7
  __int64 v4521; // x1
  __int64 v4522; // x2
  __int64 v4523; // x3
  WarBoardEffectMaster_o *v4524; // x20
  int64_t v4525; // x2
  int32_t v4526; // w3
  System_String_o *v4527; // x4
  BattleSetupInfo_o *v4528; // x5
  FollowerInfo_o *v4529; // x6
  PartyListViewItem_o *v4530; // x7
  __int64 v4531; // x1
  __int64 v4532; // x2
  __int64 v4533; // x3
  WarBoardOnboardSkillMaster_o *v4534; // x20
  int64_t v4535; // x2
  int32_t v4536; // w3
  System_String_o *v4537; // x4
  BattleSetupInfo_o *v4538; // x5
  FollowerInfo_o *v4539; // x6
  PartyListViewItem_o *v4540; // x7
  __int64 v4541; // x1
  __int64 v4542; // x2
  __int64 v4543; // x3
  BeforeBirthDayMaster_o *v4544; // x20
  int64_t v4545; // x2
  int32_t v4546; // w3
  System_String_o *v4547; // x4
  BattleSetupInfo_o *v4548; // x5
  FollowerInfo_o *v4549; // x6
  PartyListViewItem_o *v4550; // x7
  __int64 v4551; // x1
  __int64 v4552; // x2
  __int64 v4553; // x3
  LoginQuestMaster_o *v4554; // x20
  int64_t v4555; // x2
  int32_t v4556; // w3
  System_String_o *v4557; // x4
  BattleSetupInfo_o *v4558; // x5
  FollowerInfo_o *v4559; // x6
  PartyListViewItem_o *v4560; // x7
  __int64 v4561; // x1
  __int64 v4562; // x2
  __int64 v4563; // x3
  EventCombineCostumeMaster_o *v4564; // x20
  int64_t v4565; // x2
  int32_t v4566; // w3
  System_String_o *v4567; // x4
  BattleSetupInfo_o *v4568; // x5
  FollowerInfo_o *v4569; // x6
  PartyListViewItem_o *v4570; // x7
  __int64 v4571; // x1
  __int64 v4572; // x2
  __int64 v4573; // x3
  WarBoardStagePieceDetailMaster_o *v4574; // x20
  int64_t v4575; // x2
  int32_t v4576; // w3
  System_String_o *v4577; // x4
  BattleSetupInfo_o *v4578; // x5
  FollowerInfo_o *v4579; // x6
  PartyListViewItem_o *v4580; // x7
  __int64 v4581; // x1
  __int64 v4582; // x2
  __int64 v4583; // x3
  ServantTreasureDeviceAddMaster_o *v4584; // x20
  int64_t v4585; // x2
  int32_t v4586; // w3
  System_String_o *v4587; // x4
  BattleSetupInfo_o *v4588; // x5
  FollowerInfo_o *v4589; // x6
  PartyListViewItem_o *v4590; // x7
  __int64 v4591; // x1
  __int64 v4592; // x2
  __int64 v4593; // x3
  SkillAddMaster_o *v4594; // x20
  int64_t v4595; // x2
  int32_t v4596; // w3
  System_String_o *v4597; // x4
  BattleSetupInfo_o *v4598; // x5
  FollowerInfo_o *v4599; // x6
  PartyListViewItem_o *v4600; // x7
  __int64 v4601; // x1
  __int64 v4602; // x2
  __int64 v4603; // x3
  ServantLvDetailMaster_o *v4604; // x20
  int64_t v4605; // x2
  int32_t v4606; // w3
  System_String_o *v4607; // x4
  BattleSetupInfo_o *v4608; // x5
  FollowerInfo_o *v4609; // x6
  PartyListViewItem_o *v4610; // x7
  __int64 v4611; // x1
  __int64 v4612; // x2
  __int64 v4613; // x3
  GachaAppendMaster_o *v4614; // x20
  int64_t v4615; // x2
  int32_t v4616; // w3
  System_String_o *v4617; // x4
  BattleSetupInfo_o *v4618; // x5
  FollowerInfo_o *v4619; // x6
  PartyListViewItem_o *v4620; // x7
  __int64 v4621; // x1
  __int64 v4622; // x2
  __int64 v4623; // x3
  UserGachaDrawLogMaster_o *v4624; // x20
  int64_t v4625; // x2
  int32_t v4626; // w3
  System_String_o *v4627; // x4
  BattleSetupInfo_o *v4628; // x5
  FollowerInfo_o *v4629; // x6
  PartyListViewItem_o *v4630; // x7
  __int64 v4631; // x1
  __int64 v4632; // x2
  __int64 v4633; // x3
  ServantAppendPassiveSkillMaster_o *v4634; // x20
  int64_t v4635; // x2
  int32_t v4636; // w3
  System_String_o *v4637; // x4
  BattleSetupInfo_o *v4638; // x5
  FollowerInfo_o *v4639; // x6
  PartyListViewItem_o *v4640; // x7
  __int64 v4641; // x1
  __int64 v4642; // x2
  __int64 v4643; // x3
  UserServantAppendPassiveSkillMaster_o *v4644; // x20
  int64_t v4645; // x2
  int32_t v4646; // w3
  System_String_o *v4647; // x4
  BattleSetupInfo_o *v4648; // x5
  FollowerInfo_o *v4649; // x6
  PartyListViewItem_o *v4650; // x7
  __int64 v4651; // x1
  __int64 v4652; // x2
  __int64 v4653; // x3
  UserServantAppendPassiveSkillLvMaster_o *v4654; // x20
  int64_t v4655; // x2
  int32_t v4656; // w3
  System_String_o *v4657; // x4
  BattleSetupInfo_o *v4658; // x5
  FollowerInfo_o *v4659; // x6
  PartyListViewItem_o *v4660; // x7
  __int64 v4661; // x1
  __int64 v4662; // x2
  __int64 v4663; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v4664; // x20
  int64_t v4665; // x2
  int32_t v4666; // w3
  System_String_o *v4667; // x4
  BattleSetupInfo_o *v4668; // x5
  FollowerInfo_o *v4669; // x6
  PartyListViewItem_o *v4670; // x7
  __int64 v4671; // x1
  __int64 v4672; // x2
  __int64 v4673; // x3
  CombineAppendPassiveSkillMaster_o *v4674; // x20
  int64_t v4675; // x2
  int32_t v4676; // w3
  System_String_o *v4677; // x4
  BattleSetupInfo_o *v4678; // x5
  FollowerInfo_o *v4679; // x6
  PartyListViewItem_o *v4680; // x7
  __int64 v4681; // x1
  __int64 v4682; // x2
  __int64 v4683; // x3
  SvtCoinMaster_o *v4684; // x20
  int64_t v4685; // x2
  int32_t v4686; // w3
  System_String_o *v4687; // x4
  BattleSetupInfo_o *v4688; // x5
  FollowerInfo_o *v4689; // x6
  PartyListViewItem_o *v4690; // x7
  __int64 v4691; // x1
  __int64 v4692; // x2
  __int64 v4693; // x3
  UserSvtCoinMaster_o *v4694; // x20
  int64_t v4695; // x2
  int32_t v4696; // w3
  System_String_o *v4697; // x4
  BattleSetupInfo_o *v4698; // x5
  FollowerInfo_o *v4699; // x6
  PartyListViewItem_o *v4700; // x7
  __int64 v4701; // x1
  __int64 v4702; // x2
  __int64 v4703; // x3
  ServantAddMaster_o *v4704; // x20
  int64_t v4705; // x2
  int32_t v4706; // w3
  System_String_o *v4707; // x4
  BattleSetupInfo_o *v4708; // x5
  FollowerInfo_o *v4709; // x6
  PartyListViewItem_o *v4710; // x7
  __int64 v4711; // x1
  __int64 v4712; // x2
  __int64 v4713; // x3
  TreasureBoxMaster_o *v4714; // x20
  int64_t v4715; // x2
  int32_t v4716; // w3
  System_String_o *v4717; // x4
  BattleSetupInfo_o *v4718; // x5
  FollowerInfo_o *v4719; // x6
  PartyListViewItem_o *v4720; // x7
  __int64 v4721; // x1
  __int64 v4722; // x2
  __int64 v4723; // x3
  TreasureBoxGiftMaster_o *v4724; // x20
  int64_t v4725; // x2
  int32_t v4726; // w3
  System_String_o *v4727; // x4
  BattleSetupInfo_o *v4728; // x5
  FollowerInfo_o *v4729; // x6
  PartyListViewItem_o *v4730; // x7
  __int64 v4731; // x1
  __int64 v4732; // x2
  __int64 v4733; // x3
  TreasureBoxTalkMaster_o *v4734; // x20
  int64_t v4735; // x2
  int32_t v4736; // w3
  System_String_o *v4737; // x4
  BattleSetupInfo_o *v4738; // x5
  FollowerInfo_o *v4739; // x6
  PartyListViewItem_o *v4740; // x7
  __int64 v4741; // x1
  __int64 v4742; // x2
  __int64 v4743; // x3
  UserEventExpeditionMaster_o *v4744; // x20
  int64_t v4745; // x2
  int32_t v4746; // w3
  System_String_o *v4747; // x4
  BattleSetupInfo_o *v4748; // x5
  FollowerInfo_o *v4749; // x6
  PartyListViewItem_o *v4750; // x7
  __int64 v4751; // x1
  __int64 v4752; // x2
  __int64 v4753; // x3
  EventExpeditionMaster_o *v4754; // x20
  int64_t v4755; // x2
  int32_t v4756; // w3
  System_String_o *v4757; // x4
  BattleSetupInfo_o *v4758; // x5
  FollowerInfo_o *v4759; // x6
  PartyListViewItem_o *v4760; // x7
  __int64 v4761; // x1
  __int64 v4762; // x2
  __int64 v4763; // x3
  EventExpeditionPieceMaster_o *v4764; // x20
  int64_t v4765; // x2
  int32_t v4766; // w3
  System_String_o *v4767; // x4
  BattleSetupInfo_o *v4768; // x5
  FollowerInfo_o *v4769; // x6
  PartyListViewItem_o *v4770; // x7
  __int64 v4771; // x1
  __int64 v4772; // x2
  __int64 v4773; // x3
  EventRecipeMaster_o *v4774; // x20
  int64_t v4775; // x2
  int32_t v4776; // w3
  System_String_o *v4777; // x4
  BattleSetupInfo_o *v4778; // x5
  FollowerInfo_o *v4779; // x6
  PartyListViewItem_o *v4780; // x7
  __int64 v4781; // x1
  __int64 v4782; // x2
  __int64 v4783; // x3
  EventRecipeGiftMaster_o *v4784; // x20
  int64_t v4785; // x2
  int32_t v4786; // w3
  System_String_o *v4787; // x4
  BattleSetupInfo_o *v4788; // x5
  FollowerInfo_o *v4789; // x6
  PartyListViewItem_o *v4790; // x7
  __int64 v4791; // x1
  __int64 v4792; // x2
  __int64 v4793; // x3
  UserEventFortificationMaster_o *v4794; // x20
  int64_t v4795; // x2
  int32_t v4796; // w3
  System_String_o *v4797; // x4
  BattleSetupInfo_o *v4798; // x5
  FollowerInfo_o *v4799; // x6
  PartyListViewItem_o *v4800; // x7
  __int64 v4801; // x1
  __int64 v4802; // x2
  __int64 v4803; // x3
  EventFortificationMaster_o *v4804; // x20
  int64_t v4805; // x2
  int32_t v4806; // w3
  System_String_o *v4807; // x4
  BattleSetupInfo_o *v4808; // x5
  FollowerInfo_o *v4809; // x6
  PartyListViewItem_o *v4810; // x7
  __int64 v4811; // x1
  __int64 v4812; // x2
  __int64 v4813; // x3
  EventFortificationDetailMaster_o *v4814; // x20
  int64_t v4815; // x2
  int32_t v4816; // w3
  System_String_o *v4817; // x4
  BattleSetupInfo_o *v4818; // x5
  FollowerInfo_o *v4819; // x6
  PartyListViewItem_o *v4820; // x7
  __int64 v4821; // x1
  __int64 v4822; // x2
  __int64 v4823; // x3
  EventFortificationSvtMaster_o *v4824; // x20
  int64_t v4825; // x2
  int32_t v4826; // w3
  System_String_o *v4827; // x4
  BattleSetupInfo_o *v4828; // x5
  FollowerInfo_o *v4829; // x6
  PartyListViewItem_o *v4830; // x7
  __int64 v4831; // x1
  __int64 v4832; // x2
  __int64 v4833; // x3
  UserServantVoicePlayedMaster_o *v4834; // x20
  int64_t v4835; // x2
  int32_t v4836; // w3
  System_String_o *v4837; // x4
  BattleSetupInfo_o *v4838; // x5
  FollowerInfo_o *v4839; // x6
  PartyListViewItem_o *v4840; // x7
  __int64 v4841; // x1
  __int64 v4842; // x2
  __int64 v4843; // x3
  UpdateProfileDialogInfoMaster_o *v4844; // x20
  int64_t v4845; // x2
  int32_t v4846; // w3
  System_String_o *v4847; // x4
  BattleSetupInfo_o *v4848; // x5
  FollowerInfo_o *v4849; // x6
  PartyListViewItem_o *v4850; // x7
  __int64 v4851; // x1
  __int64 v4852; // x2
  __int64 v4853; // x3
  SvtMaterialTdMaster_o *v4854; // x20
  int64_t v4855; // x2
  int32_t v4856; // w3
  System_String_o *v4857; // x4
  BattleSetupInfo_o *v4858; // x5
  FollowerInfo_o *v4859; // x6
  PartyListViewItem_o *v4860; // x7
  __int64 v4861; // x1
  __int64 v4862; // x2
  __int64 v4863; // x3
  BattleMasterImageMaster_o *v4864; // x20
  int64_t v4865; // x2
  int32_t v4866; // w3
  System_String_o *v4867; // x4
  BattleSetupInfo_o *v4868; // x5
  FollowerInfo_o *v4869; // x6
  PartyListViewItem_o *v4870; // x7
  __int64 v4871; // x1
  __int64 v4872; // x2
  __int64 v4873; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v4874; // x20
  int64_t v4875; // x2
  int32_t v4876; // w3
  System_String_o *v4877; // x4
  BattleSetupInfo_o *v4878; // x5
  FollowerInfo_o *v4879; // x6
  PartyListViewItem_o *v4880; // x7
  __int64 v4881; // x1
  __int64 v4882; // x2
  __int64 v4883; // x3
  UserEventRandomMissionMaster_o *v4884; // x20
  int64_t v4885; // x2
  int32_t v4886; // w3
  System_String_o *v4887; // x4
  BattleSetupInfo_o *v4888; // x5
  FollowerInfo_o *v4889; // x6
  PartyListViewItem_o *v4890; // x7
  __int64 v4891; // x1
  __int64 v4892; // x2
  __int64 v4893; // x3
  EventProgressValueMaster_o *v4894; // x20
  int64_t v4895; // x2
  int32_t v4896; // w3
  System_String_o *v4897; // x4
  BattleSetupInfo_o *v4898; // x5
  FollowerInfo_o *v4899; // x6
  PartyListViewItem_o *v4900; // x7
  __int64 v4901; // x1
  __int64 v4902; // x2
  __int64 v4903; // x3
  SvtMultiPortraitMaster_o *v4904; // x20
  int64_t v4905; // x2
  int32_t v4906; // w3
  System_String_o *v4907; // x4
  BattleSetupInfo_o *v4908; // x5
  FollowerInfo_o *v4909; // x6
  PartyListViewItem_o *v4910; // x7
  __int64 v4911; // x1
  __int64 v4912; // x2
  __int64 v4913; // x3
  EventRandomMissionMaster_o *v4914; // x20
  int64_t v4915; // x2
  int32_t v4916; // w3
  System_String_o *v4917; // x4
  BattleSetupInfo_o *v4918; // x5
  FollowerInfo_o *v4919; // x6
  PartyListViewItem_o *v4920; // x7
  __int64 v4921; // x1
  __int64 v4922; // x2
  __int64 v4923; // x3
  UserGachaHistoryMaster_o *v4924; // x20
  int64_t v4925; // x2
  int32_t v4926; // w3
  System_String_o *v4927; // x4
  BattleSetupInfo_o *v4928; // x5
  FollowerInfo_o *v4929; // x6
  PartyListViewItem_o *v4930; // x7
  __int64 v4931; // x1
  __int64 v4932; // x2
  __int64 v4933; // x3
  UserCoinRoomMaster_o *v4934; // x20
  int64_t v4935; // x2
  int32_t v4936; // w3
  System_String_o *v4937; // x4
  BattleSetupInfo_o *v4938; // x5
  FollowerInfo_o *v4939; // x6
  PartyListViewItem_o *v4940; // x7
  __int64 v4941; // x1
  __int64 v4942; // x2
  __int64 v4943; // x3
  EventBuddyPointMaster_o *v4944; // x20
  int64_t v4945; // x2
  int32_t v4946; // w3
  System_String_o *v4947; // x4
  BattleSetupInfo_o *v4948; // x5
  FollowerInfo_o *v4949; // x6
  PartyListViewItem_o *v4950; // x7
  __int64 v4951; // x1
  __int64 v4952; // x2
  __int64 v4953; // x3
  EventServantPointRankMaster_o *v4954; // x20
  int64_t v4955; // x2
  int32_t v4956; // w3
  System_String_o *v4957; // x4
  BattleSetupInfo_o *v4958; // x5
  FollowerInfo_o *v4959; // x6
  PartyListViewItem_o *v4960; // x7
  __int64 v4961; // x1
  __int64 v4962; // x2
  __int64 v4963; // x3
  UserEventServantPointMaster_o *v4964; // x20
  int64_t v4965; // x2
  int32_t v4966; // w3
  System_String_o *v4967; // x4
  BattleSetupInfo_o *v4968; // x5
  FollowerInfo_o *v4969; // x6
  PartyListViewItem_o *v4970; // x7
  __int64 v4971; // x1
  __int64 v4972; // x2
  __int64 v4973; // x3
  FieldMotionMaster_o *v4974; // x20
  int64_t v4975; // x2
  int32_t v4976; // w3
  System_String_o *v4977; // x4
  BattleSetupInfo_o *v4978; // x5
  FollowerInfo_o *v4979; // x6
  PartyListViewItem_o *v4980; // x7
  __int64 v4981; // x1
  __int64 v4982; // x2
  __int64 v4983; // x3
  UserDeleteReservationMaster_o *v4984; // x20
  int64_t v4985; // x2
  int32_t v4986; // w3
  System_String_o *v4987; // x4
  BattleSetupInfo_o *v4988; // x5
  FollowerInfo_o *v4989; // x6
  PartyListViewItem_o *v4990; // x7
  __int64 v4991; // x1
  __int64 v4992; // x2
  __int64 v4993; // x3
  ServantScriptMultipleMaster_o *v4994; // x20
  int64_t v4995; // x2
  int32_t v4996; // w3
  System_String_o *v4997; // x4
  BattleSetupInfo_o *v4998; // x5
  FollowerInfo_o *v4999; // x6
  PartyListViewItem_o *v5000; // x7
  __int64 v5001; // x1
  __int64 v5002; // x2
  __int64 v5003; // x3
  EquipAddMaster_o *v5004; // x20
  int64_t v5005; // x2
  int32_t v5006; // w3
  System_String_o *v5007; // x4
  BattleSetupInfo_o *v5008; // x5
  FollowerInfo_o *v5009; // x6
  PartyListViewItem_o *v5010; // x7
  __int64 v5011; // x1
  __int64 v5012; // x2
  __int64 v5013; // x3
  QuestReleaseOverwriteMaster_o *v5014; // x20
  int64_t v5015; // x2
  int32_t v5016; // w3
  System_String_o *v5017; // x4
  BattleSetupInfo_o *v5018; // x5
  FollowerInfo_o *v5019; // x6
  PartyListViewItem_o *v5020; // x7
  __int64 v5021; // x1
  __int64 v5022; // x2
  __int64 v5023; // x3
  UserEventAlloutBattleMaster_o *v5024; // x20
  int64_t v5025; // x2
  int32_t v5026; // w3
  System_String_o *v5027; // x4
  BattleSetupInfo_o *v5028; // x5
  FollowerInfo_o *v5029; // x6
  PartyListViewItem_o *v5030; // x7
  __int64 v5031; // x1
  __int64 v5032; // x2
  __int64 v5033; // x3
  QuestScriptMaterialNextMaster_o *v5034; // x20
  int64_t v5035; // x2
  int32_t v5036; // w3
  System_String_o *v5037; // x4
  BattleSetupInfo_o *v5038; // x5
  FollowerInfo_o *v5039; // x6
  PartyListViewItem_o *v5040; // x7
  __int64 v5041; // x1
  __int64 v5042; // x2
  __int64 v5043; // x3
  EventDiggingMaster_o *v5044; // x20
  int64_t v5045; // x2
  int32_t v5046; // w3
  System_String_o *v5047; // x4
  BattleSetupInfo_o *v5048; // x5
  FollowerInfo_o *v5049; // x6
  PartyListViewItem_o *v5050; // x7
  __int64 v5051; // x1
  __int64 v5052; // x2
  __int64 v5053; // x3
  EventDiggingBlockMaster_o *v5054; // x20
  int64_t v5055; // x2
  int32_t v5056; // w3
  System_String_o *v5057; // x4
  BattleSetupInfo_o *v5058; // x5
  FollowerInfo_o *v5059; // x6
  PartyListViewItem_o *v5060; // x7
  __int64 v5061; // x1
  __int64 v5062; // x2
  __int64 v5063; // x3
  EventDiggingRewardMaster_o *v5064; // x20
  int64_t v5065; // x2
  int32_t v5066; // w3
  System_String_o *v5067; // x4
  BattleSetupInfo_o *v5068; // x5
  FollowerInfo_o *v5069; // x6
  PartyListViewItem_o *v5070; // x7
  __int64 v5071; // x1
  __int64 v5072; // x2
  __int64 v5073; // x3
  UserEventDiggingMaster_o *v5074; // x20
  int64_t v5075; // x2
  int32_t v5076; // w3
  System_String_o *v5077; // x4
  BattleSetupInfo_o *v5078; // x5
  FollowerInfo_o *v5079; // x6
  PartyListViewItem_o *v5080; // x7
  __int64 v5081; // x1
  __int64 v5082; // x2
  __int64 v5083; // x3
  BattleMessageMaster_o *v5084; // x20
  int64_t v5085; // x2
  int32_t v5086; // w3
  System_String_o *v5087; // x4
  BattleSetupInfo_o *v5088; // x5
  FollowerInfo_o *v5089; // x6
  PartyListViewItem_o *v5090; // x7
  __int64 v5091; // x1
  __int64 v5092; // x2
  __int64 v5093; // x3
  BattleMessageGroupMaster_o *v5094; // x20
  int64_t v5095; // x2
  int32_t v5096; // w3
  System_String_o *v5097; // x4
  BattleSetupInfo_o *v5098; // x5
  FollowerInfo_o *v5099; // x6
  PartyListViewItem_o *v5100; // x7
  __int64 v5101; // x1
  __int64 v5102; // x2
  __int64 v5103; // x3
  UserNpcSvtRecordMaster_o *v5104; // x20
  int64_t v5105; // x2
  int32_t v5106; // w3
  System_String_o *v5107; // x4
  BattleSetupInfo_o *v5108; // x5
  FollowerInfo_o *v5109; // x6
  PartyListViewItem_o *v5110; // x7
  __int64 v5111; // x1
  __int64 v5112; // x2
  __int64 v5113; // x3
  BuffTypeDetailMaster_o *v5114; // x20
  int64_t v5115; // x2
  int32_t v5116; // w3
  System_String_o *v5117; // x4
  BattleSetupInfo_o *v5118; // x5
  FollowerInfo_o *v5119; // x6
  PartyListViewItem_o *v5120; // x7
  __int64 v5121; // x1
  __int64 v5122; // x2
  __int64 v5123; // x3
  WarBoardMessageMaster_o *v5124; // x20
  int64_t v5125; // x2
  int32_t v5126; // w3
  System_String_o *v5127; // x4
  BattleSetupInfo_o *v5128; // x5
  FollowerInfo_o *v5129; // x6
  PartyListViewItem_o *v5130; // x7
  __int64 v5131; // x1
  __int64 v5132; // x2
  __int64 v5133; // x3
  WarBoardPartySkillMaster_o *v5134; // x20
  int64_t v5135; // x2
  int32_t v5136; // w3
  System_String_o *v5137; // x4
  BattleSetupInfo_o *v5138; // x5
  FollowerInfo_o *v5139; // x6
  PartyListViewItem_o *v5140; // x7
  __int64 v5141; // x1
  __int64 v5142; // x2
  __int64 v5143; // x3
  WarBoardMessageScriptMaster_o *v5144; // x20
  int64_t v5145; // x2
  int32_t v5146; // w3
  System_String_o *v5147; // x4
  BattleSetupInfo_o *v5148; // x5
  FollowerInfo_o *v5149; // x6
  PartyListViewItem_o *v5150; // x7
  __int64 v5151; // x1
  __int64 v5152; // x2
  __int64 v5153; // x3
  WarQuestSelectionMaster_o *v5154; // x20
  int64_t v5155; // x2
  int32_t v5156; // w3
  System_String_o *v5157; // x4
  BattleSetupInfo_o *v5158; // x5
  FollowerInfo_o *v5159; // x6
  PartyListViewItem_o *v5160; // x7
  __int64 v5161; // x1
  __int64 v5162; // x2
  __int64 v5163; // x3
  WarBoardStageDetailMaster_o *v5164; // x20
  int64_t v5165; // x2
  int32_t v5166; // w3
  System_String_o *v5167; // x4
  BattleSetupInfo_o *v5168; // x5
  FollowerInfo_o *v5169; // x6
  PartyListViewItem_o *v5170; // x7
  __int64 v5171; // x1
  __int64 v5172; // x2
  __int64 v5173; // x3
  QuestScriptMaterialOverwriteMaster_o *v5174; // x20
  int64_t v5175; // x2
  int32_t v5176; // w3
  System_String_o *v5177; // x4
  BattleSetupInfo_o *v5178; // x5
  FollowerInfo_o *v5179; // x6
  PartyListViewItem_o *v5180; // x7
  __int64 v5181; // x1
  __int64 v5182; // x2
  __int64 v5183; // x3
  QuestScriptBranchMaterialMaster_o *v5184; // x20
  int64_t v5185; // x2
  int32_t v5186; // w3
  System_String_o *v5187; // x4
  BattleSetupInfo_o *v5188; // x5
  FollowerInfo_o *v5189; // x6
  PartyListViewItem_o *v5190; // x7
  __int64 v5191; // x1
  __int64 v5192; // x2
  __int64 v5193; // x3
  AdCheckPointMaster_o *v5194; // x20
  int64_t v5195; // x2
  int32_t v5196; // w3
  System_String_o *v5197; // x4
  BattleSetupInfo_o *v5198; // x5
  FollowerInfo_o *v5199; // x6
  PartyListViewItem_o *v5200; // x7
  __int64 v5201; // x1
  __int64 v5202; // x2
  __int64 v5203; // x3
  GiftDetailMaster_o *v5204; // x20
  int64_t v5205; // x2
  int32_t v5206; // w3
  System_String_o *v5207; // x4
  BattleSetupInfo_o *v5208; // x5
  FollowerInfo_o *v5209; // x6
  PartyListViewItem_o *v5210; // x7
  __int64 v5211; // x1
  __int64 v5212; // x2
  __int64 v5213; // x3
  CombineLimitGiftMaster_o *v5214; // x20
  int64_t v5215; // x2
  int32_t v5216; // w3
  System_String_o *v5217; // x4
  BattleSetupInfo_o *v5218; // x5
  FollowerInfo_o *v5219; // x6
  PartyListViewItem_o *v5220; // x7
  __int64 v5221; // x1
  __int64 v5222; // x2
  __int64 v5223; // x3
  EventCooltimeRewardMaster_o *v5224; // x20
  int64_t v5225; // x2
  int32_t v5226; // w3
  System_String_o *v5227; // x4
  BattleSetupInfo_o *v5228; // x5
  FollowerInfo_o *v5229; // x6
  PartyListViewItem_o *v5230; // x7
  __int64 v5231; // x1
  __int64 v5232; // x2
  __int64 v5233; // x3
  UserEventCooltimeRewardMaster_o *v5234; // x20
  int64_t v5235; // x2
  int32_t v5236; // w3
  System_String_o *v5237; // x4
  BattleSetupInfo_o *v5238; // x5
  FollowerInfo_o *v5239; // x6
  PartyListViewItem_o *v5240; // x7
  __int64 v5241; // x1
  __int64 v5242; // x2
  __int64 v5243; // x3
  ClassBoardBaseMaster_o *v5244; // x20
  int64_t v5245; // x2
  int32_t v5246; // w3
  System_String_o *v5247; // x4
  BattleSetupInfo_o *v5248; // x5
  FollowerInfo_o *v5249; // x6
  PartyListViewItem_o *v5250; // x7
  __int64 v5251; // x1
  __int64 v5252; // x2
  __int64 v5253; // x3
  ClassBoardLockMaster_o *v5254; // x20
  int64_t v5255; // x2
  int32_t v5256; // w3
  System_String_o *v5257; // x4
  BattleSetupInfo_o *v5258; // x5
  FollowerInfo_o *v5259; // x6
  PartyListViewItem_o *v5260; // x7
  __int64 v5261; // x1
  __int64 v5262; // x2
  __int64 v5263; // x3
  ClassBoardSquareMaster_o *v5264; // x20
  int64_t v5265; // x2
  int32_t v5266; // w3
  System_String_o *v5267; // x4
  BattleSetupInfo_o *v5268; // x5
  FollowerInfo_o *v5269; // x6
  PartyListViewItem_o *v5270; // x7
  __int64 v5271; // x1
  __int64 v5272; // x2
  __int64 v5273; // x3
  ClassBoardLineMaster_o *v5274; // x20
  int64_t v5275; // x2
  int32_t v5276; // w3
  System_String_o *v5277; // x4
  BattleSetupInfo_o *v5278; // x5
  FollowerInfo_o *v5279; // x6
  PartyListViewItem_o *v5280; // x7
  __int64 v5281; // x1
  __int64 v5282; // x2
  __int64 v5283; // x3
  UserClassBoardSquareMaster_o *v5284; // x20
  int64_t v5285; // x2
  int32_t v5286; // w3
  System_String_o *v5287; // x4
  BattleSetupInfo_o *v5288; // x5
  FollowerInfo_o *v5289; // x6
  PartyListViewItem_o *v5290; // x7
  __int64 v5291; // x1
  __int64 v5292; // x2
  __int64 v5293; // x3
  ServantCardAddMaster_o *v5294; // x20
  int64_t v5295; // x2
  int32_t v5296; // w3
  System_String_o *v5297; // x4
  BattleSetupInfo_o *v5298; // x5
  FollowerInfo_o *v5299; // x6
  PartyListViewItem_o *v5300; // x7
  __int64 v5301; // x1
  __int64 v5302; // x2
  __int64 v5303; // x3
  MapLayerMaster_o *v5304; // x20
  int64_t v5305; // x2
  int32_t v5306; // w3
  System_String_o *v5307; // x4
  BattleSetupInfo_o *v5308; // x5
  FollowerInfo_o *v5309; // x6
  PartyListViewItem_o *v5310; // x7
  __int64 v5311; // x1
  __int64 v5312; // x2
  __int64 v5313; // x3
  SpotLayerMaster_o *v5314; // x20
  int64_t v5315; // x2
  int32_t v5316; // w3
  System_String_o *v5317; // x4
  BattleSetupInfo_o *v5318; // x5
  FollowerInfo_o *v5319; // x6
  PartyListViewItem_o *v5320; // x7
  __int64 v5321; // x1
  __int64 v5322; // x2
  __int64 v5323; // x3
  MapGimmickLayerMaster_o *v5324; // x20
  int64_t v5325; // x2
  int32_t v5326; // w3
  System_String_o *v5327; // x4
  BattleSetupInfo_o *v5328; // x5
  FollowerInfo_o *v5329; // x6
  PartyListViewItem_o *v5330; // x7
  __int64 v5331; // x1
  __int64 v5332; // x2
  __int64 v5333; // x3
  EventDataLostBattleMaster_o *v5334; // x20
  int64_t v5335; // x2
  int32_t v5336; // w3
  System_String_o *v5337; // x4
  BattleSetupInfo_o *v5338; // x5
  FollowerInfo_o *v5339; // x6
  PartyListViewItem_o *v5340; // x7
  __int64 v5341; // x1
  __int64 v5342; // x2
  __int64 v5343; // x3
  EventDataLostBattleResetMaster_o *v5344; // x20
  int64_t v5345; // x2
  int32_t v5346; // w3
  System_String_o *v5347; // x4
  BattleSetupInfo_o *v5348; // x5
  FollowerInfo_o *v5349; // x6
  PartyListViewItem_o *v5350; // x7
  __int64 v5351; // x1
  __int64 v5352; // x2
  __int64 v5353; // x3
  UserEventDataLostMaster_o *v5354; // x20
  int64_t v5355; // x2
  int32_t v5356; // w3
  System_String_o *v5357; // x4
  BattleSetupInfo_o *v5358; // x5
  FollowerInfo_o *v5359; // x6
  PartyListViewItem_o *v5360; // x7
  __int64 v5361; // x1
  __int64 v5362; // x2
  __int64 v5363; // x3
  QuestHintMaster_o *v5364; // x20
  int64_t v5365; // x2
  int32_t v5366; // w3
  System_String_o *v5367; // x4
  BattleSetupInfo_o *v5368; // x5
  FollowerInfo_o *v5369; // x6
  PartyListViewItem_o *v5370; // x7
  __int64 v5371; // x1
  __int64 v5372; // x2
  __int64 v5373; // x3
  FuncTypeDetailMaster_o *v5374; // x20
  int64_t v5375; // x2
  int32_t v5376; // w3
  System_String_o *v5377; // x4
  BattleSetupInfo_o *v5378; // x5
  FollowerInfo_o *v5379; // x6
  PartyListViewItem_o *v5380; // x7
  __int64 v5381; // x1
  __int64 v5382; // x2
  __int64 v5383; // x3
  BuffConvertMaster_o *v5384; // x20
  int64_t v5385; // x2
  int32_t v5386; // w3
  System_String_o *v5387; // x4
  BattleSetupInfo_o *v5388; // x5
  FollowerInfo_o *v5389; // x6
  PartyListViewItem_o *v5390; // x7
  __int64 v5391; // x1
  __int64 v5392; // x2
  __int64 v5393; // x3
  SkillGroupMaster_o *v5394; // x20
  int64_t v5395; // x2
  int32_t v5396; // w3
  System_String_o *v5397; // x4
  BattleSetupInfo_o *v5398; // x5
  FollowerInfo_o *v5399; // x6
  PartyListViewItem_o *v5400; // x7
  __int64 v5401; // x1
  __int64 v5402; // x2
  __int64 v5403; // x3
  SkillGroupOverwriteMaster_o *v5404; // x20
  int64_t v5405; // x2
  int32_t v5406; // w3
  System_String_o *v5407; // x4
  BattleSetupInfo_o *v5408; // x5
  FollowerInfo_o *v5409; // x6
  PartyListViewItem_o *v5410; // x7
  __int64 v5411; // x1
  __int64 v5412; // x2
  __int64 v5413; // x3
  SkillIndividualityMaster_o *v5414; // x20
  int64_t v5415; // x2
  int32_t v5416; // w3
  System_String_o *v5417; // x4
  BattleSetupInfo_o *v5418; // x5
  FollowerInfo_o *v5419; // x6
  PartyListViewItem_o *v5420; // x7
  __int64 v5421; // x1
  __int64 v5422; // x2
  __int64 v5423; // x3
  RestrictionBaseMaster_o *v5424; // x20
  int64_t v5425; // x2
  int32_t v5426; // w3
  System_String_o *v5427; // x4
  BattleSetupInfo_o *v5428; // x5
  FollowerInfo_o *v5429; // x6
  PartyListViewItem_o *v5430; // x7
  __int64 v5431; // x1
  __int64 v5432; // x2
  __int64 v5433; // x3
  RestrictionSlotMaster_o *v5434; // x20
  int64_t v5435; // x2
  int32_t v5436; // w3
  System_String_o *v5437; // x4
  BattleSetupInfo_o *v5438; // x5
  FollowerInfo_o *v5439; // x6
  PartyListViewItem_o *v5440; // x7
  __int64 v5441; // x1
  __int64 v5442; // x2
  __int64 v5443; // x3
  RestrictionSlotDetailMaster_o *v5444; // x20
  int64_t v5445; // x2
  int32_t v5446; // w3
  System_String_o *v5447; // x4
  BattleSetupInfo_o *v5448; // x5
  FollowerInfo_o *v5449; // x6
  PartyListViewItem_o *v5450; // x7
  __int64 v5451; // x1
  __int64 v5452; // x2
  __int64 v5453; // x3
  RestrictionMessageMaster_o *v5454; // x20
  int64_t v5455; // x2
  int32_t v5456; // w3
  System_String_o *v5457; // x4
  BattleSetupInfo_o *v5458; // x5
  FollowerInfo_o *v5459; // x6
  PartyListViewItem_o *v5460; // x7
  __int64 v5461; // x1
  __int64 v5462; // x2
  __int64 v5463; // x3
  RestrictionWholeMaster_o *v5464; // x20
  int64_t v5465; // x2
  int32_t v5466; // w3
  System_String_o *v5467; // x4
  BattleSetupInfo_o *v5468; // x5
  FollowerInfo_o *v5469; // x6
  PartyListViewItem_o *v5470; // x7
  __int64 v5471; // x1
  __int64 v5472; // x2
  __int64 v5473; // x3
  FuncDispMaster_o *v5474; // x20
  int64_t v5475; // x2
  int32_t v5476; // w3
  System_String_o *v5477; // x4
  BattleSetupInfo_o *v5478; // x5
  FollowerInfo_o *v5479; // x6
  PartyListViewItem_o *v5480; // x7
  __int64 v5481; // x1
  __int64 v5482; // x2
  __int64 v5483; // x3
  ClassBoardCommandSpellMaster_o *v5484; // x20
  int64_t v5485; // x2
  int32_t v5486; // w3
  System_String_o *v5487; // x4
  BattleSetupInfo_o *v5488; // x5
  FollowerInfo_o *v5489; // x6
  PartyListViewItem_o *v5490; // x7
  __int64 v5491; // x1
  __int64 v5492; // x2
  __int64 v5493; // x3
  ClassBoardClassMaster_o *v5494; // x20
  int64_t v5495; // x2
  int32_t v5496; // w3
  System_String_o *v5497; // x4
  BattleSetupInfo_o *v5498; // x5
  FollowerInfo_o *v5499; // x6
  PartyListViewItem_o *v5500; // x7
  __int64 v5501; // x1
  __int64 v5502; // x2
  __int64 v5503; // x3
  EventCommandAssistMaster_o *v5504; // x20
  int64_t v5505; // x2
  int32_t v5506; // w3
  System_String_o *v5507; // x4
  BattleSetupInfo_o *v5508; // x5
  FollowerInfo_o *v5509; // x6
  PartyListViewItem_o *v5510; // x7
  __int64 v5511; // x1
  __int64 v5512; // x2
  __int64 v5513; // x3
  EventMissionGroupMaster_o *v5514; // x20
  int64_t v5515; // x2
  int32_t v5516; // w3
  System_String_o *v5517; // x4
  BattleSetupInfo_o *v5518; // x5
  FollowerInfo_o *v5519; // x6
  PartyListViewItem_o *v5520; // x7
  __int64 v5521; // x1
  __int64 v5522; // x2
  __int64 v5523; // x3
  CombineLimitReleaseMaster_o *v5524; // x20
  int64_t v5525; // x2
  int32_t v5526; // w3
  System_String_o *v5527; // x4
  BattleSetupInfo_o *v5528; // x5
  FollowerInfo_o *v5529; // x6
  PartyListViewItem_o *v5530; // x7
  __int64 v5531; // x1
  __int64 v5532; // x2
  __int64 v5533; // x3
  HeelPortraitMaster_o *v5534; // x20
  int64_t v5535; // x2
  int32_t v5536; // w3
  System_String_o *v5537; // x4
  BattleSetupInfo_o *v5538; // x5
  FollowerInfo_o *v5539; // x6
  PartyListViewItem_o *v5540; // x7
  __int64 v5541; // x1
  __int64 v5542; // x2
  __int64 v5543; // x3
  UserHeelPortraitMaster_o *v5544; // x20
  int64_t v5545; // x2
  int32_t v5546; // w3
  System_String_o *v5547; // x4
  BattleSetupInfo_o *v5548; // x5
  FollowerInfo_o *v5549; // x6
  PartyListViewItem_o *v5550; // x7
  __int64 v5551; // x1
  __int64 v5552; // x2
  __int64 v5553; // x3
  TreasureDeviceSequenceWeightMaster_o *v5554; // x20
  int64_t v5555; // x2
  int32_t v5556; // w3
  System_String_o *v5557; // x4
  BattleSetupInfo_o *v5558; // x5
  FollowerInfo_o *v5559; // x6
  PartyListViewItem_o *v5560; // x7
  __int64 v5561; // x1
  __int64 v5562; // x2
  __int64 v5563; // x3
  NpcServantFollowerIndividualityMaster_o *v5564; // x20
  int64_t v5565; // x2
  int32_t v5566; // w3
  System_String_o *v5567; // x4
  BattleSetupInfo_o *v5568; // x5
  FollowerInfo_o *v5569; // x6
  PartyListViewItem_o *v5570; // x7
  __int64 v5571; // x1
  __int64 v5572; // x2
  __int64 v5573; // x3
  GachaExtraGiftMaster_o *v5574; // x20
  int64_t v5575; // x2
  int32_t v5576; // w3
  System_String_o *v5577; // x4
  BattleSetupInfo_o *v5578; // x5
  FollowerInfo_o *v5579; // x6
  PartyListViewItem_o *v5580; // x7
  __int64 v5581; // x1
  __int64 v5582; // x2
  __int64 v5583; // x3
  EventMuralMaster_o *v5584; // x20
  int64_t v5585; // x2
  int32_t v5586; // w3
  System_String_o *v5587; // x4
  BattleSetupInfo_o *v5588; // x5
  FollowerInfo_o *v5589; // x6
  PartyListViewItem_o *v5590; // x7
  __int64 v5591; // x1
  __int64 v5592; // x2
  __int64 v5593; // x3
  ViewWaveEnemyMaster_o *v5594; // x20
  int64_t v5595; // x2
  int32_t v5596; // w3
  System_String_o *v5597; // x4
  BattleSetupInfo_o *v5598; // x5
  FollowerInfo_o *v5599; // x6
  PartyListViewItem_o *v5600; // x7
  __int64 v5601; // x1
  __int64 v5602; // x2
  __int64 v5603; // x3
  BlankEarthSpotNavimenuMaster_o *v5604; // x20
  int64_t v5605; // x2
  int32_t v5606; // w3
  System_String_o *v5607; // x4
  BattleSetupInfo_o *v5608; // x5
  FollowerInfo_o *v5609; // x6
  PartyListViewItem_o *v5610; // x7
  __int64 v5611; // x1
  __int64 v5612; // x2
  __int64 v5613; // x3
  BlankEarthGimmickMaster_o *v5614; // x20
  int64_t v5615; // x2
  int32_t v5616; // w3
  System_String_o *v5617; // x4
  BattleSetupInfo_o *v5618; // x5
  FollowerInfo_o *v5619; // x6
  PartyListViewItem_o *v5620; // x7
  __int64 v5621; // x1
  __int64 v5622; // x2
  __int64 v5623; // x3
  TerminalOverwriteMaster_o *v5624; // x20
  int64_t v5625; // x2
  int32_t v5626; // w3
  System_String_o *v5627; // x4
  BattleSetupInfo_o *v5628; // x5
  FollowerInfo_o *v5629; // x6
  PartyListViewItem_o *v5630; // x7
  __int64 v5631; // x1
  __int64 v5632; // x2
  __int64 v5633; // x3
  UserExchangeSvtMaster_o *v5634; // x20
  int64_t v5635; // x2
  int32_t v5636; // w3
  System_String_o *v5637; // x4
  BattleSetupInfo_o *v5638; // x5
  FollowerInfo_o *v5639; // x6
  PartyListViewItem_o *v5640; // x7
  __int64 v5641; // x1
  __int64 v5642; // x2
  __int64 v5643; // x3
  WarBoardCommonReleaseMaster_o *v5644; // x20
  int64_t v5645; // x2
  int32_t v5646; // w3
  System_String_o *v5647; // x4
  BattleSetupInfo_o *v5648; // x5
  FollowerInfo_o *v5649; // x6
  PartyListViewItem_o *v5650; // x7
  __int64 v5651; // x1
  __int64 v5652; // x2
  __int64 v5653; // x3
  WarBoardEventMaster_o *v5654; // x20
  int64_t v5655; // x2
  int32_t v5656; // w3
  System_String_o *v5657; // x4
  BattleSetupInfo_o *v5658; // x5
  FollowerInfo_o *v5659; // x6
  PartyListViewItem_o *v5660; // x7
  __int64 v5661; // x1
  __int64 v5662; // x2
  __int64 v5663; // x3
  WarBoardEventScriptMaster_o *v5664; // x20
  int64_t v5665; // x2
  int32_t v5666; // w3
  System_String_o *v5667; // x4
  BattleSetupInfo_o *v5668; // x5
  FollowerInfo_o *v5669; // x6
  PartyListViewItem_o *v5670; // x7
  __int64 v5671; // x1
  __int64 v5672; // x2
  __int64 v5673; // x3
  WarBoardStageBossMaster_o *v5674; // x20
  int64_t v5675; // x2
  int32_t v5676; // w3
  System_String_o *v5677; // x4
  BattleSetupInfo_o *v5678; // x5
  FollowerInfo_o *v5679; // x6
  PartyListViewItem_o *v5680; // x7
  __int64 v5681; // x1
  __int64 v5682; // x2
  __int64 v5683; // x3
  WarBoardSquareIndexGroupMaster_o *v5684; // x20
  int64_t v5685; // x2
  int32_t v5686; // w3
  System_String_o *v5687; // x4
  BattleSetupInfo_o *v5688; // x5
  FollowerInfo_o *v5689; // x6
  PartyListViewItem_o *v5690; // x7
  __int64 v5691; // x1
  __int64 v5692; // x2
  __int64 v5693; // x3
  WarBoardActionTrendGroupMaster_o *v5694; // x20
  int64_t v5695; // x2
  int32_t v5696; // w3
  System_String_o *v5697; // x4
  BattleSetupInfo_o *v5698; // x5
  FollowerInfo_o *v5699; // x6
  PartyListViewItem_o *v5700; // x7
  __int64 v5701; // x1
  __int64 v5702; // x2
  __int64 v5703; // x3
  WarBoardRatingOffsetGroupMaster_o *v5704; // x20
  int64_t v5705; // x2
  int32_t v5706; // w3
  System_String_o *v5707; // x4
  BattleSetupInfo_o *v5708; // x5
  FollowerInfo_o *v5709; // x6
  PartyListViewItem_o *v5710; // x7
  __int64 v5711; // x1
  __int64 v5712; // x2
  __int64 v5713; // x3
  WarBoardReinforcementsMaster_o *v5714; // x20
  int64_t v5715; // x2
  int32_t v5716; // w3
  System_String_o *v5717; // x4
  BattleSetupInfo_o *v5718; // x5
  FollowerInfo_o *v5719; // x6
  PartyListViewItem_o *v5720; // x7
  __int64 v5721; // x1
  __int64 v5722; // x2
  __int64 v5723; // x3
  WarBoardStageReinforcementsMaster_o *v5724; // x20
  int64_t v5725; // x2
  int32_t v5726; // w3
  System_String_o *v5727; // x4
  BattleSetupInfo_o *v5728; // x5
  FollowerInfo_o *v5729; // x6
  PartyListViewItem_o *v5730; // x7
  __int64 v5731; // x1
  __int64 v5732; // x2
  __int64 v5733; // x3
  WarBoardFutureActionTrendMaster_o *v5734; // x20
  int64_t v5735; // x2
  int32_t v5736; // w3
  System_String_o *v5737; // x4
  BattleSetupInfo_o *v5738; // x5
  FollowerInfo_o *v5739; // x6
  PartyListViewItem_o *v5740; // x7
  __int64 v5741; // x1
  __int64 v5742; // x2
  __int64 v5743; // x3
  ServantProfilePushMaster_o *v5744; // x20
  int64_t v5745; // x2
  int32_t v5746; // w3
  System_String_o *v5747; // x4
  BattleSetupInfo_o *v5748; // x5
  FollowerInfo_o *v5749; // x6
  PartyListViewItem_o *v5750; // x7
  __int64 v5751; // x1
  __int64 v5752; // x2
  __int64 v5753; // x3
  MapGimmickPathMaster_o *v5754; // x20
  int64_t v5755; // x2
  int32_t v5756; // w3
  System_String_o *v5757; // x4
  BattleSetupInfo_o *v5758; // x5
  FollowerInfo_o *v5759; // x6
  PartyListViewItem_o *v5760; // x7
  __int64 v5761; // x1
  __int64 v5762; // x2
  __int64 v5763; // x3
  MapGimmickPathReleaseMaster_o *v5764; // x20
  int64_t v5765; // x2
  int32_t v5766; // w3
  System_String_o *v5767; // x4
  BattleSetupInfo_o *v5768; // x5
  FollowerInfo_o *v5769; // x6
  PartyListViewItem_o *v5770; // x7
  __int64 v5771; // x1
  __int64 v5772; // x2
  __int64 v5773; // x3
  ServantOverwriteMaster_o *v5774; // x20
  int64_t v5775; // x2
  int32_t v5776; // w3
  System_String_o *v5777; // x4
  BattleSetupInfo_o *v5778; // x5
  FollowerInfo_o *v5779; // x6
  PartyListViewItem_o *v5780; // x7
  __int64 v5781; // x1
  __int64 v5782; // x2
  __int64 v5783; // x3
  IndividualityPolicyMaster_o *v5784; // x20
  int64_t v5785; // x2
  int32_t v5786; // w3
  System_String_o *v5787; // x4
  BattleSetupInfo_o *v5788; // x5
  FollowerInfo_o *v5789; // x6
  PartyListViewItem_o *v5790; // x7
  __int64 v5791; // x1
  __int64 v5792; // x2
  __int64 v5793; // x3
  IndividualityPersonalityMaster_o *v5794; // x20
  int64_t v5795; // x2
  int32_t v5796; // w3
  System_String_o *v5797; // x4
  BattleSetupInfo_o *v5798; // x5
  FollowerInfo_o *v5799; // x6
  PartyListViewItem_o *v5800; // x7
  __int64 v5801; // x1
  __int64 v5802; // x2
  __int64 v5803; // x3
  AttriMaster_o *v5804; // x20
  int64_t v5805; // x2
  int32_t v5806; // w3
  System_String_o *v5807; // x4
  BattleSetupInfo_o *v5808; // x5
  FollowerInfo_o *v5809; // x6
  PartyListViewItem_o *v5810; // x7
  __int64 v5811; // x1
  __int64 v5812; // x2
  __int64 v5813; // x3
  ServantVoicePatternMaster_o *v5814; // x20
  int64_t v5815; // x2
  int32_t v5816; // w3
  System_String_o *v5817; // x4
  BattleSetupInfo_o *v5818; // x5
  FollowerInfo_o *v5819; // x6
  PartyListViewItem_o *v5820; // x7
  __int64 v5821; // x1
  __int64 v5822; // x2
  __int64 v5823; // x3
  UserGameCommonMaster_o *v5824; // x20
  int64_t v5825; // x2
  int32_t v5826; // w3
  System_String_o *v5827; // x4
  BattleSetupInfo_o *v5828; // x5
  FollowerInfo_o *v5829; // x6
  PartyListViewItem_o *v5830; // x7
  __int64 v5831; // x1
  __int64 v5832; // x2
  __int64 v5833; // x3
  ServantPhotoMaster_o *v5834; // x20
  int64_t v5835; // x2
  int32_t v5836; // w3
  System_String_o *v5837; // x4
  BattleSetupInfo_o *v5838; // x5
  FollowerInfo_o *v5839; // x6
  PartyListViewItem_o *v5840; // x7
  __int64 v5841; // x1
  __int64 v5842; // x2
  __int64 v5843; // x3
  MasterPhotoMaster_o *v5844; // x20
  int64_t v5845; // x2
  int32_t v5846; // w3
  System_String_o *v5847; // x4
  BattleSetupInfo_o *v5848; // x5
  FollowerInfo_o *v5849; // x6
  PartyListViewItem_o *v5850; // x7
  __int64 v5851; // x1
  __int64 v5852; // x2
  __int64 v5853; // x3
  WarMessageMaster_o *v5854; // x20
  int64_t v5855; // x2
  int32_t v5856; // w3
  System_String_o *v5857; // x4
  BattleSetupInfo_o *v5858; // x5
  FollowerInfo_o *v5859; // x6
  PartyListViewItem_o *v5860; // x7
  __int64 v5861; // x1
  __int64 v5862; // x2
  __int64 v5863; // x3
  QuestAutoOrganizationAdjustMaster_o *v5864; // x20
  int64_t v5865; // x2
  int32_t v5866; // w3
  System_String_o *v5867; // x4
  BattleSetupInfo_o *v5868; // x5
  FollowerInfo_o *v5869; // x6
  PartyListViewItem_o *v5870; // x7
  __int64 v5871; // x1
  __int64 v5872; // x2
  __int64 v5873; // x3
  ExcludeMotionMaster_o *v5874; // x20
  int64_t v5875; // x2
  int32_t v5876; // w3
  System_String_o *v5877; // x4
  BattleSetupInfo_o *v5878; // x5
  FollowerInfo_o *v5879; // x6
  PartyListViewItem_o *v5880; // x7
  __int64 v5881; // x1
  __int64 v5882; // x2
  __int64 v5883; // x3
  UserInterruptionQuestMaster_o *v5884; // x20
  int64_t v5885; // x2
  int32_t v5886; // w3
  System_String_o *v5887; // x4
  BattleSetupInfo_o *v5888; // x5
  FollowerInfo_o *v5889; // x6
  PartyListViewItem_o *v5890; // x7
  __int64 v5891; // x1
  __int64 v5892; // x2
  __int64 v5893; // x3
  ServantTransformMaster_o *v5894; // x20
  int64_t v5895; // x2
  int32_t v5896; // w3
  System_String_o *v5897; // x4
  BattleSetupInfo_o *v5898; // x5
  FollowerInfo_o *v5899; // x6
  PartyListViewItem_o *v5900; // x7
  __int64 v5901; // x1
  __int64 v5902; // x2
  __int64 v5903; // x3
  MapUpdateScheduleMaster_o *v5904; // x20
  int64_t v5905; // x2
  int32_t v5906; // w3
  System_String_o *v5907; // x4
  BattleSetupInfo_o *v5908; // x5
  FollowerInfo_o *v5909; // x6
  PartyListViewItem_o *v5910; // x7
  __int64 v5911; // x1
  __int64 v5912; // x2
  __int64 v5913; // x3
  QuestPhasePresentMaster_o *v5914; // x20
  int64_t v5915; // x2
  int32_t v5916; // w3
  System_String_o *v5917; // x4
  BattleSetupInfo_o *v5918; // x5
  FollowerInfo_o *v5919; // x6
  PartyListViewItem_o *v5920; // x7
  __int64 v5921; // x1
  __int64 v5922; // x2
  __int64 v5923; // x3
  UserAccountLinkageMaster_o *v5924; // x20
  int64_t v5925; // x2
  int32_t v5926; // w3
  System_String_o *v5927; // x4
  BattleSetupInfo_o *v5928; // x5
  FollowerInfo_o *v5929; // x6
  PartyListViewItem_o *v5930; // x7
  __int64 v5931; // x1
  __int64 v5932; // x2
  __int64 v5933; // x3
  MissionNaviTransitionMaster_o *v5934; // x20
  int64_t v5935; // x2
  int32_t v5936; // w3
  System_String_o *v5937; // x4
  BattleSetupInfo_o *v5938; // x5
  FollowerInfo_o *v5939; // x6
  PartyListViewItem_o *v5940; // x7
  __int64 v5941; // x1
  __int64 v5942; // x2
  __int64 v5943; // x3
  MissionNaviQuestMaster_o *v5944; // x20
  int64_t v5945; // x2
  int32_t v5946; // w3
  System_String_o *v5947; // x4
  BattleSetupInfo_o *v5948; // x5
  FollowerInfo_o *v5949; // x6
  PartyListViewItem_o *v5950; // x7
  __int64 v5951; // x1
  __int64 v5952; // x2
  __int64 v5953; // x3
  EventTradeGoodsMaster_o *v5954; // x20
  int64_t v5955; // x2
  int32_t v5956; // w3
  System_String_o *v5957; // x4
  BattleSetupInfo_o *v5958; // x5
  FollowerInfo_o *v5959; // x6
  PartyListViewItem_o *v5960; // x7
  __int64 v5961; // x1
  __int64 v5962; // x2
  __int64 v5963; // x3
  EventTradeStoreMaster_o *v5964; // x20
  int64_t v5965; // x2
  int32_t v5966; // w3
  System_String_o *v5967; // x4
  BattleSetupInfo_o *v5968; // x5
  FollowerInfo_o *v5969; // x6
  PartyListViewItem_o *v5970; // x7
  __int64 v5971; // x1
  __int64 v5972; // x2
  __int64 v5973; // x3
  EventTradePickupMaster_o *v5974; // x20
  int64_t v5975; // x2
  int32_t v5976; // w3
  System_String_o *v5977; // x4
  BattleSetupInfo_o *v5978; // x5
  FollowerInfo_o *v5979; // x6
  PartyListViewItem_o *v5980; // x7
  __int64 v5981; // x1
  __int64 v5982; // x2
  __int64 v5983; // x3
  UserEventTradeMaster_o *v5984; // x20
  int64_t v5985; // x2
  int32_t v5986; // w3
  System_String_o *v5987; // x4
  BattleSetupInfo_o *v5988; // x5
  FollowerInfo_o *v5989; // x6
  PartyListViewItem_o *v5990; // x7
  __int64 v5991; // x1
  __int64 v5992; // x2
  __int64 v5993; // x3
  PaymentHistoryMaster_o *v5994; // x20
  int64_t v5995; // x2
  int32_t v5996; // w3
  System_String_o *v5997; // x4
  BattleSetupInfo_o *v5998; // x5
  FollowerInfo_o *v5999; // x6
  PartyListViewItem_o *v6000; // x7
  __int64 v6001; // x1
  __int64 v6002; // x2
  __int64 v6003; // x3
  UserExternalPaymentStoneMaster_o *v6004; // x20
  int64_t v6005; // x2
  int32_t v6006; // w3
  System_String_o *v6007; // x4
  BattleSetupInfo_o *v6008; // x5
  FollowerInfo_o *v6009; // x6
  PartyListViewItem_o *v6010; // x7
  __int64 v6011; // x1
  __int64 v6012; // x2
  __int64 v6013; // x3
  QuestPhaseIndividualityMaster_o *v6014; // x20
  int64_t v6015; // x2
  int32_t v6016; // w3
  System_String_o *v6017; // x4
  BattleSetupInfo_o *v6018; // x5
  FollowerInfo_o *v6019; // x6
  PartyListViewItem_o *v6020; // x7
  __int64 v6021; // x1
  __int64 v6022; // x2
  __int64 v6023; // x3
  ViewGachaFeaturedServantMaster_o *v6024; // x20
  int64_t v6025; // x2
  int32_t v6026; // w3
  System_String_o *v6027; // x4
  BattleSetupInfo_o *v6028; // x5
  FollowerInfo_o *v6029; // x6
  PartyListViewItem_o *v6030; // x7
  __int64 v6031; // x1
  __int64 v6032; // x2
  __int64 v6033; // x3
  UserGachaPickupCollateralMaster_o *v6034; // x20
  int64_t v6035; // x2
  int32_t v6036; // w3
  System_String_o *v6037; // x4
  BattleSetupInfo_o *v6038; // x5
  FollowerInfo_o *v6039; // x6
  PartyListViewItem_o *v6040; // x7
  __int64 v6041; // x1
  __int64 v6042; // x2
  __int64 v6043; // x3
  GachaPickupCollateralMaster_o *v6044; // x20
  int64_t v6045; // x2
  int32_t v6046; // w3
  System_String_o *v6047; // x4
  BattleSetupInfo_o *v6048; // x5
  FollowerInfo_o *v6049; // x6
  PartyListViewItem_o *v6050; // x7
  __int64 v6051; // x1
  __int64 v6052; // x2
  __int64 v6053; // x3
  GachaPickupCollateralGroupMaster_o *v6054; // x20
  int64_t v6055; // x2
  int32_t v6056; // w3
  System_String_o *v6057; // x4
  BattleSetupInfo_o *v6058; // x5
  FollowerInfo_o *v6059; // x6
  PartyListViewItem_o *v6060; // x7
  __int64 v6061; // x1
  __int64 v6062; // x2
  __int64 v6063; // x3
  BattlePointMaster_o *v6064; // x20
  int64_t v6065; // x2
  int32_t v6066; // w3
  System_String_o *v6067; // x4
  BattleSetupInfo_o *v6068; // x5
  FollowerInfo_o *v6069; // x6
  PartyListViewItem_o *v6070; // x7
  __int64 v6071; // x1
  __int64 v6072; // x2
  __int64 v6073; // x3
  BattlePointPhaseMaster_o *v6074; // x20
  int64_t v6075; // x2
  int32_t v6076; // w3
  System_String_o *v6077; // x4
  BattleSetupInfo_o *v6078; // x5
  FollowerInfo_o *v6079; // x6
  PartyListViewItem_o *v6080; // x7
  __int64 v6081; // x1
  __int64 v6082; // x2
  __int64 v6083; // x3
  ServantBattlePointMaster_o *v6084; // x20
  int64_t v6085; // x2
  int32_t v6086; // w3
  System_String_o *v6087; // x4
  BattleSetupInfo_o *v6088; // x5
  FollowerInfo_o *v6089; // x6
  PartyListViewItem_o *v6090; // x7
  __int64 v6091; // x1
  __int64 v6092; // x2
  __int64 v6093; // x3
  EffectMovieMaster_o *v6094; // x20
  int64_t v6095; // x2
  int32_t v6096; // w3
  System_String_o *v6097; // x4
  BattleSetupInfo_o *v6098; // x5
  FollowerInfo_o *v6099; // x6
  PartyListViewItem_o *v6100; // x7
  __int64 v6101; // x1
  __int64 v6102; // x2
  __int64 v6103; // x3
  PaymentLimitMaster_o *v6104; // x20
  int64_t v6105; // x2
  int32_t v6106; // w3
  System_String_o *v6107; // x4
  BattleSetupInfo_o *v6108; // x5
  FollowerInfo_o *v6109; // x6
  PartyListViewItem_o *v6110; // x7
  __int64 v6111; // x1
  __int64 v6112; // x2
  __int64 v6113; // x3
  UserPaymentLimitMaster_o *v6114; // x20
  int64_t v6115; // x2
  int32_t v6116; // w3
  System_String_o *v6117; // x4
  BattleSetupInfo_o *v6118; // x5
  FollowerInfo_o *v6119; // x6
  PartyListViewItem_o *v6120; // x7
  __int64 v6121; // x1
  __int64 v6122; // x2
  __int64 v6123; // x3
  RoadmapMaster_o *v6124; // x20
  int64_t v6125; // x2
  int32_t v6126; // w3
  System_String_o *v6127; // x4
  BattleSetupInfo_o *v6128; // x5
  FollowerInfo_o *v6129; // x6
  PartyListViewItem_o *v6130; // x7
  __int64 v6131; // x1
  __int64 v6132; // x2
  __int64 v6133; // x3
  UserRecommendSupportMaster_o *v6134; // x20
  int64_t v6135; // x2
  int32_t v6136; // w3
  System_String_o *v6137; // x4
  BattleSetupInfo_o *v6138; // x5
  FollowerInfo_o *v6139; // x6
  PartyListViewItem_o *v6140; // x7
  __int64 v6141; // x1
  __int64 v6142; // x2
  __int64 v6143; // x3
  RecommendSupportQuestMaster_o *v6144; // x20
  int64_t v6145; // x2
  int32_t v6146; // w3
  System_String_o *v6147; // x4
  BattleSetupInfo_o *v6148; // x5
  FollowerInfo_o *v6149; // x6
  PartyListViewItem_o *v6150; // x7
  __int64 v6151; // x1
  __int64 v6152; // x2
  __int64 v6153; // x3
  RecommendAdviceMessageMaster_o *v6154; // x20
  int64_t v6155; // x2
  int32_t v6156; // w3
  System_String_o *v6157; // x4
  BattleSetupInfo_o *v6158; // x5
  FollowerInfo_o *v6159; // x6
  PartyListViewItem_o *v6160; // x7
  __int64 v6161; // x1
  __int64 v6162; // x2
  __int64 v6163; // x3
  UserRecommendFollowerMaster_o *v6164; // x20
  int64_t v6165; // x2
  int32_t v6166; // w3
  System_String_o *v6167; // x4
  BattleSetupInfo_o *v6168; // x5
  FollowerInfo_o *v6169; // x6
  PartyListViewItem_o *v6170; // x7
  __int64 v6171; // x1
  __int64 v6172; // x2
  __int64 v6173; // x3
  ItemDropEfficiencyMaster_o *v6174; // x20
  int64_t v6175; // x2
  int32_t v6176; // w3
  System_String_o *v6177; // x4
  BattleSetupInfo_o *v6178; // x5
  FollowerInfo_o *v6179; // x6
  PartyListViewItem_o *v6180; // x7
  __int64 v6181; // x1
  __int64 v6182; // x2
  __int64 v6183; // x3
  BlankEarthGimmickAddMaster_o *v6184; // x20
  int64_t v6185; // x2
  int32_t v6186; // w3
  System_String_o *v6187; // x4
  BattleSetupInfo_o *v6188; // x5
  FollowerInfo_o *v6189; // x6
  PartyListViewItem_o *v6190; // x7
  __int64 v6191; // x1
  __int64 v6192; // x2
  __int64 v6193; // x3
  WarReleaseMaster_o *v6194; // x20
  int64_t v6195; // x2
  int32_t v6196; // w3
  System_String_o *v6197; // x4
  BattleSetupInfo_o *v6198; // x5
  FollowerInfo_o *v6199; // x6
  PartyListViewItem_o *v6200; // x7
  __int64 v6201; // x1
  __int64 v6202; // x2
  __int64 v6203; // x3
  SelectBonusBaseMaster_o *v6204; // x20
  int64_t v6205; // x2
  int32_t v6206; // w3
  System_String_o *v6207; // x4
  BattleSetupInfo_o *v6208; // x5
  FollowerInfo_o *v6209; // x6
  PartyListViewItem_o *v6210; // x7
  __int64 v6211; // x1
  __int64 v6212; // x2
  __int64 v6213; // x3
  SelectBonusMaster_o *v6214; // x20
  int64_t v6215; // x2
  int32_t v6216; // w3
  System_String_o *v6217; // x4
  BattleSetupInfo_o *v6218; // x5
  FollowerInfo_o *v6219; // x6
  PartyListViewItem_o *v6220; // x7
  __int64 v6221; // x1
  __int64 v6222; // x2
  __int64 v6223; // x3
  MyroomServantSpecialImageMaster_o *v6224; // x20
  int64_t v6225; // x2
  int32_t v6226; // w3
  System_String_o *v6227; // x4
  BattleSetupInfo_o *v6228; // x5
  FollowerInfo_o *v6229; // x6
  PartyListViewItem_o *v6230; // x7
  __int64 v6231; // x1
  __int64 v6232; // x2
  __int64 v6233; // x3
  ShopResetMaster_o *v6234; // x20
  int64_t v6235; // x2
  int32_t v6236; // w3
  System_String_o *v6237; // x4
  BattleSetupInfo_o *v6238; // x5
  FollowerInfo_o *v6239; // x6
  PartyListViewItem_o *v6240; // x7
  __int64 v6241; // x1
  __int64 v6242; // x2
  __int64 v6243; // x3
  NpcServantDisplayTypeDetailMaster_o *v6244; // x20
  int64_t v6245; // x2
  int32_t v6246; // w3
  System_String_o *v6247; // x4
  BattleSetupInfo_o *v6248; // x5
  FollowerInfo_o *v6249; // x6
  PartyListViewItem_o *v6250; // x7
  __int64 v6251; // x1
  __int64 v6252; // x2
  __int64 v6253; // x3
  FriendshipServantMaster_o *v6254; // x20
  int64_t v6255; // x2
  int32_t v6256; // w3
  System_String_o *v6257; // x4
  BattleSetupInfo_o *v6258; // x5
  FollowerInfo_o *v6259; // x6
  PartyListViewItem_o *v6260; // x7
  __int64 v6261; // x1
  __int64 v6262; // x2
  __int64 v6263; // x3
  GivenNumMaster_o *v6264; // x20
  int64_t v6265; // x2
  int32_t v6266; // w3
  System_String_o *v6267; // x4
  BattleSetupInfo_o *v6268; // x5
  FollowerInfo_o *v6269; // x6
  PartyListViewItem_o *v6270; // x7
  __int64 v6272; // x0

  if ( (byte_4B15D28 & 1) == 0 )
  {
    sub_1BCA7E0(&AccessaryMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&AdCheckPointMaster_TypeInfo, v3, v4);
    sub_1BCA7E0(&AiActMaster_TypeInfo, v5, v6);
    sub_1BCA7E0(&AiFieldMaster_TypeInfo, v7, v8);
    sub_1BCA7E0(&AiMaster_TypeInfo, v9, v10);
    sub_1BCA7E0(&AreaMaster_TypeInfo, v11, v12);
    sub_1BCA7E0(&AssistMaster_TypeInfo, v13, v14);
    sub_1BCA7E0(&AttriMaster_TypeInfo, v15, v16);
    sub_1BCA7E0(&AttriRelationMaster_TypeInfo, v17, v18);
    sub_1BCA7E0(&AuraEffectMaster_TypeInfo, v19, v20);
    sub_1BCA7E0(&AuraEffectPosOverwriteMaster_TypeInfo, v21, v22);
    sub_1BCA7E0(&BankShopMaster_TypeInfo, v23, v24);
    sub_1BCA7E0(&BannerAddMaster_TypeInfo, v25, v26);
    sub_1BCA7E0(&BannerMaster_TypeInfo, v27, v28);
    sub_1BCA7E0(&BattleBgMaster_TypeInfo, v29, v30);
    sub_1BCA7E0(&BattleMasterImageMaster_TypeInfo, v31, v32);
    sub_1BCA7E0(&BattleMaster_TypeInfo, v33, v34);
    sub_1BCA7E0(&BattleMessageGroupMaster_TypeInfo, v35, v36);
    sub_1BCA7E0(&BattleMessageMaster_TypeInfo, v37, v38);
    sub_1BCA7E0(&BattlePointMaster_TypeInfo, v39, v40);
    sub_1BCA7E0(&BattlePointPhaseMaster_TypeInfo, v41, v42);
    sub_1BCA7E0(&BeforeBirthDayMaster_TypeInfo, v43, v44);
    sub_1BCA7E0(&BgmMaster_TypeInfo, v45, v46);
    sub_1BCA7E0(&BgmReleaseMaster_TypeInfo, v47, v48);
    sub_1BCA7E0(&BlankEarthGimmickAddMaster_TypeInfo, v49, v50);
    sub_1BCA7E0(&BlankEarthGimmickMaster_TypeInfo, v51, v52);
    sub_1BCA7E0(&BlankEarthSpotAddMaster_TypeInfo, v53, v54);
    sub_1BCA7E0(&BlankEarthSpotMaster_TypeInfo, v55, v56);
    sub_1BCA7E0(&BlankEarthSpotNavimenuMaster_TypeInfo, v57, v58);
    sub_1BCA7E0(&BoardMessageMaster_TypeInfo, v59, v60);
    sub_1BCA7E0(&BoardMessageReleaseMaster_TypeInfo, v61, v62);
    sub_1BCA7E0(&BoostMaster_TypeInfo, v63, v64);
    sub_1BCA7E0(&BoxGachaBaseDetailMaster_TypeInfo, v65, v66);
    sub_1BCA7E0(&BoxGachaBaseMaster_TypeInfo, v67, v68);
    sub_1BCA7E0(&BoxGachaHistoryMaster_TypeInfo, v69, v70);
    sub_1BCA7E0(&BoxGachaMaster_TypeInfo, v71, v72);
    sub_1BCA7E0(&BoxGachaTalkMaster_TypeInfo, v73, v74);
    sub_1BCA7E0(&BuffConvertMaster_TypeInfo, v75, v76);
    sub_1BCA7E0(&BuffMaster_TypeInfo, v77, v78);
    sub_1BCA7E0(&BuffTypeDetailMaster_TypeInfo, v79, v80);
    sub_1BCA7E0(&CampaignInfoMaster_TypeInfo, v81, v82);
    sub_1BCA7E0(&CardMaster_TypeInfo, v83, v84);
    sub_1BCA7E0(&ClassBoardBaseMaster_TypeInfo, v85, v86);
    sub_1BCA7E0(&ClassBoardClassMaster_TypeInfo, v87, v88);
    sub_1BCA7E0(&ClassBoardCommandSpellMaster_TypeInfo, v89, v90);
    sub_1BCA7E0(&ClassBoardLineMaster_TypeInfo, v91, v92);
    sub_1BCA7E0(&ClassBoardLockMaster_TypeInfo, v93, v94);
    sub_1BCA7E0(&ClassBoardSquareMaster_TypeInfo, v95, v96);
    sub_1BCA7E0(&ClassRelationMaster_TypeInfo, v97, v98);
    sub_1BCA7E0(&ClassRelationOverwriteMaster_TypeInfo, v99, v100);
    sub_1BCA7E0(&ClosedMessageMaster_TypeInfo, v101, v102);
    sub_1BCA7E0(&CombineAppendPassiveSkillMaster_TypeInfo, v103, v104);
    sub_1BCA7E0(&CombineCostumeMaster_TypeInfo, v105, v106);
    sub_1BCA7E0(&CombineLimitGiftMaster_TypeInfo, v107, v108);
    sub_1BCA7E0(&CombineLimitMaster_TypeInfo, v109, v110);
    sub_1BCA7E0(&CombineLimitReleaseMaster_TypeInfo, v111, v112);
    sub_1BCA7E0(&CombineMaster_TypeInfo, v113, v114);
    sub_1BCA7E0(&CombineMaterialMaster_TypeInfo, v115, v116);
    sub_1BCA7E0(&CombineQpMaster_TypeInfo, v117, v118);
    sub_1BCA7E0(&CombineQpSvtEquipMaster_TypeInfo, v119, v120);
    sub_1BCA7E0(&CombineSkillMaster_TypeInfo, v121, v122);
    sub_1BCA7E0(&CombineTdMaster_TypeInfo, v123, v124);
    sub_1BCA7E0(&CommandCardRankParamMaster_TypeInfo, v125, v126);
    sub_1BCA7E0(&CommandCodeCommentMaster_TypeInfo, v127, v128);
    sub_1BCA7E0(&CommandCodeMaster_TypeInfo, v129, v130);
    sub_1BCA7E0(&CommandCodeSkillMaster_TypeInfo, v131, v132);
    sub_1BCA7E0(&CommandCodeSkillReleaseMaster_TypeInfo, v133, v134);
    sub_1BCA7E0(&CommandSpellMaster_TypeInfo, v135, v136);
    sub_1BCA7E0(&CommonConsumeMaster_TypeInfo, v137, v138);
    sub_1BCA7E0(&CommonReleaseMaster_TypeInfo, v139, v140);
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v141, v142);
    sub_1BCA7E0(&CompleteMissionMaster_TypeInfo, v143, v144);
    sub_1BCA7E0(&ConstantLongMaster_TypeInfo, v145, v146);
    sub_1BCA7E0(&ConstantMaster_TypeInfo, v147, v148);
    sub_1BCA7E0(&ConstantStrMaster_TypeInfo, v149, v150);
    sub_1BCA7E0(&CvMaster_TypeInfo, v151, v152);
    sub_1BCA7E0(&DataMasterBase___TypeInfo, v153, v154);
    sub_1BCA7E0(&DialogMessageMaster_TypeInfo, v155, v156);
    sub_1BCA7E0(&EffectMaster_TypeInfo, v157, v158);
    sub_1BCA7E0(&EffectMovieMaster_TypeInfo, v159, v160);
    sub_1BCA7E0(&EnemyMstBattleMaster_TypeInfo, v161, v162);
    sub_1BCA7E0(&EnemyMstMaster_TypeInfo, v163, v164);
    sub_1BCA7E0(&EquipAddMaster_TypeInfo, v165, v166);
    sub_1BCA7E0(&EquipExpMaster_TypeInfo, v167, v168);
    sub_1BCA7E0(&EquipImageMaster_TypeInfo, v169, v170);
    sub_1BCA7E0(&EquipMaster_TypeInfo, v171, v172);
    sub_1BCA7E0(&EquipSkillMaster_TypeInfo, v173, v174);
    sub_1BCA7E0(&EventAddMaster_TypeInfo, v175, v176);
    sub_1BCA7E0(&EventBoardGameCellMaster_TypeInfo, v177, v178);
    sub_1BCA7E0(&EventBoardGameTokenMaster_TypeInfo, v179, v180);
    sub_1BCA7E0(&EventBoardGameTokenRewardMaster_TypeInfo, v181, v182);
    sub_1BCA7E0(&EventBonusFilterGroupInfoMaster_TypeInfo, v183, v184);
    sub_1BCA7E0(&EventBonusFilterGroupMemberMaster_TypeInfo, v185, v186);
    sub_1BCA7E0(&EventBonusFilterMaster_TypeInfo, v187, v188);
    sub_1BCA7E0(&EventBoostItemUsedMaster_TypeInfo, v189, v190);
    sub_1BCA7E0(&EventBossStatusUiMaster_TypeInfo, v191, v192);
    sub_1BCA7E0(&EventBuddyPointMaster_TypeInfo, v193, v194);
    sub_1BCA7E0(&EventBulletinBoardMaster_TypeInfo, v195, v196);
    sub_1BCA7E0(&EventBulletinBoardReleaseMaster_TypeInfo, v197, v198);
    sub_1BCA7E0(&EventCampaignMaster_TypeInfo, v199, v200);
    sub_1BCA7E0(&EventCampaignReleaseMaster_TypeInfo, v201, v202);
    sub_1BCA7E0(&EventCombineCostumeMaster_TypeInfo, v203, v204);
    sub_1BCA7E0(&EventCombineMaster_TypeInfo, v205, v206);
    sub_1BCA7E0(&EventCommandAssistMaster_TypeInfo, v207, v208);
    sub_1BCA7E0(&EventConquestRewardMaster_TypeInfo, v209, v210);
    sub_1BCA7E0(&EventCooltimeRewardMaster_TypeInfo, v211, v212);
    sub_1BCA7E0(&EventDataLostBattleMaster_TypeInfo, v213, v214);
    sub_1BCA7E0(&EventDataLostBattleResetMaster_TypeInfo, v215, v216);
    sub_1BCA7E0(&EventDetailMaster_TypeInfo, v217, v218);
    sub_1BCA7E0(&EventDiggingBlockMaster_TypeInfo, v219, v220);
    sub_1BCA7E0(&EventDiggingMaster_TypeInfo, v221, v222);
    sub_1BCA7E0(&EventDiggingRewardMaster_TypeInfo, v223, v224);
    sub_1BCA7E0(&EventEquipSkillReleaseMaster_TypeInfo, v225, v226);
    sub_1BCA7E0(&EventExpeditionMaster_TypeInfo, v227, v228);
    sub_1BCA7E0(&EventExpeditionPieceMaster_TypeInfo, v229, v230);
    sub_1BCA7E0(&EventFactoryMaster_TypeInfo, v231, v232);
    sub_1BCA7E0(&EventFatigueRecoveryMaster_TypeInfo, v233, v234);
    sub_1BCA7E0(&EventFilterMaster_TypeInfo, v235, v236);
    sub_1BCA7E0(&EventFortificationDetailMaster_TypeInfo, v237, v238);
    sub_1BCA7E0(&EventFortificationMaster_TypeInfo, v239, v240);
    sub_1BCA7E0(&EventFortificationSvtMaster_TypeInfo, v241, v242);
    sub_1BCA7E0(&EventGroupMaster_TypeInfo, v243, v244);
    sub_1BCA7E0(&EventItemDisplayGroupMaster_TypeInfo, v245, v246);
    sub_1BCA7E0(&EventItemDisplayMaster_TypeInfo, v247, v248);
    sub_1BCA7E0(&EventItemDisplayReleaseMaster_TypeInfo, v249, v250);
    sub_1BCA7E0(&EventLocationCampaignMaster_TypeInfo, v251, v252);
    sub_1BCA7E0(&EventMaster_TypeInfo, v253, v254);
    sub_1BCA7E0(&EventMissionActionAddMaster_TypeInfo, v255, v256);
    sub_1BCA7E0(&EventMissionActionMaster_TypeInfo, v257, v258);
    sub_1BCA7E0(&EventMissionAddMaster_TypeInfo, v259, v260);
    sub_1BCA7E0(&EventMissionCondDetailMaster_TypeInfo, v261, v262);
    sub_1BCA7E0(&EventMissionConditionMaster_TypeInfo, v263, v264);
    sub_1BCA7E0(&EventMissionGroupMaster_TypeInfo, v265, v266);
    sub_1BCA7E0(&EventMissionMaster_TypeInfo, v267, v268);
    sub_1BCA7E0(&EventMuralMaster_TypeInfo, v269, v270);
    sub_1BCA7E0(&EventPanelMapDetailMaster_TypeInfo, v271, v272);
    sub_1BCA7E0(&EventPanelMapMaster_TypeInfo, v273, v274);
    sub_1BCA7E0(&EventPanelScanMaster_TypeInfo, v275, v276);
    sub_1BCA7E0(&EventPanelSpotMaster_TypeInfo, v277, v278);
    sub_1BCA7E0(&EventPointActivityMaster_TypeInfo, v279, v280);
    sub_1BCA7E0(&EventPointBuffMaster_TypeInfo, v281, v282);
    sub_1BCA7E0(&EventPointGroupAddMaster_TypeInfo, v283, v284);
    sub_1BCA7E0(&EventPointGroupMaster_TypeInfo, v285, v286);
    sub_1BCA7E0(&EventPointMaster_TypeInfo, v287, v288);
    sub_1BCA7E0(&EventPointUpperMaster_TypeInfo, v289, v290);
    sub_1BCA7E0(&EventPointUpperReleaseMaster_TypeInfo, v291, v292);
    sub_1BCA7E0(&EventProgressValueMaster_TypeInfo, v293, v294);
    sub_1BCA7E0(&EventQuestCooltimeMaster_TypeInfo, v295, v296);
    sub_1BCA7E0(&EventQuestMaster_TypeInfo, v297, v298);
    sub_1BCA7E0(&EventRaceMaster_TypeInfo, v299, v300);
    sub_1BCA7E0(&EventRaceResultMaster_TypeInfo, v301, v302);
    sub_1BCA7E0(&EventRaidMaster_TypeInfo, v303, v304);
    sub_1BCA7E0(&EventRandomMissionMaster_TypeInfo, v305, v306);
    sub_1BCA7E0(&EventRecipeGiftMaster_TypeInfo, v307, v308);
    sub_1BCA7E0(&EventRecipeMaster_TypeInfo, v309, v310);
    sub_1BCA7E0(&EventRewardBgMaster_TypeInfo, v311, v312);
    sub_1BCA7E0(&EventRewardExtraMaster_TypeInfo, v313, v314);
    sub_1BCA7E0(&EventRewardGuideReleaseMaster_TypeInfo, v315, v316);
    sub_1BCA7E0(&EventRewardMaster_TypeInfo, v317, v318);
    sub_1BCA7E0(&EventRewardSceneMaster_TypeInfo, v319, v320);
    sub_1BCA7E0(&EventRewardSceneReleaseMaster_TypeInfo, v321, v322);
    sub_1BCA7E0(&EventRewardSetMaster_TypeInfo, v323, v324);
    sub_1BCA7E0(&EventScriptMaster_TypeInfo, v325, v326);
    sub_1BCA7E0(&EventScriptReleaseMaster_TypeInfo, v327, v328);
    sub_1BCA7E0(&EventServantFatigueMaster_TypeInfo, v329, v330);
    sub_1BCA7E0(&EventServantMaster_TypeInfo, v331, v332);
    sub_1BCA7E0(&EventServantPointRankMaster_TypeInfo, v333, v334);
    sub_1BCA7E0(&EventStatusMaster_TypeInfo, v335, v336);
    sub_1BCA7E0(&EventStatusQuestMaster_TypeInfo, v337, v338);
    sub_1BCA7E0(&EventSuperBossMaster_TypeInfo, v339, v340);
    sub_1BCA7E0(&EventTowerMaster_TypeInfo, v341, v342);
    sub_1BCA7E0(&EventTowerRewardMaster_TypeInfo, v343, v344);
    sub_1BCA7E0(&EventTradeGoodsMaster_TypeInfo, v345, v346);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v347, v348);
    sub_1BCA7E0(&EventTradeStoreMaster_TypeInfo, v349, v350);
    sub_1BCA7E0(&EventTutorialCondMaster_TypeInfo, v351, v352);
    sub_1BCA7E0(&EventTutorialMaster_TypeInfo, v353, v354);
    sub_1BCA7E0(&EventUiMaster_TypeInfo, v355, v356);
    sub_1BCA7E0(&EventUiReleaseMaster_TypeInfo, v357, v358);
    sub_1BCA7E0(&EventUiValueMaster_TypeInfo, v359, v360);
    sub_1BCA7E0(&EventVoicePlayMaster_TypeInfo, v361, v362);
    sub_1BCA7E0(&ExcludeMotionMaster_TypeInfo, v363, v364);
    sub_1BCA7E0(&FieldMotionMaster_TypeInfo, v365, v366);
    sub_1BCA7E0(&FriendshipMaster_TypeInfo, v367, v368);
    sub_1BCA7E0(&FriendshipQuestDialogInfoMaster_TypeInfo, v369, v370);
    sub_1BCA7E0(&FriendshipServantMaster_TypeInfo, v371, v372);
    sub_1BCA7E0(&FuncDispMaster_TypeInfo, v373, v374);
    sub_1BCA7E0(&FuncTypeDetailMaster_TypeInfo, v375, v376);
    sub_1BCA7E0(&FunctionCategoryMaster_TypeInfo, v377, v378);
    sub_1BCA7E0(&FunctionGroupMaster_TypeInfo, v379, v380);
    sub_1BCA7E0(&FunctionMaster_TypeInfo, v381, v382);
    sub_1BCA7E0(&GachaAppendMaster_TypeInfo, v383, v384);
    sub_1BCA7E0(&GachaBehaviorMaster_TypeInfo, v385, v386);
    sub_1BCA7E0(&GachaBonusSelectLineupMaster_TypeInfo, v387, v388);
    sub_1BCA7E0(&GachaBonusSelectMaster_TypeInfo, v389, v390);
    sub_1BCA7E0(&GachaDetailMaster_TypeInfo, v391, v392);
    sub_1BCA7E0(&GachaExtraGiftMaster_TypeInfo, v393, v394);
    sub_1BCA7E0(&GachaGroupMaster_TypeInfo, v395, v396);
    sub_1BCA7E0(&GachaImageMaster_TypeInfo, v397, v398);
    sub_1BCA7E0(&GachaMaster_TypeInfo, v399, v400);
    sub_1BCA7E0(&GachaPickupCollateralGroupMaster_TypeInfo, v401, v402);
    sub_1BCA7E0(&GachaPickupCollateralMaster_TypeInfo, v403, v404);
    sub_1BCA7E0(&GachaReleaseMaster_TypeInfo, v405, v406);
    sub_1BCA7E0(&GachaStoryAdjustMaster_TypeInfo, v407, v408);
    sub_1BCA7E0(&GachaSubMaster_TypeInfo, v409, v410);
    sub_1BCA7E0(&GachaTicketMaster_TypeInfo, v411, v412);
    sub_1BCA7E0(&GiftAddMaster_TypeInfo, v413, v414);
    sub_1BCA7E0(&GiftDetailMaster_TypeInfo, v415, v416);
    sub_1BCA7E0(&GiftMaster_TypeInfo, v417, v418);
    sub_1BCA7E0(&GivenNumMaster_TypeInfo, v419, v420);
    sub_1BCA7E0(&GuideMaster_TypeInfo, v421, v422);
    sub_1BCA7E0(&HeelPortraitMaster_TypeInfo, v423, v424);
    sub_1BCA7E0(&IllustratorMaster_TypeInfo, v425, v426);
    sub_1BCA7E0(&IndividualityPersonalityMaster_TypeInfo, v427, v428);
    sub_1BCA7E0(&IndividualityPolicyMaster_TypeInfo, v429, v430);
    sub_1BCA7E0(&ItemDropEfficiencyMaster_TypeInfo, v431, v432);
    sub_1BCA7E0(&ItemMaster_TypeInfo, v433, v434);
    sub_1BCA7E0(&ItemSelectMaster_TypeInfo, v435, v436);
    sub_1BCA7E0(&LoginQuestMaster_TypeInfo, v437, v438);
    sub_1BCA7E0(&MapButtonMaster_TypeInfo, v439, v440);
    sub_1BCA7E0(&MapCondMaster_TypeInfo, v441, v442);
    sub_1BCA7E0(&MapGimmickLayerMaster_TypeInfo, v443, v444);
    sub_1BCA7E0(&MapGimmickMaster_TypeInfo, v445, v446);
    sub_1BCA7E0(&MapGimmickPathMaster_TypeInfo, v447, v448);
    sub_1BCA7E0(&MapGimmickPathReleaseMaster_TypeInfo, v449, v450);
    sub_1BCA7E0(&MapGimmickReleaseMaster_TypeInfo, v451, v452);
    sub_1BCA7E0(&MapLayerMaster_TypeInfo, v453, v454);
    sub_1BCA7E0(&MapMaster_TypeInfo, v455, v456);
    sub_1BCA7E0(&MapUpdateScheduleMaster_TypeInfo, v457, v458);
    sub_1BCA7E0(&MasterPhotoMaster_TypeInfo, v459, v460);
    sub_1BCA7E0(&MaterialFolderMaster_TypeInfo, v461, v462);
    sub_1BCA7E0(&MissionNaviQuestMaster_TypeInfo, v463, v464);
    sub_1BCA7E0(&MissionNaviTransitionMaster_TypeInfo, v465, v466);
    sub_1BCA7E0(&MstMissionDisplayInfoMaster_TypeInfo, v467, v468);
    sub_1BCA7E0(&MstMissionMaster_TypeInfo, v469, v470);
    sub_1BCA7E0(&MyRoomAddMaster_TypeInfo, v471, v472);
    sub_1BCA7E0(&MyroomServantSpecialImageMaster_TypeInfo, v473, v474);
    sub_1BCA7E0(&NewsMaster_TypeInfo, v475, v476);
    sub_1BCA7E0(&NotEndEventMissionFixMaster_TypeInfo, v477, v478);
    sub_1BCA7E0(&NpcFollowerMaster_TypeInfo, v479, v480);
    sub_1BCA7E0(&NpcFollowerReleaseMaster_TypeInfo, v481, v482);
    sub_1BCA7E0(&NpcServantDisplayTypeDetailMaster_TypeInfo, v483, v484);
    sub_1BCA7E0(&NpcServantEquipMaster_TypeInfo, v485, v486);
    sub_1BCA7E0(&NpcServantFollowerIndividualityMaster_TypeInfo, v487, v488);
    sub_1BCA7E0(&NpcServantFollowerMaster_TypeInfo, v489, v490);
    sub_1BCA7E0(&OpeningMovieMaster_TypeInfo, v491, v492);
    sub_1BCA7E0(&OtherUserGameMaster_TypeInfo, v493, v494);
    sub_1BCA7E0(&PartialMaintenanceMaster_TypeInfo, v495, v496);
    sub_1BCA7E0(&PaymentHistoryMaster_TypeInfo, v497, v498);
    sub_1BCA7E0(&PaymentLimitMaster_TypeInfo, v499, v500);
    sub_1BCA7E0(&PickupUserFollowerMaster_TypeInfo, v501, v502);
    sub_1BCA7E0(&PrivilegeMaster_TypeInfo, v503, v504);
    sub_1BCA7E0(&QuestAddMaster_TypeInfo, v505, v506);
    sub_1BCA7E0(&QuestAutoOrganizationAdjustMaster_TypeInfo, v507, v508);
    sub_1BCA7E0(&QuestBehaviorMaster_TypeInfo, v509, v510);
    sub_1BCA7E0(&QuestConsumeItemMaster_TypeInfo, v511, v512);
    sub_1BCA7E0(&QuestDateRangeMaster_TypeInfo, v513, v514);
    sub_1BCA7E0(&QuestGroupMaster_TypeInfo, v515, v516);
    sub_1BCA7E0(&QuestHintMaster_TypeInfo, v517, v518);
    sub_1BCA7E0(&QuestMaster_TypeInfo, v519, v520);
    sub_1BCA7E0(&QuestMessageMaster_TypeInfo, v521, v522);
    sub_1BCA7E0(&QuestPhaseDetailAddMaster_TypeInfo, v523, v524);
    sub_1BCA7E0(&QuestPhaseDetailMaster_TypeInfo, v525, v526);
    sub_1BCA7E0(&QuestPhaseIndividualityMaster_TypeInfo, v527, v528);
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, v529, v530);
    sub_1BCA7E0(&QuestPhasePresentMaster_TypeInfo, v531, v532);
    sub_1BCA7E0(&QuestPickupMaster_TypeInfo, v533, v534);
    sub_1BCA7E0(&QuestRacePointMaster_TypeInfo, v535, v536);
    sub_1BCA7E0(&QuestRandomGroupMaster_TypeInfo, v537, v538);
    sub_1BCA7E0(&QuestReleaseMaster_TypeInfo, v539, v540);
    sub_1BCA7E0(&QuestReleaseOverwriteMaster_TypeInfo, v541, v542);
    sub_1BCA7E0(&QuestResetMaster_TypeInfo, v543, v544);
    sub_1BCA7E0(&QuestRestrictionInfoMaster_TypeInfo, v545, v546);
    sub_1BCA7E0(&QuestRestrictionMaster_TypeInfo, v547, v548);
    sub_1BCA7E0(&QuestScriptBranchMaterialMaster_TypeInfo, v549, v550);
    sub_1BCA7E0(&QuestScriptMaster_TypeInfo, v551, v552);
    sub_1BCA7E0(&QuestScriptMaterialNextMaster_TypeInfo, v553, v554);
    sub_1BCA7E0(&QuestScriptMaterialOverwriteMaster_TypeInfo, v555, v556);
    sub_1BCA7E0(&QuestScriptReleaseMaster_TypeInfo, v557, v558);
    sub_1BCA7E0(&QuestSpotReleaseMaster_TypeInfo, v559, v560);
    sub_1BCA7E0(&RecommendAdviceMessageMaster_TypeInfo, v561, v562);
    sub_1BCA7E0(&RecommendSupportQuestMaster_TypeInfo, v563, v564);
    sub_1BCA7E0(&RecoverMaster_TypeInfo, v565, v566);
    sub_1BCA7E0(&ReprintStageMaster_TypeInfo, v567, v568);
    sub_1BCA7E0(&RestrictionBaseMaster_TypeInfo, v569, v570);
    sub_1BCA7E0(&RestrictionMaster_TypeInfo, v571, v572);
    sub_1BCA7E0(&RestrictionMessageMaster_TypeInfo, v573, v574);
    sub_1BCA7E0(&RestrictionSlotDetailMaster_TypeInfo, v575, v576);
    sub_1BCA7E0(&RestrictionSlotMaster_TypeInfo, v577, v578);
    sub_1BCA7E0(&RestrictionWholeMaster_TypeInfo, v579, v580);
    sub_1BCA7E0(&RoadmapMaster_TypeInfo, v581, v582);
    sub_1BCA7E0(&SelectBonusBaseMaster_TypeInfo, v583, v584);
    sub_1BCA7E0(&SelectBonusMaster_TypeInfo, v585, v586);
    sub_1BCA7E0(&ServantAddMaster_TypeInfo, v587, v588);
    sub_1BCA7E0(&ServantAnimationOverwriteMaster_TypeInfo, v589, v590);
    sub_1BCA7E0(&ServantAppendPassiveSkillMaster_TypeInfo, v591, v592);
    sub_1BCA7E0(&ServantBattlePointMaster_TypeInfo, v593, v594);
    sub_1BCA7E0(&ServantCardAddMaster_TypeInfo, v595, v596);
    sub_1BCA7E0(&ServantCardMaster_TypeInfo, v597, v598);
    sub_1BCA7E0(&ServantChangeMaster_TypeInfo, v599, v600);
    sub_1BCA7E0(&ServantClassMaster_TypeInfo, v601, v602);
    sub_1BCA7E0(&ServantCollectionMaster_TypeInfo, v603, v604);
    sub_1BCA7E0(&ServantCommandCodeUnlockMaster_TypeInfo, v605, v606);
    sub_1BCA7E0(&ServantCommentAddMaster_TypeInfo, v607, v608);
    sub_1BCA7E0(&ServantCommentMaster_TypeInfo, v609, v610);
    sub_1BCA7E0(&ServantCostumeMaster_TypeInfo, v611, v612);
    sub_1BCA7E0(&ServantCostumeReleaseMaster_TypeInfo, v613, v614);
    sub_1BCA7E0(&ServantExceedMaster_TypeInfo, v615, v616);
    sub_1BCA7E0(&ServantExpMaster_TypeInfo, v617, v618);
    sub_1BCA7E0(&ServantFilterMaster_TypeInfo, v619, v620);
    sub_1BCA7E0(&ServantFlagMaster_TypeInfo, v621, v622);
    sub_1BCA7E0(&ServantFlagReleaseMaster_TypeInfo, v623, v624);
    sub_1BCA7E0(&ServantGroupMaster_TypeInfo, v625, v626);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v627, v628);
    sub_1BCA7E0(&ServantLimitAddMaster_TypeInfo, v629, v630);
    sub_1BCA7E0(&ServantLimitImageMaster_TypeInfo, v631, v632);
    sub_1BCA7E0(&ServantLimitMaster_TypeInfo, v633, v634);
    sub_1BCA7E0(&ServantLimitSpoilerProtectionMaster_TypeInfo, v635, v636);
    sub_1BCA7E0(&ServantLvDetailMaster_TypeInfo, v637, v638);
    sub_1BCA7E0(&ServantMaster_TypeInfo, v639, v640);
    sub_1BCA7E0(&ServantMaterialFolderMaster_TypeInfo, v641, v642);
    sub_1BCA7E0(&ServantOverwriteMaster_TypeInfo, v643, v644);
    sub_1BCA7E0(&ServantPassiveSkillMaster_TypeInfo, v645, v646);
    sub_1BCA7E0(&ServantPassiveSkillReleaseMaster_TypeInfo, v647, v648);
    sub_1BCA7E0(&ServantPhotoMaster_TypeInfo, v649, v650);
    sub_1BCA7E0(&ServantProfileMaster_TypeInfo, v651, v652);
    sub_1BCA7E0(&ServantProfilePushMaster_TypeInfo, v653, v654);
    sub_1BCA7E0(&ServantRarityMaster_TypeInfo, v655, v656);
    sub_1BCA7E0(&ServantScriptAddMaster_TypeInfo, v657, v658);
    sub_1BCA7E0(&ServantScriptMaster_TypeInfo, v659, v660);
    sub_1BCA7E0(&ServantScriptMultipleMaster_TypeInfo, v661, v662);
    sub_1BCA7E0(&ServantSkillMaster_TypeInfo, v663, v664);
    sub_1BCA7E0(&ServantSkillReleaseMaster_TypeInfo, v665, v666);
    sub_1BCA7E0(&ServantTransformMaster_TypeInfo, v667, v668);
    sub_1BCA7E0(&ServantTreasureDeviceAddMaster_TypeInfo, v669, v670);
    sub_1BCA7E0(&ServantTreasureDeviceDamageMaster_TypeInfo, v671, v672);
    sub_1BCA7E0(&ServantTreasureDeviceReleaseMaster_TypeInfo, v673, v674);
    sub_1BCA7E0(&ServantTreasureDvcMaster_TypeInfo, v675, v676);
    sub_1BCA7E0(&ServantVoiceMaster_TypeInfo, v677, v678);
    sub_1BCA7E0(&ServantVoicePatternMaster_TypeInfo, v679, v680);
    sub_1BCA7E0(&ServantVoiceRelationMaster_TypeInfo, v681, v682);
    sub_1BCA7E0(&SetItemMaster_TypeInfo, v683, v684);
    sub_1BCA7E0(&ShopActionMaster_TypeInfo, v685, v686);
    sub_1BCA7E0(&ShopDetailMaster_TypeInfo, v687, v688);
    sub_1BCA7E0(&ShopGroupMaster_TypeInfo, v689, v690);
    sub_1BCA7E0(&ShopMaster_TypeInfo, v691, v692);
    sub_1BCA7E0(&ShopReleaseMaster_TypeInfo, v693, v694);
    sub_1BCA7E0(&ShopResetMaster_TypeInfo, v695, v696);
    sub_1BCA7E0(&ShopScriptMaster_TypeInfo, v697, v698);
    sub_1BCA7E0(&SkillAddMaster_TypeInfo, v699, v700);
    sub_1BCA7E0(&SkillDetailMaster_TypeInfo, v701, v702);
    sub_1BCA7E0(&SkillGroupMaster_TypeInfo, v703, v704);
    sub_1BCA7E0(&SkillGroupOverwriteMaster_TypeInfo, v705, v706);
    sub_1BCA7E0(&SkillIndividualityMaster_TypeInfo, v707, v708);
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, v709, v710);
    sub_1BCA7E0(&SkillMaster_TypeInfo, v711, v712);
    sub_1BCA7E0(&SpotAddMaster_TypeInfo, v713, v714);
    sub_1BCA7E0(&SpotImageMaster_TypeInfo, v715, v716);
    sub_1BCA7E0(&SpotLayerMaster_TypeInfo, v717, v718);
    sub_1BCA7E0(&SpotMaster_TypeInfo, v719, v720);
    sub_1BCA7E0(&SpotPathMaster_TypeInfo, v721, v722);
    sub_1BCA7E0(&SpotRoadMaster_TypeInfo, v723, v724);
    sub_1BCA7E0(&StageMaster_TypeInfo, v725, v726);
    sub_1BCA7E0(&StatusEffectPosOverwriteMaster_TypeInfo, v727, v728);
    sub_1BCA7E0(&StoneShopMaster_TypeInfo, v729, v730);
    sub_1BCA7E0(&SubEquipMaster_TypeInfo, v731, v732);
    sub_1BCA7E0(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v733, v734);
    sub_1BCA7E0(&SvtCoinMaster_TypeInfo, v735, v736);
    sub_1BCA7E0(&SvtMaterialTdMaster_TypeInfo, v737, v738);
    sub_1BCA7E0(&SvtMultiPortraitMaster_TypeInfo, v739, v740);
    sub_1BCA7E0(&TblFriendMaster_TypeInfo, v741, v742);
    sub_1BCA7E0(&TblUserMaster_TypeInfo, v743, v744);
    sub_1BCA7E0(&TelopMaster_TypeInfo, v745, v746);
    sub_1BCA7E0(&TerminalOverwriteMaster_TypeInfo, v747, v748);
    sub_1BCA7E0(&TipsBattleMaster_TypeInfo, v749, v750);
    sub_1BCA7E0(&TotalBoxGachaMaster_TypeInfo, v751, v752);
    sub_1BCA7E0(&TotalEventPointMaster_TypeInfo, v753, v754);
    sub_1BCA7E0(&TotalEventRaceMaster_TypeInfo, v755, v756);
    sub_1BCA7E0(&TotalEventRaidMaster_TypeInfo, v757, v758);
    sub_1BCA7E0(&TotalLoginMaster_TypeInfo, v759, v760);
    sub_1BCA7E0(&TreasureBoxGiftMaster_TypeInfo, v761, v762);
    sub_1BCA7E0(&TreasureBoxMaster_TypeInfo, v763, v764);
    sub_1BCA7E0(&TreasureBoxTalkMaster_TypeInfo, v765, v766);
    sub_1BCA7E0(&TreasureDeviceSequenceWeightMaster_TypeInfo, v767, v768);
    sub_1BCA7E0(&TreasureDvcDetailMaster_TypeInfo, v769, v770);
    sub_1BCA7E0(&TreasureDvcLvMaster_TypeInfo, v771, v772);
    sub_1BCA7E0(&TreasureDvcMaster_TypeInfo, v773, v774);
    sub_1BCA7E0(&UpdateProfileDialogInfoMaster_TypeInfo, v775, v776);
    sub_1BCA7E0(&UserAccessaryMaster_TypeInfo, v777, v778);
    sub_1BCA7E0(&UserAccountLinkageMaster_TypeInfo, v779, v780);
    sub_1BCA7E0(&UserBlacklistMaster_TypeInfo, v781, v782);
    sub_1BCA7E0(&UserBoxGachaMaster_TypeInfo, v783, v784);
    sub_1BCA7E0(&UserClassBoardSquareMaster_TypeInfo, v785, v786);
    sub_1BCA7E0(&UserCoinRoomMaster_TypeInfo, v787, v788);
    sub_1BCA7E0(&UserCombineExpMaster_TypeInfo, v789, v790);
    sub_1BCA7E0(&UserCommandCodeCollectionMaster_TypeInfo, v791, v792);
    sub_1BCA7E0(&UserCommandCodeMaster_TypeInfo, v793, v794);
    sub_1BCA7E0(&UserContinueMaster_TypeInfo, v795, v796);
    sub_1BCA7E0(&UserDeckMaster_TypeInfo, v797, v798);
    sub_1BCA7E0(&UserDeleteReservationMaster_TypeInfo, v799, v800);
    sub_1BCA7E0(&UserEquipMaster_TypeInfo, v801, v802);
    sub_1BCA7E0(&UserEventAlloutBattleMaster_TypeInfo, v803, v804);
    sub_1BCA7E0(&UserEventBoardGameTokenMaster_TypeInfo, v805, v806);
    sub_1BCA7E0(&UserEventCooltimeRewardMaster_TypeInfo, v807, v808);
    sub_1BCA7E0(&UserEventDataLostMaster_TypeInfo, v809, v810);
    sub_1BCA7E0(&UserEventDeckMaster_TypeInfo, v811, v812);
    sub_1BCA7E0(&UserEventDiggingMaster_TypeInfo, v813, v814);
    sub_1BCA7E0(&UserEventExpeditionMaster_TypeInfo, v815, v816);
    sub_1BCA7E0(&UserEventFortificationMaster_TypeInfo, v817, v818);
    sub_1BCA7E0(&UserEventMapMaster_TypeInfo, v819, v820);
    sub_1BCA7E0(&UserEventMaster_TypeInfo, v821, v822);
    sub_1BCA7E0(&UserEventMissionCondDetailMaster_TypeInfo, v823, v824);
    sub_1BCA7E0(&UserEventMissionFixMaster_TypeInfo, v825, v826);
    sub_1BCA7E0(&UserEventMissionMaster_TypeInfo, v827, v828);
    sub_1BCA7E0(&UserEventPointMaster_TypeInfo, v829, v830);
    sub_1BCA7E0(&UserEventQuestCooltimeMaster_TypeInfo, v831, v832);
    sub_1BCA7E0(&UserEventRaceMaster_TypeInfo, v833, v834);
    sub_1BCA7E0(&UserEventRaidMaster_TypeInfo, v835, v836);
    sub_1BCA7E0(&UserEventRandomMissionMaster_TypeInfo, v837, v838);
    sub_1BCA7E0(&UserEventServantFatigueMaster_TypeInfo, v839, v840);
    sub_1BCA7E0(&UserEventServantPointMaster_TypeInfo, v841, v842);
    sub_1BCA7E0(&UserEventSpotMaster_TypeInfo, v843, v844);
    sub_1BCA7E0(&UserEventTradeMaster_TypeInfo, v845, v846);
    sub_1BCA7E0(&UserExchangeSvtMaster_TypeInfo, v847, v848);
    sub_1BCA7E0(&UserExpMaster_TypeInfo, v849, v850);
    sub_1BCA7E0(&UserExternalPaymentStoneMaster_TypeInfo, v851, v852);
    sub_1BCA7E0(&UserFollowMaster_TypeInfo, v853, v854);
    sub_1BCA7E0(&UserFollowerMaster_TypeInfo, v855, v856);
    sub_1BCA7E0(&UserFormationMaster_TypeInfo, v857, v858);
    sub_1BCA7E0(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v859, v860);
    sub_1BCA7E0(&UserFriendRequestHistoryMaster_TypeInfo, v861, v862);
    sub_1BCA7E0(&UserGachaDrawLogMaster_TypeInfo, v863, v864);
    sub_1BCA7E0(&UserGachaExtraCountMaster_TypeInfo, v865, v866);
    sub_1BCA7E0(&UserGachaHistoryMaster_TypeInfo, v867, v868);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v869, v870);
    sub_1BCA7E0(&UserGachaPickupCollateralMaster_TypeInfo, v871, v872);
    sub_1BCA7E0(&UserGameCommonMaster_TypeInfo, v873, v874);
    sub_1BCA7E0(&UserGameMaster_TypeInfo, v875, v876);
    sub_1BCA7E0(&UserHeelPortraitMaster_TypeInfo, v877, v878);
    sub_1BCA7E0(&UserInterruptionQuestMaster_TypeInfo, v879, v880);
    sub_1BCA7E0(&UserItemMaster_TypeInfo, v881, v882);
    sub_1BCA7E0(&UserLoginMaster_TypeInfo, v883, v884);
    sub_1BCA7E0(&UserMaster_TypeInfo, v885, v886);
    sub_1BCA7E0(&UserNpcSvtRecordMaster_TypeInfo, v887, v888);
    sub_1BCA7E0(&UserPaymentLimitMaster_TypeInfo, v889, v890);
    sub_1BCA7E0(&UserPresentBoxMaster_TypeInfo, v891, v892);
    sub_1BCA7E0(&UserPresentHistoryMaster_TypeInfo, v893, v894);
    sub_1BCA7E0(&UserPrivilegeMaster_TypeInfo, v895, v896);
    sub_1BCA7E0(&UserQuestInfoMaster_TypeInfo, v897, v898);
    sub_1BCA7E0(&UserQuestMaster_TypeInfo, v899, v900);
    sub_1BCA7E0(&UserQuestRecordMaster_TypeInfo, v901, v902);
    sub_1BCA7E0(&UserQuestRouteMaster_TypeInfo, v903, v904);
    sub_1BCA7E0(&UserRecommendFollowerMaster_TypeInfo, v905, v906);
    sub_1BCA7E0(&UserRecommendSupportMaster_TypeInfo, v907, v908);
    sub_1BCA7E0(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v909, v910);
    sub_1BCA7E0(&UserServantAppendPassiveSkillMaster_TypeInfo, v911, v912);
    sub_1BCA7E0(&UserServantCollectionMaster_TypeInfo, v913, v914);
    sub_1BCA7E0(&UserServantCommandCardMaster_TypeInfo, v915, v916);
    sub_1BCA7E0(&UserServantCommandCodeMaster_TypeInfo, v917, v918);
    sub_1BCA7E0(&UserServantLeaderMaster_TypeInfo, v919, v920);
    sub_1BCA7E0(&UserServantMaster_TypeInfo, v921, v922);
    sub_1BCA7E0(&UserServantStorageMaster_TypeInfo, v923, v924);
    sub_1BCA7E0(&UserServantVoicePlayedMaster_TypeInfo, v925, v926);
    sub_1BCA7E0(&UserShopMaster_TypeInfo, v927, v928);
    sub_1BCA7E0(&UserSubEquipMaster_TypeInfo, v929, v930);
    sub_1BCA7E0(&UserSuperBossMaster_TypeInfo, v931, v932);
    sub_1BCA7E0(&UserSupportDeckMaster_TypeInfo, v933, v934);
    sub_1BCA7E0(&UserSvtCoinMaster_TypeInfo, v935, v936);
    sub_1BCA7E0(&ViewEnemyMaster_TypeInfo, v937, v938);
    sub_1BCA7E0(&ViewGachaFeaturedServantMaster_TypeInfo, v939, v940);
    sub_1BCA7E0(&ViewQuestEnemyInfoMaster_TypeInfo, v941, v942);
    sub_1BCA7E0(&ViewQuestInfoMaster_TypeInfo, v943, v944);
    sub_1BCA7E0(&ViewWaveEnemyMaster_TypeInfo, v945, v946);
    sub_1BCA7E0(&VoiceClosedMessageMaster_TypeInfo, v947, v948);
    sub_1BCA7E0(&VoiceCondMaster_TypeInfo, v949, v950);
    sub_1BCA7E0(&VoiceMaster_TypeInfo, v951, v952);
    sub_1BCA7E0(&VoiceMaterialCondMaster_TypeInfo, v953, v954);
    sub_1BCA7E0(&VoicePlayCondMaster_TypeInfo, v955, v956);
    sub_1BCA7E0(&VoicePlayGroupMaster_TypeInfo, v957, v958);
    sub_1BCA7E0(&VoiceReleaseMaster_TypeInfo, v959, v960);
    sub_1BCA7E0(&WarAddMaster_TypeInfo, v961, v962);
    sub_1BCA7E0(&WarBoardAIMaster_TypeInfo, v963, v964);
    sub_1BCA7E0(&WarBoardActionPointClassMaster_TypeInfo, v965, v966);
    sub_1BCA7E0(&WarBoardActionPointMaster_TypeInfo, v967, v968);
    sub_1BCA7E0(&WarBoardActionTrendConditionMaster_TypeInfo, v969, v970);
    sub_1BCA7E0(&WarBoardActionTrendGroupMaster_TypeInfo, v971, v972);
    sub_1BCA7E0(&WarBoardActionTrendMaster_TypeInfo, v973, v974);
    sub_1BCA7E0(&WarBoardCommonReleaseMaster_TypeInfo, v975, v976);
    sub_1BCA7E0(&WarBoardDataMaster_TypeInfo, v977, v978);
    sub_1BCA7E0(&WarBoardEffectMaster_TypeInfo, v979, v980);
    sub_1BCA7E0(&WarBoardEventMaster_TypeInfo, v981, v982);
    sub_1BCA7E0(&WarBoardEventScriptMaster_TypeInfo, v983, v984);
    sub_1BCA7E0(&WarBoardFutureActionTrendMaster_TypeInfo, v985, v986);
    sub_1BCA7E0(&WarBoardIndividualityClassMaster_TypeInfo, v987, v988);
    sub_1BCA7E0(&WarBoardItemMaster_TypeInfo, v989, v990);
    sub_1BCA7E0(&WarBoardMaster_TypeInfo, v991, v992);
    sub_1BCA7E0(&WarBoardMessageMaster_TypeInfo, v993, v994);
    sub_1BCA7E0(&WarBoardMessageScriptMaster_TypeInfo, v995, v996);
    sub_1BCA7E0(&WarBoardOnboardSkillMaster_TypeInfo, v997, v998);
    sub_1BCA7E0(&WarBoardPartySkillMaster_TypeInfo, v999, v1000);
    sub_1BCA7E0(&WarBoardQuestMaster_TypeInfo, v1001, v1002);
    sub_1BCA7E0(&WarBoardRatingBaseMaster_TypeInfo, v1003, v1004);
    sub_1BCA7E0(&WarBoardRatingOffsetGroupMaster_TypeInfo, v1005, v1006);
    sub_1BCA7E0(&WarBoardRatingOffsetMaster_TypeInfo, v1007, v1008);
    sub_1BCA7E0(&WarBoardReinforcementsMaster_TypeInfo, v1009, v1010);
    sub_1BCA7E0(&WarBoardRoadMaster_TypeInfo, v1011, v1012);
    sub_1BCA7E0(&WarBoardSquareIndexGroupMaster_TypeInfo, v1013, v1014);
    sub_1BCA7E0(&WarBoardSquareMaster_TypeInfo, v1015, v1016);
    sub_1BCA7E0(&WarBoardStageBossMaster_TypeInfo, v1017, v1018);
    sub_1BCA7E0(&WarBoardStageDetailMaster_TypeInfo, v1019, v1020);
    sub_1BCA7E0(&WarBoardStageLayoutMaster_TypeInfo, v1021, v1022);
    sub_1BCA7E0(&WarBoardStageMaster_TypeInfo, v1023, v1024);
    sub_1BCA7E0(&WarBoardStageNpcMaster_TypeInfo, v1025, v1026);
    sub_1BCA7E0(&WarBoardStagePieceDetailMaster_TypeInfo, v1027, v1028);
    sub_1BCA7E0(&WarBoardStageReinforcementsMaster_TypeInfo, v1029, v1030);
    sub_1BCA7E0(&WarBoardStageWallMaster_TypeInfo, v1031, v1032);
    sub_1BCA7E0(&WarBoardTacticalTrendMaster_TypeInfo, v1033, v1034);
    sub_1BCA7E0(&WarBoardTreasureMaster_TypeInfo, v1035, v1036);
    sub_1BCA7E0(&WarGroupMaster_TypeInfo, v1037, v1038);
    sub_1BCA7E0(&WarMaster_TypeInfo, v1039, v1040);
    sub_1BCA7E0(&WarMessageMaster_TypeInfo, v1041, v1042);
    sub_1BCA7E0(&WarQuestSelectionMaster_TypeInfo, v1043, v1044);
    sub_1BCA7E0(&WarReleaseMaster_TypeInfo, v1045, v1046);
    byte_4B15D28 = 1;
  }
  v1047 = (DataMasterBase_array *)sub_1BCA888(DataMasterBase___TypeInfo, 522LL);
  v1051 = (ServantMaster_o *)sub_1BCAA2C(ServantMaster_TypeInfo, v1048, v1049, v1050);
  ServantMaster___ctor(v1051, 0LL);
  if ( !v1047 )
    sub_1BCAA3C(v1052, v1053);
  if ( v1051 )
  {
    v1052 = sub_1BCA91C(v1051, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  p_max_length = &v1047->max_length;
  if ( !v1047->max_length )
    goto LABEL_1571;
  v1047->m_Items[0] = (DataMasterBase_o *)v1051;
  sub_1BCA784((PartyOrganizationUtility_o *)v1047->m_Items, (int64_t)v1051, v1054, v1055, v1056, v1057, v1058, v1059);
  v1064 = (ServantClassMaster_o *)sub_1BCAA2C(ServantClassMaster_TypeInfo, v1061, v1062, v1063);
  ServantClassMaster___ctor(v1064, 0LL);
  if ( v1064 )
  {
    v1052 = sub_1BCA91C(v1064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1571;
  v1047->m_Items[1] = (DataMasterBase_o *)v1064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[1],
    (int64_t)v1064,
    v1065,
    v1066,
    v1067,
    v1068,
    v1069,
    v1070);
  v1074 = (ServantCommentMaster_o *)sub_1BCAA2C(ServantCommentMaster_TypeInfo, v1071, v1072, v1073);
  ServantCommentMaster___ctor(v1074, 0LL);
  if ( v1074 )
  {
    v1052 = sub_1BCA91C(v1074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1571;
  v1047->m_Items[2] = (DataMasterBase_o *)v1074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[2],
    (int64_t)v1074,
    v1075,
    v1076,
    v1077,
    v1078,
    v1079,
    v1080);
  v1084 = (ServantProfileMaster_o *)sub_1BCAA2C(ServantProfileMaster_TypeInfo, v1081, v1082, v1083);
  ServantProfileMaster___ctor(v1084, 0LL);
  if ( v1084 )
  {
    v1052 = sub_1BCA91C(v1084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1571;
  v1047->m_Items[3] = (DataMasterBase_o *)v1084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[3],
    (int64_t)v1084,
    v1085,
    v1086,
    v1087,
    v1088,
    v1089,
    v1090);
  v1094 = (WarMaster_o *)sub_1BCAA2C(WarMaster_TypeInfo, v1091, v1092, v1093);
  WarMaster___ctor(v1094, 0LL);
  if ( v1094 )
  {
    v1052 = sub_1BCA91C(v1094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1571;
  v1047->m_Items[4] = (DataMasterBase_o *)v1094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[4],
    (int64_t)v1094,
    v1095,
    v1096,
    v1097,
    v1098,
    v1099,
    v1100);
  v1104 = (UserMaster_o *)sub_1BCAA2C(UserMaster_TypeInfo, v1101, v1102, v1103);
  UserMaster___ctor(v1104, 0LL);
  if ( v1104 )
  {
    v1052 = sub_1BCA91C(v1104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1571;
  v1047->m_Items[5] = (DataMasterBase_o *)v1104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[5],
    (int64_t)v1104,
    v1105,
    v1106,
    v1107,
    v1108,
    v1109,
    v1110);
  v1114 = (UserGameMaster_o *)sub_1BCAA2C(UserGameMaster_TypeInfo, v1111, v1112, v1113);
  UserGameMaster___ctor(v1114, 0LL);
  if ( v1114 )
  {
    v1052 = sub_1BCA91C(v1114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1571;
  v1047->m_Items[6] = (DataMasterBase_o *)v1114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[6],
    (int64_t)v1114,
    v1115,
    v1116,
    v1117,
    v1118,
    v1119,
    v1120);
  v1124 = (TblUserMaster_o *)sub_1BCAA2C(TblUserMaster_TypeInfo, v1121, v1122, v1123);
  TblUserMaster___ctor(v1124, 0LL);
  if ( v1124 )
  {
    v1052 = sub_1BCA91C(v1124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1571;
  v1047->m_Items[7] = (DataMasterBase_o *)v1124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[7],
    (int64_t)v1124,
    v1125,
    v1126,
    v1127,
    v1128,
    v1129,
    v1130);
  v1134 = (UserItemMaster_o *)sub_1BCAA2C(UserItemMaster_TypeInfo, v1131, v1132, v1133);
  UserItemMaster___ctor(v1134, 0LL);
  if ( v1134 )
  {
    v1052 = sub_1BCA91C(v1134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1571;
  v1047->m_Items[8] = (DataMasterBase_o *)v1134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[8],
    (int64_t)v1134,
    v1135,
    v1136,
    v1137,
    v1138,
    v1139,
    v1140);
  v1144 = (UserServantMaster_o *)sub_1BCAA2C(UserServantMaster_TypeInfo, v1141, v1142, v1143);
  UserServantMaster___ctor(v1144, 0LL);
  if ( v1144 )
  {
    v1052 = sub_1BCA91C(v1144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1571;
  v1047->m_Items[9] = (DataMasterBase_o *)v1144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[9],
    (int64_t)v1144,
    v1145,
    v1146,
    v1147,
    v1148,
    v1149,
    v1150);
  v1154 = (UserServantStorageMaster_o *)sub_1BCAA2C(UserServantStorageMaster_TypeInfo, v1151, v1152, v1153);
  UserServantStorageMaster___ctor(v1154, 0LL);
  if ( v1154 )
  {
    v1052 = sub_1BCA91C(v1154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1571;
  v1047->m_Items[10] = (DataMasterBase_o *)v1154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[10],
    (int64_t)v1154,
    v1155,
    v1156,
    v1157,
    v1158,
    v1159,
    v1160);
  v1164 = (UserAccessaryMaster_o *)sub_1BCAA2C(UserAccessaryMaster_TypeInfo, v1161, v1162, v1163);
  UserAccessaryMaster___ctor(v1164, 0LL);
  if ( v1164 )
  {
    v1052 = sub_1BCA91C(v1164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1571;
  v1047->m_Items[11] = (DataMasterBase_o *)v1164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[11],
    (int64_t)v1164,
    v1165,
    v1166,
    v1167,
    v1168,
    v1169,
    v1170);
  v1174 = (UserQuestMaster_o *)sub_1BCAA2C(UserQuestMaster_TypeInfo, v1171, v1172, v1173);
  UserQuestMaster___ctor(v1174, 0LL);
  if ( v1174 )
  {
    v1052 = sub_1BCA91C(v1174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1571;
  v1047->m_Items[12] = (DataMasterBase_o *)v1174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[12],
    (int64_t)v1174,
    v1175,
    v1176,
    v1177,
    v1178,
    v1179,
    v1180);
  v1184 = (BattleMaster_o *)sub_1BCAA2C(BattleMaster_TypeInfo, v1181, v1182, v1183);
  BattleMaster___ctor(v1184, 0LL);
  if ( v1184 )
  {
    v1052 = sub_1BCA91C(v1184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1571;
  v1047->m_Items[13] = (DataMasterBase_o *)v1184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[13],
    (int64_t)v1184,
    v1185,
    v1186,
    v1187,
    v1188,
    v1189,
    v1190);
  v1194 = (OtherUserGameMaster_o *)sub_1BCAA2C(OtherUserGameMaster_TypeInfo, v1191, v1192, v1193);
  OtherUserGameMaster___ctor(v1194, 0LL);
  if ( v1194 )
  {
    v1052 = sub_1BCA91C(v1194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1571;
  v1047->m_Items[14] = (DataMasterBase_o *)v1194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[14],
    (int64_t)v1194,
    v1195,
    v1196,
    v1197,
    v1198,
    v1199,
    v1200);
  v1204 = (TblFriendMaster_o *)sub_1BCAA2C(TblFriendMaster_TypeInfo, v1201, v1202, v1203);
  TblFriendMaster___ctor(v1204, 0LL);
  if ( v1204 )
  {
    v1052 = sub_1BCA91C(v1204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1571;
  v1047->m_Items[15] = (DataMasterBase_o *)v1204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[15],
    (int64_t)v1204,
    v1205,
    v1206,
    v1207,
    v1208,
    v1209,
    v1210);
  v1214 = (AreaMaster_o *)sub_1BCAA2C(AreaMaster_TypeInfo, v1211, v1212, v1213);
  AreaMaster___ctor(v1214, 0LL);
  if ( v1214 )
  {
    v1052 = sub_1BCA91C(v1214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1571;
  v1047->m_Items[16] = (DataMasterBase_o *)v1214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[16],
    (int64_t)v1214,
    v1215,
    v1216,
    v1217,
    v1218,
    v1219,
    v1220);
  v1224 = (ServantCardMaster_o *)sub_1BCAA2C(ServantCardMaster_TypeInfo, v1221, v1222, v1223);
  ServantCardMaster___ctor(v1224, 0LL);
  if ( v1224 )
  {
    v1052 = sub_1BCA91C(v1224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1571;
  v1047->m_Items[17] = (DataMasterBase_o *)v1224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[17],
    (int64_t)v1224,
    v1225,
    v1226,
    v1227,
    v1228,
    v1229,
    v1230);
  v1234 = (EventMaster_o *)sub_1BCAA2C(EventMaster_TypeInfo, v1231, v1232, v1233);
  EventMaster___ctor(v1234, 0LL);
  if ( v1234 )
  {
    v1052 = sub_1BCA91C(v1234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1571;
  v1047->m_Items[18] = (DataMasterBase_o *)v1234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[18],
    (int64_t)v1234,
    v1235,
    v1236,
    v1237,
    v1238,
    v1239,
    v1240);
  v1244 = (ItemMaster_o *)sub_1BCAA2C(ItemMaster_TypeInfo, v1241, v1242, v1243);
  ItemMaster___ctor(v1244, 0LL);
  if ( v1244 )
  {
    v1052 = sub_1BCA91C(v1244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1571;
  v1047->m_Items[19] = (DataMasterBase_o *)v1244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[19],
    (int64_t)v1244,
    v1245,
    v1246,
    v1247,
    v1248,
    v1249,
    v1250);
  v1254 = (QuestMaster_o *)sub_1BCAA2C(QuestMaster_TypeInfo, v1251, v1252, v1253);
  QuestMaster___ctor(v1254, 0LL);
  if ( v1254 )
  {
    v1052 = sub_1BCA91C(v1254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1571;
  v1047->m_Items[20] = (DataMasterBase_o *)v1254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[20],
    (int64_t)v1254,
    v1255,
    v1256,
    v1257,
    v1258,
    v1259,
    v1260);
  v1264 = (QuestAddMaster_o *)sub_1BCAA2C(QuestAddMaster_TypeInfo, v1261, v1262, v1263);
  QuestAddMaster___ctor(v1264, 0LL);
  if ( v1264 )
  {
    v1052 = sub_1BCA91C(v1264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1571;
  v1047->m_Items[21] = (DataMasterBase_o *)v1264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[21],
    (int64_t)v1264,
    v1265,
    v1266,
    v1267,
    v1268,
    v1269,
    v1270);
  v1274 = (QuestReleaseMaster_o *)sub_1BCAA2C(QuestReleaseMaster_TypeInfo, v1271, v1272, v1273);
  QuestReleaseMaster___ctor(v1274, 0LL);
  if ( v1274 )
  {
    v1052 = sub_1BCA91C(v1274, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1571;
  v1047->m_Items[22] = (DataMasterBase_o *)v1274;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[22],
    (int64_t)v1274,
    v1275,
    v1276,
    v1277,
    v1278,
    v1279,
    v1280);
  v1284 = (QuestDateRangeMaster_o *)sub_1BCAA2C(QuestDateRangeMaster_TypeInfo, v1281, v1282, v1283);
  QuestDateRangeMaster___ctor(v1284, 0LL);
  if ( v1284 )
  {
    v1052 = sub_1BCA91C(v1284, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1571;
  v1047->m_Items[23] = (DataMasterBase_o *)v1284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[23],
    (int64_t)v1284,
    v1285,
    v1286,
    v1287,
    v1288,
    v1289,
    v1290);
  v1294 = (QuestPhaseMaster_o *)sub_1BCAA2C(QuestPhaseMaster_TypeInfo, v1291, v1292, v1293);
  QuestPhaseMaster___ctor(v1294, 0LL);
  if ( v1294 )
  {
    v1052 = sub_1BCA91C(v1294, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1571;
  v1047->m_Items[24] = (DataMasterBase_o *)v1294;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[24],
    (int64_t)v1294,
    v1295,
    v1296,
    v1297,
    v1298,
    v1299,
    v1300);
  v1304 = (QuestPhaseDetailMaster_o *)sub_1BCAA2C(QuestPhaseDetailMaster_TypeInfo, v1301, v1302, v1303);
  QuestPhaseDetailMaster___ctor(v1304, 0LL);
  if ( v1304 )
  {
    v1052 = sub_1BCA91C(v1304, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1571;
  v1047->m_Items[25] = (DataMasterBase_o *)v1304;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[25],
    (int64_t)v1304,
    v1305,
    v1306,
    v1307,
    v1308,
    v1309,
    v1310);
  v1314 = (QuestGroupMaster_o *)sub_1BCAA2C(QuestGroupMaster_TypeInfo, v1311, v1312, v1313);
  QuestGroupMaster___ctor(v1314, 0LL);
  if ( v1314 )
  {
    v1052 = sub_1BCA91C(v1314, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1571;
  v1047->m_Items[26] = (DataMasterBase_o *)v1314;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[26],
    (int64_t)v1314,
    v1315,
    v1316,
    v1317,
    v1318,
    v1319,
    v1320);
  v1324 = (QuestRandomGroupMaster_o *)sub_1BCAA2C(QuestRandomGroupMaster_TypeInfo, v1321, v1322, v1323);
  QuestRandomGroupMaster___ctor(v1324, 0LL);
  if ( v1324 )
  {
    v1052 = sub_1BCA91C(v1324, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1571;
  v1047->m_Items[27] = (DataMasterBase_o *)v1324;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[27],
    (int64_t)v1324,
    v1325,
    v1326,
    v1327,
    v1328,
    v1329,
    v1330);
  v1334 = (QuestConsumeItemMaster_o *)sub_1BCAA2C(QuestConsumeItemMaster_TypeInfo, v1331, v1332, v1333);
  QuestConsumeItemMaster___ctor(v1334, 0LL);
  if ( v1334 )
  {
    v1052 = sub_1BCA91C(v1334, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1571;
  v1047->m_Items[28] = (DataMasterBase_o *)v1334;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[28],
    (int64_t)v1334,
    v1335,
    v1336,
    v1337,
    v1338,
    v1339,
    v1340);
  v1344 = (QuestMessageMaster_o *)sub_1BCAA2C(QuestMessageMaster_TypeInfo, v1341, v1342, v1343);
  QuestMessageMaster___ctor(v1344, 0LL);
  if ( v1344 )
  {
    v1052 = sub_1BCA91C(v1344, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1571;
  v1047->m_Items[29] = (DataMasterBase_o *)v1344;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[29],
    (int64_t)v1344,
    v1345,
    v1346,
    v1347,
    v1348,
    v1349,
    v1350);
  v1354 = (UserQuestInfoMaster_o *)sub_1BCAA2C(UserQuestInfoMaster_TypeInfo, v1351, v1352, v1353);
  UserQuestInfoMaster___ctor(v1354, 0LL);
  if ( v1354 )
  {
    v1052 = sub_1BCA91C(v1354, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1571;
  v1047->m_Items[30] = (DataMasterBase_o *)v1354;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[30],
    (int64_t)v1354,
    v1355,
    v1356,
    v1357,
    v1358,
    v1359,
    v1360);
  v1364 = (UserQuestRecordMaster_o *)sub_1BCAA2C(UserQuestRecordMaster_TypeInfo, v1361, v1362, v1363);
  UserQuestRecordMaster___ctor(v1364, 0LL);
  if ( v1364 )
  {
    v1052 = sub_1BCA91C(v1364, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1571;
  v1047->m_Items[31] = (DataMasterBase_o *)v1364;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[31],
    (int64_t)v1364,
    v1365,
    v1366,
    v1367,
    v1368,
    v1369,
    v1370);
  v1374 = (ViewQuestInfoMaster_o *)sub_1BCAA2C(ViewQuestInfoMaster_TypeInfo, v1371, v1372, v1373);
  ViewQuestInfoMaster___ctor(v1374, 0LL);
  if ( v1374 )
  {
    v1052 = sub_1BCA91C(v1374, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1571;
  v1047->m_Items[32] = (DataMasterBase_o *)v1374;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[32],
    (int64_t)v1374,
    v1375,
    v1376,
    v1377,
    v1378,
    v1379,
    v1380);
  v1384 = (ViewEnemyMaster_o *)sub_1BCAA2C(ViewEnemyMaster_TypeInfo, v1381, v1382, v1383);
  ViewEnemyMaster___ctor(v1384, 0LL);
  if ( v1384 )
  {
    v1052 = sub_1BCA91C(v1384, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1571;
  v1047->m_Items[33] = (DataMasterBase_o *)v1384;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[33],
    (int64_t)v1384,
    v1385,
    v1386,
    v1387,
    v1388,
    v1389,
    v1390);
  v1394 = (ViewQuestEnemyInfoMaster_o *)sub_1BCAA2C(ViewQuestEnemyInfoMaster_TypeInfo, v1391, v1392, v1393);
  ViewQuestEnemyInfoMaster___ctor(v1394, 0LL);
  if ( v1394 )
  {
    v1052 = sub_1BCA91C(v1394, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1571;
  v1047->m_Items[34] = (DataMasterBase_o *)v1394;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[34],
    (int64_t)v1394,
    v1395,
    v1396,
    v1397,
    v1398,
    v1399,
    v1400);
  v1404 = (BlankEarthSpotMaster_o *)sub_1BCAA2C(BlankEarthSpotMaster_TypeInfo, v1401, v1402, v1403);
  BlankEarthSpotMaster___ctor(v1404, 0LL);
  if ( v1404 )
  {
    v1052 = sub_1BCA91C(v1404, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1571;
  v1047->m_Items[35] = (DataMasterBase_o *)v1404;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[35],
    (int64_t)v1404,
    v1405,
    v1406,
    v1407,
    v1408,
    v1409,
    v1410);
  v1414 = (BlankEarthSpotAddMaster_o *)sub_1BCAA2C(BlankEarthSpotAddMaster_TypeInfo, v1411, v1412, v1413);
  BlankEarthSpotAddMaster___ctor(v1414, 0LL);
  if ( v1414 )
  {
    v1052 = sub_1BCA91C(v1414, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1571;
  v1047->m_Items[36] = (DataMasterBase_o *)v1414;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[36],
    (int64_t)v1414,
    v1415,
    v1416,
    v1417,
    v1418,
    v1419,
    v1420);
  v1424 = (SpotMaster_o *)sub_1BCAA2C(SpotMaster_TypeInfo, v1421, v1422, v1423);
  SpotMaster___ctor(v1424, 0LL);
  if ( v1424 )
  {
    v1052 = sub_1BCA91C(v1424, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1571;
  v1047->m_Items[37] = (DataMasterBase_o *)v1424;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[37],
    (int64_t)v1424,
    v1425,
    v1426,
    v1427,
    v1428,
    v1429,
    v1430);
  v1434 = (SpotImageMaster_o *)sub_1BCAA2C(SpotImageMaster_TypeInfo, v1431, v1432, v1433);
  SpotImageMaster___ctor(v1434, 0LL);
  if ( v1434 )
  {
    v1052 = sub_1BCA91C(v1434, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1571;
  v1047->m_Items[38] = (DataMasterBase_o *)v1434;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[38],
    (int64_t)v1434,
    v1435,
    v1436,
    v1437,
    v1438,
    v1439,
    v1440);
  v1444 = (SpotRoadMaster_o *)sub_1BCAA2C(SpotRoadMaster_TypeInfo, v1441, v1442, v1443);
  SpotRoadMaster___ctor(v1444, 0LL);
  if ( v1444 )
  {
    v1052 = sub_1BCA91C(v1444, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1571;
  v1047->m_Items[39] = (DataMasterBase_o *)v1444;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[39],
    (int64_t)v1444,
    v1445,
    v1446,
    v1447,
    v1448,
    v1449,
    v1450);
  v1454 = (SpotPathMaster_o *)sub_1BCAA2C(SpotPathMaster_TypeInfo, v1451, v1452, v1453);
  SpotPathMaster___ctor(v1454, 0LL);
  if ( v1454 )
  {
    v1052 = sub_1BCA91C(v1454, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1571;
  v1047->m_Items[40] = (DataMasterBase_o *)v1454;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[40],
    (int64_t)v1454,
    v1455,
    v1456,
    v1457,
    v1458,
    v1459,
    v1460);
  v1464 = (SpotAddMaster_o *)sub_1BCAA2C(SpotAddMaster_TypeInfo, v1461, v1462, v1463);
  SpotAddMaster___ctor(v1464, 0LL);
  if ( v1464 )
  {
    v1052 = sub_1BCA91C(v1464, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1571;
  v1047->m_Items[41] = (DataMasterBase_o *)v1464;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[41],
    (int64_t)v1464,
    v1465,
    v1466,
    v1467,
    v1468,
    v1469,
    v1470);
  v1474 = (MapGimmickMaster_o *)sub_1BCAA2C(MapGimmickMaster_TypeInfo, v1471, v1472, v1473);
  MapGimmickMaster___ctor(v1474, 0LL);
  if ( v1474 )
  {
    v1052 = sub_1BCA91C(v1474, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1571;
  v1047->m_Items[42] = (DataMasterBase_o *)v1474;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[42],
    (int64_t)v1474,
    v1475,
    v1476,
    v1477,
    v1478,
    v1479,
    v1480);
  v1484 = (GiftMaster_o *)sub_1BCAA2C(GiftMaster_TypeInfo, v1481, v1482, v1483);
  GiftMaster___ctor(v1484, 0LL);
  if ( v1484 )
  {
    v1052 = sub_1BCA91C(v1484, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1571;
  v1047->m_Items[43] = (DataMasterBase_o *)v1484;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[43],
    (int64_t)v1484,
    v1485,
    v1486,
    v1487,
    v1488,
    v1489,
    v1490);
  v1494 = (GiftAddMaster_o *)sub_1BCAA2C(GiftAddMaster_TypeInfo, v1491, v1492, v1493);
  GiftAddMaster___ctor(v1494, 0LL);
  if ( v1494 )
  {
    v1052 = sub_1BCA91C(v1494, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1571;
  v1047->m_Items[44] = (DataMasterBase_o *)v1494;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[44],
    (int64_t)v1494,
    v1495,
    v1496,
    v1497,
    v1498,
    v1499,
    v1500);
  v1504 = (ShopMaster_o *)sub_1BCAA2C(ShopMaster_TypeInfo, v1501, v1502, v1503);
  ShopMaster___ctor(v1504, 0LL);
  if ( v1504 )
  {
    v1052 = sub_1BCA91C(v1504, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1571;
  v1047->m_Items[45] = (DataMasterBase_o *)v1504;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[45],
    (int64_t)v1504,
    v1505,
    v1506,
    v1507,
    v1508,
    v1509,
    v1510);
  v1514 = (StoneShopMaster_o *)sub_1BCAA2C(StoneShopMaster_TypeInfo, v1511, v1512, v1513);
  StoneShopMaster___ctor(v1514, 0LL);
  if ( v1514 )
  {
    v1052 = sub_1BCA91C(v1514, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1571;
  v1047->m_Items[46] = (DataMasterBase_o *)v1514;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[46],
    (int64_t)v1514,
    v1515,
    v1516,
    v1517,
    v1518,
    v1519,
    v1520);
  v1524 = (BankShopMaster_o *)sub_1BCAA2C(BankShopMaster_TypeInfo, v1521, v1522, v1523);
  BankShopMaster___ctor(v1524, 0LL);
  if ( v1524 )
  {
    v1052 = sub_1BCA91C(v1524, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1571;
  v1047->m_Items[47] = (DataMasterBase_o *)v1524;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[47],
    (int64_t)v1524,
    v1525,
    v1526,
    v1527,
    v1528,
    v1529,
    v1530);
  v1534 = (ShopScriptMaster_o *)sub_1BCAA2C(ShopScriptMaster_TypeInfo, v1531, v1532, v1533);
  ShopScriptMaster___ctor(v1534, 0LL);
  if ( v1534 )
  {
    v1052 = sub_1BCA91C(v1534, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1571;
  v1047->m_Items[48] = (DataMasterBase_o *)v1534;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[48],
    (int64_t)v1534,
    v1535,
    v1536,
    v1537,
    v1538,
    v1539,
    v1540);
  v1544 = (StageMaster_o *)sub_1BCAA2C(StageMaster_TypeInfo, v1541, v1542, v1543);
  StageMaster___ctor(v1544, 0LL);
  if ( v1544 )
  {
    v1052 = sub_1BCA91C(v1544, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1571;
  v1047->m_Items[49] = (DataMasterBase_o *)v1544;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[49],
    (int64_t)v1544,
    v1545,
    v1546,
    v1547,
    v1548,
    v1549,
    v1550);
  v1554 = (ServantGroupMaster_o *)sub_1BCAA2C(ServantGroupMaster_TypeInfo, v1551, v1552, v1553);
  ServantGroupMaster___ctor(v1554, 0LL);
  if ( v1554 )
  {
    v1052 = sub_1BCA91C(v1554, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1571;
  v1047->m_Items[50] = (DataMasterBase_o *)v1554;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[50],
    (int64_t)v1554,
    v1555,
    v1556,
    v1557,
    v1558,
    v1559,
    v1560);
  v1564 = (ServantLimitMaster_o *)sub_1BCAA2C(ServantLimitMaster_TypeInfo, v1561, v1562, v1563);
  ServantLimitMaster___ctor(v1564, 0LL);
  if ( v1564 )
  {
    v1052 = sub_1BCA91C(v1564, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1571;
  v1047->m_Items[51] = (DataMasterBase_o *)v1564;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[51],
    (int64_t)v1564,
    v1565,
    v1566,
    v1567,
    v1568,
    v1569,
    v1570);
  v1574 = (ServantLimitAddMaster_o *)sub_1BCAA2C(ServantLimitAddMaster_TypeInfo, v1571, v1572, v1573);
  ServantLimitAddMaster___ctor(v1574, 0LL);
  if ( v1574 )
  {
    v1052 = sub_1BCA91C(v1574, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1571;
  v1047->m_Items[52] = (DataMasterBase_o *)v1574;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[52],
    (int64_t)v1574,
    v1575,
    v1576,
    v1577,
    v1578,
    v1579,
    v1580);
  v1584 = (ServantSkillMaster_o *)sub_1BCAA2C(ServantSkillMaster_TypeInfo, v1581, v1582, v1583);
  ServantSkillMaster___ctor(v1584, 0LL);
  if ( v1584 )
  {
    v1052 = sub_1BCA91C(v1584, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1571;
  v1047->m_Items[53] = (DataMasterBase_o *)v1584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[53],
    (int64_t)v1584,
    v1585,
    v1586,
    v1587,
    v1588,
    v1589,
    v1590);
  v1594 = (ServantPassiveSkillMaster_o *)sub_1BCAA2C(ServantPassiveSkillMaster_TypeInfo, v1591, v1592, v1593);
  ServantPassiveSkillMaster___ctor(v1594, 0LL);
  if ( v1594 )
  {
    v1052 = sub_1BCA91C(v1594, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1571;
  v1047->m_Items[54] = (DataMasterBase_o *)v1594;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[54],
    (int64_t)v1594,
    v1595,
    v1596,
    v1597,
    v1598,
    v1599,
    v1600);
  v1604 = (BgmMaster_o *)sub_1BCAA2C(BgmMaster_TypeInfo, v1601, v1602, v1603);
  BgmMaster___ctor(v1604, 0LL);
  if ( v1604 )
  {
    v1052 = sub_1BCA91C(v1604, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1571;
  v1047->m_Items[55] = (DataMasterBase_o *)v1604;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[55],
    (int64_t)v1604,
    v1605,
    v1606,
    v1607,
    v1608,
    v1609,
    v1610);
  v1614 = (ServantScriptMaster_o *)sub_1BCAA2C(ServantScriptMaster_TypeInfo, v1611, v1612, v1613);
  ServantScriptMaster___ctor(v1614, 0LL);
  if ( v1614 )
  {
    v1052 = sub_1BCA91C(v1614, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1571;
  v1047->m_Items[56] = (DataMasterBase_o *)v1614;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[56],
    (int64_t)v1614,
    v1615,
    v1616,
    v1617,
    v1618,
    v1619,
    v1620);
  v1624 = (NewsMaster_o *)sub_1BCAA2C(NewsMaster_TypeInfo, v1621, v1622, v1623);
  NewsMaster___ctor(v1624, 0LL);
  if ( v1624 )
  {
    v1052 = sub_1BCA91C(v1624, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1571;
  v1047->m_Items[57] = (DataMasterBase_o *)v1624;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[57],
    (int64_t)v1624,
    v1625,
    v1626,
    v1627,
    v1628,
    v1629,
    v1630);
  v1634 = (TelopMaster_o *)sub_1BCAA2C(TelopMaster_TypeInfo, v1631, v1632, v1633);
  TelopMaster___ctor(v1634, 0LL);
  if ( v1634 )
  {
    v1052 = sub_1BCA91C(v1634, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1571;
  v1047->m_Items[58] = (DataMasterBase_o *)v1634;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[58],
    (int64_t)v1634,
    v1635,
    v1636,
    v1637,
    v1638,
    v1639,
    v1640);
  v1644 = (UserExpMaster_o *)sub_1BCAA2C(UserExpMaster_TypeInfo, v1641, v1642, v1643);
  UserExpMaster___ctor(v1644, 0LL);
  if ( v1644 )
  {
    v1052 = sub_1BCA91C(v1644, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1571;
  v1047->m_Items[59] = (DataMasterBase_o *)v1644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[59],
    (int64_t)v1644,
    v1645,
    v1646,
    v1647,
    v1648,
    v1649,
    v1650);
  v1654 = (TreasureDvcMaster_o *)sub_1BCAA2C(TreasureDvcMaster_TypeInfo, v1651, v1652, v1653);
  TreasureDvcMaster___ctor(v1654, 0LL);
  if ( v1654 )
  {
    v1052 = sub_1BCA91C(v1654, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1571;
  v1047->m_Items[60] = (DataMasterBase_o *)v1654;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[60],
    (int64_t)v1654,
    v1655,
    v1656,
    v1657,
    v1658,
    v1659,
    v1660);
  v1664 = (ServantTreasureDvcMaster_o *)sub_1BCAA2C(ServantTreasureDvcMaster_TypeInfo, v1661, v1662, v1663);
  ServantTreasureDvcMaster___ctor(v1664, 0LL);
  if ( v1664 )
  {
    v1052 = sub_1BCA91C(v1664, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1571;
  v1047->m_Items[61] = (DataMasterBase_o *)v1664;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[61],
    (int64_t)v1664,
    v1665,
    v1666,
    v1667,
    v1668,
    v1669,
    v1670);
  v1674 = (SkillMaster_o *)sub_1BCAA2C(SkillMaster_TypeInfo, v1671, v1672, v1673);
  SkillMaster___ctor(v1674, 0LL);
  if ( v1674 )
  {
    v1052 = sub_1BCA91C(v1674, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1571;
  v1047->m_Items[62] = (DataMasterBase_o *)v1674;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[62],
    (int64_t)v1674,
    v1675,
    v1676,
    v1677,
    v1678,
    v1679,
    v1680);
  v1684 = (SkillLvMaster_o *)sub_1BCAA2C(SkillLvMaster_TypeInfo, v1681, v1682, v1683);
  SkillLvMaster___ctor(v1684, 0LL);
  if ( v1684 )
  {
    v1052 = sub_1BCA91C(v1684, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1571;
  v1047->m_Items[63] = (DataMasterBase_o *)v1684;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[63],
    (int64_t)v1684,
    v1685,
    v1686,
    v1687,
    v1688,
    v1689,
    v1690);
  v1694 = (SkillDetailMaster_o *)sub_1BCAA2C(SkillDetailMaster_TypeInfo, v1691, v1692, v1693);
  SkillDetailMaster___ctor(v1694, 0LL);
  if ( v1694 )
  {
    v1052 = sub_1BCA91C(v1694, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1571;
  v1047->m_Items[64] = (DataMasterBase_o *)v1694;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[64],
    (int64_t)v1694,
    v1695,
    v1696,
    v1697,
    v1698,
    v1699,
    v1700);
  v1704 = (CommandSpellMaster_o *)sub_1BCAA2C(CommandSpellMaster_TypeInfo, v1701, v1702, v1703);
  CommandSpellMaster___ctor(v1704, 0LL);
  if ( v1704 )
  {
    v1052 = sub_1BCA91C(v1704, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1571;
  v1047->m_Items[65] = (DataMasterBase_o *)v1704;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[65],
    (int64_t)v1704,
    v1705,
    v1706,
    v1707,
    v1708,
    v1709,
    v1710);
  v1714 = (EquipMaster_o *)sub_1BCAA2C(EquipMaster_TypeInfo, v1711, v1712, v1713);
  EquipMaster___ctor(v1714, 0LL);
  if ( v1714 )
  {
    v1052 = sub_1BCA91C(v1714, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1571;
  v1047->m_Items[66] = (DataMasterBase_o *)v1714;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[66],
    (int64_t)v1714,
    v1715,
    v1716,
    v1717,
    v1718,
    v1719,
    v1720);
  v1724 = (EquipExpMaster_o *)sub_1BCAA2C(EquipExpMaster_TypeInfo, v1721, v1722, v1723);
  EquipExpMaster___ctor(v1724, 0LL);
  if ( v1724 )
  {
    v1052 = sub_1BCA91C(v1724, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1571;
  v1047->m_Items[67] = (DataMasterBase_o *)v1724;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[67],
    (int64_t)v1724,
    v1725,
    v1726,
    v1727,
    v1728,
    v1729,
    v1730);
  v1734 = (EquipSkillMaster_o *)sub_1BCAA2C(EquipSkillMaster_TypeInfo, v1731, v1732, v1733);
  EquipSkillMaster___ctor(v1734, 0LL);
  if ( v1734 )
  {
    v1052 = sub_1BCA91C(v1734, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1571;
  v1047->m_Items[68] = (DataMasterBase_o *)v1734;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[68],
    (int64_t)v1734,
    v1735,
    v1736,
    v1737,
    v1738,
    v1739,
    v1740);
  v1744 = (SubEquipMaster_o *)sub_1BCAA2C(SubEquipMaster_TypeInfo, v1741, v1742, v1743);
  SubEquipMaster___ctor(v1744, 0LL);
  if ( v1744 )
  {
    v1052 = sub_1BCA91C(v1744, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1571;
  v1047->m_Items[69] = (DataMasterBase_o *)v1744;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[69],
    (int64_t)v1744,
    v1745,
    v1746,
    v1747,
    v1748,
    v1749,
    v1750);
  v1754 = (AccessaryMaster_o *)sub_1BCAA2C(AccessaryMaster_TypeInfo, v1751, v1752, v1753);
  AccessaryMaster___ctor(v1754, 0LL);
  if ( v1754 )
  {
    v1052 = sub_1BCA91C(v1754, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1571;
  v1047->m_Items[70] = (DataMasterBase_o *)v1754;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[70],
    (int64_t)v1754,
    v1755,
    v1756,
    v1757,
    v1758,
    v1759,
    v1760);
  v1764 = (UserPresentBoxMaster_o *)sub_1BCAA2C(UserPresentBoxMaster_TypeInfo, v1761, v1762, v1763);
  UserPresentBoxMaster___ctor(v1764, 0LL);
  if ( v1764 )
  {
    v1052 = sub_1BCA91C(v1764, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1571;
  v1047->m_Items[71] = (DataMasterBase_o *)v1764;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[71],
    (int64_t)v1764,
    v1765,
    v1766,
    v1767,
    v1768,
    v1769,
    v1770);
  v1774 = (UserDeckMaster_o *)sub_1BCAA2C(UserDeckMaster_TypeInfo, v1771, v1772, v1773);
  UserDeckMaster___ctor(v1774, 0LL);
  if ( v1774 )
  {
    v1052 = sub_1BCA91C(v1774, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1571;
  v1047->m_Items[72] = (DataMasterBase_o *)v1774;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[72],
    (int64_t)v1774,
    v1775,
    v1776,
    v1777,
    v1778,
    v1779,
    v1780);
  v1784 = (UserSubEquipMaster_o *)sub_1BCAA2C(UserSubEquipMaster_TypeInfo, v1781, v1782, v1783);
  UserSubEquipMaster___ctor(v1784, 0LL);
  if ( v1784 )
  {
    v1052 = sub_1BCA91C(v1784, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1571;
  v1047->m_Items[73] = (DataMasterBase_o *)v1784;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[73],
    (int64_t)v1784,
    v1785,
    v1786,
    v1787,
    v1788,
    v1789,
    v1790);
  v1794 = (GachaMaster_o *)sub_1BCAA2C(GachaMaster_TypeInfo, v1791, v1792, v1793);
  GachaMaster___ctor(v1794, 0LL);
  if ( v1794 )
  {
    v1052 = sub_1BCA91C(v1794, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1571;
  v1047->m_Items[74] = (DataMasterBase_o *)v1794;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[74],
    (int64_t)v1794,
    v1795,
    v1796,
    v1797,
    v1798,
    v1799,
    v1800);
  v1804 = (GachaImageMaster_o *)sub_1BCAA2C(GachaImageMaster_TypeInfo, v1801, v1802, v1803);
  GachaImageMaster___ctor(v1804, 0LL);
  if ( v1804 )
  {
    v1052 = sub_1BCA91C(v1804, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1571;
  v1047->m_Items[75] = (DataMasterBase_o *)v1804;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[75],
    (int64_t)v1804,
    v1805,
    v1806,
    v1807,
    v1808,
    v1809,
    v1810);
  v1814 = (UserGachaMaster_o *)sub_1BCAA2C(UserGachaMaster_TypeInfo, v1811, v1812, v1813);
  UserGachaMaster___ctor(v1814, 0LL);
  if ( v1814 )
  {
    v1052 = sub_1BCA91C(v1814, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1571;
  v1047->m_Items[76] = (DataMasterBase_o *)v1814;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[76],
    (int64_t)v1814,
    v1815,
    v1816,
    v1817,
    v1818,
    v1819,
    v1820);
  v1824 = (UserEquipMaster_o *)sub_1BCAA2C(UserEquipMaster_TypeInfo, v1821, v1822, v1823);
  UserEquipMaster___ctor(v1824, 0LL);
  if ( v1824 )
  {
    v1052 = sub_1BCA91C(v1824, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1571;
  v1047->m_Items[77] = (DataMasterBase_o *)v1824;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[77],
    (int64_t)v1824,
    v1825,
    v1826,
    v1827,
    v1828,
    v1829,
    v1830);
  v1834 = (UserServantCollectionMaster_o *)sub_1BCAA2C(UserServantCollectionMaster_TypeInfo, v1831, v1832, v1833);
  UserServantCollectionMaster___ctor(v1834, 0LL);
  if ( v1834 )
  {
    v1052 = sub_1BCA91C(v1834, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1571;
  v1047->m_Items[78] = (DataMasterBase_o *)v1834;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[78],
    (int64_t)v1834,
    v1835,
    v1836,
    v1837,
    v1838,
    v1839,
    v1840);
  v1844 = (FriendshipMaster_o *)sub_1BCAA2C(FriendshipMaster_TypeInfo, v1841, v1842, v1843);
  FriendshipMaster___ctor(v1844, 0LL);
  if ( v1844 )
  {
    v1052 = sub_1BCA91C(v1844, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1571;
  v1047->m_Items[79] = (DataMasterBase_o *)v1844;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[79],
    (int64_t)v1844,
    v1845,
    v1846,
    v1847,
    v1848,
    v1849,
    v1850);
  v1854 = (GachaTicketMaster_o *)sub_1BCAA2C(GachaTicketMaster_TypeInfo, v1851, v1852, v1853);
  GachaTicketMaster___ctor(v1854, 0LL);
  if ( v1854 )
  {
    v1052 = sub_1BCA91C(v1854, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1571;
  v1047->m_Items[80] = (DataMasterBase_o *)v1854;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[80],
    (int64_t)v1854,
    v1855,
    v1856,
    v1857,
    v1858,
    v1859,
    v1860);
  v1864 = (UserFormationMaster_o *)sub_1BCAA2C(UserFormationMaster_TypeInfo, v1861, v1862, v1863);
  UserFormationMaster___ctor(v1864, 0LL);
  if ( v1864 )
  {
    v1052 = sub_1BCA91C(v1864, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1571;
  v1047->m_Items[81] = (DataMasterBase_o *)v1864;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[81],
    (int64_t)v1864,
    v1865,
    v1866,
    v1867,
    v1868,
    v1869,
    v1870);
  v1874 = (FunctionMaster_o *)sub_1BCAA2C(FunctionMaster_TypeInfo, v1871, v1872, v1873);
  FunctionMaster___ctor(v1874, 0LL);
  if ( v1874 )
  {
    v1052 = sub_1BCA91C(v1874, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1571;
  v1047->m_Items[82] = (DataMasterBase_o *)v1874;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[82],
    (int64_t)v1874,
    v1875,
    v1876,
    v1877,
    v1878,
    v1879,
    v1880);
  v1884 = (BuffMaster_o *)sub_1BCAA2C(BuffMaster_TypeInfo, v1881, v1882, v1883);
  BuffMaster___ctor(v1884, 0LL);
  if ( v1884 )
  {
    v1052 = sub_1BCA91C(v1884, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1571;
  v1047->m_Items[83] = (DataMasterBase_o *)v1884;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[83],
    (int64_t)v1884,
    v1885,
    v1886,
    v1887,
    v1888,
    v1889,
    v1890);
  v1894 = (GachaReleaseMaster_o *)sub_1BCAA2C(GachaReleaseMaster_TypeInfo, v1891, v1892, v1893);
  GachaReleaseMaster___ctor(v1894, 0LL);
  if ( v1894 )
  {
    v1052 = sub_1BCA91C(v1894, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1571;
  v1047->m_Items[84] = (DataMasterBase_o *)v1894;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[84],
    (int64_t)v1894,
    v1895,
    v1896,
    v1897,
    v1898,
    v1899,
    v1900);
  v1904 = (CombineQpMaster_o *)sub_1BCAA2C(CombineQpMaster_TypeInfo, v1901, v1902, v1903);
  CombineQpMaster___ctor(v1904, 0LL);
  if ( v1904 )
  {
    v1052 = sub_1BCA91C(v1904, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1571;
  v1047->m_Items[85] = (DataMasterBase_o *)v1904;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[85],
    (int64_t)v1904,
    v1905,
    v1906,
    v1907,
    v1908,
    v1909,
    v1910);
  v1914 = (CombineMaterialMaster_o *)sub_1BCAA2C(CombineMaterialMaster_TypeInfo, v1911, v1912, v1913);
  CombineMaterialMaster___ctor(v1914, 0LL);
  if ( v1914 )
  {
    v1052 = sub_1BCA91C(v1914, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1571;
  v1047->m_Items[86] = (DataMasterBase_o *)v1914;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[86],
    (int64_t)v1914,
    v1915,
    v1916,
    v1917,
    v1918,
    v1919,
    v1920);
  v1924 = (EventCombineMaster_o *)sub_1BCAA2C(EventCombineMaster_TypeInfo, v1921, v1922, v1923);
  EventCombineMaster___ctor(v1924, 0LL);
  if ( v1924 )
  {
    v1052 = sub_1BCA91C(v1924, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1571;
  v1047->m_Items[87] = (DataMasterBase_o *)v1924;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[87],
    (int64_t)v1924,
    v1925,
    v1926,
    v1927,
    v1928,
    v1929,
    v1930);
  v1934 = (ServantExpMaster_o *)sub_1BCAA2C(ServantExpMaster_TypeInfo, v1931, v1932, v1933);
  ServantExpMaster___ctor(v1934, 0LL);
  if ( v1934 )
  {
    v1052 = sub_1BCA91C(v1934, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1571;
  v1047->m_Items[88] = (DataMasterBase_o *)v1934;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[88],
    (int64_t)v1934,
    v1935,
    v1936,
    v1937,
    v1938,
    v1939,
    v1940);
  v1944 = (CombineSkillMaster_o *)sub_1BCAA2C(CombineSkillMaster_TypeInfo, v1941, v1942, v1943);
  CombineSkillMaster___ctor(v1944, 0LL);
  if ( v1944 )
  {
    v1052 = sub_1BCA91C(v1944, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1571;
  v1047->m_Items[89] = (DataMasterBase_o *)v1944;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[89],
    (int64_t)v1944,
    v1945,
    v1946,
    v1947,
    v1948,
    v1949,
    v1950);
  v1954 = (CombineTdMaster_o *)sub_1BCAA2C(CombineTdMaster_TypeInfo, v1951, v1952, v1953);
  CombineTdMaster___ctor(v1954, 0LL);
  if ( v1954 )
  {
    v1052 = sub_1BCA91C(v1954, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1571;
  v1047->m_Items[90] = (DataMasterBase_o *)v1954;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[90],
    (int64_t)v1954,
    v1955,
    v1956,
    v1957,
    v1958,
    v1959,
    v1960);
  v1964 = (EventQuestMaster_o *)sub_1BCAA2C(EventQuestMaster_TypeInfo, v1961, v1962, v1963);
  EventQuestMaster___ctor(v1964, 0LL);
  if ( v1964 )
  {
    v1052 = sub_1BCA91C(v1964, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1571;
  v1047->m_Items[91] = (DataMasterBase_o *)v1964;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[91],
    (int64_t)v1964,
    v1965,
    v1966,
    v1967,
    v1968,
    v1969,
    v1970);
  v1974 = (EventCampaignMaster_o *)sub_1BCAA2C(EventCampaignMaster_TypeInfo, v1971, v1972, v1973);
  EventCampaignMaster___ctor(v1974, 0LL);
  if ( v1974 )
  {
    v1052 = sub_1BCA91C(v1974, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1571;
  v1047->m_Items[92] = (DataMasterBase_o *)v1974;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[92],
    (int64_t)v1974,
    v1975,
    v1976,
    v1977,
    v1978,
    v1979,
    v1980);
  v1984 = (IllustratorMaster_o *)sub_1BCAA2C(IllustratorMaster_TypeInfo, v1981, v1982, v1983);
  IllustratorMaster___ctor(v1984, 0LL);
  if ( v1984 )
  {
    v1052 = sub_1BCA91C(v1984, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1571;
  v1047->m_Items[93] = (DataMasterBase_o *)v1984;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[93],
    (int64_t)v1984,
    v1985,
    v1986,
    v1987,
    v1988,
    v1989,
    v1990);
  v1994 = (CvMaster_o *)sub_1BCAA2C(CvMaster_TypeInfo, v1991, v1992, v1993);
  CvMaster___ctor(v1994, 0LL);
  if ( v1994 )
  {
    v1052 = sub_1BCA91C(v1994, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1571;
  v1047->m_Items[94] = (DataMasterBase_o *)v1994;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[94],
    (int64_t)v1994,
    v1995,
    v1996,
    v1997,
    v1998,
    v1999,
    v2000);
  v2004 = (TreasureDvcLvMaster_o *)sub_1BCAA2C(TreasureDvcLvMaster_TypeInfo, v2001, v2002, v2003);
  TreasureDvcLvMaster___ctor(v2004, 0LL);
  if ( v2004 )
  {
    v1052 = sub_1BCA91C(v2004, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1571;
  v1047->m_Items[95] = (DataMasterBase_o *)v2004;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[95],
    (int64_t)v2004,
    v2005,
    v2006,
    v2007,
    v2008,
    v2009,
    v2010);
  v2014 = (TreasureDvcDetailMaster_o *)sub_1BCAA2C(TreasureDvcDetailMaster_TypeInfo, v2011, v2012, v2013);
  TreasureDvcDetailMaster___ctor(v2014, 0LL);
  if ( v2014 )
  {
    v1052 = sub_1BCA91C(v2014, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1571;
  v1047->m_Items[96] = (DataMasterBase_o *)v2014;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[96],
    (int64_t)v2014,
    v2015,
    v2016,
    v2017,
    v2018,
    v2019,
    v2020);
  v2024 = (UserFollowerMaster_o *)sub_1BCAA2C(UserFollowerMaster_TypeInfo, v2021, v2022, v2023);
  UserFollowerMaster___ctor(v2024, 0LL);
  if ( v2024 )
  {
    v1052 = sub_1BCA91C(v2024, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1571;
  v1047->m_Items[97] = (DataMasterBase_o *)v2024;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[97],
    (int64_t)v2024,
    v2025,
    v2026,
    v2027,
    v2028,
    v2029,
    v2030);
  v2034 = (NpcFollowerMaster_o *)sub_1BCAA2C(NpcFollowerMaster_TypeInfo, v2031, v2032, v2033);
  NpcFollowerMaster___ctor(v2034, 0LL);
  if ( v2034 )
  {
    v1052 = sub_1BCA91C(v2034, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1571;
  v1047->m_Items[98] = (DataMasterBase_o *)v2034;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[98],
    (int64_t)v2034,
    v2035,
    v2036,
    v2037,
    v2038,
    v2039,
    v2040);
  v2044 = (NpcServantFollowerMaster_o *)sub_1BCAA2C(NpcServantFollowerMaster_TypeInfo, v2041, v2042, v2043);
  NpcServantFollowerMaster___ctor(v2044, 0LL);
  if ( v2044 )
  {
    v1052 = sub_1BCA91C(v2044, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1571;
  v1047->m_Items[99] = (DataMasterBase_o *)v2044;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[99],
    (int64_t)v2044,
    v2045,
    v2046,
    v2047,
    v2048,
    v2049,
    v2050);
  v2054 = (UserEventMaster_o *)sub_1BCAA2C(UserEventMaster_TypeInfo, v2051, v2052, v2053);
  UserEventMaster___ctor(v2054, 0LL);
  if ( v2054 )
  {
    v1052 = sub_1BCA91C(v2054, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1571;
  v1047->m_Items[100] = (DataMasterBase_o *)v2054;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[100],
    (int64_t)v2054,
    v2055,
    v2056,
    v2057,
    v2058,
    v2059,
    v2060);
  v2064 = (UserShopMaster_o *)sub_1BCAA2C(UserShopMaster_TypeInfo, v2061, v2062, v2063);
  UserShopMaster___ctor(v2064, 0LL);
  if ( v2064 )
  {
    v1052 = sub_1BCA91C(v2064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1571;
  v1047->m_Items[101] = (DataMasterBase_o *)v2064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[101],
    (int64_t)v2064,
    v2065,
    v2066,
    v2067,
    v2068,
    v2069,
    v2070);
  v2074 = (UserContinueMaster_o *)sub_1BCAA2C(UserContinueMaster_TypeInfo, v2071, v2072, v2073);
  UserContinueMaster___ctor(v2074, 0LL);
  if ( v2074 )
  {
    v1052 = sub_1BCA91C(v2074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1571;
  v1047->m_Items[102] = (DataMasterBase_o *)v2074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[102],
    (int64_t)v2074,
    v2075,
    v2076,
    v2077,
    v2078,
    v2079,
    v2080);
  v2084 = (ConstantMaster_o *)sub_1BCAA2C(ConstantMaster_TypeInfo, v2081, v2082, v2083);
  ConstantMaster___ctor(v2084, 0LL);
  if ( v2084 )
  {
    v1052 = sub_1BCA91C(v2084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1571;
  v1047->m_Items[103] = (DataMasterBase_o *)v2084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[103],
    (int64_t)v2084,
    v2085,
    v2086,
    v2087,
    v2088,
    v2089,
    v2090);
  v2094 = (ConstantLongMaster_o *)sub_1BCAA2C(ConstantLongMaster_TypeInfo, v2091, v2092, v2093);
  ConstantLongMaster___ctor(v2094, 0LL);
  if ( v2094 )
  {
    v1052 = sub_1BCA91C(v2094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1571;
  v1047->m_Items[104] = (DataMasterBase_o *)v2094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[104],
    (int64_t)v2094,
    v2095,
    v2096,
    v2097,
    v2098,
    v2099,
    v2100);
  v2104 = (ConstantStrMaster_o *)sub_1BCAA2C(ConstantStrMaster_TypeInfo, v2101, v2102, v2103);
  ConstantStrMaster___ctor(v2104, 0LL);
  if ( v2104 )
  {
    v1052 = sub_1BCA91C(v2104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1571;
  v1047->m_Items[105] = (DataMasterBase_o *)v2104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[105],
    (int64_t)v2104,
    v2105,
    v2106,
    v2107,
    v2108,
    v2109,
    v2110);
  v2114 = (AiMaster_o *)sub_1BCAA2C(AiMaster_TypeInfo, v2111, v2112, v2113);
  AiMaster___ctor(v2114, 0LL);
  if ( v2114 )
  {
    v1052 = sub_1BCA91C(v2114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1571;
  v1047->m_Items[106] = (DataMasterBase_o *)v2114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[106],
    (int64_t)v2114,
    v2115,
    v2116,
    v2117,
    v2118,
    v2119,
    v2120);
  v2124 = (AiActMaster_o *)sub_1BCAA2C(AiActMaster_TypeInfo, v2121, v2122, v2123);
  AiActMaster___ctor(v2124, 0LL);
  if ( v2124 )
  {
    v1052 = sub_1BCA91C(v2124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1571;
  v1047->m_Items[107] = (DataMasterBase_o *)v2124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[107],
    (int64_t)v2124,
    v2125,
    v2126,
    v2127,
    v2128,
    v2129,
    v2130);
  v2134 = (AttriRelationMaster_o *)sub_1BCAA2C(AttriRelationMaster_TypeInfo, v2131, v2132, v2133);
  AttriRelationMaster___ctor(v2134, 0LL);
  if ( v2134 )
  {
    v1052 = sub_1BCA91C(v2134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1571;
  v1047->m_Items[108] = (DataMasterBase_o *)v2134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[108],
    (int64_t)v2134,
    v2135,
    v2136,
    v2137,
    v2138,
    v2139,
    v2140);
  v2144 = (ClassRelationMaster_o *)sub_1BCAA2C(ClassRelationMaster_TypeInfo, v2141, v2142, v2143);
  ClassRelationMaster___ctor(v2144, 0LL);
  if ( v2144 )
  {
    v1052 = sub_1BCA91C(v2144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1571;
  v1047->m_Items[109] = (DataMasterBase_o *)v2144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[109],
    (int64_t)v2144,
    v2145,
    v2146,
    v2147,
    v2148,
    v2149,
    v2150);
  v2154 = (EffectMaster_o *)sub_1BCAA2C(EffectMaster_TypeInfo, v2151, v2152, v2153);
  EffectMaster___ctor(v2154, 0LL);
  if ( v2154 )
  {
    v1052 = sub_1BCA91C(v2154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1571;
  v1047->m_Items[110] = (DataMasterBase_o *)v2154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[110],
    (int64_t)v2154,
    v2155,
    v2156,
    v2157,
    v2158,
    v2159,
    v2160);
  v2164 = (EquipImageMaster_o *)sub_1BCAA2C(EquipImageMaster_TypeInfo, v2161, v2162, v2163);
  EquipImageMaster___ctor(v2164, 0LL);
  if ( v2164 )
  {
    v1052 = sub_1BCA91C(v2164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1571;
  v1047->m_Items[111] = (DataMasterBase_o *)v2164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[111],
    (int64_t)v2164,
    v2165,
    v2166,
    v2167,
    v2168,
    v2169,
    v2170);
  v2174 = (ServantVoiceMaster_o *)sub_1BCAA2C(ServantVoiceMaster_TypeInfo, v2171, v2172, v2173);
  ServantVoiceMaster___ctor(v2174, 0LL);
  if ( v2174 )
  {
    v1052 = sub_1BCA91C(v2174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1571;
  v1047->m_Items[112] = (DataMasterBase_o *)v2174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[112],
    (int64_t)v2174,
    v2175,
    v2176,
    v2177,
    v2178,
    v2179,
    v2180);
  v2184 = (CombineLimitMaster_o *)sub_1BCAA2C(CombineLimitMaster_TypeInfo, v2181, v2182, v2183);
  CombineLimitMaster___ctor(v2184, 0LL);
  if ( v2184 )
  {
    v1052 = sub_1BCA91C(v2184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1571;
  v1047->m_Items[113] = (DataMasterBase_o *)v2184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[113],
    (int64_t)v2184,
    v2185,
    v2186,
    v2187,
    v2188,
    v2189,
    v2190);
  v2194 = (CardMaster_o *)sub_1BCAA2C(CardMaster_TypeInfo, v2191, v2192, v2193);
  CardMaster___ctor(v2194, 0LL);
  if ( v2194 )
  {
    v1052 = sub_1BCA91C(v2194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1571;
  v1047->m_Items[114] = (DataMasterBase_o *)v2194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[114],
    (int64_t)v2194,
    v2195,
    v2196,
    v2197,
    v2198,
    v2199,
    v2200);
  v2204 = (CombineQpSvtEquipMaster_o *)sub_1BCAA2C(CombineQpSvtEquipMaster_TypeInfo, v2201, v2202, v2203);
  CombineQpSvtEquipMaster___ctor(v2204, 0LL);
  if ( v2204 )
  {
    v1052 = sub_1BCA91C(v2204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1571;
  v1047->m_Items[115] = (DataMasterBase_o *)v2204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[115],
    (int64_t)v2204,
    v2205,
    v2206,
    v2207,
    v2208,
    v2209,
    v2210);
  v2214 = (ServantRarityMaster_o *)sub_1BCAA2C(ServantRarityMaster_TypeInfo, v2211, v2212, v2213);
  ServantRarityMaster___ctor(v2214, 0LL);
  if ( v2214 )
  {
    v1052 = sub_1BCA91C(v2214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1571;
  v1047->m_Items[116] = (DataMasterBase_o *)v2214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[116],
    (int64_t)v2214,
    v2215,
    v2216,
    v2217,
    v2218,
    v2219,
    v2220);
  v2224 = (SetItemMaster_o *)sub_1BCAA2C(SetItemMaster_TypeInfo, v2221, v2222, v2223);
  SetItemMaster___ctor(v2224, 0LL);
  if ( v2224 )
  {
    v1052 = sub_1BCA91C(v2224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1571;
  v1047->m_Items[117] = (DataMasterBase_o *)v2224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[117],
    (int64_t)v2224,
    v2225,
    v2226,
    v2227,
    v2228,
    v2229,
    v2230);
  v2234 = (RecoverMaster_o *)sub_1BCAA2C(RecoverMaster_TypeInfo, v2231, v2232, v2233);
  RecoverMaster___ctor(v2234, 0LL);
  if ( v2234 )
  {
    v1052 = sub_1BCA91C(v2234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1571;
  v1047->m_Items[118] = (DataMasterBase_o *)v2234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[118],
    (int64_t)v2234,
    v2235,
    v2236,
    v2237,
    v2238,
    v2239,
    v2240);
  v2244 = (BannerMaster_o *)sub_1BCAA2C(BannerMaster_TypeInfo, v2241, v2242, v2243);
  BannerMaster___ctor(v2244, 0LL);
  if ( v2244 )
  {
    v1052 = sub_1BCA91C(v2244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1571;
  v1047->m_Items[119] = (DataMasterBase_o *)v2244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[119],
    (int64_t)v2244,
    v2245,
    v2246,
    v2247,
    v2248,
    v2249,
    v2250);
  v2254 = (ShopReleaseMaster_o *)sub_1BCAA2C(ShopReleaseMaster_TypeInfo, v2251, v2252, v2253);
  ShopReleaseMaster___ctor(v2254, 0LL);
  if ( v2254 )
  {
    v1052 = sub_1BCA91C(v2254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1571;
  v1047->m_Items[120] = (DataMasterBase_o *)v2254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[120],
    (int64_t)v2254,
    v2255,
    v2256,
    v2257,
    v2258,
    v2259,
    v2260);
  v2264 = (EventRewardMaster_o *)sub_1BCAA2C(EventRewardMaster_TypeInfo, v2261, v2262, v2263);
  EventRewardMaster___ctor(v2264, 0LL);
  if ( v2264 )
  {
    v1052 = sub_1BCA91C(v2264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1571;
  v1047->m_Items[121] = (DataMasterBase_o *)v2264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[121],
    (int64_t)v2264,
    v2265,
    v2266,
    v2267,
    v2268,
    v2269,
    v2270);
  v2274 = (EventDetailMaster_o *)sub_1BCAA2C(EventDetailMaster_TypeInfo, v2271, v2272, v2273);
  EventDetailMaster___ctor(v2274, 0LL);
  if ( v2274 )
  {
    v1052 = sub_1BCA91C(v2274, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1571;
  v1047->m_Items[122] = (DataMasterBase_o *)v2274;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[122],
    (int64_t)v2274,
    v2275,
    v2276,
    v2277,
    v2278,
    v2279,
    v2280);
  v2284 = (EventServantMaster_o *)sub_1BCAA2C(EventServantMaster_TypeInfo, v2281, v2282, v2283);
  EventServantMaster___ctor(v2284, 0LL);
  if ( v2284 )
  {
    v1052 = sub_1BCA91C(v2284, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1571;
  v1047->m_Items[123] = (DataMasterBase_o *)v2284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[123],
    (int64_t)v2284,
    v2285,
    v2286,
    v2287,
    v2288,
    v2289,
    v2290);
  v2294 = (BoxGachaMaster_o *)sub_1BCAA2C(BoxGachaMaster_TypeInfo, v2291, v2292, v2293);
  BoxGachaMaster___ctor(v2294, 0LL);
  if ( v2294 )
  {
    v1052 = sub_1BCA91C(v2294, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1571;
  v1047->m_Items[124] = (DataMasterBase_o *)v2294;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[124],
    (int64_t)v2294,
    v2295,
    v2296,
    v2297,
    v2298,
    v2299,
    v2300);
  v2304 = (BoxGachaBaseMaster_o *)sub_1BCAA2C(BoxGachaBaseMaster_TypeInfo, v2301, v2302, v2303);
  BoxGachaBaseMaster___ctor(v2304, 0LL);
  if ( v2304 )
  {
    v1052 = sub_1BCA91C(v2304, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1571;
  v1047->m_Items[125] = (DataMasterBase_o *)v2304;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[125],
    (int64_t)v2304,
    v2305,
    v2306,
    v2307,
    v2308,
    v2309,
    v2310);
  v2314 = (BoxGachaTalkMaster_o *)sub_1BCAA2C(BoxGachaTalkMaster_TypeInfo, v2311, v2312, v2313);
  BoxGachaTalkMaster___ctor(v2314, 0LL);
  if ( v2314 )
  {
    v1052 = sub_1BCA91C(v2314, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1571;
  v1047->m_Items[126] = (DataMasterBase_o *)v2314;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[126],
    (int64_t)v2314,
    v2315,
    v2316,
    v2317,
    v2318,
    v2319,
    v2320);
  v2324 = (UserBoxGachaMaster_o *)sub_1BCAA2C(UserBoxGachaMaster_TypeInfo, v2321, v2322, v2323);
  UserBoxGachaMaster___ctor(v2324, 0LL);
  if ( v2324 )
  {
    v1052 = sub_1BCA91C(v2324, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1571;
  v1047->m_Items[127] = (DataMasterBase_o *)v2324;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[127],
    (int64_t)v2324,
    v2325,
    v2326,
    v2327,
    v2328,
    v2329,
    v2330);
  v2334 = (BoxGachaHistoryMaster_o *)sub_1BCAA2C(BoxGachaHistoryMaster_TypeInfo, v2331, v2332, v2333);
  BoxGachaHistoryMaster___ctor(v2334, 0LL);
  if ( v2334 )
  {
    v1052 = sub_1BCA91C(v2334, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1571;
  v1047->m_Items[128] = (DataMasterBase_o *)v2334;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[128],
    (int64_t)v2334,
    v2335,
    v2336,
    v2337,
    v2338,
    v2339,
    v2340);
  v2344 = (BattleBgMaster_o *)sub_1BCAA2C(BattleBgMaster_TypeInfo, v2341, v2342, v2343);
  BattleBgMaster___ctor(v2344, 0LL);
  if ( v2344 )
  {
    v1052 = sub_1BCA91C(v2344, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1571;
  v1047->m_Items[129] = (DataMasterBase_o *)v2344;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[129],
    (int64_t)v2344,
    v2345,
    v2346,
    v2347,
    v2348,
    v2349,
    v2350);
  v2354 = (TipsBattleMaster_o *)sub_1BCAA2C(TipsBattleMaster_TypeInfo, v2351, v2352, v2353);
  TipsBattleMaster___ctor(v2354, 0LL);
  if ( v2354 )
  {
    v1052 = sub_1BCA91C(v2354, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1571;
  v1047->m_Items[130] = (DataMasterBase_o *)v2354;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[130],
    (int64_t)v2354,
    v2355,
    v2356,
    v2357,
    v2358,
    v2359,
    v2360);
  v2364 = (UserLoginMaster_o *)sub_1BCAA2C(UserLoginMaster_TypeInfo, v2361, v2362, v2363);
  UserLoginMaster___ctor(v2364, 0LL);
  if ( v2364 )
  {
    v1052 = sub_1BCA91C(v2364, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1571;
  v1047->m_Items[131] = (DataMasterBase_o *)v2364;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[131],
    (int64_t)v2364,
    v2365,
    v2366,
    v2367,
    v2368,
    v2369,
    v2370);
  v2374 = (VoiceMaster_o *)sub_1BCAA2C(VoiceMaster_TypeInfo, v2371, v2372, v2373);
  VoiceMaster___ctor(v2374, 0LL);
  if ( v2374 )
  {
    v1052 = sub_1BCA91C(v2374, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1571;
  v1047->m_Items[132] = (DataMasterBase_o *)v2374;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[132],
    (int64_t)v2374,
    v2375,
    v2376,
    v2377,
    v2378,
    v2379,
    v2380);
  v2384 = (EventRewardExtraMaster_o *)sub_1BCAA2C(EventRewardExtraMaster_TypeInfo, v2381, v2382, v2383);
  EventRewardExtraMaster___ctor(v2384, 0LL);
  if ( v2384 )
  {
    v1052 = sub_1BCA91C(v2384, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1571;
  v1047->m_Items[133] = (DataMasterBase_o *)v2384;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[133],
    (int64_t)v2384,
    v2385,
    v2386,
    v2387,
    v2388,
    v2389,
    v2390);
  v2394 = (EventMissionMaster_o *)sub_1BCAA2C(EventMissionMaster_TypeInfo, v2391, v2392, v2393);
  EventMissionMaster___ctor(v2394, 0LL);
  if ( v2394 )
  {
    v1052 = sub_1BCA91C(v2394, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1571;
  v1047->m_Items[134] = (DataMasterBase_o *)v2394;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[134],
    (int64_t)v2394,
    v2395,
    v2396,
    v2397,
    v2398,
    v2399,
    v2400);
  v2404 = (EventMissionActionMaster_o *)sub_1BCAA2C(EventMissionActionMaster_TypeInfo, v2401, v2402, v2403);
  EventMissionActionMaster___ctor(v2404, 0LL);
  if ( v2404 )
  {
    v1052 = sub_1BCA91C(v2404, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1571;
  v1047->m_Items[135] = (DataMasterBase_o *)v2404;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[135],
    (int64_t)v2404,
    v2405,
    v2406,
    v2407,
    v2408,
    v2409,
    v2410);
  v2414 = (EventMissionActionAddMaster_o *)sub_1BCAA2C(EventMissionActionAddMaster_TypeInfo, v2411, v2412, v2413);
  EventMissionActionAddMaster___ctor(v2414, 0LL);
  if ( v2414 )
  {
    v1052 = sub_1BCA91C(v2414, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1571;
  v1047->m_Items[136] = (DataMasterBase_o *)v2414;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[136],
    (int64_t)v2414,
    v2415,
    v2416,
    v2417,
    v2418,
    v2419,
    v2420);
  v2424 = (EventMissionConditionMaster_o *)sub_1BCAA2C(EventMissionConditionMaster_TypeInfo, v2421, v2422, v2423);
  EventMissionConditionMaster___ctor(v2424, 0LL);
  if ( v2424 )
  {
    v1052 = sub_1BCA91C(v2424, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1571;
  v1047->m_Items[137] = (DataMasterBase_o *)v2424;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[137],
    (int64_t)v2424,
    v2425,
    v2426,
    v2427,
    v2428,
    v2429,
    v2430);
  v2434 = (EventMissionCondDetailMaster_o *)sub_1BCAA2C(EventMissionCondDetailMaster_TypeInfo, v2431, v2432, v2433);
  EventMissionCondDetailMaster___ctor(v2434, 0LL);
  if ( v2434 )
  {
    v1052 = sub_1BCA91C(v2434, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1571;
  v1047->m_Items[138] = (DataMasterBase_o *)v2434;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[138],
    (int64_t)v2434,
    v2435,
    v2436,
    v2437,
    v2438,
    v2439,
    v2440);
  v2444 = (EventMissionAddMaster_o *)sub_1BCAA2C(EventMissionAddMaster_TypeInfo, v2441, v2442, v2443);
  EventMissionAddMaster___ctor(v2444, 0LL);
  if ( v2444 )
  {
    v1052 = sub_1BCA91C(v2444, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1571;
  v1047->m_Items[139] = (DataMasterBase_o *)v2444;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[139],
    (int64_t)v2444,
    v2445,
    v2446,
    v2447,
    v2448,
    v2449,
    v2450);
  v2454 = (CompleteMissionMaster_o *)sub_1BCAA2C(CompleteMissionMaster_TypeInfo, v2451, v2452, v2453);
  CompleteMissionMaster___ctor(v2454, 0LL);
  if ( v2454 )
  {
    v1052 = sub_1BCA91C(v2454, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1571;
  v1047->m_Items[140] = (DataMasterBase_o *)v2454;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[140],
    (int64_t)v2454,
    v2455,
    v2456,
    v2457,
    v2458,
    v2459,
    v2460);
  v2464 = (EventRewardSetMaster_o *)sub_1BCAA2C(EventRewardSetMaster_TypeInfo, v2461, v2462, v2463);
  EventRewardSetMaster___ctor(v2464, 0LL);
  if ( v2464 )
  {
    v1052 = sub_1BCA91C(v2464, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1571;
  v1047->m_Items[141] = (DataMasterBase_o *)v2464;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[141],
    (int64_t)v2464,
    v2465,
    v2466,
    v2467,
    v2468,
    v2469,
    v2470);
  v2474 = (UserEventMissionMaster_o *)sub_1BCAA2C(UserEventMissionMaster_TypeInfo, v2471, v2472, v2473);
  UserEventMissionMaster___ctor(v2474, 0LL);
  if ( v2474 )
  {
    v1052 = sub_1BCA91C(v2474, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1571;
  v1047->m_Items[142] = (DataMasterBase_o *)v2474;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[142],
    (int64_t)v2474,
    v2475,
    v2476,
    v2477,
    v2478,
    v2479,
    v2480);
  v2484 = (UserEventMissionCondDetailMaster_o *)sub_1BCAA2C(
                                                  UserEventMissionCondDetailMaster_TypeInfo,
                                                  v2481,
                                                  v2482,
                                                  v2483);
  UserEventMissionCondDetailMaster___ctor(v2484, 0LL);
  if ( v2484 )
  {
    v1052 = sub_1BCA91C(v2484, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1571;
  v1047->m_Items[143] = (DataMasterBase_o *)v2484;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[143],
    (int64_t)v2484,
    v2485,
    v2486,
    v2487,
    v2488,
    v2489,
    v2490);
  v2494 = (BoxGachaBaseDetailMaster_o *)sub_1BCAA2C(BoxGachaBaseDetailMaster_TypeInfo, v2491, v2492, v2493);
  BoxGachaBaseDetailMaster___ctor(v2494, 0LL);
  if ( v2494 )
  {
    v1052 = sub_1BCA91C(v2494, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1571;
  v1047->m_Items[144] = (DataMasterBase_o *)v2494;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[144],
    (int64_t)v2494,
    v2495,
    v2496,
    v2497,
    v2498,
    v2499,
    v2500);
  v2504 = (UserServantLeaderMaster_o *)sub_1BCAA2C(UserServantLeaderMaster_TypeInfo, v2501, v2502, v2503);
  UserServantLeaderMaster___ctor(v2504, 0LL);
  if ( v2504 )
  {
    v1052 = sub_1BCA91C(v2504, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1571;
  v1047->m_Items[145] = (DataMasterBase_o *)v2504;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[145],
    (int64_t)v2504,
    v2505,
    v2506,
    v2507,
    v2508,
    v2509,
    v2510);
  v2514 = (ClosedMessageMaster_o *)sub_1BCAA2C(ClosedMessageMaster_TypeInfo, v2511, v2512, v2513);
  ClosedMessageMaster___ctor(v2514, 0LL);
  if ( v2514 )
  {
    v1052 = sub_1BCA91C(v2514, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1571;
  v1047->m_Items[146] = (DataMasterBase_o *)v2514;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[146],
    (int64_t)v2514,
    v2515,
    v2516,
    v2517,
    v2518,
    v2519,
    v2520);
  v2524 = (FunctionGroupMaster_o *)sub_1BCAA2C(FunctionGroupMaster_TypeInfo, v2521, v2522, v2523);
  FunctionGroupMaster___ctor(v2524, 0LL);
  if ( v2524 )
  {
    v1052 = sub_1BCA91C(v2524, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1571;
  v1047->m_Items[147] = (DataMasterBase_o *)v2524;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[147],
    (int64_t)v2524,
    v2525,
    v2526,
    v2527,
    v2528,
    v2529,
    v2530);
  v2534 = (EventRaidMaster_o *)sub_1BCAA2C(EventRaidMaster_TypeInfo, v2531, v2532, v2533);
  EventRaidMaster___ctor(v2534, 0LL);
  if ( v2534 )
  {
    v1052 = sub_1BCA91C(v2534, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1571;
  v1047->m_Items[148] = (DataMasterBase_o *)v2534;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[148],
    (int64_t)v2534,
    v2535,
    v2536,
    v2537,
    v2538,
    v2539,
    v2540);
  v2544 = (TotalEventRaidMaster_o *)sub_1BCAA2C(TotalEventRaidMaster_TypeInfo, v2541, v2542, v2543);
  TotalEventRaidMaster___ctor(v2544, 0LL);
  if ( v2544 )
  {
    v1052 = sub_1BCA91C(v2544, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1571;
  v1047->m_Items[149] = (DataMasterBase_o *)v2544;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[149],
    (int64_t)v2544,
    v2545,
    v2546,
    v2547,
    v2548,
    v2549,
    v2550);
  v2554 = (UserEventRaidMaster_o *)sub_1BCAA2C(UserEventRaidMaster_TypeInfo, v2551, v2552, v2553);
  UserEventRaidMaster___ctor(v2554, 0LL);
  if ( v2554 )
  {
    v1052 = sub_1BCA91C(v2554, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1571;
  v1047->m_Items[150] = (DataMasterBase_o *)v2554;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[150],
    (int64_t)v2554,
    v2555,
    v2556,
    v2557,
    v2558,
    v2559,
    v2560);
  v2564 = (EventPointMaster_o *)sub_1BCAA2C(EventPointMaster_TypeInfo, v2561, v2562, v2563);
  EventPointMaster___ctor(v2564, 0LL);
  if ( v2564 )
  {
    v1052 = sub_1BCA91C(v2564, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1571;
  v1047->m_Items[151] = (DataMasterBase_o *)v2564;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[151],
    (int64_t)v2564,
    v2565,
    v2566,
    v2567,
    v2568,
    v2569,
    v2570);
  v2574 = (EventPointGroupMaster_o *)sub_1BCAA2C(EventPointGroupMaster_TypeInfo, v2571, v2572, v2573);
  EventPointGroupMaster___ctor(v2574, 0LL);
  if ( v2574 )
  {
    v1052 = sub_1BCA91C(v2574, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1571;
  v1047->m_Items[152] = (DataMasterBase_o *)v2574;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[152],
    (int64_t)v2574,
    v2575,
    v2576,
    v2577,
    v2578,
    v2579,
    v2580);
  v2584 = (TotalEventPointMaster_o *)sub_1BCAA2C(TotalEventPointMaster_TypeInfo, v2581, v2582, v2583);
  TotalEventPointMaster___ctor(v2584, 0LL);
  if ( v2584 )
  {
    v1052 = sub_1BCA91C(v2584, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1571;
  v1047->m_Items[153] = (DataMasterBase_o *)v2584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[153],
    (int64_t)v2584,
    v2585,
    v2586,
    v2587,
    v2588,
    v2589,
    v2590);
  v2594 = (UserEventPointMaster_o *)sub_1BCAA2C(UserEventPointMaster_TypeInfo, v2591, v2592, v2593);
  UserEventPointMaster___ctor(v2594, 0LL);
  if ( v2594 )
  {
    v1052 = sub_1BCA91C(v2594, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1571;
  v1047->m_Items[154] = (DataMasterBase_o *)v2594;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[154],
    (int64_t)v2594,
    v2595,
    v2596,
    v2597,
    v2598,
    v2599,
    v2600);
  v2604 = (EventPointUpperMaster_o *)sub_1BCAA2C(EventPointUpperMaster_TypeInfo, v2601, v2602, v2603);
  EventPointUpperMaster___ctor(v2604, 0LL);
  if ( v2604 )
  {
    v1052 = sub_1BCA91C(v2604, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1571;
  v1047->m_Items[155] = (DataMasterBase_o *)v2604;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[155],
    (int64_t)v2604,
    v2605,
    v2606,
    v2607,
    v2608,
    v2609,
    v2610);
  v2614 = (EventPointUpperReleaseMaster_o *)sub_1BCAA2C(EventPointUpperReleaseMaster_TypeInfo, v2611, v2612, v2613);
  EventPointUpperReleaseMaster___ctor(v2614, 0LL);
  if ( v2614 )
  {
    v1052 = sub_1BCA91C(v2614, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1571;
  v1047->m_Items[156] = (DataMasterBase_o *)v2614;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[156],
    (int64_t)v2614,
    v2615,
    v2616,
    v2617,
    v2618,
    v2619,
    v2620);
  v2624 = (EventRaceMaster_o *)sub_1BCAA2C(EventRaceMaster_TypeInfo, v2621, v2622, v2623);
  EventRaceMaster___ctor(v2624, 0LL);
  if ( v2624 )
  {
    v1052 = sub_1BCA91C(v2624, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1571;
  v1047->m_Items[157] = (DataMasterBase_o *)v2624;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[157],
    (int64_t)v2624,
    v2625,
    v2626,
    v2627,
    v2628,
    v2629,
    v2630);
  v2634 = (EventRaceResultMaster_o *)sub_1BCAA2C(EventRaceResultMaster_TypeInfo, v2631, v2632, v2633);
  EventRaceResultMaster___ctor(v2634, 0LL);
  if ( v2634 )
  {
    v1052 = sub_1BCA91C(v2634, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1571;
  v1047->m_Items[158] = (DataMasterBase_o *)v2634;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[158],
    (int64_t)v2634,
    v2635,
    v2636,
    v2637,
    v2638,
    v2639,
    v2640);
  v2644 = (QuestRacePointMaster_o *)sub_1BCAA2C(QuestRacePointMaster_TypeInfo, v2641, v2642, v2643);
  QuestRacePointMaster___ctor(v2644, 0LL);
  if ( v2644 )
  {
    v1052 = sub_1BCA91C(v2644, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1571;
  v1047->m_Items[159] = (DataMasterBase_o *)v2644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[159],
    (int64_t)v2644,
    v2645,
    v2646,
    v2647,
    v2648,
    v2649,
    v2650);
  v2654 = (UserEventRaceMaster_o *)sub_1BCAA2C(UserEventRaceMaster_TypeInfo, v2651, v2652, v2653);
  UserEventRaceMaster___ctor(v2654, 0LL);
  if ( v2654 )
  {
    v1052 = sub_1BCA91C(v2654, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1571;
  v1047->m_Items[160] = (DataMasterBase_o *)v2654;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[160],
    (int64_t)v2654,
    v2655,
    v2656,
    v2657,
    v2658,
    v2659,
    v2660);
  v2664 = (EventScriptMaster_o *)sub_1BCAA2C(EventScriptMaster_TypeInfo, v2661, v2662, v2663);
  EventScriptMaster___ctor(v2664, 0LL);
  if ( v2664 )
  {
    v1052 = sub_1BCA91C(v2664, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1571;
  v1047->m_Items[161] = (DataMasterBase_o *)v2664;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[161],
    (int64_t)v2664,
    v2665,
    v2666,
    v2667,
    v2668,
    v2669,
    v2670);
  v2674 = (EventScriptReleaseMaster_o *)sub_1BCAA2C(EventScriptReleaseMaster_TypeInfo, v2671, v2672, v2673);
  EventScriptReleaseMaster___ctor(v2674, 0LL);
  if ( v2674 )
  {
    v1052 = sub_1BCA91C(v2674, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1571;
  v1047->m_Items[162] = (DataMasterBase_o *)v2674;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[162],
    (int64_t)v2674,
    v2675,
    v2676,
    v2677,
    v2678,
    v2679,
    v2680);
  v2684 = (UserPresentHistoryMaster_o *)sub_1BCAA2C(UserPresentHistoryMaster_TypeInfo, v2681, v2682, v2683);
  UserPresentHistoryMaster___ctor(v2684, 0LL);
  if ( v2684 )
  {
    v1052 = sub_1BCA91C(v2684, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1571;
  v1047->m_Items[163] = (DataMasterBase_o *)v2684;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[163],
    (int64_t)v2684,
    v2685,
    v2686,
    v2687,
    v2688,
    v2689,
    v2690);
  v2694 = (MstMissionMaster_o *)sub_1BCAA2C(MstMissionMaster_TypeInfo, v2691, v2692, v2693);
  MstMissionMaster___ctor(v2694, 0LL);
  if ( v2694 )
  {
    v1052 = sub_1BCA91C(v2694, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1571;
  v1047->m_Items[164] = (DataMasterBase_o *)v2694;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[164],
    (int64_t)v2694,
    v2695,
    v2696,
    v2697,
    v2698,
    v2699,
    v2700);
  v2704 = (ServantExceedMaster_o *)sub_1BCAA2C(ServantExceedMaster_TypeInfo, v2701, v2702, v2703);
  ServantExceedMaster___ctor(v2704, 0LL);
  if ( v2704 )
  {
    v1052 = sub_1BCA91C(v2704, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1571;
  v1047->m_Items[165] = (DataMasterBase_o *)v2704;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[165],
    (int64_t)v2704,
    v2705,
    v2706,
    v2707,
    v2708,
    v2709,
    v2710);
  v2714 = (PartialMaintenanceMaster_o *)sub_1BCAA2C(PartialMaintenanceMaster_TypeInfo, v2711, v2712, v2713);
  PartialMaintenanceMaster___ctor(v2714, 0LL);
  if ( v2714 )
  {
    v1052 = sub_1BCA91C(v2714, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1571;
  v1047->m_Items[166] = (DataMasterBase_o *)v2714;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[166],
    (int64_t)v2714,
    v2715,
    v2716,
    v2717,
    v2718,
    v2719,
    v2720);
  v2724 = (GuideMaster_o *)sub_1BCAA2C(GuideMaster_TypeInfo, v2721, v2722, v2723);
  GuideMaster___ctor(v2724, 0LL);
  if ( v2724 )
  {
    v1052 = sub_1BCA91C(v2724, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1571;
  v1047->m_Items[167] = (DataMasterBase_o *)v2724;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[167],
    (int64_t)v2724,
    v2725,
    v2726,
    v2727,
    v2728,
    v2729,
    v2730);
  v2734 = (MstMissionDisplayInfoMaster_o *)sub_1BCAA2C(MstMissionDisplayInfoMaster_TypeInfo, v2731, v2732, v2733);
  MstMissionDisplayInfoMaster___ctor(v2734, 0LL);
  if ( v2734 )
  {
    v1052 = sub_1BCA91C(v2734, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1571;
  v1047->m_Items[168] = (DataMasterBase_o *)v2734;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[168],
    (int64_t)v2734,
    v2735,
    v2736,
    v2737,
    v2738,
    v2739,
    v2740);
  v2744 = (GachaGroupMaster_o *)sub_1BCAA2C(GachaGroupMaster_TypeInfo, v2741, v2742, v2743);
  GachaGroupMaster___ctor(v2744, 0LL);
  if ( v2744 )
  {
    v1052 = sub_1BCA91C(v2744, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1571;
  v1047->m_Items[169] = (DataMasterBase_o *)v2744;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[169],
    (int64_t)v2744,
    v2745,
    v2746,
    v2747,
    v2748,
    v2749,
    v2750);
  v2754 = (QuestResetMaster_o *)sub_1BCAA2C(QuestResetMaster_TypeInfo, v2751, v2752, v2753);
  QuestResetMaster___ctor(v2754, 0LL);
  if ( v2754 )
  {
    v1052 = sub_1BCA91C(v2754, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1571;
  v1047->m_Items[170] = (DataMasterBase_o *)v2754;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[170],
    (int64_t)v2754,
    v2755,
    v2756,
    v2757,
    v2758,
    v2759,
    v2760);
  v2764 = (WarAddMaster_o *)sub_1BCAA2C(WarAddMaster_TypeInfo, v2761, v2762, v2763);
  WarAddMaster___ctor(v2764, 0LL);
  if ( v2764 )
  {
    v1052 = sub_1BCA91C(v2764, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1571;
  v1047->m_Items[171] = (DataMasterBase_o *)v2764;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[171],
    (int64_t)v2764,
    v2765,
    v2766,
    v2767,
    v2768,
    v2769,
    v2770);
  v2774 = (EventItemDisplayMaster_o *)sub_1BCAA2C(EventItemDisplayMaster_TypeInfo, v2771, v2772, v2773);
  EventItemDisplayMaster___ctor(v2774, 0LL);
  if ( v2774 )
  {
    v1052 = sub_1BCA91C(v2774, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1571;
  v1047->m_Items[172] = (DataMasterBase_o *)v2774;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[172],
    (int64_t)v2774,
    v2775,
    v2776,
    v2777,
    v2778,
    v2779,
    v2780);
  v2784 = (EventItemDisplayGroupMaster_o *)sub_1BCAA2C(EventItemDisplayGroupMaster_TypeInfo, v2781, v2782, v2783);
  EventItemDisplayGroupMaster___ctor(v2784, 0LL);
  if ( v2784 )
  {
    v1052 = sub_1BCA91C(v2784, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1571;
  v1047->m_Items[173] = (DataMasterBase_o *)v2784;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[173],
    (int64_t)v2784,
    v2785,
    v2786,
    v2787,
    v2788,
    v2789,
    v2790);
  v2794 = (EventItemDisplayReleaseMaster_o *)sub_1BCAA2C(EventItemDisplayReleaseMaster_TypeInfo, v2791, v2792, v2793);
  EventItemDisplayReleaseMaster___ctor(v2794, 0LL);
  if ( v2794 )
  {
    v1052 = sub_1BCA91C(v2794, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1571;
  v1047->m_Items[174] = (DataMasterBase_o *)v2794;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[174],
    (int64_t)v2794,
    v2795,
    v2796,
    v2797,
    v2798,
    v2799,
    v2800);
  v2804 = (EventTutorialMaster_o *)sub_1BCAA2C(EventTutorialMaster_TypeInfo, v2801, v2802, v2803);
  EventTutorialMaster___ctor(v2804, 0LL);
  if ( v2804 )
  {
    v1052 = sub_1BCA91C(v2804, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1571;
  v1047->m_Items[175] = (DataMasterBase_o *)v2804;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[175],
    (int64_t)v2804,
    v2805,
    v2806,
    v2807,
    v2808,
    v2809,
    v2810);
  v2814 = (EventTutorialCondMaster_o *)sub_1BCAA2C(EventTutorialCondMaster_TypeInfo, v2811, v2812, v2813);
  EventTutorialCondMaster___ctor(v2814, 0LL);
  if ( v2814 )
  {
    v1052 = sub_1BCA91C(v2814, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1571;
  v1047->m_Items[176] = (DataMasterBase_o *)v2814;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[176],
    (int64_t)v2814,
    v2815,
    v2816,
    v2817,
    v2818,
    v2819,
    v2820);
  v2824 = (VoiceReleaseMaster_o *)sub_1BCAA2C(VoiceReleaseMaster_TypeInfo, v2821, v2822, v2823);
  VoiceReleaseMaster___ctor(v2824, 0LL);
  if ( v2824 )
  {
    v1052 = sub_1BCA91C(v2824, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1571;
  v1047->m_Items[177] = (DataMasterBase_o *)v2824;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[177],
    (int64_t)v2824,
    v2825,
    v2826,
    v2827,
    v2828,
    v2829,
    v2830);
  v2834 = (EventSuperBossMaster_o *)sub_1BCAA2C(EventSuperBossMaster_TypeInfo, v2831, v2832, v2833);
  EventSuperBossMaster___ctor(v2834, 0LL);
  if ( v2834 )
  {
    v1052 = sub_1BCA91C(v2834, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1571;
  v1047->m_Items[178] = (DataMasterBase_o *)v2834;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[178],
    (int64_t)v2834,
    v2835,
    v2836,
    v2837,
    v2838,
    v2839,
    v2840);
  v2844 = (UserSuperBossMaster_o *)sub_1BCAA2C(UserSuperBossMaster_TypeInfo, v2841, v2842, v2843);
  UserSuperBossMaster___ctor(v2844, 0LL);
  if ( v2844 )
  {
    v1052 = sub_1BCA91C(v2844, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1571;
  v1047->m_Items[179] = (DataMasterBase_o *)v2844;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[179],
    (int64_t)v2844,
    v2845,
    v2846,
    v2847,
    v2848,
    v2849,
    v2850);
  v2854 = (QuestScriptMaster_o *)sub_1BCAA2C(QuestScriptMaster_TypeInfo, v2851, v2852, v2853);
  QuestScriptMaster___ctor(v2854, 0LL);
  if ( v2854 )
  {
    v1052 = sub_1BCA91C(v2854, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1571;
  v1047->m_Items[180] = (DataMasterBase_o *)v2854;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[180],
    (int64_t)v2854,
    v2855,
    v2856,
    v2857,
    v2858,
    v2859,
    v2860);
  v2864 = (QuestScriptReleaseMaster_o *)sub_1BCAA2C(QuestScriptReleaseMaster_TypeInfo, v2861, v2862, v2863);
  QuestScriptReleaseMaster___ctor(v2864, 0LL);
  if ( v2864 )
  {
    v1052 = sub_1BCA91C(v2864, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1571;
  v1047->m_Items[181] = (DataMasterBase_o *)v2864;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[181],
    (int64_t)v2864,
    v2865,
    v2866,
    v2867,
    v2868,
    v2869,
    v2870);
  v2874 = (MaterialFolderMaster_o *)sub_1BCAA2C(MaterialFolderMaster_TypeInfo, v2871, v2872, v2873);
  MaterialFolderMaster___ctor(v2874, 0LL);
  if ( v2874 )
  {
    v1052 = sub_1BCA91C(v2874, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1571;
  v1047->m_Items[182] = (DataMasterBase_o *)v2874;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[182],
    (int64_t)v2874,
    v2875,
    v2876,
    v2877,
    v2878,
    v2879,
    v2880);
  v2884 = (RestrictionMaster_o *)sub_1BCAA2C(RestrictionMaster_TypeInfo, v2881, v2882, v2883);
  RestrictionMaster___ctor(v2884, 0LL);
  if ( v2884 )
  {
    v1052 = sub_1BCA91C(v2884, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1571;
  v1047->m_Items[183] = (DataMasterBase_o *)v2884;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[183],
    (int64_t)v2884,
    v2885,
    v2886,
    v2887,
    v2888,
    v2889,
    v2890);
  v2894 = (QuestRestrictionMaster_o *)sub_1BCAA2C(QuestRestrictionMaster_TypeInfo, v2891, v2892, v2893);
  QuestRestrictionMaster___ctor(v2894, 0LL);
  if ( v2894 )
  {
    v1052 = sub_1BCA91C(v2894, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1571;
  v1047->m_Items[184] = (DataMasterBase_o *)v2894;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[184],
    (int64_t)v2894,
    v2895,
    v2896,
    v2897,
    v2898,
    v2899,
    v2900);
  v2904 = (ServantVoiceRelationMaster_o *)sub_1BCAA2C(ServantVoiceRelationMaster_TypeInfo, v2901, v2902, v2903);
  ServantVoiceRelationMaster___ctor(v2904, 0LL);
  if ( v2904 )
  {
    v1052 = sub_1BCA91C(v2904, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1571;
  v1047->m_Items[185] = (DataMasterBase_o *)v2904;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[185],
    (int64_t)v2904,
    v2905,
    v2906,
    v2907,
    v2908,
    v2909,
    v2910);
  v2914 = (ShopDetailMaster_o *)sub_1BCAA2C(ShopDetailMaster_TypeInfo, v2911, v2912, v2913);
  ShopDetailMaster___ctor(v2914, 0LL);
  if ( v2914 )
  {
    v1052 = sub_1BCA91C(v2914, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1571;
  v1047->m_Items[186] = (DataMasterBase_o *)v2914;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[186],
    (int64_t)v2914,
    v2915,
    v2916,
    v2917,
    v2918,
    v2919,
    v2920);
  v2924 = (ServantScriptAddMaster_o *)sub_1BCAA2C(ServantScriptAddMaster_TypeInfo, v2921, v2922, v2923);
  ServantScriptAddMaster___ctor(v2924, 0LL);
  if ( v2924 )
  {
    v1052 = sub_1BCA91C(v2924, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1571;
  v1047->m_Items[187] = (DataMasterBase_o *)v2924;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[187],
    (int64_t)v2924,
    v2925,
    v2926,
    v2927,
    v2928,
    v2929,
    v2930);
  v2934 = (CombineMaster_o *)sub_1BCAA2C(CombineMaster_TypeInfo, v2931, v2932, v2933);
  CombineMaster___ctor(v2934, 0LL);
  if ( v2934 )
  {
    v1052 = sub_1BCA91C(v2934, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1571;
  v1047->m_Items[188] = (DataMasterBase_o *)v2934;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[188],
    (int64_t)v2934,
    v2935,
    v2936,
    v2937,
    v2938,
    v2939,
    v2940);
  v2944 = (AiFieldMaster_o *)sub_1BCAA2C(AiFieldMaster_TypeInfo, v2941, v2942, v2943);
  AiFieldMaster___ctor(v2944, 0LL);
  if ( v2944 )
  {
    v1052 = sub_1BCA91C(v2944, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1571;
  v1047->m_Items[189] = (DataMasterBase_o *)v2944;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[189],
    (int64_t)v2944,
    v2945,
    v2946,
    v2947,
    v2948,
    v2949,
    v2950);
  v2954 = (ServantCommentAddMaster_o *)sub_1BCAA2C(ServantCommentAddMaster_TypeInfo, v2951, v2952, v2953);
  ServantCommentAddMaster___ctor(v2954, 0LL);
  if ( v2954 )
  {
    v1052 = sub_1BCA91C(v2954, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1571;
  v1047->m_Items[190] = (DataMasterBase_o *)v2954;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[190],
    (int64_t)v2954,
    v2955,
    v2956,
    v2957,
    v2958,
    v2959,
    v2960);
  v2964 = (EventFilterMaster_o *)sub_1BCAA2C(EventFilterMaster_TypeInfo, v2961, v2962, v2963);
  EventFilterMaster___ctor(v2964, 0LL);
  if ( v2964 )
  {
    v1052 = sub_1BCA91C(v2964, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1571;
  v1047->m_Items[191] = (DataMasterBase_o *)v2964;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[191],
    (int64_t)v2964,
    v2965,
    v2966,
    v2967,
    v2968,
    v2969,
    v2970);
  v2974 = (UserSupportDeckMaster_o *)sub_1BCAA2C(UserSupportDeckMaster_TypeInfo, v2971, v2972, v2973);
  UserSupportDeckMaster___ctor(v2974, 0LL);
  if ( v2974 )
  {
    v1052 = sub_1BCA91C(v2974, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1571;
  v1047->m_Items[192] = (DataMasterBase_o *)v2974;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[192],
    (int64_t)v2974,
    v2975,
    v2976,
    v2977,
    v2978,
    v2979,
    v2980);
  v2984 = (EventRewardSceneMaster_o *)sub_1BCAA2C(EventRewardSceneMaster_TypeInfo, v2981, v2982, v2983);
  EventRewardSceneMaster___ctor(v2984, 0LL);
  if ( v2984 )
  {
    v1052 = sub_1BCA91C(v2984, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1571;
  v1047->m_Items[193] = (DataMasterBase_o *)v2984;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[193],
    (int64_t)v2984,
    v2985,
    v2986,
    v2987,
    v2988,
    v2989,
    v2990);
  v2994 = (EventVoicePlayMaster_o *)sub_1BCAA2C(EventVoicePlayMaster_TypeInfo, v2991, v2992, v2993);
  EventVoicePlayMaster___ctor(v2994, 0LL);
  if ( v2994 )
  {
    v1052 = sub_1BCA91C(v2994, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1571;
  v1047->m_Items[194] = (DataMasterBase_o *)v2994;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[194],
    (int64_t)v2994,
    v2995,
    v2996,
    v2997,
    v2998,
    v2999,
    v3000);
  v3004 = (GachaSubMaster_o *)sub_1BCAA2C(GachaSubMaster_TypeInfo, v3001, v3002, v3003);
  GachaSubMaster___ctor(v3004, 0LL);
  if ( v3004 )
  {
    v1052 = sub_1BCA91C(v3004, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1571;
  v1047->m_Items[195] = (DataMasterBase_o *)v3004;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[195],
    (int64_t)v3004,
    v3005,
    v3006,
    v3007,
    v3008,
    v3009,
    v3010);
  v3014 = (GachaDetailMaster_o *)sub_1BCAA2C(GachaDetailMaster_TypeInfo, v3011, v3012, v3013);
  GachaDetailMaster___ctor(v3014, 0LL);
  if ( v3014 )
  {
    v1052 = sub_1BCA91C(v3014, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1571;
  v1047->m_Items[196] = (DataMasterBase_o *)v3014;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[196],
    (int64_t)v3014,
    v3015,
    v3016,
    v3017,
    v3018,
    v3019,
    v3020);
  v3024 = (GachaBonusSelectMaster_o *)sub_1BCAA2C(GachaBonusSelectMaster_TypeInfo, v3021, v3022, v3023);
  GachaBonusSelectMaster___ctor(v3024, 0LL);
  if ( v3024 )
  {
    v1052 = sub_1BCA91C(v3024, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1571;
  v1047->m_Items[197] = (DataMasterBase_o *)v3024;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[197],
    (int64_t)v3024,
    v3025,
    v3026,
    v3027,
    v3028,
    v3029,
    v3030);
  v3034 = (GachaBonusSelectLineupMaster_o *)sub_1BCAA2C(GachaBonusSelectLineupMaster_TypeInfo, v3031, v3032, v3033);
  GachaBonusSelectLineupMaster___ctor(v3034, 0LL);
  if ( v3034 )
  {
    v1052 = sub_1BCA91C(v3034, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1571;
  v1047->m_Items[198] = (DataMasterBase_o *)v3034;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[198],
    (int64_t)v3034,
    v3035,
    v3036,
    v3037,
    v3038,
    v3039,
    v3040);
  v3044 = (ServantChangeMaster_o *)sub_1BCAA2C(ServantChangeMaster_TypeInfo, v3041, v3042, v3043);
  ServantChangeMaster___ctor(v3044, 0LL);
  if ( v3044 )
  {
    v1052 = sub_1BCA91C(v3044, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1571;
  v1047->m_Items[199] = (DataMasterBase_o *)v3044;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[199],
    (int64_t)v3044,
    v3045,
    v3046,
    v3047,
    v3048,
    v3049,
    v3050);
  v3054 = (VoiceCondMaster_o *)sub_1BCAA2C(VoiceCondMaster_TypeInfo, v3051, v3052, v3053);
  VoiceCondMaster___ctor(v3054, 0LL);
  if ( v3054 )
  {
    v1052 = sub_1BCA91C(v3054, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1571;
  v1047->m_Items[200] = (DataMasterBase_o *)v3054;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[200],
    (int64_t)v3054,
    v3055,
    v3056,
    v3057,
    v3058,
    v3059,
    v3060);
  v3064 = (BgmReleaseMaster_o *)sub_1BCAA2C(BgmReleaseMaster_TypeInfo, v3061, v3062, v3063);
  BgmReleaseMaster___ctor(v3064, 0LL);
  if ( v3064 )
  {
    v1052 = sub_1BCA91C(v3064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1571;
  v1047->m_Items[201] = (DataMasterBase_o *)v3064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[201],
    (int64_t)v3064,
    v3065,
    v3066,
    v3067,
    v3068,
    v3069,
    v3070);
  v3074 = (MyRoomAddMaster_o *)sub_1BCAA2C(MyRoomAddMaster_TypeInfo, v3071, v3072, v3073);
  MyRoomAddMaster___ctor(v3074, 0LL);
  if ( v3074 )
  {
    v1052 = sub_1BCA91C(v3074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1571;
  v1047->m_Items[202] = (DataMasterBase_o *)v3074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[202],
    (int64_t)v3074,
    v3075,
    v3076,
    v3077,
    v3078,
    v3079,
    v3080);
  v3084 = (ShopActionMaster_o *)sub_1BCAA2C(ShopActionMaster_TypeInfo, v3081, v3082, v3083);
  ShopActionMaster___ctor(v3084, 0LL);
  if ( v3084 )
  {
    v1052 = sub_1BCA91C(v3084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1571;
  v1047->m_Items[203] = (DataMasterBase_o *)v3084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[203],
    (int64_t)v3084,
    v3085,
    v3086,
    v3087,
    v3088,
    v3089,
    v3090);
  v3094 = (EventRewardSceneReleaseMaster_o *)sub_1BCAA2C(EventRewardSceneReleaseMaster_TypeInfo, v3091, v3092, v3093);
  EventRewardSceneReleaseMaster___ctor(v3094, 0LL);
  if ( v3094 )
  {
    v1052 = sub_1BCA91C(v3094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1571;
  v1047->m_Items[204] = (DataMasterBase_o *)v3094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[204],
    (int64_t)v3094,
    v3095,
    v3096,
    v3097,
    v3098,
    v3099,
    v3100);
  v3104 = (QuestBehaviorMaster_o *)sub_1BCAA2C(QuestBehaviorMaster_TypeInfo, v3101, v3102, v3103);
  QuestBehaviorMaster___ctor(v3104, 0LL);
  if ( v3104 )
  {
    v1052 = sub_1BCA91C(v3104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1571;
  v1047->m_Items[205] = (DataMasterBase_o *)v3104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[205],
    (int64_t)v3104,
    v3105,
    v3106,
    v3107,
    v3108,
    v3109,
    v3110);
  v3114 = (MapMaster_o *)sub_1BCAA2C(MapMaster_TypeInfo, v3111, v3112, v3113);
  MapMaster___ctor(v3114, 0LL);
  if ( v3114 )
  {
    v1052 = sub_1BCA91C(v3114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1571;
  v1047->m_Items[206] = (DataMasterBase_o *)v3114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[206],
    (int64_t)v3114,
    v3115,
    v3116,
    v3117,
    v3118,
    v3119,
    v3120);
  v3124 = (MapCondMaster_o *)sub_1BCAA2C(MapCondMaster_TypeInfo, v3121, v3122, v3123);
  MapCondMaster___ctor(v3124, 0LL);
  if ( v3124 )
  {
    v1052 = sub_1BCA91C(v3124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1571;
  v1047->m_Items[207] = (DataMasterBase_o *)v3124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[207],
    (int64_t)v3124,
    v3125,
    v3126,
    v3127,
    v3128,
    v3129,
    v3130);
  v3134 = (MapButtonMaster_o *)sub_1BCAA2C(MapButtonMaster_TypeInfo, v3131, v3132, v3133);
  MapButtonMaster___ctor(v3134, 0LL);
  if ( v3134 )
  {
    v1052 = sub_1BCA91C(v3134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1571;
  v1047->m_Items[208] = (DataMasterBase_o *)v3134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[208],
    (int64_t)v3134,
    v3135,
    v3136,
    v3137,
    v3138,
    v3139,
    v3140);
  v3144 = (BannerAddMaster_o *)sub_1BCAA2C(BannerAddMaster_TypeInfo, v3141, v3142, v3143);
  BannerAddMaster___ctor(v3144, 0LL);
  if ( v3144 )
  {
    v1052 = sub_1BCA91C(v3144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1571;
  v1047->m_Items[209] = (DataMasterBase_o *)v3144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[209],
    (int64_t)v3144,
    v3145,
    v3146,
    v3147,
    v3148,
    v3149,
    v3150);
  v3154 = (EventAddMaster_o *)sub_1BCAA2C(EventAddMaster_TypeInfo, v3151, v3152, v3153);
  EventAddMaster___ctor(v3154, 0LL);
  if ( v3154 )
  {
    v1052 = sub_1BCA91C(v3154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1571;
  v1047->m_Items[210] = (DataMasterBase_o *)v3154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[210],
    (int64_t)v3154,
    v3155,
    v3156,
    v3157,
    v3158,
    v3159,
    v3160);
  v3164 = (TotalLoginMaster_o *)sub_1BCAA2C(TotalLoginMaster_TypeInfo, v3161, v3162, v3163);
  TotalLoginMaster___ctor(v3164, 0LL);
  if ( v3164 )
  {
    v1052 = sub_1BCA91C(v3164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1571;
  v1047->m_Items[211] = (DataMasterBase_o *)v3164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[211],
    (int64_t)v3164,
    v3165,
    v3166,
    v3167,
    v3168,
    v3169,
    v3170);
  v3174 = (ServantFilterMaster_o *)sub_1BCAA2C(ServantFilterMaster_TypeInfo, v3171, v3172, v3173);
  ServantFilterMaster___ctor(v3174, 0LL);
  if ( v3174 )
  {
    v1052 = sub_1BCA91C(v3174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1571;
  v1047->m_Items[212] = (DataMasterBase_o *)v3174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[212],
    (int64_t)v3174,
    v3175,
    v3176,
    v3177,
    v3178,
    v3179,
    v3180);
  v3184 = (CombineCostumeMaster_o *)sub_1BCAA2C(CombineCostumeMaster_TypeInfo, v3181, v3182, v3183);
  CombineCostumeMaster___ctor(v3184, 0LL);
  if ( v3184 )
  {
    v1052 = sub_1BCA91C(v3184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1571;
  v1047->m_Items[213] = (DataMasterBase_o *)v3184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[213],
    (int64_t)v3184,
    v3185,
    v3186,
    v3187,
    v3188,
    v3189,
    v3190);
  v3194 = (ServantCostumeMaster_o *)sub_1BCAA2C(ServantCostumeMaster_TypeInfo, v3191, v3192, v3193);
  ServantCostumeMaster___ctor(v3194, 0LL);
  if ( v3194 )
  {
    v1052 = sub_1BCA91C(v3194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1571;
  v1047->m_Items[214] = (DataMasterBase_o *)v3194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[214],
    (int64_t)v3194,
    v3195,
    v3196,
    v3197,
    v3198,
    v3199,
    v3200);
  v3204 = (ServantCostumeReleaseMaster_o *)sub_1BCAA2C(ServantCostumeReleaseMaster_TypeInfo, v3201, v3202, v3203);
  ServantCostumeReleaseMaster___ctor(v3204, 0LL);
  if ( v3204 )
  {
    v1052 = sub_1BCA91C(v3204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1571;
  v1047->m_Items[215] = (DataMasterBase_o *)v3204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[215],
    (int64_t)v3204,
    v3205,
    v3206,
    v3207,
    v3208,
    v3209,
    v3210);
  v3214 = (UserFriendRequestHistoryMaster_o *)sub_1BCAA2C(UserFriendRequestHistoryMaster_TypeInfo, v3211, v3212, v3213);
  UserFriendRequestHistoryMaster___ctor(v3214, 0LL);
  if ( v3214 )
  {
    v1052 = sub_1BCA91C(v3214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1571;
  v1047->m_Items[216] = (DataMasterBase_o *)v3214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[216],
    (int64_t)v3214,
    v3215,
    v3216,
    v3217,
    v3218,
    v3219,
    v3220);
  v3224 = (UserBlacklistMaster_o *)sub_1BCAA2C(UserBlacklistMaster_TypeInfo, v3221, v3222, v3223);
  UserBlacklistMaster___ctor(v3224, 0LL);
  if ( v3224 )
  {
    v1052 = sub_1BCA91C(v3224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1571;
  v1047->m_Items[217] = (DataMasterBase_o *)v3224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[217],
    (int64_t)v3224,
    v3225,
    v3226,
    v3227,
    v3228,
    v3229,
    v3230);
  v3234 = (ItemSelectMaster_o *)sub_1BCAA2C(ItemSelectMaster_TypeInfo, v3231, v3232, v3233);
  ItemSelectMaster___ctor(v3234, 0LL);
  if ( v3234 )
  {
    v1052 = sub_1BCA91C(v3234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1571;
  v1047->m_Items[218] = (DataMasterBase_o *)v3234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[218],
    (int64_t)v3234,
    v3235,
    v3236,
    v3237,
    v3238,
    v3239,
    v3240);
  v3244 = (TotalEventRaceMaster_o *)sub_1BCAA2C(TotalEventRaceMaster_TypeInfo, v3241, v3242, v3243);
  TotalEventRaceMaster___ctor(v3244, 0LL);
  if ( v3244 )
  {
    v1052 = sub_1BCA91C(v3244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1571;
  v1047->m_Items[219] = (DataMasterBase_o *)v3244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[219],
    (int64_t)v3244,
    v3245,
    v3246,
    v3247,
    v3248,
    v3249,
    v3250);
  v3254 = (EventPointGroupAddMaster_o *)sub_1BCAA2C(EventPointGroupAddMaster_TypeInfo, v3251, v3252, v3253);
  EventPointGroupAddMaster___ctor(v3254, 0LL);
  if ( v3254 )
  {
    v1052 = sub_1BCA91C(v3254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1571;
  v1047->m_Items[220] = (DataMasterBase_o *)v3254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[220],
    (int64_t)v3254,
    v3255,
    v3256,
    v3257,
    v3258,
    v3259,
    v3260);
  v3264 = (VoicePlayGroupMaster_o *)sub_1BCAA2C(VoicePlayGroupMaster_TypeInfo, v3261, v3262, v3263);
  VoicePlayGroupMaster___ctor(v3264, 0LL);
  if ( v3264 )
  {
    v1052 = sub_1BCA91C(v3264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1571;
  v1047->m_Items[221] = (DataMasterBase_o *)v3264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[221],
    (int64_t)v3264,
    v3265,
    v3266,
    v3267,
    v3268,
    v3269,
    v3270);
  v3274 = (VoicePlayCondMaster_o *)sub_1BCAA2C(VoicePlayCondMaster_TypeInfo, v3271, v3272, v3273);
  VoicePlayCondMaster___ctor(v3274, 0LL);
  if ( v3274 )
  {
    v1052 = sub_1BCA91C(v3274, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1571;
  v1047->m_Items[222] = (DataMasterBase_o *)v3274;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[222],
    (int64_t)v3274,
    v3275,
    v3276,
    v3277,
    v3278,
    v3279,
    v3280);
  v3284 = (GachaStoryAdjustMaster_o *)sub_1BCAA2C(GachaStoryAdjustMaster_TypeInfo, v3281, v3282, v3283);
  GachaStoryAdjustMaster___ctor(v3284, 0LL);
  if ( v3284 )
  {
    v1052 = sub_1BCA91C(v3284, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1571;
  v1047->m_Items[223] = (DataMasterBase_o *)v3284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[223],
    (int64_t)v3284,
    v3285,
    v3286,
    v3287,
    v3288,
    v3289,
    v3290);
  v3294 = (ServantFlagMaster_o *)sub_1BCAA2C(ServantFlagMaster_TypeInfo, v3291, v3292, v3293);
  ServantFlagMaster___ctor(v3294, 0LL);
  if ( v3294 )
  {
    v1052 = sub_1BCA91C(v3294, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1571;
  v1047->m_Items[224] = (DataMasterBase_o *)v3294;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[224],
    (int64_t)v3294,
    v3295,
    v3296,
    v3297,
    v3298,
    v3299,
    v3300);
  v3304 = (ServantFlagReleaseMaster_o *)sub_1BCAA2C(ServantFlagReleaseMaster_TypeInfo, v3301, v3302, v3303);
  ServantFlagReleaseMaster___ctor(v3304, 0LL);
  if ( v3304 )
  {
    v1052 = sub_1BCA91C(v3304, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1571;
  v1047->m_Items[225] = (DataMasterBase_o *)v3304;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[225],
    (int64_t)v3304,
    v3305,
    v3306,
    v3307,
    v3308,
    v3309,
    v3310);
  v3314 = (EventLocationCampaignMaster_o *)sub_1BCAA2C(EventLocationCampaignMaster_TypeInfo, v3311, v3312, v3313);
  EventLocationCampaignMaster___ctor(v3314, 0LL);
  if ( v3314 )
  {
    v1052 = sub_1BCA91C(v3314, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1571;
  v1047->m_Items[226] = (DataMasterBase_o *)v3314;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[226],
    (int64_t)v3314,
    v3315,
    v3316,
    v3317,
    v3318,
    v3319,
    v3320);
  v3324 = (CampaignInfoMaster_o *)sub_1BCAA2C(CampaignInfoMaster_TypeInfo, v3321, v3322, v3323);
  CampaignInfoMaster___ctor(v3324, 0LL);
  if ( v3324 )
  {
    v1052 = sub_1BCA91C(v3324, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1571;
  v1047->m_Items[227] = (DataMasterBase_o *)v3324;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[227],
    (int64_t)v3324,
    v3325,
    v3326,
    v3327,
    v3328,
    v3329,
    v3330);
  v3334 = (DialogMessageMaster_o *)sub_1BCAA2C(DialogMessageMaster_TypeInfo, v3331, v3332, v3333);
  DialogMessageMaster___ctor(v3334, 0LL);
  if ( v3334 )
  {
    v1052 = sub_1BCA91C(v3334, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1571;
  v1047->m_Items[228] = (DataMasterBase_o *)v3334;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[228],
    (int64_t)v3334,
    v3335,
    v3336,
    v3337,
    v3338,
    v3339,
    v3340);
  v3344 = (ServantIndividualityMaster_o *)sub_1BCAA2C(ServantIndividualityMaster_TypeInfo, v3341, v3342, v3343);
  ServantIndividualityMaster___ctor(v3344, 0LL);
  if ( v3344 )
  {
    v1052 = sub_1BCA91C(v3344, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1571;
  v1047->m_Items[229] = (DataMasterBase_o *)v3344;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[229],
    (int64_t)v3344,
    v3345,
    v3346,
    v3347,
    v3348,
    v3349,
    v3350);
  v3354 = (BoardMessageMaster_o *)sub_1BCAA2C(BoardMessageMaster_TypeInfo, v3351, v3352, v3353);
  BoardMessageMaster___ctor(v3354, 0LL);
  if ( v3354 )
  {
    v1052 = sub_1BCA91C(v3354, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1571;
  v1047->m_Items[230] = (DataMasterBase_o *)v3354;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[230],
    (int64_t)v3354,
    v3355,
    v3356,
    v3357,
    v3358,
    v3359,
    v3360);
  v3364 = (BoardMessageReleaseMaster_o *)sub_1BCAA2C(BoardMessageReleaseMaster_TypeInfo, v3361, v3362, v3363);
  BoardMessageReleaseMaster___ctor(v3364, 0LL);
  if ( v3364 )
  {
    v1052 = sub_1BCA91C(v3364, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1571;
  v1047->m_Items[231] = (DataMasterBase_o *)v3364;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[231],
    (int64_t)v3364,
    v3365,
    v3366,
    v3367,
    v3368,
    v3369,
    v3370);
  v3374 = (EventServantFatigueMaster_o *)sub_1BCAA2C(EventServantFatigueMaster_TypeInfo, v3371, v3372, v3373);
  EventServantFatigueMaster___ctor(v3374, 0LL);
  if ( v3374 )
  {
    v1052 = sub_1BCA91C(v3374, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1571;
  v1047->m_Items[232] = (DataMasterBase_o *)v3374;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[232],
    (int64_t)v3374,
    v3375,
    v3376,
    v3377,
    v3378,
    v3379,
    v3380);
  v3384 = (UserEventDeckMaster_o *)sub_1BCAA2C(UserEventDeckMaster_TypeInfo, v3381, v3382, v3383);
  UserEventDeckMaster___ctor(v3384, 0LL);
  if ( v3384 )
  {
    v1052 = sub_1BCA91C(v3384, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1571;
  v1047->m_Items[233] = (DataMasterBase_o *)v3384;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[233],
    (int64_t)v3384,
    v3385,
    v3386,
    v3387,
    v3388,
    v3389,
    v3390);
  v3394 = (EventTowerMaster_o *)sub_1BCAA2C(EventTowerMaster_TypeInfo, v3391, v3392, v3393);
  EventTowerMaster___ctor(v3394, 0LL);
  if ( v3394 )
  {
    v1052 = sub_1BCA91C(v3394, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1571;
  v1047->m_Items[234] = (DataMasterBase_o *)v3394;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[234],
    (int64_t)v3394,
    v3395,
    v3396,
    v3397,
    v3398,
    v3399,
    v3400);
  v3404 = (EventTowerRewardMaster_o *)sub_1BCAA2C(EventTowerRewardMaster_TypeInfo, v3401, v3402, v3403);
  EventTowerRewardMaster___ctor(v3404, 0LL);
  if ( v3404 )
  {
    v1052 = sub_1BCA91C(v3404, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1571;
  v1047->m_Items[235] = (DataMasterBase_o *)v3404;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[235],
    (int64_t)v3404,
    v3405,
    v3406,
    v3407,
    v3408,
    v3409,
    v3410);
  v3414 = (EventBulletinBoardMaster_o *)sub_1BCAA2C(EventBulletinBoardMaster_TypeInfo, v3411, v3412, v3413);
  EventBulletinBoardMaster___ctor(v3414, 0LL);
  if ( v3414 )
  {
    v1052 = sub_1BCA91C(v3414, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1571;
  v1047->m_Items[236] = (DataMasterBase_o *)v3414;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[236],
    (int64_t)v3414,
    v3415,
    v3416,
    v3417,
    v3418,
    v3419,
    v3420);
  v3424 = (EventBulletinBoardReleaseMaster_o *)sub_1BCAA2C(
                                                 EventBulletinBoardReleaseMaster_TypeInfo,
                                                 v3421,
                                                 v3422,
                                                 v3423);
  EventBulletinBoardReleaseMaster___ctor(v3424, 0LL);
  if ( v3424 )
  {
    v1052 = sub_1BCA91C(v3424, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1571;
  v1047->m_Items[237] = (DataMasterBase_o *)v3424;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[237],
    (int64_t)v3424,
    v3425,
    v3426,
    v3427,
    v3428,
    v3429,
    v3430);
  v3434 = (EventFactoryMaster_o *)sub_1BCAA2C(EventFactoryMaster_TypeInfo, v3431, v3432, v3433);
  EventFactoryMaster___ctor(v3434, 0LL);
  if ( v3434 )
  {
    v1052 = sub_1BCA91C(v3434, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1571;
  v1047->m_Items[238] = (DataMasterBase_o *)v3434;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[238],
    (int64_t)v3434,
    v3435,
    v3436,
    v3437,
    v3438,
    v3439,
    v3440);
  v3444 = (ShopGroupMaster_o *)sub_1BCAA2C(ShopGroupMaster_TypeInfo, v3441, v3442, v3443);
  ShopGroupMaster___ctor(v3444, 0LL);
  if ( v3444 )
  {
    v1052 = sub_1BCA91C(v3444, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1571;
  v1047->m_Items[239] = (DataMasterBase_o *)v3444;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[239],
    (int64_t)v3444,
    v3445,
    v3446,
    v3447,
    v3448,
    v3449,
    v3450);
  v3454 = (AuraEffectMaster_o *)sub_1BCAA2C(AuraEffectMaster_TypeInfo, v3451, v3452, v3453);
  AuraEffectMaster___ctor(v3454, 0LL);
  if ( v3454 )
  {
    v1052 = sub_1BCA91C(v3454, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1571;
  v1047->m_Items[240] = (DataMasterBase_o *)v3454;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[240],
    (int64_t)v3454,
    v3455,
    v3456,
    v3457,
    v3458,
    v3459,
    v3460);
  v3464 = (AuraEffectPosOverwriteMaster_o *)sub_1BCAA2C(AuraEffectPosOverwriteMaster_TypeInfo, v3461, v3462, v3463);
  AuraEffectPosOverwriteMaster___ctor(v3464, 0LL);
  if ( v3464 )
  {
    v1052 = sub_1BCA91C(v3464, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1571;
  v1047->m_Items[241] = (DataMasterBase_o *)v3464;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[241],
    (int64_t)v3464,
    v3465,
    v3466,
    v3467,
    v3468,
    v3469,
    v3470);
  v3474 = (UserEventMissionFixMaster_o *)sub_1BCAA2C(UserEventMissionFixMaster_TypeInfo, v3471, v3472, v3473);
  UserEventMissionFixMaster___ctor(v3474, 0LL);
  if ( v3474 )
  {
    v1052 = sub_1BCA91C(v3474, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1571;
  v1047->m_Items[242] = (DataMasterBase_o *)v3474;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[242],
    (int64_t)v3474,
    v3475,
    v3476,
    v3477,
    v3478,
    v3479,
    v3480);
  v3484 = (NotEndEventMissionFixMaster_o *)sub_1BCAA2C(NotEndEventMissionFixMaster_TypeInfo, v3481, v3482, v3483);
  NotEndEventMissionFixMaster___ctor(v3484, 0LL);
  if ( v3484 )
  {
    v1052 = sub_1BCA91C(v3484, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1571;
  v1047->m_Items[243] = (DataMasterBase_o *)v3484;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[243],
    (int64_t)v3484,
    v3485,
    v3486,
    v3487,
    v3488,
    v3489,
    v3490);
  v3494 = (EnemyMstMaster_o *)sub_1BCAA2C(EnemyMstMaster_TypeInfo, v3491, v3492, v3493);
  EnemyMstMaster___ctor(v3494, 0LL);
  if ( v3494 )
  {
    v1052 = sub_1BCA91C(v3494, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1571;
  v1047->m_Items[244] = (DataMasterBase_o *)v3494;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[244],
    (int64_t)v3494,
    v3495,
    v3496,
    v3497,
    v3498,
    v3499,
    v3500);
  v3504 = (EnemyMstBattleMaster_o *)sub_1BCAA2C(EnemyMstBattleMaster_TypeInfo, v3501, v3502, v3503);
  EnemyMstBattleMaster___ctor(v3504, 0LL);
  if ( v3504 )
  {
    v1052 = sub_1BCA91C(v3504, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1571;
  v1047->m_Items[245] = (DataMasterBase_o *)v3504;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[245],
    (int64_t)v3504,
    v3505,
    v3506,
    v3507,
    v3508,
    v3509,
    v3510);
  v3514 = (ServantSkillReleaseMaster_o *)sub_1BCAA2C(ServantSkillReleaseMaster_TypeInfo, v3511, v3512, v3513);
  ServantSkillReleaseMaster___ctor(v3514, 0LL);
  if ( v3514 )
  {
    v1052 = sub_1BCA91C(v3514, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1571;
  v1047->m_Items[246] = (DataMasterBase_o *)v3514;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[246],
    (int64_t)v3514,
    v3515,
    v3516,
    v3517,
    v3518,
    v3519,
    v3520);
  v3524 = (ServantPassiveSkillReleaseMaster_o *)sub_1BCAA2C(
                                                  ServantPassiveSkillReleaseMaster_TypeInfo,
                                                  v3521,
                                                  v3522,
                                                  v3523);
  ServantPassiveSkillReleaseMaster___ctor(v3524, 0LL);
  if ( v3524 )
  {
    v1052 = sub_1BCA91C(v3524, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1571;
  v1047->m_Items[247] = (DataMasterBase_o *)v3524;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[247],
    (int64_t)v3524,
    v3525,
    v3526,
    v3527,
    v3528,
    v3529,
    v3530);
  v3534 = (ServantTreasureDeviceReleaseMaster_o *)sub_1BCAA2C(
                                                    ServantTreasureDeviceReleaseMaster_TypeInfo,
                                                    v3531,
                                                    v3532,
                                                    v3533);
  ServantTreasureDeviceReleaseMaster___ctor(v3534, 0LL);
  if ( v3534 )
  {
    v1052 = sub_1BCA91C(v3534, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1571;
  v1047->m_Items[248] = (DataMasterBase_o *)v3534;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[248],
    (int64_t)v3534,
    v3535,
    v3536,
    v3537,
    v3538,
    v3539,
    v3540);
  v3544 = (MapGimmickReleaseMaster_o *)sub_1BCAA2C(MapGimmickReleaseMaster_TypeInfo, v3541, v3542, v3543);
  MapGimmickReleaseMaster___ctor(v3544, 0LL);
  if ( v3544 )
  {
    v1052 = sub_1BCA91C(v3544, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1571;
  v1047->m_Items[249] = (DataMasterBase_o *)v3544;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[249],
    (int64_t)v3544,
    v3545,
    v3546,
    v3547,
    v3548,
    v3549,
    v3550);
  v3554 = (CommandCodeMaster_o *)sub_1BCAA2C(CommandCodeMaster_TypeInfo, v3551, v3552, v3553);
  CommandCodeMaster___ctor(v3554, 0LL);
  if ( v3554 )
  {
    v1052 = sub_1BCA91C(v3554, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1571;
  v1047->m_Items[250] = (DataMasterBase_o *)v3554;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[250],
    (int64_t)v3554,
    v3555,
    v3556,
    v3557,
    v3558,
    v3559,
    v3560);
  v3564 = (ServantCommandCodeUnlockMaster_o *)sub_1BCAA2C(ServantCommandCodeUnlockMaster_TypeInfo, v3561, v3562, v3563);
  ServantCommandCodeUnlockMaster___ctor(v3564, 0LL);
  if ( v3564 )
  {
    v1052 = sub_1BCA91C(v3564, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1571;
  v1047->m_Items[251] = (DataMasterBase_o *)v3564;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[251],
    (int64_t)v3564,
    v3565,
    v3566,
    v3567,
    v3568,
    v3569,
    v3570);
  v3574 = (UserCommandCodeMaster_o *)sub_1BCAA2C(UserCommandCodeMaster_TypeInfo, v3571, v3572, v3573);
  UserCommandCodeMaster___ctor(v3574, 0LL);
  if ( v3574 )
  {
    v1052 = sub_1BCA91C(v3574, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1571;
  v1047->m_Items[252] = (DataMasterBase_o *)v3574;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[252],
    (int64_t)v3574,
    v3575,
    v3576,
    v3577,
    v3578,
    v3579,
    v3580);
  v3584 = (UserCommandCodeCollectionMaster_o *)sub_1BCAA2C(
                                                 UserCommandCodeCollectionMaster_TypeInfo,
                                                 v3581,
                                                 v3582,
                                                 v3583);
  UserCommandCodeCollectionMaster___ctor(v3584, 0LL);
  if ( v3584 )
  {
    v1052 = sub_1BCA91C(v3584, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1571;
  v1047->m_Items[253] = (DataMasterBase_o *)v3584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[253],
    (int64_t)v3584,
    v3585,
    v3586,
    v3587,
    v3588,
    v3589,
    v3590);
  v3594 = (UserServantCommandCodeMaster_o *)sub_1BCAA2C(UserServantCommandCodeMaster_TypeInfo, v3591, v3592, v3593);
  UserServantCommandCodeMaster___ctor(v3594, 0LL);
  if ( v3594 )
  {
    v1052 = sub_1BCA91C(v3594, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1571;
  v1047->m_Items[254] = (DataMasterBase_o *)v3594;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[254],
    (int64_t)v3594,
    v3595,
    v3596,
    v3597,
    v3598,
    v3599,
    v3600);
  v3604 = (UserServantCommandCardMaster_o *)sub_1BCAA2C(UserServantCommandCardMaster_TypeInfo, v3601, v3602, v3603);
  UserServantCommandCardMaster___ctor(v3604, 0LL);
  if ( v3604 )
  {
    v1052 = sub_1BCA91C(v3604, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1571;
  v1047->m_Items[255] = (DataMasterBase_o *)v3604;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[255],
    (int64_t)v3604,
    v3605,
    v3606,
    v3607,
    v3608,
    v3609,
    v3610);
  v3614 = (CommandCardRankParamMaster_o *)sub_1BCAA2C(CommandCardRankParamMaster_TypeInfo, v3611, v3612, v3613);
  CommandCardRankParamMaster___ctor(v3614, 0LL);
  if ( v3614 )
  {
    v1052 = sub_1BCA91C(v3614, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1571;
  v1047->m_Items[256] = (DataMasterBase_o *)v3614;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[256],
    (int64_t)v3614,
    v3615,
    v3616,
    v3617,
    v3618,
    v3619,
    v3620);
  v3624 = (CommandCodeSkillMaster_o *)sub_1BCAA2C(CommandCodeSkillMaster_TypeInfo, v3621, v3622, v3623);
  CommandCodeSkillMaster___ctor(v3624, 0LL);
  if ( v3624 )
  {
    v1052 = sub_1BCA91C(v3624, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1571;
  v1047->m_Items[257] = (DataMasterBase_o *)v3624;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[257],
    (int64_t)v3624,
    v3625,
    v3626,
    v3627,
    v3628,
    v3629,
    v3630);
  v3634 = (CommandCodeSkillReleaseMaster_o *)sub_1BCAA2C(CommandCodeSkillReleaseMaster_TypeInfo, v3631, v3632, v3633);
  CommandCodeSkillReleaseMaster___ctor(v3634, 0LL);
  if ( v3634 )
  {
    v1052 = sub_1BCA91C(v3634, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1571;
  v1047->m_Items[258] = (DataMasterBase_o *)v3634;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[258],
    (int64_t)v3634,
    v3635,
    v3636,
    v3637,
    v3638,
    v3639,
    v3640);
  v3644 = (CommandCodeCommentMaster_o *)sub_1BCAA2C(CommandCodeCommentMaster_TypeInfo, v3641, v3642, v3643);
  CommandCodeCommentMaster___ctor(v3644, 0LL);
  if ( v3644 )
  {
    v1052 = sub_1BCA91C(v3644, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1571;
  v1047->m_Items[259] = (DataMasterBase_o *)v3644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[259],
    (int64_t)v3644,
    v3645,
    v3646,
    v3647,
    v3648,
    v3649,
    v3650);
  v3654 = (EventStatusMaster_o *)sub_1BCAA2C(EventStatusMaster_TypeInfo, v3651, v3652, v3653);
  EventStatusMaster___ctor(v3654, 0LL);
  if ( v3654 )
  {
    v1052 = sub_1BCA91C(v3654, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1571;
  v1047->m_Items[260] = (DataMasterBase_o *)v3654;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[260],
    (int64_t)v3654,
    v3655,
    v3656,
    v3657,
    v3658,
    v3659,
    v3660);
  v3664 = (EventStatusQuestMaster_o *)sub_1BCAA2C(EventStatusQuestMaster_TypeInfo, v3661, v3662, v3663);
  EventStatusQuestMaster___ctor(v3664, 0LL);
  if ( v3664 )
  {
    v1052 = sub_1BCA91C(v3664, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1571;
  v1047->m_Items[261] = (DataMasterBase_o *)v3664;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[261],
    (int64_t)v3664,
    v3665,
    v3666,
    v3667,
    v3668,
    v3669,
    v3670);
  v3674 = (CommonRestrictionMaster_o *)sub_1BCAA2C(CommonRestrictionMaster_TypeInfo, v3671, v3672, v3673);
  CommonRestrictionMaster___ctor(v3674, 0LL);
  if ( v3674 )
  {
    v1052 = sub_1BCA91C(v3674, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1571;
  v1047->m_Items[262] = (DataMasterBase_o *)v3674;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[262],
    (int64_t)v3674,
    v3675,
    v3676,
    v3677,
    v3678,
    v3679,
    v3680);
  v3684 = (EventPointBuffMaster_o *)sub_1BCAA2C(EventPointBuffMaster_TypeInfo, v3681, v3682, v3683);
  EventPointBuffMaster___ctor(v3684, 0LL);
  if ( v3684 )
  {
    v1052 = sub_1BCA91C(v3684, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1571;
  v1047->m_Items[263] = (DataMasterBase_o *)v3684;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[263],
    (int64_t)v3684,
    v3685,
    v3686,
    v3687,
    v3688,
    v3689,
    v3690);
  v3694 = (UserFollowMaster_o *)sub_1BCAA2C(UserFollowMaster_TypeInfo, v3691, v3692, v3693);
  UserFollowMaster___ctor(v3694, 0LL);
  if ( v3694 )
  {
    v1052 = sub_1BCA91C(v3694, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1571;
  v1047->m_Items[264] = (DataMasterBase_o *)v3694;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[264],
    (int64_t)v3694,
    v3695,
    v3696,
    v3697,
    v3698,
    v3699,
    v3700);
  v3704 = (EventRewardGuideReleaseMaster_o *)sub_1BCAA2C(EventRewardGuideReleaseMaster_TypeInfo, v3701, v3702, v3703);
  EventRewardGuideReleaseMaster___ctor(v3704, 0LL);
  if ( v3704 )
  {
    v1052 = sub_1BCA91C(v3704, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1571;
  v1047->m_Items[265] = (DataMasterBase_o *)v3704;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[265],
    (int64_t)v3704,
    v3705,
    v3706,
    v3707,
    v3708,
    v3709,
    v3710);
  v3714 = (NpcServantEquipMaster_o *)sub_1BCAA2C(NpcServantEquipMaster_TypeInfo, v3711, v3712, v3713);
  NpcServantEquipMaster___ctor(v3714, 0LL);
  if ( v3714 )
  {
    v1052 = sub_1BCA91C(v3714, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1571;
  v1047->m_Items[266] = (DataMasterBase_o *)v3714;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[266],
    (int64_t)v3714,
    v3715,
    v3716,
    v3717,
    v3718,
    v3719,
    v3720);
  v3724 = (EventCampaignReleaseMaster_o *)sub_1BCAA2C(EventCampaignReleaseMaster_TypeInfo, v3721, v3722, v3723);
  EventCampaignReleaseMaster___ctor(v3724, 0LL);
  if ( v3724 )
  {
    v1052 = sub_1BCA91C(v3724, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1571;
  v1047->m_Items[267] = (DataMasterBase_o *)v3724;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[267],
    (int64_t)v3724,
    v3725,
    v3726,
    v3727,
    v3728,
    v3729,
    v3730);
  v3734 = (ServantMaterialFolderMaster_o *)sub_1BCAA2C(ServantMaterialFolderMaster_TypeInfo, v3731, v3732, v3733);
  ServantMaterialFolderMaster___ctor(v3734, 0LL);
  if ( v3734 )
  {
    v1052 = sub_1BCA91C(v3734, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1571;
  v1047->m_Items[268] = (DataMasterBase_o *)v3734;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[268],
    (int64_t)v3734,
    v3735,
    v3736,
    v3737,
    v3738,
    v3739,
    v3740);
  v3744 = (EventEquipSkillReleaseMaster_o *)sub_1BCAA2C(EventEquipSkillReleaseMaster_TypeInfo, v3741, v3742, v3743);
  EventEquipSkillReleaseMaster___ctor(v3744, 0LL);
  if ( v3744 )
  {
    v1052 = sub_1BCA91C(v3744, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1571;
  v1047->m_Items[269] = (DataMasterBase_o *)v3744;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[269],
    (int64_t)v3744,
    v3745,
    v3746,
    v3747,
    v3748,
    v3749,
    v3750);
  v3754 = (EventPointActivityMaster_o *)sub_1BCAA2C(EventPointActivityMaster_TypeInfo, v3751, v3752, v3753);
  EventPointActivityMaster___ctor(v3754, 0LL);
  if ( v3754 )
  {
    v1052 = sub_1BCA91C(v3754, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1571;
  v1047->m_Items[270] = (DataMasterBase_o *)v3754;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[270],
    (int64_t)v3754,
    v3755,
    v3756,
    v3757,
    v3758,
    v3759,
    v3760);
  v3764 = (FunctionCategoryMaster_o *)sub_1BCAA2C(FunctionCategoryMaster_TypeInfo, v3761, v3762, v3763);
  FunctionCategoryMaster___ctor(v3764, 0LL);
  if ( v3764 )
  {
    v1052 = sub_1BCA91C(v3764, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1571;
  v1047->m_Items[271] = (DataMasterBase_o *)v3764;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[271],
    (int64_t)v3764,
    v3765,
    v3766,
    v3767,
    v3768,
    v3769,
    v3770);
  v3774 = (QuestPickupMaster_o *)sub_1BCAA2C(QuestPickupMaster_TypeInfo, v3771, v3772, v3773);
  QuestPickupMaster___ctor(v3774, 0LL);
  if ( v3774 )
  {
    v1052 = sub_1BCA91C(v3774, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1571;
  v1047->m_Items[272] = (DataMasterBase_o *)v3774;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[272],
    (int64_t)v3774,
    v3775,
    v3776,
    v3777,
    v3778,
    v3779,
    v3780);
  v3784 = (EventUiMaster_o *)sub_1BCAA2C(EventUiMaster_TypeInfo, v3781, v3782, v3783);
  EventUiMaster___ctor(v3784, 0LL);
  if ( v3784 )
  {
    v1052 = sub_1BCA91C(v3784, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1571;
  v1047->m_Items[273] = (DataMasterBase_o *)v3784;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[273],
    (int64_t)v3784,
    v3785,
    v3786,
    v3787,
    v3788,
    v3789,
    v3790);
  v3794 = (EventUiReleaseMaster_o *)sub_1BCAA2C(EventUiReleaseMaster_TypeInfo, v3791, v3792, v3793);
  EventUiReleaseMaster___ctor(v3794, 0LL);
  if ( v3794 )
  {
    v1052 = sub_1BCA91C(v3794, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1571;
  v1047->m_Items[274] = (DataMasterBase_o *)v3794;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[274],
    (int64_t)v3794,
    v3795,
    v3796,
    v3797,
    v3798,
    v3799,
    v3800);
  v3804 = (EventUiValueMaster_o *)sub_1BCAA2C(EventUiValueMaster_TypeInfo, v3801, v3802, v3803);
  EventUiValueMaster___ctor(v3804, 0LL);
  if ( v3804 )
  {
    v1052 = sub_1BCA91C(v3804, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1571;
  v1047->m_Items[275] = (DataMasterBase_o *)v3804;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[275],
    (int64_t)v3804,
    v3805,
    v3806,
    v3807,
    v3808,
    v3809,
    v3810);
  v3814 = (EventConquestRewardMaster_o *)sub_1BCAA2C(EventConquestRewardMaster_TypeInfo, v3811, v3812, v3813);
  EventConquestRewardMaster___ctor(v3814, 0LL);
  if ( v3814 )
  {
    v1052 = sub_1BCA91C(v3814, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1571;
  v1047->m_Items[276] = (DataMasterBase_o *)v3814;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[276],
    (int64_t)v3814,
    v3815,
    v3816,
    v3817,
    v3818,
    v3819,
    v3820);
  v3824 = (NpcFollowerReleaseMaster_o *)sub_1BCAA2C(NpcFollowerReleaseMaster_TypeInfo, v3821, v3822, v3823);
  NpcFollowerReleaseMaster___ctor(v3824, 0LL);
  if ( v3824 )
  {
    v1052 = sub_1BCA91C(v3824, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1571;
  v1047->m_Items[277] = (DataMasterBase_o *)v3824;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[277],
    (int64_t)v3824,
    v3825,
    v3826,
    v3827,
    v3828,
    v3829,
    v3830);
  v3834 = (EventBonusFilterMaster_o *)sub_1BCAA2C(EventBonusFilterMaster_TypeInfo, v3831, v3832, v3833);
  EventBonusFilterMaster___ctor(v3834, 0LL);
  if ( v3834 )
  {
    v1052 = sub_1BCA91C(v3834, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1571;
  v1047->m_Items[278] = (DataMasterBase_o *)v3834;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[278],
    (int64_t)v3834,
    v3835,
    v3836,
    v3837,
    v3838,
    v3839,
    v3840);
  v3844 = (EventBonusFilterGroupInfoMaster_o *)sub_1BCAA2C(
                                                 EventBonusFilterGroupInfoMaster_TypeInfo,
                                                 v3841,
                                                 v3842,
                                                 v3843);
  EventBonusFilterGroupInfoMaster___ctor(v3844, 0LL);
  if ( v3844 )
  {
    v1052 = sub_1BCA91C(v3844, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1571;
  v1047->m_Items[279] = (DataMasterBase_o *)v3844;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[279],
    (int64_t)v3844,
    v3845,
    v3846,
    v3847,
    v3848,
    v3849,
    v3850);
  v3854 = (EventBonusFilterGroupMemberMaster_o *)sub_1BCAA2C(
                                                   EventBonusFilterGroupMemberMaster_TypeInfo,
                                                   v3851,
                                                   v3852,
                                                   v3853);
  EventBonusFilterGroupMemberMaster___ctor(v3854, 0LL);
  if ( v3854 )
  {
    v1052 = sub_1BCA91C(v3854, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1571;
  v1047->m_Items[280] = (DataMasterBase_o *)v3854;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[280],
    (int64_t)v3854,
    v3855,
    v3856,
    v3857,
    v3858,
    v3859,
    v3860);
  v3864 = (UserGachaExtraCountMaster_o *)sub_1BCAA2C(UserGachaExtraCountMaster_TypeInfo, v3861, v3862, v3863);
  UserGachaExtraCountMaster___ctor(v3864, 0LL);
  if ( v3864 )
  {
    v1052 = sub_1BCA91C(v3864, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1571;
  v1047->m_Items[281] = (DataMasterBase_o *)v3864;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[281],
    (int64_t)v3864,
    v3865,
    v3866,
    v3867,
    v3868,
    v3869,
    v3870);
  v3874 = (PrivilegeMaster_o *)sub_1BCAA2C(PrivilegeMaster_TypeInfo, v3871, v3872, v3873);
  PrivilegeMaster___ctor(v3874, 0LL);
  if ( v3874 )
  {
    v1052 = sub_1BCA91C(v3874, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1571;
  v1047->m_Items[282] = (DataMasterBase_o *)v3874;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[282],
    (int64_t)v3874,
    v3875,
    v3876,
    v3877,
    v3878,
    v3879,
    v3880);
  v3884 = (UserPrivilegeMaster_o *)sub_1BCAA2C(UserPrivilegeMaster_TypeInfo, v3881, v3882, v3883);
  UserPrivilegeMaster___ctor(v3884, 0LL);
  if ( v3884 )
  {
    v1052 = sub_1BCA91C(v3884, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1571;
  v1047->m_Items[283] = (DataMasterBase_o *)v3884;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[283],
    (int64_t)v3884,
    v3885,
    v3886,
    v3887,
    v3888,
    v3889,
    v3890);
  v3894 = (UserQuestRouteMaster_o *)sub_1BCAA2C(UserQuestRouteMaster_TypeInfo, v3891, v3892, v3893);
  UserQuestRouteMaster___ctor(v3894, 0LL);
  if ( v3894 )
  {
    v1052 = sub_1BCA91C(v3894, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1571;
  v1047->m_Items[284] = (DataMasterBase_o *)v3894;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[284],
    (int64_t)v3894,
    v3895,
    v3896,
    v3897,
    v3898,
    v3899,
    v3900);
  v3904 = (EventBossStatusUiMaster_o *)sub_1BCAA2C(EventBossStatusUiMaster_TypeInfo, v3901, v3902, v3903);
  EventBossStatusUiMaster___ctor(v3904, 0LL);
  if ( v3904 )
  {
    v1052 = sub_1BCA91C(v3904, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1571;
  v1047->m_Items[285] = (DataMasterBase_o *)v3904;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[285],
    (int64_t)v3904,
    v3905,
    v3906,
    v3907,
    v3908,
    v3909,
    v3910);
  v3914 = (CommonReleaseMaster_o *)sub_1BCAA2C(CommonReleaseMaster_TypeInfo, v3911, v3912, v3913);
  CommonReleaseMaster___ctor(v3914, 0LL);
  if ( v3914 )
  {
    v1052 = sub_1BCA91C(v3914, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1571;
  v1047->m_Items[286] = (DataMasterBase_o *)v3914;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[286],
    (int64_t)v3914,
    v3915,
    v3916,
    v3917,
    v3918,
    v3919,
    v3920);
  v3924 = (QuestSpotReleaseMaster_o *)sub_1BCAA2C(QuestSpotReleaseMaster_TypeInfo, v3921, v3922, v3923);
  QuestSpotReleaseMaster___ctor(v3924, 0LL);
  if ( v3924 )
  {
    v1052 = sub_1BCA91C(v3924, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1571;
  v1047->m_Items[287] = (DataMasterBase_o *)v3924;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[287],
    (int64_t)v3924,
    v3925,
    v3926,
    v3927,
    v3928,
    v3929,
    v3930);
  v3934 = (VoiceMaterialCondMaster_o *)sub_1BCAA2C(VoiceMaterialCondMaster_TypeInfo, v3931, v3932, v3933);
  VoiceMaterialCondMaster___ctor(v3934, 0LL);
  if ( v3934 )
  {
    v1052 = sub_1BCA91C(v3934, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1571;
  v1047->m_Items[288] = (DataMasterBase_o *)v3934;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[288],
    (int64_t)v3934,
    v3935,
    v3936,
    v3937,
    v3938,
    v3939,
    v3940);
  v3944 = (ClassRelationOverwriteMaster_o *)sub_1BCAA2C(ClassRelationOverwriteMaster_TypeInfo, v3941, v3942, v3943);
  ClassRelationOverwriteMaster___ctor(v3944, 0LL);
  if ( v3944 )
  {
    v1052 = sub_1BCA91C(v3944, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1571;
  v1047->m_Items[289] = (DataMasterBase_o *)v3944;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[289],
    (int64_t)v3944,
    v3945,
    v3946,
    v3947,
    v3948,
    v3949,
    v3950);
  v3954 = (EventGroupMaster_o *)sub_1BCAA2C(EventGroupMaster_TypeInfo, v3951, v3952, v3953);
  EventGroupMaster___ctor(v3954, 0LL);
  if ( v3954 )
  {
    v1052 = sub_1BCA91C(v3954, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1571;
  v1047->m_Items[290] = (DataMasterBase_o *)v3954;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[290],
    (int64_t)v3954,
    v3955,
    v3956,
    v3957,
    v3958,
    v3959,
    v3960);
  v3964 = (TotalBoxGachaMaster_o *)sub_1BCAA2C(TotalBoxGachaMaster_TypeInfo, v3961, v3962, v3963);
  TotalBoxGachaMaster___ctor(v3964, 0LL);
  if ( v3964 )
  {
    v1052 = sub_1BCA91C(v3964, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1571;
  v1047->m_Items[291] = (DataMasterBase_o *)v3964;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[291],
    (int64_t)v3964,
    v3965,
    v3966,
    v3967,
    v3968,
    v3969,
    v3970);
  v3974 = (ServantTreasureDeviceDamageMaster_o *)sub_1BCAA2C(
                                                   ServantTreasureDeviceDamageMaster_TypeInfo,
                                                   v3971,
                                                   v3972,
                                                   v3973);
  ServantTreasureDeviceDamageMaster___ctor(v3974, 0LL);
  if ( v3974 )
  {
    v1052 = sub_1BCA91C(v3974, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1571;
  v1047->m_Items[292] = (DataMasterBase_o *)v3974;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[292],
    (int64_t)v3974,
    v3975,
    v3976,
    v3977,
    v3978,
    v3979,
    v3980);
  v3984 = (UserEventServantFatigueMaster_o *)sub_1BCAA2C(UserEventServantFatigueMaster_TypeInfo, v3981, v3982, v3983);
  UserEventServantFatigueMaster___ctor(v3984, 0LL);
  if ( v3984 )
  {
    v1052 = sub_1BCA91C(v3984, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1571;
  v1047->m_Items[293] = (DataMasterBase_o *)v3984;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[293],
    (int64_t)v3984,
    v3985,
    v3986,
    v3987,
    v3988,
    v3989,
    v3990);
  v3994 = (EventRewardBgMaster_o *)sub_1BCAA2C(EventRewardBgMaster_TypeInfo, v3991, v3992, v3993);
  EventRewardBgMaster___ctor(v3994, 0LL);
  if ( v3994 )
  {
    v1052 = sub_1BCA91C(v3994, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1571;
  v1047->m_Items[294] = (DataMasterBase_o *)v3994;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[294],
    (int64_t)v3994,
    v3995,
    v3996,
    v3997,
    v3998,
    v3999,
    v4000);
  v4004 = (EventFatigueRecoveryMaster_o *)sub_1BCAA2C(EventFatigueRecoveryMaster_TypeInfo, v4001, v4002, v4003);
  EventFatigueRecoveryMaster___ctor(v4004, 0LL);
  if ( v4004 )
  {
    v1052 = sub_1BCA91C(v4004, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1571;
  v1047->m_Items[295] = (DataMasterBase_o *)v4004;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[295],
    (int64_t)v4004,
    v4005,
    v4006,
    v4007,
    v4008,
    v4009,
    v4010);
  v4014 = (EventBoostItemUsedMaster_o *)sub_1BCAA2C(EventBoostItemUsedMaster_TypeInfo, v4011, v4012, v4013);
  EventBoostItemUsedMaster___ctor(v4014, 0LL);
  if ( v4014 )
  {
    v1052 = sub_1BCA91C(v4014, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1571;
  v1047->m_Items[296] = (DataMasterBase_o *)v4014;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[296],
    (int64_t)v4014,
    v4015,
    v4016,
    v4017,
    v4018,
    v4019,
    v4020);
  v4024 = (StatusEffectPosOverwriteMaster_o *)sub_1BCAA2C(StatusEffectPosOverwriteMaster_TypeInfo, v4021, v4022, v4023);
  StatusEffectPosOverwriteMaster___ctor(v4024, 0LL);
  if ( v4024 )
  {
    v1052 = sub_1BCA91C(v4024, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1571;
  v1047->m_Items[297] = (DataMasterBase_o *)v4024;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[297],
    (int64_t)v4024,
    v4025,
    v4026,
    v4027,
    v4028,
    v4029,
    v4030);
  v4034 = (QuestPhaseDetailAddMaster_o *)sub_1BCAA2C(QuestPhaseDetailAddMaster_TypeInfo, v4031, v4032, v4033);
  QuestPhaseDetailAddMaster___ctor(v4034, 0LL);
  if ( v4034 )
  {
    v1052 = sub_1BCA91C(v4034, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1571;
  v1047->m_Items[298] = (DataMasterBase_o *)v4034;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[298],
    (int64_t)v4034,
    v4035,
    v4036,
    v4037,
    v4038,
    v4039,
    v4040);
  v4044 = (VoiceClosedMessageMaster_o *)sub_1BCAA2C(VoiceClosedMessageMaster_TypeInfo, v4041, v4042, v4043);
  VoiceClosedMessageMaster___ctor(v4044, 0LL);
  if ( v4044 )
  {
    v1052 = sub_1BCA91C(v4044, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1571;
  v1047->m_Items[299] = (DataMasterBase_o *)v4044;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[299],
    (int64_t)v4044,
    v4045,
    v4046,
    v4047,
    v4048,
    v4049,
    v4050);
  v4054 = (ReprintStageMaster_o *)sub_1BCAA2C(ReprintStageMaster_TypeInfo, v4051, v4052, v4053);
  ReprintStageMaster___ctor(v4054, 0LL);
  if ( v4054 )
  {
    v1052 = sub_1BCA91C(v4054, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1571;
  v1047->m_Items[300] = (DataMasterBase_o *)v4054;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[300],
    (int64_t)v4054,
    v4055,
    v4056,
    v4057,
    v4058,
    v4059,
    v4060);
  v4064 = (UserCombineExpMaster_o *)sub_1BCAA2C(UserCombineExpMaster_TypeInfo, v4061, v4062, v4063);
  UserCombineExpMaster___ctor(v4064, 0LL);
  if ( v4064 )
  {
    v1052 = sub_1BCA91C(v4064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1571;
  v1047->m_Items[301] = (DataMasterBase_o *)v4064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[301],
    (int64_t)v4064,
    v4065,
    v4066,
    v4067,
    v4068,
    v4069,
    v4070);
  v4074 = (EventBoardGameCellMaster_o *)sub_1BCAA2C(EventBoardGameCellMaster_TypeInfo, v4071, v4072, v4073);
  EventBoardGameCellMaster___ctor(v4074, 0LL);
  if ( v4074 )
  {
    v1052 = sub_1BCA91C(v4074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1571;
  v1047->m_Items[302] = (DataMasterBase_o *)v4074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[302],
    (int64_t)v4074,
    v4075,
    v4076,
    v4077,
    v4078,
    v4079,
    v4080);
  v4084 = (EventBoardGameTokenMaster_o *)sub_1BCAA2C(EventBoardGameTokenMaster_TypeInfo, v4081, v4082, v4083);
  EventBoardGameTokenMaster___ctor(v4084, 0LL);
  if ( v4084 )
  {
    v1052 = sub_1BCA91C(v4084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1571;
  v1047->m_Items[303] = (DataMasterBase_o *)v4084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[303],
    (int64_t)v4084,
    v4085,
    v4086,
    v4087,
    v4088,
    v4089,
    v4090);
  v4094 = (EventBoardGameTokenRewardMaster_o *)sub_1BCAA2C(
                                                 EventBoardGameTokenRewardMaster_TypeInfo,
                                                 v4091,
                                                 v4092,
                                                 v4093);
  EventBoardGameTokenRewardMaster___ctor(v4094, 0LL);
  if ( v4094 )
  {
    v1052 = sub_1BCA91C(v4094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1571;
  v1047->m_Items[304] = (DataMasterBase_o *)v4094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[304],
    (int64_t)v4094,
    v4095,
    v4096,
    v4097,
    v4098,
    v4099,
    v4100);
  v4104 = (UserEventBoardGameTokenMaster_o *)sub_1BCAA2C(UserEventBoardGameTokenMaster_TypeInfo, v4101, v4102, v4103);
  UserEventBoardGameTokenMaster___ctor(v4104, 0LL);
  if ( v4104 )
  {
    v1052 = sub_1BCA91C(v4104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1571;
  v1047->m_Items[305] = (DataMasterBase_o *)v4104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[305],
    (int64_t)v4104,
    v4105,
    v4106,
    v4107,
    v4108,
    v4109,
    v4110);
  v4114 = (ServantAnimationOverwriteMaster_o *)sub_1BCAA2C(
                                                 ServantAnimationOverwriteMaster_TypeInfo,
                                                 v4111,
                                                 v4112,
                                                 v4113);
  ServantAnimationOverwriteMaster___ctor(v4114, 0LL);
  if ( v4114 )
  {
    v1052 = sub_1BCA91C(v4114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1571;
  v1047->m_Items[306] = (DataMasterBase_o *)v4114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[306],
    (int64_t)v4114,
    v4115,
    v4116,
    v4117,
    v4118,
    v4119,
    v4120);
  v4124 = (OpeningMovieMaster_o *)sub_1BCAA2C(OpeningMovieMaster_TypeInfo, v4121, v4122, v4123);
  OpeningMovieMaster___ctor(v4124, 0LL);
  if ( v4124 )
  {
    v1052 = sub_1BCA91C(v4124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1571;
  v1047->m_Items[307] = (DataMasterBase_o *)v4124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[307],
    (int64_t)v4124,
    v4125,
    v4126,
    v4127,
    v4128,
    v4129,
    v4130);
  v4134 = (ServantLimitSpoilerProtectionMaster_o *)sub_1BCAA2C(
                                                     ServantLimitSpoilerProtectionMaster_TypeInfo,
                                                     v4131,
                                                     v4132,
                                                     v4133);
  ServantLimitSpoilerProtectionMaster___ctor(v4134, 0LL);
  if ( v4134 )
  {
    v1052 = sub_1BCA91C(v4134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1571;
  v1047->m_Items[308] = (DataMasterBase_o *)v4134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[308],
    (int64_t)v4134,
    v4135,
    v4136,
    v4137,
    v4138,
    v4139,
    v4140);
  v4144 = (PickupUserFollowerMaster_o *)sub_1BCAA2C(PickupUserFollowerMaster_TypeInfo, v4141, v4142, v4143);
  PickupUserFollowerMaster___ctor(v4144, 0LL);
  if ( v4144 )
  {
    v1052 = sub_1BCA91C(v4144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1571;
  v1047->m_Items[309] = (DataMasterBase_o *)v4144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[309],
    (int64_t)v4144,
    v4145,
    v4146,
    v4147,
    v4148,
    v4149,
    v4150);
  v4154 = (ServantCollectionMaster_o *)sub_1BCAA2C(ServantCollectionMaster_TypeInfo, v4151, v4152, v4153);
  ServantCollectionMaster___ctor(v4154, 0LL);
  if ( v4154 )
  {
    v1052 = sub_1BCA91C(v4154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1571;
  v1047->m_Items[310] = (DataMasterBase_o *)v4154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[310],
    (int64_t)v4154,
    v4155,
    v4156,
    v4157,
    v4158,
    v4159,
    v4160);
  v4164 = (GachaBehaviorMaster_o *)sub_1BCAA2C(GachaBehaviorMaster_TypeInfo, v4161, v4162, v4163);
  GachaBehaviorMaster___ctor(v4164, 0LL);
  if ( v4164 )
  {
    v1052 = sub_1BCA91C(v4164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1571;
  v1047->m_Items[311] = (DataMasterBase_o *)v4164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[311],
    (int64_t)v4164,
    v4165,
    v4166,
    v4167,
    v4168,
    v4169,
    v4170);
  v4174 = (EventQuestCooltimeMaster_o *)sub_1BCAA2C(EventQuestCooltimeMaster_TypeInfo, v4171, v4172, v4173);
  EventQuestCooltimeMaster___ctor(v4174, 0LL);
  if ( v4174 )
  {
    v1052 = sub_1BCA91C(v4174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1571;
  v1047->m_Items[312] = (DataMasterBase_o *)v4174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[312],
    (int64_t)v4174,
    v4175,
    v4176,
    v4177,
    v4178,
    v4179,
    v4180);
  v4184 = (UserEventQuestCooltimeMaster_o *)sub_1BCAA2C(UserEventQuestCooltimeMaster_TypeInfo, v4181, v4182, v4183);
  UserEventQuestCooltimeMaster___ctor(v4184, 0LL);
  if ( v4184 )
  {
    v1052 = sub_1BCA91C(v4184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1571;
  v1047->m_Items[313] = (DataMasterBase_o *)v4184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[313],
    (int64_t)v4184,
    v4185,
    v4186,
    v4187,
    v4188,
    v4189,
    v4190);
  v4194 = (BoostMaster_o *)sub_1BCAA2C(BoostMaster_TypeInfo, v4191, v4192, v4193);
  BoostMaster___ctor(v4194, 0LL);
  if ( v4194 )
  {
    v1052 = sub_1BCA91C(v4194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1571;
  v1047->m_Items[314] = (DataMasterBase_o *)v4194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[314],
    (int64_t)v4194,
    v4195,
    v4196,
    v4197,
    v4198,
    v4199,
    v4200);
  v4204 = (WarBoardMaster_o *)sub_1BCAA2C(WarBoardMaster_TypeInfo, v4201, v4202, v4203);
  WarBoardMaster___ctor(v4204, 0LL);
  if ( v4204 )
  {
    v1052 = sub_1BCA91C(v4204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1571;
  v1047->m_Items[315] = (DataMasterBase_o *)v4204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[315],
    (int64_t)v4204,
    v4205,
    v4206,
    v4207,
    v4208,
    v4209,
    v4210);
  v4214 = (WarBoardSquareMaster_o *)sub_1BCAA2C(WarBoardSquareMaster_TypeInfo, v4211, v4212, v4213);
  WarBoardSquareMaster___ctor(v4214, 0LL);
  if ( v4214 )
  {
    v1052 = sub_1BCA91C(v4214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1571;
  v1047->m_Items[316] = (DataMasterBase_o *)v4214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[316],
    (int64_t)v4214,
    v4215,
    v4216,
    v4217,
    v4218,
    v4219,
    v4220);
  v4224 = (WarBoardRoadMaster_o *)sub_1BCAA2C(WarBoardRoadMaster_TypeInfo, v4221, v4222, v4223);
  WarBoardRoadMaster___ctor(v4224, 0LL);
  if ( v4224 )
  {
    v1052 = sub_1BCA91C(v4224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1571;
  v1047->m_Items[317] = (DataMasterBase_o *)v4224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[317],
    (int64_t)v4224,
    v4225,
    v4226,
    v4227,
    v4228,
    v4229,
    v4230);
  v4234 = (WarBoardStageMaster_o *)sub_1BCAA2C(WarBoardStageMaster_TypeInfo, v4231, v4232, v4233);
  WarBoardStageMaster___ctor(v4234, 0LL);
  if ( v4234 )
  {
    v1052 = sub_1BCA91C(v4234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1571;
  v1047->m_Items[318] = (DataMasterBase_o *)v4234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[318],
    (int64_t)v4234,
    v4235,
    v4236,
    v4237,
    v4238,
    v4239,
    v4240);
  v4244 = (WarBoardActionPointMaster_o *)sub_1BCAA2C(WarBoardActionPointMaster_TypeInfo, v4241, v4242, v4243);
  WarBoardActionPointMaster___ctor(v4244, 0LL);
  if ( v4244 )
  {
    v1052 = sub_1BCA91C(v4244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1571;
  v1047->m_Items[319] = (DataMasterBase_o *)v4244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[319],
    (int64_t)v4244,
    v4245,
    v4246,
    v4247,
    v4248,
    v4249,
    v4250);
  v4254 = (WarBoardActionTrendMaster_o *)sub_1BCAA2C(WarBoardActionTrendMaster_TypeInfo, v4251, v4252, v4253);
  WarBoardActionTrendMaster___ctor(v4254, 0LL);
  if ( v4254 )
  {
    v1052 = sub_1BCA91C(v4254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1571;
  v1047->m_Items[320] = (DataMasterBase_o *)v4254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[320],
    (int64_t)v4254,
    v4255,
    v4256,
    v4257,
    v4258,
    v4259,
    v4260);
  v4264 = (WarBoardTacticalTrendMaster_o *)sub_1BCAA2C(WarBoardTacticalTrendMaster_TypeInfo, v4261, v4262, v4263);
  WarBoardTacticalTrendMaster___ctor(v4264, 0LL);
  if ( v4264 )
  {
    v1052 = sub_1BCA91C(v4264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1571;
  v1047->m_Items[321] = (DataMasterBase_o *)v4264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[321],
    (int64_t)v4264,
    v4265,
    v4266,
    v4267,
    v4268,
    v4269,
    v4270);
  v4274 = (WarBoardStageLayoutMaster_o *)sub_1BCAA2C(WarBoardStageLayoutMaster_TypeInfo, v4271, v4272, v4273);
  WarBoardStageLayoutMaster___ctor(v4274, 0LL);
  if ( v4274 )
  {
    v1052 = sub_1BCA91C(v4274, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1571;
  v1047->m_Items[322] = (DataMasterBase_o *)v4274;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[322],
    (int64_t)v4274,
    v4275,
    v4276,
    v4277,
    v4278,
    v4279,
    v4280);
  v4284 = (WarBoardStageNpcMaster_o *)sub_1BCAA2C(WarBoardStageNpcMaster_TypeInfo, v4281, v4282, v4283);
  WarBoardStageNpcMaster___ctor(v4284, 0LL);
  if ( v4284 )
  {
    v1052 = sub_1BCA91C(v4284, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1571;
  v1047->m_Items[323] = (DataMasterBase_o *)v4284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[323],
    (int64_t)v4284,
    v4285,
    v4286,
    v4287,
    v4288,
    v4289,
    v4290);
  v4294 = (WarBoardStageWallMaster_o *)sub_1BCAA2C(WarBoardStageWallMaster_TypeInfo, v4291, v4292, v4293);
  WarBoardStageWallMaster___ctor(v4294, 0LL);
  if ( v4294 )
  {
    v1052 = sub_1BCA91C(v4294, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1571;
  v1047->m_Items[324] = (DataMasterBase_o *)v4294;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[324],
    (int64_t)v4294,
    v4295,
    v4296,
    v4297,
    v4298,
    v4299,
    v4300);
  v4304 = (WarBoardAIMaster_o *)sub_1BCAA2C(WarBoardAIMaster_TypeInfo, v4301, v4302, v4303);
  WarBoardAIMaster___ctor(v4304, 0LL);
  if ( v4304 )
  {
    v1052 = sub_1BCA91C(v4304, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1571;
  v1047->m_Items[325] = (DataMasterBase_o *)v4304;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[325],
    (int64_t)v4304,
    v4305,
    v4306,
    v4307,
    v4308,
    v4309,
    v4310);
  v4314 = (WarBoardRatingBaseMaster_o *)sub_1BCAA2C(WarBoardRatingBaseMaster_TypeInfo, v4311, v4312, v4313);
  WarBoardRatingBaseMaster___ctor(v4314, 0LL);
  if ( v4314 )
  {
    v1052 = sub_1BCA91C(v4314, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1571;
  v1047->m_Items[326] = (DataMasterBase_o *)v4314;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[326],
    (int64_t)v4314,
    v4315,
    v4316,
    v4317,
    v4318,
    v4319,
    v4320);
  v4324 = (WarBoardRatingOffsetMaster_o *)sub_1BCAA2C(WarBoardRatingOffsetMaster_TypeInfo, v4321, v4322, v4323);
  WarBoardRatingOffsetMaster___ctor(v4324, 0LL);
  if ( v4324 )
  {
    v1052 = sub_1BCA91C(v4324, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1571;
  v1047->m_Items[327] = (DataMasterBase_o *)v4324;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[327],
    (int64_t)v4324,
    v4325,
    v4326,
    v4327,
    v4328,
    v4329,
    v4330);
  v4334 = (WarBoardItemMaster_o *)sub_1BCAA2C(WarBoardItemMaster_TypeInfo, v4331, v4332, v4333);
  WarBoardItemMaster___ctor(v4334, 0LL);
  if ( v4334 )
  {
    v1052 = sub_1BCA91C(v4334, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1571;
  v1047->m_Items[328] = (DataMasterBase_o *)v4334;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[328],
    (int64_t)v4334,
    v4335,
    v4336,
    v4337,
    v4338,
    v4339,
    v4340);
  v4344 = (WarBoardTreasureMaster_o *)sub_1BCAA2C(WarBoardTreasureMaster_TypeInfo, v4341, v4342, v4343);
  WarBoardTreasureMaster___ctor(v4344, 0LL);
  if ( v4344 )
  {
    v1052 = sub_1BCA91C(v4344, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1571;
  v1047->m_Items[329] = (DataMasterBase_o *)v4344;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[329],
    (int64_t)v4344,
    v4345,
    v4346,
    v4347,
    v4348,
    v4349,
    v4350);
  v4354 = (WarBoardQuestMaster_o *)sub_1BCAA2C(WarBoardQuestMaster_TypeInfo, v4351, v4352, v4353);
  WarBoardQuestMaster___ctor(v4354, 0LL);
  if ( v4354 )
  {
    v1052 = sub_1BCA91C(v4354, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1571;
  v1047->m_Items[330] = (DataMasterBase_o *)v4354;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[330],
    (int64_t)v4354,
    v4355,
    v4356,
    v4357,
    v4358,
    v4359,
    v4360);
  v4364 = (WarBoardDataMaster_o *)sub_1BCAA2C(WarBoardDataMaster_TypeInfo, v4361, v4362, v4363);
  WarBoardDataMaster___ctor(v4364, 0LL);
  if ( v4364 )
  {
    v1052 = sub_1BCA91C(v4364, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1571;
  v1047->m_Items[331] = (DataMasterBase_o *)v4364;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[331],
    (int64_t)v4364,
    v4365,
    v4366,
    v4367,
    v4368,
    v4369,
    v4370);
  v4374 = (WarBoardIndividualityClassMaster_o *)sub_1BCAA2C(
                                                  WarBoardIndividualityClassMaster_TypeInfo,
                                                  v4371,
                                                  v4372,
                                                  v4373);
  WarBoardIndividualityClassMaster___ctor(v4374, 0LL);
  if ( v4374 )
  {
    v1052 = sub_1BCA91C(v4374, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1571;
  v1047->m_Items[332] = (DataMasterBase_o *)v4374;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[332],
    (int64_t)v4374,
    v4375,
    v4376,
    v4377,
    v4378,
    v4379,
    v4380);
  v4384 = (WarBoardActionTrendConditionMaster_o *)sub_1BCAA2C(
                                                    WarBoardActionTrendConditionMaster_TypeInfo,
                                                    v4381,
                                                    v4382,
                                                    v4383);
  WarBoardActionTrendConditionMaster___ctor(v4384, 0LL);
  if ( v4384 )
  {
    v1052 = sub_1BCA91C(v4384, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1571;
  v1047->m_Items[333] = (DataMasterBase_o *)v4384;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[333],
    (int64_t)v4384,
    v4385,
    v4386,
    v4387,
    v4388,
    v4389,
    v4390);
  v4394 = (WarBoardActionPointClassMaster_o *)sub_1BCAA2C(WarBoardActionPointClassMaster_TypeInfo, v4391, v4392, v4393);
  WarBoardActionPointClassMaster___ctor(v4394, 0LL);
  if ( v4394 )
  {
    v1052 = sub_1BCA91C(v4394, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1571;
  v1047->m_Items[334] = (DataMasterBase_o *)v4394;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[334],
    (int64_t)v4394,
    v4395,
    v4396,
    v4397,
    v4398,
    v4399,
    v4400);
  v4404 = (EventPanelMapMaster_o *)sub_1BCAA2C(EventPanelMapMaster_TypeInfo, v4401, v4402, v4403);
  EventPanelMapMaster___ctor(v4404, 0LL);
  if ( v4404 )
  {
    v1052 = sub_1BCA91C(v4404, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1571;
  v1047->m_Items[335] = (DataMasterBase_o *)v4404;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[335],
    (int64_t)v4404,
    v4405,
    v4406,
    v4407,
    v4408,
    v4409,
    v4410);
  v4414 = (EventPanelMapDetailMaster_o *)sub_1BCAA2C(EventPanelMapDetailMaster_TypeInfo, v4411, v4412, v4413);
  EventPanelMapDetailMaster___ctor(v4414, 0LL);
  if ( v4414 )
  {
    v1052 = sub_1BCA91C(v4414, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1571;
  v1047->m_Items[336] = (DataMasterBase_o *)v4414;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[336],
    (int64_t)v4414,
    v4415,
    v4416,
    v4417,
    v4418,
    v4419,
    v4420);
  v4424 = (EventPanelSpotMaster_o *)sub_1BCAA2C(EventPanelSpotMaster_TypeInfo, v4421, v4422, v4423);
  EventPanelSpotMaster___ctor(v4424, 0LL);
  if ( v4424 )
  {
    v1052 = sub_1BCA91C(v4424, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1571;
  v1047->m_Items[337] = (DataMasterBase_o *)v4424;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[337],
    (int64_t)v4424,
    v4425,
    v4426,
    v4427,
    v4428,
    v4429,
    v4430);
  v4434 = (EventPanelScanMaster_o *)sub_1BCAA2C(EventPanelScanMaster_TypeInfo, v4431, v4432, v4433);
  EventPanelScanMaster___ctor(v4434, 0LL);
  if ( v4434 )
  {
    v1052 = sub_1BCA91C(v4434, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1571;
  v1047->m_Items[338] = (DataMasterBase_o *)v4434;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[338],
    (int64_t)v4434,
    v4435,
    v4436,
    v4437,
    v4438,
    v4439,
    v4440);
  v4444 = (CommonConsumeMaster_o *)sub_1BCAA2C(CommonConsumeMaster_TypeInfo, v4441, v4442, v4443);
  CommonConsumeMaster___ctor(v4444, 0LL);
  if ( v4444 )
  {
    v1052 = sub_1BCA91C(v4444, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1571;
  v1047->m_Items[339] = (DataMasterBase_o *)v4444;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[339],
    (int64_t)v4444,
    v4445,
    v4446,
    v4447,
    v4448,
    v4449,
    v4450);
  v4454 = (UserEventMapMaster_o *)sub_1BCAA2C(UserEventMapMaster_TypeInfo, v4451, v4452, v4453);
  UserEventMapMaster___ctor(v4454, 0LL);
  if ( v4454 )
  {
    v1052 = sub_1BCA91C(v4454, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1571;
  v1047->m_Items[340] = (DataMasterBase_o *)v4454;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[340],
    (int64_t)v4454,
    v4455,
    v4456,
    v4457,
    v4458,
    v4459,
    v4460);
  v4464 = (UserEventSpotMaster_o *)sub_1BCAA2C(UserEventSpotMaster_TypeInfo, v4461, v4462, v4463);
  UserEventSpotMaster___ctor(v4464, 0LL);
  if ( v4464 )
  {
    v1052 = sub_1BCA91C(v4464, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1571;
  v1047->m_Items[341] = (DataMasterBase_o *)v4464;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[341],
    (int64_t)v4464,
    v4465,
    v4466,
    v4467,
    v4468,
    v4469,
    v4470);
  v4474 = (WarGroupMaster_o *)sub_1BCAA2C(WarGroupMaster_TypeInfo, v4471, v4472, v4473);
  WarGroupMaster___ctor(v4474, 0LL);
  if ( v4474 )
  {
    v1052 = sub_1BCA91C(v4474, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1571;
  v1047->m_Items[342] = (DataMasterBase_o *)v4474;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[342],
    (int64_t)v4474,
    v4475,
    v4476,
    v4477,
    v4478,
    v4479,
    v4480);
  v4484 = (ServantLimitImageMaster_o *)sub_1BCAA2C(ServantLimitImageMaster_TypeInfo, v4481, v4482, v4483);
  ServantLimitImageMaster___ctor(v4484, 0LL);
  if ( v4484 )
  {
    v1052 = sub_1BCA91C(v4484, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1571;
  v1047->m_Items[343] = (DataMasterBase_o *)v4484;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[343],
    (int64_t)v4484,
    v4485,
    v4486,
    v4487,
    v4488,
    v4489,
    v4490);
  v4494 = (FriendshipQuestDialogInfoMaster_o *)sub_1BCAA2C(
                                                 FriendshipQuestDialogInfoMaster_TypeInfo,
                                                 v4491,
                                                 v4492,
                                                 v4493);
  FriendshipQuestDialogInfoMaster___ctor(v4494, 0LL);
  if ( v4494 )
  {
    v1052 = sub_1BCA91C(v4494, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1571;
  v1047->m_Items[344] = (DataMasterBase_o *)v4494;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[344],
    (int64_t)v4494,
    v4495,
    v4496,
    v4497,
    v4498,
    v4499,
    v4500);
  v4504 = (QuestRestrictionInfoMaster_o *)sub_1BCAA2C(QuestRestrictionInfoMaster_TypeInfo, v4501, v4502, v4503);
  QuestRestrictionInfoMaster___ctor(v4504, 0LL);
  if ( v4504 )
  {
    v1052 = sub_1BCA91C(v4504, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1571;
  v1047->m_Items[345] = (DataMasterBase_o *)v4504;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[345],
    (int64_t)v4504,
    v4505,
    v4506,
    v4507,
    v4508,
    v4509,
    v4510);
  v4514 = (AssistMaster_o *)sub_1BCAA2C(AssistMaster_TypeInfo, v4511, v4512, v4513);
  AssistMaster___ctor(v4514, 0LL);
  if ( v4514 )
  {
    v1052 = sub_1BCA91C(v4514, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1571;
  v1047->m_Items[346] = (DataMasterBase_o *)v4514;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[346],
    (int64_t)v4514,
    v4515,
    v4516,
    v4517,
    v4518,
    v4519,
    v4520);
  v4524 = (WarBoardEffectMaster_o *)sub_1BCAA2C(WarBoardEffectMaster_TypeInfo, v4521, v4522, v4523);
  WarBoardEffectMaster___ctor(v4524, 0LL);
  if ( v4524 )
  {
    v1052 = sub_1BCA91C(v4524, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1571;
  v1047->m_Items[347] = (DataMasterBase_o *)v4524;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[347],
    (int64_t)v4524,
    v4525,
    v4526,
    v4527,
    v4528,
    v4529,
    v4530);
  v4534 = (WarBoardOnboardSkillMaster_o *)sub_1BCAA2C(WarBoardOnboardSkillMaster_TypeInfo, v4531, v4532, v4533);
  WarBoardOnboardSkillMaster___ctor(v4534, 0LL);
  if ( v4534 )
  {
    v1052 = sub_1BCA91C(v4534, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1571;
  v1047->m_Items[348] = (DataMasterBase_o *)v4534;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[348],
    (int64_t)v4534,
    v4535,
    v4536,
    v4537,
    v4538,
    v4539,
    v4540);
  v4544 = (BeforeBirthDayMaster_o *)sub_1BCAA2C(BeforeBirthDayMaster_TypeInfo, v4541, v4542, v4543);
  BeforeBirthDayMaster___ctor(v4544, 0LL);
  if ( v4544 )
  {
    v1052 = sub_1BCA91C(v4544, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1571;
  v1047->m_Items[349] = (DataMasterBase_o *)v4544;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[349],
    (int64_t)v4544,
    v4545,
    v4546,
    v4547,
    v4548,
    v4549,
    v4550);
  v4554 = (LoginQuestMaster_o *)sub_1BCAA2C(LoginQuestMaster_TypeInfo, v4551, v4552, v4553);
  LoginQuestMaster___ctor(v4554, 0LL);
  if ( v4554 )
  {
    v1052 = sub_1BCA91C(v4554, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1571;
  v1047->m_Items[350] = (DataMasterBase_o *)v4554;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[350],
    (int64_t)v4554,
    v4555,
    v4556,
    v4557,
    v4558,
    v4559,
    v4560);
  v4564 = (EventCombineCostumeMaster_o *)sub_1BCAA2C(EventCombineCostumeMaster_TypeInfo, v4561, v4562, v4563);
  EventCombineCostumeMaster___ctor(v4564, 0LL);
  if ( v4564 )
  {
    v1052 = sub_1BCA91C(v4564, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1571;
  v1047->m_Items[351] = (DataMasterBase_o *)v4564;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[351],
    (int64_t)v4564,
    v4565,
    v4566,
    v4567,
    v4568,
    v4569,
    v4570);
  v4574 = (WarBoardStagePieceDetailMaster_o *)sub_1BCAA2C(WarBoardStagePieceDetailMaster_TypeInfo, v4571, v4572, v4573);
  WarBoardStagePieceDetailMaster___ctor(v4574, 0LL);
  if ( v4574 )
  {
    v1052 = sub_1BCA91C(v4574, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1571;
  v1047->m_Items[352] = (DataMasterBase_o *)v4574;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[352],
    (int64_t)v4574,
    v4575,
    v4576,
    v4577,
    v4578,
    v4579,
    v4580);
  v4584 = (ServantTreasureDeviceAddMaster_o *)sub_1BCAA2C(ServantTreasureDeviceAddMaster_TypeInfo, v4581, v4582, v4583);
  ServantTreasureDeviceAddMaster___ctor(v4584, 0LL);
  if ( v4584 )
  {
    v1052 = sub_1BCA91C(v4584, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1571;
  v1047->m_Items[353] = (DataMasterBase_o *)v4584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[353],
    (int64_t)v4584,
    v4585,
    v4586,
    v4587,
    v4588,
    v4589,
    v4590);
  v4594 = (SkillAddMaster_o *)sub_1BCAA2C(SkillAddMaster_TypeInfo, v4591, v4592, v4593);
  SkillAddMaster___ctor(v4594, 0LL);
  if ( v4594 )
  {
    v1052 = sub_1BCA91C(v4594, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1571;
  v1047->m_Items[354] = (DataMasterBase_o *)v4594;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[354],
    (int64_t)v4594,
    v4595,
    v4596,
    v4597,
    v4598,
    v4599,
    v4600);
  v4604 = (ServantLvDetailMaster_o *)sub_1BCAA2C(ServantLvDetailMaster_TypeInfo, v4601, v4602, v4603);
  ServantLvDetailMaster___ctor(v4604, 0LL);
  if ( v4604 )
  {
    v1052 = sub_1BCA91C(v4604, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1571;
  v1047->m_Items[355] = (DataMasterBase_o *)v4604;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[355],
    (int64_t)v4604,
    v4605,
    v4606,
    v4607,
    v4608,
    v4609,
    v4610);
  v4614 = (GachaAppendMaster_o *)sub_1BCAA2C(GachaAppendMaster_TypeInfo, v4611, v4612, v4613);
  GachaAppendMaster___ctor(v4614, 0LL);
  if ( v4614 )
  {
    v1052 = sub_1BCA91C(v4614, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1571;
  v1047->m_Items[356] = (DataMasterBase_o *)v4614;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[356],
    (int64_t)v4614,
    v4615,
    v4616,
    v4617,
    v4618,
    v4619,
    v4620);
  v4624 = (UserGachaDrawLogMaster_o *)sub_1BCAA2C(UserGachaDrawLogMaster_TypeInfo, v4621, v4622, v4623);
  UserGachaDrawLogMaster___ctor(v4624, 0LL);
  if ( v4624 )
  {
    v1052 = sub_1BCA91C(v4624, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1571;
  v1047->m_Items[357] = (DataMasterBase_o *)v4624;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[357],
    (int64_t)v4624,
    v4625,
    v4626,
    v4627,
    v4628,
    v4629,
    v4630);
  v4634 = (ServantAppendPassiveSkillMaster_o *)sub_1BCAA2C(
                                                 ServantAppendPassiveSkillMaster_TypeInfo,
                                                 v4631,
                                                 v4632,
                                                 v4633);
  ServantAppendPassiveSkillMaster___ctor(v4634, 0LL);
  if ( v4634 )
  {
    v1052 = sub_1BCA91C(v4634, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1571;
  v1047->m_Items[358] = (DataMasterBase_o *)v4634;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[358],
    (int64_t)v4634,
    v4635,
    v4636,
    v4637,
    v4638,
    v4639,
    v4640);
  v4644 = (UserServantAppendPassiveSkillMaster_o *)sub_1BCAA2C(
                                                     UserServantAppendPassiveSkillMaster_TypeInfo,
                                                     v4641,
                                                     v4642,
                                                     v4643);
  UserServantAppendPassiveSkillMaster___ctor(v4644, 0LL);
  if ( v4644 )
  {
    v1052 = sub_1BCA91C(v4644, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1571;
  v1047->m_Items[359] = (DataMasterBase_o *)v4644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[359],
    (int64_t)v4644,
    v4645,
    v4646,
    v4647,
    v4648,
    v4649,
    v4650);
  v4654 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1BCAA2C(
                                                       UserServantAppendPassiveSkillLvMaster_TypeInfo,
                                                       v4651,
                                                       v4652,
                                                       v4653);
  UserServantAppendPassiveSkillLvMaster___ctor(v4654, 0LL);
  if ( v4654 )
  {
    v1052 = sub_1BCA91C(v4654, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1571;
  v1047->m_Items[360] = (DataMasterBase_o *)v4654;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[360],
    (int64_t)v4654,
    v4655,
    v4656,
    v4657,
    v4658,
    v4659,
    v4660);
  v4664 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1BCAA2C(
                                                   SvtAppendPassiveSkillUnlockMaster_TypeInfo,
                                                   v4661,
                                                   v4662,
                                                   v4663);
  SvtAppendPassiveSkillUnlockMaster___ctor(v4664, 0LL);
  if ( v4664 )
  {
    v1052 = sub_1BCA91C(v4664, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1571;
  v1047->m_Items[361] = (DataMasterBase_o *)v4664;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[361],
    (int64_t)v4664,
    v4665,
    v4666,
    v4667,
    v4668,
    v4669,
    v4670);
  v4674 = (CombineAppendPassiveSkillMaster_o *)sub_1BCAA2C(
                                                 CombineAppendPassiveSkillMaster_TypeInfo,
                                                 v4671,
                                                 v4672,
                                                 v4673);
  CombineAppendPassiveSkillMaster___ctor(v4674, 0LL);
  if ( v4674 )
  {
    v1052 = sub_1BCA91C(v4674, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1571;
  v1047->m_Items[362] = (DataMasterBase_o *)v4674;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[362],
    (int64_t)v4674,
    v4675,
    v4676,
    v4677,
    v4678,
    v4679,
    v4680);
  v4684 = (SvtCoinMaster_o *)sub_1BCAA2C(SvtCoinMaster_TypeInfo, v4681, v4682, v4683);
  SvtCoinMaster___ctor(v4684, 0LL);
  if ( v4684 )
  {
    v1052 = sub_1BCA91C(v4684, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1571;
  v1047->m_Items[363] = (DataMasterBase_o *)v4684;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[363],
    (int64_t)v4684,
    v4685,
    v4686,
    v4687,
    v4688,
    v4689,
    v4690);
  v4694 = (UserSvtCoinMaster_o *)sub_1BCAA2C(UserSvtCoinMaster_TypeInfo, v4691, v4692, v4693);
  UserSvtCoinMaster___ctor(v4694, 0LL);
  if ( v4694 )
  {
    v1052 = sub_1BCA91C(v4694, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1571;
  v1047->m_Items[364] = (DataMasterBase_o *)v4694;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[364],
    (int64_t)v4694,
    v4695,
    v4696,
    v4697,
    v4698,
    v4699,
    v4700);
  v4704 = (ServantAddMaster_o *)sub_1BCAA2C(ServantAddMaster_TypeInfo, v4701, v4702, v4703);
  ServantAddMaster___ctor(v4704, 0LL);
  if ( v4704 )
  {
    v1052 = sub_1BCA91C(v4704, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1571;
  v1047->m_Items[365] = (DataMasterBase_o *)v4704;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[365],
    (int64_t)v4704,
    v4705,
    v4706,
    v4707,
    v4708,
    v4709,
    v4710);
  v4714 = (TreasureBoxMaster_o *)sub_1BCAA2C(TreasureBoxMaster_TypeInfo, v4711, v4712, v4713);
  TreasureBoxMaster___ctor(v4714, 0LL);
  if ( v4714 )
  {
    v1052 = sub_1BCA91C(v4714, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1571;
  v1047->m_Items[366] = (DataMasterBase_o *)v4714;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[366],
    (int64_t)v4714,
    v4715,
    v4716,
    v4717,
    v4718,
    v4719,
    v4720);
  v4724 = (TreasureBoxGiftMaster_o *)sub_1BCAA2C(TreasureBoxGiftMaster_TypeInfo, v4721, v4722, v4723);
  TreasureBoxGiftMaster___ctor(v4724, 0LL);
  if ( v4724 )
  {
    v1052 = sub_1BCA91C(v4724, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1571;
  v1047->m_Items[367] = (DataMasterBase_o *)v4724;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[367],
    (int64_t)v4724,
    v4725,
    v4726,
    v4727,
    v4728,
    v4729,
    v4730);
  v4734 = (TreasureBoxTalkMaster_o *)sub_1BCAA2C(TreasureBoxTalkMaster_TypeInfo, v4731, v4732, v4733);
  TreasureBoxTalkMaster___ctor(v4734, 0LL);
  if ( v4734 )
  {
    v1052 = sub_1BCA91C(v4734, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1571;
  v1047->m_Items[368] = (DataMasterBase_o *)v4734;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[368],
    (int64_t)v4734,
    v4735,
    v4736,
    v4737,
    v4738,
    v4739,
    v4740);
  v4744 = (UserEventExpeditionMaster_o *)sub_1BCAA2C(UserEventExpeditionMaster_TypeInfo, v4741, v4742, v4743);
  UserEventExpeditionMaster___ctor(v4744, 0LL);
  if ( v4744 )
  {
    v1052 = sub_1BCA91C(v4744, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1571;
  v1047->m_Items[369] = (DataMasterBase_o *)v4744;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[369],
    (int64_t)v4744,
    v4745,
    v4746,
    v4747,
    v4748,
    v4749,
    v4750);
  v4754 = (EventExpeditionMaster_o *)sub_1BCAA2C(EventExpeditionMaster_TypeInfo, v4751, v4752, v4753);
  EventExpeditionMaster___ctor(v4754, 0LL);
  if ( v4754 )
  {
    v1052 = sub_1BCA91C(v4754, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1571;
  v1047->m_Items[370] = (DataMasterBase_o *)v4754;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[370],
    (int64_t)v4754,
    v4755,
    v4756,
    v4757,
    v4758,
    v4759,
    v4760);
  v4764 = (EventExpeditionPieceMaster_o *)sub_1BCAA2C(EventExpeditionPieceMaster_TypeInfo, v4761, v4762, v4763);
  EventExpeditionPieceMaster___ctor(v4764, 0LL);
  if ( v4764 )
  {
    v1052 = sub_1BCA91C(v4764, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1571;
  v1047->m_Items[371] = (DataMasterBase_o *)v4764;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[371],
    (int64_t)v4764,
    v4765,
    v4766,
    v4767,
    v4768,
    v4769,
    v4770);
  v4774 = (EventRecipeMaster_o *)sub_1BCAA2C(EventRecipeMaster_TypeInfo, v4771, v4772, v4773);
  EventRecipeMaster___ctor(v4774, 0LL);
  if ( v4774 )
  {
    v1052 = sub_1BCA91C(v4774, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1571;
  v1047->m_Items[372] = (DataMasterBase_o *)v4774;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[372],
    (int64_t)v4774,
    v4775,
    v4776,
    v4777,
    v4778,
    v4779,
    v4780);
  v4784 = (EventRecipeGiftMaster_o *)sub_1BCAA2C(EventRecipeGiftMaster_TypeInfo, v4781, v4782, v4783);
  EventRecipeGiftMaster___ctor(v4784, 0LL);
  if ( v4784 )
  {
    v1052 = sub_1BCA91C(v4784, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1571;
  v1047->m_Items[373] = (DataMasterBase_o *)v4784;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[373],
    (int64_t)v4784,
    v4785,
    v4786,
    v4787,
    v4788,
    v4789,
    v4790);
  v4794 = (UserEventFortificationMaster_o *)sub_1BCAA2C(UserEventFortificationMaster_TypeInfo, v4791, v4792, v4793);
  UserEventFortificationMaster___ctor(v4794, 0LL);
  if ( v4794 )
  {
    v1052 = sub_1BCA91C(v4794, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1571;
  v1047->m_Items[374] = (DataMasterBase_o *)v4794;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[374],
    (int64_t)v4794,
    v4795,
    v4796,
    v4797,
    v4798,
    v4799,
    v4800);
  v4804 = (EventFortificationMaster_o *)sub_1BCAA2C(EventFortificationMaster_TypeInfo, v4801, v4802, v4803);
  EventFortificationMaster___ctor(v4804, 0LL);
  if ( v4804 )
  {
    v1052 = sub_1BCA91C(v4804, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1571;
  v1047->m_Items[375] = (DataMasterBase_o *)v4804;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[375],
    (int64_t)v4804,
    v4805,
    v4806,
    v4807,
    v4808,
    v4809,
    v4810);
  v4814 = (EventFortificationDetailMaster_o *)sub_1BCAA2C(EventFortificationDetailMaster_TypeInfo, v4811, v4812, v4813);
  EventFortificationDetailMaster___ctor(v4814, 0LL);
  if ( v4814 )
  {
    v1052 = sub_1BCA91C(v4814, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1571;
  v1047->m_Items[376] = (DataMasterBase_o *)v4814;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[376],
    (int64_t)v4814,
    v4815,
    v4816,
    v4817,
    v4818,
    v4819,
    v4820);
  v4824 = (EventFortificationSvtMaster_o *)sub_1BCAA2C(EventFortificationSvtMaster_TypeInfo, v4821, v4822, v4823);
  EventFortificationSvtMaster___ctor(v4824, 0LL);
  if ( v4824 )
  {
    v1052 = sub_1BCA91C(v4824, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1571;
  v1047->m_Items[377] = (DataMasterBase_o *)v4824;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[377],
    (int64_t)v4824,
    v4825,
    v4826,
    v4827,
    v4828,
    v4829,
    v4830);
  v4834 = (UserServantVoicePlayedMaster_o *)sub_1BCAA2C(UserServantVoicePlayedMaster_TypeInfo, v4831, v4832, v4833);
  UserServantVoicePlayedMaster___ctor(v4834, 0LL);
  if ( v4834 )
  {
    v1052 = sub_1BCA91C(v4834, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1571;
  v1047->m_Items[378] = (DataMasterBase_o *)v4834;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[378],
    (int64_t)v4834,
    v4835,
    v4836,
    v4837,
    v4838,
    v4839,
    v4840);
  v4844 = (UpdateProfileDialogInfoMaster_o *)sub_1BCAA2C(UpdateProfileDialogInfoMaster_TypeInfo, v4841, v4842, v4843);
  UpdateProfileDialogInfoMaster___ctor(v4844, 0LL);
  if ( v4844 )
  {
    v1052 = sub_1BCA91C(v4844, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1571;
  v1047->m_Items[379] = (DataMasterBase_o *)v4844;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[379],
    (int64_t)v4844,
    v4845,
    v4846,
    v4847,
    v4848,
    v4849,
    v4850);
  v4854 = (SvtMaterialTdMaster_o *)sub_1BCAA2C(SvtMaterialTdMaster_TypeInfo, v4851, v4852, v4853);
  SvtMaterialTdMaster___ctor(v4854, 0LL);
  if ( v4854 )
  {
    v1052 = sub_1BCA91C(v4854, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1571;
  v1047->m_Items[380] = (DataMasterBase_o *)v4854;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[380],
    (int64_t)v4854,
    v4855,
    v4856,
    v4857,
    v4858,
    v4859,
    v4860);
  v4864 = (BattleMasterImageMaster_o *)sub_1BCAA2C(BattleMasterImageMaster_TypeInfo, v4861, v4862, v4863);
  BattleMasterImageMaster___ctor(v4864, 0LL);
  if ( v4864 )
  {
    v1052 = sub_1BCA91C(v4864, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1571;
  v1047->m_Items[381] = (DataMasterBase_o *)v4864;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[381],
    (int64_t)v4864,
    v4865,
    v4866,
    v4867,
    v4868,
    v4869,
    v4870);
  v4874 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1BCAA2C(
                                                               UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo,
                                                               v4871,
                                                               v4872,
                                                               v4873);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v4874, 0LL);
  if ( v4874 )
  {
    v1052 = sub_1BCA91C(v4874, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1571;
  v1047->m_Items[382] = (DataMasterBase_o *)v4874;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[382],
    (int64_t)v4874,
    v4875,
    v4876,
    v4877,
    v4878,
    v4879,
    v4880);
  v4884 = (UserEventRandomMissionMaster_o *)sub_1BCAA2C(UserEventRandomMissionMaster_TypeInfo, v4881, v4882, v4883);
  UserEventRandomMissionMaster___ctor(v4884, 0LL);
  if ( v4884 )
  {
    v1052 = sub_1BCA91C(v4884, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1571;
  v1047->m_Items[383] = (DataMasterBase_o *)v4884;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[383],
    (int64_t)v4884,
    v4885,
    v4886,
    v4887,
    v4888,
    v4889,
    v4890);
  v4894 = (EventProgressValueMaster_o *)sub_1BCAA2C(EventProgressValueMaster_TypeInfo, v4891, v4892, v4893);
  EventProgressValueMaster___ctor(v4894, 0LL);
  if ( v4894 )
  {
    v1052 = sub_1BCA91C(v4894, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1571;
  v1047->m_Items[384] = (DataMasterBase_o *)v4894;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[384],
    (int64_t)v4894,
    v4895,
    v4896,
    v4897,
    v4898,
    v4899,
    v4900);
  v4904 = (SvtMultiPortraitMaster_o *)sub_1BCAA2C(SvtMultiPortraitMaster_TypeInfo, v4901, v4902, v4903);
  SvtMultiPortraitMaster___ctor(v4904, 0LL);
  if ( v4904 )
  {
    v1052 = sub_1BCA91C(v4904, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1571;
  v1047->m_Items[385] = (DataMasterBase_o *)v4904;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[385],
    (int64_t)v4904,
    v4905,
    v4906,
    v4907,
    v4908,
    v4909,
    v4910);
  v4914 = (EventRandomMissionMaster_o *)sub_1BCAA2C(EventRandomMissionMaster_TypeInfo, v4911, v4912, v4913);
  EventRandomMissionMaster___ctor(v4914, 0LL);
  if ( v4914 )
  {
    v1052 = sub_1BCA91C(v4914, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1571;
  v1047->m_Items[386] = (DataMasterBase_o *)v4914;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[386],
    (int64_t)v4914,
    v4915,
    v4916,
    v4917,
    v4918,
    v4919,
    v4920);
  v4924 = (UserGachaHistoryMaster_o *)sub_1BCAA2C(UserGachaHistoryMaster_TypeInfo, v4921, v4922, v4923);
  UserGachaHistoryMaster___ctor(v4924, 0LL);
  if ( v4924 )
  {
    v1052 = sub_1BCA91C(v4924, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1571;
  v1047->m_Items[387] = (DataMasterBase_o *)v4924;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[387],
    (int64_t)v4924,
    v4925,
    v4926,
    v4927,
    v4928,
    v4929,
    v4930);
  v4934 = (UserCoinRoomMaster_o *)sub_1BCAA2C(UserCoinRoomMaster_TypeInfo, v4931, v4932, v4933);
  UserCoinRoomMaster___ctor(v4934, 0LL);
  if ( v4934 )
  {
    v1052 = sub_1BCA91C(v4934, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1571;
  v1047->m_Items[388] = (DataMasterBase_o *)v4934;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[388],
    (int64_t)v4934,
    v4935,
    v4936,
    v4937,
    v4938,
    v4939,
    v4940);
  v4944 = (EventBuddyPointMaster_o *)sub_1BCAA2C(EventBuddyPointMaster_TypeInfo, v4941, v4942, v4943);
  EventBuddyPointMaster___ctor(v4944, 0LL);
  if ( v4944 )
  {
    v1052 = sub_1BCA91C(v4944, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1571;
  v1047->m_Items[389] = (DataMasterBase_o *)v4944;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[389],
    (int64_t)v4944,
    v4945,
    v4946,
    v4947,
    v4948,
    v4949,
    v4950);
  v4954 = (EventServantPointRankMaster_o *)sub_1BCAA2C(EventServantPointRankMaster_TypeInfo, v4951, v4952, v4953);
  EventServantPointRankMaster___ctor(v4954, 0LL);
  if ( v4954 )
  {
    v1052 = sub_1BCA91C(v4954, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1571;
  v1047->m_Items[390] = (DataMasterBase_o *)v4954;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[390],
    (int64_t)v4954,
    v4955,
    v4956,
    v4957,
    v4958,
    v4959,
    v4960);
  v4964 = (UserEventServantPointMaster_o *)sub_1BCAA2C(UserEventServantPointMaster_TypeInfo, v4961, v4962, v4963);
  UserEventServantPointMaster___ctor(v4964, 0LL);
  if ( v4964 )
  {
    v1052 = sub_1BCA91C(v4964, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1571;
  v1047->m_Items[391] = (DataMasterBase_o *)v4964;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[391],
    (int64_t)v4964,
    v4965,
    v4966,
    v4967,
    v4968,
    v4969,
    v4970);
  v4974 = (FieldMotionMaster_o *)sub_1BCAA2C(FieldMotionMaster_TypeInfo, v4971, v4972, v4973);
  FieldMotionMaster___ctor(v4974, 0LL);
  if ( v4974 )
  {
    v1052 = sub_1BCA91C(v4974, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1571;
  v1047->m_Items[392] = (DataMasterBase_o *)v4974;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[392],
    (int64_t)v4974,
    v4975,
    v4976,
    v4977,
    v4978,
    v4979,
    v4980);
  v4984 = (UserDeleteReservationMaster_o *)sub_1BCAA2C(UserDeleteReservationMaster_TypeInfo, v4981, v4982, v4983);
  UserDeleteReservationMaster___ctor(v4984, 0LL);
  if ( v4984 )
  {
    v1052 = sub_1BCA91C(v4984, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1571;
  v1047->m_Items[393] = (DataMasterBase_o *)v4984;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[393],
    (int64_t)v4984,
    v4985,
    v4986,
    v4987,
    v4988,
    v4989,
    v4990);
  v4994 = (ServantScriptMultipleMaster_o *)sub_1BCAA2C(ServantScriptMultipleMaster_TypeInfo, v4991, v4992, v4993);
  ServantScriptMultipleMaster___ctor(v4994, 0LL);
  if ( v4994 )
  {
    v1052 = sub_1BCA91C(v4994, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1571;
  v1047->m_Items[394] = (DataMasterBase_o *)v4994;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[394],
    (int64_t)v4994,
    v4995,
    v4996,
    v4997,
    v4998,
    v4999,
    v5000);
  v5004 = (EquipAddMaster_o *)sub_1BCAA2C(EquipAddMaster_TypeInfo, v5001, v5002, v5003);
  EquipAddMaster___ctor(v5004, 0LL);
  if ( v5004 )
  {
    v1052 = sub_1BCA91C(v5004, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1571;
  v1047->m_Items[395] = (DataMasterBase_o *)v5004;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[395],
    (int64_t)v5004,
    v5005,
    v5006,
    v5007,
    v5008,
    v5009,
    v5010);
  v5014 = (QuestReleaseOverwriteMaster_o *)sub_1BCAA2C(QuestReleaseOverwriteMaster_TypeInfo, v5011, v5012, v5013);
  QuestReleaseOverwriteMaster___ctor(v5014, 0LL);
  if ( v5014 )
  {
    v1052 = sub_1BCA91C(v5014, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1571;
  v1047->m_Items[396] = (DataMasterBase_o *)v5014;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[396],
    (int64_t)v5014,
    v5015,
    v5016,
    v5017,
    v5018,
    v5019,
    v5020);
  v5024 = (UserEventAlloutBattleMaster_o *)sub_1BCAA2C(UserEventAlloutBattleMaster_TypeInfo, v5021, v5022, v5023);
  UserEventAlloutBattleMaster___ctor(v5024, 0LL);
  if ( v5024 )
  {
    v1052 = sub_1BCA91C(v5024, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1571;
  v1047->m_Items[397] = (DataMasterBase_o *)v5024;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[397],
    (int64_t)v5024,
    v5025,
    v5026,
    v5027,
    v5028,
    v5029,
    v5030);
  v5034 = (QuestScriptMaterialNextMaster_o *)sub_1BCAA2C(QuestScriptMaterialNextMaster_TypeInfo, v5031, v5032, v5033);
  QuestScriptMaterialNextMaster___ctor(v5034, 0LL);
  if ( v5034 )
  {
    v1052 = sub_1BCA91C(v5034, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1571;
  v1047->m_Items[398] = (DataMasterBase_o *)v5034;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[398],
    (int64_t)v5034,
    v5035,
    v5036,
    v5037,
    v5038,
    v5039,
    v5040);
  v5044 = (EventDiggingMaster_o *)sub_1BCAA2C(EventDiggingMaster_TypeInfo, v5041, v5042, v5043);
  EventDiggingMaster___ctor(v5044, 0LL);
  if ( v5044 )
  {
    v1052 = sub_1BCA91C(v5044, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1571;
  v1047->m_Items[399] = (DataMasterBase_o *)v5044;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[399],
    (int64_t)v5044,
    v5045,
    v5046,
    v5047,
    v5048,
    v5049,
    v5050);
  v5054 = (EventDiggingBlockMaster_o *)sub_1BCAA2C(EventDiggingBlockMaster_TypeInfo, v5051, v5052, v5053);
  EventDiggingBlockMaster___ctor(v5054, 0LL);
  if ( v5054 )
  {
    v1052 = sub_1BCA91C(v5054, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1571;
  v1047->m_Items[400] = (DataMasterBase_o *)v5054;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[400],
    (int64_t)v5054,
    v5055,
    v5056,
    v5057,
    v5058,
    v5059,
    v5060);
  v5064 = (EventDiggingRewardMaster_o *)sub_1BCAA2C(EventDiggingRewardMaster_TypeInfo, v5061, v5062, v5063);
  EventDiggingRewardMaster___ctor(v5064, 0LL);
  if ( v5064 )
  {
    v1052 = sub_1BCA91C(v5064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1571;
  v1047->m_Items[401] = (DataMasterBase_o *)v5064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[401],
    (int64_t)v5064,
    v5065,
    v5066,
    v5067,
    v5068,
    v5069,
    v5070);
  v5074 = (UserEventDiggingMaster_o *)sub_1BCAA2C(UserEventDiggingMaster_TypeInfo, v5071, v5072, v5073);
  UserEventDiggingMaster___ctor(v5074, 0LL);
  if ( v5074 )
  {
    v1052 = sub_1BCA91C(v5074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1571;
  v1047->m_Items[402] = (DataMasterBase_o *)v5074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[402],
    (int64_t)v5074,
    v5075,
    v5076,
    v5077,
    v5078,
    v5079,
    v5080);
  v5084 = (BattleMessageMaster_o *)sub_1BCAA2C(BattleMessageMaster_TypeInfo, v5081, v5082, v5083);
  BattleMessageMaster___ctor(v5084, 0LL);
  if ( v5084 )
  {
    v1052 = sub_1BCA91C(v5084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1571;
  v1047->m_Items[403] = (DataMasterBase_o *)v5084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[403],
    (int64_t)v5084,
    v5085,
    v5086,
    v5087,
    v5088,
    v5089,
    v5090);
  v5094 = (BattleMessageGroupMaster_o *)sub_1BCAA2C(BattleMessageGroupMaster_TypeInfo, v5091, v5092, v5093);
  BattleMessageGroupMaster___ctor(v5094, 0LL);
  if ( v5094 )
  {
    v1052 = sub_1BCA91C(v5094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1571;
  v1047->m_Items[404] = (DataMasterBase_o *)v5094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[404],
    (int64_t)v5094,
    v5095,
    v5096,
    v5097,
    v5098,
    v5099,
    v5100);
  v5104 = (UserNpcSvtRecordMaster_o *)sub_1BCAA2C(UserNpcSvtRecordMaster_TypeInfo, v5101, v5102, v5103);
  UserNpcSvtRecordMaster___ctor(v5104, 0LL);
  if ( v5104 )
  {
    v1052 = sub_1BCA91C(v5104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1571;
  v1047->m_Items[405] = (DataMasterBase_o *)v5104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[405],
    (int64_t)v5104,
    v5105,
    v5106,
    v5107,
    v5108,
    v5109,
    v5110);
  v5114 = (BuffTypeDetailMaster_o *)sub_1BCAA2C(BuffTypeDetailMaster_TypeInfo, v5111, v5112, v5113);
  BuffTypeDetailMaster___ctor(v5114, 0LL);
  if ( v5114 )
  {
    v1052 = sub_1BCA91C(v5114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1571;
  v1047->m_Items[406] = (DataMasterBase_o *)v5114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[406],
    (int64_t)v5114,
    v5115,
    v5116,
    v5117,
    v5118,
    v5119,
    v5120);
  v5124 = (WarBoardMessageMaster_o *)sub_1BCAA2C(WarBoardMessageMaster_TypeInfo, v5121, v5122, v5123);
  WarBoardMessageMaster___ctor(v5124, 0LL);
  if ( v5124 )
  {
    v1052 = sub_1BCA91C(v5124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1571;
  v1047->m_Items[407] = (DataMasterBase_o *)v5124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[407],
    (int64_t)v5124,
    v5125,
    v5126,
    v5127,
    v5128,
    v5129,
    v5130);
  v5134 = (WarBoardPartySkillMaster_o *)sub_1BCAA2C(WarBoardPartySkillMaster_TypeInfo, v5131, v5132, v5133);
  WarBoardPartySkillMaster___ctor(v5134, 0LL);
  if ( v5134 )
  {
    v1052 = sub_1BCA91C(v5134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1571;
  v1047->m_Items[408] = (DataMasterBase_o *)v5134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[408],
    (int64_t)v5134,
    v5135,
    v5136,
    v5137,
    v5138,
    v5139,
    v5140);
  v5144 = (WarBoardMessageScriptMaster_o *)sub_1BCAA2C(WarBoardMessageScriptMaster_TypeInfo, v5141, v5142, v5143);
  WarBoardMessageScriptMaster___ctor(v5144, 0LL);
  if ( v5144 )
  {
    v1052 = sub_1BCA91C(v5144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1571;
  v1047->m_Items[409] = (DataMasterBase_o *)v5144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[409],
    (int64_t)v5144,
    v5145,
    v5146,
    v5147,
    v5148,
    v5149,
    v5150);
  v5154 = (WarQuestSelectionMaster_o *)sub_1BCAA2C(WarQuestSelectionMaster_TypeInfo, v5151, v5152, v5153);
  WarQuestSelectionMaster___ctor(v5154, 0LL);
  if ( v5154 )
  {
    v1052 = sub_1BCA91C(v5154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1571;
  v1047->m_Items[410] = (DataMasterBase_o *)v5154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[410],
    (int64_t)v5154,
    v5155,
    v5156,
    v5157,
    v5158,
    v5159,
    v5160);
  v5164 = (WarBoardStageDetailMaster_o *)sub_1BCAA2C(WarBoardStageDetailMaster_TypeInfo, v5161, v5162, v5163);
  WarBoardStageDetailMaster___ctor(v5164, 0LL);
  if ( v5164 )
  {
    v1052 = sub_1BCA91C(v5164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1571;
  v1047->m_Items[411] = (DataMasterBase_o *)v5164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[411],
    (int64_t)v5164,
    v5165,
    v5166,
    v5167,
    v5168,
    v5169,
    v5170);
  v5174 = (QuestScriptMaterialOverwriteMaster_o *)sub_1BCAA2C(
                                                    QuestScriptMaterialOverwriteMaster_TypeInfo,
                                                    v5171,
                                                    v5172,
                                                    v5173);
  QuestScriptMaterialOverwriteMaster___ctor(v5174, 0LL);
  if ( v5174 )
  {
    v1052 = sub_1BCA91C(v5174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1571;
  v1047->m_Items[412] = (DataMasterBase_o *)v5174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[412],
    (int64_t)v5174,
    v5175,
    v5176,
    v5177,
    v5178,
    v5179,
    v5180);
  v5184 = (QuestScriptBranchMaterialMaster_o *)sub_1BCAA2C(
                                                 QuestScriptBranchMaterialMaster_TypeInfo,
                                                 v5181,
                                                 v5182,
                                                 v5183);
  QuestScriptBranchMaterialMaster___ctor(v5184, 0LL);
  if ( v5184 )
  {
    v1052 = sub_1BCA91C(v5184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1571;
  v1047->m_Items[413] = (DataMasterBase_o *)v5184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[413],
    (int64_t)v5184,
    v5185,
    v5186,
    v5187,
    v5188,
    v5189,
    v5190);
  v5194 = (AdCheckPointMaster_o *)sub_1BCAA2C(AdCheckPointMaster_TypeInfo, v5191, v5192, v5193);
  AdCheckPointMaster___ctor(v5194, 0LL);
  if ( v5194 )
  {
    v1052 = sub_1BCA91C(v5194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1571;
  v1047->m_Items[414] = (DataMasterBase_o *)v5194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[414],
    (int64_t)v5194,
    v5195,
    v5196,
    v5197,
    v5198,
    v5199,
    v5200);
  v5204 = (GiftDetailMaster_o *)sub_1BCAA2C(GiftDetailMaster_TypeInfo, v5201, v5202, v5203);
  GiftDetailMaster___ctor(v5204, 0LL);
  if ( v5204 )
  {
    v1052 = sub_1BCA91C(v5204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1571;
  v1047->m_Items[415] = (DataMasterBase_o *)v5204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[415],
    (int64_t)v5204,
    v5205,
    v5206,
    v5207,
    v5208,
    v5209,
    v5210);
  v5214 = (CombineLimitGiftMaster_o *)sub_1BCAA2C(CombineLimitGiftMaster_TypeInfo, v5211, v5212, v5213);
  CombineLimitGiftMaster___ctor(v5214, 0LL);
  if ( v5214 )
  {
    v1052 = sub_1BCA91C(v5214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1571;
  v1047->m_Items[416] = (DataMasterBase_o *)v5214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[416],
    (int64_t)v5214,
    v5215,
    v5216,
    v5217,
    v5218,
    v5219,
    v5220);
  v5224 = (EventCooltimeRewardMaster_o *)sub_1BCAA2C(EventCooltimeRewardMaster_TypeInfo, v5221, v5222, v5223);
  EventCooltimeRewardMaster___ctor(v5224, 0LL);
  if ( v5224 )
  {
    v1052 = sub_1BCA91C(v5224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1571;
  v1047->m_Items[417] = (DataMasterBase_o *)v5224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[417],
    (int64_t)v5224,
    v5225,
    v5226,
    v5227,
    v5228,
    v5229,
    v5230);
  v5234 = (UserEventCooltimeRewardMaster_o *)sub_1BCAA2C(UserEventCooltimeRewardMaster_TypeInfo, v5231, v5232, v5233);
  UserEventCooltimeRewardMaster___ctor(v5234, 0LL);
  if ( v5234 )
  {
    v1052 = sub_1BCA91C(v5234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1571;
  v1047->m_Items[418] = (DataMasterBase_o *)v5234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[418],
    (int64_t)v5234,
    v5235,
    v5236,
    v5237,
    v5238,
    v5239,
    v5240);
  v5244 = (ClassBoardBaseMaster_o *)sub_1BCAA2C(ClassBoardBaseMaster_TypeInfo, v5241, v5242, v5243);
  ClassBoardBaseMaster___ctor(v5244, 0LL);
  if ( v5244 )
  {
    v1052 = sub_1BCA91C(v5244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1571;
  v1047->m_Items[419] = (DataMasterBase_o *)v5244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[419],
    (int64_t)v5244,
    v5245,
    v5246,
    v5247,
    v5248,
    v5249,
    v5250);
  v5254 = (ClassBoardLockMaster_o *)sub_1BCAA2C(ClassBoardLockMaster_TypeInfo, v5251, v5252, v5253);
  ClassBoardLockMaster___ctor(v5254, 0LL);
  if ( v5254 )
  {
    v1052 = sub_1BCA91C(v5254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1571;
  v1047->m_Items[420] = (DataMasterBase_o *)v5254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[420],
    (int64_t)v5254,
    v5255,
    v5256,
    v5257,
    v5258,
    v5259,
    v5260);
  v5264 = (ClassBoardSquareMaster_o *)sub_1BCAA2C(ClassBoardSquareMaster_TypeInfo, v5261, v5262, v5263);
  ClassBoardSquareMaster___ctor(v5264, 0LL);
  if ( v5264 )
  {
    v1052 = sub_1BCA91C(v5264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1571;
  v1047->m_Items[421] = (DataMasterBase_o *)v5264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[421],
    (int64_t)v5264,
    v5265,
    v5266,
    v5267,
    v5268,
    v5269,
    v5270);
  v5274 = (ClassBoardLineMaster_o *)sub_1BCAA2C(ClassBoardLineMaster_TypeInfo, v5271, v5272, v5273);
  ClassBoardLineMaster___ctor(v5274, 0LL);
  if ( v5274 )
  {
    v1052 = sub_1BCA91C(v5274, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1571;
  v1047->m_Items[422] = (DataMasterBase_o *)v5274;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[422],
    (int64_t)v5274,
    v5275,
    v5276,
    v5277,
    v5278,
    v5279,
    v5280);
  v5284 = (UserClassBoardSquareMaster_o *)sub_1BCAA2C(UserClassBoardSquareMaster_TypeInfo, v5281, v5282, v5283);
  UserClassBoardSquareMaster___ctor(v5284, 0LL);
  if ( v5284 )
  {
    v1052 = sub_1BCA91C(v5284, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1571;
  v1047->m_Items[423] = (DataMasterBase_o *)v5284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[423],
    (int64_t)v5284,
    v5285,
    v5286,
    v5287,
    v5288,
    v5289,
    v5290);
  v5294 = (ServantCardAddMaster_o *)sub_1BCAA2C(ServantCardAddMaster_TypeInfo, v5291, v5292, v5293);
  ServantCardAddMaster___ctor(v5294, 0LL);
  if ( v5294 )
  {
    v1052 = sub_1BCA91C(v5294, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1571;
  v1047->m_Items[424] = (DataMasterBase_o *)v5294;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[424],
    (int64_t)v5294,
    v5295,
    v5296,
    v5297,
    v5298,
    v5299,
    v5300);
  v5304 = (MapLayerMaster_o *)sub_1BCAA2C(MapLayerMaster_TypeInfo, v5301, v5302, v5303);
  MapLayerMaster___ctor(v5304, 0LL);
  if ( v5304 )
  {
    v1052 = sub_1BCA91C(v5304, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1571;
  v1047->m_Items[425] = (DataMasterBase_o *)v5304;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[425],
    (int64_t)v5304,
    v5305,
    v5306,
    v5307,
    v5308,
    v5309,
    v5310);
  v5314 = (SpotLayerMaster_o *)sub_1BCAA2C(SpotLayerMaster_TypeInfo, v5311, v5312, v5313);
  SpotLayerMaster___ctor(v5314, 0LL);
  if ( v5314 )
  {
    v1052 = sub_1BCA91C(v5314, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1571;
  v1047->m_Items[426] = (DataMasterBase_o *)v5314;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[426],
    (int64_t)v5314,
    v5315,
    v5316,
    v5317,
    v5318,
    v5319,
    v5320);
  v5324 = (MapGimmickLayerMaster_o *)sub_1BCAA2C(MapGimmickLayerMaster_TypeInfo, v5321, v5322, v5323);
  MapGimmickLayerMaster___ctor(v5324, 0LL);
  if ( v5324 )
  {
    v1052 = sub_1BCA91C(v5324, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1571;
  v1047->m_Items[427] = (DataMasterBase_o *)v5324;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[427],
    (int64_t)v5324,
    v5325,
    v5326,
    v5327,
    v5328,
    v5329,
    v5330);
  v5334 = (EventDataLostBattleMaster_o *)sub_1BCAA2C(EventDataLostBattleMaster_TypeInfo, v5331, v5332, v5333);
  EventDataLostBattleMaster___ctor(v5334, 0LL);
  if ( v5334 )
  {
    v1052 = sub_1BCA91C(v5334, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1571;
  v1047->m_Items[428] = (DataMasterBase_o *)v5334;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[428],
    (int64_t)v5334,
    v5335,
    v5336,
    v5337,
    v5338,
    v5339,
    v5340);
  v5344 = (EventDataLostBattleResetMaster_o *)sub_1BCAA2C(EventDataLostBattleResetMaster_TypeInfo, v5341, v5342, v5343);
  EventDataLostBattleResetMaster___ctor(v5344, 0LL);
  if ( v5344 )
  {
    v1052 = sub_1BCA91C(v5344, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1571;
  v1047->m_Items[429] = (DataMasterBase_o *)v5344;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[429],
    (int64_t)v5344,
    v5345,
    v5346,
    v5347,
    v5348,
    v5349,
    v5350);
  v5354 = (UserEventDataLostMaster_o *)sub_1BCAA2C(UserEventDataLostMaster_TypeInfo, v5351, v5352, v5353);
  UserEventDataLostMaster___ctor(v5354, 0LL);
  if ( v5354 )
  {
    v1052 = sub_1BCA91C(v5354, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1571;
  v1047->m_Items[430] = (DataMasterBase_o *)v5354;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[430],
    (int64_t)v5354,
    v5355,
    v5356,
    v5357,
    v5358,
    v5359,
    v5360);
  v5364 = (QuestHintMaster_o *)sub_1BCAA2C(QuestHintMaster_TypeInfo, v5361, v5362, v5363);
  QuestHintMaster___ctor(v5364, 0LL);
  if ( v5364 )
  {
    v1052 = sub_1BCA91C(v5364, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1571;
  v1047->m_Items[431] = (DataMasterBase_o *)v5364;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[431],
    (int64_t)v5364,
    v5365,
    v5366,
    v5367,
    v5368,
    v5369,
    v5370);
  v5374 = (FuncTypeDetailMaster_o *)sub_1BCAA2C(FuncTypeDetailMaster_TypeInfo, v5371, v5372, v5373);
  FuncTypeDetailMaster___ctor(v5374, 0LL);
  if ( v5374 )
  {
    v1052 = sub_1BCA91C(v5374, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1571;
  v1047->m_Items[432] = (DataMasterBase_o *)v5374;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[432],
    (int64_t)v5374,
    v5375,
    v5376,
    v5377,
    v5378,
    v5379,
    v5380);
  v5384 = (BuffConvertMaster_o *)sub_1BCAA2C(BuffConvertMaster_TypeInfo, v5381, v5382, v5383);
  BuffConvertMaster___ctor(v5384, 0LL);
  if ( v5384 )
  {
    v1052 = sub_1BCA91C(v5384, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1571;
  v1047->m_Items[433] = (DataMasterBase_o *)v5384;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[433],
    (int64_t)v5384,
    v5385,
    v5386,
    v5387,
    v5388,
    v5389,
    v5390);
  v5394 = (SkillGroupMaster_o *)sub_1BCAA2C(SkillGroupMaster_TypeInfo, v5391, v5392, v5393);
  SkillGroupMaster___ctor(v5394, 0LL);
  if ( v5394 )
  {
    v1052 = sub_1BCA91C(v5394, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1571;
  v1047->m_Items[434] = (DataMasterBase_o *)v5394;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[434],
    (int64_t)v5394,
    v5395,
    v5396,
    v5397,
    v5398,
    v5399,
    v5400);
  v5404 = (SkillGroupOverwriteMaster_o *)sub_1BCAA2C(SkillGroupOverwriteMaster_TypeInfo, v5401, v5402, v5403);
  SkillGroupOverwriteMaster___ctor(v5404, 0LL);
  if ( v5404 )
  {
    v1052 = sub_1BCA91C(v5404, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1571;
  v1047->m_Items[435] = (DataMasterBase_o *)v5404;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[435],
    (int64_t)v5404,
    v5405,
    v5406,
    v5407,
    v5408,
    v5409,
    v5410);
  v5414 = (SkillIndividualityMaster_o *)sub_1BCAA2C(SkillIndividualityMaster_TypeInfo, v5411, v5412, v5413);
  SkillIndividualityMaster___ctor(v5414, 0LL);
  if ( v5414 )
  {
    v1052 = sub_1BCA91C(v5414, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1571;
  v1047->m_Items[436] = (DataMasterBase_o *)v5414;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[436],
    (int64_t)v5414,
    v5415,
    v5416,
    v5417,
    v5418,
    v5419,
    v5420);
  v5424 = (RestrictionBaseMaster_o *)sub_1BCAA2C(RestrictionBaseMaster_TypeInfo, v5421, v5422, v5423);
  RestrictionBaseMaster___ctor(v5424, 0LL);
  if ( v5424 )
  {
    v1052 = sub_1BCA91C(v5424, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1571;
  v1047->m_Items[437] = (DataMasterBase_o *)v5424;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[437],
    (int64_t)v5424,
    v5425,
    v5426,
    v5427,
    v5428,
    v5429,
    v5430);
  v5434 = (RestrictionSlotMaster_o *)sub_1BCAA2C(RestrictionSlotMaster_TypeInfo, v5431, v5432, v5433);
  RestrictionSlotMaster___ctor(v5434, 0LL);
  if ( v5434 )
  {
    v1052 = sub_1BCA91C(v5434, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1571;
  v1047->m_Items[438] = (DataMasterBase_o *)v5434;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[438],
    (int64_t)v5434,
    v5435,
    v5436,
    v5437,
    v5438,
    v5439,
    v5440);
  v5444 = (RestrictionSlotDetailMaster_o *)sub_1BCAA2C(RestrictionSlotDetailMaster_TypeInfo, v5441, v5442, v5443);
  RestrictionSlotDetailMaster___ctor(v5444, 0LL);
  if ( v5444 )
  {
    v1052 = sub_1BCA91C(v5444, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1571;
  v1047->m_Items[439] = (DataMasterBase_o *)v5444;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[439],
    (int64_t)v5444,
    v5445,
    v5446,
    v5447,
    v5448,
    v5449,
    v5450);
  v5454 = (RestrictionMessageMaster_o *)sub_1BCAA2C(RestrictionMessageMaster_TypeInfo, v5451, v5452, v5453);
  RestrictionMessageMaster___ctor(v5454, 0LL);
  if ( v5454 )
  {
    v1052 = sub_1BCA91C(v5454, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1571;
  v1047->m_Items[440] = (DataMasterBase_o *)v5454;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[440],
    (int64_t)v5454,
    v5455,
    v5456,
    v5457,
    v5458,
    v5459,
    v5460);
  v5464 = (RestrictionWholeMaster_o *)sub_1BCAA2C(RestrictionWholeMaster_TypeInfo, v5461, v5462, v5463);
  RestrictionWholeMaster___ctor(v5464, 0LL);
  if ( v5464 )
  {
    v1052 = sub_1BCA91C(v5464, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1571;
  v1047->m_Items[441] = (DataMasterBase_o *)v5464;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[441],
    (int64_t)v5464,
    v5465,
    v5466,
    v5467,
    v5468,
    v5469,
    v5470);
  v5474 = (FuncDispMaster_o *)sub_1BCAA2C(FuncDispMaster_TypeInfo, v5471, v5472, v5473);
  FuncDispMaster___ctor(v5474, 0LL);
  if ( v5474 )
  {
    v1052 = sub_1BCA91C(v5474, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1571;
  v1047->m_Items[442] = (DataMasterBase_o *)v5474;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[442],
    (int64_t)v5474,
    v5475,
    v5476,
    v5477,
    v5478,
    v5479,
    v5480);
  v5484 = (ClassBoardCommandSpellMaster_o *)sub_1BCAA2C(ClassBoardCommandSpellMaster_TypeInfo, v5481, v5482, v5483);
  ClassBoardCommandSpellMaster___ctor(v5484, 0LL);
  if ( v5484 )
  {
    v1052 = sub_1BCA91C(v5484, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1571;
  v1047->m_Items[443] = (DataMasterBase_o *)v5484;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[443],
    (int64_t)v5484,
    v5485,
    v5486,
    v5487,
    v5488,
    v5489,
    v5490);
  v5494 = (ClassBoardClassMaster_o *)sub_1BCAA2C(ClassBoardClassMaster_TypeInfo, v5491, v5492, v5493);
  ClassBoardClassMaster___ctor(v5494, 0LL);
  if ( v5494 )
  {
    v1052 = sub_1BCA91C(v5494, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1571;
  v1047->m_Items[444] = (DataMasterBase_o *)v5494;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[444],
    (int64_t)v5494,
    v5495,
    v5496,
    v5497,
    v5498,
    v5499,
    v5500);
  v5504 = (EventCommandAssistMaster_o *)sub_1BCAA2C(EventCommandAssistMaster_TypeInfo, v5501, v5502, v5503);
  EventCommandAssistMaster___ctor(v5504, 0LL);
  if ( v5504 )
  {
    v1052 = sub_1BCA91C(v5504, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1571;
  v1047->m_Items[445] = (DataMasterBase_o *)v5504;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[445],
    (int64_t)v5504,
    v5505,
    v5506,
    v5507,
    v5508,
    v5509,
    v5510);
  v5514 = (EventMissionGroupMaster_o *)sub_1BCAA2C(EventMissionGroupMaster_TypeInfo, v5511, v5512, v5513);
  EventMissionGroupMaster___ctor(v5514, 0LL);
  if ( v5514 )
  {
    v1052 = sub_1BCA91C(v5514, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1571;
  v1047->m_Items[446] = (DataMasterBase_o *)v5514;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[446],
    (int64_t)v5514,
    v5515,
    v5516,
    v5517,
    v5518,
    v5519,
    v5520);
  v5524 = (CombineLimitReleaseMaster_o *)sub_1BCAA2C(CombineLimitReleaseMaster_TypeInfo, v5521, v5522, v5523);
  CombineLimitReleaseMaster___ctor(v5524, 0LL);
  if ( v5524 )
  {
    v1052 = sub_1BCA91C(v5524, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1571;
  v1047->m_Items[447] = (DataMasterBase_o *)v5524;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[447],
    (int64_t)v5524,
    v5525,
    v5526,
    v5527,
    v5528,
    v5529,
    v5530);
  v5534 = (HeelPortraitMaster_o *)sub_1BCAA2C(HeelPortraitMaster_TypeInfo, v5531, v5532, v5533);
  HeelPortraitMaster___ctor(v5534, 0LL);
  if ( v5534 )
  {
    v1052 = sub_1BCA91C(v5534, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1571;
  v1047->m_Items[448] = (DataMasterBase_o *)v5534;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[448],
    (int64_t)v5534,
    v5535,
    v5536,
    v5537,
    v5538,
    v5539,
    v5540);
  v5544 = (UserHeelPortraitMaster_o *)sub_1BCAA2C(UserHeelPortraitMaster_TypeInfo, v5541, v5542, v5543);
  UserHeelPortraitMaster___ctor(v5544, 0LL);
  if ( v5544 )
  {
    v1052 = sub_1BCA91C(v5544, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1571;
  v1047->m_Items[449] = (DataMasterBase_o *)v5544;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[449],
    (int64_t)v5544,
    v5545,
    v5546,
    v5547,
    v5548,
    v5549,
    v5550);
  v5554 = (TreasureDeviceSequenceWeightMaster_o *)sub_1BCAA2C(
                                                    TreasureDeviceSequenceWeightMaster_TypeInfo,
                                                    v5551,
                                                    v5552,
                                                    v5553);
  TreasureDeviceSequenceWeightMaster___ctor(v5554, 0LL);
  if ( v5554 )
  {
    v1052 = sub_1BCA91C(v5554, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1571;
  v1047->m_Items[450] = (DataMasterBase_o *)v5554;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[450],
    (int64_t)v5554,
    v5555,
    v5556,
    v5557,
    v5558,
    v5559,
    v5560);
  v5564 = (NpcServantFollowerIndividualityMaster_o *)sub_1BCAA2C(
                                                       NpcServantFollowerIndividualityMaster_TypeInfo,
                                                       v5561,
                                                       v5562,
                                                       v5563);
  NpcServantFollowerIndividualityMaster___ctor(v5564, 0LL);
  if ( v5564 )
  {
    v1052 = sub_1BCA91C(v5564, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1571;
  v1047->m_Items[451] = (DataMasterBase_o *)v5564;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[451],
    (int64_t)v5564,
    v5565,
    v5566,
    v5567,
    v5568,
    v5569,
    v5570);
  v5574 = (GachaExtraGiftMaster_o *)sub_1BCAA2C(GachaExtraGiftMaster_TypeInfo, v5571, v5572, v5573);
  GachaExtraGiftMaster___ctor(v5574, 0LL);
  if ( v5574 )
  {
    v1052 = sub_1BCA91C(v5574, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1571;
  v1047->m_Items[452] = (DataMasterBase_o *)v5574;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[452],
    (int64_t)v5574,
    v5575,
    v5576,
    v5577,
    v5578,
    v5579,
    v5580);
  v5584 = (EventMuralMaster_o *)sub_1BCAA2C(EventMuralMaster_TypeInfo, v5581, v5582, v5583);
  EventMuralMaster___ctor(v5584, 0LL);
  if ( v5584 )
  {
    v1052 = sub_1BCA91C(v5584, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1571;
  v1047->m_Items[453] = (DataMasterBase_o *)v5584;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[453],
    (int64_t)v5584,
    v5585,
    v5586,
    v5587,
    v5588,
    v5589,
    v5590);
  v5594 = (ViewWaveEnemyMaster_o *)sub_1BCAA2C(ViewWaveEnemyMaster_TypeInfo, v5591, v5592, v5593);
  ViewWaveEnemyMaster___ctor(v5594, 0LL);
  if ( v5594 )
  {
    v1052 = sub_1BCA91C(v5594, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1571;
  v1047->m_Items[454] = (DataMasterBase_o *)v5594;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[454],
    (int64_t)v5594,
    v5595,
    v5596,
    v5597,
    v5598,
    v5599,
    v5600);
  v5604 = (BlankEarthSpotNavimenuMaster_o *)sub_1BCAA2C(BlankEarthSpotNavimenuMaster_TypeInfo, v5601, v5602, v5603);
  BlankEarthSpotNavimenuMaster___ctor(v5604, 0LL);
  if ( v5604 )
  {
    v1052 = sub_1BCA91C(v5604, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1571;
  v1047->m_Items[455] = (DataMasterBase_o *)v5604;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[455],
    (int64_t)v5604,
    v5605,
    v5606,
    v5607,
    v5608,
    v5609,
    v5610);
  v5614 = (BlankEarthGimmickMaster_o *)sub_1BCAA2C(BlankEarthGimmickMaster_TypeInfo, v5611, v5612, v5613);
  BlankEarthGimmickMaster___ctor(v5614, 0LL);
  if ( v5614 )
  {
    v1052 = sub_1BCA91C(v5614, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1571;
  v1047->m_Items[456] = (DataMasterBase_o *)v5614;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[456],
    (int64_t)v5614,
    v5615,
    v5616,
    v5617,
    v5618,
    v5619,
    v5620);
  v5624 = (TerminalOverwriteMaster_o *)sub_1BCAA2C(TerminalOverwriteMaster_TypeInfo, v5621, v5622, v5623);
  TerminalOverwriteMaster___ctor(v5624, 0LL);
  if ( v5624 )
  {
    v1052 = sub_1BCA91C(v5624, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1571;
  v1047->m_Items[457] = (DataMasterBase_o *)v5624;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[457],
    (int64_t)v5624,
    v5625,
    v5626,
    v5627,
    v5628,
    v5629,
    v5630);
  v5634 = (UserExchangeSvtMaster_o *)sub_1BCAA2C(UserExchangeSvtMaster_TypeInfo, v5631, v5632, v5633);
  UserExchangeSvtMaster___ctor(v5634, 0LL);
  if ( v5634 )
  {
    v1052 = sub_1BCA91C(v5634, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1571;
  v1047->m_Items[458] = (DataMasterBase_o *)v5634;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[458],
    (int64_t)v5634,
    v5635,
    v5636,
    v5637,
    v5638,
    v5639,
    v5640);
  v5644 = (WarBoardCommonReleaseMaster_o *)sub_1BCAA2C(WarBoardCommonReleaseMaster_TypeInfo, v5641, v5642, v5643);
  WarBoardCommonReleaseMaster___ctor(v5644, 0LL);
  if ( v5644 )
  {
    v1052 = sub_1BCA91C(v5644, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1571;
  v1047->m_Items[459] = (DataMasterBase_o *)v5644;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[459],
    (int64_t)v5644,
    v5645,
    v5646,
    v5647,
    v5648,
    v5649,
    v5650);
  v5654 = (WarBoardEventMaster_o *)sub_1BCAA2C(WarBoardEventMaster_TypeInfo, v5651, v5652, v5653);
  WarBoardEventMaster___ctor(v5654, 0LL);
  if ( v5654 )
  {
    v1052 = sub_1BCA91C(v5654, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1571;
  v1047->m_Items[460] = (DataMasterBase_o *)v5654;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[460],
    (int64_t)v5654,
    v5655,
    v5656,
    v5657,
    v5658,
    v5659,
    v5660);
  v5664 = (WarBoardEventScriptMaster_o *)sub_1BCAA2C(WarBoardEventScriptMaster_TypeInfo, v5661, v5662, v5663);
  WarBoardEventScriptMaster___ctor(v5664, 0LL);
  if ( v5664 )
  {
    v1052 = sub_1BCA91C(v5664, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1571;
  v1047->m_Items[461] = (DataMasterBase_o *)v5664;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[461],
    (int64_t)v5664,
    v5665,
    v5666,
    v5667,
    v5668,
    v5669,
    v5670);
  v5674 = (WarBoardStageBossMaster_o *)sub_1BCAA2C(WarBoardStageBossMaster_TypeInfo, v5671, v5672, v5673);
  WarBoardStageBossMaster___ctor(v5674, 0LL);
  if ( v5674 )
  {
    v1052 = sub_1BCA91C(v5674, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1571;
  v1047->m_Items[462] = (DataMasterBase_o *)v5674;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[462],
    (int64_t)v5674,
    v5675,
    v5676,
    v5677,
    v5678,
    v5679,
    v5680);
  v5684 = (WarBoardSquareIndexGroupMaster_o *)sub_1BCAA2C(WarBoardSquareIndexGroupMaster_TypeInfo, v5681, v5682, v5683);
  WarBoardSquareIndexGroupMaster___ctor(v5684, 0LL);
  if ( v5684 )
  {
    v1052 = sub_1BCA91C(v5684, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1571;
  v1047->m_Items[463] = (DataMasterBase_o *)v5684;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[463],
    (int64_t)v5684,
    v5685,
    v5686,
    v5687,
    v5688,
    v5689,
    v5690);
  v5694 = (WarBoardActionTrendGroupMaster_o *)sub_1BCAA2C(WarBoardActionTrendGroupMaster_TypeInfo, v5691, v5692, v5693);
  WarBoardActionTrendGroupMaster___ctor(v5694, 0LL);
  if ( v5694 )
  {
    v1052 = sub_1BCA91C(v5694, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1571;
  v1047->m_Items[464] = (DataMasterBase_o *)v5694;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[464],
    (int64_t)v5694,
    v5695,
    v5696,
    v5697,
    v5698,
    v5699,
    v5700);
  v5704 = (WarBoardRatingOffsetGroupMaster_o *)sub_1BCAA2C(
                                                 WarBoardRatingOffsetGroupMaster_TypeInfo,
                                                 v5701,
                                                 v5702,
                                                 v5703);
  WarBoardRatingOffsetGroupMaster___ctor(v5704, 0LL);
  if ( v5704 )
  {
    v1052 = sub_1BCA91C(v5704, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1571;
  v1047->m_Items[465] = (DataMasterBase_o *)v5704;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[465],
    (int64_t)v5704,
    v5705,
    v5706,
    v5707,
    v5708,
    v5709,
    v5710);
  v5714 = (WarBoardReinforcementsMaster_o *)sub_1BCAA2C(WarBoardReinforcementsMaster_TypeInfo, v5711, v5712, v5713);
  WarBoardReinforcementsMaster___ctor(v5714, 0LL);
  if ( v5714 )
  {
    v1052 = sub_1BCA91C(v5714, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1571;
  v1047->m_Items[466] = (DataMasterBase_o *)v5714;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[466],
    (int64_t)v5714,
    v5715,
    v5716,
    v5717,
    v5718,
    v5719,
    v5720);
  v5724 = (WarBoardStageReinforcementsMaster_o *)sub_1BCAA2C(
                                                   WarBoardStageReinforcementsMaster_TypeInfo,
                                                   v5721,
                                                   v5722,
                                                   v5723);
  WarBoardStageReinforcementsMaster___ctor(v5724, 0LL);
  if ( v5724 )
  {
    v1052 = sub_1BCA91C(v5724, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1571;
  v1047->m_Items[467] = (DataMasterBase_o *)v5724;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[467],
    (int64_t)v5724,
    v5725,
    v5726,
    v5727,
    v5728,
    v5729,
    v5730);
  v5734 = (WarBoardFutureActionTrendMaster_o *)sub_1BCAA2C(
                                                 WarBoardFutureActionTrendMaster_TypeInfo,
                                                 v5731,
                                                 v5732,
                                                 v5733);
  WarBoardFutureActionTrendMaster___ctor(v5734, 0LL);
  if ( v5734 )
  {
    v1052 = sub_1BCA91C(v5734, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1571;
  v1047->m_Items[468] = (DataMasterBase_o *)v5734;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[468],
    (int64_t)v5734,
    v5735,
    v5736,
    v5737,
    v5738,
    v5739,
    v5740);
  v5744 = (ServantProfilePushMaster_o *)sub_1BCAA2C(ServantProfilePushMaster_TypeInfo, v5741, v5742, v5743);
  ServantProfilePushMaster___ctor(v5744, 0LL);
  if ( v5744 )
  {
    v1052 = sub_1BCA91C(v5744, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1571;
  v1047->m_Items[469] = (DataMasterBase_o *)v5744;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[469],
    (int64_t)v5744,
    v5745,
    v5746,
    v5747,
    v5748,
    v5749,
    v5750);
  v5754 = (MapGimmickPathMaster_o *)sub_1BCAA2C(MapGimmickPathMaster_TypeInfo, v5751, v5752, v5753);
  MapGimmickPathMaster___ctor(v5754, 0LL);
  if ( v5754 )
  {
    v1052 = sub_1BCA91C(v5754, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1571;
  v1047->m_Items[470] = (DataMasterBase_o *)v5754;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[470],
    (int64_t)v5754,
    v5755,
    v5756,
    v5757,
    v5758,
    v5759,
    v5760);
  v5764 = (MapGimmickPathReleaseMaster_o *)sub_1BCAA2C(MapGimmickPathReleaseMaster_TypeInfo, v5761, v5762, v5763);
  MapGimmickPathReleaseMaster___ctor(v5764, 0LL);
  if ( v5764 )
  {
    v1052 = sub_1BCA91C(v5764, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1571;
  v1047->m_Items[471] = (DataMasterBase_o *)v5764;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[471],
    (int64_t)v5764,
    v5765,
    v5766,
    v5767,
    v5768,
    v5769,
    v5770);
  v5774 = (ServantOverwriteMaster_o *)sub_1BCAA2C(ServantOverwriteMaster_TypeInfo, v5771, v5772, v5773);
  ServantOverwriteMaster___ctor(v5774, 0LL);
  if ( v5774 )
  {
    v1052 = sub_1BCA91C(v5774, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1571;
  v1047->m_Items[472] = (DataMasterBase_o *)v5774;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[472],
    (int64_t)v5774,
    v5775,
    v5776,
    v5777,
    v5778,
    v5779,
    v5780);
  v5784 = (IndividualityPolicyMaster_o *)sub_1BCAA2C(IndividualityPolicyMaster_TypeInfo, v5781, v5782, v5783);
  IndividualityPolicyMaster___ctor(v5784, 0LL);
  if ( v5784 )
  {
    v1052 = sub_1BCA91C(v5784, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1571;
  v1047->m_Items[473] = (DataMasterBase_o *)v5784;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[473],
    (int64_t)v5784,
    v5785,
    v5786,
    v5787,
    v5788,
    v5789,
    v5790);
  v5794 = (IndividualityPersonalityMaster_o *)sub_1BCAA2C(IndividualityPersonalityMaster_TypeInfo, v5791, v5792, v5793);
  IndividualityPersonalityMaster___ctor(v5794, 0LL);
  if ( v5794 )
  {
    v1052 = sub_1BCA91C(v5794, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1571;
  v1047->m_Items[474] = (DataMasterBase_o *)v5794;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[474],
    (int64_t)v5794,
    v5795,
    v5796,
    v5797,
    v5798,
    v5799,
    v5800);
  v5804 = (AttriMaster_o *)sub_1BCAA2C(AttriMaster_TypeInfo, v5801, v5802, v5803);
  AttriMaster___ctor(v5804, 0LL);
  if ( v5804 )
  {
    v1052 = sub_1BCA91C(v5804, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1571;
  v1047->m_Items[475] = (DataMasterBase_o *)v5804;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[475],
    (int64_t)v5804,
    v5805,
    v5806,
    v5807,
    v5808,
    v5809,
    v5810);
  v5814 = (ServantVoicePatternMaster_o *)sub_1BCAA2C(ServantVoicePatternMaster_TypeInfo, v5811, v5812, v5813);
  ServantVoicePatternMaster___ctor(v5814, 0LL);
  if ( v5814 )
  {
    v1052 = sub_1BCA91C(v5814, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1571;
  v1047->m_Items[476] = (DataMasterBase_o *)v5814;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[476],
    (int64_t)v5814,
    v5815,
    v5816,
    v5817,
    v5818,
    v5819,
    v5820);
  v5824 = (UserGameCommonMaster_o *)sub_1BCAA2C(UserGameCommonMaster_TypeInfo, v5821, v5822, v5823);
  UserGameCommonMaster___ctor(v5824, 0LL);
  if ( v5824 )
  {
    v1052 = sub_1BCA91C(v5824, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1571;
  v1047->m_Items[477] = (DataMasterBase_o *)v5824;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[477],
    (int64_t)v5824,
    v5825,
    v5826,
    v5827,
    v5828,
    v5829,
    v5830);
  v5834 = (ServantPhotoMaster_o *)sub_1BCAA2C(ServantPhotoMaster_TypeInfo, v5831, v5832, v5833);
  ServantPhotoMaster___ctor(v5834, 0LL);
  if ( v5834 )
  {
    v1052 = sub_1BCA91C(v5834, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1571;
  v1047->m_Items[478] = (DataMasterBase_o *)v5834;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[478],
    (int64_t)v5834,
    v5835,
    v5836,
    v5837,
    v5838,
    v5839,
    v5840);
  v5844 = (MasterPhotoMaster_o *)sub_1BCAA2C(MasterPhotoMaster_TypeInfo, v5841, v5842, v5843);
  MasterPhotoMaster___ctor(v5844, 0LL);
  if ( v5844 )
  {
    v1052 = sub_1BCA91C(v5844, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1571;
  v1047->m_Items[479] = (DataMasterBase_o *)v5844;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[479],
    (int64_t)v5844,
    v5845,
    v5846,
    v5847,
    v5848,
    v5849,
    v5850);
  v5854 = (WarMessageMaster_o *)sub_1BCAA2C(WarMessageMaster_TypeInfo, v5851, v5852, v5853);
  WarMessageMaster___ctor(v5854, 0LL);
  if ( v5854 )
  {
    v1052 = sub_1BCA91C(v5854, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1571;
  v1047->m_Items[480] = (DataMasterBase_o *)v5854;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[480],
    (int64_t)v5854,
    v5855,
    v5856,
    v5857,
    v5858,
    v5859,
    v5860);
  v5864 = (QuestAutoOrganizationAdjustMaster_o *)sub_1BCAA2C(
                                                   QuestAutoOrganizationAdjustMaster_TypeInfo,
                                                   v5861,
                                                   v5862,
                                                   v5863);
  QuestAutoOrganizationAdjustMaster___ctor(v5864, 0LL);
  if ( v5864 )
  {
    v1052 = sub_1BCA91C(v5864, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1571;
  v1047->m_Items[481] = (DataMasterBase_o *)v5864;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[481],
    (int64_t)v5864,
    v5865,
    v5866,
    v5867,
    v5868,
    v5869,
    v5870);
  v5874 = (ExcludeMotionMaster_o *)sub_1BCAA2C(ExcludeMotionMaster_TypeInfo, v5871, v5872, v5873);
  ExcludeMotionMaster___ctor(v5874, 0LL);
  if ( v5874 )
  {
    v1052 = sub_1BCA91C(v5874, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1571;
  v1047->m_Items[482] = (DataMasterBase_o *)v5874;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[482],
    (int64_t)v5874,
    v5875,
    v5876,
    v5877,
    v5878,
    v5879,
    v5880);
  v5884 = (UserInterruptionQuestMaster_o *)sub_1BCAA2C(UserInterruptionQuestMaster_TypeInfo, v5881, v5882, v5883);
  UserInterruptionQuestMaster___ctor(v5884, 0LL);
  if ( v5884 )
  {
    v1052 = sub_1BCA91C(v5884, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1571;
  v1047->m_Items[483] = (DataMasterBase_o *)v5884;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[483],
    (int64_t)v5884,
    v5885,
    v5886,
    v5887,
    v5888,
    v5889,
    v5890);
  v5894 = (ServantTransformMaster_o *)sub_1BCAA2C(ServantTransformMaster_TypeInfo, v5891, v5892, v5893);
  ServantTransformMaster___ctor(v5894, 0LL);
  if ( v5894 )
  {
    v1052 = sub_1BCA91C(v5894, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1571;
  v1047->m_Items[484] = (DataMasterBase_o *)v5894;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[484],
    (int64_t)v5894,
    v5895,
    v5896,
    v5897,
    v5898,
    v5899,
    v5900);
  v5904 = (MapUpdateScheduleMaster_o *)sub_1BCAA2C(MapUpdateScheduleMaster_TypeInfo, v5901, v5902, v5903);
  MapUpdateScheduleMaster___ctor(v5904, 0LL);
  if ( v5904 )
  {
    v1052 = sub_1BCA91C(v5904, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1571;
  v1047->m_Items[485] = (DataMasterBase_o *)v5904;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[485],
    (int64_t)v5904,
    v5905,
    v5906,
    v5907,
    v5908,
    v5909,
    v5910);
  v5914 = (QuestPhasePresentMaster_o *)sub_1BCAA2C(QuestPhasePresentMaster_TypeInfo, v5911, v5912, v5913);
  QuestPhasePresentMaster___ctor(v5914, 0LL);
  if ( v5914 )
  {
    v1052 = sub_1BCA91C(v5914, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1571;
  v1047->m_Items[486] = (DataMasterBase_o *)v5914;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[486],
    (int64_t)v5914,
    v5915,
    v5916,
    v5917,
    v5918,
    v5919,
    v5920);
  v5924 = (UserAccountLinkageMaster_o *)sub_1BCAA2C(UserAccountLinkageMaster_TypeInfo, v5921, v5922, v5923);
  UserAccountLinkageMaster___ctor(v5924, 0LL);
  if ( v5924 )
  {
    v1052 = sub_1BCA91C(v5924, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1571;
  v1047->m_Items[487] = (DataMasterBase_o *)v5924;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[487],
    (int64_t)v5924,
    v5925,
    v5926,
    v5927,
    v5928,
    v5929,
    v5930);
  v5934 = (MissionNaviTransitionMaster_o *)sub_1BCAA2C(MissionNaviTransitionMaster_TypeInfo, v5931, v5932, v5933);
  MissionNaviTransitionMaster___ctor(v5934, 0LL);
  if ( v5934 )
  {
    v1052 = sub_1BCA91C(v5934, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1571;
  v1047->m_Items[488] = (DataMasterBase_o *)v5934;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[488],
    (int64_t)v5934,
    v5935,
    v5936,
    v5937,
    v5938,
    v5939,
    v5940);
  v5944 = (MissionNaviQuestMaster_o *)sub_1BCAA2C(MissionNaviQuestMaster_TypeInfo, v5941, v5942, v5943);
  MissionNaviQuestMaster___ctor(v5944, 0LL);
  if ( v5944 )
  {
    v1052 = sub_1BCA91C(v5944, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1571;
  v1047->m_Items[489] = (DataMasterBase_o *)v5944;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[489],
    (int64_t)v5944,
    v5945,
    v5946,
    v5947,
    v5948,
    v5949,
    v5950);
  v5954 = (EventTradeGoodsMaster_o *)sub_1BCAA2C(EventTradeGoodsMaster_TypeInfo, v5951, v5952, v5953);
  EventTradeGoodsMaster___ctor(v5954, 0LL);
  if ( v5954 )
  {
    v1052 = sub_1BCA91C(v5954, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1571;
  v1047->m_Items[490] = (DataMasterBase_o *)v5954;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[490],
    (int64_t)v5954,
    v5955,
    v5956,
    v5957,
    v5958,
    v5959,
    v5960);
  v5964 = (EventTradeStoreMaster_o *)sub_1BCAA2C(EventTradeStoreMaster_TypeInfo, v5961, v5962, v5963);
  EventTradeStoreMaster___ctor(v5964, 0LL);
  if ( v5964 )
  {
    v1052 = sub_1BCA91C(v5964, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1571;
  v1047->m_Items[491] = (DataMasterBase_o *)v5964;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[491],
    (int64_t)v5964,
    v5965,
    v5966,
    v5967,
    v5968,
    v5969,
    v5970);
  v5974 = (EventTradePickupMaster_o *)sub_1BCAA2C(EventTradePickupMaster_TypeInfo, v5971, v5972, v5973);
  EventTradePickupMaster___ctor(v5974, 0LL);
  if ( v5974 )
  {
    v1052 = sub_1BCA91C(v5974, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1571;
  v1047->m_Items[492] = (DataMasterBase_o *)v5974;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[492],
    (int64_t)v5974,
    v5975,
    v5976,
    v5977,
    v5978,
    v5979,
    v5980);
  v5984 = (UserEventTradeMaster_o *)sub_1BCAA2C(UserEventTradeMaster_TypeInfo, v5981, v5982, v5983);
  UserEventTradeMaster___ctor(v5984, 0LL);
  if ( v5984 )
  {
    v1052 = sub_1BCA91C(v5984, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1571;
  v1047->m_Items[493] = (DataMasterBase_o *)v5984;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[493],
    (int64_t)v5984,
    v5985,
    v5986,
    v5987,
    v5988,
    v5989,
    v5990);
  v5994 = (PaymentHistoryMaster_o *)sub_1BCAA2C(PaymentHistoryMaster_TypeInfo, v5991, v5992, v5993);
  PaymentHistoryMaster___ctor(v5994, 0LL);
  if ( v5994 )
  {
    v1052 = sub_1BCA91C(v5994, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1571;
  v1047->m_Items[494] = (DataMasterBase_o *)v5994;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[494],
    (int64_t)v5994,
    v5995,
    v5996,
    v5997,
    v5998,
    v5999,
    v6000);
  v6004 = (UserExternalPaymentStoneMaster_o *)sub_1BCAA2C(UserExternalPaymentStoneMaster_TypeInfo, v6001, v6002, v6003);
  UserExternalPaymentStoneMaster___ctor(v6004, 0LL);
  if ( v6004 )
  {
    v1052 = sub_1BCA91C(v6004, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1571;
  v1047->m_Items[495] = (DataMasterBase_o *)v6004;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[495],
    (int64_t)v6004,
    v6005,
    v6006,
    v6007,
    v6008,
    v6009,
    v6010);
  v6014 = (QuestPhaseIndividualityMaster_o *)sub_1BCAA2C(QuestPhaseIndividualityMaster_TypeInfo, v6011, v6012, v6013);
  QuestPhaseIndividualityMaster___ctor(v6014, 0LL);
  if ( v6014 )
  {
    v1052 = sub_1BCA91C(v6014, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1571;
  v1047->m_Items[496] = (DataMasterBase_o *)v6014;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[496],
    (int64_t)v6014,
    v6015,
    v6016,
    v6017,
    v6018,
    v6019,
    v6020);
  v6024 = (ViewGachaFeaturedServantMaster_o *)sub_1BCAA2C(ViewGachaFeaturedServantMaster_TypeInfo, v6021, v6022, v6023);
  ViewGachaFeaturedServantMaster___ctor(v6024, 0LL);
  if ( v6024 )
  {
    v1052 = sub_1BCA91C(v6024, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1571;
  v1047->m_Items[497] = (DataMasterBase_o *)v6024;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[497],
    (int64_t)v6024,
    v6025,
    v6026,
    v6027,
    v6028,
    v6029,
    v6030);
  v6034 = (UserGachaPickupCollateralMaster_o *)sub_1BCAA2C(
                                                 UserGachaPickupCollateralMaster_TypeInfo,
                                                 v6031,
                                                 v6032,
                                                 v6033);
  UserGachaPickupCollateralMaster___ctor(v6034, 0LL);
  if ( v6034 )
  {
    v1052 = sub_1BCA91C(v6034, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1571;
  v1047->m_Items[498] = (DataMasterBase_o *)v6034;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[498],
    (int64_t)v6034,
    v6035,
    v6036,
    v6037,
    v6038,
    v6039,
    v6040);
  v6044 = (GachaPickupCollateralMaster_o *)sub_1BCAA2C(GachaPickupCollateralMaster_TypeInfo, v6041, v6042, v6043);
  GachaPickupCollateralMaster___ctor(v6044, 0LL);
  if ( v6044 )
  {
    v1052 = sub_1BCA91C(v6044, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1571;
  v1047->m_Items[499] = (DataMasterBase_o *)v6044;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[499],
    (int64_t)v6044,
    v6045,
    v6046,
    v6047,
    v6048,
    v6049,
    v6050);
  v6054 = (GachaPickupCollateralGroupMaster_o *)sub_1BCAA2C(
                                                  GachaPickupCollateralGroupMaster_TypeInfo,
                                                  v6051,
                                                  v6052,
                                                  v6053);
  GachaPickupCollateralGroupMaster___ctor(v6054, 0LL);
  if ( v6054 )
  {
    v1052 = sub_1BCA91C(v6054, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1571;
  v1047->m_Items[500] = (DataMasterBase_o *)v6054;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[500],
    (int64_t)v6054,
    v6055,
    v6056,
    v6057,
    v6058,
    v6059,
    v6060);
  v6064 = (BattlePointMaster_o *)sub_1BCAA2C(BattlePointMaster_TypeInfo, v6061, v6062, v6063);
  BattlePointMaster___ctor(v6064, 0LL);
  if ( v6064 )
  {
    v1052 = sub_1BCA91C(v6064, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1571;
  v1047->m_Items[501] = (DataMasterBase_o *)v6064;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[501],
    (int64_t)v6064,
    v6065,
    v6066,
    v6067,
    v6068,
    v6069,
    v6070);
  v6074 = (BattlePointPhaseMaster_o *)sub_1BCAA2C(BattlePointPhaseMaster_TypeInfo, v6071, v6072, v6073);
  BattlePointPhaseMaster___ctor(v6074, 0LL);
  if ( v6074 )
  {
    v1052 = sub_1BCA91C(v6074, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1571;
  v1047->m_Items[502] = (DataMasterBase_o *)v6074;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[502],
    (int64_t)v6074,
    v6075,
    v6076,
    v6077,
    v6078,
    v6079,
    v6080);
  v6084 = (ServantBattlePointMaster_o *)sub_1BCAA2C(ServantBattlePointMaster_TypeInfo, v6081, v6082, v6083);
  ServantBattlePointMaster___ctor(v6084, 0LL);
  if ( v6084 )
  {
    v1052 = sub_1BCA91C(v6084, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1571;
  v1047->m_Items[503] = (DataMasterBase_o *)v6084;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[503],
    (int64_t)v6084,
    v6085,
    v6086,
    v6087,
    v6088,
    v6089,
    v6090);
  v6094 = (EffectMovieMaster_o *)sub_1BCAA2C(EffectMovieMaster_TypeInfo, v6091, v6092, v6093);
  EffectMovieMaster___ctor(v6094, 0LL);
  if ( v6094 )
  {
    v1052 = sub_1BCA91C(v6094, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1571;
  v1047->m_Items[504] = (DataMasterBase_o *)v6094;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[504],
    (int64_t)v6094,
    v6095,
    v6096,
    v6097,
    v6098,
    v6099,
    v6100);
  v6104 = (PaymentLimitMaster_o *)sub_1BCAA2C(PaymentLimitMaster_TypeInfo, v6101, v6102, v6103);
  PaymentLimitMaster___ctor(v6104, 0LL);
  if ( v6104 )
  {
    v1052 = sub_1BCA91C(v6104, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1571;
  v1047->m_Items[505] = (DataMasterBase_o *)v6104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[505],
    (int64_t)v6104,
    v6105,
    v6106,
    v6107,
    v6108,
    v6109,
    v6110);
  v6114 = (UserPaymentLimitMaster_o *)sub_1BCAA2C(UserPaymentLimitMaster_TypeInfo, v6111, v6112, v6113);
  UserPaymentLimitMaster___ctor(v6114, 0LL);
  if ( v6114 )
  {
    v1052 = sub_1BCA91C(v6114, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1571;
  v1047->m_Items[506] = (DataMasterBase_o *)v6114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[506],
    (int64_t)v6114,
    v6115,
    v6116,
    v6117,
    v6118,
    v6119,
    v6120);
  v6124 = (RoadmapMaster_o *)sub_1BCAA2C(RoadmapMaster_TypeInfo, v6121, v6122, v6123);
  RoadmapMaster___ctor(v6124, 0LL);
  if ( v6124 )
  {
    v1052 = sub_1BCA91C(v6124, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1571;
  v1047->m_Items[507] = (DataMasterBase_o *)v6124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[507],
    (int64_t)v6124,
    v6125,
    v6126,
    v6127,
    v6128,
    v6129,
    v6130);
  v6134 = (UserRecommendSupportMaster_o *)sub_1BCAA2C(UserRecommendSupportMaster_TypeInfo, v6131, v6132, v6133);
  UserRecommendSupportMaster___ctor(v6134, 0LL);
  if ( v6134 )
  {
    v1052 = sub_1BCA91C(v6134, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1571;
  v1047->m_Items[508] = (DataMasterBase_o *)v6134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[508],
    (int64_t)v6134,
    v6135,
    v6136,
    v6137,
    v6138,
    v6139,
    v6140);
  v6144 = (RecommendSupportQuestMaster_o *)sub_1BCAA2C(RecommendSupportQuestMaster_TypeInfo, v6141, v6142, v6143);
  RecommendSupportQuestMaster___ctor(v6144, 0LL);
  if ( v6144 )
  {
    v1052 = sub_1BCA91C(v6144, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1571;
  v1047->m_Items[509] = (DataMasterBase_o *)v6144;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[509],
    (int64_t)v6144,
    v6145,
    v6146,
    v6147,
    v6148,
    v6149,
    v6150);
  v6154 = (RecommendAdviceMessageMaster_o *)sub_1BCAA2C(RecommendAdviceMessageMaster_TypeInfo, v6151, v6152, v6153);
  RecommendAdviceMessageMaster___ctor(v6154, 0LL);
  if ( v6154 )
  {
    v1052 = sub_1BCA91C(v6154, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1571;
  v1047->m_Items[510] = (DataMasterBase_o *)v6154;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[510],
    (int64_t)v6154,
    v6155,
    v6156,
    v6157,
    v6158,
    v6159,
    v6160);
  v6164 = (UserRecommendFollowerMaster_o *)sub_1BCAA2C(UserRecommendFollowerMaster_TypeInfo, v6161, v6162, v6163);
  UserRecommendFollowerMaster___ctor(v6164, 0LL);
  if ( v6164 )
  {
    v1052 = sub_1BCA91C(v6164, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1571;
  v1047->m_Items[511] = (DataMasterBase_o *)v6164;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[511],
    (int64_t)v6164,
    v6165,
    v6166,
    v6167,
    v6168,
    v6169,
    v6170);
  v6174 = (ItemDropEfficiencyMaster_o *)sub_1BCAA2C(ItemDropEfficiencyMaster_TypeInfo, v6171, v6172, v6173);
  ItemDropEfficiencyMaster___ctor(v6174, 0LL);
  if ( v6174 )
  {
    v1052 = sub_1BCA91C(v6174, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1571;
  v1047->m_Items[512] = (DataMasterBase_o *)v6174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[512],
    (int64_t)v6174,
    v6175,
    v6176,
    v6177,
    v6178,
    v6179,
    v6180);
  v6184 = (BlankEarthGimmickAddMaster_o *)sub_1BCAA2C(BlankEarthGimmickAddMaster_TypeInfo, v6181, v6182, v6183);
  BlankEarthGimmickAddMaster___ctor(v6184, 0LL);
  if ( v6184 )
  {
    v1052 = sub_1BCA91C(v6184, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1571;
  v1047->m_Items[513] = (DataMasterBase_o *)v6184;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[513],
    (int64_t)v6184,
    v6185,
    v6186,
    v6187,
    v6188,
    v6189,
    v6190);
  v6194 = (WarReleaseMaster_o *)sub_1BCAA2C(WarReleaseMaster_TypeInfo, v6191, v6192, v6193);
  WarReleaseMaster___ctor(v6194, 0LL);
  if ( v6194 )
  {
    v1052 = sub_1BCA91C(v6194, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1571;
  v1047->m_Items[514] = (DataMasterBase_o *)v6194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[514],
    (int64_t)v6194,
    v6195,
    v6196,
    v6197,
    v6198,
    v6199,
    v6200);
  v6204 = (SelectBonusBaseMaster_o *)sub_1BCAA2C(SelectBonusBaseMaster_TypeInfo, v6201, v6202, v6203);
  SelectBonusBaseMaster___ctor(v6204, 0LL);
  if ( v6204 )
  {
    v1052 = sub_1BCA91C(v6204, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1571;
  v1047->m_Items[515] = (DataMasterBase_o *)v6204;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[515],
    (int64_t)v6204,
    v6205,
    v6206,
    v6207,
    v6208,
    v6209,
    v6210);
  v6214 = (SelectBonusMaster_o *)sub_1BCAA2C(SelectBonusMaster_TypeInfo, v6211, v6212, v6213);
  SelectBonusMaster___ctor(v6214, 0LL);
  if ( v6214 )
  {
    v1052 = sub_1BCA91C(v6214, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1571;
  v1047->m_Items[516] = (DataMasterBase_o *)v6214;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[516],
    (int64_t)v6214,
    v6215,
    v6216,
    v6217,
    v6218,
    v6219,
    v6220);
  v6224 = (MyroomServantSpecialImageMaster_o *)sub_1BCAA2C(
                                                 MyroomServantSpecialImageMaster_TypeInfo,
                                                 v6221,
                                                 v6222,
                                                 v6223);
  MyroomServantSpecialImageMaster___ctor(v6224, 0LL);
  if ( v6224 )
  {
    v1052 = sub_1BCA91C(v6224, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1571;
  v1047->m_Items[517] = (DataMasterBase_o *)v6224;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[517],
    (int64_t)v6224,
    v6225,
    v6226,
    v6227,
    v6228,
    v6229,
    v6230);
  v6234 = (ShopResetMaster_o *)sub_1BCAA2C(ShopResetMaster_TypeInfo, v6231, v6232, v6233);
  ShopResetMaster___ctor(v6234, 0LL);
  if ( v6234 )
  {
    v1052 = sub_1BCA91C(v6234, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1571;
  v1047->m_Items[518] = (DataMasterBase_o *)v6234;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[518],
    (int64_t)v6234,
    v6235,
    v6236,
    v6237,
    v6238,
    v6239,
    v6240);
  v6244 = (NpcServantDisplayTypeDetailMaster_o *)sub_1BCAA2C(
                                                   NpcServantDisplayTypeDetailMaster_TypeInfo,
                                                   v6241,
                                                   v6242,
                                                   v6243);
  NpcServantDisplayTypeDetailMaster___ctor(v6244, 0LL);
  if ( v6244 )
  {
    v1052 = sub_1BCA91C(v6244, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1571;
  v1047->m_Items[519] = (DataMasterBase_o *)v6244;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[519],
    (int64_t)v6244,
    v6245,
    v6246,
    v6247,
    v6248,
    v6249,
    v6250);
  v6254 = (FriendshipServantMaster_o *)sub_1BCAA2C(FriendshipServantMaster_TypeInfo, v6251, v6252, v6253);
  FriendshipServantMaster___ctor(v6254, 0LL);
  if ( v6254 )
  {
    v1052 = sub_1BCA91C(v6254, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
      goto LABEL_1572;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1571;
  v1047->m_Items[520] = (DataMasterBase_o *)v6254;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[520],
    (int64_t)v6254,
    v6255,
    v6256,
    v6257,
    v6258,
    v6259,
    v6260);
  v6264 = (GivenNumMaster_o *)sub_1BCAA2C(GivenNumMaster_TypeInfo, v6261, v6262, v6263);
  GivenNumMaster___ctor(v6264, 0LL);
  if ( v6264 )
  {
    v1052 = sub_1BCA91C(v6264, v1047->obj.klass->_1.element_class);
    if ( !v1052 )
    {
LABEL_1572:
      v6272 = sub_1BCAA60(v1052);
      sub_1BCA908(v6272, 0LL);
    }
  }
  if ( *p_max_length <= 0x209 )
LABEL_1571:
    sub_1BCAA44(v1052, v1053);
  v1047->m_Items[521] = (DataMasterBase_o *)v6264;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1047->m_Items[521],
    (int64_t)v6264,
    v6265,
    v6266,
    v6267,
    v6268,
    v6269,
    v6270);
  return v1047;
}


void __fastcall DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  DataManager_c *v6; // x0
  System_String_o *CacheVersionFileName; // x19
  __int64 v8; // x1
  DataManager_c *v9; // x0
  System_String_o *CacheListFileName; // x19
  __int64 v11; // x1
  DataManager_c *v12; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4B15D21 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v3, v4);
    byte_4B15D21 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v9 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v12 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v12);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int v23; // w26
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x21
  System_String_o *v27; // x20
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15D1E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8646/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v13, v14);
    byte_4B15D1E = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v15;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_masterCheckName, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  v23 = 1;
  do
  {
    v40 = v23;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    v26 = System_String__Format((System_String_o *)StringLiteral_8646/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v24, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v27 = LocalizationManager__Get(v26, 0LL);
    if ( System_String__op_Equality(v27, v26, 0LL) )
      break;
    v35 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v35->fields._items;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      ++v35->fields._version;
      if ( items )
        continue;
    }
    sub_1BCAA3C(v35, v28);
    size = v35->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        (Il2CppObject *)v27,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &items->obj.klass + size;
      v35->fields._size = size + 1;
      v39[4] = (Il2CppClass *)v27;
      sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v27, v29, v30, v31, v32, v33, v34);
    }
    ++v23;
  }
  while ( v23 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2F12C90 *method)
{
  __int64 v2; // x2
  long double v3; // q0
  const MethodInfo_2F12C90_RGCTXs *rgctx_data; // x8
  const MethodInfo_2F12C90 *_1_TMaster; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v18; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v21; // x20
  __int64 v22; // x1
  long double v23; // q0
  Il2CppObject *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v26; // x19
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x19
  System_Enum_o v31; // [xsp+8h] [xbp-48h] BYREF
  int v32; // [xsp+18h] [xbp-38h]
  int v33; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v35; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&UnityEngine_Debug_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&DataNameKind_Kind_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Type_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_21550/*"master[{0}] is null[{1}:{2}]"*/, v15, v16);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(_1_TMaster);
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v18 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v18 )
  {
    sub_1C1C718(_0_DataMasterBase_GetRegisteredKind_TMaster);
    v18 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v18[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C1C6BC(v3);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v21) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v21,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v21 = value;
    _1_TMaster = (const MethodInfo_2F12C90 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2F12C90 *)sub_1C1C6BC(v23);
    if ( !v21 )
      return 0LL;
    result = (Il2CppObject *)sub_1BCA91C(v21, _1_TMaster);
    if ( result )
      return result;
    sub_1BCACFC(v21);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
  v35.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v35, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1BCAA3C(rgctxDataDummy, method);
  v26 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v33 = (int)v21;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v32 = (int)v21;
  v31.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v31.monitor = (void *)-1LL;
  v28 = (Il2CppObject *)System_Enum__ToString(&v31, 0LL);
  v30 = (Il2CppObject *)System_String__Format_62415660((System_String_o *)StringLiteral_21550/*"master[{0}] is null[{1}:{2}]"*/, v26, v27, v28, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v29);
  UnityEngine_Debug__LogError(v30, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2F12C3C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1, v2);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Func_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B15D09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_CreateMasterData__, method, v2);
    sub_1BCA7E0(&System_Func_DataMasterBase____TypeInfo, v5, v6);
    byte_4B15D09 = 1;
  }
  v7 = (System_Func_object__o *)sub_1BCAA2C(System_Func_DataMasterBase____TypeInfo, method, v2, v3);
  System_Func_object____ctor(v7, 0LL, Method_DataManager_CreateMasterData__, 0LL);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v7, v8);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v11; // x19
  int64_t v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_int__object__o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int v23; // w8
  unsigned int v24; // w23
  __int64 v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v4 = this;
  if ( (byte_4B15D0A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__,
      createMasterDataMethod,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5, v6);
    this = (DataManager_o *)sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v7, v8);
    byte_4B15D0A = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( (unsigned int)v11 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v11];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
                                  method);
        max_length = datalist->max_length;
        if ( (int)++v11 >= max_length )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v12 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))createMasterDataMethod->fields.m_target)(
                  createMasterDataMethod->fields.original_method_info,
                  *(_QWORD *)&createMasterDataMethod->fields.extra_arg,
                  method),
          v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                          System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo,
                                                                          v13,
                                                                          v14,
                                                                          v15),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v16,
            (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v12) )
    {
LABEL_19:
      sub_1BCAA3C(this, createMasterDataMethod);
    }
    v23 = *(_DWORD *)(v12 + 24);
    if ( v23 >= 1 )
    {
      v24 = 0;
      while ( v24 < v23 )
      {
        v25 = *(_QWORD *)(v12 + 8LL * (int)v24 + 32);
        if ( !v25 || !v16 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v16,
          *(_DWORD *)(v25 + 16),
          (Il2CppObject *)v25,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v23 = *(_DWORD *)(v12 + 24);
        if ( (int)++v24 >= v23 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BCAA44(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.datalist, v12, v17, v18, v19, v20, v21, v22);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.lookup, (int64_t)v16, v26, v27, v28, v29, v30, v31);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
{
  void *v3; // x25
  DataManager_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x20
  __int64 v24; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  unsigned __int64 i; // x27
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v33; // w23
  Il2CppObject *Item; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v48; // x25
  __int64 Index_object; // x0
  __int64 v50; // x1
  const MethodInfo_36BF22C *v51; // x3
  struct DataMasterBase_array *v52; // x8
  DataMasterBase_o *v53; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  const MethodInfo_36BF22C *v58; // x3
  __int64 v59; // x0
  __int64 v60; // x1
  Il2CppObject *lockCountObj; // x22
  int v62; // w1
  _QWORD **v63; // x20
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x20
  __int64 v68; // x0
  struct System_Threading_SynchronizationContext_o *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x0
  __int64 v74; // x1
  System_Threading_SendOrPostCallback_o *v75; // x21
  __int64 v76; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  __int64 v79; // x1
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x1
  intptr_t v85; // w0
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v97; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v98; // [xsp+28h] [xbp-78h] BYREF
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v100; // 0:x0.16
  System_Nullable_long__o v101; // 0:x0.16

  v5 = this;
  if ( (byte_4B15D1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_DataMasterBase___, indexList, method);
    sub_1BCA7E0(&byte___TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v14, v15);
    sub_1BCA7E0(&System_Predicate_DataMasterBase__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v18, v19);
    this = (DataManager_o *)sub_1BCA7E0(&DataManager___c__DisplayClass58_0_TypeInfo, v20, v21);
    byte_4B15D1B = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1BCAA3C(this, indexList);
  v22 = sub_1BCA91C(indexList, int___TypeInfo);
  v23 = v22;
  if ( v22 )
  {
    v24 = *(unsigned int *)(v22 + 24);
    work = (System_Byte_array *)sub_1BCA888(byte___TypeInfo, 2000LL);
    if ( (int)v24 >= 1 )
    {
      for ( i = 0LL; i != v24; ++i )
      {
        v29 = sub_1BCAA2C(DataManager___c__DisplayClass58_0_TypeInfo, v25, v26, v27);
        System_Object___ctor((Il2CppObject *)v29, 0LL);
        if ( i >= *(unsigned int *)(v23 + 24) )
          sub_1BCAA44(v30, v31);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1BCAA3C(0LL, v31);
        v33 = *(_DWORD *)(v23 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v33,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v29 )
          sub_1BCAA3C(Item, Item);
        *(_QWORD *)(v29 + 16) = Item;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)Item, v35, v36, v37, v38, v39, v40);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1BCAA3C(0LL, v41);
        v43 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v33,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v29 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v48 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DataMasterBase__TypeInfo, v44, v45, v46);
          System_Predicate_object____ctor(
            v48,
            (Il2CppObject *)v29,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v48,
                           (const MethodInfo_300D674 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v52 = v5->fields.datalist;
            if ( !v52 )
              sub_1BCAA3C(Index_object, v50);
            if ( (unsigned int)Index_object >= v52->max_length )
              sub_1BCAA44(Index_object, v50);
            if ( !v43 )
              sub_1BCAA3C(Index_object, v50);
            if ( !LODWORD(v43[1].monitor) )
              sub_1BCAA44(Index_object, v50);
            v53 = v52->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v100.fields.value = (int64_t)v43[2].klass;
            *(_QWORD *)&v98.fields.hasValue = 0LL;
            v98.fields.value = 0LL;
            *(_QWORD *)&v100.fields.hasValue = &v98;
            System_Nullable_long____ctor(v100, Method_System_Nullable_long___ctor__, v51);
            if ( LODWORD(v43[1].monitor) <= 1 )
              sub_1BCAA44(v56, v57);
            v101.fields.value = (int64_t)v43[2].monitor;
            *(_QWORD *)&v97.fields.hasValue = 0LL;
            v97.fields.value = 0LL;
            *(_QWORD *)&v101.fields.hasValue = &v97;
            System_Nullable_long____ctor(v101, Method_System_Nullable_long___ctor__, v58);
            if ( !v53 )
              sub_1BCAA3C(v59, v60);
            DataMasterBase__ReplacedForThread(v53, p_obj, context, v98, v97, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_63627392(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1BCACFC(indexList);
    if ( v62 != 1 )
      sub_1CB5270();
    v63 = (_QWORD **)__cxa_begin_catch(v3);
    v65 = sub_1BCA7F4(&System_Threading_ThreadAbortException_TypeInfo, v64);
    if ( (j_il2cpp_class_is_assignable_from_0(v65, **v63) & 1) != 0 )
    {
      __cxa_end_catch();
      v67 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63627392(v67, lockTaken, 0LL);
    }
    else
    {
      v68 = sub_1BCA7F4(&System_Exception_TypeInfo, v66);
      if ( (j_il2cpp_class_is_assignable_from_0(v68, **v63) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v63;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v69 = v5->fields.context;
      v71 = sub_1BCA7F4(&DataManager___c_TypeInfo, v70);
      if ( !*(_DWORD *)(v71 + 224) )
        j_il2cpp_runtime_class_init_0(v71, v72);
      v73 = sub_1BCA7F4(&DataManager___c_TypeInfo, v72);
      v75 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v73 + 184) + 8LL);
      if ( !v75 )
      {
        v76 = sub_1BCA7F4(&DataManager___c_TypeInfo, v74);
        if ( !*(_DWORD *)(v76 + 224) )
          j_il2cpp_runtime_class_init_0(v76, v77);
        v78 = **(Il2CppObject ***)(sub_1BCA7F4(&DataManager___c_TypeInfo, v77) + 184);
        v80 = sub_1BCA7F4(&System_Threading_SendOrPostCallback_TypeInfo, v79);
        v75 = (System_Threading_SendOrPostCallback_o *)sub_1BCAA2C(v80, v81, v82, v83);
        v85 = sub_1BCA7F4(&Method_DataManager___c__LoadMasterDataThread_b__58_1__, v84);
        System_Threading_SendOrPostCallback___ctor(v75, v78, v85, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1BCA7F4(&DataManager___c_TypeInfo, v86) + 184) + 8LL) = v75;
        v88 = sub_1BCA7F4(&DataManager___c_TypeInfo, v87);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(*(_QWORD *)(v88 + 184) + 8LL),
          (int64_t)v75,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
      if ( !v69 )
        sub_1BCAA3C(v73, v74);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v69->klass->vtable._5_Post.method)(
        v69,
        v75,
        0LL,
        v69->klass->vtable._6_OperationStarted.methodPtr);
      v67 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63627392(v67, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v67, 0LL);
  }
}


void __fastcall DataManager__OnDestroy(DataManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DataManager__StopWriteLocalFile(this, method);
  DataManager__StopMasterLoadThread(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataManager__StartMasterLoadThread(
        DataManager_o *this,
        int32_t maxIndex,
        System_Collections_Generic_List_int__o *loadedIndices,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t v35; // x23
  System_Collections_Generic_List_object__o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_object__o *v60; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_int__o *v68; // x0
  System_Int32_array *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Comparison_int__o *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Threading_ParameterizedThreadStart_o *v87; // x24
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  System_Threading_Thread_o *v91; // x23
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Func_int__bool__o *v95; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  System_Int32_array *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  Il2CppClass **v107; // x8
  int v108; // w8
  bool v109; // nf

  if ( (byte_4B15D19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_int____76835504, *(_QWORD *)&maxIndex, loadedIndices);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_LoadMasterDataThread__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v13, v14);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Thread__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Thread___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_Thread__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Threading_ParameterizedThreadStart_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Threading_Thread_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v27, v28);
    sub_1BCA7E0(&DataManager___c__DisplayClass56_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v31, v32);
    sub_1BCA7E0(&DataManager___c__DisplayClass56_1_TypeInfo, v33, v34);
    byte_4B15D19 = 1;
  }
  v35 = sub_1BCAA2C(DataManager___c__DisplayClass56_0_TypeInfo, *(_QWORD *)&maxIndex, loadedIndices, method);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_14;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v35 + 24) = loadedIndices;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)loadedIndices, v44, v45, v46, v47, v48, v49);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.context, (int64_t)Current, v51, v52, v53, v54, v55, v56);
  v60 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Thread__TypeInfo,
                                                       v57,
                                                       v58,
                                                       v59);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v60;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterLoadThreads, (int64_t)v60, v62, v63, v64, v65, v66, v67);
  v68 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v69 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v68,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v73 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, v70, v71, v72);
  System_Comparison_int____ctor(
    v73,
    (Il2CppObject *)v35,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__49153640(
    v69,
    (System_Comparison_T__o *)v73,
    (const MethodInfo_2EE0668 *)Method_System_Array_Sort_int____76835504);
  v77 = sub_1BCAA2C(DataManager___c__DisplayClass56_1_TypeInfo, v74, v75, v76);
  System_Object___ctor((Il2CppObject *)v77, 0LL);
  if ( !v77 )
LABEL_14:
    sub_1BCAA3C(v36, v37);
  *(_QWORD *)(v77 + 24) = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 24), v35, v78, v79, v80, v81, v82, v83);
  *(_DWORD *)(v77 + 16) = 0;
  do
  {
    v87 = (System_Threading_ParameterizedThreadStart_o *)sub_1BCAA2C(
                                                           System_Threading_ParameterizedThreadStart_TypeInfo,
                                                           v84,
                                                           v85,
                                                           v86);
    System_Threading_ParameterizedThreadStart___ctor(
      v87,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v91 = (System_Threading_Thread_o *)sub_1BCAA2C(System_Threading_Thread_TypeInfo, v88, v89, v90);
    System_Threading_Thread___ctor_63663472(v91, v87, 0LL);
    if ( !v91 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v91, 1, 0LL);
    v95 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v92, v93, v94);
    System_Func_int__bool____ctor(
      v95,
      (Il2CppObject *)v77,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v96 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v69,
            (System_Func_TSource__bool__o *)v95,
            (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
    v97 = System_Linq_Enumerable__ToArray_int_(
            v96,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_63664052(v91, &v97->obj, 0LL);
    v36 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v36->fields._items;
    v105 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v36->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v36->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v91,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
    }
    else
    {
      v107 = &items->obj.klass + size;
      v36->fields._size = size + 1;
      v107[4] = (Il2CppClass *)v91;
      sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v91, v98, v99, v100, v101, v102, v103);
    }
    v108 = *(_DWORD *)(v77 + 16) + 1;
    v109 = *(_DWORD *)(v77 + 16) - 4 < 0;
    *(_DWORD *)(v77 + 16) = v108;
  }
  while ( v109 != __OFSUB__(v108, 5) );
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Threading_ParameterizedThreadStart_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Threading_Thread_o *v21; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1

  if ( (byte_4B15D1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_WriteLocalFileThread__, fileName, method);
    sub_1BCA7E0(&System_Threading_ParameterizedThreadStart_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Threading_Thread_TypeInfo, v12, v13);
    byte_4B15D1C = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.writeMasterDataThreadException,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (System_Threading_ParameterizedThreadStart_o *)sub_1BCAA2C(
                                                         System_Threading_ParameterizedThreadStart_TypeInfo,
                                                         v14,
                                                         v15,
                                                         v16);
  System_Threading_ParameterizedThreadStart___ctor(
    v17,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v21 = (System_Threading_Thread_o *)sub_1BCAA2C(System_Threading_Thread_TypeInfo, v18, v19, v20);
  System_Threading_Thread___ctor_63663472(v21, v17, 0LL);
  this->fields.writeMasterDataThread = v21;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1BCA784((PartyOrganizationUtility_o *)p_writeMasterDataThread, (int64_t)v21, v23, v24, v25, v26, v27, v28);
  if ( !*p_writeMasterDataThread )
    sub_1BCAA3C(0LL, v29);
  System_Threading_Thread__Start_63664052(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Item; // x0
  PartyOrganizationUtility_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v7; // w20
  __int64 v8; // x1
  System_Threading_Thread_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B15D1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Thread__get_Item__, method, v2);
    byte_4B15D1A = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (PartyOrganizationUtility_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v7,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1BCAA3C(Item, v8);
      v9 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0LL) )
        System_Threading_Thread__Abort(v9, 0LL);
      if ( ++v7 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0LL;
    sub_1BCA784(p_masterLoadThreads, 0LL, v10, v11, v12, v13, v14, v15);
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
        sub_1BCAA3C(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  System_IO_Stream_o *v17; // x20
  System_IO_Stream_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v33; // w22
  Il2CppObject *Item; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  System_IO_BinaryWriter_c *v46; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 v49; // x0
  System_IO_Stream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4B15D1D & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, param, method);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____get_Item__, v11, v12);
    sub_1BCA7E0(&string_TypeInfo, v13, v14);
    byte_4B15D1D = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v15 = param;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v15, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v16);
  v18 = CatAndMouseGame__CatGameZ(v17, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
  System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1BCAA3C(v23, v24);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v22 )
      goto LABEL_34;
  }
  else
  {
    v33 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v33,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1BCAA3C(0LL, v35);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1BCAA44(Item, v35);
      if ( !v22 )
        sub_1BCAA3C(Item, v35);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        LODWORD(Item[2].monitor),
        v22->klass->vtable._18_Write.methodPtr);
      v37 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v37 )
        sub_1BCAA3C(0LL, v36);
      masterDataBytes = this->fields.masterDataBytes;
      v39 = System_Collections_Generic_List_object___get_Item(
              v37,
              v33,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v39 )
        sub_1BCAA3C(0LL, v40);
      if ( !LODWORD(v39[1].monitor) )
        sub_1BCAA44(v39, v40);
      if ( !this->fields.saveDataMapList )
        sub_1BCAA3C(v39, v40);
      klass = v39[2].klass;
      v42 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v33,
              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v42 )
        sub_1BCAA3C(0LL, v43);
      if ( LODWORD(v42[1].monitor) <= 1 )
        sub_1BCAA44(v42, v43);
      v44 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v22->klass->vtable._11_Write.method)(
              v22,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v42[2].monitor),
              v22->klass->vtable._12_Write.methodPtr);
      if ( size == ++v33 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1BCAA3C(v44, v45);
    }
  }
  v46 = v22->klass;
  v47 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      p_offset += 4;
      if ( !v47 )
        goto LABEL_31;
    }
    v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v49 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v49)(v22, *(_QWORD *)(v49 + 8));
LABEL_34:
  if ( v17 )
  {
    v50 = v17->klass;
    v51 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_39;
      }
      v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
    }
    else
    {
LABEL_39:
      v53 = sub_1C1C7C0(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v53)(v17, *(_QWORD *)(v53 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1BCA784((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v25, v26, v27, v28, v29, v30);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  __int64 v8; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15D04 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, v1, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15D04 = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v7);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v8);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_62412480(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  __int64 v8; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15D03 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, v1, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15D03 = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v7);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v8);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_62412480(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B15D01 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15D01 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v7);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_c *v7; // x0
  __int64 v8; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15D02 & 1) == 0 )
  {
    sub_1BCA7E0(&DatFileName_TypeInfo, v1, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15D02 = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  CachePath = DataManager__getCachePath((const MethodInfo *)v7);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v8);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_62412480(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2F12E8C *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v5);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2F12EF0 *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v5);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2F13524 *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D0F & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D0F = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->dataVersion;
}


int64_t __fastcall DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D10 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D10 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->dateVersion;
}


// local variable allocation has failed, the output may be wrong!
uint32_t __fastcall DataManager__getMdk(
        DataManager_o *this,
        System_String_o *name,
        int32_t version,
        const MethodInfo *method)
{
  System_Text_Encoding_o *UTF8; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Byte_array *v9; // x20
  uint32_t v10; // w0
  int32_t v11; // w11
  unsigned __int8 v12; // w13
  unsigned int v13; // w14
  uint32_t v14; // w11
  unsigned __int8 v15; // w9
  unsigned __int8 v16; // w12
  unsigned __int8 v17; // w8
  int v18; // w10

  if ( (byte_4B15D1F & 1) == 0 )
  {
    sub_1BCA7E0(&Crc32_TypeInfo, name, *(_QWORD *)&version);
    byte_4B15D1F = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v7);
  v9 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v8);
  v10 = Crc32__Compute(v9, 0LL);
  v11 = version + 3;
  if ( version >= 0 )
    v11 = version;
  v12 = 3 * version + 1;
  v13 = version - (v11 & 0xFFFFFFFC);
  v14 = HIBYTE(v10);
  switch ( v13 )
  {
    case 1u:
      v17 = v10 - v12;
      v16 = BYTE2(v10) + v12;
      v15 = BYTE1(v10) * (v12 & 0xF);
      v18 = v14 ^ v12;
      break;
    case 2u:
      v17 = v10 ^ v12;
      v15 = BYTE1(v10) + v12;
      v16 = BYTE2(v10) * (v12 & 0xF);
      v18 = v14 - v12;
      break;
    case 3u:
      v15 = BYTE1(v10) - v12;
      v16 = BYTE2(v10) ^ v12;
      v17 = v10 * (v12 & 0xF);
      v18 = v14 + v12;
      break;
    default:
      v17 = v10 + v12;
      v15 = BYTE1(v10) ^ v12;
      v16 = BYTE2(v10) - v12;
      v18 = v14 * (v12 & 0xF);
      break;
  }
  return (v18 << 24) | (v16 << 16) | (v15 << 8) | (v17 << 8);
}


System_String_o *__fastcall DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4B15D05 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&CacheFolderName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15D05 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo, v7);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_62412480(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D14 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D14 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->readMasterDataResult;
}


int32_t __fastcall DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D13 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D13 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->readMasterVersionResult;
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
    sub_1BCAA3C(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D0C & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D0C = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->serverHash;
}


int32_t __fastcall DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_c *v3; // x0

  if ( (byte_4B15D17 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    byte_4B15D17 = 1;
  }
  v3 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    v3 = DataManager_TypeInfo;
  }
  return v3->static_fields->updateMasterDataResult;
}


bool __fastcall DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return this->fields._DispLog;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15D16 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager__readMasterData_d__47_TypeInfo, method, v2);
    byte_4B15D16 = 1;
  }
  v5 = sub_1BCAA2C(DataManager__readMasterData_d__47_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DataManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v44; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v46; // w2
  int v47; // w9
  ManagerConfig_c *v48; // x0
  DataManager_c *v49; // x0
  System_String_o *CacheListFileName; // x21
  __int64 v51; // x1
  System_String_o *AllText; // x20
  System_String_o *v53; // x20
  System_Char_array *v54; // x0
  System_String_o *v55; // x20
  System_Char_array *v56; // x0
  il2cpp_array_size_t max_length; // w8
  int v58; // w22
  __int64 *v59; // x8
  System_String_o *v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x21
  System_String_o *v63; // x21
  System_String_o *v64; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  System_Byte_array *v68; // x22
  uint32_t v69; // w22
  System_Char_array *v70; // x0
  il2cpp_array_size_t v71; // w8
  DataManager_o *v72; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v74; // x21
  DataManager_o *v75; // x21
  System_String_o *v76; // x0
  __int64 v77; // x1
  ManagerConfig_c *v78; // x8
  System_String_o *v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  DataManager_o *v86; // x20
  int64_t v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x1
  PartyOrganizationUtility_o *p_saveNameList; // x0
  int v117; // w22
  int64_t v118; // x0
  __int64 v119; // x1
  DataManager_c *v120; // x8
  int64_t v121; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v123; // x22
  unsigned int v124; // w23
  System_String_o *v125; // x21
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  DataManager_o *v132; // x8
  __int64 v133; // x8
  _QWORD *v134; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v136; // x8
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x1
  __int64 v145; // x1
  DataManager_c *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  void *v159; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x1
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  void *v185; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // [xsp+8h] [xbp-58h] BYREF
  int v193; // [xsp+1Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4B15D24 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    sub_1BCA7E0(&char___TypeInfo, v4, v5);
    sub_1BCA7E0(&Crc32_TypeInfo, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____Clear__, v14, v15);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v16, v17);
    sub_1BCA7E0(&string___TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_5188/*"DataManager version load crc error : チェックサム値が不一致"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_5191/*"DataManager version load error : list file parameter error"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_818/*") -> ("*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_21526/*"master versiton different ("*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_5192/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_5193/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v38, v39);
    this = (DataManager_o *)sub_1BCA7E0(&StringLiteral_5190/*"DataManager version load error : list file break"*/, v40, v41);
    byte_4B15D24 = 1;
  }
  v193 = 0;
  v192 = 0LL;
  saveNameList = v3->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v44 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v44;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = v3->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v46 = saveDataMapList->fields._size;
  v47 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v47;
  if ( v46 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v46, 0LL);
  v48 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v48 = ManagerConfig_TypeInfo;
  }
  if ( v48->static_fields->UseMock )
    return 0;
  v49 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v49);
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v3, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v51);
  v53 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v53 )
  {
    v54 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
    if ( !v54 )
      sub_1BCAA3C(0LL, 0LL);
    if ( !v54->max_length )
      sub_1BCAA44(v54, v54);
    v54->m_Items[2] = -257;
    v55 = System_String__Trim_62430968(v53, v54, 0LL);
    v56 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
    if ( !v56 )
      sub_1BCAA3C(0LL, 0LL);
    max_length = v56->max_length;
    if ( !max_length )
      sub_1BCAA44(v56, v56);
    v56->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BCAA44(v56, v56);
    v56->m_Items[3] = 10;
    if ( !v55 )
      sub_1BCAA3C(v56, v56);
    v58 = System_String__IndexOfAny(v55, v56, 0LL);
    if ( v58 < 2 )
    {
      v59 = &StringLiteral_5192/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v60 = System_String__Substring_62420224(v55, 0, v58, 0LL);
    v62 = v60;
    if ( !v60 )
      sub_1BCAA3C(0LL, v61);
    if ( System_String__StartsWith(v60, (System_String_o *)StringLiteral_25411/*"~"*/, 0LL) )
    {
      v63 = System_String__Substring(v62, 1, 0LL);
      v64 = System_String__Substring(v55, v58 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BCAA3C(0LL, v66);
      v68 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v64,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v67);
      v69 = Crc32__Compute(v68, 0LL);
      if ( System_UInt32__Parse(v63, 0LL) == v69 )
      {
        v70 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
        if ( !v70 )
          sub_1BCAA3C(0LL, 0LL);
        v71 = v70->max_length;
        if ( !v71 )
          sub_1BCAA44(v70, v70);
        v70->m_Items[2] = 13;
        if ( v71 == 1 )
          sub_1BCAA44(v70, v70);
        v70->m_Items[3] = 10;
        if ( !v64 )
          sub_1BCAA3C(v70, v70);
        this = (DataManager_o *)System_String__Split_62423612(v64, v70, 1, 0LL);
        v72 = this;
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
                                  (System_String_o *)StringLiteral_1883/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v72->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v74 = *(System_String_o **)&v72->fields._DispLog;
          this = (DataManager_o *)sub_1BCA888(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v74 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_62423376(v74, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v75 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v76 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v78 = ManagerConfig_TypeInfo;
          v79 = v76;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v77);
            v78 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v78->static_fields->MasterDataCacheVer, v79, 0LL) )
          {
            this = (DataManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
            if ( this )
            {
              v86 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v87 = StringLiteral_21526/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21526/*"master versiton different ("*/;
                sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._DispLog, v87, v80, v81, v82, v83, v84, v85);
                if ( LODWORD(v86->fields.m_CancellationTokenSource) > 1 )
                {
                  v86->fields.datalist = (struct DataMasterBase_array *)v79;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v86->fields.datalist,
                    (int64_t)v79,
                    v88,
                    v89,
                    v90,
                    v91,
                    v92,
                    v93);
                  if ( LODWORD(v86->fields.m_CancellationTokenSource) > 2 )
                  {
                    v100 = StringLiteral_818/*") -> ("*/;
                    v86->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_818/*") -> ("*/;
                    sub_1BCA784((PartyOrganizationUtility_o *)&v86->fields.lookup, v100, v94, v95, v96, v97, v98, v99);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v86->fields.m_CancellationTokenSource) > 3 )
                    {
                      v107 = *(_QWORD *)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v86->fields.masterDataBytes = (struct System_Byte_array *)v107;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&v86->fields.masterDataBytes,
                        v107,
                        v101,
                        v102,
                        v103,
                        v104,
                        v105,
                        v106);
                      if ( LODWORD(v86->fields.m_CancellationTokenSource) > 4 )
                      {
                        v114 = StringLiteral_809/*")"*/;
                        v86->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_809/*")"*/;
                        p_saveNameList = (PartyOrganizationUtility_o *)&v86->fields.saveNameList;
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
          if ( LODWORD(v75->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v75->fields.datalist, 0LL);
            v193 = (int)this;
            if ( LODWORD(v75->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v117 = (int)this;
            v118 = System_Int64__Parse((System_String_o *)v75->fields.lookup, 0LL);
            v120 = DataManager_TypeInfo;
            v192 = v118;
            v121 = v118;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v119);
              v120 = DataManager_TypeInfo;
            }
            static_fields = v120->static_fields;
            if ( static_fields->readDataVersion != v117 )
              goto LABEL_91;
            if ( !v120->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v120, v119);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v121 )
            {
              v123 = v72->fields.m_CancellationTokenSource;
              if ( (int)v123 < 2 )
                return 1;
              v124 = 2;
              while ( 1 )
              {
                v125 = (System_String_o *)*((_QWORD *)&v72->fields._DispLog + (int)(v124 - 1));
                this = (DataManager_o *)sub_1BCA888(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v125 )
                  break;
                this = (DataManager_o *)System_String__Split_62423376(v125, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v132 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v3->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v132->fields._DispLog;
                v133 = *(_QWORD *)&this->fields.m_CachedPtr;
                v134 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v133 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v133 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
                }
                else
                {
                  v136 = v133 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v136 + 32) = method;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v136 + 32),
                    (int64_t)method,
                    v126,
                    v127,
                    v128,
                    v129,
                    v130,
                    v131);
                }
                if ( (_DWORD)v123 == v124 )
                  return 1;
                if ( v124++ >= LODWORD(v72->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1BCA888(string___TypeInfo, 9LL);
              if ( this )
              {
                v86 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v144 = StringLiteral_21526/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21526/*"master versiton different ("*/;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&this->fields._DispLog,
                    v144,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142,
                    v143);
                  v146 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v145);
                    v146 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v146->static_fields, 0LL);
                  if ( LODWORD(v86->fields.m_CancellationTokenSource) > 1 )
                  {
                    v86->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v86->fields.datalist,
                      (int64_t)this,
                      v147,
                      v148,
                      v149,
                      v150,
                      v151,
                      v152);
                    if ( LODWORD(v86->fields.m_CancellationTokenSource) > 2 )
                    {
                      v159 = StringLiteral_116/*" "*/;
                      v86->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_116/*" "*/;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&v86->fields.lookup,
                        (int64_t)v159,
                        v153,
                        v154,
                        v155,
                        v156,
                        v157,
                        v158);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v86->fields.m_CancellationTokenSource) > 3 )
                      {
                        v86->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&v86->fields.masterDataBytes,
                          (int64_t)this,
                          v160,
                          v161,
                          v162,
                          v163,
                          v164,
                          v165);
                        if ( LODWORD(v86->fields.m_CancellationTokenSource) > 4 )
                        {
                          v172 = StringLiteral_818/*") -> ("*/;
                          v86->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_818/*") -> ("*/;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)&v86->fields.saveNameList,
                            v172,
                            v166,
                            v167,
                            v168,
                            v169,
                            v170,
                            v171);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v193, 0LL);
                          if ( LODWORD(v86->fields.m_CancellationTokenSource) > 5 )
                          {
                            v86->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)&v86->fields.saveDataMapList,
                              (int64_t)this,
                              v173,
                              v174,
                              v175,
                              v176,
                              v177,
                              v178);
                            if ( LODWORD(v86->fields.m_CancellationTokenSource) > 6 )
                            {
                              v185 = StringLiteral_116/*" "*/;
                              *(_QWORD *)&v86->fields.lastFrameTime = StringLiteral_116/*" "*/;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)&v86->fields.lastFrameTime,
                                (int64_t)v185,
                                v179,
                                v180,
                                v181,
                                v182,
                                v183,
                                v184);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v192, 0LL);
                              if ( LODWORD(v86->fields.m_CancellationTokenSource) > 7 )
                              {
                                v86->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1BCA784(
                                  (PartyOrganizationUtility_o *)&v86->fields.masterCheckName,
                                  (int64_t)this,
                                  v186,
                                  v187,
                                  v188,
                                  v189,
                                  v190,
                                  v191);
                                if ( LODWORD(v86->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v114 = StringLiteral_809/*")"*/;
                                  v86->fields.lockCountObj = (Il2CppObject *)StringLiteral_809/*")"*/;
                                  p_saveNameList = (PartyOrganizationUtility_o *)&v86->fields.lockCountObj;
LABEL_104:
                                  sub_1BCA784(p_saveNameList, v114, v108, v109, v110, v111, v112, v113);
                                  if ( System_String__Concat_62414748((System_String_array *)v86, 0LL) )
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
                sub_1BCAA44(this, method);
              }
            }
LABEL_119:
            sub_1BCAA3C(this, method);
          }
          v59 = &StringLiteral_5191/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v59 = &StringLiteral_5190/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v59 = &StringLiteral_5188/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v59 = &StringLiteral_5193/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v59 )
      goto LABEL_64;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B15D15 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager__readMasterVersion_d__46_TypeInfo, method, v2);
    byte_4B15D15 = 1;
  }
  v5 = sub_1BCAA2C(DataManager__readMasterVersion_d__46_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  ManagerConfig_c *v34; // x0
  DataManager_c *v35; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  System_String_o *AllText; // x20
  System_String_o *v40; // x20
  System_Char_array *v41; // x0
  System_String_o *v42; // x20
  System_Char_array *v43; // x0
  il2cpp_array_size_t max_length; // w8
  int v45; // w22
  __int64 *v46; // x8
  System_String_o *v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x21
  System_String_o *v50; // x21
  System_String_o *v51; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  System_Byte_array *v55; // x22
  uint32_t v56; // w22
  System_Char_array *v57; // x0
  il2cpp_array_size_t v58; // w8
  __int64 v59; // x0
  __int64 v60; // x20
  __int64 v61; // x8
  System_String_o *v62; // x20
  __int64 v63; // x20
  System_String_o *v64; // x0
  __int64 v65; // x1
  ManagerConfig_c *v66; // x8
  System_String_o *v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x20
  int64_t v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x1
  System_String_o *v103; // x8
  DataManager_c *v104; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v107; // x8
  int32_t v108; // w19
  struct DataManager_StaticFields *v109; // x8
  int64_t v110; // x0
  struct DataManager_StaticFields *v111; // x8

  if ( (byte_4B15D22 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    sub_1BCA7E0(&char___TypeInfo, v4, v5);
    sub_1BCA7E0(&Crc32_TypeInfo, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v10, v11);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5187/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5184/*"DataManager boot load error : list file break"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5186/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_5182/*"DataManager boot load crc error : チェックサム値が不一致"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_21525/*"master data versiton different ("*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_818/*") -> ("*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_5185/*"DataManager boot load error : list file parameter error"*/, v32, v33);
    byte_4B15D22 = 1;
  }
  v34 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v34 = ManagerConfig_TypeInfo;
  }
  if ( v34->static_fields->UseMock )
    return 0;
  v35 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v35);
  if ( !System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
LABEL_59:
    v104 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
      v104 = DataManager_TypeInfo;
    }
    static_fields = v104->static_fields;
    static_fields->dataVersion = 0;
    static_fields->dateVersion = 0LL;
    DataManager__ClearSaveDataList(this, v37);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v38);
  v40 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
  if ( v40 )
  {
    v41 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
    if ( !v41 )
      sub_1BCAA3C(0LL, 0LL);
    if ( !v41->max_length )
      sub_1BCAA44(v41, v41);
    v41->m_Items[2] = -257;
    v42 = System_String__Trim_62430968(v40, v41, 0LL);
    v43 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
    if ( !v43 )
      sub_1BCAA3C(0LL, 0LL);
    max_length = v43->max_length;
    if ( !max_length )
      sub_1BCAA44(v43, v43);
    v43->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BCAA44(v43, v43);
    v43->m_Items[3] = 10;
    if ( !v42 )
      sub_1BCAA3C(v43, v43);
    v45 = System_String__IndexOfAny(v42, v43, 0LL);
    if ( v45 < 2 )
    {
      v46 = &StringLiteral_5186/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v103 = (System_String_o *)*v46;
LABEL_58:
      if ( v103 )
        goto LABEL_59;
      return 1;
    }
    v47 = System_String__Substring_62420224(v42, 0, v45, 0LL);
    v49 = v47;
    if ( !v47 )
      sub_1BCAA3C(0LL, v48);
    if ( !System_String__StartsWith(v47, (System_String_o *)StringLiteral_25411/*"~"*/, 0LL) )
    {
      v46 = &StringLiteral_5187/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v50 = System_String__Substring(v49, 1, 0LL);
    v51 = System_String__Substring(v42, v45 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1BCAA3C(0LL, v53);
    v55 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v51,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v54);
    v56 = Crc32__Compute(v55, 0LL);
    if ( System_UInt32__Parse(v50, 0LL) != v56 )
    {
      v46 = &StringLiteral_5182/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v57 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2LL);
    if ( !v57 )
      sub_1BCAA3C(0LL, 0LL);
    v58 = v57->max_length;
    if ( !v58 )
      sub_1BCAA44(v57, v57);
    v57->m_Items[2] = 13;
    if ( v58 == 1 )
      sub_1BCAA44(v57, v57);
    v57->m_Items[3] = 10;
    if ( !v51 )
      sub_1BCAA3C(v57, v57);
    v59 = (__int64)System_String__Split_62423612(v51, v57, 1, 0LL);
    v60 = v59;
    if ( !v59 )
      return 1;
    v61 = *(_QWORD *)(v59 + 24);
    if ( v61 )
    {
      if ( !(_DWORD)v61 )
        goto LABEL_78;
      v59 = *(_QWORD *)(v59 + 32);
      if ( !v59 )
        goto LABEL_83;
      v59 = System_String__StartsWith((System_String_o *)v59, (System_String_o *)StringLiteral_1883/*"@"*/, 0LL);
      if ( (v59 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v60 + 24) )
          goto LABEL_78;
        v62 = *(System_String_o **)(v60 + 32);
        v59 = sub_1BCA888(char___TypeInfo, 1LL);
        if ( v59 )
        {
          v37 = (const MethodInfo *)v59;
          if ( !*(_DWORD *)(v59 + 24) )
            goto LABEL_78;
          *(_WORD *)(v59 + 32) = 44;
          if ( v62 )
          {
            v59 = (__int64)System_String__Split_62423376(v62, (System_Char_array *)v59, 0LL);
            if ( v59 )
            {
              v63 = v59;
              if ( !*(_DWORD *)(v59 + 24) )
                goto LABEL_78;
              v59 = *(_QWORD *)(v59 + 32);
              if ( v59 )
              {
                v64 = System_String__Substring((System_String_o *)v59, 1, 0LL);
                v66 = ManagerConfig_TypeInfo;
                v67 = v64;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v65);
                  v66 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v66->static_fields->MasterDataCacheVer, v67, 0LL) )
                {
                  if ( *(_DWORD *)(v63 + 24) != 3 )
                  {
                    v46 = &StringLiteral_5185/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v59 = System_Int32__Parse(*(System_String_o **)(v63 + 40), 0LL);
                  v107 = DataManager_TypeInfo;
                  v108 = v59;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37);
                    v107 = DataManager_TypeInfo;
                  }
                  v109 = v107->static_fields;
                  v109->dataVersion = v108;
                  v109->readDataVersion = v108;
                  if ( *(_DWORD *)(v63 + 24) > 2u )
                  {
                    v110 = System_Int64__Parse(*(System_String_o **)(v63 + 48), 0LL);
                    v111 = DataManager_TypeInfo->static_fields;
                    v111->dateVersion = v110;
                    v111->readDateVersion = v110;
                    return 1;
                  }
LABEL_78:
                  sub_1BCAA44(v59, v37);
                }
                v59 = sub_1BCA888(string___TypeInfo, 5LL);
                if ( v59 )
                {
                  v74 = v59;
                  if ( *(_DWORD *)(v59 + 24) )
                  {
                    v75 = StringLiteral_21525/*"master data versiton different ("*/;
                    *(_QWORD *)(v59 + 32) = StringLiteral_21525/*"master data versiton different ("*/;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), v75, v68, v69, v70, v71, v72, v73);
                    if ( *(_DWORD *)(v74 + 24) > 1u )
                    {
                      *(_QWORD *)(v74 + 40) = v67;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 40), (int64_t)v67, v76, v77, v78, v79, v80, v81);
                      if ( *(_DWORD *)(v74 + 24) > 2u )
                      {
                        v88 = StringLiteral_818/*") -> ("*/;
                        *(_QWORD *)(v74 + 48) = StringLiteral_818/*") -> ("*/;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 48), v88, v82, v83, v84, v85, v86, v87);
                        v59 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v37);
                          v59 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v74 + 24) > 3u )
                        {
                          v95 = *(_QWORD *)(*(_QWORD *)(v59 + 184) + 32LL);
                          *(_QWORD *)(v74 + 56) = v95;
                          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 56), v95, v89, v90, v91, v92, v93, v94);
                          if ( *(_DWORD *)(v74 + 24) > 4u )
                          {
                            v102 = StringLiteral_809/*")"*/;
                            *(_QWORD *)(v74 + 64) = StringLiteral_809/*")"*/;
                            sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 64), v102, v96, v97, v98, v99, v100, v101);
                            v103 = System_String__Concat_62414748((System_String_array *)v74, 0LL);
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
        sub_1BCAA3C(v59, v37);
      }
    }
    v46 = &StringLiteral_5184/*"DataManager boot load error : list file break"*/;
    goto LABEL_57;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B15D12 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, *(_QWORD *)&dataVer, dateVer);
    byte_4B15D12 = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dataVer);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_18;
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
    v11 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
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
      j_il2cpp_runtime_class_init_0(v11, *(_QWORD *)&dataVer);
      v11 = DataManager_TypeInfo;
    }
    v15 = v11->static_fields;
    v14 = obj;
    v15->updateData = obj;
    p_updateData = (PartyOrganizationUtility_o *)&v15->updateData;
    LODWORD(p_updateData[-1].fields._TransitionDestinationFromDetail_k__BackingField) = dataVer;
    *(_QWORD *)&p_updateData[-1].fields._IsQuestStartMenuMode_k__BackingField = dateVer;
  }
  sub_1BCA784(p_updateData, (int64_t)v14, dateVer, (int32_t)obj, (System_String_o *)method, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataManager__setMasterDataVersion(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4B15D11 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, *(_QWORD *)&dataVer, dateVer);
    byte_4B15D11 = 1;
  }
  v6 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dataVer);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_c *v13; // x0
  void *v14; // x1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v16; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_String_o *v27; // x0
  __int64 v28; // x1
  DataManager_c *v29; // x8
  struct DataManager_StaticFields *v30; // x0
  DataManager_c *v31; // x0

  if ( (byte_4B15D0B & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, obj, method);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B15D0B = 1;
  }
  v13 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
    v13 = DataManager_TypeInfo;
  }
  v14 = StringLiteral_1/*""*/;
  static_fields = v13->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->serverHash,
    (int64_t)v14,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( obj )
  {
    v16 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v17 = System_String__op_Equality(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v17 )
    {
      if ( !v16 )
        sub_1BCAA3C(v17, v18);
      v19 = System_String__Substring(v16, v16->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v19, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v27 = System_String__Substring_62420224(v16, 0, v16->fields._stringLength - 1, 0LL);
        v29 = DataManager_TypeInfo;
        v16 = v27;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
          v29 = DataManager_TypeInfo;
        }
        v30 = v29->static_fields;
      }
      else
      {
        v31 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
          v31 = DataManager_TypeInfo;
        }
        v30 = v31->static_fields;
      }
      v30->serverHash = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)&v30->serverHash, (int64_t)v16, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4B15D0D & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, obj, method);
    byte_4B15D0D = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, obj);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_1BCA784(
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

  if ( (byte_4B15D26 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj, method);
    byte_4B15D26 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1BCACFC(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_39506356(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_39506356(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *v15; // x21
  __int64 methodPtr_low; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v19; // w26
  il2cpp_array_size_t v20; // w9
  __int64 v21; // x27
  DataMasterBase_o *v22; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v24; // x8
  DataMasterBase_o *v25; // x23
  __int64 v26; // x9
  struct DataMasterBase_array *v27; // x8
  int v28; // w9
  int v29; // w26
  il2cpp_array_size_t v30; // w9
  __int64 v31; // x27
  DataMasterBase_o *v32; // x8
  Il2CppObject *v33; // x22
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x23
  __int64 v36; // x9
  struct DataMasterBase_array *v37; // x8
  int v38; // w9
  int v39; // w25
  il2cpp_array_size_t v40; // w9
  __int64 v41; // x26
  DataMasterBase_o *v42; // x8
  Il2CppObject *v43; // x21
  struct DataMasterBase_array *v44; // x8
  DataMasterBase_o *v45; // x22
  DataManager_o *v46; // x0
  const MethodInfo *v47; // x1
  System_Nullable_long__o v48; // 0:x2.16
  System_Nullable_long__o v49; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4B15D27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_24570/*"updated"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_18752/*"deleted"*/, v11, v12);
    this = (DataManager_o *)sub_1BCA7E0(&StringLiteral_23121/*"replaced"*/, v13, v14);
    byte_4B15D27 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1BCAA3C(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18752/*"deleted"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18752/*"deleted"*/,
                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = this;
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
    v19 = max_length - 1;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( v20 < datalist->max_length )
      {
        v21 = (int)v20;
        v22 = datalist->m_Items[v20];
        if ( !v22 || !v15 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v22->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v24 = v4->fields.datalist;
          if ( !v24 )
            goto LABEL_57;
          if ( (unsigned int)v21 >= v24->max_length )
            break;
          v25 = v24->m_Items[v21];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v25 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v25, (Il2CppObject *)this, 0LL);
        }
        if ( v19 == (_DWORD)v21 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v20 = v21 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1BCAA44(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24570/*"updated"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24570/*"updated"*/,
                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v15 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v26 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v26
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1BCACFC(v15);
      goto LABEL_61;
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
      if ( !v32 || !v15 )
        goto LABEL_57;
      v33 = (Il2CppObject *)v32->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                v33,
                                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v4->fields.datalist;
        if ( !v34 )
          goto LABEL_57;
        if ( (unsigned int)v31 >= v34->max_length )
          goto LABEL_59;
        v35 = v34->m_Items[v31];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                  v33,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v35 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v35, (Il2CppObject *)this, 0LL);
      }
      if ( v29 == (_DWORD)v31 )
        goto LABEL_40;
      v27 = v4->fields.datalist;
      v30 = v31 + 1;
      if ( !v27 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23121/*"replaced"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23121/*"replaced"*/,
                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v36 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v36 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1BCACFC(v3);
      DataManager__getRevisionTotal(v46, v47);
      return;
    }
  }
  v37 = v4->fields.datalist;
  if ( !v37 )
    goto LABEL_57;
  v38 = v37->max_length;
  v39 = v38 - 1;
  if ( v38 >= 1 )
  {
    v40 = 0;
    while ( v40 < v37->max_length )
    {
      v41 = (int)v40;
      v42 = v37->m_Items[v40];
      if ( !v42 || !v3 )
        goto LABEL_57;
      v43 = (Il2CppObject *)v42->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v43,
                                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v44 = v4->fields.datalist;
        if ( !v44 )
          goto LABEL_57;
        if ( (unsigned int)v41 >= v44->max_length )
          goto LABEL_59;
        v45 = v44->m_Items[v41];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v43,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v45 )
          goto LABEL_57;
        *(_QWORD *)&v48.fields.hasValue = 0LL;
        v48.fields.value = 0LL;
        *(_QWORD *)&v49.fields.hasValue = 0LL;
        v49.fields.value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v45, (Il2CppObject *)this, v48, v49, 0LL);
      }
      if ( v39 == (_DWORD)v41 )
        return;
      v37 = v4->fields.datalist;
      v40 = v41 + 1;
      if ( !v37 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool v6; // w21
  __int64 v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B15D18 & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips, method);
    byte_4B15D18 = 1;
  }
  v6 = isUseTips;
  v7 = sub_1BCAA2C(DataManager__updateMasterData_d__49_TypeInfo, isUseTips, method, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v7 + 48) = v6;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B15D0E & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager__updateWebViewData_d__38_TypeInfo, method, v2);
    byte_4B15D0E = 1;
  }
  v5 = sub_1BCAA2C(DataManager__updateWebViewData_d__38_TypeInfo, method, v2, v3);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  ManagerConfig_c *v30; // x0
  DataManager_c *v31; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v38; // x20
  System_Text_StringBuilder_o *v39; // x21
  __int64 v40; // x1
  ManagerConfig_c *v41; // x0
  int v42; // w8
  int v43; // w24
  int32_t v44; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v46; // x19
  __int64 v47; // x1
  System_Byte_array *v48; // x21
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  System_String_o *v51; // x19
  System_String_o *v52; // x21
  System_Text_Encoding_o *UTF8; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_IO_StreamWriter_o *v57; // x19
  __int64 v58; // x0
  __int64 v59; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v61; // x9
  int32_t *p_offset; // x10
  __int64 v63; // x0
  uint32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B15D25 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    sub_1BCA7E0(&Crc32_TypeInfo, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v12, v13);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_IO_StreamWriter_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v18, v19);
    sub_1BCA7E0(&uint_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_25414/*"~{0}\n{1}"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v28, v29);
    byte_4B15D25 = 1;
  }
  v30 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v30 = ManagerConfig_TypeInfo;
  }
  if ( !v30->static_fields->UseMock )
  {
    v31 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheListFileName = (System_Collections_Generic_List_object__o *)DataManager__getCacheListFileName((const MethodInfo *)v31);
    saveNameList = this->fields.saveNameList;
    if ( !saveNameList )
      goto LABEL_17;
    size = saveNameList->fields._size;
    v38 = (System_String_o *)CacheListFileName;
    v39 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v33, v34, v35);
    System_Text_StringBuilder___ctor_61556468(v39, (size << 7) + 128, 0LL);
    if ( !v39 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)StringLiteral_1883/*"@"*/, 0LL);
    v41 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v40);
      v41 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_61563116(v39, v41->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    System_Text_StringBuilder__Append_61565612(v39, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    System_Text_StringBuilder__Append_61565700(v39, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v42 = CacheListFileName->fields._size;
    v43 = v42 - 1;
    if ( v42 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v44,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_61563116(v39, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        if ( v43 == v44 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v44;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v46 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                            v39,
                            v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_17:
      sub_1BCAA3C(CacheListFileName, v33);
    v48 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v46,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v47);
    v64 = Crc32__Compute(v48, 0LL);
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v64);
    v51 = System_String__Format_62415592((System_String_o *)StringLiteral_25414/*"~{0}\n{1}"*/, v49, v46, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v50);
    v52 = CatAndMouseGame__CatGame3(v51, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v57 = (System_IO_StreamWriter_o *)sub_1BCAA2C(System_IO_StreamWriter_TypeInfo, v54, v55, v56);
    System_IO_StreamWriter___ctor_62570356(v57, v38, 0, UTF8, 0LL);
    if ( !v57 )
      sub_1BCAA3C(v58, v59);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v57->klass->vtable._16_Write.method)(
      v57,
      v52,
      v57->klass->vtable._17_Write.methodPtr);
    klass = v57->klass;
    v61 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v61;
        p_offset += 4;
        if ( !v61 )
          goto LABEL_28;
      }
      v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_28:
      v63 = sub_1C1C7C0(v57, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v63)(v57, *(_QWORD *)(v63 + 8));
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  ManagerConfig_c *v21; // x0
  DataManager_c *v22; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  char *v32; // x20
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  void *v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  void *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x1
  System_String_o *v74; // x20
  __int64 v75; // x1
  System_Byte_array *v76; // x21
  System_String_o *v77; // x0
  __int64 v78; // x1
  System_String_o *v79; // x20
  System_String_o *v80; // x20
  System_Text_Encoding_o *v81; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_IO_StreamWriter_o *v85; // x21
  uint32_t v86; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B15D23 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    sub_1BCA7E0(&Crc32_TypeInfo, v3, v4);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IO_StreamWriter_TypeInfo, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25411/*"~"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1883/*"@"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v19, v20);
    byte_4B15D23 = 1;
  }
  v21 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v21 = ManagerConfig_TypeInfo;
  }
  if ( !v21->static_fields->UseMock )
  {
    v22 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v22);
    UTF8 = (char *)sub_1BCA888(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v32 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v33 = StringLiteral_1883/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1883/*"@"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(UTF8 + 32), v33, v26, v27, v28, v29, v30, v31);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v25);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v32 + 6) <= 1u )
      goto LABEL_26;
    v40 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v32 + 5) = v40;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39);
    if ( *((_DWORD *)v32 + 6) <= 2u )
      goto LABEL_26;
    v47 = StringLiteral_863/*","*/;
    *((_QWORD *)v32 + 6) = StringLiteral_863/*","*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), (int64_t)v47, v41, v42, v43, v44, v45, v46);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v32 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v32 + 7) = UTF8;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 56), (int64_t)UTF8, v48, v49, v50, v51, v52, v53);
    if ( *((_DWORD *)v32 + 6) <= 4u
      || (v60 = StringLiteral_863/*","*/,
          *((_QWORD *)v32 + 8) = StringLiteral_863/*","*/,
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 64), (int64_t)v60, v54, v55, v56, v57, v58, v59),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v32 + 6) <= 5u)
      || (*((_QWORD *)v32 + 9) = UTF8,
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 72), (int64_t)UTF8, v61, v62, v63, v64, v65, v66),
          *((_DWORD *)v32 + 6) <= 6u) )
    {
LABEL_26:
      sub_1BCAA44(UTF8, v25);
    }
    v73 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v32 + 10) = StringLiteral_43/*"\n"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 80), v73, v67, v68, v69, v70, v71, v72);
    v74 = System_String__Concat_62414748((System_String_array *)v32, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v76 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v74,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v75);
    v86 = Crc32__Compute(v76, 0LL);
    v77 = System_UInt32__ToString((uint32_t)&v86, 0LL);
    v79 = System_String__Concat_62414484(
            (System_String_o *)StringLiteral_25411/*"~"*/,
            v77,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v74,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v78);
    v80 = CatAndMouseGame__CatGame1(v79, 0, 0LL);
    v81 = System_Text_Encoding__get_UTF8(0LL);
    v85 = (System_IO_StreamWriter_o *)sub_1BCAA2C(System_IO_StreamWriter_TypeInfo, v82, v83, v84);
    System_IO_StreamWriter___ctor_62570356(v85, CacheVersionFileName, 0, v81, 0LL);
    if ( !v85 )
LABEL_27:
      sub_1BCAA3C(UTF8, v25);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v85->klass->vtable._16_Write.method)(
      v85,
      v80,
      v85->klass->vtable._17_Write.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v85->klass->vtable._8_Close.method)(
      v85,
      v85->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15D2B & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager___c_TypeInfo, v1, v2);
    byte_4B15D2B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DataManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DataManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B15D2C & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1BCA7E0(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a,
                                                    *(_QWORD *)&b);
    byte_4B15D2C = 1;
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
                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1BCAA44(this, *(_QWORD *)&a);
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
  if ( (byte_4B15D2D & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1BCA7E0(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x,
                                                    method);
    byte_4B15D2D = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1BCAA3C(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  DataManager__readMasterData_d__47_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct DataManager_o *_4__this; // x19
  __int64 v25; // x2
  __int64 v26; // x3
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v28; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  char v36; // w8
  DataManager_c *v37; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v39; // w10
  __int64 v40; // x1
  DataManager_c *v41; // x0
  System_String_o *CacheFileName; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_IO_MemoryStream_o *v46; // x21
  __int64 v47; // x1
  System_IO_Stream_o *v48; // x24
  System_IO_Stream_o *v49; // x25
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  float v57; // s0
  UnityEngine_WaitForEndOfFrame_o *v58; // x19
  PartyOrganizationUtility_o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int v66; // w8
  __int64 v67; // x1
  DataManager_c *v68; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v70; // x9
  int32_t *p_offset; // x10
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  System_IO_Stream_c *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  int64_t v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_IO_MemoryStream_c *v86; // x8
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  System_Byte_array *masterDataBytes; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_IO_MemoryStream_o *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_IO_BinaryReader_o *v98; // x24
  __int64 v99; // x0
  __int64 v100; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v103; // x0
  __int64 v104; // x1
  int v105; // w22
  __int64 v106; // x23
  __int64 v107; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  int v117; // w8
  struct System_Object_array *items; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  System_IO_BinaryReader_c *v122; // x8
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // x0
  System_IO_MemoryStream_c *v126; // x8
  __int64 v127; // x9
  int32_t *v128; // x10
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  UnityEngine_WaitForEndOfFrame_o *v133; // x19
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7

  v3 = this;
  if ( (byte_4B15D2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, method, v2);
    sub_1BCA7E0(&byte___TypeInfo, v4, v5);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_GC_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&long___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v18, v19);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v20, v21);
    this = (DataManager__readMasterData_d__47_o *)sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v22, v23);
    byte_4B15D2E = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (DataManager__readMasterData_d__47_o *)DataManager_TypeInfo;
      }
      HIDWORD(this[4].fields.__2__current[3].monitor) = 0;
      if ( !_4__this )
        goto LABEL_96;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v25, v26);
        UnityEngine_WaitForEndOfFrame___ctor(v28, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v28;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v28, v30, v31, v32, v33, v34, v35);
        v36 = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v36 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, method) )
      {
        v41 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
        CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v41);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v46 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v43, v44, v45);
          System_IO_MemoryStream___ctor(v46, 0LL);
          v48 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v47);
          v49 = CatAndMouseGame__MouseGameZ(v48, 0LL);
          v50 = sub_1BCA888(byte___TypeInfo, 0x4000LL);
          v52 = v50;
          if ( !v50 )
            sub_1BCAA3C(0LL, v51);
          if ( !v49 )
            sub_1BCAA3C(v50, v51);
          while ( 1 )
          {
            v53 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v49->klass->vtable._33_unknown.method)(
                    v49,
                    v52,
                    0LL,
                    *(unsigned int *)(v52 + 24),
                    v49->klass->vtable._34_Read.methodPtr);
            if ( (int)v53 <= 0 )
              break;
            if ( !v46 )
              sub_1BCAA3C(v53, v54);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v46->klass->vtable._36_Write.method)(
              v46,
              v52,
              0LL,
              (unsigned int)v53,
              v46->klass->vtable._37_Write.methodPtr);
          }
          klass = v49->klass;
          v70 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v70;
              p_offset += 4;
              if ( !v70 )
                goto LABEL_37;
            }
            v72 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v72 = sub_1C1C7C0(v49, System_IDisposable_TypeInfo, 0LL);
          }
          v73 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v72)(v49, *(_QWORD *)(v72 + 8));
          if ( v48 )
          {
            v75 = v48->klass;
            v76 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
            {
              v77 = &v75->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
              {
                --v76;
                v77 += 4;
                if ( !v76 )
                  goto LABEL_44;
              }
              v78 = (__int64)(&v75->vtable._0_Equals.method + 2 * *v77);
            }
            else
            {
LABEL_44:
              v78 = sub_1C1C7C0(v48, System_IDisposable_TypeInfo, 0LL);
            }
            v73 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v78)(v48, *(_QWORD *)(v78 + 8));
          }
          if ( !v46 )
            sub_1BCAA3C(v73, v74);
          v79 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v46->klass->vtable._42_ToArray.method)(
                  v46,
                  v46->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v79;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85);
          v86 = v46->klass;
          v87 = *(unsigned __int16 *)(&v46->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v46->klass->_2.bitflags2 + 3) )
          {
            v88 = &v86->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
            {
              --v87;
              v88 += 4;
              if ( !v87 )
                goto LABEL_52;
            }
            v89 = (__int64)(&v86->vtable._0_Equals.method + 2 * *v88);
          }
          else
          {
LABEL_52:
            v89 = sub_1C1C7C0(v46, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v89)(v46, *(_QWORD *)(v89 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v94 = (System_IO_MemoryStream_o *)sub_1BCAA2C(System_IO_MemoryStream_TypeInfo, v91, v92, v93);
          System_IO_MemoryStream___ctor_62545232(v94, masterDataBytes, 0LL);
          v98 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v95, v96, v97);
          System_IO_BinaryReader___ctor(v98, (System_IO_Stream_o *)v94, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1BCAA3C(v99, v100);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v98 )
            {
LABEL_76:
              if ( v94 )
              {
                v126 = v94->klass;
                v127 = *(unsigned __int16 *)(&v94->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v94->klass->_2.bitflags2 + 3) )
                {
                  v128 = &v126->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v128 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v127;
                    v128 += 4;
                    if ( !v127 )
                      goto LABEL_81;
                  }
                  v129 = (__int64)(&v126->vtable._0_Equals.method + 2 * *v128);
                }
                else
                {
LABEL_81:
                  v129 = sub_1C1C7C0(v94, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v129)(v94, *(_QWORD *)(v129 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v100);
              System_GC__Collect_63447616(0LL);
              v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          v130,
                                                          v131,
                                                          v132);
              UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
              v3->fields.__2__current = (Il2CppObject *)v133;
              v59 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(v59, (int64_t)v133, v134, v135, v136, v137, v138, v139);
              v66 = 2;
LABEL_87:
              *(_DWORD *)&v59[-1].fields._IsQuestStartMenuMode_k__BackingField = v66;
              v36 = 1;
              return v36 & 1;
            }
          }
          else
          {
            if ( !v98 )
              sub_1BCAA3C(v99, v100);
            do
            {
              v103 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v98->klass->vtable._15_ReadInt32.method)(
                       v98,
                       v98->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v94 )
                sub_1BCAA3C(v103, v104);
              v105 = v103;
              v106 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v94->klass->vtable._12_get_Position.method)(
                       v94,
                       v94->klass->vtable._13_set_Position.methodPtr);
              v107 = v105;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v94->klass->vtable._31_Seek.method)(
                v94,
                v105,
                1LL,
                v94->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v109 = sub_1BCA888(long___TypeInfo, 2LL);
              v116 = v109;
              if ( !v109 )
                sub_1BCAA3C(0LL, 0LL);
              v117 = *(_DWORD *)(v109 + 24);
              if ( !v117 )
                sub_1BCAA44(v109, v109);
              *(_QWORD *)(v109 + 32) = v106;
              if ( v117 == 1 )
                sub_1BCAA44(v109, v109);
              *(_QWORD *)(v109 + 40) = v107;
              if ( !saveDataMapList )
                sub_1BCAA3C(v109, v109);
              items = saveDataMapList->fields._items;
              v119 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1BCAA3C(v109, v109);
              v120 = saveDataMapList->fields._size;
              if ( (unsigned int)v120 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v109,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
              }
              else
              {
                v121 = &items->obj.klass + v120;
                saveDataMapList->fields._size = v120 + 1;
                v121[4] = (Il2CppClass *)v116;
                sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 4), v116, v110, v111, v112, v113, v114, v115);
              }
              --size;
            }
            while ( size );
          }
          v122 = v98->klass;
          v123 = *(unsigned __int16 *)(&v98->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v98->klass->_2.bitflags2 + 3) )
          {
            v124 = &v122->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
            {
              --v123;
              v124 += 4;
              if ( !v123 )
                goto LABEL_73;
            }
            v125 = (__int64)(&v122->vtable._0_Equals.method + 2 * *v124);
          }
          else
          {
LABEL_73:
            v125 = sub_1C1C7C0(v98, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v125)(v98, *(_QWORD *)(v125 + 8));
          goto LABEL_76;
        }
      }
      v57 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v57 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v57;
        v58 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v55, v56);
        UnityEngine_WaitForEndOfFrame___ctor(v58, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v58;
        v59 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v59, (int64_t)v58, v60, v61, v62, v63, v64, v65);
        v66 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, method);
      v68 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67);
        v68 = DataManager_TypeInfo;
      }
      static_fields = v68->static_fields;
      v36 = 0;
      v39 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v39;
      return v36 & 1;
    case 1:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v3->fields.__1__state = -1;
      v37 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v37 = DataManager_TypeInfo;
      }
      static_fields = v37->static_fields;
      v36 = 0;
      v39 = 1;
      goto LABEL_31;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1BCAA3C(this, method);
      goto LABEL_28;
    default:
      v36 = 0;
      return v36 & 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  DataManager__readMasterVersion_d__46_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  bool result; // w0
  __int64 v20; // x1
  bool MasterVersionFile; // w19
  DataManager_c *v22; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v24; // w9

  v3 = this;
  if ( (byte_4B15D2F & 1) == 0 )
  {
    sub_1BCA7E0(&DataManager_TypeInfo, method, v2);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4, v5);
    byte_4B15D2F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
      this = (DataManager__readMasterVersion_d__46_o *)DataManager_TypeInfo;
    }
    LODWORD(this[4].fields.__2__current[3].monitor) = 0;
    if ( _4__this )
    {
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v8, v9);
        UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v11;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v11, v13, v14, v15, v16, v17, v18);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1BCAA3C(this, method);
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, method);
  v22 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
    v22 = DataManager_TypeInfo;
  }
  static_fields = v22->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v24 = 1;
  else
    v24 = 5;
  static_fields->readMasterVersionResult = v24;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  struct DataManager_o *_4__this; // x20
  DataManager_c *v148; // x0
  int v149; // w8
  MasterDataUnpakcer_o *v150; // x21
  __int64 v151; // x0
  __int64 v152; // x1
  Il2CppObject *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  __int64 v160; // x1
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  UnityEngine_WaitForEndOfFrame_o *v164; // x20
  PartyOrganizationUtility_o *v165; // x19
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int v172; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v174; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v176; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  __int64 v179; // x1
  DataManager_c *v180; // x0
  System_String_o *CachePath; // x21
  int64_t v182; // x2
  __int64 v183; // x3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  __int64 v200; // x1
  DataManager_c *v201; // x0
  Il2CppObject *updateData; // x0
  __int64 v203; // x1
  System_String_o *v204; // x21
  System_Byte_array *v205; // x0
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  __int64 v212; // x1
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  DataManager_c *v219; // x0
  struct DataManager_StaticFields *static_fields; // x0
  __int64 v221; // x1
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x3
  UnityEngine_WaitForEndOfFrame_o *v225; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v235; // x0
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  __int64 v248; // x1
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x3
  UnityEngine_WaitForEndOfFrame_o *v252; // x20
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  DataManager_c *v259; // x0
  const MethodInfo *v260; // x2
  __int64 v261; // x1
  __int64 v262; // x2
  __int64 v263; // x3
  System_Func_bool__o *v264; // x21
  __int64 v265; // x1
  __int64 v266; // x2
  __int64 v267; // x3
  UnityEngine_WaitUntil_o *v268; // x20
  int64_t v269; // x2
  int32_t v270; // w3
  System_String_o *v271; // x4
  BattleSetupInfo_o *v272; // x5
  FollowerInfo_o *v273; // x6
  PartyListViewItem_o *v274; // x7
  int64_t v275; // x1
  PartyOrganizationUtility_o *p_dataMapDict_5__6; // x0
  const MethodInfo *v277; // x1
  __int64 v278; // x1
  __int64 v279; // x2
  __int64 v280; // x3
  float v281; // s0
  UnityEngine_WaitForEndOfFrame_o *v282; // x20
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v290; // x20
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  int v297; // w8
  DataManager_c *v298; // x8
  struct DataManager_StaticFields *v299; // x8
  int v300; // w9
  Il2CppObject *v301; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  struct DataMasterBase_array *v315; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v317; // x8
  int64_t MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  __int64 v320; // x1
  int64_t v321; // x2
  __int64 v322; // x3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  __int64 v327; // x0
  __int64 v328; // x1
  struct DataManager___c__DisplayClass49_0_o *v329; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  __int64 v338; // x2
  __int64 v339; // x3
  float v340; // s0
  struct DataManager___c__DisplayClass49_0_o *v341; // x8
  __int64 v342; // x2
  __int64 v343; // x3
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v346; // x24
  System_Predicate_object__o *v347; // x23
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  int64_t v354; // x2
  int32_t v355; // w3
  System_String_o *v356; // x4
  BattleSetupInfo_o *v357; // x5
  FollowerInfo_o *v358; // x6
  PartyListViewItem_o *v359; // x7
  System_Collections_Generic_List_object__o *v360; // x22
  DataManager__updateMasterData_d__49_o *v361; // x24
  System_Predicate_object__o *v362; // x23
  int32_t Index; // w0
  int32_t v364; // w22
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  __int64 v371; // x8
  _QWORD *v372; // x9
  __int64 _2__current_low; // x10
  __int64 v374; // x8
  int64_t v375; // x2
  int32_t v376; // w3
  System_String_o *v377; // x4
  BattleSetupInfo_o *v378; // x5
  FollowerInfo_o *v379; // x6
  PartyListViewItem_o *v380; // x7
  __int64 v381; // x8
  _QWORD *v382; // x9
  __int64 v383; // x10
  __int64 v384; // x8
  float v385; // s0
  UnityEngine_WaitForEndOfFrame_o *v386; // x20
  int64_t v387; // x2
  int32_t v388; // w3
  System_String_o *v389; // x4
  BattleSetupInfo_o *v390; // x5
  FollowerInfo_o *v391; // x6
  PartyListViewItem_o *v392; // x7
  ManagerConfig_c *v393; // x0
  int64_t v394; // x2
  int32_t v395; // w3
  System_String_o *v396; // x4
  BattleSetupInfo_o *v397; // x5
  FollowerInfo_o *v398; // x6
  PartyListViewItem_o *v399; // x7
  int64_t v400; // x2
  int32_t v401; // w3
  System_String_o *v402; // x4
  BattleSetupInfo_o *v403; // x5
  FollowerInfo_o *v404; // x6
  PartyListViewItem_o *v405; // x7
  struct System_Collections_Generic_List_string__o *v406; // x8
  System_Collections_Generic_List_int__o *v407; // x22
  int64_t v408; // x2
  int32_t v409; // w3
  System_String_o *v410; // x4
  BattleSetupInfo_o *v411; // x5
  FollowerInfo_o *v412; // x6
  PartyListViewItem_o *v413; // x7
  __int64 v414; // x1
  ManagerConfig_c *v415; // x0
  __int64 v416; // x1
  __int64 v417; // x22
  int64_t v418; // x2
  int32_t v419; // w3
  System_String_o *v420; // x4
  BattleSetupInfo_o *v421; // x5
  FollowerInfo_o *v422; // x6
  PartyListViewItem_o *v423; // x7
  DataManager__updateMasterData_d__49_o *v424; // x23
  int64_t v425; // x2
  int32_t v426; // w3
  System_String_o *v427; // x4
  BattleSetupInfo_o *v428; // x5
  FollowerInfo_o *v429; // x6
  PartyListViewItem_o *v430; // x7
  DataManager__updateMasterData_d__49_o *v431; // x23
  int64_t v432; // x2
  int32_t v433; // w3
  System_String_o *v434; // x4
  BattleSetupInfo_o *v435; // x5
  FollowerInfo_o *v436; // x6
  PartyListViewItem_o *v437; // x7
  DataManager__updateMasterData_d__49_o *v438; // x23
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  DataManager__updateMasterData_d__49_o *v445; // x23
  int64_t v446; // x2
  int32_t v447; // w3
  System_String_o *v448; // x4
  BattleSetupInfo_o *v449; // x5
  FollowerInfo_o *v450; // x6
  PartyListViewItem_o *v451; // x7
  DataManager__updateMasterData_d__49_o *v452; // x23
  int64_t v453; // x2
  int32_t v454; // w3
  System_String_o *v455; // x4
  BattleSetupInfo_o *v456; // x5
  FollowerInfo_o *v457; // x6
  PartyListViewItem_o *v458; // x7
  DataManager__updateMasterData_d__49_o *v459; // x23
  int64_t v460; // x2
  int32_t v461; // w3
  System_String_o *v462; // x4
  BattleSetupInfo_o *v463; // x5
  FollowerInfo_o *v464; // x6
  PartyListViewItem_o *v465; // x7
  DataManager__updateMasterData_d__49_o *v466; // x23
  int64_t v467; // x2
  int32_t v468; // w3
  System_String_o *v469; // x4
  BattleSetupInfo_o *v470; // x5
  FollowerInfo_o *v471; // x6
  PartyListViewItem_o *v472; // x7
  DataManager__updateMasterData_d__49_o *v473; // x23
  __int64 v474; // x2
  __int64 v475; // x3
  __int64 v476; // x8
  __int64 v477; // x21
  DataMasterBase_o *v478; // x23
  __int64 v479; // x24
  int64_t v480; // x2
  int32_t v481; // w3
  System_String_o *v482; // x4
  BattleSetupInfo_o *v483; // x5
  FollowerInfo_o *v484; // x6
  PartyListViewItem_o *v485; // x7
  int64_t v486; // x1
  System_Collections_Generic_List_object__o *v487; // x25
  __int64 v488; // x1
  __int64 v489; // x2
  __int64 v490; // x3
  System_Predicate_object__o *v491; // x26
  int32_t v492; // w24
  Il2CppObject *p_obj; // x25
  const MethodInfo_36BF22C *v494; // x3
  const MethodInfo_36BF22C *v495; // x3
  __int64 v496; // x8
  _QWORD *v497; // x9
  __int64 v498; // x10
  __int64 v499; // x1
  __int64 v500; // x1
  __int64 v501; // x1
  __int64 v502; // x1
  __int64 v503; // x2
  __int64 v504; // x3
  UnityEngine_WaitForEndOfFrame_o *v505; // x20
  int64_t v506; // x2
  int32_t v507; // w3
  System_String_o *v508; // x4
  BattleSetupInfo_o *v509; // x5
  FollowerInfo_o *v510; // x6
  PartyListViewItem_o *v511; // x7
  const MethodInfo *v512; // x1
  ManagerConfig_c *v513; // x0
  Il2CppObject *lockCountObj; // x22
  const MethodInfo *v515; // x1
  __int64 v516; // x2
  __int64 v517; // x3
  DataManager_c *v518; // x0
  int v519; // w21
  DataManager_c *v520; // x8
  UnityEngine_WaitForEndOfFrame_o *v521; // x20
  int64_t v522; // x2
  int32_t v523; // w3
  System_String_o *v524; // x4
  BattleSetupInfo_o *v525; // x5
  FollowerInfo_o *v526; // x6
  PartyListViewItem_o *v527; // x7
  __int64 v528; // x1
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  struct System_Collections_Generic_List_string__o *v534; // x8
  int32_t size; // w2
  int v536; // w9
  struct System_Collections_Generic_List_long____o *v537; // x8
  int64_t v538; // x2
  int v539; // w9
  __int64 v540; // x1
  __int64 v541; // x1
  __int64 v542; // x2
  __int64 v543; // x3
  UnityEngine_WaitForEndOfFrame_o *v544; // x20
  int64_t v545; // x2
  int32_t v546; // w3
  System_String_o *v547; // x4
  BattleSetupInfo_o *v548; // x5
  FollowerInfo_o *v549; // x6
  PartyListViewItem_o *v550; // x7
  __int64 v551; // x2
  __int64 v552; // x3
  float v553; // s0
  UnityEngine_WaitForEndOfFrame_o *v554; // x20
  int64_t v555; // x2
  int32_t v556; // w3
  System_String_o *v557; // x4
  BattleSetupInfo_o *v558; // x5
  FollowerInfo_o *v559; // x6
  PartyListViewItem_o *v560; // x7
  UnityEngine_WaitForEndOfFrame_o *v561; // x20
  int64_t v562; // x2
  int32_t v563; // w3
  System_String_o *v564; // x4
  BattleSetupInfo_o *v565; // x5
  FollowerInfo_o *v566; // x6
  PartyListViewItem_o *v567; // x7
  __int64 v568; // x0
  struct DataMasterBase_array *v569; // x9
  __int64 v570; // x2
  __int64 v571; // x3
  float v572; // s0
  __int64 v573; // x1
  __int64 v574; // x1
  __int64 v575; // x1
  __int64 v576; // x1
  __int64 v577; // x1
  __int64 v578; // x1
  __int64 v579; // x1
  __int64 v580; // x1
  __int64 v581; // x1
  __int64 v582; // x1
  __int64 v583; // x1
  __int64 v584; // x1
  __int64 v585; // x1
  __int64 v586; // x1
  __int64 v587; // x1
  __int64 v588; // x1
  __int64 v589; // x1
  __int64 v590; // x1
  DataManager_c *v591; // x8
  UnityEngine_WaitForEndOfFrame_o *v592; // x20
  int64_t v593; // x2
  int32_t v594; // w3
  System_String_o *v595; // x4
  BattleSetupInfo_o *v596; // x5
  FollowerInfo_o *v597; // x6
  PartyListViewItem_o *v598; // x7
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+8h] [xbp-A8h]
  System_Nullable_long__o v600; // [xsp+18h] [xbp-98h] BYREF
  System_Nullable_long__o v601; // [xsp+28h] [xbp-88h] BYREF
  int v602; // [xsp+40h] [xbp-70h]
  bool lockTaken; // [xsp+4Ch] [xbp-64h] BYREF
  System_Nullable_long__o v604; // 0:x0.16
  System_Nullable_long__o v605; // 0:x0.16

  v8 = this;
  if ( (byte_4B15D30 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Convert_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantProfileMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantCommentMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantProfileMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v29, v30);
    sub_1BCA7E0(&Method_DataManager__updateMasterData_b__49_0__, v31, v32);
    sub_1BCA7E0(&DataManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&DataMasterBase___TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v41, v42);
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v45, v46);
    sub_1BCA7E0(&System_GC_TypeInfo, v47, v48);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v49, v50);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____Add__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____Clear__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__FindIndex__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__RemoveAt__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____RemoveAt__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____get_Count__, v73, v74);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v75, v76);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____get_Item__, v77, v78);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long____set_Item__, v79, v80);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v81, v82);
    sub_1BCA7E0(&LogoMain_TypeInfo, v83, v84);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v85, v86);
    sub_1BCA7E0(&MasterDataUnpakcer_TypeInfo, v87, v88);
    sub_1BCA7E0(&MaterialBranchRouteManager_TypeInfo, v89, v90);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v91, v92);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v93, v94);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v95, v96);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v97, v98);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v99, v100);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v101, v102);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v103, v104);
    sub_1BCA7E0(&ServantProfileEventJoinManager_TypeInfo, v105, v106);
    sub_1BCA7E0(&ServantProfileLimitCountManager_TypeInfo, v107, v108);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v109, v110);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v111, v112);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v113, v114);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v115, v116);
    sub_1BCA7E0(&DataManager___c__DisplayClass49_0_TypeInfo, v117, v118);
    sub_1BCA7E0(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v119, v120);
    sub_1BCA7E0(&DataManager___c__DisplayClass49_1_TypeInfo, v121, v122);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v123, v124);
    sub_1BCA7E0(&UserCommandCodeNewManager_TypeInfo, v125, v126);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v127, v128);
    sub_1BCA7E0(&UserMissionProgressManager_TypeInfo, v129, v130);
    sub_1BCA7E0(&UserServantCollectionManager_TypeInfo, v131, v132);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v133, v134);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v135, v136);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v137, v138);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v139, v140);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v141, v142);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v143, v144);
    this = (DataManager__updateMasterData_d__49_o *)sub_1BCA7E0(&StringLiteral_11594/*"SCRIPT"*/, v145, v146);
    byte_4B15D30 = 1;
  }
  lockTaken = 0;
  v602 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      LODWORD(this[1].fields._dataMapDict_5__6->fields._values) = 0;
      if ( !_4__this )
        goto LABEL_288;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_288;
      v8->fields._dataListCount_5__2 = *(_QWORD *)&datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_288;
      v8->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, method);
      v180 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v179);
      CachePath = DataManager__getCachePath((const MethodInfo *)v180);
      if ( !System_IO_Directory__Exists(CachePath, 0LL) )
        System_IO_Directory__CreateDirectory(CachePath, 0LL);
      v8->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_133;
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v182, v183, v184, v185, v186, v187);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v188,
        v189,
        v190,
        v191,
        v192,
        v193);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v194, v195, v196, v197, v198, v199);
      v201 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v200);
        v201 = DataManager_TypeInfo;
      }
      updateData = v201->static_fields->updateData;
      if ( !updateData )
        sub_1BCAA3C(0LL, v200);
      v204 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v203);
      v205 = System_Convert__FromBase64String(v204, 0LL);
      v8->fields._cryptBytes_5__8 = v205;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8,
        (int64_t)v205,
        v206,
        v207,
        v208,
        v209,
        v210,
        v211);
      v219 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v212);
        v219 = DataManager_TypeInfo;
      }
      static_fields = v219->static_fields;
      static_fields->updateData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v213, v214, v215, v216, v217, v218);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v221);
      System_GC__Collect_63447616(0LL);
      v225 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v222, v223, v224);
      UnityEngine_WaitForEndOfFrame___ctor(v225, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v225;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, (int64_t)v225, v227, v228, v229, v230, v231, v232);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, method);
      v235 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1BCAA3C(v235, v235);
      _4__this->fields.masterDataBytes = v235;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
        (int64_t)v235,
        v236,
        v237,
        v238,
        v239,
        v240,
        v241);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v242, v243, v244, v245, v246, v247);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v248);
      System_GC__Collect_63447616(0LL);
      v252 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v249, v250, v251);
      UnityEngine_WaitForEndOfFrame___ctor(v252, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v252;
      v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v165, (int64_t)v252, v253, v254, v255, v256, v257, v258);
      v172 = 2;
      goto LABEL_238;
    case 2:
      v8->fields.__1__state = -1;
      v150 = (MasterDataUnpakcer_o *)sub_1BCAA2C(MasterDataUnpakcer_TypeInfo, method, v2, v3);
      MasterDataUnpakcer___ctor(v150, 0LL);
      if ( !_4__this )
        sub_1BCAA3C(v151, v152);
      if ( !v150 )
        sub_1BCAA3C(v151, v152);
      v153 = MasterDataUnpakcer__Unpack_38894284(v150, _4__this->fields.masterDataBytes, 0LL);
      v8->fields._dataMapObject_5__7 = v153;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        (int64_t)v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v160);
      System_GC__Collect_63447616(0LL);
      v164 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v161, v162, v163);
      UnityEngine_WaitForEndOfFrame___ctor(v164, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v164;
      v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v165, (int64_t)v164, v166, v167, v168, v169, v170, v171);
      v172 = 3;
      goto LABEL_238;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v174 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v176 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v176 = 0LL;
        }
        else
        {
          v176 = 0LL;
        }
        v8->fields._dataMapDict_5__6 = v176;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v174 )
            v275 = (int64_t)dataMapObject_5__7;
          else
            v275 = 0LL;
        }
        else
        {
          v275 = 0LL;
        }
      }
      else
      {
        v275 = 0LL;
        v8->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_1BCA784(p_dataMapDict_5__6, v275, v2, (int32_t)v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_288;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v290 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v290, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v290;
        v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v165, (int64_t)v290, v291, v292, v293, v294, v295, v296);
        v172 = 4;
        goto LABEL_238;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_82;
      v297 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v297 < v8->fields._dataListCount_5__2 )
        {
          v301 = (Il2CppObject *)sub_1BCAA2C(DataManager___c__DisplayClass49_0_TypeInfo, method, v2, v3);
          System_Object___ctor(v301, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v301;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v8->fields.__8__1,
            (int64_t)v301,
            v303,
            v304,
            v305,
            v306,
            v307,
            v308);
          v315 = _4__this->fields.datalist;
          if ( !v315 )
            goto LABEL_288;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v315->max_length )
            goto LABEL_289;
          v317 = v315->m_Items[i_5__9];
          if ( !v317 )
            goto LABEL_288;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_288;
          MasterName_k__BackingField = (int64_t)v317->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields,
            MasterName_k__BackingField,
            v309,
            v310,
            v311,
            v312,
            v313,
            v314);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_288;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_288;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v321,
              v322,
              v323,
              v324,
              v325,
              v326);
            v329 = v8->fields.__8__1;
            if ( !v329 )
              sub_1BCAA3C(v327, v328);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1BCAA3C(0LL, v328);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v329->fields.masterName,
                     (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              (int64_t)Item,
              v332,
              v333,
              v334,
              v335,
              v336,
              v337);
            v340 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v340 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v340;
              v561 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v338,
                                                          v339);
              UnityEngine_WaitForEndOfFrame___ctor(v561, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v561;
              v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v165, (int64_t)v561, v562, v563, v564, v565, v566, v567);
              v172 = 5;
              goto LABEL_238;
            }
LABEL_95:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v341 = v8->fields.__8__1;
            if ( !v341 || !this )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v341->fields.masterName,
                                                              (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_288;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v520 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
                  v520 = DataManager_TypeInfo;
                }
                v299 = v520->static_fields;
                result = 0;
                v300 = 6;
                goto LABEL_286;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v346 = *p__8__1;
            v347 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, method, v342, v343);
            System_Predicate_object____ctor(
              v347,
              (Il2CppObject *)v346,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v347,
                                                              (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_288;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v371 = *(_QWORD *)&this->fields.__1__state;
              v372 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v371 )
                goto LABEL_288;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v371 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v372[4] + 192LL) + 112LL));
              }
              else
              {
                v374 = v371 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v374 + 32) = method;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v374 + 32),
                  (int64_t)method,
                  v348,
                  v349,
                  v350,
                  v351,
                  v352,
                  v353);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v381 = *(_QWORD *)&this->fields.__1__state;
              v382 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v381 )
                goto LABEL_288;
              v383 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v383 >= *(_DWORD *)(v381 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v382[4] + 192LL) + 112LL));
              }
              else
              {
                v384 = v381 + 8 * v383;
                LODWORD(this->fields.__2__current) = v383 + 1;
                *(_QWORD *)(v384 + 32) = method;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v384 + 32),
                  (int64_t)method,
                  v375,
                  v376,
                  v377,
                  v378,
                  v379,
                  v380);
              }
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              method = (const MethodInfo *)(unsigned int)this;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                (int32_t)method,
                &v8->fields._dataMap_5__10->obj,
                (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0LL;
            v8->fields._isAdd_5__4 = 1;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v354,
              v355,
              v356,
              v357,
              v358,
              v359);
          }
          else
          {
            v360 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v361 = *p__8__1;
            v362 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v320, v321, v322);
            System_Predicate_object____ctor(
              v362,
              (Il2CppObject *)v361,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v360 )
              goto LABEL_288;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v360,
                      (System_Predicate_T__o *)v362,
                      (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_124;
            v364 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v364,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v364,
              (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)p__8__1, 0LL, v365, v366, v367, v368, v369, v370);
LABEL_124:
          v297 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v297;
          continue;
        }
        break;
      }
      v385 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v385 - _4__this->fields.lastFrameTime) <= 0.1 )
      {
LABEL_128:
        if ( !v8->fields._isAdd_5__4 )
        {
          v393 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
            v393 = ManagerConfig_TypeInfo;
          }
          if ( !v393->static_fields->UseMock )
            goto LABEL_82;
        }
        v8->fields._dataMapDict_5__6 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
          0LL,
          v394,
          v395,
          v396,
          v397,
          v398,
          v399);
        v8->fields._cryptBytes_5__8 = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v400, v401, v402, v403, v404, v405);
        if ( !_4__this )
          goto LABEL_288;
LABEL_133:
        v406 = _4__this->fields.saveNameList;
        if ( !v406 )
LABEL_288:
          sub_1BCAA3C(this, method);
        if ( v406->fields._size <= 0 )
        {
LABEL_82:
          v298 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
            v298 = DataManager_TypeInfo;
          }
          v299 = v298->static_fields;
          result = 0;
          v300 = 5;
          goto LABEL_286;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v407 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           method,
                                                           v182,
                                                           v183);
        System_Collections_Generic_List_int____ctor(
          v407,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v407;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._loadedIndices_5__5,
          (int64_t)v407,
          v408,
          v409,
          v410,
          v411,
          v412,
          v413);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
        if ( v8->fields.isUseTips )
        {
          v415 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v414);
            v415 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v415->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11594/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v417 = sub_1BCA888(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v416);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v417 )
                goto LABEL_288;
              v424 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( !*(_DWORD *)(v417 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v417 + 32) = v424;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 32), (int64_t)v424, v418, v419, v420, v421, v422, v423);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
              v431 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 40) = v431;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 40), (int64_t)v431, v425, v426, v427, v428, v429, v430);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v438 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 48) = v438;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 48), (int64_t)v438, v432, v433, v434, v435, v436, v437);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v445 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 56) = v445;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 56), (int64_t)v445, v439, v440, v441, v442, v443, v444);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v452 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 64) = v452;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 64), (int64_t)v452, v446, v447, v448, v449, v450, v451);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantMaster___);
              v459 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 72) = v459;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 72), (int64_t)v459, v453, v454, v455, v456, v457, v458);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v466 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v417 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v417 + 80) = v466;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 80), (int64_t)v466, v460, v461, v462, v463, v464, v465);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v473 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v417 + 64LL));
                if ( !this )
                {
LABEL_237:
                  v568 = sub_1BCAA60(this);
                  sub_1BCA908(v568, 0LL);
                }
              }
              if ( *(_DWORD *)(v417 + 24) <= 7u )
LABEL_289:
                sub_1BCAA44(this, method);
              *(_QWORD *)(v417 + 88) = v473;
              sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 88), (int64_t)v473, v467, v468, v469, v470, v471, v472);
              v476 = *(_QWORD *)(v417 + 24);
              if ( (int)v476 >= 1 )
              {
                v477 = 0LL;
                while ( (unsigned int)v477 < (unsigned int)v476 )
                {
                  v478 = *(DataMasterBase_o **)(v417 + 32 + 8 * v477);
                  v479 = sub_1BCAA2C(DataManager___c__DisplayClass49_1_TypeInfo, method, v474, v475);
                  System_Object___ctor((Il2CppObject *)v479, 0LL);
                  if ( !v478 )
                    goto LABEL_288;
                  if ( !v479 )
                    goto LABEL_288;
                  v486 = (int64_t)v478->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v479 + 16) = v486;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v479 + 16), v486, v480, v481, v482, v483, v484, v485);
                  v487 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v491 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v488, v489, v490);
                  System_Predicate_object____ctor(
                    v491,
                    (Il2CppObject *)v479,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v487 )
                    goto LABEL_288;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v487,
                                                                    (System_Predicate_T__o *)v491,
                                                                    (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v492 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    p_obj = &_4__this->fields.masterDataBytes->obj;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v492,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_289;
                    v604.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v604.fields.hasValue = &v601;
                    *(_QWORD *)&v601.fields.hasValue = 0LL;
                    v601.fields.value = 0LL;
                    System_Nullable_long____ctor(v604, Method_System_Nullable_long___ctor__, v494);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v492,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_289;
                    v605.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v605.fields.hasValue = &v600;
                    *(_QWORD *)&v600.fields.hasValue = 0LL;
                    v600.fields.value = 0LL;
                    System_Nullable_long____ctor(v605, Method_System_Nullable_long___ctor__, v495);
                    DataMasterBase__Replaced(v478, p_obj, v601, v600, 0LL);
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_288;
                    v496 = *(_QWORD *)&this->fields.__1__state;
                    v497 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v496 )
                      goto LABEL_288;
                    v498 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v498 >= *(_DWORD *)(v496 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v492,
                        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v497[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v498 + 1;
                      *(_DWORD *)(v496 + 4 * v498 + 32) = v492;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v476 = *(_QWORD *)(v417 + 24);
                  if ( (int)++v477 >= (int)v476 )
                    goto LABEL_188;
                }
                goto LABEL_289;
              }
LABEL_188:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_288;
              if ( ServantProfileMaster__getSum((ServantProfileMaster_o *)this, 0LL) >= 1 )
              {
                if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v499);
                ServantProfileLimitCountManager__Initialize(0LL);
                if ( !ServantProfileEventJoinManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ServantProfileEventJoinManager_TypeInfo, v500);
                ServantProfileEventJoinManager__Initialize(0LL);
                if ( !LogoMain_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LogoMain_TypeInfo, v501);
                if ( LogoMain__IsPLayLogo(0LL) )
                  goto LABEL_200;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v505 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v502,
                                                              v503,
                                                              v504);
                  UnityEngine_WaitForEndOfFrame___ctor(v505, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v505;
                  v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BCA784(v165, (int64_t)v505, v506, v507, v508, v509, v510, v511);
                  v172 = 7;
                  goto LABEL_238;
                }
                goto LABEL_288;
              }
            }
          }
        }
LABEL_201:
        DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, v3);
        if ( v8->fields._isAdd_5__4 )
        {
          v513 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v512);
            v513 = ManagerConfig_TypeInfo;
          }
          if ( !v513->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, v512);
            v553 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v553 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v553;
              v554 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          method,
                                                          v551,
                                                          v552);
              UnityEngine_WaitForEndOfFrame___ctor(v554, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v554;
              v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v165, (int64_t)v554, v555, v556, v557, v558, v559, v560);
              v172 = 8;
              goto LABEL_238;
            }
LABEL_56:
            v259 = DataManager_TypeInfo;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName((const MethodInfo *)v259);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, v260);
              v264 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v261, v262, v263);
              System_Func_bool____ctor(
                v264,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v268 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v265, v266, v267);
              UnityEngine_WaitUntil___ctor(v268, v264, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v268;
              v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v165, (int64_t)v268, v269, v270, v271, v272, v273, v274);
              v172 = 9;
              goto LABEL_238;
            }
            goto LABEL_288;
          }
        }
LABEL_205:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_63627392(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v519 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v518 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v515);
            v518 = DataManager_TypeInfo;
          }
          v518->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, v515);
          v519 = 20;
        }
        else
        {
          v519 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v519 == 62 )
        {
          v521 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                      UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                      v515,
                                                      v516,
                                                      v517);
          UnityEngine_WaitForEndOfFrame___ctor(v521, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v521;
          v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(v165, (int64_t)v521, v522, v523, v524, v525, v526, v527);
          v172 = 11;
          goto LABEL_238;
        }
        if ( v519 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, v515);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo, v528);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v534 = _4__this->fields.saveNameList;
          if ( v534 )
          {
            size = v534->fields._size;
            v536 = v534->fields._version + 1;
            v534->fields._size = 0;
            v534->fields._version = v536;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v534->fields._items, 0, size, 0LL);
            v537 = _4__this->fields.saveDataMapList;
            if ( v537 )
            {
              v538 = (unsigned int)v537->fields._size;
              v539 = v537->fields._version + 1;
              v537->fields._size = 0;
              v537->fields._version = v539;
              if ( (int)v538 >= 1 )
                System_Array__Clear((System_Array_o *)v537->fields._items, 0, v538, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
                0LL,
                v538,
                v529,
                v530,
                v531,
                v532,
                v533);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v540);
              System_GC__Collect_63447616(0LL);
              v544 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          v541,
                                                          v542,
                                                          v543);
              UnityEngine_WaitForEndOfFrame___ctor(v544, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v544;
              v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BCA784(v165, (int64_t)v544, v545, v546, v547, v548, v549, v550);
              v172 = 12;
              goto LABEL_238;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      _4__this->fields.lastFrameTime = v385;
      v386 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
      UnityEngine_WaitForEndOfFrame___ctor(v386, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v386;
      v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v165, (int64_t)v386, v387, v388, v389, v390, v391, v392);
      v172 = 6;
LABEL_238:
      *(_DWORD *)&v165[-1].fields._IsQuestStartMenuMode_k__BackingField = v172;
      return 1;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_75;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_95;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_128;
    case 7:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_201;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v148 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
          v148 = DataManager_TypeInfo;
        }
        v148->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, method);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, method);
      DataManager__writeMasterVersionFile(_4__this, v277);
      v281 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v281 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v281;
        v282 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v278, v279, v280);
        UnityEngine_WaitForEndOfFrame___ctor(v282, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v282;
        v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(v165, (int64_t)v282, v283, v284, v285, v286, v287, v288);
        v172 = 10;
        goto LABEL_238;
      }
      goto LABEL_205;
    case 0xA:
    case 0xB:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_205;
    case 0xC:
      v149 = 0;
      v8->fields.__1__state = -1;
      v8->fields._i_5__9 = 0;
      goto LABEL_246;
    case 0xD:
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v149 = v8->fields._i_5__9 + 1;
        v8->fields._i_5__9 = v149;
LABEL_246:
        if ( v149 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_288;
        v569 = _4__this->fields.datalist;
        if ( !v569 )
          goto LABEL_288;
        if ( v149 >= v569->max_length )
          goto LABEL_289;
        this = (DataManager__updateMasterData_d__49_o *)v569->m_Items[v149];
        if ( !this )
          goto LABEL_288;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                          this,
                                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v572 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          if ( (float)(v572 - _4__this->fields.lastFrameTime) > 0.1 )
          {
            _4__this->fields.lastFrameTime = v572;
            v592 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        method,
                                                        v570,
                                                        v571);
            UnityEngine_WaitForEndOfFrame___ctor(v592, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v592;
            v165 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v165, (int64_t)v592, v593, v594, v595, v596, v597, v598);
            v172 = 13;
            goto LABEL_238;
          }
        }
      }
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      BalanceConfig__Initialize(0LL);
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v573);
      UserServantLockManager__Initialize(0LL);
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v574);
      UserServantNewManager__Initialize(0LL);
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo, v575);
      UserServantCollectionManager__Initialize(0LL);
      if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v576);
      ServantCommentManager__Initialize(0LL);
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v577);
      OtherUserNewManager__Initialize(0LL);
      if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v578);
      UserCommandCodeNewManager__Initialize(0LL);
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v579);
      UserCommandCodeCollectionManager__Initialize(0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v580);
      ImageLimitCount__Initialize(0LL);
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v581);
      UserEquipNewManager__Initialize(0LL);
      if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo, v582);
      UserMissionProgressManager__Initialize(0LL);
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v583);
      MaterialServantLimitCountManager__Initialize(0LL);
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v584);
      LastUsedDeckNumberManager__Initialize(0LL);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo, v585);
      MaterialBranchRouteManager__Initialize(0LL);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v586);
      EventRandomMissionClearManager__Initialize(0LL);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v587);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v588);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v589);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v591 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v590);
        v591 = DataManager_TypeInfo;
      }
      v299 = v591->static_fields;
      result = 0;
      v300 = 1;
LABEL_286:
      v299->updateMasterDataResult = v300;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_o *_4__this; // x20
  DataManager_c *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  DataManager_c *v48; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  DataManager_c *v64; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  UnityEngine_WaitForEndOfFrame_o *v70; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  __int64 v80; // x1
  System_Byte_array *v81; // x21
  Il2CppObject *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x2
  __int64 v90; // x3
  UnityEngine_WaitForEndOfFrame_o *v91; // x20
  Il2CppObject **v92; // x19
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int v99; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_38868828; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x1
  UnityEngine_WaitForEndOfFrame_o *v109; // x20
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v118; // x21
  System_String_o *v119; // x22
  Il2CppObject *v120; // x0
  System_Collections_Generic_Dictionary_string__object__c *v121; // x1
  System_Collections_Generic_Dictionary_string__object__o *v122; // x23
  __int64 methodPtr_low; // x9
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7

  if ( (byte_4B15D31 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v17, v18);
    sub_1BCA7E0(&JsonManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_18403/*"contactURL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_19625/*"filePass"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17252/*"baseURL"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B15D31 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v34 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        v34 = DataManager_TypeInfo;
      }
      if ( !v34->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._cryptString_5__3, 0LL, v35, v36, v37, v38, v39, v40);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v41, v42, v43, v44, v45, v46);
      v48 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
        v48 = DataManager_TypeInfo;
      }
      webViewData = v48->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v50 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))webViewData->klass->vtable[3].method)(
                                        webViewData,
                                        webViewData->klass->vtable[4].methodPtr);
      this->fields._cryptString_5__3 = v50;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        (int64_t)v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      v64 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
        v64 = DataManager_TypeInfo;
      }
      static_fields = v64->static_fields;
      static_fields->webViewData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->webViewData, 0LL, v58, v59, v60, v61, v62, v63);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v70 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v68, v69);
        UnityEngine_WaitForEndOfFrame___ctor(v70, 0LL);
        this->fields.__2__current = (Il2CppObject *)v70;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v70, v72, v73, v74, v75, v76, v77);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, method);
      v81 = System_Convert__FromBase64String(cryptString_5__3, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v80);
      v82 = CatAndMouseGame__MouseGame2MsgPack(v81, 0, 0LL);
      this->fields._dataObject_5__4 = v82;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._dataObject_5__4,
        (int64_t)v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v89, v90);
        UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
        this->fields.__2__current = (Il2CppObject *)v91;
        v92 = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)v92, (int64_t)v91, v93, v94, v95, v96, v97, v98);
        v99 = 2;
LABEL_30:
        *((_DWORD *)v92 - 2) = v99;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
      Dictionary_38868828 = JsonManager__getDictionary_38868828(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_38868828;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._data_5__2,
        (int64_t)Dictionary_38868828,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v109 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v108, v2, v3);
        UnityEngine_WaitForEndOfFrame___ctor(v109, 0LL);
        this->fields.__2__current = (Il2CppObject *)v109;
        v92 = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)v92, (int64_t)v109, v110, v111, v112, v113, v114, v115);
        v99 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v118 = (System_String_o *)StringLiteral_1/*""*/;
      v119 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17252/*"baseURL"*/,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17252/*"baseURL"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v119 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                  Item,
                                  Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18403/*"contactURL"*/,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18403/*"contactURL"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v118 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                  Item,
                                  Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19625/*"filePass"*/,
             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1BCAA3C(Item, v67);
        v120 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)StringLiteral_19625/*"filePass"*/,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v122 = (System_Collections_Generic_Dictionary_string__object__o *)v120;
        if ( v120 )
        {
          v121 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v120->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v120->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1BCACFC(v120);
LABEL_54:
            sub_1BCAA3C(webViewData, v47);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v121);
        NetworkManager__setupWebViewAddress(v119, v118, v122, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        0LL,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v130, v131, v132, v133, v134, v135);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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