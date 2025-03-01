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
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  void *v17; // x1
  struct DataManager_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BFD276 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    byte_4BFD276 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = DataManager_TypeInfo->static_fields;
  v10->webViewData = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v10->webViewData, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  v18 = DataManager_TypeInfo->static_fields;
  v18->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v18->serverHash, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BFD275 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1C2E12C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C2E12C(&object_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4BFD275 = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.saveNameList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.saveDataMapList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (Il2CppObject *)sub_1C2E378(object_TypeInfo);
  System_Object___ctor(v22, 0LL);
  this->fields.lockCountObj = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.lockCountObj, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38A83A8 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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
  DataManager_c *v2; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BFD253 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, v1);
    byte_4BFD253 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(CachePath, v4);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0
  struct DataManager_StaticFields *static_fields; // x8

  if ( (byte_4BFD254 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD254 = 1;
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
  __int64 v1; // x1
  DataManager_c *v2; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BFD252 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, v1);
    byte_4BFD252 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v4);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v9; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v11; // w2
  int v12; // w9

  if ( (byte_4BFD26C & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4BFD26C = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  saveNameList = this->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_12;
  size = saveNameList->fields._size;
  v9 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList )
LABEL_12:
    sub_1C2E388(v5, method);
  v11 = saveDataMapList->fields._size;
  v12 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v12;
  if ( v11 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v11, 0LL);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  __int64 v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  __int64 v136; // x1
  __int64 v137; // x1
  __int64 v138; // x1
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  __int64 v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
  __int64 v150; // x1
  __int64 v151; // x1
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  __int64 v155; // x1
  __int64 v156; // x1
  __int64 v157; // x1
  __int64 v158; // x1
  __int64 v159; // x1
  __int64 v160; // x1
  __int64 v161; // x1
  __int64 v162; // x1
  __int64 v163; // x1
  __int64 v164; // x1
  __int64 v165; // x1
  __int64 v166; // x1
  __int64 v167; // x1
  __int64 v168; // x1
  __int64 v169; // x1
  __int64 v170; // x1
  __int64 v171; // x1
  __int64 v172; // x1
  __int64 v173; // x1
  __int64 v174; // x1
  __int64 v175; // x1
  __int64 v176; // x1
  __int64 v177; // x1
  __int64 v178; // x1
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x1
  __int64 v183; // x1
  __int64 v184; // x1
  __int64 v185; // x1
  __int64 v186; // x1
  __int64 v187; // x1
  __int64 v188; // x1
  __int64 v189; // x1
  __int64 v190; // x1
  __int64 v191; // x1
  __int64 v192; // x1
  __int64 v193; // x1
  __int64 v194; // x1
  __int64 v195; // x1
  __int64 v196; // x1
  __int64 v197; // x1
  __int64 v198; // x1
  __int64 v199; // x1
  __int64 v200; // x1
  __int64 v201; // x1
  __int64 v202; // x1
  __int64 v203; // x1
  __int64 v204; // x1
  __int64 v205; // x1
  __int64 v206; // x1
  __int64 v207; // x1
  __int64 v208; // x1
  __int64 v209; // x1
  __int64 v210; // x1
  __int64 v211; // x1
  __int64 v212; // x1
  __int64 v213; // x1
  __int64 v214; // x1
  __int64 v215; // x1
  __int64 v216; // x1
  __int64 v217; // x1
  __int64 v218; // x1
  __int64 v219; // x1
  __int64 v220; // x1
  __int64 v221; // x1
  __int64 v222; // x1
  __int64 v223; // x1
  __int64 v224; // x1
  __int64 v225; // x1
  __int64 v226; // x1
  __int64 v227; // x1
  __int64 v228; // x1
  __int64 v229; // x1
  __int64 v230; // x1
  __int64 v231; // x1
  __int64 v232; // x1
  __int64 v233; // x1
  __int64 v234; // x1
  __int64 v235; // x1
  __int64 v236; // x1
  __int64 v237; // x1
  __int64 v238; // x1
  __int64 v239; // x1
  __int64 v240; // x1
  __int64 v241; // x1
  __int64 v242; // x1
  __int64 v243; // x1
  __int64 v244; // x1
  __int64 v245; // x1
  __int64 v246; // x1
  __int64 v247; // x1
  __int64 v248; // x1
  __int64 v249; // x1
  __int64 v250; // x1
  __int64 v251; // x1
  __int64 v252; // x1
  __int64 v253; // x1
  __int64 v254; // x1
  __int64 v255; // x1
  __int64 v256; // x1
  __int64 v257; // x1
  __int64 v258; // x1
  __int64 v259; // x1
  __int64 v260; // x1
  __int64 v261; // x1
  __int64 v262; // x1
  __int64 v263; // x1
  __int64 v264; // x1
  __int64 v265; // x1
  __int64 v266; // x1
  __int64 v267; // x1
  __int64 v268; // x1
  __int64 v269; // x1
  __int64 v270; // x1
  __int64 v271; // x1
  __int64 v272; // x1
  __int64 v273; // x1
  __int64 v274; // x1
  __int64 v275; // x1
  __int64 v276; // x1
  __int64 v277; // x1
  __int64 v278; // x1
  __int64 v279; // x1
  __int64 v280; // x1
  __int64 v281; // x1
  __int64 v282; // x1
  __int64 v283; // x1
  __int64 v284; // x1
  __int64 v285; // x1
  __int64 v286; // x1
  __int64 v287; // x1
  __int64 v288; // x1
  __int64 v289; // x1
  __int64 v290; // x1
  __int64 v291; // x1
  __int64 v292; // x1
  __int64 v293; // x1
  __int64 v294; // x1
  __int64 v295; // x1
  __int64 v296; // x1
  __int64 v297; // x1
  __int64 v298; // x1
  __int64 v299; // x1
  __int64 v300; // x1
  __int64 v301; // x1
  __int64 v302; // x1
  __int64 v303; // x1
  __int64 v304; // x1
  __int64 v305; // x1
  __int64 v306; // x1
  __int64 v307; // x1
  __int64 v308; // x1
  __int64 v309; // x1
  __int64 v310; // x1
  __int64 v311; // x1
  __int64 v312; // x1
  __int64 v313; // x1
  __int64 v314; // x1
  __int64 v315; // x1
  __int64 v316; // x1
  __int64 v317; // x1
  __int64 v318; // x1
  __int64 v319; // x1
  __int64 v320; // x1
  __int64 v321; // x1
  __int64 v322; // x1
  __int64 v323; // x1
  __int64 v324; // x1
  __int64 v325; // x1
  __int64 v326; // x1
  __int64 v327; // x1
  __int64 v328; // x1
  __int64 v329; // x1
  __int64 v330; // x1
  __int64 v331; // x1
  __int64 v332; // x1
  __int64 v333; // x1
  __int64 v334; // x1
  __int64 v335; // x1
  __int64 v336; // x1
  __int64 v337; // x1
  __int64 v338; // x1
  __int64 v339; // x1
  __int64 v340; // x1
  __int64 v341; // x1
  __int64 v342; // x1
  __int64 v343; // x1
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
  __int64 v356; // x1
  __int64 v357; // x1
  __int64 v358; // x1
  __int64 v359; // x1
  __int64 v360; // x1
  __int64 v361; // x1
  __int64 v362; // x1
  __int64 v363; // x1
  __int64 v364; // x1
  __int64 v365; // x1
  __int64 v366; // x1
  __int64 v367; // x1
  __int64 v368; // x1
  __int64 v369; // x1
  __int64 v370; // x1
  __int64 v371; // x1
  __int64 v372; // x1
  __int64 v373; // x1
  __int64 v374; // x1
  __int64 v375; // x1
  __int64 v376; // x1
  __int64 v377; // x1
  __int64 v378; // x1
  __int64 v379; // x1
  __int64 v380; // x1
  __int64 v381; // x1
  __int64 v382; // x1
  __int64 v383; // x1
  __int64 v384; // x1
  __int64 v385; // x1
  __int64 v386; // x1
  __int64 v387; // x1
  __int64 v388; // x1
  __int64 v389; // x1
  __int64 v390; // x1
  __int64 v391; // x1
  __int64 v392; // x1
  __int64 v393; // x1
  __int64 v394; // x1
  __int64 v395; // x1
  __int64 v396; // x1
  __int64 v397; // x1
  __int64 v398; // x1
  __int64 v399; // x1
  __int64 v400; // x1
  __int64 v401; // x1
  __int64 v402; // x1
  __int64 v403; // x1
  __int64 v404; // x1
  __int64 v405; // x1
  __int64 v406; // x1
  __int64 v407; // x1
  __int64 v408; // x1
  __int64 v409; // x1
  __int64 v410; // x1
  __int64 v411; // x1
  __int64 v412; // x1
  __int64 v413; // x1
  __int64 v414; // x1
  __int64 v415; // x1
  __int64 v416; // x1
  __int64 v417; // x1
  __int64 v418; // x1
  __int64 v419; // x1
  __int64 v420; // x1
  __int64 v421; // x1
  __int64 v422; // x1
  __int64 v423; // x1
  __int64 v424; // x1
  __int64 v425; // x1
  __int64 v426; // x1
  __int64 v427; // x1
  __int64 v428; // x1
  __int64 v429; // x1
  __int64 v430; // x1
  __int64 v431; // x1
  __int64 v432; // x1
  __int64 v433; // x1
  __int64 v434; // x1
  __int64 v435; // x1
  __int64 v436; // x1
  __int64 v437; // x1
  __int64 v438; // x1
  __int64 v439; // x1
  __int64 v440; // x1
  __int64 v441; // x1
  __int64 v442; // x1
  __int64 v443; // x1
  __int64 v444; // x1
  __int64 v445; // x1
  __int64 v446; // x1
  __int64 v447; // x1
  __int64 v448; // x1
  __int64 v449; // x1
  __int64 v450; // x1
  __int64 v451; // x1
  __int64 v452; // x1
  __int64 v453; // x1
  __int64 v454; // x1
  __int64 v455; // x1
  __int64 v456; // x1
  __int64 v457; // x1
  __int64 v458; // x1
  __int64 v459; // x1
  __int64 v460; // x1
  __int64 v461; // x1
  __int64 v462; // x1
  __int64 v463; // x1
  __int64 v464; // x1
  __int64 v465; // x1
  __int64 v466; // x1
  __int64 v467; // x1
  __int64 v468; // x1
  __int64 v469; // x1
  __int64 v470; // x1
  __int64 v471; // x1
  __int64 v472; // x1
  __int64 v473; // x1
  __int64 v474; // x1
  __int64 v475; // x1
  __int64 v476; // x1
  __int64 v477; // x1
  __int64 v478; // x1
  __int64 v479; // x1
  __int64 v480; // x1
  __int64 v481; // x1
  __int64 v482; // x1
  __int64 v483; // x1
  __int64 v484; // x1
  __int64 v485; // x1
  __int64 v486; // x1
  __int64 v487; // x1
  __int64 v488; // x1
  __int64 v489; // x1
  __int64 v490; // x1
  __int64 v491; // x1
  __int64 v492; // x1
  __int64 v493; // x1
  __int64 v494; // x1
  __int64 v495; // x1
  __int64 v496; // x1
  __int64 v497; // x1
  __int64 v498; // x1
  __int64 v499; // x1
  __int64 v500; // x1
  __int64 v501; // x1
  __int64 v502; // x1
  __int64 v503; // x1
  __int64 v504; // x1
  __int64 v505; // x1
  __int64 v506; // x1
  __int64 v507; // x1
  __int64 v508; // x1
  __int64 v509; // x1
  __int64 v510; // x1
  __int64 v511; // x1
  __int64 v512; // x1
  __int64 v513; // x1
  __int64 v514; // x1
  __int64 v515; // x1
  __int64 v516; // x1
  __int64 v517; // x1
  __int64 v518; // x1
  __int64 v519; // x1
  __int64 v520; // x1
  __int64 v521; // x1
  __int64 v522; // x1
  __int64 v523; // x1
  __int64 v524; // x1
  __int64 v525; // x1
  __int64 v526; // x1
  __int64 v527; // x1
  __int64 v528; // x1
  __int64 v529; // x1
  __int64 v530; // x1
  __int64 v531; // x1
  __int64 v532; // x1
  __int64 v533; // x1
  __int64 v534; // x1
  __int64 v535; // x1
  DataMasterBase_array *v536; // x19
  ServantMaster_o *v537; // x20
  __int64 v538; // x0
  __int64 v539; // x1
  int64_t v540; // x2
  int32_t v541; // w3
  System_String_o *v542; // x4
  BattleSetupInfo_o *v543; // x5
  FollowerInfo_o *v544; // x6
  PartyListViewItem_o *v545; // x7
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v547; // x20
  int64_t v548; // x2
  int32_t v549; // w3
  System_String_o *v550; // x4
  BattleSetupInfo_o *v551; // x5
  FollowerInfo_o *v552; // x6
  PartyListViewItem_o *v553; // x7
  ServantCommentMaster_o *v554; // x20
  int64_t v555; // x2
  int32_t v556; // w3
  System_String_o *v557; // x4
  BattleSetupInfo_o *v558; // x5
  FollowerInfo_o *v559; // x6
  PartyListViewItem_o *v560; // x7
  ServantProfileMaster_o *v561; // x20
  int64_t v562; // x2
  int32_t v563; // w3
  System_String_o *v564; // x4
  BattleSetupInfo_o *v565; // x5
  FollowerInfo_o *v566; // x6
  PartyListViewItem_o *v567; // x7
  WarMaster_o *v568; // x20
  int64_t v569; // x2
  int32_t v570; // w3
  System_String_o *v571; // x4
  BattleSetupInfo_o *v572; // x5
  FollowerInfo_o *v573; // x6
  PartyListViewItem_o *v574; // x7
  UserMaster_o *v575; // x20
  int64_t v576; // x2
  int32_t v577; // w3
  System_String_o *v578; // x4
  BattleSetupInfo_o *v579; // x5
  FollowerInfo_o *v580; // x6
  PartyListViewItem_o *v581; // x7
  UserGameMaster_o *v582; // x20
  int64_t v583; // x2
  int32_t v584; // w3
  System_String_o *v585; // x4
  BattleSetupInfo_o *v586; // x5
  FollowerInfo_o *v587; // x6
  PartyListViewItem_o *v588; // x7
  TblUserMaster_o *v589; // x20
  int64_t v590; // x2
  int32_t v591; // w3
  System_String_o *v592; // x4
  BattleSetupInfo_o *v593; // x5
  FollowerInfo_o *v594; // x6
  PartyListViewItem_o *v595; // x7
  UserItemMaster_o *v596; // x20
  int64_t v597; // x2
  int32_t v598; // w3
  System_String_o *v599; // x4
  BattleSetupInfo_o *v600; // x5
  FollowerInfo_o *v601; // x6
  PartyListViewItem_o *v602; // x7
  UserServantMaster_o *v603; // x20
  int64_t v604; // x2
  int32_t v605; // w3
  System_String_o *v606; // x4
  BattleSetupInfo_o *v607; // x5
  FollowerInfo_o *v608; // x6
  PartyListViewItem_o *v609; // x7
  UserServantStorageMaster_o *v610; // x20
  int64_t v611; // x2
  int32_t v612; // w3
  System_String_o *v613; // x4
  BattleSetupInfo_o *v614; // x5
  FollowerInfo_o *v615; // x6
  PartyListViewItem_o *v616; // x7
  UserAccessaryMaster_o *v617; // x20
  int64_t v618; // x2
  int32_t v619; // w3
  System_String_o *v620; // x4
  BattleSetupInfo_o *v621; // x5
  FollowerInfo_o *v622; // x6
  PartyListViewItem_o *v623; // x7
  UserQuestMaster_o *v624; // x20
  int64_t v625; // x2
  int32_t v626; // w3
  System_String_o *v627; // x4
  BattleSetupInfo_o *v628; // x5
  FollowerInfo_o *v629; // x6
  PartyListViewItem_o *v630; // x7
  BattleMaster_o *v631; // x20
  int64_t v632; // x2
  int32_t v633; // w3
  System_String_o *v634; // x4
  BattleSetupInfo_o *v635; // x5
  FollowerInfo_o *v636; // x6
  PartyListViewItem_o *v637; // x7
  OtherUserGameMaster_o *v638; // x20
  int64_t v639; // x2
  int32_t v640; // w3
  System_String_o *v641; // x4
  BattleSetupInfo_o *v642; // x5
  FollowerInfo_o *v643; // x6
  PartyListViewItem_o *v644; // x7
  TblFriendMaster_o *v645; // x20
  int64_t v646; // x2
  int32_t v647; // w3
  System_String_o *v648; // x4
  BattleSetupInfo_o *v649; // x5
  FollowerInfo_o *v650; // x6
  PartyListViewItem_o *v651; // x7
  AreaMaster_o *v652; // x20
  int64_t v653; // x2
  int32_t v654; // w3
  System_String_o *v655; // x4
  BattleSetupInfo_o *v656; // x5
  FollowerInfo_o *v657; // x6
  PartyListViewItem_o *v658; // x7
  ServantCardMaster_o *v659; // x20
  int64_t v660; // x2
  int32_t v661; // w3
  System_String_o *v662; // x4
  BattleSetupInfo_o *v663; // x5
  FollowerInfo_o *v664; // x6
  PartyListViewItem_o *v665; // x7
  EventMaster_o *v666; // x20
  int64_t v667; // x2
  int32_t v668; // w3
  System_String_o *v669; // x4
  BattleSetupInfo_o *v670; // x5
  FollowerInfo_o *v671; // x6
  PartyListViewItem_o *v672; // x7
  ItemMaster_o *v673; // x20
  int64_t v674; // x2
  int32_t v675; // w3
  System_String_o *v676; // x4
  BattleSetupInfo_o *v677; // x5
  FollowerInfo_o *v678; // x6
  PartyListViewItem_o *v679; // x7
  QuestMaster_o *v680; // x20
  int64_t v681; // x2
  int32_t v682; // w3
  System_String_o *v683; // x4
  BattleSetupInfo_o *v684; // x5
  FollowerInfo_o *v685; // x6
  PartyListViewItem_o *v686; // x7
  QuestAddMaster_o *v687; // x20
  int64_t v688; // x2
  int32_t v689; // w3
  System_String_o *v690; // x4
  BattleSetupInfo_o *v691; // x5
  FollowerInfo_o *v692; // x6
  PartyListViewItem_o *v693; // x7
  QuestReleaseMaster_o *v694; // x20
  int64_t v695; // x2
  int32_t v696; // w3
  System_String_o *v697; // x4
  BattleSetupInfo_o *v698; // x5
  FollowerInfo_o *v699; // x6
  PartyListViewItem_o *v700; // x7
  QuestDateRangeMaster_o *v701; // x20
  int64_t v702; // x2
  int32_t v703; // w3
  System_String_o *v704; // x4
  BattleSetupInfo_o *v705; // x5
  FollowerInfo_o *v706; // x6
  PartyListViewItem_o *v707; // x7
  QuestPhaseMaster_o *v708; // x20
  int64_t v709; // x2
  int32_t v710; // w3
  System_String_o *v711; // x4
  BattleSetupInfo_o *v712; // x5
  FollowerInfo_o *v713; // x6
  PartyListViewItem_o *v714; // x7
  QuestPhaseDetailMaster_o *v715; // x20
  int64_t v716; // x2
  int32_t v717; // w3
  System_String_o *v718; // x4
  BattleSetupInfo_o *v719; // x5
  FollowerInfo_o *v720; // x6
  PartyListViewItem_o *v721; // x7
  QuestGroupMaster_o *v722; // x20
  int64_t v723; // x2
  int32_t v724; // w3
  System_String_o *v725; // x4
  BattleSetupInfo_o *v726; // x5
  FollowerInfo_o *v727; // x6
  PartyListViewItem_o *v728; // x7
  QuestRandomGroupMaster_o *v729; // x20
  int64_t v730; // x2
  int32_t v731; // w3
  System_String_o *v732; // x4
  BattleSetupInfo_o *v733; // x5
  FollowerInfo_o *v734; // x6
  PartyListViewItem_o *v735; // x7
  QuestConsumeItemMaster_o *v736; // x20
  int64_t v737; // x2
  int32_t v738; // w3
  System_String_o *v739; // x4
  BattleSetupInfo_o *v740; // x5
  FollowerInfo_o *v741; // x6
  PartyListViewItem_o *v742; // x7
  QuestMessageMaster_o *v743; // x20
  int64_t v744; // x2
  int32_t v745; // w3
  System_String_o *v746; // x4
  BattleSetupInfo_o *v747; // x5
  FollowerInfo_o *v748; // x6
  PartyListViewItem_o *v749; // x7
  UserQuestInfoMaster_o *v750; // x20
  int64_t v751; // x2
  int32_t v752; // w3
  System_String_o *v753; // x4
  BattleSetupInfo_o *v754; // x5
  FollowerInfo_o *v755; // x6
  PartyListViewItem_o *v756; // x7
  UserQuestRecordMaster_o *v757; // x20
  int64_t v758; // x2
  int32_t v759; // w3
  System_String_o *v760; // x4
  BattleSetupInfo_o *v761; // x5
  FollowerInfo_o *v762; // x6
  PartyListViewItem_o *v763; // x7
  ViewQuestInfoMaster_o *v764; // x20
  int64_t v765; // x2
  int32_t v766; // w3
  System_String_o *v767; // x4
  BattleSetupInfo_o *v768; // x5
  FollowerInfo_o *v769; // x6
  PartyListViewItem_o *v770; // x7
  ViewEnemyMaster_o *v771; // x20
  int64_t v772; // x2
  int32_t v773; // w3
  System_String_o *v774; // x4
  BattleSetupInfo_o *v775; // x5
  FollowerInfo_o *v776; // x6
  PartyListViewItem_o *v777; // x7
  ViewQuestEnemyInfoMaster_o *v778; // x20
  int64_t v779; // x2
  int32_t v780; // w3
  System_String_o *v781; // x4
  BattleSetupInfo_o *v782; // x5
  FollowerInfo_o *v783; // x6
  PartyListViewItem_o *v784; // x7
  BlankEarthSpotMaster_o *v785; // x20
  int64_t v786; // x2
  int32_t v787; // w3
  System_String_o *v788; // x4
  BattleSetupInfo_o *v789; // x5
  FollowerInfo_o *v790; // x6
  PartyListViewItem_o *v791; // x7
  BlankEarthSpotAddMaster_o *v792; // x20
  int64_t v793; // x2
  int32_t v794; // w3
  System_String_o *v795; // x4
  BattleSetupInfo_o *v796; // x5
  FollowerInfo_o *v797; // x6
  PartyListViewItem_o *v798; // x7
  SpotMaster_o *v799; // x20
  int64_t v800; // x2
  int32_t v801; // w3
  System_String_o *v802; // x4
  BattleSetupInfo_o *v803; // x5
  FollowerInfo_o *v804; // x6
  PartyListViewItem_o *v805; // x7
  SpotImageMaster_o *v806; // x20
  int64_t v807; // x2
  int32_t v808; // w3
  System_String_o *v809; // x4
  BattleSetupInfo_o *v810; // x5
  FollowerInfo_o *v811; // x6
  PartyListViewItem_o *v812; // x7
  SpotRoadMaster_o *v813; // x20
  int64_t v814; // x2
  int32_t v815; // w3
  System_String_o *v816; // x4
  BattleSetupInfo_o *v817; // x5
  FollowerInfo_o *v818; // x6
  PartyListViewItem_o *v819; // x7
  SpotPathMaster_o *v820; // x20
  int64_t v821; // x2
  int32_t v822; // w3
  System_String_o *v823; // x4
  BattleSetupInfo_o *v824; // x5
  FollowerInfo_o *v825; // x6
  PartyListViewItem_o *v826; // x7
  SpotAddMaster_o *v827; // x20
  int64_t v828; // x2
  int32_t v829; // w3
  System_String_o *v830; // x4
  BattleSetupInfo_o *v831; // x5
  FollowerInfo_o *v832; // x6
  PartyListViewItem_o *v833; // x7
  MapGimmickMaster_o *v834; // x20
  int64_t v835; // x2
  int32_t v836; // w3
  System_String_o *v837; // x4
  BattleSetupInfo_o *v838; // x5
  FollowerInfo_o *v839; // x6
  PartyListViewItem_o *v840; // x7
  GiftMaster_o *v841; // x20
  int64_t v842; // x2
  int32_t v843; // w3
  System_String_o *v844; // x4
  BattleSetupInfo_o *v845; // x5
  FollowerInfo_o *v846; // x6
  PartyListViewItem_o *v847; // x7
  GiftAddMaster_o *v848; // x20
  int64_t v849; // x2
  int32_t v850; // w3
  System_String_o *v851; // x4
  BattleSetupInfo_o *v852; // x5
  FollowerInfo_o *v853; // x6
  PartyListViewItem_o *v854; // x7
  ShopMaster_o *v855; // x20
  int64_t v856; // x2
  int32_t v857; // w3
  System_String_o *v858; // x4
  BattleSetupInfo_o *v859; // x5
  FollowerInfo_o *v860; // x6
  PartyListViewItem_o *v861; // x7
  StoneShopMaster_o *v862; // x20
  int64_t v863; // x2
  int32_t v864; // w3
  System_String_o *v865; // x4
  BattleSetupInfo_o *v866; // x5
  FollowerInfo_o *v867; // x6
  PartyListViewItem_o *v868; // x7
  BankShopMaster_o *v869; // x20
  int64_t v870; // x2
  int32_t v871; // w3
  System_String_o *v872; // x4
  BattleSetupInfo_o *v873; // x5
  FollowerInfo_o *v874; // x6
  PartyListViewItem_o *v875; // x7
  ShopScriptMaster_o *v876; // x20
  int64_t v877; // x2
  int32_t v878; // w3
  System_String_o *v879; // x4
  BattleSetupInfo_o *v880; // x5
  FollowerInfo_o *v881; // x6
  PartyListViewItem_o *v882; // x7
  StageMaster_o *v883; // x20
  int64_t v884; // x2
  int32_t v885; // w3
  System_String_o *v886; // x4
  BattleSetupInfo_o *v887; // x5
  FollowerInfo_o *v888; // x6
  PartyListViewItem_o *v889; // x7
  ServantGroupMaster_o *v890; // x20
  int64_t v891; // x2
  int32_t v892; // w3
  System_String_o *v893; // x4
  BattleSetupInfo_o *v894; // x5
  FollowerInfo_o *v895; // x6
  PartyListViewItem_o *v896; // x7
  ServantLimitMaster_o *v897; // x20
  int64_t v898; // x2
  int32_t v899; // w3
  System_String_o *v900; // x4
  BattleSetupInfo_o *v901; // x5
  FollowerInfo_o *v902; // x6
  PartyListViewItem_o *v903; // x7
  ServantLimitAddMaster_o *v904; // x20
  int64_t v905; // x2
  int32_t v906; // w3
  System_String_o *v907; // x4
  BattleSetupInfo_o *v908; // x5
  FollowerInfo_o *v909; // x6
  PartyListViewItem_o *v910; // x7
  ServantSkillMaster_o *v911; // x20
  int64_t v912; // x2
  int32_t v913; // w3
  System_String_o *v914; // x4
  BattleSetupInfo_o *v915; // x5
  FollowerInfo_o *v916; // x6
  PartyListViewItem_o *v917; // x7
  ServantPassiveSkillMaster_o *v918; // x20
  int64_t v919; // x2
  int32_t v920; // w3
  System_String_o *v921; // x4
  BattleSetupInfo_o *v922; // x5
  FollowerInfo_o *v923; // x6
  PartyListViewItem_o *v924; // x7
  BgmMaster_o *v925; // x20
  int64_t v926; // x2
  int32_t v927; // w3
  System_String_o *v928; // x4
  BattleSetupInfo_o *v929; // x5
  FollowerInfo_o *v930; // x6
  PartyListViewItem_o *v931; // x7
  ServantScriptMaster_o *v932; // x20
  int64_t v933; // x2
  int32_t v934; // w3
  System_String_o *v935; // x4
  BattleSetupInfo_o *v936; // x5
  FollowerInfo_o *v937; // x6
  PartyListViewItem_o *v938; // x7
  NewsMaster_o *v939; // x20
  int64_t v940; // x2
  int32_t v941; // w3
  System_String_o *v942; // x4
  BattleSetupInfo_o *v943; // x5
  FollowerInfo_o *v944; // x6
  PartyListViewItem_o *v945; // x7
  TelopMaster_o *v946; // x20
  int64_t v947; // x2
  int32_t v948; // w3
  System_String_o *v949; // x4
  BattleSetupInfo_o *v950; // x5
  FollowerInfo_o *v951; // x6
  PartyListViewItem_o *v952; // x7
  UserExpMaster_o *v953; // x20
  int64_t v954; // x2
  int32_t v955; // w3
  System_String_o *v956; // x4
  BattleSetupInfo_o *v957; // x5
  FollowerInfo_o *v958; // x6
  PartyListViewItem_o *v959; // x7
  TreasureDvcMaster_o *v960; // x20
  int64_t v961; // x2
  int32_t v962; // w3
  System_String_o *v963; // x4
  BattleSetupInfo_o *v964; // x5
  FollowerInfo_o *v965; // x6
  PartyListViewItem_o *v966; // x7
  ServantTreasureDvcMaster_o *v967; // x20
  int64_t v968; // x2
  int32_t v969; // w3
  System_String_o *v970; // x4
  BattleSetupInfo_o *v971; // x5
  FollowerInfo_o *v972; // x6
  PartyListViewItem_o *v973; // x7
  SkillMaster_o *v974; // x20
  int64_t v975; // x2
  int32_t v976; // w3
  System_String_o *v977; // x4
  BattleSetupInfo_o *v978; // x5
  FollowerInfo_o *v979; // x6
  PartyListViewItem_o *v980; // x7
  SkillLvMaster_o *v981; // x20
  int64_t v982; // x2
  int32_t v983; // w3
  System_String_o *v984; // x4
  BattleSetupInfo_o *v985; // x5
  FollowerInfo_o *v986; // x6
  PartyListViewItem_o *v987; // x7
  SkillDetailMaster_o *v988; // x20
  int64_t v989; // x2
  int32_t v990; // w3
  System_String_o *v991; // x4
  BattleSetupInfo_o *v992; // x5
  FollowerInfo_o *v993; // x6
  PartyListViewItem_o *v994; // x7
  CommandSpellMaster_o *v995; // x20
  int64_t v996; // x2
  int32_t v997; // w3
  System_String_o *v998; // x4
  BattleSetupInfo_o *v999; // x5
  FollowerInfo_o *v1000; // x6
  PartyListViewItem_o *v1001; // x7
  EquipMaster_o *v1002; // x20
  int64_t v1003; // x2
  int32_t v1004; // w3
  System_String_o *v1005; // x4
  BattleSetupInfo_o *v1006; // x5
  FollowerInfo_o *v1007; // x6
  PartyListViewItem_o *v1008; // x7
  EquipExpMaster_o *v1009; // x20
  int64_t v1010; // x2
  int32_t v1011; // w3
  System_String_o *v1012; // x4
  BattleSetupInfo_o *v1013; // x5
  FollowerInfo_o *v1014; // x6
  PartyListViewItem_o *v1015; // x7
  EquipSkillMaster_o *v1016; // x20
  int64_t v1017; // x2
  int32_t v1018; // w3
  System_String_o *v1019; // x4
  BattleSetupInfo_o *v1020; // x5
  FollowerInfo_o *v1021; // x6
  PartyListViewItem_o *v1022; // x7
  SubEquipMaster_o *v1023; // x20
  int64_t v1024; // x2
  int32_t v1025; // w3
  System_String_o *v1026; // x4
  BattleSetupInfo_o *v1027; // x5
  FollowerInfo_o *v1028; // x6
  PartyListViewItem_o *v1029; // x7
  AccessaryMaster_o *v1030; // x20
  int64_t v1031; // x2
  int32_t v1032; // w3
  System_String_o *v1033; // x4
  BattleSetupInfo_o *v1034; // x5
  FollowerInfo_o *v1035; // x6
  PartyListViewItem_o *v1036; // x7
  UserPresentBoxMaster_o *v1037; // x20
  int64_t v1038; // x2
  int32_t v1039; // w3
  System_String_o *v1040; // x4
  BattleSetupInfo_o *v1041; // x5
  FollowerInfo_o *v1042; // x6
  PartyListViewItem_o *v1043; // x7
  UserDeckMaster_o *v1044; // x20
  int64_t v1045; // x2
  int32_t v1046; // w3
  System_String_o *v1047; // x4
  BattleSetupInfo_o *v1048; // x5
  FollowerInfo_o *v1049; // x6
  PartyListViewItem_o *v1050; // x7
  UserSubEquipMaster_o *v1051; // x20
  int64_t v1052; // x2
  int32_t v1053; // w3
  System_String_o *v1054; // x4
  BattleSetupInfo_o *v1055; // x5
  FollowerInfo_o *v1056; // x6
  PartyListViewItem_o *v1057; // x7
  GachaMaster_o *v1058; // x20
  int64_t v1059; // x2
  int32_t v1060; // w3
  System_String_o *v1061; // x4
  BattleSetupInfo_o *v1062; // x5
  FollowerInfo_o *v1063; // x6
  PartyListViewItem_o *v1064; // x7
  GachaImageMaster_o *v1065; // x20
  int64_t v1066; // x2
  int32_t v1067; // w3
  System_String_o *v1068; // x4
  BattleSetupInfo_o *v1069; // x5
  FollowerInfo_o *v1070; // x6
  PartyListViewItem_o *v1071; // x7
  UserGachaMaster_o *v1072; // x20
  int64_t v1073; // x2
  int32_t v1074; // w3
  System_String_o *v1075; // x4
  BattleSetupInfo_o *v1076; // x5
  FollowerInfo_o *v1077; // x6
  PartyListViewItem_o *v1078; // x7
  UserEquipMaster_o *v1079; // x20
  int64_t v1080; // x2
  int32_t v1081; // w3
  System_String_o *v1082; // x4
  BattleSetupInfo_o *v1083; // x5
  FollowerInfo_o *v1084; // x6
  PartyListViewItem_o *v1085; // x7
  UserServantCollectionMaster_o *v1086; // x20
  int64_t v1087; // x2
  int32_t v1088; // w3
  System_String_o *v1089; // x4
  BattleSetupInfo_o *v1090; // x5
  FollowerInfo_o *v1091; // x6
  PartyListViewItem_o *v1092; // x7
  FriendshipMaster_o *v1093; // x20
  int64_t v1094; // x2
  int32_t v1095; // w3
  System_String_o *v1096; // x4
  BattleSetupInfo_o *v1097; // x5
  FollowerInfo_o *v1098; // x6
  PartyListViewItem_o *v1099; // x7
  GachaTicketMaster_o *v1100; // x20
  int64_t v1101; // x2
  int32_t v1102; // w3
  System_String_o *v1103; // x4
  BattleSetupInfo_o *v1104; // x5
  FollowerInfo_o *v1105; // x6
  PartyListViewItem_o *v1106; // x7
  UserFormationMaster_o *v1107; // x20
  int64_t v1108; // x2
  int32_t v1109; // w3
  System_String_o *v1110; // x4
  BattleSetupInfo_o *v1111; // x5
  FollowerInfo_o *v1112; // x6
  PartyListViewItem_o *v1113; // x7
  FunctionMaster_o *v1114; // x20
  int64_t v1115; // x2
  int32_t v1116; // w3
  System_String_o *v1117; // x4
  BattleSetupInfo_o *v1118; // x5
  FollowerInfo_o *v1119; // x6
  PartyListViewItem_o *v1120; // x7
  BuffMaster_o *v1121; // x20
  int64_t v1122; // x2
  int32_t v1123; // w3
  System_String_o *v1124; // x4
  BattleSetupInfo_o *v1125; // x5
  FollowerInfo_o *v1126; // x6
  PartyListViewItem_o *v1127; // x7
  GachaReleaseMaster_o *v1128; // x20
  int64_t v1129; // x2
  int32_t v1130; // w3
  System_String_o *v1131; // x4
  BattleSetupInfo_o *v1132; // x5
  FollowerInfo_o *v1133; // x6
  PartyListViewItem_o *v1134; // x7
  CombineQpMaster_o *v1135; // x20
  int64_t v1136; // x2
  int32_t v1137; // w3
  System_String_o *v1138; // x4
  BattleSetupInfo_o *v1139; // x5
  FollowerInfo_o *v1140; // x6
  PartyListViewItem_o *v1141; // x7
  CombineMaterialMaster_o *v1142; // x20
  int64_t v1143; // x2
  int32_t v1144; // w3
  System_String_o *v1145; // x4
  BattleSetupInfo_o *v1146; // x5
  FollowerInfo_o *v1147; // x6
  PartyListViewItem_o *v1148; // x7
  EventCombineMaster_o *v1149; // x20
  int64_t v1150; // x2
  int32_t v1151; // w3
  System_String_o *v1152; // x4
  BattleSetupInfo_o *v1153; // x5
  FollowerInfo_o *v1154; // x6
  PartyListViewItem_o *v1155; // x7
  ServantExpMaster_o *v1156; // x20
  int64_t v1157; // x2
  int32_t v1158; // w3
  System_String_o *v1159; // x4
  BattleSetupInfo_o *v1160; // x5
  FollowerInfo_o *v1161; // x6
  PartyListViewItem_o *v1162; // x7
  CombineSkillMaster_o *v1163; // x20
  int64_t v1164; // x2
  int32_t v1165; // w3
  System_String_o *v1166; // x4
  BattleSetupInfo_o *v1167; // x5
  FollowerInfo_o *v1168; // x6
  PartyListViewItem_o *v1169; // x7
  CombineTdMaster_o *v1170; // x20
  int64_t v1171; // x2
  int32_t v1172; // w3
  System_String_o *v1173; // x4
  BattleSetupInfo_o *v1174; // x5
  FollowerInfo_o *v1175; // x6
  PartyListViewItem_o *v1176; // x7
  EventQuestMaster_o *v1177; // x20
  int64_t v1178; // x2
  int32_t v1179; // w3
  System_String_o *v1180; // x4
  BattleSetupInfo_o *v1181; // x5
  FollowerInfo_o *v1182; // x6
  PartyListViewItem_o *v1183; // x7
  EventCampaignMaster_o *v1184; // x20
  int64_t v1185; // x2
  int32_t v1186; // w3
  System_String_o *v1187; // x4
  BattleSetupInfo_o *v1188; // x5
  FollowerInfo_o *v1189; // x6
  PartyListViewItem_o *v1190; // x7
  IllustratorMaster_o *v1191; // x20
  int64_t v1192; // x2
  int32_t v1193; // w3
  System_String_o *v1194; // x4
  BattleSetupInfo_o *v1195; // x5
  FollowerInfo_o *v1196; // x6
  PartyListViewItem_o *v1197; // x7
  CvMaster_o *v1198; // x20
  int64_t v1199; // x2
  int32_t v1200; // w3
  System_String_o *v1201; // x4
  BattleSetupInfo_o *v1202; // x5
  FollowerInfo_o *v1203; // x6
  PartyListViewItem_o *v1204; // x7
  TreasureDvcLvMaster_o *v1205; // x20
  int64_t v1206; // x2
  int32_t v1207; // w3
  System_String_o *v1208; // x4
  BattleSetupInfo_o *v1209; // x5
  FollowerInfo_o *v1210; // x6
  PartyListViewItem_o *v1211; // x7
  TreasureDvcDetailMaster_o *v1212; // x20
  int64_t v1213; // x2
  int32_t v1214; // w3
  System_String_o *v1215; // x4
  BattleSetupInfo_o *v1216; // x5
  FollowerInfo_o *v1217; // x6
  PartyListViewItem_o *v1218; // x7
  UserFollowerMaster_o *v1219; // x20
  int64_t v1220; // x2
  int32_t v1221; // w3
  System_String_o *v1222; // x4
  BattleSetupInfo_o *v1223; // x5
  FollowerInfo_o *v1224; // x6
  PartyListViewItem_o *v1225; // x7
  NpcFollowerMaster_o *v1226; // x20
  int64_t v1227; // x2
  int32_t v1228; // w3
  System_String_o *v1229; // x4
  BattleSetupInfo_o *v1230; // x5
  FollowerInfo_o *v1231; // x6
  PartyListViewItem_o *v1232; // x7
  NpcServantFollowerMaster_o *v1233; // x20
  int64_t v1234; // x2
  int32_t v1235; // w3
  System_String_o *v1236; // x4
  BattleSetupInfo_o *v1237; // x5
  FollowerInfo_o *v1238; // x6
  PartyListViewItem_o *v1239; // x7
  UserEventMaster_o *v1240; // x20
  int64_t v1241; // x2
  int32_t v1242; // w3
  System_String_o *v1243; // x4
  BattleSetupInfo_o *v1244; // x5
  FollowerInfo_o *v1245; // x6
  PartyListViewItem_o *v1246; // x7
  UserShopMaster_o *v1247; // x20
  int64_t v1248; // x2
  int32_t v1249; // w3
  System_String_o *v1250; // x4
  BattleSetupInfo_o *v1251; // x5
  FollowerInfo_o *v1252; // x6
  PartyListViewItem_o *v1253; // x7
  UserContinueMaster_o *v1254; // x20
  int64_t v1255; // x2
  int32_t v1256; // w3
  System_String_o *v1257; // x4
  BattleSetupInfo_o *v1258; // x5
  FollowerInfo_o *v1259; // x6
  PartyListViewItem_o *v1260; // x7
  ConstantMaster_o *v1261; // x20
  int64_t v1262; // x2
  int32_t v1263; // w3
  System_String_o *v1264; // x4
  BattleSetupInfo_o *v1265; // x5
  FollowerInfo_o *v1266; // x6
  PartyListViewItem_o *v1267; // x7
  ConstantLongMaster_o *v1268; // x20
  int64_t v1269; // x2
  int32_t v1270; // w3
  System_String_o *v1271; // x4
  BattleSetupInfo_o *v1272; // x5
  FollowerInfo_o *v1273; // x6
  PartyListViewItem_o *v1274; // x7
  ConstantStrMaster_o *v1275; // x20
  int64_t v1276; // x2
  int32_t v1277; // w3
  System_String_o *v1278; // x4
  BattleSetupInfo_o *v1279; // x5
  FollowerInfo_o *v1280; // x6
  PartyListViewItem_o *v1281; // x7
  AiMaster_o *v1282; // x20
  int64_t v1283; // x2
  int32_t v1284; // w3
  System_String_o *v1285; // x4
  BattleSetupInfo_o *v1286; // x5
  FollowerInfo_o *v1287; // x6
  PartyListViewItem_o *v1288; // x7
  AiActMaster_o *v1289; // x20
  int64_t v1290; // x2
  int32_t v1291; // w3
  System_String_o *v1292; // x4
  BattleSetupInfo_o *v1293; // x5
  FollowerInfo_o *v1294; // x6
  PartyListViewItem_o *v1295; // x7
  AttriRelationMaster_o *v1296; // x20
  int64_t v1297; // x2
  int32_t v1298; // w3
  System_String_o *v1299; // x4
  BattleSetupInfo_o *v1300; // x5
  FollowerInfo_o *v1301; // x6
  PartyListViewItem_o *v1302; // x7
  ClassRelationMaster_o *v1303; // x20
  int64_t v1304; // x2
  int32_t v1305; // w3
  System_String_o *v1306; // x4
  BattleSetupInfo_o *v1307; // x5
  FollowerInfo_o *v1308; // x6
  PartyListViewItem_o *v1309; // x7
  EffectMaster_o *v1310; // x20
  int64_t v1311; // x2
  int32_t v1312; // w3
  System_String_o *v1313; // x4
  BattleSetupInfo_o *v1314; // x5
  FollowerInfo_o *v1315; // x6
  PartyListViewItem_o *v1316; // x7
  EquipImageMaster_o *v1317; // x20
  int64_t v1318; // x2
  int32_t v1319; // w3
  System_String_o *v1320; // x4
  BattleSetupInfo_o *v1321; // x5
  FollowerInfo_o *v1322; // x6
  PartyListViewItem_o *v1323; // x7
  ServantVoiceMaster_o *v1324; // x20
  int64_t v1325; // x2
  int32_t v1326; // w3
  System_String_o *v1327; // x4
  BattleSetupInfo_o *v1328; // x5
  FollowerInfo_o *v1329; // x6
  PartyListViewItem_o *v1330; // x7
  CombineLimitMaster_o *v1331; // x20
  int64_t v1332; // x2
  int32_t v1333; // w3
  System_String_o *v1334; // x4
  BattleSetupInfo_o *v1335; // x5
  FollowerInfo_o *v1336; // x6
  PartyListViewItem_o *v1337; // x7
  CardMaster_o *v1338; // x20
  int64_t v1339; // x2
  int32_t v1340; // w3
  System_String_o *v1341; // x4
  BattleSetupInfo_o *v1342; // x5
  FollowerInfo_o *v1343; // x6
  PartyListViewItem_o *v1344; // x7
  CombineQpSvtEquipMaster_o *v1345; // x20
  int64_t v1346; // x2
  int32_t v1347; // w3
  System_String_o *v1348; // x4
  BattleSetupInfo_o *v1349; // x5
  FollowerInfo_o *v1350; // x6
  PartyListViewItem_o *v1351; // x7
  ServantRarityMaster_o *v1352; // x20
  int64_t v1353; // x2
  int32_t v1354; // w3
  System_String_o *v1355; // x4
  BattleSetupInfo_o *v1356; // x5
  FollowerInfo_o *v1357; // x6
  PartyListViewItem_o *v1358; // x7
  SetItemMaster_o *v1359; // x20
  int64_t v1360; // x2
  int32_t v1361; // w3
  System_String_o *v1362; // x4
  BattleSetupInfo_o *v1363; // x5
  FollowerInfo_o *v1364; // x6
  PartyListViewItem_o *v1365; // x7
  RecoverMaster_o *v1366; // x20
  int64_t v1367; // x2
  int32_t v1368; // w3
  System_String_o *v1369; // x4
  BattleSetupInfo_o *v1370; // x5
  FollowerInfo_o *v1371; // x6
  PartyListViewItem_o *v1372; // x7
  BannerMaster_o *v1373; // x20
  int64_t v1374; // x2
  int32_t v1375; // w3
  System_String_o *v1376; // x4
  BattleSetupInfo_o *v1377; // x5
  FollowerInfo_o *v1378; // x6
  PartyListViewItem_o *v1379; // x7
  ShopReleaseMaster_o *v1380; // x20
  int64_t v1381; // x2
  int32_t v1382; // w3
  System_String_o *v1383; // x4
  BattleSetupInfo_o *v1384; // x5
  FollowerInfo_o *v1385; // x6
  PartyListViewItem_o *v1386; // x7
  EventRewardMaster_o *v1387; // x20
  int64_t v1388; // x2
  int32_t v1389; // w3
  System_String_o *v1390; // x4
  BattleSetupInfo_o *v1391; // x5
  FollowerInfo_o *v1392; // x6
  PartyListViewItem_o *v1393; // x7
  EventDetailMaster_o *v1394; // x20
  int64_t v1395; // x2
  int32_t v1396; // w3
  System_String_o *v1397; // x4
  BattleSetupInfo_o *v1398; // x5
  FollowerInfo_o *v1399; // x6
  PartyListViewItem_o *v1400; // x7
  EventServantMaster_o *v1401; // x20
  int64_t v1402; // x2
  int32_t v1403; // w3
  System_String_o *v1404; // x4
  BattleSetupInfo_o *v1405; // x5
  FollowerInfo_o *v1406; // x6
  PartyListViewItem_o *v1407; // x7
  BoxGachaMaster_o *v1408; // x20
  int64_t v1409; // x2
  int32_t v1410; // w3
  System_String_o *v1411; // x4
  BattleSetupInfo_o *v1412; // x5
  FollowerInfo_o *v1413; // x6
  PartyListViewItem_o *v1414; // x7
  BoxGachaBaseMaster_o *v1415; // x20
  int64_t v1416; // x2
  int32_t v1417; // w3
  System_String_o *v1418; // x4
  BattleSetupInfo_o *v1419; // x5
  FollowerInfo_o *v1420; // x6
  PartyListViewItem_o *v1421; // x7
  BoxGachaTalkMaster_o *v1422; // x20
  int64_t v1423; // x2
  int32_t v1424; // w3
  System_String_o *v1425; // x4
  BattleSetupInfo_o *v1426; // x5
  FollowerInfo_o *v1427; // x6
  PartyListViewItem_o *v1428; // x7
  UserBoxGachaMaster_o *v1429; // x20
  int64_t v1430; // x2
  int32_t v1431; // w3
  System_String_o *v1432; // x4
  BattleSetupInfo_o *v1433; // x5
  FollowerInfo_o *v1434; // x6
  PartyListViewItem_o *v1435; // x7
  BoxGachaHistoryMaster_o *v1436; // x20
  int64_t v1437; // x2
  int32_t v1438; // w3
  System_String_o *v1439; // x4
  BattleSetupInfo_o *v1440; // x5
  FollowerInfo_o *v1441; // x6
  PartyListViewItem_o *v1442; // x7
  BattleBgMaster_o *v1443; // x20
  int64_t v1444; // x2
  int32_t v1445; // w3
  System_String_o *v1446; // x4
  BattleSetupInfo_o *v1447; // x5
  FollowerInfo_o *v1448; // x6
  PartyListViewItem_o *v1449; // x7
  TipsBattleMaster_o *v1450; // x20
  int64_t v1451; // x2
  int32_t v1452; // w3
  System_String_o *v1453; // x4
  BattleSetupInfo_o *v1454; // x5
  FollowerInfo_o *v1455; // x6
  PartyListViewItem_o *v1456; // x7
  UserLoginMaster_o *v1457; // x20
  int64_t v1458; // x2
  int32_t v1459; // w3
  System_String_o *v1460; // x4
  BattleSetupInfo_o *v1461; // x5
  FollowerInfo_o *v1462; // x6
  PartyListViewItem_o *v1463; // x7
  VoiceMaster_o *v1464; // x20
  int64_t v1465; // x2
  int32_t v1466; // w3
  System_String_o *v1467; // x4
  BattleSetupInfo_o *v1468; // x5
  FollowerInfo_o *v1469; // x6
  PartyListViewItem_o *v1470; // x7
  EventRewardExtraMaster_o *v1471; // x20
  int64_t v1472; // x2
  int32_t v1473; // w3
  System_String_o *v1474; // x4
  BattleSetupInfo_o *v1475; // x5
  FollowerInfo_o *v1476; // x6
  PartyListViewItem_o *v1477; // x7
  EventMissionMaster_o *v1478; // x20
  int64_t v1479; // x2
  int32_t v1480; // w3
  System_String_o *v1481; // x4
  BattleSetupInfo_o *v1482; // x5
  FollowerInfo_o *v1483; // x6
  PartyListViewItem_o *v1484; // x7
  EventMissionActionMaster_o *v1485; // x20
  int64_t v1486; // x2
  int32_t v1487; // w3
  System_String_o *v1488; // x4
  BattleSetupInfo_o *v1489; // x5
  FollowerInfo_o *v1490; // x6
  PartyListViewItem_o *v1491; // x7
  EventMissionActionAddMaster_o *v1492; // x20
  int64_t v1493; // x2
  int32_t v1494; // w3
  System_String_o *v1495; // x4
  BattleSetupInfo_o *v1496; // x5
  FollowerInfo_o *v1497; // x6
  PartyListViewItem_o *v1498; // x7
  EventMissionConditionMaster_o *v1499; // x20
  int64_t v1500; // x2
  int32_t v1501; // w3
  System_String_o *v1502; // x4
  BattleSetupInfo_o *v1503; // x5
  FollowerInfo_o *v1504; // x6
  PartyListViewItem_o *v1505; // x7
  EventMissionCondDetailMaster_o *v1506; // x20
  int64_t v1507; // x2
  int32_t v1508; // w3
  System_String_o *v1509; // x4
  BattleSetupInfo_o *v1510; // x5
  FollowerInfo_o *v1511; // x6
  PartyListViewItem_o *v1512; // x7
  EventMissionAddMaster_o *v1513; // x20
  int64_t v1514; // x2
  int32_t v1515; // w3
  System_String_o *v1516; // x4
  BattleSetupInfo_o *v1517; // x5
  FollowerInfo_o *v1518; // x6
  PartyListViewItem_o *v1519; // x7
  CompleteMissionMaster_o *v1520; // x20
  int64_t v1521; // x2
  int32_t v1522; // w3
  System_String_o *v1523; // x4
  BattleSetupInfo_o *v1524; // x5
  FollowerInfo_o *v1525; // x6
  PartyListViewItem_o *v1526; // x7
  EventRewardSetMaster_o *v1527; // x20
  int64_t v1528; // x2
  int32_t v1529; // w3
  System_String_o *v1530; // x4
  BattleSetupInfo_o *v1531; // x5
  FollowerInfo_o *v1532; // x6
  PartyListViewItem_o *v1533; // x7
  UserEventMissionMaster_o *v1534; // x20
  int64_t v1535; // x2
  int32_t v1536; // w3
  System_String_o *v1537; // x4
  BattleSetupInfo_o *v1538; // x5
  FollowerInfo_o *v1539; // x6
  PartyListViewItem_o *v1540; // x7
  UserEventMissionCondDetailMaster_o *v1541; // x20
  int64_t v1542; // x2
  int32_t v1543; // w3
  System_String_o *v1544; // x4
  BattleSetupInfo_o *v1545; // x5
  FollowerInfo_o *v1546; // x6
  PartyListViewItem_o *v1547; // x7
  BoxGachaBaseDetailMaster_o *v1548; // x20
  int64_t v1549; // x2
  int32_t v1550; // w3
  System_String_o *v1551; // x4
  BattleSetupInfo_o *v1552; // x5
  FollowerInfo_o *v1553; // x6
  PartyListViewItem_o *v1554; // x7
  UserServantLeaderMaster_o *v1555; // x20
  int64_t v1556; // x2
  int32_t v1557; // w3
  System_String_o *v1558; // x4
  BattleSetupInfo_o *v1559; // x5
  FollowerInfo_o *v1560; // x6
  PartyListViewItem_o *v1561; // x7
  ClosedMessageMaster_o *v1562; // x20
  int64_t v1563; // x2
  int32_t v1564; // w3
  System_String_o *v1565; // x4
  BattleSetupInfo_o *v1566; // x5
  FollowerInfo_o *v1567; // x6
  PartyListViewItem_o *v1568; // x7
  FunctionGroupMaster_o *v1569; // x20
  int64_t v1570; // x2
  int32_t v1571; // w3
  System_String_o *v1572; // x4
  BattleSetupInfo_o *v1573; // x5
  FollowerInfo_o *v1574; // x6
  PartyListViewItem_o *v1575; // x7
  EventRaidMaster_o *v1576; // x20
  int64_t v1577; // x2
  int32_t v1578; // w3
  System_String_o *v1579; // x4
  BattleSetupInfo_o *v1580; // x5
  FollowerInfo_o *v1581; // x6
  PartyListViewItem_o *v1582; // x7
  TotalEventRaidMaster_o *v1583; // x20
  int64_t v1584; // x2
  int32_t v1585; // w3
  System_String_o *v1586; // x4
  BattleSetupInfo_o *v1587; // x5
  FollowerInfo_o *v1588; // x6
  PartyListViewItem_o *v1589; // x7
  UserEventRaidMaster_o *v1590; // x20
  int64_t v1591; // x2
  int32_t v1592; // w3
  System_String_o *v1593; // x4
  BattleSetupInfo_o *v1594; // x5
  FollowerInfo_o *v1595; // x6
  PartyListViewItem_o *v1596; // x7
  EventPointMaster_o *v1597; // x20
  int64_t v1598; // x2
  int32_t v1599; // w3
  System_String_o *v1600; // x4
  BattleSetupInfo_o *v1601; // x5
  FollowerInfo_o *v1602; // x6
  PartyListViewItem_o *v1603; // x7
  EventPointGroupMaster_o *v1604; // x20
  int64_t v1605; // x2
  int32_t v1606; // w3
  System_String_o *v1607; // x4
  BattleSetupInfo_o *v1608; // x5
  FollowerInfo_o *v1609; // x6
  PartyListViewItem_o *v1610; // x7
  TotalEventPointMaster_o *v1611; // x20
  int64_t v1612; // x2
  int32_t v1613; // w3
  System_String_o *v1614; // x4
  BattleSetupInfo_o *v1615; // x5
  FollowerInfo_o *v1616; // x6
  PartyListViewItem_o *v1617; // x7
  UserEventPointMaster_o *v1618; // x20
  int64_t v1619; // x2
  int32_t v1620; // w3
  System_String_o *v1621; // x4
  BattleSetupInfo_o *v1622; // x5
  FollowerInfo_o *v1623; // x6
  PartyListViewItem_o *v1624; // x7
  EventPointUpperMaster_o *v1625; // x20
  int64_t v1626; // x2
  int32_t v1627; // w3
  System_String_o *v1628; // x4
  BattleSetupInfo_o *v1629; // x5
  FollowerInfo_o *v1630; // x6
  PartyListViewItem_o *v1631; // x7
  EventPointUpperReleaseMaster_o *v1632; // x20
  int64_t v1633; // x2
  int32_t v1634; // w3
  System_String_o *v1635; // x4
  BattleSetupInfo_o *v1636; // x5
  FollowerInfo_o *v1637; // x6
  PartyListViewItem_o *v1638; // x7
  EventRaceMaster_o *v1639; // x20
  int64_t v1640; // x2
  int32_t v1641; // w3
  System_String_o *v1642; // x4
  BattleSetupInfo_o *v1643; // x5
  FollowerInfo_o *v1644; // x6
  PartyListViewItem_o *v1645; // x7
  EventRaceResultMaster_o *v1646; // x20
  int64_t v1647; // x2
  int32_t v1648; // w3
  System_String_o *v1649; // x4
  BattleSetupInfo_o *v1650; // x5
  FollowerInfo_o *v1651; // x6
  PartyListViewItem_o *v1652; // x7
  QuestRacePointMaster_o *v1653; // x20
  int64_t v1654; // x2
  int32_t v1655; // w3
  System_String_o *v1656; // x4
  BattleSetupInfo_o *v1657; // x5
  FollowerInfo_o *v1658; // x6
  PartyListViewItem_o *v1659; // x7
  UserEventRaceMaster_o *v1660; // x20
  int64_t v1661; // x2
  int32_t v1662; // w3
  System_String_o *v1663; // x4
  BattleSetupInfo_o *v1664; // x5
  FollowerInfo_o *v1665; // x6
  PartyListViewItem_o *v1666; // x7
  EventScriptMaster_o *v1667; // x20
  int64_t v1668; // x2
  int32_t v1669; // w3
  System_String_o *v1670; // x4
  BattleSetupInfo_o *v1671; // x5
  FollowerInfo_o *v1672; // x6
  PartyListViewItem_o *v1673; // x7
  EventScriptReleaseMaster_o *v1674; // x20
  int64_t v1675; // x2
  int32_t v1676; // w3
  System_String_o *v1677; // x4
  BattleSetupInfo_o *v1678; // x5
  FollowerInfo_o *v1679; // x6
  PartyListViewItem_o *v1680; // x7
  UserPresentHistoryMaster_o *v1681; // x20
  int64_t v1682; // x2
  int32_t v1683; // w3
  System_String_o *v1684; // x4
  BattleSetupInfo_o *v1685; // x5
  FollowerInfo_o *v1686; // x6
  PartyListViewItem_o *v1687; // x7
  MstMissionMaster_o *v1688; // x20
  int64_t v1689; // x2
  int32_t v1690; // w3
  System_String_o *v1691; // x4
  BattleSetupInfo_o *v1692; // x5
  FollowerInfo_o *v1693; // x6
  PartyListViewItem_o *v1694; // x7
  ServantExceedMaster_o *v1695; // x20
  int64_t v1696; // x2
  int32_t v1697; // w3
  System_String_o *v1698; // x4
  BattleSetupInfo_o *v1699; // x5
  FollowerInfo_o *v1700; // x6
  PartyListViewItem_o *v1701; // x7
  PartialMaintenanceMaster_o *v1702; // x20
  int64_t v1703; // x2
  int32_t v1704; // w3
  System_String_o *v1705; // x4
  BattleSetupInfo_o *v1706; // x5
  FollowerInfo_o *v1707; // x6
  PartyListViewItem_o *v1708; // x7
  GuideMaster_o *v1709; // x20
  int64_t v1710; // x2
  int32_t v1711; // w3
  System_String_o *v1712; // x4
  BattleSetupInfo_o *v1713; // x5
  FollowerInfo_o *v1714; // x6
  PartyListViewItem_o *v1715; // x7
  MstMissionDisplayInfoMaster_o *v1716; // x20
  int64_t v1717; // x2
  int32_t v1718; // w3
  System_String_o *v1719; // x4
  BattleSetupInfo_o *v1720; // x5
  FollowerInfo_o *v1721; // x6
  PartyListViewItem_o *v1722; // x7
  GachaGroupMaster_o *v1723; // x20
  int64_t v1724; // x2
  int32_t v1725; // w3
  System_String_o *v1726; // x4
  BattleSetupInfo_o *v1727; // x5
  FollowerInfo_o *v1728; // x6
  PartyListViewItem_o *v1729; // x7
  QuestResetMaster_o *v1730; // x20
  int64_t v1731; // x2
  int32_t v1732; // w3
  System_String_o *v1733; // x4
  BattleSetupInfo_o *v1734; // x5
  FollowerInfo_o *v1735; // x6
  PartyListViewItem_o *v1736; // x7
  WarAddMaster_o *v1737; // x20
  int64_t v1738; // x2
  int32_t v1739; // w3
  System_String_o *v1740; // x4
  BattleSetupInfo_o *v1741; // x5
  FollowerInfo_o *v1742; // x6
  PartyListViewItem_o *v1743; // x7
  EventItemDisplayMaster_o *v1744; // x20
  int64_t v1745; // x2
  int32_t v1746; // w3
  System_String_o *v1747; // x4
  BattleSetupInfo_o *v1748; // x5
  FollowerInfo_o *v1749; // x6
  PartyListViewItem_o *v1750; // x7
  EventItemDisplayGroupMaster_o *v1751; // x20
  int64_t v1752; // x2
  int32_t v1753; // w3
  System_String_o *v1754; // x4
  BattleSetupInfo_o *v1755; // x5
  FollowerInfo_o *v1756; // x6
  PartyListViewItem_o *v1757; // x7
  EventItemDisplayReleaseMaster_o *v1758; // x20
  int64_t v1759; // x2
  int32_t v1760; // w3
  System_String_o *v1761; // x4
  BattleSetupInfo_o *v1762; // x5
  FollowerInfo_o *v1763; // x6
  PartyListViewItem_o *v1764; // x7
  EventTutorialMaster_o *v1765; // x20
  int64_t v1766; // x2
  int32_t v1767; // w3
  System_String_o *v1768; // x4
  BattleSetupInfo_o *v1769; // x5
  FollowerInfo_o *v1770; // x6
  PartyListViewItem_o *v1771; // x7
  EventTutorialCondMaster_o *v1772; // x20
  int64_t v1773; // x2
  int32_t v1774; // w3
  System_String_o *v1775; // x4
  BattleSetupInfo_o *v1776; // x5
  FollowerInfo_o *v1777; // x6
  PartyListViewItem_o *v1778; // x7
  VoiceReleaseMaster_o *v1779; // x20
  int64_t v1780; // x2
  int32_t v1781; // w3
  System_String_o *v1782; // x4
  BattleSetupInfo_o *v1783; // x5
  FollowerInfo_o *v1784; // x6
  PartyListViewItem_o *v1785; // x7
  EventSuperBossMaster_o *v1786; // x20
  int64_t v1787; // x2
  int32_t v1788; // w3
  System_String_o *v1789; // x4
  BattleSetupInfo_o *v1790; // x5
  FollowerInfo_o *v1791; // x6
  PartyListViewItem_o *v1792; // x7
  UserSuperBossMaster_o *v1793; // x20
  int64_t v1794; // x2
  int32_t v1795; // w3
  System_String_o *v1796; // x4
  BattleSetupInfo_o *v1797; // x5
  FollowerInfo_o *v1798; // x6
  PartyListViewItem_o *v1799; // x7
  QuestScriptMaster_o *v1800; // x20
  int64_t v1801; // x2
  int32_t v1802; // w3
  System_String_o *v1803; // x4
  BattleSetupInfo_o *v1804; // x5
  FollowerInfo_o *v1805; // x6
  PartyListViewItem_o *v1806; // x7
  QuestScriptReleaseMaster_o *v1807; // x20
  int64_t v1808; // x2
  int32_t v1809; // w3
  System_String_o *v1810; // x4
  BattleSetupInfo_o *v1811; // x5
  FollowerInfo_o *v1812; // x6
  PartyListViewItem_o *v1813; // x7
  MaterialFolderMaster_o *v1814; // x20
  int64_t v1815; // x2
  int32_t v1816; // w3
  System_String_o *v1817; // x4
  BattleSetupInfo_o *v1818; // x5
  FollowerInfo_o *v1819; // x6
  PartyListViewItem_o *v1820; // x7
  RestrictionMaster_o *v1821; // x20
  int64_t v1822; // x2
  int32_t v1823; // w3
  System_String_o *v1824; // x4
  BattleSetupInfo_o *v1825; // x5
  FollowerInfo_o *v1826; // x6
  PartyListViewItem_o *v1827; // x7
  QuestRestrictionMaster_o *v1828; // x20
  int64_t v1829; // x2
  int32_t v1830; // w3
  System_String_o *v1831; // x4
  BattleSetupInfo_o *v1832; // x5
  FollowerInfo_o *v1833; // x6
  PartyListViewItem_o *v1834; // x7
  ServantVoiceRelationMaster_o *v1835; // x20
  int64_t v1836; // x2
  int32_t v1837; // w3
  System_String_o *v1838; // x4
  BattleSetupInfo_o *v1839; // x5
  FollowerInfo_o *v1840; // x6
  PartyListViewItem_o *v1841; // x7
  ShopDetailMaster_o *v1842; // x20
  int64_t v1843; // x2
  int32_t v1844; // w3
  System_String_o *v1845; // x4
  BattleSetupInfo_o *v1846; // x5
  FollowerInfo_o *v1847; // x6
  PartyListViewItem_o *v1848; // x7
  ServantScriptAddMaster_o *v1849; // x20
  int64_t v1850; // x2
  int32_t v1851; // w3
  System_String_o *v1852; // x4
  BattleSetupInfo_o *v1853; // x5
  FollowerInfo_o *v1854; // x6
  PartyListViewItem_o *v1855; // x7
  CombineMaster_o *v1856; // x20
  int64_t v1857; // x2
  int32_t v1858; // w3
  System_String_o *v1859; // x4
  BattleSetupInfo_o *v1860; // x5
  FollowerInfo_o *v1861; // x6
  PartyListViewItem_o *v1862; // x7
  AiFieldMaster_o *v1863; // x20
  int64_t v1864; // x2
  int32_t v1865; // w3
  System_String_o *v1866; // x4
  BattleSetupInfo_o *v1867; // x5
  FollowerInfo_o *v1868; // x6
  PartyListViewItem_o *v1869; // x7
  ServantCommentAddMaster_o *v1870; // x20
  int64_t v1871; // x2
  int32_t v1872; // w3
  System_String_o *v1873; // x4
  BattleSetupInfo_o *v1874; // x5
  FollowerInfo_o *v1875; // x6
  PartyListViewItem_o *v1876; // x7
  EventFilterMaster_o *v1877; // x20
  int64_t v1878; // x2
  int32_t v1879; // w3
  System_String_o *v1880; // x4
  BattleSetupInfo_o *v1881; // x5
  FollowerInfo_o *v1882; // x6
  PartyListViewItem_o *v1883; // x7
  UserSupportDeckMaster_o *v1884; // x20
  int64_t v1885; // x2
  int32_t v1886; // w3
  System_String_o *v1887; // x4
  BattleSetupInfo_o *v1888; // x5
  FollowerInfo_o *v1889; // x6
  PartyListViewItem_o *v1890; // x7
  EventRewardSceneMaster_o *v1891; // x20
  int64_t v1892; // x2
  int32_t v1893; // w3
  System_String_o *v1894; // x4
  BattleSetupInfo_o *v1895; // x5
  FollowerInfo_o *v1896; // x6
  PartyListViewItem_o *v1897; // x7
  EventVoicePlayMaster_o *v1898; // x20
  int64_t v1899; // x2
  int32_t v1900; // w3
  System_String_o *v1901; // x4
  BattleSetupInfo_o *v1902; // x5
  FollowerInfo_o *v1903; // x6
  PartyListViewItem_o *v1904; // x7
  GachaSubMaster_o *v1905; // x20
  int64_t v1906; // x2
  int32_t v1907; // w3
  System_String_o *v1908; // x4
  BattleSetupInfo_o *v1909; // x5
  FollowerInfo_o *v1910; // x6
  PartyListViewItem_o *v1911; // x7
  GachaDetailMaster_o *v1912; // x20
  int64_t v1913; // x2
  int32_t v1914; // w3
  System_String_o *v1915; // x4
  BattleSetupInfo_o *v1916; // x5
  FollowerInfo_o *v1917; // x6
  PartyListViewItem_o *v1918; // x7
  GachaBaseCollateralMaster_o *v1919; // x20
  int64_t v1920; // x2
  int32_t v1921; // w3
  System_String_o *v1922; // x4
  BattleSetupInfo_o *v1923; // x5
  FollowerInfo_o *v1924; // x6
  PartyListViewItem_o *v1925; // x7
  GachaAdjustAddMaster_o *v1926; // x20
  int64_t v1927; // x2
  int32_t v1928; // w3
  System_String_o *v1929; // x4
  BattleSetupInfo_o *v1930; // x5
  FollowerInfo_o *v1931; // x6
  PartyListViewItem_o *v1932; // x7
  GachaBonusSelectMaster_o *v1933; // x20
  int64_t v1934; // x2
  int32_t v1935; // w3
  System_String_o *v1936; // x4
  BattleSetupInfo_o *v1937; // x5
  FollowerInfo_o *v1938; // x6
  PartyListViewItem_o *v1939; // x7
  GachaBonusSelectLineupMaster_o *v1940; // x20
  int64_t v1941; // x2
  int32_t v1942; // w3
  System_String_o *v1943; // x4
  BattleSetupInfo_o *v1944; // x5
  FollowerInfo_o *v1945; // x6
  PartyListViewItem_o *v1946; // x7
  ServantChangeMaster_o *v1947; // x20
  int64_t v1948; // x2
  int32_t v1949; // w3
  System_String_o *v1950; // x4
  BattleSetupInfo_o *v1951; // x5
  FollowerInfo_o *v1952; // x6
  PartyListViewItem_o *v1953; // x7
  VoiceCondMaster_o *v1954; // x20
  int64_t v1955; // x2
  int32_t v1956; // w3
  System_String_o *v1957; // x4
  BattleSetupInfo_o *v1958; // x5
  FollowerInfo_o *v1959; // x6
  PartyListViewItem_o *v1960; // x7
  BgmReleaseMaster_o *v1961; // x20
  int64_t v1962; // x2
  int32_t v1963; // w3
  System_String_o *v1964; // x4
  BattleSetupInfo_o *v1965; // x5
  FollowerInfo_o *v1966; // x6
  PartyListViewItem_o *v1967; // x7
  MyRoomAddMaster_o *v1968; // x20
  int64_t v1969; // x2
  int32_t v1970; // w3
  System_String_o *v1971; // x4
  BattleSetupInfo_o *v1972; // x5
  FollowerInfo_o *v1973; // x6
  PartyListViewItem_o *v1974; // x7
  ShopActionMaster_o *v1975; // x20
  int64_t v1976; // x2
  int32_t v1977; // w3
  System_String_o *v1978; // x4
  BattleSetupInfo_o *v1979; // x5
  FollowerInfo_o *v1980; // x6
  PartyListViewItem_o *v1981; // x7
  EventRewardSceneReleaseMaster_o *v1982; // x20
  int64_t v1983; // x2
  int32_t v1984; // w3
  System_String_o *v1985; // x4
  BattleSetupInfo_o *v1986; // x5
  FollowerInfo_o *v1987; // x6
  PartyListViewItem_o *v1988; // x7
  QuestBehaviorMaster_o *v1989; // x20
  int64_t v1990; // x2
  int32_t v1991; // w3
  System_String_o *v1992; // x4
  BattleSetupInfo_o *v1993; // x5
  FollowerInfo_o *v1994; // x6
  PartyListViewItem_o *v1995; // x7
  MapMaster_o *v1996; // x20
  int64_t v1997; // x2
  int32_t v1998; // w3
  System_String_o *v1999; // x4
  BattleSetupInfo_o *v2000; // x5
  FollowerInfo_o *v2001; // x6
  PartyListViewItem_o *v2002; // x7
  MapCondMaster_o *v2003; // x20
  int64_t v2004; // x2
  int32_t v2005; // w3
  System_String_o *v2006; // x4
  BattleSetupInfo_o *v2007; // x5
  FollowerInfo_o *v2008; // x6
  PartyListViewItem_o *v2009; // x7
  MapButtonMaster_o *v2010; // x20
  int64_t v2011; // x2
  int32_t v2012; // w3
  System_String_o *v2013; // x4
  BattleSetupInfo_o *v2014; // x5
  FollowerInfo_o *v2015; // x6
  PartyListViewItem_o *v2016; // x7
  BannerAddMaster_o *v2017; // x20
  int64_t v2018; // x2
  int32_t v2019; // w3
  System_String_o *v2020; // x4
  BattleSetupInfo_o *v2021; // x5
  FollowerInfo_o *v2022; // x6
  PartyListViewItem_o *v2023; // x7
  EventAddMaster_o *v2024; // x20
  int64_t v2025; // x2
  int32_t v2026; // w3
  System_String_o *v2027; // x4
  BattleSetupInfo_o *v2028; // x5
  FollowerInfo_o *v2029; // x6
  PartyListViewItem_o *v2030; // x7
  TotalLoginMaster_o *v2031; // x20
  int64_t v2032; // x2
  int32_t v2033; // w3
  System_String_o *v2034; // x4
  BattleSetupInfo_o *v2035; // x5
  FollowerInfo_o *v2036; // x6
  PartyListViewItem_o *v2037; // x7
  ServantFilterMaster_o *v2038; // x20
  int64_t v2039; // x2
  int32_t v2040; // w3
  System_String_o *v2041; // x4
  BattleSetupInfo_o *v2042; // x5
  FollowerInfo_o *v2043; // x6
  PartyListViewItem_o *v2044; // x7
  CombineCostumeMaster_o *v2045; // x20
  int64_t v2046; // x2
  int32_t v2047; // w3
  System_String_o *v2048; // x4
  BattleSetupInfo_o *v2049; // x5
  FollowerInfo_o *v2050; // x6
  PartyListViewItem_o *v2051; // x7
  ServantCostumeMaster_o *v2052; // x20
  int64_t v2053; // x2
  int32_t v2054; // w3
  System_String_o *v2055; // x4
  BattleSetupInfo_o *v2056; // x5
  FollowerInfo_o *v2057; // x6
  PartyListViewItem_o *v2058; // x7
  ServantCostumeReleaseMaster_o *v2059; // x20
  int64_t v2060; // x2
  int32_t v2061; // w3
  System_String_o *v2062; // x4
  BattleSetupInfo_o *v2063; // x5
  FollowerInfo_o *v2064; // x6
  PartyListViewItem_o *v2065; // x7
  UserFriendRequestHistoryMaster_o *v2066; // x20
  int64_t v2067; // x2
  int32_t v2068; // w3
  System_String_o *v2069; // x4
  BattleSetupInfo_o *v2070; // x5
  FollowerInfo_o *v2071; // x6
  PartyListViewItem_o *v2072; // x7
  UserBlacklistMaster_o *v2073; // x20
  int64_t v2074; // x2
  int32_t v2075; // w3
  System_String_o *v2076; // x4
  BattleSetupInfo_o *v2077; // x5
  FollowerInfo_o *v2078; // x6
  PartyListViewItem_o *v2079; // x7
  ItemSelectMaster_o *v2080; // x20
  int64_t v2081; // x2
  int32_t v2082; // w3
  System_String_o *v2083; // x4
  BattleSetupInfo_o *v2084; // x5
  FollowerInfo_o *v2085; // x6
  PartyListViewItem_o *v2086; // x7
  TotalEventRaceMaster_o *v2087; // x20
  int64_t v2088; // x2
  int32_t v2089; // w3
  System_String_o *v2090; // x4
  BattleSetupInfo_o *v2091; // x5
  FollowerInfo_o *v2092; // x6
  PartyListViewItem_o *v2093; // x7
  EventPointGroupAddMaster_o *v2094; // x20
  int64_t v2095; // x2
  int32_t v2096; // w3
  System_String_o *v2097; // x4
  BattleSetupInfo_o *v2098; // x5
  FollowerInfo_o *v2099; // x6
  PartyListViewItem_o *v2100; // x7
  VoicePlayGroupMaster_o *v2101; // x20
  int64_t v2102; // x2
  int32_t v2103; // w3
  System_String_o *v2104; // x4
  BattleSetupInfo_o *v2105; // x5
  FollowerInfo_o *v2106; // x6
  PartyListViewItem_o *v2107; // x7
  VoicePlayCondMaster_o *v2108; // x20
  int64_t v2109; // x2
  int32_t v2110; // w3
  System_String_o *v2111; // x4
  BattleSetupInfo_o *v2112; // x5
  FollowerInfo_o *v2113; // x6
  PartyListViewItem_o *v2114; // x7
  GachaStoryAdjustMaster_o *v2115; // x20
  int64_t v2116; // x2
  int32_t v2117; // w3
  System_String_o *v2118; // x4
  BattleSetupInfo_o *v2119; // x5
  FollowerInfo_o *v2120; // x6
  PartyListViewItem_o *v2121; // x7
  ServantFlagMaster_o *v2122; // x20
  int64_t v2123; // x2
  int32_t v2124; // w3
  System_String_o *v2125; // x4
  BattleSetupInfo_o *v2126; // x5
  FollowerInfo_o *v2127; // x6
  PartyListViewItem_o *v2128; // x7
  ServantFlagReleaseMaster_o *v2129; // x20
  int64_t v2130; // x2
  int32_t v2131; // w3
  System_String_o *v2132; // x4
  BattleSetupInfo_o *v2133; // x5
  FollowerInfo_o *v2134; // x6
  PartyListViewItem_o *v2135; // x7
  EventLocationCampaignMaster_o *v2136; // x20
  int64_t v2137; // x2
  int32_t v2138; // w3
  System_String_o *v2139; // x4
  BattleSetupInfo_o *v2140; // x5
  FollowerInfo_o *v2141; // x6
  PartyListViewItem_o *v2142; // x7
  CampaignInfoMaster_o *v2143; // x20
  int64_t v2144; // x2
  int32_t v2145; // w3
  System_String_o *v2146; // x4
  BattleSetupInfo_o *v2147; // x5
  FollowerInfo_o *v2148; // x6
  PartyListViewItem_o *v2149; // x7
  DialogMessageMaster_o *v2150; // x20
  int64_t v2151; // x2
  int32_t v2152; // w3
  System_String_o *v2153; // x4
  BattleSetupInfo_o *v2154; // x5
  FollowerInfo_o *v2155; // x6
  PartyListViewItem_o *v2156; // x7
  ServantIndividualityMaster_o *v2157; // x20
  int64_t v2158; // x2
  int32_t v2159; // w3
  System_String_o *v2160; // x4
  BattleSetupInfo_o *v2161; // x5
  FollowerInfo_o *v2162; // x6
  PartyListViewItem_o *v2163; // x7
  BoardMessageMaster_o *v2164; // x20
  int64_t v2165; // x2
  int32_t v2166; // w3
  System_String_o *v2167; // x4
  BattleSetupInfo_o *v2168; // x5
  FollowerInfo_o *v2169; // x6
  PartyListViewItem_o *v2170; // x7
  BoardMessageReleaseMaster_o *v2171; // x20
  int64_t v2172; // x2
  int32_t v2173; // w3
  System_String_o *v2174; // x4
  BattleSetupInfo_o *v2175; // x5
  FollowerInfo_o *v2176; // x6
  PartyListViewItem_o *v2177; // x7
  EventServantFatigueMaster_o *v2178; // x20
  int64_t v2179; // x2
  int32_t v2180; // w3
  System_String_o *v2181; // x4
  BattleSetupInfo_o *v2182; // x5
  FollowerInfo_o *v2183; // x6
  PartyListViewItem_o *v2184; // x7
  UserEventDeckMaster_o *v2185; // x20
  int64_t v2186; // x2
  int32_t v2187; // w3
  System_String_o *v2188; // x4
  BattleSetupInfo_o *v2189; // x5
  FollowerInfo_o *v2190; // x6
  PartyListViewItem_o *v2191; // x7
  EventTowerMaster_o *v2192; // x20
  int64_t v2193; // x2
  int32_t v2194; // w3
  System_String_o *v2195; // x4
  BattleSetupInfo_o *v2196; // x5
  FollowerInfo_o *v2197; // x6
  PartyListViewItem_o *v2198; // x7
  EventTowerRewardMaster_o *v2199; // x20
  int64_t v2200; // x2
  int32_t v2201; // w3
  System_String_o *v2202; // x4
  BattleSetupInfo_o *v2203; // x5
  FollowerInfo_o *v2204; // x6
  PartyListViewItem_o *v2205; // x7
  EventBulletinBoardMaster_o *v2206; // x20
  int64_t v2207; // x2
  int32_t v2208; // w3
  System_String_o *v2209; // x4
  BattleSetupInfo_o *v2210; // x5
  FollowerInfo_o *v2211; // x6
  PartyListViewItem_o *v2212; // x7
  EventBulletinBoardReleaseMaster_o *v2213; // x20
  int64_t v2214; // x2
  int32_t v2215; // w3
  System_String_o *v2216; // x4
  BattleSetupInfo_o *v2217; // x5
  FollowerInfo_o *v2218; // x6
  PartyListViewItem_o *v2219; // x7
  EventFactoryMaster_o *v2220; // x20
  int64_t v2221; // x2
  int32_t v2222; // w3
  System_String_o *v2223; // x4
  BattleSetupInfo_o *v2224; // x5
  FollowerInfo_o *v2225; // x6
  PartyListViewItem_o *v2226; // x7
  ShopGroupMaster_o *v2227; // x20
  int64_t v2228; // x2
  int32_t v2229; // w3
  System_String_o *v2230; // x4
  BattleSetupInfo_o *v2231; // x5
  FollowerInfo_o *v2232; // x6
  PartyListViewItem_o *v2233; // x7
  AuraEffectMaster_o *v2234; // x20
  int64_t v2235; // x2
  int32_t v2236; // w3
  System_String_o *v2237; // x4
  BattleSetupInfo_o *v2238; // x5
  FollowerInfo_o *v2239; // x6
  PartyListViewItem_o *v2240; // x7
  AuraEffectPosOverwriteMaster_o *v2241; // x20
  int64_t v2242; // x2
  int32_t v2243; // w3
  System_String_o *v2244; // x4
  BattleSetupInfo_o *v2245; // x5
  FollowerInfo_o *v2246; // x6
  PartyListViewItem_o *v2247; // x7
  UserEventMissionFixMaster_o *v2248; // x20
  int64_t v2249; // x2
  int32_t v2250; // w3
  System_String_o *v2251; // x4
  BattleSetupInfo_o *v2252; // x5
  FollowerInfo_o *v2253; // x6
  PartyListViewItem_o *v2254; // x7
  NotEndEventMissionFixMaster_o *v2255; // x20
  int64_t v2256; // x2
  int32_t v2257; // w3
  System_String_o *v2258; // x4
  BattleSetupInfo_o *v2259; // x5
  FollowerInfo_o *v2260; // x6
  PartyListViewItem_o *v2261; // x7
  EnemyMstMaster_o *v2262; // x20
  int64_t v2263; // x2
  int32_t v2264; // w3
  System_String_o *v2265; // x4
  BattleSetupInfo_o *v2266; // x5
  FollowerInfo_o *v2267; // x6
  PartyListViewItem_o *v2268; // x7
  EnemyMstBattleMaster_o *v2269; // x20
  int64_t v2270; // x2
  int32_t v2271; // w3
  System_String_o *v2272; // x4
  BattleSetupInfo_o *v2273; // x5
  FollowerInfo_o *v2274; // x6
  PartyListViewItem_o *v2275; // x7
  ServantSkillReleaseMaster_o *v2276; // x20
  int64_t v2277; // x2
  int32_t v2278; // w3
  System_String_o *v2279; // x4
  BattleSetupInfo_o *v2280; // x5
  FollowerInfo_o *v2281; // x6
  PartyListViewItem_o *v2282; // x7
  ServantPassiveSkillReleaseMaster_o *v2283; // x20
  int64_t v2284; // x2
  int32_t v2285; // w3
  System_String_o *v2286; // x4
  BattleSetupInfo_o *v2287; // x5
  FollowerInfo_o *v2288; // x6
  PartyListViewItem_o *v2289; // x7
  ServantTreasureDeviceReleaseMaster_o *v2290; // x20
  int64_t v2291; // x2
  int32_t v2292; // w3
  System_String_o *v2293; // x4
  BattleSetupInfo_o *v2294; // x5
  FollowerInfo_o *v2295; // x6
  PartyListViewItem_o *v2296; // x7
  MapGimmickReleaseMaster_o *v2297; // x20
  int64_t v2298; // x2
  int32_t v2299; // w3
  System_String_o *v2300; // x4
  BattleSetupInfo_o *v2301; // x5
  FollowerInfo_o *v2302; // x6
  PartyListViewItem_o *v2303; // x7
  CommandCodeMaster_o *v2304; // x20
  int64_t v2305; // x2
  int32_t v2306; // w3
  System_String_o *v2307; // x4
  BattleSetupInfo_o *v2308; // x5
  FollowerInfo_o *v2309; // x6
  PartyListViewItem_o *v2310; // x7
  ServantCommandCodeUnlockMaster_o *v2311; // x20
  int64_t v2312; // x2
  int32_t v2313; // w3
  System_String_o *v2314; // x4
  BattleSetupInfo_o *v2315; // x5
  FollowerInfo_o *v2316; // x6
  PartyListViewItem_o *v2317; // x7
  UserCommandCodeMaster_o *v2318; // x20
  int64_t v2319; // x2
  int32_t v2320; // w3
  System_String_o *v2321; // x4
  BattleSetupInfo_o *v2322; // x5
  FollowerInfo_o *v2323; // x6
  PartyListViewItem_o *v2324; // x7
  UserCommandCodeCollectionMaster_o *v2325; // x20
  int64_t v2326; // x2
  int32_t v2327; // w3
  System_String_o *v2328; // x4
  BattleSetupInfo_o *v2329; // x5
  FollowerInfo_o *v2330; // x6
  PartyListViewItem_o *v2331; // x7
  UserServantCommandCodeMaster_o *v2332; // x20
  int64_t v2333; // x2
  int32_t v2334; // w3
  System_String_o *v2335; // x4
  BattleSetupInfo_o *v2336; // x5
  FollowerInfo_o *v2337; // x6
  PartyListViewItem_o *v2338; // x7
  UserServantCommandCardMaster_o *v2339; // x20
  int64_t v2340; // x2
  int32_t v2341; // w3
  System_String_o *v2342; // x4
  BattleSetupInfo_o *v2343; // x5
  FollowerInfo_o *v2344; // x6
  PartyListViewItem_o *v2345; // x7
  CommandCardRankParamMaster_o *v2346; // x20
  int64_t v2347; // x2
  int32_t v2348; // w3
  System_String_o *v2349; // x4
  BattleSetupInfo_o *v2350; // x5
  FollowerInfo_o *v2351; // x6
  PartyListViewItem_o *v2352; // x7
  CommandCodeSkillMaster_o *v2353; // x20
  int64_t v2354; // x2
  int32_t v2355; // w3
  System_String_o *v2356; // x4
  BattleSetupInfo_o *v2357; // x5
  FollowerInfo_o *v2358; // x6
  PartyListViewItem_o *v2359; // x7
  CommandCodeSkillReleaseMaster_o *v2360; // x20
  int64_t v2361; // x2
  int32_t v2362; // w3
  System_String_o *v2363; // x4
  BattleSetupInfo_o *v2364; // x5
  FollowerInfo_o *v2365; // x6
  PartyListViewItem_o *v2366; // x7
  CommandCodeCommentMaster_o *v2367; // x20
  int64_t v2368; // x2
  int32_t v2369; // w3
  System_String_o *v2370; // x4
  BattleSetupInfo_o *v2371; // x5
  FollowerInfo_o *v2372; // x6
  PartyListViewItem_o *v2373; // x7
  EventStatusMaster_o *v2374; // x20
  int64_t v2375; // x2
  int32_t v2376; // w3
  System_String_o *v2377; // x4
  BattleSetupInfo_o *v2378; // x5
  FollowerInfo_o *v2379; // x6
  PartyListViewItem_o *v2380; // x7
  EventStatusQuestMaster_o *v2381; // x20
  int64_t v2382; // x2
  int32_t v2383; // w3
  System_String_o *v2384; // x4
  BattleSetupInfo_o *v2385; // x5
  FollowerInfo_o *v2386; // x6
  PartyListViewItem_o *v2387; // x7
  CommonRestrictionMaster_o *v2388; // x20
  int64_t v2389; // x2
  int32_t v2390; // w3
  System_String_o *v2391; // x4
  BattleSetupInfo_o *v2392; // x5
  FollowerInfo_o *v2393; // x6
  PartyListViewItem_o *v2394; // x7
  EventPointBuffMaster_o *v2395; // x20
  int64_t v2396; // x2
  int32_t v2397; // w3
  System_String_o *v2398; // x4
  BattleSetupInfo_o *v2399; // x5
  FollowerInfo_o *v2400; // x6
  PartyListViewItem_o *v2401; // x7
  UserFollowMaster_o *v2402; // x20
  int64_t v2403; // x2
  int32_t v2404; // w3
  System_String_o *v2405; // x4
  BattleSetupInfo_o *v2406; // x5
  FollowerInfo_o *v2407; // x6
  PartyListViewItem_o *v2408; // x7
  EventRewardGuideReleaseMaster_o *v2409; // x20
  int64_t v2410; // x2
  int32_t v2411; // w3
  System_String_o *v2412; // x4
  BattleSetupInfo_o *v2413; // x5
  FollowerInfo_o *v2414; // x6
  PartyListViewItem_o *v2415; // x7
  NpcServantEquipMaster_o *v2416; // x20
  int64_t v2417; // x2
  int32_t v2418; // w3
  System_String_o *v2419; // x4
  BattleSetupInfo_o *v2420; // x5
  FollowerInfo_o *v2421; // x6
  PartyListViewItem_o *v2422; // x7
  EventCampaignReleaseMaster_o *v2423; // x20
  int64_t v2424; // x2
  int32_t v2425; // w3
  System_String_o *v2426; // x4
  BattleSetupInfo_o *v2427; // x5
  FollowerInfo_o *v2428; // x6
  PartyListViewItem_o *v2429; // x7
  ServantMaterialFolderMaster_o *v2430; // x20
  int64_t v2431; // x2
  int32_t v2432; // w3
  System_String_o *v2433; // x4
  BattleSetupInfo_o *v2434; // x5
  FollowerInfo_o *v2435; // x6
  PartyListViewItem_o *v2436; // x7
  EventEquipSkillReleaseMaster_o *v2437; // x20
  int64_t v2438; // x2
  int32_t v2439; // w3
  System_String_o *v2440; // x4
  BattleSetupInfo_o *v2441; // x5
  FollowerInfo_o *v2442; // x6
  PartyListViewItem_o *v2443; // x7
  EventPointActivityMaster_o *v2444; // x20
  int64_t v2445; // x2
  int32_t v2446; // w3
  System_String_o *v2447; // x4
  BattleSetupInfo_o *v2448; // x5
  FollowerInfo_o *v2449; // x6
  PartyListViewItem_o *v2450; // x7
  FunctionCategoryMaster_o *v2451; // x20
  int64_t v2452; // x2
  int32_t v2453; // w3
  System_String_o *v2454; // x4
  BattleSetupInfo_o *v2455; // x5
  FollowerInfo_o *v2456; // x6
  PartyListViewItem_o *v2457; // x7
  QuestPickupMaster_o *v2458; // x20
  int64_t v2459; // x2
  int32_t v2460; // w3
  System_String_o *v2461; // x4
  BattleSetupInfo_o *v2462; // x5
  FollowerInfo_o *v2463; // x6
  PartyListViewItem_o *v2464; // x7
  EventUiMaster_o *v2465; // x20
  int64_t v2466; // x2
  int32_t v2467; // w3
  System_String_o *v2468; // x4
  BattleSetupInfo_o *v2469; // x5
  FollowerInfo_o *v2470; // x6
  PartyListViewItem_o *v2471; // x7
  EventUiReleaseMaster_o *v2472; // x20
  int64_t v2473; // x2
  int32_t v2474; // w3
  System_String_o *v2475; // x4
  BattleSetupInfo_o *v2476; // x5
  FollowerInfo_o *v2477; // x6
  PartyListViewItem_o *v2478; // x7
  EventUiValueMaster_o *v2479; // x20
  int64_t v2480; // x2
  int32_t v2481; // w3
  System_String_o *v2482; // x4
  BattleSetupInfo_o *v2483; // x5
  FollowerInfo_o *v2484; // x6
  PartyListViewItem_o *v2485; // x7
  EventConquestRewardMaster_o *v2486; // x20
  int64_t v2487; // x2
  int32_t v2488; // w3
  System_String_o *v2489; // x4
  BattleSetupInfo_o *v2490; // x5
  FollowerInfo_o *v2491; // x6
  PartyListViewItem_o *v2492; // x7
  NpcFollowerReleaseMaster_o *v2493; // x20
  int64_t v2494; // x2
  int32_t v2495; // w3
  System_String_o *v2496; // x4
  BattleSetupInfo_o *v2497; // x5
  FollowerInfo_o *v2498; // x6
  PartyListViewItem_o *v2499; // x7
  EventBonusFilterMaster_o *v2500; // x20
  int64_t v2501; // x2
  int32_t v2502; // w3
  System_String_o *v2503; // x4
  BattleSetupInfo_o *v2504; // x5
  FollowerInfo_o *v2505; // x6
  PartyListViewItem_o *v2506; // x7
  EventBonusFilterGroupInfoMaster_o *v2507; // x20
  int64_t v2508; // x2
  int32_t v2509; // w3
  System_String_o *v2510; // x4
  BattleSetupInfo_o *v2511; // x5
  FollowerInfo_o *v2512; // x6
  PartyListViewItem_o *v2513; // x7
  EventBonusFilterGroupMemberMaster_o *v2514; // x20
  int64_t v2515; // x2
  int32_t v2516; // w3
  System_String_o *v2517; // x4
  BattleSetupInfo_o *v2518; // x5
  FollowerInfo_o *v2519; // x6
  PartyListViewItem_o *v2520; // x7
  UserGachaExtraCountMaster_o *v2521; // x20
  int64_t v2522; // x2
  int32_t v2523; // w3
  System_String_o *v2524; // x4
  BattleSetupInfo_o *v2525; // x5
  FollowerInfo_o *v2526; // x6
  PartyListViewItem_o *v2527; // x7
  PrivilegeMaster_o *v2528; // x20
  int64_t v2529; // x2
  int32_t v2530; // w3
  System_String_o *v2531; // x4
  BattleSetupInfo_o *v2532; // x5
  FollowerInfo_o *v2533; // x6
  PartyListViewItem_o *v2534; // x7
  UserPrivilegeMaster_o *v2535; // x20
  int64_t v2536; // x2
  int32_t v2537; // w3
  System_String_o *v2538; // x4
  BattleSetupInfo_o *v2539; // x5
  FollowerInfo_o *v2540; // x6
  PartyListViewItem_o *v2541; // x7
  UserQuestRouteMaster_o *v2542; // x20
  int64_t v2543; // x2
  int32_t v2544; // w3
  System_String_o *v2545; // x4
  BattleSetupInfo_o *v2546; // x5
  FollowerInfo_o *v2547; // x6
  PartyListViewItem_o *v2548; // x7
  EventBossStatusUiMaster_o *v2549; // x20
  int64_t v2550; // x2
  int32_t v2551; // w3
  System_String_o *v2552; // x4
  BattleSetupInfo_o *v2553; // x5
  FollowerInfo_o *v2554; // x6
  PartyListViewItem_o *v2555; // x7
  CommonReleaseMaster_o *v2556; // x20
  int64_t v2557; // x2
  int32_t v2558; // w3
  System_String_o *v2559; // x4
  BattleSetupInfo_o *v2560; // x5
  FollowerInfo_o *v2561; // x6
  PartyListViewItem_o *v2562; // x7
  QuestSpotReleaseMaster_o *v2563; // x20
  int64_t v2564; // x2
  int32_t v2565; // w3
  System_String_o *v2566; // x4
  BattleSetupInfo_o *v2567; // x5
  FollowerInfo_o *v2568; // x6
  PartyListViewItem_o *v2569; // x7
  VoiceMaterialCondMaster_o *v2570; // x20
  int64_t v2571; // x2
  int32_t v2572; // w3
  System_String_o *v2573; // x4
  BattleSetupInfo_o *v2574; // x5
  FollowerInfo_o *v2575; // x6
  PartyListViewItem_o *v2576; // x7
  ClassRelationOverwriteMaster_o *v2577; // x20
  int64_t v2578; // x2
  int32_t v2579; // w3
  System_String_o *v2580; // x4
  BattleSetupInfo_o *v2581; // x5
  FollowerInfo_o *v2582; // x6
  PartyListViewItem_o *v2583; // x7
  EventGroupMaster_o *v2584; // x20
  int64_t v2585; // x2
  int32_t v2586; // w3
  System_String_o *v2587; // x4
  BattleSetupInfo_o *v2588; // x5
  FollowerInfo_o *v2589; // x6
  PartyListViewItem_o *v2590; // x7
  TotalBoxGachaMaster_o *v2591; // x20
  int64_t v2592; // x2
  int32_t v2593; // w3
  System_String_o *v2594; // x4
  BattleSetupInfo_o *v2595; // x5
  FollowerInfo_o *v2596; // x6
  PartyListViewItem_o *v2597; // x7
  ServantTreasureDeviceDamageMaster_o *v2598; // x20
  int64_t v2599; // x2
  int32_t v2600; // w3
  System_String_o *v2601; // x4
  BattleSetupInfo_o *v2602; // x5
  FollowerInfo_o *v2603; // x6
  PartyListViewItem_o *v2604; // x7
  UserEventServantFatigueMaster_o *v2605; // x20
  int64_t v2606; // x2
  int32_t v2607; // w3
  System_String_o *v2608; // x4
  BattleSetupInfo_o *v2609; // x5
  FollowerInfo_o *v2610; // x6
  PartyListViewItem_o *v2611; // x7
  EventRewardBgMaster_o *v2612; // x20
  int64_t v2613; // x2
  int32_t v2614; // w3
  System_String_o *v2615; // x4
  BattleSetupInfo_o *v2616; // x5
  FollowerInfo_o *v2617; // x6
  PartyListViewItem_o *v2618; // x7
  EventFatigueRecoveryMaster_o *v2619; // x20
  int64_t v2620; // x2
  int32_t v2621; // w3
  System_String_o *v2622; // x4
  BattleSetupInfo_o *v2623; // x5
  FollowerInfo_o *v2624; // x6
  PartyListViewItem_o *v2625; // x7
  EventBoostItemUsedMaster_o *v2626; // x20
  int64_t v2627; // x2
  int32_t v2628; // w3
  System_String_o *v2629; // x4
  BattleSetupInfo_o *v2630; // x5
  FollowerInfo_o *v2631; // x6
  PartyListViewItem_o *v2632; // x7
  StatusEffectPosOverwriteMaster_o *v2633; // x20
  int64_t v2634; // x2
  int32_t v2635; // w3
  System_String_o *v2636; // x4
  BattleSetupInfo_o *v2637; // x5
  FollowerInfo_o *v2638; // x6
  PartyListViewItem_o *v2639; // x7
  QuestPhaseDetailAddMaster_o *v2640; // x20
  int64_t v2641; // x2
  int32_t v2642; // w3
  System_String_o *v2643; // x4
  BattleSetupInfo_o *v2644; // x5
  FollowerInfo_o *v2645; // x6
  PartyListViewItem_o *v2646; // x7
  VoiceClosedMessageMaster_o *v2647; // x20
  int64_t v2648; // x2
  int32_t v2649; // w3
  System_String_o *v2650; // x4
  BattleSetupInfo_o *v2651; // x5
  FollowerInfo_o *v2652; // x6
  PartyListViewItem_o *v2653; // x7
  ReprintStageMaster_o *v2654; // x20
  int64_t v2655; // x2
  int32_t v2656; // w3
  System_String_o *v2657; // x4
  BattleSetupInfo_o *v2658; // x5
  FollowerInfo_o *v2659; // x6
  PartyListViewItem_o *v2660; // x7
  UserCombineExpMaster_o *v2661; // x20
  int64_t v2662; // x2
  int32_t v2663; // w3
  System_String_o *v2664; // x4
  BattleSetupInfo_o *v2665; // x5
  FollowerInfo_o *v2666; // x6
  PartyListViewItem_o *v2667; // x7
  EventBoardGameCellMaster_o *v2668; // x20
  int64_t v2669; // x2
  int32_t v2670; // w3
  System_String_o *v2671; // x4
  BattleSetupInfo_o *v2672; // x5
  FollowerInfo_o *v2673; // x6
  PartyListViewItem_o *v2674; // x7
  EventBoardGameTokenMaster_o *v2675; // x20
  int64_t v2676; // x2
  int32_t v2677; // w3
  System_String_o *v2678; // x4
  BattleSetupInfo_o *v2679; // x5
  FollowerInfo_o *v2680; // x6
  PartyListViewItem_o *v2681; // x7
  EventBoardGameTokenRewardMaster_o *v2682; // x20
  int64_t v2683; // x2
  int32_t v2684; // w3
  System_String_o *v2685; // x4
  BattleSetupInfo_o *v2686; // x5
  FollowerInfo_o *v2687; // x6
  PartyListViewItem_o *v2688; // x7
  UserEventBoardGameTokenMaster_o *v2689; // x20
  int64_t v2690; // x2
  int32_t v2691; // w3
  System_String_o *v2692; // x4
  BattleSetupInfo_o *v2693; // x5
  FollowerInfo_o *v2694; // x6
  PartyListViewItem_o *v2695; // x7
  ServantAnimationOverwriteMaster_o *v2696; // x20
  int64_t v2697; // x2
  int32_t v2698; // w3
  System_String_o *v2699; // x4
  BattleSetupInfo_o *v2700; // x5
  FollowerInfo_o *v2701; // x6
  PartyListViewItem_o *v2702; // x7
  OpeningMovieMaster_o *v2703; // x20
  int64_t v2704; // x2
  int32_t v2705; // w3
  System_String_o *v2706; // x4
  BattleSetupInfo_o *v2707; // x5
  FollowerInfo_o *v2708; // x6
  PartyListViewItem_o *v2709; // x7
  ServantLimitSpoilerProtectionMaster_o *v2710; // x20
  int64_t v2711; // x2
  int32_t v2712; // w3
  System_String_o *v2713; // x4
  BattleSetupInfo_o *v2714; // x5
  FollowerInfo_o *v2715; // x6
  PartyListViewItem_o *v2716; // x7
  PickupUserFollowerMaster_o *v2717; // x20
  int64_t v2718; // x2
  int32_t v2719; // w3
  System_String_o *v2720; // x4
  BattleSetupInfo_o *v2721; // x5
  FollowerInfo_o *v2722; // x6
  PartyListViewItem_o *v2723; // x7
  ServantCollectionMaster_o *v2724; // x20
  int64_t v2725; // x2
  int32_t v2726; // w3
  System_String_o *v2727; // x4
  BattleSetupInfo_o *v2728; // x5
  FollowerInfo_o *v2729; // x6
  PartyListViewItem_o *v2730; // x7
  GachaBehaviorMaster_o *v2731; // x20
  int64_t v2732; // x2
  int32_t v2733; // w3
  System_String_o *v2734; // x4
  BattleSetupInfo_o *v2735; // x5
  FollowerInfo_o *v2736; // x6
  PartyListViewItem_o *v2737; // x7
  EventQuestCooltimeMaster_o *v2738; // x20
  int64_t v2739; // x2
  int32_t v2740; // w3
  System_String_o *v2741; // x4
  BattleSetupInfo_o *v2742; // x5
  FollowerInfo_o *v2743; // x6
  PartyListViewItem_o *v2744; // x7
  UserEventQuestCooltimeMaster_o *v2745; // x20
  int64_t v2746; // x2
  int32_t v2747; // w3
  System_String_o *v2748; // x4
  BattleSetupInfo_o *v2749; // x5
  FollowerInfo_o *v2750; // x6
  PartyListViewItem_o *v2751; // x7
  BoostMaster_o *v2752; // x20
  int64_t v2753; // x2
  int32_t v2754; // w3
  System_String_o *v2755; // x4
  BattleSetupInfo_o *v2756; // x5
  FollowerInfo_o *v2757; // x6
  PartyListViewItem_o *v2758; // x7
  WarBoardMaster_o *v2759; // x20
  int64_t v2760; // x2
  int32_t v2761; // w3
  System_String_o *v2762; // x4
  BattleSetupInfo_o *v2763; // x5
  FollowerInfo_o *v2764; // x6
  PartyListViewItem_o *v2765; // x7
  WarBoardSquareMaster_o *v2766; // x20
  int64_t v2767; // x2
  int32_t v2768; // w3
  System_String_o *v2769; // x4
  BattleSetupInfo_o *v2770; // x5
  FollowerInfo_o *v2771; // x6
  PartyListViewItem_o *v2772; // x7
  WarBoardRoadMaster_o *v2773; // x20
  int64_t v2774; // x2
  int32_t v2775; // w3
  System_String_o *v2776; // x4
  BattleSetupInfo_o *v2777; // x5
  FollowerInfo_o *v2778; // x6
  PartyListViewItem_o *v2779; // x7
  WarBoardStageMaster_o *v2780; // x20
  int64_t v2781; // x2
  int32_t v2782; // w3
  System_String_o *v2783; // x4
  BattleSetupInfo_o *v2784; // x5
  FollowerInfo_o *v2785; // x6
  PartyListViewItem_o *v2786; // x7
  WarBoardActionPointMaster_o *v2787; // x20
  int64_t v2788; // x2
  int32_t v2789; // w3
  System_String_o *v2790; // x4
  BattleSetupInfo_o *v2791; // x5
  FollowerInfo_o *v2792; // x6
  PartyListViewItem_o *v2793; // x7
  WarBoardActionTrendMaster_o *v2794; // x20
  int64_t v2795; // x2
  int32_t v2796; // w3
  System_String_o *v2797; // x4
  BattleSetupInfo_o *v2798; // x5
  FollowerInfo_o *v2799; // x6
  PartyListViewItem_o *v2800; // x7
  WarBoardTacticalTrendMaster_o *v2801; // x20
  int64_t v2802; // x2
  int32_t v2803; // w3
  System_String_o *v2804; // x4
  BattleSetupInfo_o *v2805; // x5
  FollowerInfo_o *v2806; // x6
  PartyListViewItem_o *v2807; // x7
  WarBoardStageLayoutMaster_o *v2808; // x20
  int64_t v2809; // x2
  int32_t v2810; // w3
  System_String_o *v2811; // x4
  BattleSetupInfo_o *v2812; // x5
  FollowerInfo_o *v2813; // x6
  PartyListViewItem_o *v2814; // x7
  WarBoardStageNpcMaster_o *v2815; // x20
  int64_t v2816; // x2
  int32_t v2817; // w3
  System_String_o *v2818; // x4
  BattleSetupInfo_o *v2819; // x5
  FollowerInfo_o *v2820; // x6
  PartyListViewItem_o *v2821; // x7
  WarBoardStageWallMaster_o *v2822; // x20
  int64_t v2823; // x2
  int32_t v2824; // w3
  System_String_o *v2825; // x4
  BattleSetupInfo_o *v2826; // x5
  FollowerInfo_o *v2827; // x6
  PartyListViewItem_o *v2828; // x7
  WarBoardAIMaster_o *v2829; // x20
  int64_t v2830; // x2
  int32_t v2831; // w3
  System_String_o *v2832; // x4
  BattleSetupInfo_o *v2833; // x5
  FollowerInfo_o *v2834; // x6
  PartyListViewItem_o *v2835; // x7
  WarBoardRatingBaseMaster_o *v2836; // x20
  int64_t v2837; // x2
  int32_t v2838; // w3
  System_String_o *v2839; // x4
  BattleSetupInfo_o *v2840; // x5
  FollowerInfo_o *v2841; // x6
  PartyListViewItem_o *v2842; // x7
  WarBoardRatingOffsetMaster_o *v2843; // x20
  int64_t v2844; // x2
  int32_t v2845; // w3
  System_String_o *v2846; // x4
  BattleSetupInfo_o *v2847; // x5
  FollowerInfo_o *v2848; // x6
  PartyListViewItem_o *v2849; // x7
  WarBoardItemMaster_o *v2850; // x20
  int64_t v2851; // x2
  int32_t v2852; // w3
  System_String_o *v2853; // x4
  BattleSetupInfo_o *v2854; // x5
  FollowerInfo_o *v2855; // x6
  PartyListViewItem_o *v2856; // x7
  WarBoardTreasureMaster_o *v2857; // x20
  int64_t v2858; // x2
  int32_t v2859; // w3
  System_String_o *v2860; // x4
  BattleSetupInfo_o *v2861; // x5
  FollowerInfo_o *v2862; // x6
  PartyListViewItem_o *v2863; // x7
  WarBoardQuestMaster_o *v2864; // x20
  int64_t v2865; // x2
  int32_t v2866; // w3
  System_String_o *v2867; // x4
  BattleSetupInfo_o *v2868; // x5
  FollowerInfo_o *v2869; // x6
  PartyListViewItem_o *v2870; // x7
  WarBoardDataMaster_o *v2871; // x20
  int64_t v2872; // x2
  int32_t v2873; // w3
  System_String_o *v2874; // x4
  BattleSetupInfo_o *v2875; // x5
  FollowerInfo_o *v2876; // x6
  PartyListViewItem_o *v2877; // x7
  WarBoardIndividualityClassMaster_o *v2878; // x20
  int64_t v2879; // x2
  int32_t v2880; // w3
  System_String_o *v2881; // x4
  BattleSetupInfo_o *v2882; // x5
  FollowerInfo_o *v2883; // x6
  PartyListViewItem_o *v2884; // x7
  WarBoardActionTrendConditionMaster_o *v2885; // x20
  int64_t v2886; // x2
  int32_t v2887; // w3
  System_String_o *v2888; // x4
  BattleSetupInfo_o *v2889; // x5
  FollowerInfo_o *v2890; // x6
  PartyListViewItem_o *v2891; // x7
  WarBoardActionPointClassMaster_o *v2892; // x20
  int64_t v2893; // x2
  int32_t v2894; // w3
  System_String_o *v2895; // x4
  BattleSetupInfo_o *v2896; // x5
  FollowerInfo_o *v2897; // x6
  PartyListViewItem_o *v2898; // x7
  EventPanelMapMaster_o *v2899; // x20
  int64_t v2900; // x2
  int32_t v2901; // w3
  System_String_o *v2902; // x4
  BattleSetupInfo_o *v2903; // x5
  FollowerInfo_o *v2904; // x6
  PartyListViewItem_o *v2905; // x7
  EventPanelMapDetailMaster_o *v2906; // x20
  int64_t v2907; // x2
  int32_t v2908; // w3
  System_String_o *v2909; // x4
  BattleSetupInfo_o *v2910; // x5
  FollowerInfo_o *v2911; // x6
  PartyListViewItem_o *v2912; // x7
  EventPanelSpotMaster_o *v2913; // x20
  int64_t v2914; // x2
  int32_t v2915; // w3
  System_String_o *v2916; // x4
  BattleSetupInfo_o *v2917; // x5
  FollowerInfo_o *v2918; // x6
  PartyListViewItem_o *v2919; // x7
  EventPanelScanMaster_o *v2920; // x20
  int64_t v2921; // x2
  int32_t v2922; // w3
  System_String_o *v2923; // x4
  BattleSetupInfo_o *v2924; // x5
  FollowerInfo_o *v2925; // x6
  PartyListViewItem_o *v2926; // x7
  CommonConsumeMaster_o *v2927; // x20
  int64_t v2928; // x2
  int32_t v2929; // w3
  System_String_o *v2930; // x4
  BattleSetupInfo_o *v2931; // x5
  FollowerInfo_o *v2932; // x6
  PartyListViewItem_o *v2933; // x7
  UserEventMapMaster_o *v2934; // x20
  int64_t v2935; // x2
  int32_t v2936; // w3
  System_String_o *v2937; // x4
  BattleSetupInfo_o *v2938; // x5
  FollowerInfo_o *v2939; // x6
  PartyListViewItem_o *v2940; // x7
  UserEventSpotMaster_o *v2941; // x20
  int64_t v2942; // x2
  int32_t v2943; // w3
  System_String_o *v2944; // x4
  BattleSetupInfo_o *v2945; // x5
  FollowerInfo_o *v2946; // x6
  PartyListViewItem_o *v2947; // x7
  WarGroupMaster_o *v2948; // x20
  int64_t v2949; // x2
  int32_t v2950; // w3
  System_String_o *v2951; // x4
  BattleSetupInfo_o *v2952; // x5
  FollowerInfo_o *v2953; // x6
  PartyListViewItem_o *v2954; // x7
  ServantLimitImageMaster_o *v2955; // x20
  int64_t v2956; // x2
  int32_t v2957; // w3
  System_String_o *v2958; // x4
  BattleSetupInfo_o *v2959; // x5
  FollowerInfo_o *v2960; // x6
  PartyListViewItem_o *v2961; // x7
  FriendshipQuestDialogInfoMaster_o *v2962; // x20
  int64_t v2963; // x2
  int32_t v2964; // w3
  System_String_o *v2965; // x4
  BattleSetupInfo_o *v2966; // x5
  FollowerInfo_o *v2967; // x6
  PartyListViewItem_o *v2968; // x7
  QuestRestrictionInfoMaster_o *v2969; // x20
  int64_t v2970; // x2
  int32_t v2971; // w3
  System_String_o *v2972; // x4
  BattleSetupInfo_o *v2973; // x5
  FollowerInfo_o *v2974; // x6
  PartyListViewItem_o *v2975; // x7
  AssistMaster_o *v2976; // x20
  int64_t v2977; // x2
  int32_t v2978; // w3
  System_String_o *v2979; // x4
  BattleSetupInfo_o *v2980; // x5
  FollowerInfo_o *v2981; // x6
  PartyListViewItem_o *v2982; // x7
  WarBoardEffectMaster_o *v2983; // x20
  int64_t v2984; // x2
  int32_t v2985; // w3
  System_String_o *v2986; // x4
  BattleSetupInfo_o *v2987; // x5
  FollowerInfo_o *v2988; // x6
  PartyListViewItem_o *v2989; // x7
  WarBoardOnboardSkillMaster_o *v2990; // x20
  int64_t v2991; // x2
  int32_t v2992; // w3
  System_String_o *v2993; // x4
  BattleSetupInfo_o *v2994; // x5
  FollowerInfo_o *v2995; // x6
  PartyListViewItem_o *v2996; // x7
  BeforeBirthDayMaster_o *v2997; // x20
  int64_t v2998; // x2
  int32_t v2999; // w3
  System_String_o *v3000; // x4
  BattleSetupInfo_o *v3001; // x5
  FollowerInfo_o *v3002; // x6
  PartyListViewItem_o *v3003; // x7
  LoginQuestMaster_o *v3004; // x20
  int64_t v3005; // x2
  int32_t v3006; // w3
  System_String_o *v3007; // x4
  BattleSetupInfo_o *v3008; // x5
  FollowerInfo_o *v3009; // x6
  PartyListViewItem_o *v3010; // x7
  EventCombineCostumeMaster_o *v3011; // x20
  int64_t v3012; // x2
  int32_t v3013; // w3
  System_String_o *v3014; // x4
  BattleSetupInfo_o *v3015; // x5
  FollowerInfo_o *v3016; // x6
  PartyListViewItem_o *v3017; // x7
  WarBoardStagePieceDetailMaster_o *v3018; // x20
  int64_t v3019; // x2
  int32_t v3020; // w3
  System_String_o *v3021; // x4
  BattleSetupInfo_o *v3022; // x5
  FollowerInfo_o *v3023; // x6
  PartyListViewItem_o *v3024; // x7
  ServantTreasureDeviceAddMaster_o *v3025; // x20
  int64_t v3026; // x2
  int32_t v3027; // w3
  System_String_o *v3028; // x4
  BattleSetupInfo_o *v3029; // x5
  FollowerInfo_o *v3030; // x6
  PartyListViewItem_o *v3031; // x7
  SkillAddMaster_o *v3032; // x20
  int64_t v3033; // x2
  int32_t v3034; // w3
  System_String_o *v3035; // x4
  BattleSetupInfo_o *v3036; // x5
  FollowerInfo_o *v3037; // x6
  PartyListViewItem_o *v3038; // x7
  ServantLvDetailMaster_o *v3039; // x20
  int64_t v3040; // x2
  int32_t v3041; // w3
  System_String_o *v3042; // x4
  BattleSetupInfo_o *v3043; // x5
  FollowerInfo_o *v3044; // x6
  PartyListViewItem_o *v3045; // x7
  GachaAppendMaster_o *v3046; // x20
  int64_t v3047; // x2
  int32_t v3048; // w3
  System_String_o *v3049; // x4
  BattleSetupInfo_o *v3050; // x5
  FollowerInfo_o *v3051; // x6
  PartyListViewItem_o *v3052; // x7
  UserGachaDrawLogMaster_o *v3053; // x20
  int64_t v3054; // x2
  int32_t v3055; // w3
  System_String_o *v3056; // x4
  BattleSetupInfo_o *v3057; // x5
  FollowerInfo_o *v3058; // x6
  PartyListViewItem_o *v3059; // x7
  ServantAppendPassiveSkillMaster_o *v3060; // x20
  int64_t v3061; // x2
  int32_t v3062; // w3
  System_String_o *v3063; // x4
  BattleSetupInfo_o *v3064; // x5
  FollowerInfo_o *v3065; // x6
  PartyListViewItem_o *v3066; // x7
  UserServantAppendPassiveSkillMaster_o *v3067; // x20
  int64_t v3068; // x2
  int32_t v3069; // w3
  System_String_o *v3070; // x4
  BattleSetupInfo_o *v3071; // x5
  FollowerInfo_o *v3072; // x6
  PartyListViewItem_o *v3073; // x7
  UserServantAppendPassiveSkillLvMaster_o *v3074; // x20
  int64_t v3075; // x2
  int32_t v3076; // w3
  System_String_o *v3077; // x4
  BattleSetupInfo_o *v3078; // x5
  FollowerInfo_o *v3079; // x6
  PartyListViewItem_o *v3080; // x7
  SvtAppendPassiveSkillUnlockMaster_o *v3081; // x20
  int64_t v3082; // x2
  int32_t v3083; // w3
  System_String_o *v3084; // x4
  BattleSetupInfo_o *v3085; // x5
  FollowerInfo_o *v3086; // x6
  PartyListViewItem_o *v3087; // x7
  CombineAppendPassiveSkillMaster_o *v3088; // x20
  int64_t v3089; // x2
  int32_t v3090; // w3
  System_String_o *v3091; // x4
  BattleSetupInfo_o *v3092; // x5
  FollowerInfo_o *v3093; // x6
  PartyListViewItem_o *v3094; // x7
  SvtCoinMaster_o *v3095; // x20
  int64_t v3096; // x2
  int32_t v3097; // w3
  System_String_o *v3098; // x4
  BattleSetupInfo_o *v3099; // x5
  FollowerInfo_o *v3100; // x6
  PartyListViewItem_o *v3101; // x7
  UserSvtCoinMaster_o *v3102; // x20
  int64_t v3103; // x2
  int32_t v3104; // w3
  System_String_o *v3105; // x4
  BattleSetupInfo_o *v3106; // x5
  FollowerInfo_o *v3107; // x6
  PartyListViewItem_o *v3108; // x7
  ServantAddMaster_o *v3109; // x20
  int64_t v3110; // x2
  int32_t v3111; // w3
  System_String_o *v3112; // x4
  BattleSetupInfo_o *v3113; // x5
  FollowerInfo_o *v3114; // x6
  PartyListViewItem_o *v3115; // x7
  TreasureBoxMaster_o *v3116; // x20
  int64_t v3117; // x2
  int32_t v3118; // w3
  System_String_o *v3119; // x4
  BattleSetupInfo_o *v3120; // x5
  FollowerInfo_o *v3121; // x6
  PartyListViewItem_o *v3122; // x7
  TreasureBoxGiftMaster_o *v3123; // x20
  int64_t v3124; // x2
  int32_t v3125; // w3
  System_String_o *v3126; // x4
  BattleSetupInfo_o *v3127; // x5
  FollowerInfo_o *v3128; // x6
  PartyListViewItem_o *v3129; // x7
  TreasureBoxTalkMaster_o *v3130; // x20
  int64_t v3131; // x2
  int32_t v3132; // w3
  System_String_o *v3133; // x4
  BattleSetupInfo_o *v3134; // x5
  FollowerInfo_o *v3135; // x6
  PartyListViewItem_o *v3136; // x7
  UserEventExpeditionMaster_o *v3137; // x20
  int64_t v3138; // x2
  int32_t v3139; // w3
  System_String_o *v3140; // x4
  BattleSetupInfo_o *v3141; // x5
  FollowerInfo_o *v3142; // x6
  PartyListViewItem_o *v3143; // x7
  EventExpeditionMaster_o *v3144; // x20
  int64_t v3145; // x2
  int32_t v3146; // w3
  System_String_o *v3147; // x4
  BattleSetupInfo_o *v3148; // x5
  FollowerInfo_o *v3149; // x6
  PartyListViewItem_o *v3150; // x7
  EventExpeditionPieceMaster_o *v3151; // x20
  int64_t v3152; // x2
  int32_t v3153; // w3
  System_String_o *v3154; // x4
  BattleSetupInfo_o *v3155; // x5
  FollowerInfo_o *v3156; // x6
  PartyListViewItem_o *v3157; // x7
  EventRecipeMaster_o *v3158; // x20
  int64_t v3159; // x2
  int32_t v3160; // w3
  System_String_o *v3161; // x4
  BattleSetupInfo_o *v3162; // x5
  FollowerInfo_o *v3163; // x6
  PartyListViewItem_o *v3164; // x7
  EventRecipeGiftMaster_o *v3165; // x20
  int64_t v3166; // x2
  int32_t v3167; // w3
  System_String_o *v3168; // x4
  BattleSetupInfo_o *v3169; // x5
  FollowerInfo_o *v3170; // x6
  PartyListViewItem_o *v3171; // x7
  UserEventFortificationMaster_o *v3172; // x20
  int64_t v3173; // x2
  int32_t v3174; // w3
  System_String_o *v3175; // x4
  BattleSetupInfo_o *v3176; // x5
  FollowerInfo_o *v3177; // x6
  PartyListViewItem_o *v3178; // x7
  EventFortificationMaster_o *v3179; // x20
  int64_t v3180; // x2
  int32_t v3181; // w3
  System_String_o *v3182; // x4
  BattleSetupInfo_o *v3183; // x5
  FollowerInfo_o *v3184; // x6
  PartyListViewItem_o *v3185; // x7
  EventFortificationDetailMaster_o *v3186; // x20
  int64_t v3187; // x2
  int32_t v3188; // w3
  System_String_o *v3189; // x4
  BattleSetupInfo_o *v3190; // x5
  FollowerInfo_o *v3191; // x6
  PartyListViewItem_o *v3192; // x7
  EventFortificationSvtMaster_o *v3193; // x20
  int64_t v3194; // x2
  int32_t v3195; // w3
  System_String_o *v3196; // x4
  BattleSetupInfo_o *v3197; // x5
  FollowerInfo_o *v3198; // x6
  PartyListViewItem_o *v3199; // x7
  UserServantVoicePlayedMaster_o *v3200; // x20
  int64_t v3201; // x2
  int32_t v3202; // w3
  System_String_o *v3203; // x4
  BattleSetupInfo_o *v3204; // x5
  FollowerInfo_o *v3205; // x6
  PartyListViewItem_o *v3206; // x7
  UpdateProfileDialogInfoMaster_o *v3207; // x20
  int64_t v3208; // x2
  int32_t v3209; // w3
  System_String_o *v3210; // x4
  BattleSetupInfo_o *v3211; // x5
  FollowerInfo_o *v3212; // x6
  PartyListViewItem_o *v3213; // x7
  SvtMaterialTdMaster_o *v3214; // x20
  int64_t v3215; // x2
  int32_t v3216; // w3
  System_String_o *v3217; // x4
  BattleSetupInfo_o *v3218; // x5
  FollowerInfo_o *v3219; // x6
  PartyListViewItem_o *v3220; // x7
  BattleMasterImageMaster_o *v3221; // x20
  int64_t v3222; // x2
  int32_t v3223; // w3
  System_String_o *v3224; // x4
  BattleSetupInfo_o *v3225; // x5
  FollowerInfo_o *v3226; // x6
  PartyListViewItem_o *v3227; // x7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v3228; // x20
  int64_t v3229; // x2
  int32_t v3230; // w3
  System_String_o *v3231; // x4
  BattleSetupInfo_o *v3232; // x5
  FollowerInfo_o *v3233; // x6
  PartyListViewItem_o *v3234; // x7
  UserEventRandomMissionMaster_o *v3235; // x20
  int64_t v3236; // x2
  int32_t v3237; // w3
  System_String_o *v3238; // x4
  BattleSetupInfo_o *v3239; // x5
  FollowerInfo_o *v3240; // x6
  PartyListViewItem_o *v3241; // x7
  EventProgressValueMaster_o *v3242; // x20
  int64_t v3243; // x2
  int32_t v3244; // w3
  System_String_o *v3245; // x4
  BattleSetupInfo_o *v3246; // x5
  FollowerInfo_o *v3247; // x6
  PartyListViewItem_o *v3248; // x7
  SvtMultiPortraitMaster_o *v3249; // x20
  int64_t v3250; // x2
  int32_t v3251; // w3
  System_String_o *v3252; // x4
  BattleSetupInfo_o *v3253; // x5
  FollowerInfo_o *v3254; // x6
  PartyListViewItem_o *v3255; // x7
  EventRandomMissionMaster_o *v3256; // x20
  int64_t v3257; // x2
  int32_t v3258; // w3
  System_String_o *v3259; // x4
  BattleSetupInfo_o *v3260; // x5
  FollowerInfo_o *v3261; // x6
  PartyListViewItem_o *v3262; // x7
  UserGachaHistoryMaster_o *v3263; // x20
  int64_t v3264; // x2
  int32_t v3265; // w3
  System_String_o *v3266; // x4
  BattleSetupInfo_o *v3267; // x5
  FollowerInfo_o *v3268; // x6
  PartyListViewItem_o *v3269; // x7
  UserCoinRoomMaster_o *v3270; // x20
  int64_t v3271; // x2
  int32_t v3272; // w3
  System_String_o *v3273; // x4
  BattleSetupInfo_o *v3274; // x5
  FollowerInfo_o *v3275; // x6
  PartyListViewItem_o *v3276; // x7
  EventBuddyPointMaster_o *v3277; // x20
  int64_t v3278; // x2
  int32_t v3279; // w3
  System_String_o *v3280; // x4
  BattleSetupInfo_o *v3281; // x5
  FollowerInfo_o *v3282; // x6
  PartyListViewItem_o *v3283; // x7
  EventServantPointRankMaster_o *v3284; // x20
  int64_t v3285; // x2
  int32_t v3286; // w3
  System_String_o *v3287; // x4
  BattleSetupInfo_o *v3288; // x5
  FollowerInfo_o *v3289; // x6
  PartyListViewItem_o *v3290; // x7
  UserEventServantPointMaster_o *v3291; // x20
  int64_t v3292; // x2
  int32_t v3293; // w3
  System_String_o *v3294; // x4
  BattleSetupInfo_o *v3295; // x5
  FollowerInfo_o *v3296; // x6
  PartyListViewItem_o *v3297; // x7
  FieldMotionMaster_o *v3298; // x20
  int64_t v3299; // x2
  int32_t v3300; // w3
  System_String_o *v3301; // x4
  BattleSetupInfo_o *v3302; // x5
  FollowerInfo_o *v3303; // x6
  PartyListViewItem_o *v3304; // x7
  UserDeleteReservationMaster_o *v3305; // x20
  int64_t v3306; // x2
  int32_t v3307; // w3
  System_String_o *v3308; // x4
  BattleSetupInfo_o *v3309; // x5
  FollowerInfo_o *v3310; // x6
  PartyListViewItem_o *v3311; // x7
  ServantScriptMultipleMaster_o *v3312; // x20
  int64_t v3313; // x2
  int32_t v3314; // w3
  System_String_o *v3315; // x4
  BattleSetupInfo_o *v3316; // x5
  FollowerInfo_o *v3317; // x6
  PartyListViewItem_o *v3318; // x7
  EquipAddMaster_o *v3319; // x20
  int64_t v3320; // x2
  int32_t v3321; // w3
  System_String_o *v3322; // x4
  BattleSetupInfo_o *v3323; // x5
  FollowerInfo_o *v3324; // x6
  PartyListViewItem_o *v3325; // x7
  QuestReleaseOverwriteMaster_o *v3326; // x20
  int64_t v3327; // x2
  int32_t v3328; // w3
  System_String_o *v3329; // x4
  BattleSetupInfo_o *v3330; // x5
  FollowerInfo_o *v3331; // x6
  PartyListViewItem_o *v3332; // x7
  UserEventAlloutBattleMaster_o *v3333; // x20
  int64_t v3334; // x2
  int32_t v3335; // w3
  System_String_o *v3336; // x4
  BattleSetupInfo_o *v3337; // x5
  FollowerInfo_o *v3338; // x6
  PartyListViewItem_o *v3339; // x7
  QuestScriptMaterialNextMaster_o *v3340; // x20
  int64_t v3341; // x2
  int32_t v3342; // w3
  System_String_o *v3343; // x4
  BattleSetupInfo_o *v3344; // x5
  FollowerInfo_o *v3345; // x6
  PartyListViewItem_o *v3346; // x7
  EventDiggingMaster_o *v3347; // x20
  int64_t v3348; // x2
  int32_t v3349; // w3
  System_String_o *v3350; // x4
  BattleSetupInfo_o *v3351; // x5
  FollowerInfo_o *v3352; // x6
  PartyListViewItem_o *v3353; // x7
  EventDiggingBlockMaster_o *v3354; // x20
  int64_t v3355; // x2
  int32_t v3356; // w3
  System_String_o *v3357; // x4
  BattleSetupInfo_o *v3358; // x5
  FollowerInfo_o *v3359; // x6
  PartyListViewItem_o *v3360; // x7
  EventDiggingRewardMaster_o *v3361; // x20
  int64_t v3362; // x2
  int32_t v3363; // w3
  System_String_o *v3364; // x4
  BattleSetupInfo_o *v3365; // x5
  FollowerInfo_o *v3366; // x6
  PartyListViewItem_o *v3367; // x7
  UserEventDiggingMaster_o *v3368; // x20
  int64_t v3369; // x2
  int32_t v3370; // w3
  System_String_o *v3371; // x4
  BattleSetupInfo_o *v3372; // x5
  FollowerInfo_o *v3373; // x6
  PartyListViewItem_o *v3374; // x7
  BattleMessageMaster_o *v3375; // x20
  int64_t v3376; // x2
  int32_t v3377; // w3
  System_String_o *v3378; // x4
  BattleSetupInfo_o *v3379; // x5
  FollowerInfo_o *v3380; // x6
  PartyListViewItem_o *v3381; // x7
  BattleMessageGroupMaster_o *v3382; // x20
  int64_t v3383; // x2
  int32_t v3384; // w3
  System_String_o *v3385; // x4
  BattleSetupInfo_o *v3386; // x5
  FollowerInfo_o *v3387; // x6
  PartyListViewItem_o *v3388; // x7
  UserNpcSvtRecordMaster_o *v3389; // x20
  int64_t v3390; // x2
  int32_t v3391; // w3
  System_String_o *v3392; // x4
  BattleSetupInfo_o *v3393; // x5
  FollowerInfo_o *v3394; // x6
  PartyListViewItem_o *v3395; // x7
  BuffTypeDetailMaster_o *v3396; // x20
  int64_t v3397; // x2
  int32_t v3398; // w3
  System_String_o *v3399; // x4
  BattleSetupInfo_o *v3400; // x5
  FollowerInfo_o *v3401; // x6
  PartyListViewItem_o *v3402; // x7
  WarBoardMessageMaster_o *v3403; // x20
  int64_t v3404; // x2
  int32_t v3405; // w3
  System_String_o *v3406; // x4
  BattleSetupInfo_o *v3407; // x5
  FollowerInfo_o *v3408; // x6
  PartyListViewItem_o *v3409; // x7
  WarBoardPartySkillMaster_o *v3410; // x20
  int64_t v3411; // x2
  int32_t v3412; // w3
  System_String_o *v3413; // x4
  BattleSetupInfo_o *v3414; // x5
  FollowerInfo_o *v3415; // x6
  PartyListViewItem_o *v3416; // x7
  WarBoardMessageScriptMaster_o *v3417; // x20
  int64_t v3418; // x2
  int32_t v3419; // w3
  System_String_o *v3420; // x4
  BattleSetupInfo_o *v3421; // x5
  FollowerInfo_o *v3422; // x6
  PartyListViewItem_o *v3423; // x7
  WarQuestSelectionMaster_o *v3424; // x20
  int64_t v3425; // x2
  int32_t v3426; // w3
  System_String_o *v3427; // x4
  BattleSetupInfo_o *v3428; // x5
  FollowerInfo_o *v3429; // x6
  PartyListViewItem_o *v3430; // x7
  WarBoardStageDetailMaster_o *v3431; // x20
  int64_t v3432; // x2
  int32_t v3433; // w3
  System_String_o *v3434; // x4
  BattleSetupInfo_o *v3435; // x5
  FollowerInfo_o *v3436; // x6
  PartyListViewItem_o *v3437; // x7
  QuestScriptMaterialOverwriteMaster_o *v3438; // x20
  int64_t v3439; // x2
  int32_t v3440; // w3
  System_String_o *v3441; // x4
  BattleSetupInfo_o *v3442; // x5
  FollowerInfo_o *v3443; // x6
  PartyListViewItem_o *v3444; // x7
  QuestScriptBranchMaterialMaster_o *v3445; // x20
  int64_t v3446; // x2
  int32_t v3447; // w3
  System_String_o *v3448; // x4
  BattleSetupInfo_o *v3449; // x5
  FollowerInfo_o *v3450; // x6
  PartyListViewItem_o *v3451; // x7
  AdCheckPointMaster_o *v3452; // x20
  int64_t v3453; // x2
  int32_t v3454; // w3
  System_String_o *v3455; // x4
  BattleSetupInfo_o *v3456; // x5
  FollowerInfo_o *v3457; // x6
  PartyListViewItem_o *v3458; // x7
  GiftDetailMaster_o *v3459; // x20
  int64_t v3460; // x2
  int32_t v3461; // w3
  System_String_o *v3462; // x4
  BattleSetupInfo_o *v3463; // x5
  FollowerInfo_o *v3464; // x6
  PartyListViewItem_o *v3465; // x7
  CombineLimitGiftMaster_o *v3466; // x20
  int64_t v3467; // x2
  int32_t v3468; // w3
  System_String_o *v3469; // x4
  BattleSetupInfo_o *v3470; // x5
  FollowerInfo_o *v3471; // x6
  PartyListViewItem_o *v3472; // x7
  EventCooltimeRewardMaster_o *v3473; // x20
  int64_t v3474; // x2
  int32_t v3475; // w3
  System_String_o *v3476; // x4
  BattleSetupInfo_o *v3477; // x5
  FollowerInfo_o *v3478; // x6
  PartyListViewItem_o *v3479; // x7
  UserEventCooltimeRewardMaster_o *v3480; // x20
  int64_t v3481; // x2
  int32_t v3482; // w3
  System_String_o *v3483; // x4
  BattleSetupInfo_o *v3484; // x5
  FollowerInfo_o *v3485; // x6
  PartyListViewItem_o *v3486; // x7
  ClassBoardBaseMaster_o *v3487; // x20
  int64_t v3488; // x2
  int32_t v3489; // w3
  System_String_o *v3490; // x4
  BattleSetupInfo_o *v3491; // x5
  FollowerInfo_o *v3492; // x6
  PartyListViewItem_o *v3493; // x7
  ClassBoardLockMaster_o *v3494; // x20
  int64_t v3495; // x2
  int32_t v3496; // w3
  System_String_o *v3497; // x4
  BattleSetupInfo_o *v3498; // x5
  FollowerInfo_o *v3499; // x6
  PartyListViewItem_o *v3500; // x7
  ClassBoardSquareMaster_o *v3501; // x20
  int64_t v3502; // x2
  int32_t v3503; // w3
  System_String_o *v3504; // x4
  BattleSetupInfo_o *v3505; // x5
  FollowerInfo_o *v3506; // x6
  PartyListViewItem_o *v3507; // x7
  ClassBoardLineMaster_o *v3508; // x20
  int64_t v3509; // x2
  int32_t v3510; // w3
  System_String_o *v3511; // x4
  BattleSetupInfo_o *v3512; // x5
  FollowerInfo_o *v3513; // x6
  PartyListViewItem_o *v3514; // x7
  UserClassBoardSquareMaster_o *v3515; // x20
  int64_t v3516; // x2
  int32_t v3517; // w3
  System_String_o *v3518; // x4
  BattleSetupInfo_o *v3519; // x5
  FollowerInfo_o *v3520; // x6
  PartyListViewItem_o *v3521; // x7
  ServantCardAddMaster_o *v3522; // x20
  int64_t v3523; // x2
  int32_t v3524; // w3
  System_String_o *v3525; // x4
  BattleSetupInfo_o *v3526; // x5
  FollowerInfo_o *v3527; // x6
  PartyListViewItem_o *v3528; // x7
  MapLayerMaster_o *v3529; // x20
  int64_t v3530; // x2
  int32_t v3531; // w3
  System_String_o *v3532; // x4
  BattleSetupInfo_o *v3533; // x5
  FollowerInfo_o *v3534; // x6
  PartyListViewItem_o *v3535; // x7
  SpotLayerMaster_o *v3536; // x20
  int64_t v3537; // x2
  int32_t v3538; // w3
  System_String_o *v3539; // x4
  BattleSetupInfo_o *v3540; // x5
  FollowerInfo_o *v3541; // x6
  PartyListViewItem_o *v3542; // x7
  MapGimmickLayerMaster_o *v3543; // x20
  int64_t v3544; // x2
  int32_t v3545; // w3
  System_String_o *v3546; // x4
  BattleSetupInfo_o *v3547; // x5
  FollowerInfo_o *v3548; // x6
  PartyListViewItem_o *v3549; // x7
  EventDataLostBattleMaster_o *v3550; // x20
  int64_t v3551; // x2
  int32_t v3552; // w3
  System_String_o *v3553; // x4
  BattleSetupInfo_o *v3554; // x5
  FollowerInfo_o *v3555; // x6
  PartyListViewItem_o *v3556; // x7
  EventDataLostBattleResetMaster_o *v3557; // x20
  int64_t v3558; // x2
  int32_t v3559; // w3
  System_String_o *v3560; // x4
  BattleSetupInfo_o *v3561; // x5
  FollowerInfo_o *v3562; // x6
  PartyListViewItem_o *v3563; // x7
  UserEventDataLostMaster_o *v3564; // x20
  int64_t v3565; // x2
  int32_t v3566; // w3
  System_String_o *v3567; // x4
  BattleSetupInfo_o *v3568; // x5
  FollowerInfo_o *v3569; // x6
  PartyListViewItem_o *v3570; // x7
  QuestHintMaster_o *v3571; // x20
  int64_t v3572; // x2
  int32_t v3573; // w3
  System_String_o *v3574; // x4
  BattleSetupInfo_o *v3575; // x5
  FollowerInfo_o *v3576; // x6
  PartyListViewItem_o *v3577; // x7
  FuncTypeDetailMaster_o *v3578; // x20
  int64_t v3579; // x2
  int32_t v3580; // w3
  System_String_o *v3581; // x4
  BattleSetupInfo_o *v3582; // x5
  FollowerInfo_o *v3583; // x6
  PartyListViewItem_o *v3584; // x7
  BuffConvertMaster_o *v3585; // x20
  int64_t v3586; // x2
  int32_t v3587; // w3
  System_String_o *v3588; // x4
  BattleSetupInfo_o *v3589; // x5
  FollowerInfo_o *v3590; // x6
  PartyListViewItem_o *v3591; // x7
  SkillGroupMaster_o *v3592; // x20
  int64_t v3593; // x2
  int32_t v3594; // w3
  System_String_o *v3595; // x4
  BattleSetupInfo_o *v3596; // x5
  FollowerInfo_o *v3597; // x6
  PartyListViewItem_o *v3598; // x7
  SkillGroupOverwriteMaster_o *v3599; // x20
  int64_t v3600; // x2
  int32_t v3601; // w3
  System_String_o *v3602; // x4
  BattleSetupInfo_o *v3603; // x5
  FollowerInfo_o *v3604; // x6
  PartyListViewItem_o *v3605; // x7
  SkillIndividualityMaster_o *v3606; // x20
  int64_t v3607; // x2
  int32_t v3608; // w3
  System_String_o *v3609; // x4
  BattleSetupInfo_o *v3610; // x5
  FollowerInfo_o *v3611; // x6
  PartyListViewItem_o *v3612; // x7
  RestrictionBaseMaster_o *v3613; // x20
  int64_t v3614; // x2
  int32_t v3615; // w3
  System_String_o *v3616; // x4
  BattleSetupInfo_o *v3617; // x5
  FollowerInfo_o *v3618; // x6
  PartyListViewItem_o *v3619; // x7
  RestrictionSlotMaster_o *v3620; // x20
  int64_t v3621; // x2
  int32_t v3622; // w3
  System_String_o *v3623; // x4
  BattleSetupInfo_o *v3624; // x5
  FollowerInfo_o *v3625; // x6
  PartyListViewItem_o *v3626; // x7
  RestrictionSlotDetailMaster_o *v3627; // x20
  int64_t v3628; // x2
  int32_t v3629; // w3
  System_String_o *v3630; // x4
  BattleSetupInfo_o *v3631; // x5
  FollowerInfo_o *v3632; // x6
  PartyListViewItem_o *v3633; // x7
  RestrictionMessageMaster_o *v3634; // x20
  int64_t v3635; // x2
  int32_t v3636; // w3
  System_String_o *v3637; // x4
  BattleSetupInfo_o *v3638; // x5
  FollowerInfo_o *v3639; // x6
  PartyListViewItem_o *v3640; // x7
  RestrictionWholeMaster_o *v3641; // x20
  int64_t v3642; // x2
  int32_t v3643; // w3
  System_String_o *v3644; // x4
  BattleSetupInfo_o *v3645; // x5
  FollowerInfo_o *v3646; // x6
  PartyListViewItem_o *v3647; // x7
  FuncDispMaster_o *v3648; // x20
  int64_t v3649; // x2
  int32_t v3650; // w3
  System_String_o *v3651; // x4
  BattleSetupInfo_o *v3652; // x5
  FollowerInfo_o *v3653; // x6
  PartyListViewItem_o *v3654; // x7
  ClassBoardCommandSpellMaster_o *v3655; // x20
  int64_t v3656; // x2
  int32_t v3657; // w3
  System_String_o *v3658; // x4
  BattleSetupInfo_o *v3659; // x5
  FollowerInfo_o *v3660; // x6
  PartyListViewItem_o *v3661; // x7
  ClassBoardClassMaster_o *v3662; // x20
  int64_t v3663; // x2
  int32_t v3664; // w3
  System_String_o *v3665; // x4
  BattleSetupInfo_o *v3666; // x5
  FollowerInfo_o *v3667; // x6
  PartyListViewItem_o *v3668; // x7
  EventCommandAssistMaster_o *v3669; // x20
  int64_t v3670; // x2
  int32_t v3671; // w3
  System_String_o *v3672; // x4
  BattleSetupInfo_o *v3673; // x5
  FollowerInfo_o *v3674; // x6
  PartyListViewItem_o *v3675; // x7
  EventMissionGroupMaster_o *v3676; // x20
  int64_t v3677; // x2
  int32_t v3678; // w3
  System_String_o *v3679; // x4
  BattleSetupInfo_o *v3680; // x5
  FollowerInfo_o *v3681; // x6
  PartyListViewItem_o *v3682; // x7
  CombineLimitReleaseMaster_o *v3683; // x20
  int64_t v3684; // x2
  int32_t v3685; // w3
  System_String_o *v3686; // x4
  BattleSetupInfo_o *v3687; // x5
  FollowerInfo_o *v3688; // x6
  PartyListViewItem_o *v3689; // x7
  HeelPortraitMaster_o *v3690; // x20
  int64_t v3691; // x2
  int32_t v3692; // w3
  System_String_o *v3693; // x4
  BattleSetupInfo_o *v3694; // x5
  FollowerInfo_o *v3695; // x6
  PartyListViewItem_o *v3696; // x7
  UserHeelPortraitMaster_o *v3697; // x20
  int64_t v3698; // x2
  int32_t v3699; // w3
  System_String_o *v3700; // x4
  BattleSetupInfo_o *v3701; // x5
  FollowerInfo_o *v3702; // x6
  PartyListViewItem_o *v3703; // x7
  TreasureDeviceSequenceWeightMaster_o *v3704; // x20
  int64_t v3705; // x2
  int32_t v3706; // w3
  System_String_o *v3707; // x4
  BattleSetupInfo_o *v3708; // x5
  FollowerInfo_o *v3709; // x6
  PartyListViewItem_o *v3710; // x7
  NpcServantFollowerIndividualityMaster_o *v3711; // x20
  int64_t v3712; // x2
  int32_t v3713; // w3
  System_String_o *v3714; // x4
  BattleSetupInfo_o *v3715; // x5
  FollowerInfo_o *v3716; // x6
  PartyListViewItem_o *v3717; // x7
  GachaExtraGiftMaster_o *v3718; // x20
  int64_t v3719; // x2
  int32_t v3720; // w3
  System_String_o *v3721; // x4
  BattleSetupInfo_o *v3722; // x5
  FollowerInfo_o *v3723; // x6
  PartyListViewItem_o *v3724; // x7
  EventMuralMaster_o *v3725; // x20
  int64_t v3726; // x2
  int32_t v3727; // w3
  System_String_o *v3728; // x4
  BattleSetupInfo_o *v3729; // x5
  FollowerInfo_o *v3730; // x6
  PartyListViewItem_o *v3731; // x7
  ViewWaveEnemyMaster_o *v3732; // x20
  int64_t v3733; // x2
  int32_t v3734; // w3
  System_String_o *v3735; // x4
  BattleSetupInfo_o *v3736; // x5
  FollowerInfo_o *v3737; // x6
  PartyListViewItem_o *v3738; // x7
  BlankEarthSpotNavimenuMaster_o *v3739; // x20
  int64_t v3740; // x2
  int32_t v3741; // w3
  System_String_o *v3742; // x4
  BattleSetupInfo_o *v3743; // x5
  FollowerInfo_o *v3744; // x6
  PartyListViewItem_o *v3745; // x7
  BlankEarthGimmickMaster_o *v3746; // x20
  int64_t v3747; // x2
  int32_t v3748; // w3
  System_String_o *v3749; // x4
  BattleSetupInfo_o *v3750; // x5
  FollowerInfo_o *v3751; // x6
  PartyListViewItem_o *v3752; // x7
  TerminalOverwriteMaster_o *v3753; // x20
  int64_t v3754; // x2
  int32_t v3755; // w3
  System_String_o *v3756; // x4
  BattleSetupInfo_o *v3757; // x5
  FollowerInfo_o *v3758; // x6
  PartyListViewItem_o *v3759; // x7
  UserExchangeSvtMaster_o *v3760; // x20
  int64_t v3761; // x2
  int32_t v3762; // w3
  System_String_o *v3763; // x4
  BattleSetupInfo_o *v3764; // x5
  FollowerInfo_o *v3765; // x6
  PartyListViewItem_o *v3766; // x7
  WarBoardCommonReleaseMaster_o *v3767; // x20
  int64_t v3768; // x2
  int32_t v3769; // w3
  System_String_o *v3770; // x4
  BattleSetupInfo_o *v3771; // x5
  FollowerInfo_o *v3772; // x6
  PartyListViewItem_o *v3773; // x7
  WarBoardEventMaster_o *v3774; // x20
  int64_t v3775; // x2
  int32_t v3776; // w3
  System_String_o *v3777; // x4
  BattleSetupInfo_o *v3778; // x5
  FollowerInfo_o *v3779; // x6
  PartyListViewItem_o *v3780; // x7
  WarBoardEventScriptMaster_o *v3781; // x20
  int64_t v3782; // x2
  int32_t v3783; // w3
  System_String_o *v3784; // x4
  BattleSetupInfo_o *v3785; // x5
  FollowerInfo_o *v3786; // x6
  PartyListViewItem_o *v3787; // x7
  WarBoardStageBossMaster_o *v3788; // x20
  int64_t v3789; // x2
  int32_t v3790; // w3
  System_String_o *v3791; // x4
  BattleSetupInfo_o *v3792; // x5
  FollowerInfo_o *v3793; // x6
  PartyListViewItem_o *v3794; // x7
  WarBoardSquareIndexGroupMaster_o *v3795; // x20
  int64_t v3796; // x2
  int32_t v3797; // w3
  System_String_o *v3798; // x4
  BattleSetupInfo_o *v3799; // x5
  FollowerInfo_o *v3800; // x6
  PartyListViewItem_o *v3801; // x7
  WarBoardActionTrendGroupMaster_o *v3802; // x20
  int64_t v3803; // x2
  int32_t v3804; // w3
  System_String_o *v3805; // x4
  BattleSetupInfo_o *v3806; // x5
  FollowerInfo_o *v3807; // x6
  PartyListViewItem_o *v3808; // x7
  WarBoardRatingOffsetGroupMaster_o *v3809; // x20
  int64_t v3810; // x2
  int32_t v3811; // w3
  System_String_o *v3812; // x4
  BattleSetupInfo_o *v3813; // x5
  FollowerInfo_o *v3814; // x6
  PartyListViewItem_o *v3815; // x7
  WarBoardReinforcementsMaster_o *v3816; // x20
  int64_t v3817; // x2
  int32_t v3818; // w3
  System_String_o *v3819; // x4
  BattleSetupInfo_o *v3820; // x5
  FollowerInfo_o *v3821; // x6
  PartyListViewItem_o *v3822; // x7
  WarBoardStageReinforcementsMaster_o *v3823; // x20
  int64_t v3824; // x2
  int32_t v3825; // w3
  System_String_o *v3826; // x4
  BattleSetupInfo_o *v3827; // x5
  FollowerInfo_o *v3828; // x6
  PartyListViewItem_o *v3829; // x7
  WarBoardFutureActionTrendMaster_o *v3830; // x20
  int64_t v3831; // x2
  int32_t v3832; // w3
  System_String_o *v3833; // x4
  BattleSetupInfo_o *v3834; // x5
  FollowerInfo_o *v3835; // x6
  PartyListViewItem_o *v3836; // x7
  ServantProfilePushMaster_o *v3837; // x20
  int64_t v3838; // x2
  int32_t v3839; // w3
  System_String_o *v3840; // x4
  BattleSetupInfo_o *v3841; // x5
  FollowerInfo_o *v3842; // x6
  PartyListViewItem_o *v3843; // x7
  MapGimmickPathMaster_o *v3844; // x20
  int64_t v3845; // x2
  int32_t v3846; // w3
  System_String_o *v3847; // x4
  BattleSetupInfo_o *v3848; // x5
  FollowerInfo_o *v3849; // x6
  PartyListViewItem_o *v3850; // x7
  MapGimmickPathReleaseMaster_o *v3851; // x20
  int64_t v3852; // x2
  int32_t v3853; // w3
  System_String_o *v3854; // x4
  BattleSetupInfo_o *v3855; // x5
  FollowerInfo_o *v3856; // x6
  PartyListViewItem_o *v3857; // x7
  ServantOverwriteMaster_o *v3858; // x20
  int64_t v3859; // x2
  int32_t v3860; // w3
  System_String_o *v3861; // x4
  BattleSetupInfo_o *v3862; // x5
  FollowerInfo_o *v3863; // x6
  PartyListViewItem_o *v3864; // x7
  IndividualityPolicyMaster_o *v3865; // x20
  int64_t v3866; // x2
  int32_t v3867; // w3
  System_String_o *v3868; // x4
  BattleSetupInfo_o *v3869; // x5
  FollowerInfo_o *v3870; // x6
  PartyListViewItem_o *v3871; // x7
  IndividualityPersonalityMaster_o *v3872; // x20
  int64_t v3873; // x2
  int32_t v3874; // w3
  System_String_o *v3875; // x4
  BattleSetupInfo_o *v3876; // x5
  FollowerInfo_o *v3877; // x6
  PartyListViewItem_o *v3878; // x7
  AttriMaster_o *v3879; // x20
  int64_t v3880; // x2
  int32_t v3881; // w3
  System_String_o *v3882; // x4
  BattleSetupInfo_o *v3883; // x5
  FollowerInfo_o *v3884; // x6
  PartyListViewItem_o *v3885; // x7
  ServantVoicePatternMaster_o *v3886; // x20
  int64_t v3887; // x2
  int32_t v3888; // w3
  System_String_o *v3889; // x4
  BattleSetupInfo_o *v3890; // x5
  FollowerInfo_o *v3891; // x6
  PartyListViewItem_o *v3892; // x7
  UserGameCommonMaster_o *v3893; // x20
  int64_t v3894; // x2
  int32_t v3895; // w3
  System_String_o *v3896; // x4
  BattleSetupInfo_o *v3897; // x5
  FollowerInfo_o *v3898; // x6
  PartyListViewItem_o *v3899; // x7
  ServantPhotoMaster_o *v3900; // x20
  int64_t v3901; // x2
  int32_t v3902; // w3
  System_String_o *v3903; // x4
  BattleSetupInfo_o *v3904; // x5
  FollowerInfo_o *v3905; // x6
  PartyListViewItem_o *v3906; // x7
  MasterPhotoMaster_o *v3907; // x20
  int64_t v3908; // x2
  int32_t v3909; // w3
  System_String_o *v3910; // x4
  BattleSetupInfo_o *v3911; // x5
  FollowerInfo_o *v3912; // x6
  PartyListViewItem_o *v3913; // x7
  WarMessageMaster_o *v3914; // x20
  int64_t v3915; // x2
  int32_t v3916; // w3
  System_String_o *v3917; // x4
  BattleSetupInfo_o *v3918; // x5
  FollowerInfo_o *v3919; // x6
  PartyListViewItem_o *v3920; // x7
  QuestAutoOrganizationAdjustMaster_o *v3921; // x20
  int64_t v3922; // x2
  int32_t v3923; // w3
  System_String_o *v3924; // x4
  BattleSetupInfo_o *v3925; // x5
  FollowerInfo_o *v3926; // x6
  PartyListViewItem_o *v3927; // x7
  ExcludeMotionMaster_o *v3928; // x20
  int64_t v3929; // x2
  int32_t v3930; // w3
  System_String_o *v3931; // x4
  BattleSetupInfo_o *v3932; // x5
  FollowerInfo_o *v3933; // x6
  PartyListViewItem_o *v3934; // x7
  UserInterruptionQuestMaster_o *v3935; // x20
  int64_t v3936; // x2
  int32_t v3937; // w3
  System_String_o *v3938; // x4
  BattleSetupInfo_o *v3939; // x5
  FollowerInfo_o *v3940; // x6
  PartyListViewItem_o *v3941; // x7
  ServantTransformMaster_o *v3942; // x20
  int64_t v3943; // x2
  int32_t v3944; // w3
  System_String_o *v3945; // x4
  BattleSetupInfo_o *v3946; // x5
  FollowerInfo_o *v3947; // x6
  PartyListViewItem_o *v3948; // x7
  MapUpdateScheduleMaster_o *v3949; // x20
  int64_t v3950; // x2
  int32_t v3951; // w3
  System_String_o *v3952; // x4
  BattleSetupInfo_o *v3953; // x5
  FollowerInfo_o *v3954; // x6
  PartyListViewItem_o *v3955; // x7
  QuestPhasePresentMaster_o *v3956; // x20
  int64_t v3957; // x2
  int32_t v3958; // w3
  System_String_o *v3959; // x4
  BattleSetupInfo_o *v3960; // x5
  FollowerInfo_o *v3961; // x6
  PartyListViewItem_o *v3962; // x7
  UserAccountLinkageMaster_o *v3963; // x20
  int64_t v3964; // x2
  int32_t v3965; // w3
  System_String_o *v3966; // x4
  BattleSetupInfo_o *v3967; // x5
  FollowerInfo_o *v3968; // x6
  PartyListViewItem_o *v3969; // x7
  MissionNaviTransitionMaster_o *v3970; // x20
  int64_t v3971; // x2
  int32_t v3972; // w3
  System_String_o *v3973; // x4
  BattleSetupInfo_o *v3974; // x5
  FollowerInfo_o *v3975; // x6
  PartyListViewItem_o *v3976; // x7
  MissionNaviQuestMaster_o *v3977; // x20
  int64_t v3978; // x2
  int32_t v3979; // w3
  System_String_o *v3980; // x4
  BattleSetupInfo_o *v3981; // x5
  FollowerInfo_o *v3982; // x6
  PartyListViewItem_o *v3983; // x7
  EventTradeGoodsMaster_o *v3984; // x20
  int64_t v3985; // x2
  int32_t v3986; // w3
  System_String_o *v3987; // x4
  BattleSetupInfo_o *v3988; // x5
  FollowerInfo_o *v3989; // x6
  PartyListViewItem_o *v3990; // x7
  EventTradeStoreMaster_o *v3991; // x20
  int64_t v3992; // x2
  int32_t v3993; // w3
  System_String_o *v3994; // x4
  BattleSetupInfo_o *v3995; // x5
  FollowerInfo_o *v3996; // x6
  PartyListViewItem_o *v3997; // x7
  EventTradePickupMaster_o *v3998; // x20
  int64_t v3999; // x2
  int32_t v4000; // w3
  System_String_o *v4001; // x4
  BattleSetupInfo_o *v4002; // x5
  FollowerInfo_o *v4003; // x6
  PartyListViewItem_o *v4004; // x7
  UserEventTradeMaster_o *v4005; // x20
  int64_t v4006; // x2
  int32_t v4007; // w3
  System_String_o *v4008; // x4
  BattleSetupInfo_o *v4009; // x5
  FollowerInfo_o *v4010; // x6
  PartyListViewItem_o *v4011; // x7
  PaymentHistoryMaster_o *v4012; // x20
  int64_t v4013; // x2
  int32_t v4014; // w3
  System_String_o *v4015; // x4
  BattleSetupInfo_o *v4016; // x5
  FollowerInfo_o *v4017; // x6
  PartyListViewItem_o *v4018; // x7
  UserExternalPaymentStoneMaster_o *v4019; // x20
  int64_t v4020; // x2
  int32_t v4021; // w3
  System_String_o *v4022; // x4
  BattleSetupInfo_o *v4023; // x5
  FollowerInfo_o *v4024; // x6
  PartyListViewItem_o *v4025; // x7
  QuestPhaseIndividualityMaster_o *v4026; // x20
  int64_t v4027; // x2
  int32_t v4028; // w3
  System_String_o *v4029; // x4
  BattleSetupInfo_o *v4030; // x5
  FollowerInfo_o *v4031; // x6
  PartyListViewItem_o *v4032; // x7
  ViewGachaFeaturedServantMaster_o *v4033; // x20
  int64_t v4034; // x2
  int32_t v4035; // w3
  System_String_o *v4036; // x4
  BattleSetupInfo_o *v4037; // x5
  FollowerInfo_o *v4038; // x6
  PartyListViewItem_o *v4039; // x7
  UserGachaPickupCollateralMaster_o *v4040; // x20
  int64_t v4041; // x2
  int32_t v4042; // w3
  System_String_o *v4043; // x4
  BattleSetupInfo_o *v4044; // x5
  FollowerInfo_o *v4045; // x6
  PartyListViewItem_o *v4046; // x7
  GachaPickupCollateralMaster_o *v4047; // x20
  int64_t v4048; // x2
  int32_t v4049; // w3
  System_String_o *v4050; // x4
  BattleSetupInfo_o *v4051; // x5
  FollowerInfo_o *v4052; // x6
  PartyListViewItem_o *v4053; // x7
  GachaPickupCollateralGroupMaster_o *v4054; // x20
  int64_t v4055; // x2
  int32_t v4056; // w3
  System_String_o *v4057; // x4
  BattleSetupInfo_o *v4058; // x5
  FollowerInfo_o *v4059; // x6
  PartyListViewItem_o *v4060; // x7
  BattlePointMaster_o *v4061; // x20
  int64_t v4062; // x2
  int32_t v4063; // w3
  System_String_o *v4064; // x4
  BattleSetupInfo_o *v4065; // x5
  FollowerInfo_o *v4066; // x6
  PartyListViewItem_o *v4067; // x7
  BattlePointPhaseMaster_o *v4068; // x20
  int64_t v4069; // x2
  int32_t v4070; // w3
  System_String_o *v4071; // x4
  BattleSetupInfo_o *v4072; // x5
  FollowerInfo_o *v4073; // x6
  PartyListViewItem_o *v4074; // x7
  ServantBattlePointMaster_o *v4075; // x20
  int64_t v4076; // x2
  int32_t v4077; // w3
  System_String_o *v4078; // x4
  BattleSetupInfo_o *v4079; // x5
  FollowerInfo_o *v4080; // x6
  PartyListViewItem_o *v4081; // x7
  EffectMovieMaster_o *v4082; // x20
  int64_t v4083; // x2
  int32_t v4084; // w3
  System_String_o *v4085; // x4
  BattleSetupInfo_o *v4086; // x5
  FollowerInfo_o *v4087; // x6
  PartyListViewItem_o *v4088; // x7
  PaymentLimitMaster_o *v4089; // x20
  int64_t v4090; // x2
  int32_t v4091; // w3
  System_String_o *v4092; // x4
  BattleSetupInfo_o *v4093; // x5
  FollowerInfo_o *v4094; // x6
  PartyListViewItem_o *v4095; // x7
  UserPaymentLimitMaster_o *v4096; // x20
  int64_t v4097; // x2
  int32_t v4098; // w3
  System_String_o *v4099; // x4
  BattleSetupInfo_o *v4100; // x5
  FollowerInfo_o *v4101; // x6
  PartyListViewItem_o *v4102; // x7
  RoadmapMaster_o *v4103; // x20
  int64_t v4104; // x2
  int32_t v4105; // w3
  System_String_o *v4106; // x4
  BattleSetupInfo_o *v4107; // x5
  FollowerInfo_o *v4108; // x6
  PartyListViewItem_o *v4109; // x7
  UserRecommendSupportMaster_o *v4110; // x20
  int64_t v4111; // x2
  int32_t v4112; // w3
  System_String_o *v4113; // x4
  BattleSetupInfo_o *v4114; // x5
  FollowerInfo_o *v4115; // x6
  PartyListViewItem_o *v4116; // x7
  RecommendSupportQuestMaster_o *v4117; // x20
  int64_t v4118; // x2
  int32_t v4119; // w3
  System_String_o *v4120; // x4
  BattleSetupInfo_o *v4121; // x5
  FollowerInfo_o *v4122; // x6
  PartyListViewItem_o *v4123; // x7
  RecommendAdviceMessageMaster_o *v4124; // x20
  int64_t v4125; // x2
  int32_t v4126; // w3
  System_String_o *v4127; // x4
  BattleSetupInfo_o *v4128; // x5
  FollowerInfo_o *v4129; // x6
  PartyListViewItem_o *v4130; // x7
  UserRecommendFollowerMaster_o *v4131; // x20
  int64_t v4132; // x2
  int32_t v4133; // w3
  System_String_o *v4134; // x4
  BattleSetupInfo_o *v4135; // x5
  FollowerInfo_o *v4136; // x6
  PartyListViewItem_o *v4137; // x7
  ItemDropEfficiencyMaster_o *v4138; // x20
  int64_t v4139; // x2
  int32_t v4140; // w3
  System_String_o *v4141; // x4
  BattleSetupInfo_o *v4142; // x5
  FollowerInfo_o *v4143; // x6
  PartyListViewItem_o *v4144; // x7
  BlankEarthGimmickAddMaster_o *v4145; // x20
  int64_t v4146; // x2
  int32_t v4147; // w3
  System_String_o *v4148; // x4
  BattleSetupInfo_o *v4149; // x5
  FollowerInfo_o *v4150; // x6
  PartyListViewItem_o *v4151; // x7
  WarReleaseMaster_o *v4152; // x20
  int64_t v4153; // x2
  int32_t v4154; // w3
  System_String_o *v4155; // x4
  BattleSetupInfo_o *v4156; // x5
  FollowerInfo_o *v4157; // x6
  PartyListViewItem_o *v4158; // x7
  SelectBonusBaseMaster_o *v4159; // x20
  int64_t v4160; // x2
  int32_t v4161; // w3
  System_String_o *v4162; // x4
  BattleSetupInfo_o *v4163; // x5
  FollowerInfo_o *v4164; // x6
  PartyListViewItem_o *v4165; // x7
  SelectBonusMaster_o *v4166; // x20
  int64_t v4167; // x2
  int32_t v4168; // w3
  System_String_o *v4169; // x4
  BattleSetupInfo_o *v4170; // x5
  FollowerInfo_o *v4171; // x6
  PartyListViewItem_o *v4172; // x7
  MyroomServantSpecialImageMaster_o *v4173; // x20
  int64_t v4174; // x2
  int32_t v4175; // w3
  System_String_o *v4176; // x4
  BattleSetupInfo_o *v4177; // x5
  FollowerInfo_o *v4178; // x6
  PartyListViewItem_o *v4179; // x7
  ShopResetMaster_o *v4180; // x20
  int64_t v4181; // x2
  int32_t v4182; // w3
  System_String_o *v4183; // x4
  BattleSetupInfo_o *v4184; // x5
  FollowerInfo_o *v4185; // x6
  PartyListViewItem_o *v4186; // x7
  NpcServantDisplayTypeDetailMaster_o *v4187; // x20
  int64_t v4188; // x2
  int32_t v4189; // w3
  System_String_o *v4190; // x4
  BattleSetupInfo_o *v4191; // x5
  FollowerInfo_o *v4192; // x6
  PartyListViewItem_o *v4193; // x7
  FriendshipServantMaster_o *v4194; // x20
  int64_t v4195; // x2
  int32_t v4196; // w3
  System_String_o *v4197; // x4
  BattleSetupInfo_o *v4198; // x5
  FollowerInfo_o *v4199; // x6
  PartyListViewItem_o *v4200; // x7
  ExchangeSvtCoinGivenNumMaster_o *v4201; // x20
  int64_t v4202; // x2
  int32_t v4203; // w3
  System_String_o *v4204; // x4
  BattleSetupInfo_o *v4205; // x5
  FollowerInfo_o *v4206; // x6
  PartyListViewItem_o *v4207; // x7
  ChaldeaGatePickupMaster_o *v4208; // x20
  int64_t v4209; // x2
  int32_t v4210; // w3
  System_String_o *v4211; // x4
  BattleSetupInfo_o *v4212; // x5
  FollowerInfo_o *v4213; // x6
  PartyListViewItem_o *v4214; // x7
  WarGroupIgnoreMaster_o *v4215; // x20
  int64_t v4216; // x2
  int32_t v4217; // w3
  System_String_o *v4218; // x4
  BattleSetupInfo_o *v4219; // x5
  FollowerInfo_o *v4220; // x6
  PartyListViewItem_o *v4221; // x7
  ImagePartsGroupMaster_o *v4222; // x20
  int64_t v4223; // x2
  int32_t v4224; // w3
  System_String_o *v4225; // x4
  BattleSetupInfo_o *v4226; // x5
  FollowerInfo_o *v4227; // x6
  PartyListViewItem_o *v4228; // x7
  UserImagePartsGroupMaster_o *v4229; // x20
  int64_t v4230; // x2
  int32_t v4231; // w3
  System_String_o *v4232; // x4
  BattleSetupInfo_o *v4233; // x5
  FollowerInfo_o *v4234; // x6
  PartyListViewItem_o *v4235; // x7
  MissionItemDisplayMaster_o *v4236; // x20
  int64_t v4237; // x2
  int32_t v4238; // w3
  System_String_o *v4239; // x4
  BattleSetupInfo_o *v4240; // x5
  FollowerInfo_o *v4241; // x6
  PartyListViewItem_o *v4242; // x7
  QuestUseItemGroupMaster_o *v4243; // x20
  int64_t v4244; // x2
  int32_t v4245; // w3
  System_String_o *v4246; // x4
  BattleSetupInfo_o *v4247; // x5
  FollowerInfo_o *v4248; // x6
  PartyListViewItem_o *v4249; // x7
  QuestUseItemPickupMaster_o *v4250; // x20
  int64_t v4251; // x2
  int32_t v4252; // w3
  System_String_o *v4253; // x4
  BattleSetupInfo_o *v4254; // x5
  FollowerInfo_o *v4255; // x6
  PartyListViewItem_o *v4256; // x7
  UserEventItemLinkSvtMaster_o *v4257; // x20
  int64_t v4258; // x2
  int32_t v4259; // w3
  System_String_o *v4260; // x4
  BattleSetupInfo_o *v4261; // x5
  FollowerInfo_o *v4262; // x6
  PartyListViewItem_o *v4263; // x7
  QuestHintOverwriteMaster_o *v4264; // x20
  int64_t v4265; // x2
  int32_t v4266; // w3
  System_String_o *v4267; // x4
  BattleSetupInfo_o *v4268; // x5
  FollowerInfo_o *v4269; // x6
  PartyListViewItem_o *v4270; // x7
  ReachedWaveInfoMaster_o *v4271; // x20
  int64_t v4272; // x2
  int32_t v4273; // w3
  System_String_o *v4274; // x4
  BattleSetupInfo_o *v4275; // x5
  FollowerInfo_o *v4276; // x6
  PartyListViewItem_o *v4277; // x7
  __int64 v4279; // x0

  if ( (byte_4BFD274 & 1) == 0 )
  {
    sub_1C2E12C(&AccessaryMaster_TypeInfo, v1);
    sub_1C2E12C(&AdCheckPointMaster_TypeInfo, v2);
    sub_1C2E12C(&AiActMaster_TypeInfo, v3);
    sub_1C2E12C(&AiFieldMaster_TypeInfo, v4);
    sub_1C2E12C(&AiMaster_TypeInfo, v5);
    sub_1C2E12C(&AreaMaster_TypeInfo, v6);
    sub_1C2E12C(&AssistMaster_TypeInfo, v7);
    sub_1C2E12C(&AttriMaster_TypeInfo, v8);
    sub_1C2E12C(&AttriRelationMaster_TypeInfo, v9);
    sub_1C2E12C(&AuraEffectMaster_TypeInfo, v10);
    sub_1C2E12C(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1C2E12C(&BankShopMaster_TypeInfo, v12);
    sub_1C2E12C(&BannerAddMaster_TypeInfo, v13);
    sub_1C2E12C(&BannerMaster_TypeInfo, v14);
    sub_1C2E12C(&BattleBgMaster_TypeInfo, v15);
    sub_1C2E12C(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1C2E12C(&BattleMaster_TypeInfo, v17);
    sub_1C2E12C(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1C2E12C(&BattleMessageMaster_TypeInfo, v19);
    sub_1C2E12C(&BattlePointMaster_TypeInfo, v20);
    sub_1C2E12C(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1C2E12C(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1C2E12C(&BgmMaster_TypeInfo, v23);
    sub_1C2E12C(&BgmReleaseMaster_TypeInfo, v24);
    sub_1C2E12C(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1C2E12C(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1C2E12C(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1C2E12C(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1C2E12C(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1C2E12C(&BoardMessageMaster_TypeInfo, v30);
    sub_1C2E12C(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1C2E12C(&BoostMaster_TypeInfo, v32);
    sub_1C2E12C(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1C2E12C(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1C2E12C(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1C2E12C(&BoxGachaMaster_TypeInfo, v36);
    sub_1C2E12C(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1C2E12C(&BuffConvertMaster_TypeInfo, v38);
    sub_1C2E12C(&BuffMaster_TypeInfo, v39);
    sub_1C2E12C(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1C2E12C(&CampaignInfoMaster_TypeInfo, v41);
    sub_1C2E12C(&CardMaster_TypeInfo, v42);
    sub_1C2E12C(&ChaldeaGatePickupMaster_TypeInfo, v43);
    sub_1C2E12C(&ClassBoardBaseMaster_TypeInfo, v44);
    sub_1C2E12C(&ClassBoardClassMaster_TypeInfo, v45);
    sub_1C2E12C(&ClassBoardCommandSpellMaster_TypeInfo, v46);
    sub_1C2E12C(&ClassBoardLineMaster_TypeInfo, v47);
    sub_1C2E12C(&ClassBoardLockMaster_TypeInfo, v48);
    sub_1C2E12C(&ClassBoardSquareMaster_TypeInfo, v49);
    sub_1C2E12C(&ClassRelationMaster_TypeInfo, v50);
    sub_1C2E12C(&ClassRelationOverwriteMaster_TypeInfo, v51);
    sub_1C2E12C(&ClosedMessageMaster_TypeInfo, v52);
    sub_1C2E12C(&CombineAppendPassiveSkillMaster_TypeInfo, v53);
    sub_1C2E12C(&CombineCostumeMaster_TypeInfo, v54);
    sub_1C2E12C(&CombineLimitGiftMaster_TypeInfo, v55);
    sub_1C2E12C(&CombineLimitMaster_TypeInfo, v56);
    sub_1C2E12C(&CombineLimitReleaseMaster_TypeInfo, v57);
    sub_1C2E12C(&CombineMaster_TypeInfo, v58);
    sub_1C2E12C(&CombineMaterialMaster_TypeInfo, v59);
    sub_1C2E12C(&CombineQpMaster_TypeInfo, v60);
    sub_1C2E12C(&CombineQpSvtEquipMaster_TypeInfo, v61);
    sub_1C2E12C(&CombineSkillMaster_TypeInfo, v62);
    sub_1C2E12C(&CombineTdMaster_TypeInfo, v63);
    sub_1C2E12C(&CommandCardRankParamMaster_TypeInfo, v64);
    sub_1C2E12C(&CommandCodeCommentMaster_TypeInfo, v65);
    sub_1C2E12C(&CommandCodeMaster_TypeInfo, v66);
    sub_1C2E12C(&CommandCodeSkillMaster_TypeInfo, v67);
    sub_1C2E12C(&CommandCodeSkillReleaseMaster_TypeInfo, v68);
    sub_1C2E12C(&CommandSpellMaster_TypeInfo, v69);
    sub_1C2E12C(&CommonConsumeMaster_TypeInfo, v70);
    sub_1C2E12C(&CommonReleaseMaster_TypeInfo, v71);
    sub_1C2E12C(&CommonRestrictionMaster_TypeInfo, v72);
    sub_1C2E12C(&CompleteMissionMaster_TypeInfo, v73);
    sub_1C2E12C(&ConstantLongMaster_TypeInfo, v74);
    sub_1C2E12C(&ConstantMaster_TypeInfo, v75);
    sub_1C2E12C(&ConstantStrMaster_TypeInfo, v76);
    sub_1C2E12C(&CvMaster_TypeInfo, v77);
    sub_1C2E12C(&DataMasterBase___TypeInfo, v78);
    sub_1C2E12C(&DialogMessageMaster_TypeInfo, v79);
    sub_1C2E12C(&EffectMaster_TypeInfo, v80);
    sub_1C2E12C(&EffectMovieMaster_TypeInfo, v81);
    sub_1C2E12C(&EnemyMstBattleMaster_TypeInfo, v82);
    sub_1C2E12C(&EnemyMstMaster_TypeInfo, v83);
    sub_1C2E12C(&EquipAddMaster_TypeInfo, v84);
    sub_1C2E12C(&EquipExpMaster_TypeInfo, v85);
    sub_1C2E12C(&EquipImageMaster_TypeInfo, v86);
    sub_1C2E12C(&EquipMaster_TypeInfo, v87);
    sub_1C2E12C(&EquipSkillMaster_TypeInfo, v88);
    sub_1C2E12C(&EventAddMaster_TypeInfo, v89);
    sub_1C2E12C(&EventBoardGameCellMaster_TypeInfo, v90);
    sub_1C2E12C(&EventBoardGameTokenMaster_TypeInfo, v91);
    sub_1C2E12C(&EventBoardGameTokenRewardMaster_TypeInfo, v92);
    sub_1C2E12C(&EventBonusFilterGroupInfoMaster_TypeInfo, v93);
    sub_1C2E12C(&EventBonusFilterGroupMemberMaster_TypeInfo, v94);
    sub_1C2E12C(&EventBonusFilterMaster_TypeInfo, v95);
    sub_1C2E12C(&EventBoostItemUsedMaster_TypeInfo, v96);
    sub_1C2E12C(&EventBossStatusUiMaster_TypeInfo, v97);
    sub_1C2E12C(&EventBuddyPointMaster_TypeInfo, v98);
    sub_1C2E12C(&EventBulletinBoardMaster_TypeInfo, v99);
    sub_1C2E12C(&EventBulletinBoardReleaseMaster_TypeInfo, v100);
    sub_1C2E12C(&EventCampaignMaster_TypeInfo, v101);
    sub_1C2E12C(&EventCampaignReleaseMaster_TypeInfo, v102);
    sub_1C2E12C(&EventCombineCostumeMaster_TypeInfo, v103);
    sub_1C2E12C(&EventCombineMaster_TypeInfo, v104);
    sub_1C2E12C(&EventCommandAssistMaster_TypeInfo, v105);
    sub_1C2E12C(&EventConquestRewardMaster_TypeInfo, v106);
    sub_1C2E12C(&EventCooltimeRewardMaster_TypeInfo, v107);
    sub_1C2E12C(&EventDataLostBattleMaster_TypeInfo, v108);
    sub_1C2E12C(&EventDataLostBattleResetMaster_TypeInfo, v109);
    sub_1C2E12C(&EventDetailMaster_TypeInfo, v110);
    sub_1C2E12C(&EventDiggingBlockMaster_TypeInfo, v111);
    sub_1C2E12C(&EventDiggingMaster_TypeInfo, v112);
    sub_1C2E12C(&EventDiggingRewardMaster_TypeInfo, v113);
    sub_1C2E12C(&EventEquipSkillReleaseMaster_TypeInfo, v114);
    sub_1C2E12C(&EventExpeditionMaster_TypeInfo, v115);
    sub_1C2E12C(&EventExpeditionPieceMaster_TypeInfo, v116);
    sub_1C2E12C(&EventFactoryMaster_TypeInfo, v117);
    sub_1C2E12C(&EventFatigueRecoveryMaster_TypeInfo, v118);
    sub_1C2E12C(&EventFilterMaster_TypeInfo, v119);
    sub_1C2E12C(&EventFortificationDetailMaster_TypeInfo, v120);
    sub_1C2E12C(&EventFortificationMaster_TypeInfo, v121);
    sub_1C2E12C(&EventFortificationSvtMaster_TypeInfo, v122);
    sub_1C2E12C(&EventGroupMaster_TypeInfo, v123);
    sub_1C2E12C(&EventItemDisplayGroupMaster_TypeInfo, v124);
    sub_1C2E12C(&EventItemDisplayMaster_TypeInfo, v125);
    sub_1C2E12C(&EventItemDisplayReleaseMaster_TypeInfo, v126);
    sub_1C2E12C(&EventLocationCampaignMaster_TypeInfo, v127);
    sub_1C2E12C(&EventMaster_TypeInfo, v128);
    sub_1C2E12C(&EventMissionActionAddMaster_TypeInfo, v129);
    sub_1C2E12C(&EventMissionActionMaster_TypeInfo, v130);
    sub_1C2E12C(&EventMissionAddMaster_TypeInfo, v131);
    sub_1C2E12C(&EventMissionCondDetailMaster_TypeInfo, v132);
    sub_1C2E12C(&EventMissionConditionMaster_TypeInfo, v133);
    sub_1C2E12C(&EventMissionGroupMaster_TypeInfo, v134);
    sub_1C2E12C(&EventMissionMaster_TypeInfo, v135);
    sub_1C2E12C(&EventMuralMaster_TypeInfo, v136);
    sub_1C2E12C(&EventPanelMapDetailMaster_TypeInfo, v137);
    sub_1C2E12C(&EventPanelMapMaster_TypeInfo, v138);
    sub_1C2E12C(&EventPanelScanMaster_TypeInfo, v139);
    sub_1C2E12C(&EventPanelSpotMaster_TypeInfo, v140);
    sub_1C2E12C(&EventPointActivityMaster_TypeInfo, v141);
    sub_1C2E12C(&EventPointBuffMaster_TypeInfo, v142);
    sub_1C2E12C(&EventPointGroupAddMaster_TypeInfo, v143);
    sub_1C2E12C(&EventPointGroupMaster_TypeInfo, v144);
    sub_1C2E12C(&EventPointMaster_TypeInfo, v145);
    sub_1C2E12C(&EventPointUpperMaster_TypeInfo, v146);
    sub_1C2E12C(&EventPointUpperReleaseMaster_TypeInfo, v147);
    sub_1C2E12C(&EventProgressValueMaster_TypeInfo, v148);
    sub_1C2E12C(&EventQuestCooltimeMaster_TypeInfo, v149);
    sub_1C2E12C(&EventQuestMaster_TypeInfo, v150);
    sub_1C2E12C(&EventRaceMaster_TypeInfo, v151);
    sub_1C2E12C(&EventRaceResultMaster_TypeInfo, v152);
    sub_1C2E12C(&EventRaidMaster_TypeInfo, v153);
    sub_1C2E12C(&EventRandomMissionMaster_TypeInfo, v154);
    sub_1C2E12C(&EventRecipeGiftMaster_TypeInfo, v155);
    sub_1C2E12C(&EventRecipeMaster_TypeInfo, v156);
    sub_1C2E12C(&EventRewardBgMaster_TypeInfo, v157);
    sub_1C2E12C(&EventRewardExtraMaster_TypeInfo, v158);
    sub_1C2E12C(&EventRewardGuideReleaseMaster_TypeInfo, v159);
    sub_1C2E12C(&EventRewardMaster_TypeInfo, v160);
    sub_1C2E12C(&EventRewardSceneMaster_TypeInfo, v161);
    sub_1C2E12C(&EventRewardSceneReleaseMaster_TypeInfo, v162);
    sub_1C2E12C(&EventRewardSetMaster_TypeInfo, v163);
    sub_1C2E12C(&EventScriptMaster_TypeInfo, v164);
    sub_1C2E12C(&EventScriptReleaseMaster_TypeInfo, v165);
    sub_1C2E12C(&EventServantFatigueMaster_TypeInfo, v166);
    sub_1C2E12C(&EventServantMaster_TypeInfo, v167);
    sub_1C2E12C(&EventServantPointRankMaster_TypeInfo, v168);
    sub_1C2E12C(&EventStatusMaster_TypeInfo, v169);
    sub_1C2E12C(&EventStatusQuestMaster_TypeInfo, v170);
    sub_1C2E12C(&EventSuperBossMaster_TypeInfo, v171);
    sub_1C2E12C(&EventTowerMaster_TypeInfo, v172);
    sub_1C2E12C(&EventTowerRewardMaster_TypeInfo, v173);
    sub_1C2E12C(&EventTradeGoodsMaster_TypeInfo, v174);
    sub_1C2E12C(&EventTradePickupMaster_TypeInfo, v175);
    sub_1C2E12C(&EventTradeStoreMaster_TypeInfo, v176);
    sub_1C2E12C(&EventTutorialCondMaster_TypeInfo, v177);
    sub_1C2E12C(&EventTutorialMaster_TypeInfo, v178);
    sub_1C2E12C(&EventUiMaster_TypeInfo, v179);
    sub_1C2E12C(&EventUiReleaseMaster_TypeInfo, v180);
    sub_1C2E12C(&EventUiValueMaster_TypeInfo, v181);
    sub_1C2E12C(&EventVoicePlayMaster_TypeInfo, v182);
    sub_1C2E12C(&ExchangeSvtCoinGivenNumMaster_TypeInfo, v183);
    sub_1C2E12C(&ExcludeMotionMaster_TypeInfo, v184);
    sub_1C2E12C(&FieldMotionMaster_TypeInfo, v185);
    sub_1C2E12C(&FriendshipMaster_TypeInfo, v186);
    sub_1C2E12C(&FriendshipQuestDialogInfoMaster_TypeInfo, v187);
    sub_1C2E12C(&FriendshipServantMaster_TypeInfo, v188);
    sub_1C2E12C(&FuncDispMaster_TypeInfo, v189);
    sub_1C2E12C(&FuncTypeDetailMaster_TypeInfo, v190);
    sub_1C2E12C(&FunctionCategoryMaster_TypeInfo, v191);
    sub_1C2E12C(&FunctionGroupMaster_TypeInfo, v192);
    sub_1C2E12C(&FunctionMaster_TypeInfo, v193);
    sub_1C2E12C(&GachaAdjustAddMaster_TypeInfo, v194);
    sub_1C2E12C(&GachaAppendMaster_TypeInfo, v195);
    sub_1C2E12C(&GachaBaseCollateralMaster_TypeInfo, v196);
    sub_1C2E12C(&GachaBehaviorMaster_TypeInfo, v197);
    sub_1C2E12C(&GachaBonusSelectLineupMaster_TypeInfo, v198);
    sub_1C2E12C(&GachaBonusSelectMaster_TypeInfo, v199);
    sub_1C2E12C(&GachaDetailMaster_TypeInfo, v200);
    sub_1C2E12C(&GachaExtraGiftMaster_TypeInfo, v201);
    sub_1C2E12C(&GachaGroupMaster_TypeInfo, v202);
    sub_1C2E12C(&GachaImageMaster_TypeInfo, v203);
    sub_1C2E12C(&GachaMaster_TypeInfo, v204);
    sub_1C2E12C(&GachaPickupCollateralGroupMaster_TypeInfo, v205);
    sub_1C2E12C(&GachaPickupCollateralMaster_TypeInfo, v206);
    sub_1C2E12C(&GachaReleaseMaster_TypeInfo, v207);
    sub_1C2E12C(&GachaStoryAdjustMaster_TypeInfo, v208);
    sub_1C2E12C(&GachaSubMaster_TypeInfo, v209);
    sub_1C2E12C(&GachaTicketMaster_TypeInfo, v210);
    sub_1C2E12C(&GiftAddMaster_TypeInfo, v211);
    sub_1C2E12C(&GiftDetailMaster_TypeInfo, v212);
    sub_1C2E12C(&GiftMaster_TypeInfo, v213);
    sub_1C2E12C(&GuideMaster_TypeInfo, v214);
    sub_1C2E12C(&HeelPortraitMaster_TypeInfo, v215);
    sub_1C2E12C(&IllustratorMaster_TypeInfo, v216);
    sub_1C2E12C(&ImagePartsGroupMaster_TypeInfo, v217);
    sub_1C2E12C(&IndividualityPersonalityMaster_TypeInfo, v218);
    sub_1C2E12C(&IndividualityPolicyMaster_TypeInfo, v219);
    sub_1C2E12C(&ItemDropEfficiencyMaster_TypeInfo, v220);
    sub_1C2E12C(&ItemMaster_TypeInfo, v221);
    sub_1C2E12C(&ItemSelectMaster_TypeInfo, v222);
    sub_1C2E12C(&LoginQuestMaster_TypeInfo, v223);
    sub_1C2E12C(&MapButtonMaster_TypeInfo, v224);
    sub_1C2E12C(&MapCondMaster_TypeInfo, v225);
    sub_1C2E12C(&MapGimmickLayerMaster_TypeInfo, v226);
    sub_1C2E12C(&MapGimmickMaster_TypeInfo, v227);
    sub_1C2E12C(&MapGimmickPathMaster_TypeInfo, v228);
    sub_1C2E12C(&MapGimmickPathReleaseMaster_TypeInfo, v229);
    sub_1C2E12C(&MapGimmickReleaseMaster_TypeInfo, v230);
    sub_1C2E12C(&MapLayerMaster_TypeInfo, v231);
    sub_1C2E12C(&MapMaster_TypeInfo, v232);
    sub_1C2E12C(&MapUpdateScheduleMaster_TypeInfo, v233);
    sub_1C2E12C(&MasterPhotoMaster_TypeInfo, v234);
    sub_1C2E12C(&MaterialFolderMaster_TypeInfo, v235);
    sub_1C2E12C(&MissionItemDisplayMaster_TypeInfo, v236);
    sub_1C2E12C(&MissionNaviQuestMaster_TypeInfo, v237);
    sub_1C2E12C(&MissionNaviTransitionMaster_TypeInfo, v238);
    sub_1C2E12C(&MstMissionDisplayInfoMaster_TypeInfo, v239);
    sub_1C2E12C(&MstMissionMaster_TypeInfo, v240);
    sub_1C2E12C(&MyRoomAddMaster_TypeInfo, v241);
    sub_1C2E12C(&MyroomServantSpecialImageMaster_TypeInfo, v242);
    sub_1C2E12C(&NewsMaster_TypeInfo, v243);
    sub_1C2E12C(&NotEndEventMissionFixMaster_TypeInfo, v244);
    sub_1C2E12C(&NpcFollowerMaster_TypeInfo, v245);
    sub_1C2E12C(&NpcFollowerReleaseMaster_TypeInfo, v246);
    sub_1C2E12C(&NpcServantDisplayTypeDetailMaster_TypeInfo, v247);
    sub_1C2E12C(&NpcServantEquipMaster_TypeInfo, v248);
    sub_1C2E12C(&NpcServantFollowerIndividualityMaster_TypeInfo, v249);
    sub_1C2E12C(&NpcServantFollowerMaster_TypeInfo, v250);
    sub_1C2E12C(&OpeningMovieMaster_TypeInfo, v251);
    sub_1C2E12C(&OtherUserGameMaster_TypeInfo, v252);
    sub_1C2E12C(&PartialMaintenanceMaster_TypeInfo, v253);
    sub_1C2E12C(&PaymentHistoryMaster_TypeInfo, v254);
    sub_1C2E12C(&PaymentLimitMaster_TypeInfo, v255);
    sub_1C2E12C(&PickupUserFollowerMaster_TypeInfo, v256);
    sub_1C2E12C(&PrivilegeMaster_TypeInfo, v257);
    sub_1C2E12C(&QuestAddMaster_TypeInfo, v258);
    sub_1C2E12C(&QuestAutoOrganizationAdjustMaster_TypeInfo, v259);
    sub_1C2E12C(&QuestBehaviorMaster_TypeInfo, v260);
    sub_1C2E12C(&QuestConsumeItemMaster_TypeInfo, v261);
    sub_1C2E12C(&QuestDateRangeMaster_TypeInfo, v262);
    sub_1C2E12C(&QuestGroupMaster_TypeInfo, v263);
    sub_1C2E12C(&QuestHintMaster_TypeInfo, v264);
    sub_1C2E12C(&QuestHintOverwriteMaster_TypeInfo, v265);
    sub_1C2E12C(&QuestMaster_TypeInfo, v266);
    sub_1C2E12C(&QuestMessageMaster_TypeInfo, v267);
    sub_1C2E12C(&QuestPhaseDetailAddMaster_TypeInfo, v268);
    sub_1C2E12C(&QuestPhaseDetailMaster_TypeInfo, v269);
    sub_1C2E12C(&QuestPhaseIndividualityMaster_TypeInfo, v270);
    sub_1C2E12C(&QuestPhaseMaster_TypeInfo, v271);
    sub_1C2E12C(&QuestPhasePresentMaster_TypeInfo, v272);
    sub_1C2E12C(&QuestPickupMaster_TypeInfo, v273);
    sub_1C2E12C(&QuestRacePointMaster_TypeInfo, v274);
    sub_1C2E12C(&QuestRandomGroupMaster_TypeInfo, v275);
    sub_1C2E12C(&QuestReleaseMaster_TypeInfo, v276);
    sub_1C2E12C(&QuestReleaseOverwriteMaster_TypeInfo, v277);
    sub_1C2E12C(&QuestResetMaster_TypeInfo, v278);
    sub_1C2E12C(&QuestRestrictionInfoMaster_TypeInfo, v279);
    sub_1C2E12C(&QuestRestrictionMaster_TypeInfo, v280);
    sub_1C2E12C(&QuestScriptBranchMaterialMaster_TypeInfo, v281);
    sub_1C2E12C(&QuestScriptMaster_TypeInfo, v282);
    sub_1C2E12C(&QuestScriptMaterialNextMaster_TypeInfo, v283);
    sub_1C2E12C(&QuestScriptMaterialOverwriteMaster_TypeInfo, v284);
    sub_1C2E12C(&QuestScriptReleaseMaster_TypeInfo, v285);
    sub_1C2E12C(&QuestSpotReleaseMaster_TypeInfo, v286);
    sub_1C2E12C(&QuestUseItemGroupMaster_TypeInfo, v287);
    sub_1C2E12C(&QuestUseItemPickupMaster_TypeInfo, v288);
    sub_1C2E12C(&ReachedWaveInfoMaster_TypeInfo, v289);
    sub_1C2E12C(&RecommendAdviceMessageMaster_TypeInfo, v290);
    sub_1C2E12C(&RecommendSupportQuestMaster_TypeInfo, v291);
    sub_1C2E12C(&RecoverMaster_TypeInfo, v292);
    sub_1C2E12C(&ReprintStageMaster_TypeInfo, v293);
    sub_1C2E12C(&RestrictionBaseMaster_TypeInfo, v294);
    sub_1C2E12C(&RestrictionMaster_TypeInfo, v295);
    sub_1C2E12C(&RestrictionMessageMaster_TypeInfo, v296);
    sub_1C2E12C(&RestrictionSlotDetailMaster_TypeInfo, v297);
    sub_1C2E12C(&RestrictionSlotMaster_TypeInfo, v298);
    sub_1C2E12C(&RestrictionWholeMaster_TypeInfo, v299);
    sub_1C2E12C(&RoadmapMaster_TypeInfo, v300);
    sub_1C2E12C(&SelectBonusBaseMaster_TypeInfo, v301);
    sub_1C2E12C(&SelectBonusMaster_TypeInfo, v302);
    sub_1C2E12C(&ServantAddMaster_TypeInfo, v303);
    sub_1C2E12C(&ServantAnimationOverwriteMaster_TypeInfo, v304);
    sub_1C2E12C(&ServantAppendPassiveSkillMaster_TypeInfo, v305);
    sub_1C2E12C(&ServantBattlePointMaster_TypeInfo, v306);
    sub_1C2E12C(&ServantCardAddMaster_TypeInfo, v307);
    sub_1C2E12C(&ServantCardMaster_TypeInfo, v308);
    sub_1C2E12C(&ServantChangeMaster_TypeInfo, v309);
    sub_1C2E12C(&ServantClassMaster_TypeInfo, v310);
    sub_1C2E12C(&ServantCollectionMaster_TypeInfo, v311);
    sub_1C2E12C(&ServantCommandCodeUnlockMaster_TypeInfo, v312);
    sub_1C2E12C(&ServantCommentAddMaster_TypeInfo, v313);
    sub_1C2E12C(&ServantCommentMaster_TypeInfo, v314);
    sub_1C2E12C(&ServantCostumeMaster_TypeInfo, v315);
    sub_1C2E12C(&ServantCostumeReleaseMaster_TypeInfo, v316);
    sub_1C2E12C(&ServantExceedMaster_TypeInfo, v317);
    sub_1C2E12C(&ServantExpMaster_TypeInfo, v318);
    sub_1C2E12C(&ServantFilterMaster_TypeInfo, v319);
    sub_1C2E12C(&ServantFlagMaster_TypeInfo, v320);
    sub_1C2E12C(&ServantFlagReleaseMaster_TypeInfo, v321);
    sub_1C2E12C(&ServantGroupMaster_TypeInfo, v322);
    sub_1C2E12C(&ServantIndividualityMaster_TypeInfo, v323);
    sub_1C2E12C(&ServantLimitAddMaster_TypeInfo, v324);
    sub_1C2E12C(&ServantLimitImageMaster_TypeInfo, v325);
    sub_1C2E12C(&ServantLimitMaster_TypeInfo, v326);
    sub_1C2E12C(&ServantLimitSpoilerProtectionMaster_TypeInfo, v327);
    sub_1C2E12C(&ServantLvDetailMaster_TypeInfo, v328);
    sub_1C2E12C(&ServantMaster_TypeInfo, v329);
    sub_1C2E12C(&ServantMaterialFolderMaster_TypeInfo, v330);
    sub_1C2E12C(&ServantOverwriteMaster_TypeInfo, v331);
    sub_1C2E12C(&ServantPassiveSkillMaster_TypeInfo, v332);
    sub_1C2E12C(&ServantPassiveSkillReleaseMaster_TypeInfo, v333);
    sub_1C2E12C(&ServantPhotoMaster_TypeInfo, v334);
    sub_1C2E12C(&ServantProfileMaster_TypeInfo, v335);
    sub_1C2E12C(&ServantProfilePushMaster_TypeInfo, v336);
    sub_1C2E12C(&ServantRarityMaster_TypeInfo, v337);
    sub_1C2E12C(&ServantScriptAddMaster_TypeInfo, v338);
    sub_1C2E12C(&ServantScriptMaster_TypeInfo, v339);
    sub_1C2E12C(&ServantScriptMultipleMaster_TypeInfo, v340);
    sub_1C2E12C(&ServantSkillMaster_TypeInfo, v341);
    sub_1C2E12C(&ServantSkillReleaseMaster_TypeInfo, v342);
    sub_1C2E12C(&ServantTransformMaster_TypeInfo, v343);
    sub_1C2E12C(&ServantTreasureDeviceAddMaster_TypeInfo, v344);
    sub_1C2E12C(&ServantTreasureDeviceDamageMaster_TypeInfo, v345);
    sub_1C2E12C(&ServantTreasureDeviceReleaseMaster_TypeInfo, v346);
    sub_1C2E12C(&ServantTreasureDvcMaster_TypeInfo, v347);
    sub_1C2E12C(&ServantVoiceMaster_TypeInfo, v348);
    sub_1C2E12C(&ServantVoicePatternMaster_TypeInfo, v349);
    sub_1C2E12C(&ServantVoiceRelationMaster_TypeInfo, v350);
    sub_1C2E12C(&SetItemMaster_TypeInfo, v351);
    sub_1C2E12C(&ShopActionMaster_TypeInfo, v352);
    sub_1C2E12C(&ShopDetailMaster_TypeInfo, v353);
    sub_1C2E12C(&ShopGroupMaster_TypeInfo, v354);
    sub_1C2E12C(&ShopMaster_TypeInfo, v355);
    sub_1C2E12C(&ShopReleaseMaster_TypeInfo, v356);
    sub_1C2E12C(&ShopResetMaster_TypeInfo, v357);
    sub_1C2E12C(&ShopScriptMaster_TypeInfo, v358);
    sub_1C2E12C(&SkillAddMaster_TypeInfo, v359);
    sub_1C2E12C(&SkillDetailMaster_TypeInfo, v360);
    sub_1C2E12C(&SkillGroupMaster_TypeInfo, v361);
    sub_1C2E12C(&SkillGroupOverwriteMaster_TypeInfo, v362);
    sub_1C2E12C(&SkillIndividualityMaster_TypeInfo, v363);
    sub_1C2E12C(&SkillLvMaster_TypeInfo, v364);
    sub_1C2E12C(&SkillMaster_TypeInfo, v365);
    sub_1C2E12C(&SpotAddMaster_TypeInfo, v366);
    sub_1C2E12C(&SpotImageMaster_TypeInfo, v367);
    sub_1C2E12C(&SpotLayerMaster_TypeInfo, v368);
    sub_1C2E12C(&SpotMaster_TypeInfo, v369);
    sub_1C2E12C(&SpotPathMaster_TypeInfo, v370);
    sub_1C2E12C(&SpotRoadMaster_TypeInfo, v371);
    sub_1C2E12C(&StageMaster_TypeInfo, v372);
    sub_1C2E12C(&StatusEffectPosOverwriteMaster_TypeInfo, v373);
    sub_1C2E12C(&StoneShopMaster_TypeInfo, v374);
    sub_1C2E12C(&SubEquipMaster_TypeInfo, v375);
    sub_1C2E12C(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v376);
    sub_1C2E12C(&SvtCoinMaster_TypeInfo, v377);
    sub_1C2E12C(&SvtMaterialTdMaster_TypeInfo, v378);
    sub_1C2E12C(&SvtMultiPortraitMaster_TypeInfo, v379);
    sub_1C2E12C(&TblFriendMaster_TypeInfo, v380);
    sub_1C2E12C(&TblUserMaster_TypeInfo, v381);
    sub_1C2E12C(&TelopMaster_TypeInfo, v382);
    sub_1C2E12C(&TerminalOverwriteMaster_TypeInfo, v383);
    sub_1C2E12C(&TipsBattleMaster_TypeInfo, v384);
    sub_1C2E12C(&TotalBoxGachaMaster_TypeInfo, v385);
    sub_1C2E12C(&TotalEventPointMaster_TypeInfo, v386);
    sub_1C2E12C(&TotalEventRaceMaster_TypeInfo, v387);
    sub_1C2E12C(&TotalEventRaidMaster_TypeInfo, v388);
    sub_1C2E12C(&TotalLoginMaster_TypeInfo, v389);
    sub_1C2E12C(&TreasureBoxGiftMaster_TypeInfo, v390);
    sub_1C2E12C(&TreasureBoxMaster_TypeInfo, v391);
    sub_1C2E12C(&TreasureBoxTalkMaster_TypeInfo, v392);
    sub_1C2E12C(&TreasureDeviceSequenceWeightMaster_TypeInfo, v393);
    sub_1C2E12C(&TreasureDvcDetailMaster_TypeInfo, v394);
    sub_1C2E12C(&TreasureDvcLvMaster_TypeInfo, v395);
    sub_1C2E12C(&TreasureDvcMaster_TypeInfo, v396);
    sub_1C2E12C(&UpdateProfileDialogInfoMaster_TypeInfo, v397);
    sub_1C2E12C(&UserAccessaryMaster_TypeInfo, v398);
    sub_1C2E12C(&UserAccountLinkageMaster_TypeInfo, v399);
    sub_1C2E12C(&UserBlacklistMaster_TypeInfo, v400);
    sub_1C2E12C(&UserBoxGachaMaster_TypeInfo, v401);
    sub_1C2E12C(&UserClassBoardSquareMaster_TypeInfo, v402);
    sub_1C2E12C(&UserCoinRoomMaster_TypeInfo, v403);
    sub_1C2E12C(&UserCombineExpMaster_TypeInfo, v404);
    sub_1C2E12C(&UserCommandCodeCollectionMaster_TypeInfo, v405);
    sub_1C2E12C(&UserCommandCodeMaster_TypeInfo, v406);
    sub_1C2E12C(&UserContinueMaster_TypeInfo, v407);
    sub_1C2E12C(&UserDeckMaster_TypeInfo, v408);
    sub_1C2E12C(&UserDeleteReservationMaster_TypeInfo, v409);
    sub_1C2E12C(&UserEquipMaster_TypeInfo, v410);
    sub_1C2E12C(&UserEventAlloutBattleMaster_TypeInfo, v411);
    sub_1C2E12C(&UserEventBoardGameTokenMaster_TypeInfo, v412);
    sub_1C2E12C(&UserEventCooltimeRewardMaster_TypeInfo, v413);
    sub_1C2E12C(&UserEventDataLostMaster_TypeInfo, v414);
    sub_1C2E12C(&UserEventDeckMaster_TypeInfo, v415);
    sub_1C2E12C(&UserEventDiggingMaster_TypeInfo, v416);
    sub_1C2E12C(&UserEventExpeditionMaster_TypeInfo, v417);
    sub_1C2E12C(&UserEventFortificationMaster_TypeInfo, v418);
    sub_1C2E12C(&UserEventItemLinkSvtMaster_TypeInfo, v419);
    sub_1C2E12C(&UserEventMapMaster_TypeInfo, v420);
    sub_1C2E12C(&UserEventMaster_TypeInfo, v421);
    sub_1C2E12C(&UserEventMissionCondDetailMaster_TypeInfo, v422);
    sub_1C2E12C(&UserEventMissionFixMaster_TypeInfo, v423);
    sub_1C2E12C(&UserEventMissionMaster_TypeInfo, v424);
    sub_1C2E12C(&UserEventPointMaster_TypeInfo, v425);
    sub_1C2E12C(&UserEventQuestCooltimeMaster_TypeInfo, v426);
    sub_1C2E12C(&UserEventRaceMaster_TypeInfo, v427);
    sub_1C2E12C(&UserEventRaidMaster_TypeInfo, v428);
    sub_1C2E12C(&UserEventRandomMissionMaster_TypeInfo, v429);
    sub_1C2E12C(&UserEventServantFatigueMaster_TypeInfo, v430);
    sub_1C2E12C(&UserEventServantPointMaster_TypeInfo, v431);
    sub_1C2E12C(&UserEventSpotMaster_TypeInfo, v432);
    sub_1C2E12C(&UserEventTradeMaster_TypeInfo, v433);
    sub_1C2E12C(&UserExchangeSvtMaster_TypeInfo, v434);
    sub_1C2E12C(&UserExpMaster_TypeInfo, v435);
    sub_1C2E12C(&UserExternalPaymentStoneMaster_TypeInfo, v436);
    sub_1C2E12C(&UserFollowMaster_TypeInfo, v437);
    sub_1C2E12C(&UserFollowerMaster_TypeInfo, v438);
    sub_1C2E12C(&UserFormationMaster_TypeInfo, v439);
    sub_1C2E12C(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v440);
    sub_1C2E12C(&UserFriendRequestHistoryMaster_TypeInfo, v441);
    sub_1C2E12C(&UserGachaDrawLogMaster_TypeInfo, v442);
    sub_1C2E12C(&UserGachaExtraCountMaster_TypeInfo, v443);
    sub_1C2E12C(&UserGachaHistoryMaster_TypeInfo, v444);
    sub_1C2E12C(&UserGachaMaster_TypeInfo, v445);
    sub_1C2E12C(&UserGachaPickupCollateralMaster_TypeInfo, v446);
    sub_1C2E12C(&UserGameCommonMaster_TypeInfo, v447);
    sub_1C2E12C(&UserGameMaster_TypeInfo, v448);
    sub_1C2E12C(&UserHeelPortraitMaster_TypeInfo, v449);
    sub_1C2E12C(&UserImagePartsGroupMaster_TypeInfo, v450);
    sub_1C2E12C(&UserInterruptionQuestMaster_TypeInfo, v451);
    sub_1C2E12C(&UserItemMaster_TypeInfo, v452);
    sub_1C2E12C(&UserLoginMaster_TypeInfo, v453);
    sub_1C2E12C(&UserMaster_TypeInfo, v454);
    sub_1C2E12C(&UserNpcSvtRecordMaster_TypeInfo, v455);
    sub_1C2E12C(&UserPaymentLimitMaster_TypeInfo, v456);
    sub_1C2E12C(&UserPresentBoxMaster_TypeInfo, v457);
    sub_1C2E12C(&UserPresentHistoryMaster_TypeInfo, v458);
    sub_1C2E12C(&UserPrivilegeMaster_TypeInfo, v459);
    sub_1C2E12C(&UserQuestInfoMaster_TypeInfo, v460);
    sub_1C2E12C(&UserQuestMaster_TypeInfo, v461);
    sub_1C2E12C(&UserQuestRecordMaster_TypeInfo, v462);
    sub_1C2E12C(&UserQuestRouteMaster_TypeInfo, v463);
    sub_1C2E12C(&UserRecommendFollowerMaster_TypeInfo, v464);
    sub_1C2E12C(&UserRecommendSupportMaster_TypeInfo, v465);
    sub_1C2E12C(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v466);
    sub_1C2E12C(&UserServantAppendPassiveSkillMaster_TypeInfo, v467);
    sub_1C2E12C(&UserServantCollectionMaster_TypeInfo, v468);
    sub_1C2E12C(&UserServantCommandCardMaster_TypeInfo, v469);
    sub_1C2E12C(&UserServantCommandCodeMaster_TypeInfo, v470);
    sub_1C2E12C(&UserServantLeaderMaster_TypeInfo, v471);
    sub_1C2E12C(&UserServantMaster_TypeInfo, v472);
    sub_1C2E12C(&UserServantStorageMaster_TypeInfo, v473);
    sub_1C2E12C(&UserServantVoicePlayedMaster_TypeInfo, v474);
    sub_1C2E12C(&UserShopMaster_TypeInfo, v475);
    sub_1C2E12C(&UserSubEquipMaster_TypeInfo, v476);
    sub_1C2E12C(&UserSuperBossMaster_TypeInfo, v477);
    sub_1C2E12C(&UserSupportDeckMaster_TypeInfo, v478);
    sub_1C2E12C(&UserSvtCoinMaster_TypeInfo, v479);
    sub_1C2E12C(&ViewEnemyMaster_TypeInfo, v480);
    sub_1C2E12C(&ViewGachaFeaturedServantMaster_TypeInfo, v481);
    sub_1C2E12C(&ViewQuestEnemyInfoMaster_TypeInfo, v482);
    sub_1C2E12C(&ViewQuestInfoMaster_TypeInfo, v483);
    sub_1C2E12C(&ViewWaveEnemyMaster_TypeInfo, v484);
    sub_1C2E12C(&VoiceClosedMessageMaster_TypeInfo, v485);
    sub_1C2E12C(&VoiceCondMaster_TypeInfo, v486);
    sub_1C2E12C(&VoiceMaster_TypeInfo, v487);
    sub_1C2E12C(&VoiceMaterialCondMaster_TypeInfo, v488);
    sub_1C2E12C(&VoicePlayCondMaster_TypeInfo, v489);
    sub_1C2E12C(&VoicePlayGroupMaster_TypeInfo, v490);
    sub_1C2E12C(&VoiceReleaseMaster_TypeInfo, v491);
    sub_1C2E12C(&WarAddMaster_TypeInfo, v492);
    sub_1C2E12C(&WarBoardAIMaster_TypeInfo, v493);
    sub_1C2E12C(&WarBoardActionPointClassMaster_TypeInfo, v494);
    sub_1C2E12C(&WarBoardActionPointMaster_TypeInfo, v495);
    sub_1C2E12C(&WarBoardActionTrendConditionMaster_TypeInfo, v496);
    sub_1C2E12C(&WarBoardActionTrendGroupMaster_TypeInfo, v497);
    sub_1C2E12C(&WarBoardActionTrendMaster_TypeInfo, v498);
    sub_1C2E12C(&WarBoardCommonReleaseMaster_TypeInfo, v499);
    sub_1C2E12C(&WarBoardDataMaster_TypeInfo, v500);
    sub_1C2E12C(&WarBoardEffectMaster_TypeInfo, v501);
    sub_1C2E12C(&WarBoardEventMaster_TypeInfo, v502);
    sub_1C2E12C(&WarBoardEventScriptMaster_TypeInfo, v503);
    sub_1C2E12C(&WarBoardFutureActionTrendMaster_TypeInfo, v504);
    sub_1C2E12C(&WarBoardIndividualityClassMaster_TypeInfo, v505);
    sub_1C2E12C(&WarBoardItemMaster_TypeInfo, v506);
    sub_1C2E12C(&WarBoardMaster_TypeInfo, v507);
    sub_1C2E12C(&WarBoardMessageMaster_TypeInfo, v508);
    sub_1C2E12C(&WarBoardMessageScriptMaster_TypeInfo, v509);
    sub_1C2E12C(&WarBoardOnboardSkillMaster_TypeInfo, v510);
    sub_1C2E12C(&WarBoardPartySkillMaster_TypeInfo, v511);
    sub_1C2E12C(&WarBoardQuestMaster_TypeInfo, v512);
    sub_1C2E12C(&WarBoardRatingBaseMaster_TypeInfo, v513);
    sub_1C2E12C(&WarBoardRatingOffsetGroupMaster_TypeInfo, v514);
    sub_1C2E12C(&WarBoardRatingOffsetMaster_TypeInfo, v515);
    sub_1C2E12C(&WarBoardReinforcementsMaster_TypeInfo, v516);
    sub_1C2E12C(&WarBoardRoadMaster_TypeInfo, v517);
    sub_1C2E12C(&WarBoardSquareIndexGroupMaster_TypeInfo, v518);
    sub_1C2E12C(&WarBoardSquareMaster_TypeInfo, v519);
    sub_1C2E12C(&WarBoardStageBossMaster_TypeInfo, v520);
    sub_1C2E12C(&WarBoardStageDetailMaster_TypeInfo, v521);
    sub_1C2E12C(&WarBoardStageLayoutMaster_TypeInfo, v522);
    sub_1C2E12C(&WarBoardStageMaster_TypeInfo, v523);
    sub_1C2E12C(&WarBoardStageNpcMaster_TypeInfo, v524);
    sub_1C2E12C(&WarBoardStagePieceDetailMaster_TypeInfo, v525);
    sub_1C2E12C(&WarBoardStageReinforcementsMaster_TypeInfo, v526);
    sub_1C2E12C(&WarBoardStageWallMaster_TypeInfo, v527);
    sub_1C2E12C(&WarBoardTacticalTrendMaster_TypeInfo, v528);
    sub_1C2E12C(&WarBoardTreasureMaster_TypeInfo, v529);
    sub_1C2E12C(&WarGroupIgnoreMaster_TypeInfo, v530);
    sub_1C2E12C(&WarGroupMaster_TypeInfo, v531);
    sub_1C2E12C(&WarMaster_TypeInfo, v532);
    sub_1C2E12C(&WarMessageMaster_TypeInfo, v533);
    sub_1C2E12C(&WarQuestSelectionMaster_TypeInfo, v534);
    sub_1C2E12C(&WarReleaseMaster_TypeInfo, v535);
    byte_4BFD274 = 1;
  }
  v536 = (DataMasterBase_array *)sub_1C2E1D4(DataMasterBase___TypeInfo, 534LL);
  v537 = (ServantMaster_o *)sub_1C2E378(ServantMaster_TypeInfo);
  ServantMaster___ctor(v537, 0LL);
  if ( !v536 )
    sub_1C2E388(v538, v539);
  if ( v537 )
  {
    v538 = sub_1C2E268(v537, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  p_max_length = &v536->max_length;
  if ( !v536->max_length )
    goto LABEL_1607;
  v536->m_Items[0] = (DataMasterBase_o *)v537;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v536->m_Items, (int64_t)v537, v540, v541, v542, v543, v544, v545);
  v547 = (ServantClassMaster_o *)sub_1C2E378(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v547, 0LL);
  if ( v547 )
  {
    v538 = sub_1C2E268(v547, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1607;
  v536->m_Items[1] = (DataMasterBase_o *)v547;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[1], (int64_t)v547, v548, v549, v550, v551, v552, v553);
  v554 = (ServantCommentMaster_o *)sub_1C2E378(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v554, 0LL);
  if ( v554 )
  {
    v538 = sub_1C2E268(v554, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1607;
  v536->m_Items[2] = (DataMasterBase_o *)v554;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[2], (int64_t)v554, v555, v556, v557, v558, v559, v560);
  v561 = (ServantProfileMaster_o *)sub_1C2E378(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v561, 0LL);
  if ( v561 )
  {
    v538 = sub_1C2E268(v561, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1607;
  v536->m_Items[3] = (DataMasterBase_o *)v561;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[3], (int64_t)v561, v562, v563, v564, v565, v566, v567);
  v568 = (WarMaster_o *)sub_1C2E378(WarMaster_TypeInfo);
  WarMaster___ctor(v568, 0LL);
  if ( v568 )
  {
    v538 = sub_1C2E268(v568, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1607;
  v536->m_Items[4] = (DataMasterBase_o *)v568;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[4], (int64_t)v568, v569, v570, v571, v572, v573, v574);
  v575 = (UserMaster_o *)sub_1C2E378(UserMaster_TypeInfo);
  UserMaster___ctor(v575, 0LL);
  if ( v575 )
  {
    v538 = sub_1C2E268(v575, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1607;
  v536->m_Items[5] = (DataMasterBase_o *)v575;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[5], (int64_t)v575, v576, v577, v578, v579, v580, v581);
  v582 = (UserGameMaster_o *)sub_1C2E378(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v582, 0LL);
  if ( v582 )
  {
    v538 = sub_1C2E268(v582, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1607;
  v536->m_Items[6] = (DataMasterBase_o *)v582;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[6], (int64_t)v582, v583, v584, v585, v586, v587, v588);
  v589 = (TblUserMaster_o *)sub_1C2E378(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v589, 0LL);
  if ( v589 )
  {
    v538 = sub_1C2E268(v589, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1607;
  v536->m_Items[7] = (DataMasterBase_o *)v589;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[7], (int64_t)v589, v590, v591, v592, v593, v594, v595);
  v596 = (UserItemMaster_o *)sub_1C2E378(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v596, 0LL);
  if ( v596 )
  {
    v538 = sub_1C2E268(v596, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1607;
  v536->m_Items[8] = (DataMasterBase_o *)v596;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[8], (int64_t)v596, v597, v598, v599, v600, v601, v602);
  v603 = (UserServantMaster_o *)sub_1C2E378(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v603, 0LL);
  if ( v603 )
  {
    v538 = sub_1C2E268(v603, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1607;
  v536->m_Items[9] = (DataMasterBase_o *)v603;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[9], (int64_t)v603, v604, v605, v606, v607, v608, v609);
  v610 = (UserServantStorageMaster_o *)sub_1C2E378(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v610, 0LL);
  if ( v610 )
  {
    v538 = sub_1C2E268(v610, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1607;
  v536->m_Items[10] = (DataMasterBase_o *)v610;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[10], (int64_t)v610, v611, v612, v613, v614, v615, v616);
  v617 = (UserAccessaryMaster_o *)sub_1C2E378(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v617, 0LL);
  if ( v617 )
  {
    v538 = sub_1C2E268(v617, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1607;
  v536->m_Items[11] = (DataMasterBase_o *)v617;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[11], (int64_t)v617, v618, v619, v620, v621, v622, v623);
  v624 = (UserQuestMaster_o *)sub_1C2E378(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v624, 0LL);
  if ( v624 )
  {
    v538 = sub_1C2E268(v624, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1607;
  v536->m_Items[12] = (DataMasterBase_o *)v624;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[12], (int64_t)v624, v625, v626, v627, v628, v629, v630);
  v631 = (BattleMaster_o *)sub_1C2E378(BattleMaster_TypeInfo);
  BattleMaster___ctor(v631, 0LL);
  if ( v631 )
  {
    v538 = sub_1C2E268(v631, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1607;
  v536->m_Items[13] = (DataMasterBase_o *)v631;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[13], (int64_t)v631, v632, v633, v634, v635, v636, v637);
  v638 = (OtherUserGameMaster_o *)sub_1C2E378(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v638, 0LL);
  if ( v638 )
  {
    v538 = sub_1C2E268(v638, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1607;
  v536->m_Items[14] = (DataMasterBase_o *)v638;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[14], (int64_t)v638, v639, v640, v641, v642, v643, v644);
  v645 = (TblFriendMaster_o *)sub_1C2E378(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v645, 0LL);
  if ( v645 )
  {
    v538 = sub_1C2E268(v645, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1607;
  v536->m_Items[15] = (DataMasterBase_o *)v645;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[15], (int64_t)v645, v646, v647, v648, v649, v650, v651);
  v652 = (AreaMaster_o *)sub_1C2E378(AreaMaster_TypeInfo);
  AreaMaster___ctor(v652, 0LL);
  if ( v652 )
  {
    v538 = sub_1C2E268(v652, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1607;
  v536->m_Items[16] = (DataMasterBase_o *)v652;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[16], (int64_t)v652, v653, v654, v655, v656, v657, v658);
  v659 = (ServantCardMaster_o *)sub_1C2E378(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v659, 0LL);
  if ( v659 )
  {
    v538 = sub_1C2E268(v659, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1607;
  v536->m_Items[17] = (DataMasterBase_o *)v659;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[17], (int64_t)v659, v660, v661, v662, v663, v664, v665);
  v666 = (EventMaster_o *)sub_1C2E378(EventMaster_TypeInfo);
  EventMaster___ctor(v666, 0LL);
  if ( v666 )
  {
    v538 = sub_1C2E268(v666, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1607;
  v536->m_Items[18] = (DataMasterBase_o *)v666;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[18], (int64_t)v666, v667, v668, v669, v670, v671, v672);
  v673 = (ItemMaster_o *)sub_1C2E378(ItemMaster_TypeInfo);
  ItemMaster___ctor(v673, 0LL);
  if ( v673 )
  {
    v538 = sub_1C2E268(v673, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1607;
  v536->m_Items[19] = (DataMasterBase_o *)v673;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[19], (int64_t)v673, v674, v675, v676, v677, v678, v679);
  v680 = (QuestMaster_o *)sub_1C2E378(QuestMaster_TypeInfo);
  QuestMaster___ctor(v680, 0LL);
  if ( v680 )
  {
    v538 = sub_1C2E268(v680, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1607;
  v536->m_Items[20] = (DataMasterBase_o *)v680;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[20], (int64_t)v680, v681, v682, v683, v684, v685, v686);
  v687 = (QuestAddMaster_o *)sub_1C2E378(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v687, 0LL);
  if ( v687 )
  {
    v538 = sub_1C2E268(v687, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1607;
  v536->m_Items[21] = (DataMasterBase_o *)v687;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[21], (int64_t)v687, v688, v689, v690, v691, v692, v693);
  v694 = (QuestReleaseMaster_o *)sub_1C2E378(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v694, 0LL);
  if ( v694 )
  {
    v538 = sub_1C2E268(v694, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1607;
  v536->m_Items[22] = (DataMasterBase_o *)v694;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[22], (int64_t)v694, v695, v696, v697, v698, v699, v700);
  v701 = (QuestDateRangeMaster_o *)sub_1C2E378(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v701, 0LL);
  if ( v701 )
  {
    v538 = sub_1C2E268(v701, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1607;
  v536->m_Items[23] = (DataMasterBase_o *)v701;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[23], (int64_t)v701, v702, v703, v704, v705, v706, v707);
  v708 = (QuestPhaseMaster_o *)sub_1C2E378(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v708, 0LL);
  if ( v708 )
  {
    v538 = sub_1C2E268(v708, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1607;
  v536->m_Items[24] = (DataMasterBase_o *)v708;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[24], (int64_t)v708, v709, v710, v711, v712, v713, v714);
  v715 = (QuestPhaseDetailMaster_o *)sub_1C2E378(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v715, 0LL);
  if ( v715 )
  {
    v538 = sub_1C2E268(v715, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1607;
  v536->m_Items[25] = (DataMasterBase_o *)v715;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[25], (int64_t)v715, v716, v717, v718, v719, v720, v721);
  v722 = (QuestGroupMaster_o *)sub_1C2E378(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v722, 0LL);
  if ( v722 )
  {
    v538 = sub_1C2E268(v722, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1607;
  v536->m_Items[26] = (DataMasterBase_o *)v722;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[26], (int64_t)v722, v723, v724, v725, v726, v727, v728);
  v729 = (QuestRandomGroupMaster_o *)sub_1C2E378(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v729, 0LL);
  if ( v729 )
  {
    v538 = sub_1C2E268(v729, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1607;
  v536->m_Items[27] = (DataMasterBase_o *)v729;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[27], (int64_t)v729, v730, v731, v732, v733, v734, v735);
  v736 = (QuestConsumeItemMaster_o *)sub_1C2E378(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v736, 0LL);
  if ( v736 )
  {
    v538 = sub_1C2E268(v736, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1607;
  v536->m_Items[28] = (DataMasterBase_o *)v736;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[28], (int64_t)v736, v737, v738, v739, v740, v741, v742);
  v743 = (QuestMessageMaster_o *)sub_1C2E378(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v743, 0LL);
  if ( v743 )
  {
    v538 = sub_1C2E268(v743, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1607;
  v536->m_Items[29] = (DataMasterBase_o *)v743;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[29], (int64_t)v743, v744, v745, v746, v747, v748, v749);
  v750 = (UserQuestInfoMaster_o *)sub_1C2E378(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v750, 0LL);
  if ( v750 )
  {
    v538 = sub_1C2E268(v750, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1607;
  v536->m_Items[30] = (DataMasterBase_o *)v750;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[30], (int64_t)v750, v751, v752, v753, v754, v755, v756);
  v757 = (UserQuestRecordMaster_o *)sub_1C2E378(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v757, 0LL);
  if ( v757 )
  {
    v538 = sub_1C2E268(v757, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1607;
  v536->m_Items[31] = (DataMasterBase_o *)v757;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[31], (int64_t)v757, v758, v759, v760, v761, v762, v763);
  v764 = (ViewQuestInfoMaster_o *)sub_1C2E378(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v764, 0LL);
  if ( v764 )
  {
    v538 = sub_1C2E268(v764, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1607;
  v536->m_Items[32] = (DataMasterBase_o *)v764;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[32], (int64_t)v764, v765, v766, v767, v768, v769, v770);
  v771 = (ViewEnemyMaster_o *)sub_1C2E378(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v771, 0LL);
  if ( v771 )
  {
    v538 = sub_1C2E268(v771, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1607;
  v536->m_Items[33] = (DataMasterBase_o *)v771;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[33], (int64_t)v771, v772, v773, v774, v775, v776, v777);
  v778 = (ViewQuestEnemyInfoMaster_o *)sub_1C2E378(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v778, 0LL);
  if ( v778 )
  {
    v538 = sub_1C2E268(v778, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1607;
  v536->m_Items[34] = (DataMasterBase_o *)v778;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[34], (int64_t)v778, v779, v780, v781, v782, v783, v784);
  v785 = (BlankEarthSpotMaster_o *)sub_1C2E378(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v785, 0LL);
  if ( v785 )
  {
    v538 = sub_1C2E268(v785, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1607;
  v536->m_Items[35] = (DataMasterBase_o *)v785;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[35], (int64_t)v785, v786, v787, v788, v789, v790, v791);
  v792 = (BlankEarthSpotAddMaster_o *)sub_1C2E378(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v792, 0LL);
  if ( v792 )
  {
    v538 = sub_1C2E268(v792, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1607;
  v536->m_Items[36] = (DataMasterBase_o *)v792;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[36], (int64_t)v792, v793, v794, v795, v796, v797, v798);
  v799 = (SpotMaster_o *)sub_1C2E378(SpotMaster_TypeInfo);
  SpotMaster___ctor(v799, 0LL);
  if ( v799 )
  {
    v538 = sub_1C2E268(v799, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1607;
  v536->m_Items[37] = (DataMasterBase_o *)v799;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[37], (int64_t)v799, v800, v801, v802, v803, v804, v805);
  v806 = (SpotImageMaster_o *)sub_1C2E378(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v806, 0LL);
  if ( v806 )
  {
    v538 = sub_1C2E268(v806, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1607;
  v536->m_Items[38] = (DataMasterBase_o *)v806;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[38], (int64_t)v806, v807, v808, v809, v810, v811, v812);
  v813 = (SpotRoadMaster_o *)sub_1C2E378(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v813, 0LL);
  if ( v813 )
  {
    v538 = sub_1C2E268(v813, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1607;
  v536->m_Items[39] = (DataMasterBase_o *)v813;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[39], (int64_t)v813, v814, v815, v816, v817, v818, v819);
  v820 = (SpotPathMaster_o *)sub_1C2E378(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v820, 0LL);
  if ( v820 )
  {
    v538 = sub_1C2E268(v820, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1607;
  v536->m_Items[40] = (DataMasterBase_o *)v820;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[40], (int64_t)v820, v821, v822, v823, v824, v825, v826);
  v827 = (SpotAddMaster_o *)sub_1C2E378(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v827, 0LL);
  if ( v827 )
  {
    v538 = sub_1C2E268(v827, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1607;
  v536->m_Items[41] = (DataMasterBase_o *)v827;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[41], (int64_t)v827, v828, v829, v830, v831, v832, v833);
  v834 = (MapGimmickMaster_o *)sub_1C2E378(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v834, 0LL);
  if ( v834 )
  {
    v538 = sub_1C2E268(v834, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1607;
  v536->m_Items[42] = (DataMasterBase_o *)v834;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[42], (int64_t)v834, v835, v836, v837, v838, v839, v840);
  v841 = (GiftMaster_o *)sub_1C2E378(GiftMaster_TypeInfo);
  GiftMaster___ctor(v841, 0LL);
  if ( v841 )
  {
    v538 = sub_1C2E268(v841, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1607;
  v536->m_Items[43] = (DataMasterBase_o *)v841;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[43], (int64_t)v841, v842, v843, v844, v845, v846, v847);
  v848 = (GiftAddMaster_o *)sub_1C2E378(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v848, 0LL);
  if ( v848 )
  {
    v538 = sub_1C2E268(v848, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1607;
  v536->m_Items[44] = (DataMasterBase_o *)v848;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[44], (int64_t)v848, v849, v850, v851, v852, v853, v854);
  v855 = (ShopMaster_o *)sub_1C2E378(ShopMaster_TypeInfo);
  ShopMaster___ctor(v855, 0LL);
  if ( v855 )
  {
    v538 = sub_1C2E268(v855, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1607;
  v536->m_Items[45] = (DataMasterBase_o *)v855;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[45], (int64_t)v855, v856, v857, v858, v859, v860, v861);
  v862 = (StoneShopMaster_o *)sub_1C2E378(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v862, 0LL);
  if ( v862 )
  {
    v538 = sub_1C2E268(v862, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1607;
  v536->m_Items[46] = (DataMasterBase_o *)v862;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[46], (int64_t)v862, v863, v864, v865, v866, v867, v868);
  v869 = (BankShopMaster_o *)sub_1C2E378(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v869, 0LL);
  if ( v869 )
  {
    v538 = sub_1C2E268(v869, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1607;
  v536->m_Items[47] = (DataMasterBase_o *)v869;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[47], (int64_t)v869, v870, v871, v872, v873, v874, v875);
  v876 = (ShopScriptMaster_o *)sub_1C2E378(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v876, 0LL);
  if ( v876 )
  {
    v538 = sub_1C2E268(v876, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1607;
  v536->m_Items[48] = (DataMasterBase_o *)v876;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[48], (int64_t)v876, v877, v878, v879, v880, v881, v882);
  v883 = (StageMaster_o *)sub_1C2E378(StageMaster_TypeInfo);
  StageMaster___ctor(v883, 0LL);
  if ( v883 )
  {
    v538 = sub_1C2E268(v883, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1607;
  v536->m_Items[49] = (DataMasterBase_o *)v883;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[49], (int64_t)v883, v884, v885, v886, v887, v888, v889);
  v890 = (ServantGroupMaster_o *)sub_1C2E378(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v890, 0LL);
  if ( v890 )
  {
    v538 = sub_1C2E268(v890, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1607;
  v536->m_Items[50] = (DataMasterBase_o *)v890;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[50], (int64_t)v890, v891, v892, v893, v894, v895, v896);
  v897 = (ServantLimitMaster_o *)sub_1C2E378(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v897, 0LL);
  if ( v897 )
  {
    v538 = sub_1C2E268(v897, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1607;
  v536->m_Items[51] = (DataMasterBase_o *)v897;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[51], (int64_t)v897, v898, v899, v900, v901, v902, v903);
  v904 = (ServantLimitAddMaster_o *)sub_1C2E378(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v904, 0LL);
  if ( v904 )
  {
    v538 = sub_1C2E268(v904, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1607;
  v536->m_Items[52] = (DataMasterBase_o *)v904;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[52], (int64_t)v904, v905, v906, v907, v908, v909, v910);
  v911 = (ServantSkillMaster_o *)sub_1C2E378(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v911, 0LL);
  if ( v911 )
  {
    v538 = sub_1C2E268(v911, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1607;
  v536->m_Items[53] = (DataMasterBase_o *)v911;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[53], (int64_t)v911, v912, v913, v914, v915, v916, v917);
  v918 = (ServantPassiveSkillMaster_o *)sub_1C2E378(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v918, 0LL);
  if ( v918 )
  {
    v538 = sub_1C2E268(v918, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1607;
  v536->m_Items[54] = (DataMasterBase_o *)v918;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[54], (int64_t)v918, v919, v920, v921, v922, v923, v924);
  v925 = (BgmMaster_o *)sub_1C2E378(BgmMaster_TypeInfo);
  BgmMaster___ctor(v925, 0LL);
  if ( v925 )
  {
    v538 = sub_1C2E268(v925, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1607;
  v536->m_Items[55] = (DataMasterBase_o *)v925;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[55], (int64_t)v925, v926, v927, v928, v929, v930, v931);
  v932 = (ServantScriptMaster_o *)sub_1C2E378(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v932, 0LL);
  if ( v932 )
  {
    v538 = sub_1C2E268(v932, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1607;
  v536->m_Items[56] = (DataMasterBase_o *)v932;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[56], (int64_t)v932, v933, v934, v935, v936, v937, v938);
  v939 = (NewsMaster_o *)sub_1C2E378(NewsMaster_TypeInfo);
  NewsMaster___ctor(v939, 0LL);
  if ( v939 )
  {
    v538 = sub_1C2E268(v939, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1607;
  v536->m_Items[57] = (DataMasterBase_o *)v939;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[57], (int64_t)v939, v940, v941, v942, v943, v944, v945);
  v946 = (TelopMaster_o *)sub_1C2E378(TelopMaster_TypeInfo);
  TelopMaster___ctor(v946, 0LL);
  if ( v946 )
  {
    v538 = sub_1C2E268(v946, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1607;
  v536->m_Items[58] = (DataMasterBase_o *)v946;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[58], (int64_t)v946, v947, v948, v949, v950, v951, v952);
  v953 = (UserExpMaster_o *)sub_1C2E378(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v953, 0LL);
  if ( v953 )
  {
    v538 = sub_1C2E268(v953, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1607;
  v536->m_Items[59] = (DataMasterBase_o *)v953;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[59], (int64_t)v953, v954, v955, v956, v957, v958, v959);
  v960 = (TreasureDvcMaster_o *)sub_1C2E378(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v960, 0LL);
  if ( v960 )
  {
    v538 = sub_1C2E268(v960, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1607;
  v536->m_Items[60] = (DataMasterBase_o *)v960;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[60], (int64_t)v960, v961, v962, v963, v964, v965, v966);
  v967 = (ServantTreasureDvcMaster_o *)sub_1C2E378(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v967, 0LL);
  if ( v967 )
  {
    v538 = sub_1C2E268(v967, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1607;
  v536->m_Items[61] = (DataMasterBase_o *)v967;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[61], (int64_t)v967, v968, v969, v970, v971, v972, v973);
  v974 = (SkillMaster_o *)sub_1C2E378(SkillMaster_TypeInfo);
  SkillMaster___ctor(v974, 0LL);
  if ( v974 )
  {
    v538 = sub_1C2E268(v974, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1607;
  v536->m_Items[62] = (DataMasterBase_o *)v974;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[62], (int64_t)v974, v975, v976, v977, v978, v979, v980);
  v981 = (SkillLvMaster_o *)sub_1C2E378(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v981, 0LL);
  if ( v981 )
  {
    v538 = sub_1C2E268(v981, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1607;
  v536->m_Items[63] = (DataMasterBase_o *)v981;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[63], (int64_t)v981, v982, v983, v984, v985, v986, v987);
  v988 = (SkillDetailMaster_o *)sub_1C2E378(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v988, 0LL);
  if ( v988 )
  {
    v538 = sub_1C2E268(v988, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1607;
  v536->m_Items[64] = (DataMasterBase_o *)v988;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[64], (int64_t)v988, v989, v990, v991, v992, v993, v994);
  v995 = (CommandSpellMaster_o *)sub_1C2E378(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v995, 0LL);
  if ( v995 )
  {
    v538 = sub_1C2E268(v995, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1607;
  v536->m_Items[65] = (DataMasterBase_o *)v995;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v536->m_Items[65], (int64_t)v995, v996, v997, v998, v999, v1000, v1001);
  v1002 = (EquipMaster_o *)sub_1C2E378(EquipMaster_TypeInfo);
  EquipMaster___ctor(v1002, 0LL);
  if ( v1002 )
  {
    v538 = sub_1C2E268(v1002, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1607;
  v536->m_Items[66] = (DataMasterBase_o *)v1002;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[66],
    (int64_t)v1002,
    v1003,
    v1004,
    v1005,
    v1006,
    v1007,
    v1008);
  v1009 = (EquipExpMaster_o *)sub_1C2E378(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v1009, 0LL);
  if ( v1009 )
  {
    v538 = sub_1C2E268(v1009, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1607;
  v536->m_Items[67] = (DataMasterBase_o *)v1009;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[67],
    (int64_t)v1009,
    v1010,
    v1011,
    v1012,
    v1013,
    v1014,
    v1015);
  v1016 = (EquipSkillMaster_o *)sub_1C2E378(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v1016, 0LL);
  if ( v1016 )
  {
    v538 = sub_1C2E268(v1016, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1607;
  v536->m_Items[68] = (DataMasterBase_o *)v1016;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[68],
    (int64_t)v1016,
    v1017,
    v1018,
    v1019,
    v1020,
    v1021,
    v1022);
  v1023 = (SubEquipMaster_o *)sub_1C2E378(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v1023, 0LL);
  if ( v1023 )
  {
    v538 = sub_1C2E268(v1023, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1607;
  v536->m_Items[69] = (DataMasterBase_o *)v1023;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[69],
    (int64_t)v1023,
    v1024,
    v1025,
    v1026,
    v1027,
    v1028,
    v1029);
  v1030 = (AccessaryMaster_o *)sub_1C2E378(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v1030, 0LL);
  if ( v1030 )
  {
    v538 = sub_1C2E268(v1030, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1607;
  v536->m_Items[70] = (DataMasterBase_o *)v1030;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[70],
    (int64_t)v1030,
    v1031,
    v1032,
    v1033,
    v1034,
    v1035,
    v1036);
  v1037 = (UserPresentBoxMaster_o *)sub_1C2E378(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v1037, 0LL);
  if ( v1037 )
  {
    v538 = sub_1C2E268(v1037, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1607;
  v536->m_Items[71] = (DataMasterBase_o *)v1037;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[71],
    (int64_t)v1037,
    v1038,
    v1039,
    v1040,
    v1041,
    v1042,
    v1043);
  v1044 = (UserDeckMaster_o *)sub_1C2E378(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v1044, 0LL);
  if ( v1044 )
  {
    v538 = sub_1C2E268(v1044, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1607;
  v536->m_Items[72] = (DataMasterBase_o *)v1044;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[72],
    (int64_t)v1044,
    v1045,
    v1046,
    v1047,
    v1048,
    v1049,
    v1050);
  v1051 = (UserSubEquipMaster_o *)sub_1C2E378(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v1051, 0LL);
  if ( v1051 )
  {
    v538 = sub_1C2E268(v1051, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1607;
  v536->m_Items[73] = (DataMasterBase_o *)v1051;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[73],
    (int64_t)v1051,
    v1052,
    v1053,
    v1054,
    v1055,
    v1056,
    v1057);
  v1058 = (GachaMaster_o *)sub_1C2E378(GachaMaster_TypeInfo);
  GachaMaster___ctor(v1058, 0LL);
  if ( v1058 )
  {
    v538 = sub_1C2E268(v1058, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1607;
  v536->m_Items[74] = (DataMasterBase_o *)v1058;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[74],
    (int64_t)v1058,
    v1059,
    v1060,
    v1061,
    v1062,
    v1063,
    v1064);
  v1065 = (GachaImageMaster_o *)sub_1C2E378(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v1065, 0LL);
  if ( v1065 )
  {
    v538 = sub_1C2E268(v1065, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1607;
  v536->m_Items[75] = (DataMasterBase_o *)v1065;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[75],
    (int64_t)v1065,
    v1066,
    v1067,
    v1068,
    v1069,
    v1070,
    v1071);
  v1072 = (UserGachaMaster_o *)sub_1C2E378(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v1072, 0LL);
  if ( v1072 )
  {
    v538 = sub_1C2E268(v1072, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1607;
  v536->m_Items[76] = (DataMasterBase_o *)v1072;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[76],
    (int64_t)v1072,
    v1073,
    v1074,
    v1075,
    v1076,
    v1077,
    v1078);
  v1079 = (UserEquipMaster_o *)sub_1C2E378(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v1079, 0LL);
  if ( v1079 )
  {
    v538 = sub_1C2E268(v1079, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1607;
  v536->m_Items[77] = (DataMasterBase_o *)v1079;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[77],
    (int64_t)v1079,
    v1080,
    v1081,
    v1082,
    v1083,
    v1084,
    v1085);
  v1086 = (UserServantCollectionMaster_o *)sub_1C2E378(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v1086, 0LL);
  if ( v1086 )
  {
    v538 = sub_1C2E268(v1086, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1607;
  v536->m_Items[78] = (DataMasterBase_o *)v1086;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[78],
    (int64_t)v1086,
    v1087,
    v1088,
    v1089,
    v1090,
    v1091,
    v1092);
  v1093 = (FriendshipMaster_o *)sub_1C2E378(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v1093, 0LL);
  if ( v1093 )
  {
    v538 = sub_1C2E268(v1093, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1607;
  v536->m_Items[79] = (DataMasterBase_o *)v1093;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[79],
    (int64_t)v1093,
    v1094,
    v1095,
    v1096,
    v1097,
    v1098,
    v1099);
  v1100 = (GachaTicketMaster_o *)sub_1C2E378(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v1100, 0LL);
  if ( v1100 )
  {
    v538 = sub_1C2E268(v1100, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1607;
  v536->m_Items[80] = (DataMasterBase_o *)v1100;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[80],
    (int64_t)v1100,
    v1101,
    v1102,
    v1103,
    v1104,
    v1105,
    v1106);
  v1107 = (UserFormationMaster_o *)sub_1C2E378(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v1107, 0LL);
  if ( v1107 )
  {
    v538 = sub_1C2E268(v1107, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1607;
  v536->m_Items[81] = (DataMasterBase_o *)v1107;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[81],
    (int64_t)v1107,
    v1108,
    v1109,
    v1110,
    v1111,
    v1112,
    v1113);
  v1114 = (FunctionMaster_o *)sub_1C2E378(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v1114, 0LL);
  if ( v1114 )
  {
    v538 = sub_1C2E268(v1114, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1607;
  v536->m_Items[82] = (DataMasterBase_o *)v1114;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[82],
    (int64_t)v1114,
    v1115,
    v1116,
    v1117,
    v1118,
    v1119,
    v1120);
  v1121 = (BuffMaster_o *)sub_1C2E378(BuffMaster_TypeInfo);
  BuffMaster___ctor(v1121, 0LL);
  if ( v1121 )
  {
    v538 = sub_1C2E268(v1121, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1607;
  v536->m_Items[83] = (DataMasterBase_o *)v1121;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[83],
    (int64_t)v1121,
    v1122,
    v1123,
    v1124,
    v1125,
    v1126,
    v1127);
  v1128 = (GachaReleaseMaster_o *)sub_1C2E378(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v1128, 0LL);
  if ( v1128 )
  {
    v538 = sub_1C2E268(v1128, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1607;
  v536->m_Items[84] = (DataMasterBase_o *)v1128;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[84],
    (int64_t)v1128,
    v1129,
    v1130,
    v1131,
    v1132,
    v1133,
    v1134);
  v1135 = (CombineQpMaster_o *)sub_1C2E378(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v1135, 0LL);
  if ( v1135 )
  {
    v538 = sub_1C2E268(v1135, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1607;
  v536->m_Items[85] = (DataMasterBase_o *)v1135;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[85],
    (int64_t)v1135,
    v1136,
    v1137,
    v1138,
    v1139,
    v1140,
    v1141);
  v1142 = (CombineMaterialMaster_o *)sub_1C2E378(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v1142, 0LL);
  if ( v1142 )
  {
    v538 = sub_1C2E268(v1142, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1607;
  v536->m_Items[86] = (DataMasterBase_o *)v1142;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[86],
    (int64_t)v1142,
    v1143,
    v1144,
    v1145,
    v1146,
    v1147,
    v1148);
  v1149 = (EventCombineMaster_o *)sub_1C2E378(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v1149, 0LL);
  if ( v1149 )
  {
    v538 = sub_1C2E268(v1149, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1607;
  v536->m_Items[87] = (DataMasterBase_o *)v1149;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[87],
    (int64_t)v1149,
    v1150,
    v1151,
    v1152,
    v1153,
    v1154,
    v1155);
  v1156 = (ServantExpMaster_o *)sub_1C2E378(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v1156, 0LL);
  if ( v1156 )
  {
    v538 = sub_1C2E268(v1156, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1607;
  v536->m_Items[88] = (DataMasterBase_o *)v1156;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[88],
    (int64_t)v1156,
    v1157,
    v1158,
    v1159,
    v1160,
    v1161,
    v1162);
  v1163 = (CombineSkillMaster_o *)sub_1C2E378(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v1163, 0LL);
  if ( v1163 )
  {
    v538 = sub_1C2E268(v1163, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1607;
  v536->m_Items[89] = (DataMasterBase_o *)v1163;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[89],
    (int64_t)v1163,
    v1164,
    v1165,
    v1166,
    v1167,
    v1168,
    v1169);
  v1170 = (CombineTdMaster_o *)sub_1C2E378(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v1170, 0LL);
  if ( v1170 )
  {
    v538 = sub_1C2E268(v1170, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1607;
  v536->m_Items[90] = (DataMasterBase_o *)v1170;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[90],
    (int64_t)v1170,
    v1171,
    v1172,
    v1173,
    v1174,
    v1175,
    v1176);
  v1177 = (EventQuestMaster_o *)sub_1C2E378(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v1177, 0LL);
  if ( v1177 )
  {
    v538 = sub_1C2E268(v1177, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1607;
  v536->m_Items[91] = (DataMasterBase_o *)v1177;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[91],
    (int64_t)v1177,
    v1178,
    v1179,
    v1180,
    v1181,
    v1182,
    v1183);
  v1184 = (EventCampaignMaster_o *)sub_1C2E378(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v1184, 0LL);
  if ( v1184 )
  {
    v538 = sub_1C2E268(v1184, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1607;
  v536->m_Items[92] = (DataMasterBase_o *)v1184;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[92],
    (int64_t)v1184,
    v1185,
    v1186,
    v1187,
    v1188,
    v1189,
    v1190);
  v1191 = (IllustratorMaster_o *)sub_1C2E378(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v1191, 0LL);
  if ( v1191 )
  {
    v538 = sub_1C2E268(v1191, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1607;
  v536->m_Items[93] = (DataMasterBase_o *)v1191;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[93],
    (int64_t)v1191,
    v1192,
    v1193,
    v1194,
    v1195,
    v1196,
    v1197);
  v1198 = (CvMaster_o *)sub_1C2E378(CvMaster_TypeInfo);
  CvMaster___ctor(v1198, 0LL);
  if ( v1198 )
  {
    v538 = sub_1C2E268(v1198, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1607;
  v536->m_Items[94] = (DataMasterBase_o *)v1198;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[94],
    (int64_t)v1198,
    v1199,
    v1200,
    v1201,
    v1202,
    v1203,
    v1204);
  v1205 = (TreasureDvcLvMaster_o *)sub_1C2E378(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v1205, 0LL);
  if ( v1205 )
  {
    v538 = sub_1C2E268(v1205, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1607;
  v536->m_Items[95] = (DataMasterBase_o *)v1205;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[95],
    (int64_t)v1205,
    v1206,
    v1207,
    v1208,
    v1209,
    v1210,
    v1211);
  v1212 = (TreasureDvcDetailMaster_o *)sub_1C2E378(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v1212, 0LL);
  if ( v1212 )
  {
    v538 = sub_1C2E268(v1212, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1607;
  v536->m_Items[96] = (DataMasterBase_o *)v1212;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[96],
    (int64_t)v1212,
    v1213,
    v1214,
    v1215,
    v1216,
    v1217,
    v1218);
  v1219 = (UserFollowerMaster_o *)sub_1C2E378(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v1219, 0LL);
  if ( v1219 )
  {
    v538 = sub_1C2E268(v1219, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1607;
  v536->m_Items[97] = (DataMasterBase_o *)v1219;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[97],
    (int64_t)v1219,
    v1220,
    v1221,
    v1222,
    v1223,
    v1224,
    v1225);
  v1226 = (NpcFollowerMaster_o *)sub_1C2E378(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v1226, 0LL);
  if ( v1226 )
  {
    v538 = sub_1C2E268(v1226, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1607;
  v536->m_Items[98] = (DataMasterBase_o *)v1226;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[98],
    (int64_t)v1226,
    v1227,
    v1228,
    v1229,
    v1230,
    v1231,
    v1232);
  v1233 = (NpcServantFollowerMaster_o *)sub_1C2E378(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v1233, 0LL);
  if ( v1233 )
  {
    v538 = sub_1C2E268(v1233, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1607;
  v536->m_Items[99] = (DataMasterBase_o *)v1233;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[99],
    (int64_t)v1233,
    v1234,
    v1235,
    v1236,
    v1237,
    v1238,
    v1239);
  v1240 = (UserEventMaster_o *)sub_1C2E378(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v1240, 0LL);
  if ( v1240 )
  {
    v538 = sub_1C2E268(v1240, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1607;
  v536->m_Items[100] = (DataMasterBase_o *)v1240;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[100],
    (int64_t)v1240,
    v1241,
    v1242,
    v1243,
    v1244,
    v1245,
    v1246);
  v1247 = (UserShopMaster_o *)sub_1C2E378(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v1247, 0LL);
  if ( v1247 )
  {
    v538 = sub_1C2E268(v1247, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1607;
  v536->m_Items[101] = (DataMasterBase_o *)v1247;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[101],
    (int64_t)v1247,
    v1248,
    v1249,
    v1250,
    v1251,
    v1252,
    v1253);
  v1254 = (UserContinueMaster_o *)sub_1C2E378(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v1254, 0LL);
  if ( v1254 )
  {
    v538 = sub_1C2E268(v1254, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1607;
  v536->m_Items[102] = (DataMasterBase_o *)v1254;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[102],
    (int64_t)v1254,
    v1255,
    v1256,
    v1257,
    v1258,
    v1259,
    v1260);
  v1261 = (ConstantMaster_o *)sub_1C2E378(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v1261, 0LL);
  if ( v1261 )
  {
    v538 = sub_1C2E268(v1261, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1607;
  v536->m_Items[103] = (DataMasterBase_o *)v1261;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[103],
    (int64_t)v1261,
    v1262,
    v1263,
    v1264,
    v1265,
    v1266,
    v1267);
  v1268 = (ConstantLongMaster_o *)sub_1C2E378(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v1268, 0LL);
  if ( v1268 )
  {
    v538 = sub_1C2E268(v1268, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1607;
  v536->m_Items[104] = (DataMasterBase_o *)v1268;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[104],
    (int64_t)v1268,
    v1269,
    v1270,
    v1271,
    v1272,
    v1273,
    v1274);
  v1275 = (ConstantStrMaster_o *)sub_1C2E378(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v1275, 0LL);
  if ( v1275 )
  {
    v538 = sub_1C2E268(v1275, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1607;
  v536->m_Items[105] = (DataMasterBase_o *)v1275;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[105],
    (int64_t)v1275,
    v1276,
    v1277,
    v1278,
    v1279,
    v1280,
    v1281);
  v1282 = (AiMaster_o *)sub_1C2E378(AiMaster_TypeInfo);
  AiMaster___ctor(v1282, 0LL);
  if ( v1282 )
  {
    v538 = sub_1C2E268(v1282, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1607;
  v536->m_Items[106] = (DataMasterBase_o *)v1282;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[106],
    (int64_t)v1282,
    v1283,
    v1284,
    v1285,
    v1286,
    v1287,
    v1288);
  v1289 = (AiActMaster_o *)sub_1C2E378(AiActMaster_TypeInfo);
  AiActMaster___ctor(v1289, 0LL);
  if ( v1289 )
  {
    v538 = sub_1C2E268(v1289, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1607;
  v536->m_Items[107] = (DataMasterBase_o *)v1289;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[107],
    (int64_t)v1289,
    v1290,
    v1291,
    v1292,
    v1293,
    v1294,
    v1295);
  v1296 = (AttriRelationMaster_o *)sub_1C2E378(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v1296, 0LL);
  if ( v1296 )
  {
    v538 = sub_1C2E268(v1296, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1607;
  v536->m_Items[108] = (DataMasterBase_o *)v1296;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[108],
    (int64_t)v1296,
    v1297,
    v1298,
    v1299,
    v1300,
    v1301,
    v1302);
  v1303 = (ClassRelationMaster_o *)sub_1C2E378(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v1303, 0LL);
  if ( v1303 )
  {
    v538 = sub_1C2E268(v1303, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1607;
  v536->m_Items[109] = (DataMasterBase_o *)v1303;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[109],
    (int64_t)v1303,
    v1304,
    v1305,
    v1306,
    v1307,
    v1308,
    v1309);
  v1310 = (EffectMaster_o *)sub_1C2E378(EffectMaster_TypeInfo);
  EffectMaster___ctor(v1310, 0LL);
  if ( v1310 )
  {
    v538 = sub_1C2E268(v1310, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1607;
  v536->m_Items[110] = (DataMasterBase_o *)v1310;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[110],
    (int64_t)v1310,
    v1311,
    v1312,
    v1313,
    v1314,
    v1315,
    v1316);
  v1317 = (EquipImageMaster_o *)sub_1C2E378(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v1317, 0LL);
  if ( v1317 )
  {
    v538 = sub_1C2E268(v1317, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1607;
  v536->m_Items[111] = (DataMasterBase_o *)v1317;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[111],
    (int64_t)v1317,
    v1318,
    v1319,
    v1320,
    v1321,
    v1322,
    v1323);
  v1324 = (ServantVoiceMaster_o *)sub_1C2E378(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v1324, 0LL);
  if ( v1324 )
  {
    v538 = sub_1C2E268(v1324, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1607;
  v536->m_Items[112] = (DataMasterBase_o *)v1324;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[112],
    (int64_t)v1324,
    v1325,
    v1326,
    v1327,
    v1328,
    v1329,
    v1330);
  v1331 = (CombineLimitMaster_o *)sub_1C2E378(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v1331, 0LL);
  if ( v1331 )
  {
    v538 = sub_1C2E268(v1331, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1607;
  v536->m_Items[113] = (DataMasterBase_o *)v1331;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[113],
    (int64_t)v1331,
    v1332,
    v1333,
    v1334,
    v1335,
    v1336,
    v1337);
  v1338 = (CardMaster_o *)sub_1C2E378(CardMaster_TypeInfo);
  CardMaster___ctor(v1338, 0LL);
  if ( v1338 )
  {
    v538 = sub_1C2E268(v1338, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1607;
  v536->m_Items[114] = (DataMasterBase_o *)v1338;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[114],
    (int64_t)v1338,
    v1339,
    v1340,
    v1341,
    v1342,
    v1343,
    v1344);
  v1345 = (CombineQpSvtEquipMaster_o *)sub_1C2E378(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v1345, 0LL);
  if ( v1345 )
  {
    v538 = sub_1C2E268(v1345, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1607;
  v536->m_Items[115] = (DataMasterBase_o *)v1345;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[115],
    (int64_t)v1345,
    v1346,
    v1347,
    v1348,
    v1349,
    v1350,
    v1351);
  v1352 = (ServantRarityMaster_o *)sub_1C2E378(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v1352, 0LL);
  if ( v1352 )
  {
    v538 = sub_1C2E268(v1352, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1607;
  v536->m_Items[116] = (DataMasterBase_o *)v1352;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[116],
    (int64_t)v1352,
    v1353,
    v1354,
    v1355,
    v1356,
    v1357,
    v1358);
  v1359 = (SetItemMaster_o *)sub_1C2E378(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v1359, 0LL);
  if ( v1359 )
  {
    v538 = sub_1C2E268(v1359, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1607;
  v536->m_Items[117] = (DataMasterBase_o *)v1359;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[117],
    (int64_t)v1359,
    v1360,
    v1361,
    v1362,
    v1363,
    v1364,
    v1365);
  v1366 = (RecoverMaster_o *)sub_1C2E378(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v1366, 0LL);
  if ( v1366 )
  {
    v538 = sub_1C2E268(v1366, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1607;
  v536->m_Items[118] = (DataMasterBase_o *)v1366;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[118],
    (int64_t)v1366,
    v1367,
    v1368,
    v1369,
    v1370,
    v1371,
    v1372);
  v1373 = (BannerMaster_o *)sub_1C2E378(BannerMaster_TypeInfo);
  BannerMaster___ctor(v1373, 0LL);
  if ( v1373 )
  {
    v538 = sub_1C2E268(v1373, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1607;
  v536->m_Items[119] = (DataMasterBase_o *)v1373;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[119],
    (int64_t)v1373,
    v1374,
    v1375,
    v1376,
    v1377,
    v1378,
    v1379);
  v1380 = (ShopReleaseMaster_o *)sub_1C2E378(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v1380, 0LL);
  if ( v1380 )
  {
    v538 = sub_1C2E268(v1380, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1607;
  v536->m_Items[120] = (DataMasterBase_o *)v1380;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[120],
    (int64_t)v1380,
    v1381,
    v1382,
    v1383,
    v1384,
    v1385,
    v1386);
  v1387 = (EventRewardMaster_o *)sub_1C2E378(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v1387, 0LL);
  if ( v1387 )
  {
    v538 = sub_1C2E268(v1387, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1607;
  v536->m_Items[121] = (DataMasterBase_o *)v1387;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[121],
    (int64_t)v1387,
    v1388,
    v1389,
    v1390,
    v1391,
    v1392,
    v1393);
  v1394 = (EventDetailMaster_o *)sub_1C2E378(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v1394, 0LL);
  if ( v1394 )
  {
    v538 = sub_1C2E268(v1394, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1607;
  v536->m_Items[122] = (DataMasterBase_o *)v1394;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[122],
    (int64_t)v1394,
    v1395,
    v1396,
    v1397,
    v1398,
    v1399,
    v1400);
  v1401 = (EventServantMaster_o *)sub_1C2E378(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v1401, 0LL);
  if ( v1401 )
  {
    v538 = sub_1C2E268(v1401, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1607;
  v536->m_Items[123] = (DataMasterBase_o *)v1401;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[123],
    (int64_t)v1401,
    v1402,
    v1403,
    v1404,
    v1405,
    v1406,
    v1407);
  v1408 = (BoxGachaMaster_o *)sub_1C2E378(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v1408, 0LL);
  if ( v1408 )
  {
    v538 = sub_1C2E268(v1408, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1607;
  v536->m_Items[124] = (DataMasterBase_o *)v1408;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[124],
    (int64_t)v1408,
    v1409,
    v1410,
    v1411,
    v1412,
    v1413,
    v1414);
  v1415 = (BoxGachaBaseMaster_o *)sub_1C2E378(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v1415, 0LL);
  if ( v1415 )
  {
    v538 = sub_1C2E268(v1415, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1607;
  v536->m_Items[125] = (DataMasterBase_o *)v1415;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[125],
    (int64_t)v1415,
    v1416,
    v1417,
    v1418,
    v1419,
    v1420,
    v1421);
  v1422 = (BoxGachaTalkMaster_o *)sub_1C2E378(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v1422, 0LL);
  if ( v1422 )
  {
    v538 = sub_1C2E268(v1422, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1607;
  v536->m_Items[126] = (DataMasterBase_o *)v1422;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[126],
    (int64_t)v1422,
    v1423,
    v1424,
    v1425,
    v1426,
    v1427,
    v1428);
  v1429 = (UserBoxGachaMaster_o *)sub_1C2E378(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v1429, 0LL);
  if ( v1429 )
  {
    v538 = sub_1C2E268(v1429, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1607;
  v536->m_Items[127] = (DataMasterBase_o *)v1429;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[127],
    (int64_t)v1429,
    v1430,
    v1431,
    v1432,
    v1433,
    v1434,
    v1435);
  v1436 = (BoxGachaHistoryMaster_o *)sub_1C2E378(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v1436, 0LL);
  if ( v1436 )
  {
    v538 = sub_1C2E268(v1436, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1607;
  v536->m_Items[128] = (DataMasterBase_o *)v1436;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[128],
    (int64_t)v1436,
    v1437,
    v1438,
    v1439,
    v1440,
    v1441,
    v1442);
  v1443 = (BattleBgMaster_o *)sub_1C2E378(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v1443, 0LL);
  if ( v1443 )
  {
    v538 = sub_1C2E268(v1443, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1607;
  v536->m_Items[129] = (DataMasterBase_o *)v1443;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[129],
    (int64_t)v1443,
    v1444,
    v1445,
    v1446,
    v1447,
    v1448,
    v1449);
  v1450 = (TipsBattleMaster_o *)sub_1C2E378(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v1450, 0LL);
  if ( v1450 )
  {
    v538 = sub_1C2E268(v1450, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1607;
  v536->m_Items[130] = (DataMasterBase_o *)v1450;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[130],
    (int64_t)v1450,
    v1451,
    v1452,
    v1453,
    v1454,
    v1455,
    v1456);
  v1457 = (UserLoginMaster_o *)sub_1C2E378(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v1457, 0LL);
  if ( v1457 )
  {
    v538 = sub_1C2E268(v1457, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1607;
  v536->m_Items[131] = (DataMasterBase_o *)v1457;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[131],
    (int64_t)v1457,
    v1458,
    v1459,
    v1460,
    v1461,
    v1462,
    v1463);
  v1464 = (VoiceMaster_o *)sub_1C2E378(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v1464, 0LL);
  if ( v1464 )
  {
    v538 = sub_1C2E268(v1464, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1607;
  v536->m_Items[132] = (DataMasterBase_o *)v1464;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[132],
    (int64_t)v1464,
    v1465,
    v1466,
    v1467,
    v1468,
    v1469,
    v1470);
  v1471 = (EventRewardExtraMaster_o *)sub_1C2E378(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v1471, 0LL);
  if ( v1471 )
  {
    v538 = sub_1C2E268(v1471, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1607;
  v536->m_Items[133] = (DataMasterBase_o *)v1471;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[133],
    (int64_t)v1471,
    v1472,
    v1473,
    v1474,
    v1475,
    v1476,
    v1477);
  v1478 = (EventMissionMaster_o *)sub_1C2E378(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v1478, 0LL);
  if ( v1478 )
  {
    v538 = sub_1C2E268(v1478, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1607;
  v536->m_Items[134] = (DataMasterBase_o *)v1478;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[134],
    (int64_t)v1478,
    v1479,
    v1480,
    v1481,
    v1482,
    v1483,
    v1484);
  v1485 = (EventMissionActionMaster_o *)sub_1C2E378(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v1485, 0LL);
  if ( v1485 )
  {
    v538 = sub_1C2E268(v1485, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1607;
  v536->m_Items[135] = (DataMasterBase_o *)v1485;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[135],
    (int64_t)v1485,
    v1486,
    v1487,
    v1488,
    v1489,
    v1490,
    v1491);
  v1492 = (EventMissionActionAddMaster_o *)sub_1C2E378(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v1492, 0LL);
  if ( v1492 )
  {
    v538 = sub_1C2E268(v1492, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1607;
  v536->m_Items[136] = (DataMasterBase_o *)v1492;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[136],
    (int64_t)v1492,
    v1493,
    v1494,
    v1495,
    v1496,
    v1497,
    v1498);
  v1499 = (EventMissionConditionMaster_o *)sub_1C2E378(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v1499, 0LL);
  if ( v1499 )
  {
    v538 = sub_1C2E268(v1499, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1607;
  v536->m_Items[137] = (DataMasterBase_o *)v1499;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[137],
    (int64_t)v1499,
    v1500,
    v1501,
    v1502,
    v1503,
    v1504,
    v1505);
  v1506 = (EventMissionCondDetailMaster_o *)sub_1C2E378(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v1506, 0LL);
  if ( v1506 )
  {
    v538 = sub_1C2E268(v1506, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1607;
  v536->m_Items[138] = (DataMasterBase_o *)v1506;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[138],
    (int64_t)v1506,
    v1507,
    v1508,
    v1509,
    v1510,
    v1511,
    v1512);
  v1513 = (EventMissionAddMaster_o *)sub_1C2E378(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v1513, 0LL);
  if ( v1513 )
  {
    v538 = sub_1C2E268(v1513, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1607;
  v536->m_Items[139] = (DataMasterBase_o *)v1513;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[139],
    (int64_t)v1513,
    v1514,
    v1515,
    v1516,
    v1517,
    v1518,
    v1519);
  v1520 = (CompleteMissionMaster_o *)sub_1C2E378(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v1520, 0LL);
  if ( v1520 )
  {
    v538 = sub_1C2E268(v1520, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1607;
  v536->m_Items[140] = (DataMasterBase_o *)v1520;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[140],
    (int64_t)v1520,
    v1521,
    v1522,
    v1523,
    v1524,
    v1525,
    v1526);
  v1527 = (EventRewardSetMaster_o *)sub_1C2E378(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v1527, 0LL);
  if ( v1527 )
  {
    v538 = sub_1C2E268(v1527, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1607;
  v536->m_Items[141] = (DataMasterBase_o *)v1527;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[141],
    (int64_t)v1527,
    v1528,
    v1529,
    v1530,
    v1531,
    v1532,
    v1533);
  v1534 = (UserEventMissionMaster_o *)sub_1C2E378(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v1534, 0LL);
  if ( v1534 )
  {
    v538 = sub_1C2E268(v1534, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1607;
  v536->m_Items[142] = (DataMasterBase_o *)v1534;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[142],
    (int64_t)v1534,
    v1535,
    v1536,
    v1537,
    v1538,
    v1539,
    v1540);
  v1541 = (UserEventMissionCondDetailMaster_o *)sub_1C2E378(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v1541, 0LL);
  if ( v1541 )
  {
    v538 = sub_1C2E268(v1541, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1607;
  v536->m_Items[143] = (DataMasterBase_o *)v1541;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[143],
    (int64_t)v1541,
    v1542,
    v1543,
    v1544,
    v1545,
    v1546,
    v1547);
  v1548 = (BoxGachaBaseDetailMaster_o *)sub_1C2E378(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v1548, 0LL);
  if ( v1548 )
  {
    v538 = sub_1C2E268(v1548, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1607;
  v536->m_Items[144] = (DataMasterBase_o *)v1548;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[144],
    (int64_t)v1548,
    v1549,
    v1550,
    v1551,
    v1552,
    v1553,
    v1554);
  v1555 = (UserServantLeaderMaster_o *)sub_1C2E378(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v1555, 0LL);
  if ( v1555 )
  {
    v538 = sub_1C2E268(v1555, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1607;
  v536->m_Items[145] = (DataMasterBase_o *)v1555;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[145],
    (int64_t)v1555,
    v1556,
    v1557,
    v1558,
    v1559,
    v1560,
    v1561);
  v1562 = (ClosedMessageMaster_o *)sub_1C2E378(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v1562, 0LL);
  if ( v1562 )
  {
    v538 = sub_1C2E268(v1562, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1607;
  v536->m_Items[146] = (DataMasterBase_o *)v1562;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[146],
    (int64_t)v1562,
    v1563,
    v1564,
    v1565,
    v1566,
    v1567,
    v1568);
  v1569 = (FunctionGroupMaster_o *)sub_1C2E378(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v1569, 0LL);
  if ( v1569 )
  {
    v538 = sub_1C2E268(v1569, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1607;
  v536->m_Items[147] = (DataMasterBase_o *)v1569;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[147],
    (int64_t)v1569,
    v1570,
    v1571,
    v1572,
    v1573,
    v1574,
    v1575);
  v1576 = (EventRaidMaster_o *)sub_1C2E378(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v1576, 0LL);
  if ( v1576 )
  {
    v538 = sub_1C2E268(v1576, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1607;
  v536->m_Items[148] = (DataMasterBase_o *)v1576;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[148],
    (int64_t)v1576,
    v1577,
    v1578,
    v1579,
    v1580,
    v1581,
    v1582);
  v1583 = (TotalEventRaidMaster_o *)sub_1C2E378(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v1583, 0LL);
  if ( v1583 )
  {
    v538 = sub_1C2E268(v1583, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1607;
  v536->m_Items[149] = (DataMasterBase_o *)v1583;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[149],
    (int64_t)v1583,
    v1584,
    v1585,
    v1586,
    v1587,
    v1588,
    v1589);
  v1590 = (UserEventRaidMaster_o *)sub_1C2E378(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v1590, 0LL);
  if ( v1590 )
  {
    v538 = sub_1C2E268(v1590, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1607;
  v536->m_Items[150] = (DataMasterBase_o *)v1590;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[150],
    (int64_t)v1590,
    v1591,
    v1592,
    v1593,
    v1594,
    v1595,
    v1596);
  v1597 = (EventPointMaster_o *)sub_1C2E378(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1597, 0LL);
  if ( v1597 )
  {
    v538 = sub_1C2E268(v1597, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1607;
  v536->m_Items[151] = (DataMasterBase_o *)v1597;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[151],
    (int64_t)v1597,
    v1598,
    v1599,
    v1600,
    v1601,
    v1602,
    v1603);
  v1604 = (EventPointGroupMaster_o *)sub_1C2E378(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1604, 0LL);
  if ( v1604 )
  {
    v538 = sub_1C2E268(v1604, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1607;
  v536->m_Items[152] = (DataMasterBase_o *)v1604;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[152],
    (int64_t)v1604,
    v1605,
    v1606,
    v1607,
    v1608,
    v1609,
    v1610);
  v1611 = (TotalEventPointMaster_o *)sub_1C2E378(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1611, 0LL);
  if ( v1611 )
  {
    v538 = sub_1C2E268(v1611, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1607;
  v536->m_Items[153] = (DataMasterBase_o *)v1611;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[153],
    (int64_t)v1611,
    v1612,
    v1613,
    v1614,
    v1615,
    v1616,
    v1617);
  v1618 = (UserEventPointMaster_o *)sub_1C2E378(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1618, 0LL);
  if ( v1618 )
  {
    v538 = sub_1C2E268(v1618, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1607;
  v536->m_Items[154] = (DataMasterBase_o *)v1618;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[154],
    (int64_t)v1618,
    v1619,
    v1620,
    v1621,
    v1622,
    v1623,
    v1624);
  v1625 = (EventPointUpperMaster_o *)sub_1C2E378(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1625, 0LL);
  if ( v1625 )
  {
    v538 = sub_1C2E268(v1625, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1607;
  v536->m_Items[155] = (DataMasterBase_o *)v1625;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[155],
    (int64_t)v1625,
    v1626,
    v1627,
    v1628,
    v1629,
    v1630,
    v1631);
  v1632 = (EventPointUpperReleaseMaster_o *)sub_1C2E378(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1632, 0LL);
  if ( v1632 )
  {
    v538 = sub_1C2E268(v1632, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1607;
  v536->m_Items[156] = (DataMasterBase_o *)v1632;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[156],
    (int64_t)v1632,
    v1633,
    v1634,
    v1635,
    v1636,
    v1637,
    v1638);
  v1639 = (EventRaceMaster_o *)sub_1C2E378(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1639, 0LL);
  if ( v1639 )
  {
    v538 = sub_1C2E268(v1639, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1607;
  v536->m_Items[157] = (DataMasterBase_o *)v1639;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[157],
    (int64_t)v1639,
    v1640,
    v1641,
    v1642,
    v1643,
    v1644,
    v1645);
  v1646 = (EventRaceResultMaster_o *)sub_1C2E378(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1646, 0LL);
  if ( v1646 )
  {
    v538 = sub_1C2E268(v1646, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1607;
  v536->m_Items[158] = (DataMasterBase_o *)v1646;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[158],
    (int64_t)v1646,
    v1647,
    v1648,
    v1649,
    v1650,
    v1651,
    v1652);
  v1653 = (QuestRacePointMaster_o *)sub_1C2E378(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1653, 0LL);
  if ( v1653 )
  {
    v538 = sub_1C2E268(v1653, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1607;
  v536->m_Items[159] = (DataMasterBase_o *)v1653;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[159],
    (int64_t)v1653,
    v1654,
    v1655,
    v1656,
    v1657,
    v1658,
    v1659);
  v1660 = (UserEventRaceMaster_o *)sub_1C2E378(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1660, 0LL);
  if ( v1660 )
  {
    v538 = sub_1C2E268(v1660, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1607;
  v536->m_Items[160] = (DataMasterBase_o *)v1660;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[160],
    (int64_t)v1660,
    v1661,
    v1662,
    v1663,
    v1664,
    v1665,
    v1666);
  v1667 = (EventScriptMaster_o *)sub_1C2E378(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1667, 0LL);
  if ( v1667 )
  {
    v538 = sub_1C2E268(v1667, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1607;
  v536->m_Items[161] = (DataMasterBase_o *)v1667;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[161],
    (int64_t)v1667,
    v1668,
    v1669,
    v1670,
    v1671,
    v1672,
    v1673);
  v1674 = (EventScriptReleaseMaster_o *)sub_1C2E378(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1674, 0LL);
  if ( v1674 )
  {
    v538 = sub_1C2E268(v1674, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1607;
  v536->m_Items[162] = (DataMasterBase_o *)v1674;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[162],
    (int64_t)v1674,
    v1675,
    v1676,
    v1677,
    v1678,
    v1679,
    v1680);
  v1681 = (UserPresentHistoryMaster_o *)sub_1C2E378(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1681, 0LL);
  if ( v1681 )
  {
    v538 = sub_1C2E268(v1681, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1607;
  v536->m_Items[163] = (DataMasterBase_o *)v1681;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[163],
    (int64_t)v1681,
    v1682,
    v1683,
    v1684,
    v1685,
    v1686,
    v1687);
  v1688 = (MstMissionMaster_o *)sub_1C2E378(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1688, 0LL);
  if ( v1688 )
  {
    v538 = sub_1C2E268(v1688, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1607;
  v536->m_Items[164] = (DataMasterBase_o *)v1688;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[164],
    (int64_t)v1688,
    v1689,
    v1690,
    v1691,
    v1692,
    v1693,
    v1694);
  v1695 = (ServantExceedMaster_o *)sub_1C2E378(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1695, 0LL);
  if ( v1695 )
  {
    v538 = sub_1C2E268(v1695, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1607;
  v536->m_Items[165] = (DataMasterBase_o *)v1695;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[165],
    (int64_t)v1695,
    v1696,
    v1697,
    v1698,
    v1699,
    v1700,
    v1701);
  v1702 = (PartialMaintenanceMaster_o *)sub_1C2E378(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1702, 0LL);
  if ( v1702 )
  {
    v538 = sub_1C2E268(v1702, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1607;
  v536->m_Items[166] = (DataMasterBase_o *)v1702;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[166],
    (int64_t)v1702,
    v1703,
    v1704,
    v1705,
    v1706,
    v1707,
    v1708);
  v1709 = (GuideMaster_o *)sub_1C2E378(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1709, 0LL);
  if ( v1709 )
  {
    v538 = sub_1C2E268(v1709, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1607;
  v536->m_Items[167] = (DataMasterBase_o *)v1709;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[167],
    (int64_t)v1709,
    v1710,
    v1711,
    v1712,
    v1713,
    v1714,
    v1715);
  v1716 = (MstMissionDisplayInfoMaster_o *)sub_1C2E378(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1716, 0LL);
  if ( v1716 )
  {
    v538 = sub_1C2E268(v1716, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1607;
  v536->m_Items[168] = (DataMasterBase_o *)v1716;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[168],
    (int64_t)v1716,
    v1717,
    v1718,
    v1719,
    v1720,
    v1721,
    v1722);
  v1723 = (GachaGroupMaster_o *)sub_1C2E378(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1723, 0LL);
  if ( v1723 )
  {
    v538 = sub_1C2E268(v1723, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1607;
  v536->m_Items[169] = (DataMasterBase_o *)v1723;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[169],
    (int64_t)v1723,
    v1724,
    v1725,
    v1726,
    v1727,
    v1728,
    v1729);
  v1730 = (QuestResetMaster_o *)sub_1C2E378(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1730, 0LL);
  if ( v1730 )
  {
    v538 = sub_1C2E268(v1730, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1607;
  v536->m_Items[170] = (DataMasterBase_o *)v1730;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[170],
    (int64_t)v1730,
    v1731,
    v1732,
    v1733,
    v1734,
    v1735,
    v1736);
  v1737 = (WarAddMaster_o *)sub_1C2E378(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1737, 0LL);
  if ( v1737 )
  {
    v538 = sub_1C2E268(v1737, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1607;
  v536->m_Items[171] = (DataMasterBase_o *)v1737;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[171],
    (int64_t)v1737,
    v1738,
    v1739,
    v1740,
    v1741,
    v1742,
    v1743);
  v1744 = (EventItemDisplayMaster_o *)sub_1C2E378(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1744, 0LL);
  if ( v1744 )
  {
    v538 = sub_1C2E268(v1744, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1607;
  v536->m_Items[172] = (DataMasterBase_o *)v1744;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[172],
    (int64_t)v1744,
    v1745,
    v1746,
    v1747,
    v1748,
    v1749,
    v1750);
  v1751 = (EventItemDisplayGroupMaster_o *)sub_1C2E378(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1751, 0LL);
  if ( v1751 )
  {
    v538 = sub_1C2E268(v1751, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1607;
  v536->m_Items[173] = (DataMasterBase_o *)v1751;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[173],
    (int64_t)v1751,
    v1752,
    v1753,
    v1754,
    v1755,
    v1756,
    v1757);
  v1758 = (EventItemDisplayReleaseMaster_o *)sub_1C2E378(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1758, 0LL);
  if ( v1758 )
  {
    v538 = sub_1C2E268(v1758, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1607;
  v536->m_Items[174] = (DataMasterBase_o *)v1758;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[174],
    (int64_t)v1758,
    v1759,
    v1760,
    v1761,
    v1762,
    v1763,
    v1764);
  v1765 = (EventTutorialMaster_o *)sub_1C2E378(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1765, 0LL);
  if ( v1765 )
  {
    v538 = sub_1C2E268(v1765, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1607;
  v536->m_Items[175] = (DataMasterBase_o *)v1765;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[175],
    (int64_t)v1765,
    v1766,
    v1767,
    v1768,
    v1769,
    v1770,
    v1771);
  v1772 = (EventTutorialCondMaster_o *)sub_1C2E378(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1772, 0LL);
  if ( v1772 )
  {
    v538 = sub_1C2E268(v1772, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1607;
  v536->m_Items[176] = (DataMasterBase_o *)v1772;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[176],
    (int64_t)v1772,
    v1773,
    v1774,
    v1775,
    v1776,
    v1777,
    v1778);
  v1779 = (VoiceReleaseMaster_o *)sub_1C2E378(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1779, 0LL);
  if ( v1779 )
  {
    v538 = sub_1C2E268(v1779, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1607;
  v536->m_Items[177] = (DataMasterBase_o *)v1779;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[177],
    (int64_t)v1779,
    v1780,
    v1781,
    v1782,
    v1783,
    v1784,
    v1785);
  v1786 = (EventSuperBossMaster_o *)sub_1C2E378(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1786, 0LL);
  if ( v1786 )
  {
    v538 = sub_1C2E268(v1786, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1607;
  v536->m_Items[178] = (DataMasterBase_o *)v1786;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[178],
    (int64_t)v1786,
    v1787,
    v1788,
    v1789,
    v1790,
    v1791,
    v1792);
  v1793 = (UserSuperBossMaster_o *)sub_1C2E378(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1793, 0LL);
  if ( v1793 )
  {
    v538 = sub_1C2E268(v1793, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1607;
  v536->m_Items[179] = (DataMasterBase_o *)v1793;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[179],
    (int64_t)v1793,
    v1794,
    v1795,
    v1796,
    v1797,
    v1798,
    v1799);
  v1800 = (QuestScriptMaster_o *)sub_1C2E378(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1800, 0LL);
  if ( v1800 )
  {
    v538 = sub_1C2E268(v1800, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1607;
  v536->m_Items[180] = (DataMasterBase_o *)v1800;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[180],
    (int64_t)v1800,
    v1801,
    v1802,
    v1803,
    v1804,
    v1805,
    v1806);
  v1807 = (QuestScriptReleaseMaster_o *)sub_1C2E378(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1807, 0LL);
  if ( v1807 )
  {
    v538 = sub_1C2E268(v1807, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1607;
  v536->m_Items[181] = (DataMasterBase_o *)v1807;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[181],
    (int64_t)v1807,
    v1808,
    v1809,
    v1810,
    v1811,
    v1812,
    v1813);
  v1814 = (MaterialFolderMaster_o *)sub_1C2E378(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1814, 0LL);
  if ( v1814 )
  {
    v538 = sub_1C2E268(v1814, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1607;
  v536->m_Items[182] = (DataMasterBase_o *)v1814;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[182],
    (int64_t)v1814,
    v1815,
    v1816,
    v1817,
    v1818,
    v1819,
    v1820);
  v1821 = (RestrictionMaster_o *)sub_1C2E378(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1821, 0LL);
  if ( v1821 )
  {
    v538 = sub_1C2E268(v1821, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1607;
  v536->m_Items[183] = (DataMasterBase_o *)v1821;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[183],
    (int64_t)v1821,
    v1822,
    v1823,
    v1824,
    v1825,
    v1826,
    v1827);
  v1828 = (QuestRestrictionMaster_o *)sub_1C2E378(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1828, 0LL);
  if ( v1828 )
  {
    v538 = sub_1C2E268(v1828, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1607;
  v536->m_Items[184] = (DataMasterBase_o *)v1828;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[184],
    (int64_t)v1828,
    v1829,
    v1830,
    v1831,
    v1832,
    v1833,
    v1834);
  v1835 = (ServantVoiceRelationMaster_o *)sub_1C2E378(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1835, 0LL);
  if ( v1835 )
  {
    v538 = sub_1C2E268(v1835, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1607;
  v536->m_Items[185] = (DataMasterBase_o *)v1835;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[185],
    (int64_t)v1835,
    v1836,
    v1837,
    v1838,
    v1839,
    v1840,
    v1841);
  v1842 = (ShopDetailMaster_o *)sub_1C2E378(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1842, 0LL);
  if ( v1842 )
  {
    v538 = sub_1C2E268(v1842, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1607;
  v536->m_Items[186] = (DataMasterBase_o *)v1842;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[186],
    (int64_t)v1842,
    v1843,
    v1844,
    v1845,
    v1846,
    v1847,
    v1848);
  v1849 = (ServantScriptAddMaster_o *)sub_1C2E378(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1849, 0LL);
  if ( v1849 )
  {
    v538 = sub_1C2E268(v1849, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1607;
  v536->m_Items[187] = (DataMasterBase_o *)v1849;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[187],
    (int64_t)v1849,
    v1850,
    v1851,
    v1852,
    v1853,
    v1854,
    v1855);
  v1856 = (CombineMaster_o *)sub_1C2E378(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1856, 0LL);
  if ( v1856 )
  {
    v538 = sub_1C2E268(v1856, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1607;
  v536->m_Items[188] = (DataMasterBase_o *)v1856;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[188],
    (int64_t)v1856,
    v1857,
    v1858,
    v1859,
    v1860,
    v1861,
    v1862);
  v1863 = (AiFieldMaster_o *)sub_1C2E378(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1863, 0LL);
  if ( v1863 )
  {
    v538 = sub_1C2E268(v1863, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1607;
  v536->m_Items[189] = (DataMasterBase_o *)v1863;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[189],
    (int64_t)v1863,
    v1864,
    v1865,
    v1866,
    v1867,
    v1868,
    v1869);
  v1870 = (ServantCommentAddMaster_o *)sub_1C2E378(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1870, 0LL);
  if ( v1870 )
  {
    v538 = sub_1C2E268(v1870, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1607;
  v536->m_Items[190] = (DataMasterBase_o *)v1870;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[190],
    (int64_t)v1870,
    v1871,
    v1872,
    v1873,
    v1874,
    v1875,
    v1876);
  v1877 = (EventFilterMaster_o *)sub_1C2E378(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1877, 0LL);
  if ( v1877 )
  {
    v538 = sub_1C2E268(v1877, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1607;
  v536->m_Items[191] = (DataMasterBase_o *)v1877;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[191],
    (int64_t)v1877,
    v1878,
    v1879,
    v1880,
    v1881,
    v1882,
    v1883);
  v1884 = (UserSupportDeckMaster_o *)sub_1C2E378(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1884, 0LL);
  if ( v1884 )
  {
    v538 = sub_1C2E268(v1884, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1607;
  v536->m_Items[192] = (DataMasterBase_o *)v1884;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[192],
    (int64_t)v1884,
    v1885,
    v1886,
    v1887,
    v1888,
    v1889,
    v1890);
  v1891 = (EventRewardSceneMaster_o *)sub_1C2E378(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1891, 0LL);
  if ( v1891 )
  {
    v538 = sub_1C2E268(v1891, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1607;
  v536->m_Items[193] = (DataMasterBase_o *)v1891;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[193],
    (int64_t)v1891,
    v1892,
    v1893,
    v1894,
    v1895,
    v1896,
    v1897);
  v1898 = (EventVoicePlayMaster_o *)sub_1C2E378(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1898, 0LL);
  if ( v1898 )
  {
    v538 = sub_1C2E268(v1898, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1607;
  v536->m_Items[194] = (DataMasterBase_o *)v1898;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[194],
    (int64_t)v1898,
    v1899,
    v1900,
    v1901,
    v1902,
    v1903,
    v1904);
  v1905 = (GachaSubMaster_o *)sub_1C2E378(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1905, 0LL);
  if ( v1905 )
  {
    v538 = sub_1C2E268(v1905, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1607;
  v536->m_Items[195] = (DataMasterBase_o *)v1905;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[195],
    (int64_t)v1905,
    v1906,
    v1907,
    v1908,
    v1909,
    v1910,
    v1911);
  v1912 = (GachaDetailMaster_o *)sub_1C2E378(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1912, 0LL);
  if ( v1912 )
  {
    v538 = sub_1C2E268(v1912, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1607;
  v536->m_Items[196] = (DataMasterBase_o *)v1912;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[196],
    (int64_t)v1912,
    v1913,
    v1914,
    v1915,
    v1916,
    v1917,
    v1918);
  v1919 = (GachaBaseCollateralMaster_o *)sub_1C2E378(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1919, 0LL);
  if ( v1919 )
  {
    v538 = sub_1C2E268(v1919, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1607;
  v536->m_Items[197] = (DataMasterBase_o *)v1919;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[197],
    (int64_t)v1919,
    v1920,
    v1921,
    v1922,
    v1923,
    v1924,
    v1925);
  v1926 = (GachaAdjustAddMaster_o *)sub_1C2E378(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1926, 0LL);
  if ( v1926 )
  {
    v538 = sub_1C2E268(v1926, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1607;
  v536->m_Items[198] = (DataMasterBase_o *)v1926;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[198],
    (int64_t)v1926,
    v1927,
    v1928,
    v1929,
    v1930,
    v1931,
    v1932);
  v1933 = (GachaBonusSelectMaster_o *)sub_1C2E378(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1933, 0LL);
  if ( v1933 )
  {
    v538 = sub_1C2E268(v1933, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1607;
  v536->m_Items[199] = (DataMasterBase_o *)v1933;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[199],
    (int64_t)v1933,
    v1934,
    v1935,
    v1936,
    v1937,
    v1938,
    v1939);
  v1940 = (GachaBonusSelectLineupMaster_o *)sub_1C2E378(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1940, 0LL);
  if ( v1940 )
  {
    v538 = sub_1C2E268(v1940, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1607;
  v536->m_Items[200] = (DataMasterBase_o *)v1940;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[200],
    (int64_t)v1940,
    v1941,
    v1942,
    v1943,
    v1944,
    v1945,
    v1946);
  v1947 = (ServantChangeMaster_o *)sub_1C2E378(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1947, 0LL);
  if ( v1947 )
  {
    v538 = sub_1C2E268(v1947, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1607;
  v536->m_Items[201] = (DataMasterBase_o *)v1947;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[201],
    (int64_t)v1947,
    v1948,
    v1949,
    v1950,
    v1951,
    v1952,
    v1953);
  v1954 = (VoiceCondMaster_o *)sub_1C2E378(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1954, 0LL);
  if ( v1954 )
  {
    v538 = sub_1C2E268(v1954, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1607;
  v536->m_Items[202] = (DataMasterBase_o *)v1954;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[202],
    (int64_t)v1954,
    v1955,
    v1956,
    v1957,
    v1958,
    v1959,
    v1960);
  v1961 = (BgmReleaseMaster_o *)sub_1C2E378(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1961, 0LL);
  if ( v1961 )
  {
    v538 = sub_1C2E268(v1961, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1607;
  v536->m_Items[203] = (DataMasterBase_o *)v1961;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[203],
    (int64_t)v1961,
    v1962,
    v1963,
    v1964,
    v1965,
    v1966,
    v1967);
  v1968 = (MyRoomAddMaster_o *)sub_1C2E378(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1968, 0LL);
  if ( v1968 )
  {
    v538 = sub_1C2E268(v1968, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1607;
  v536->m_Items[204] = (DataMasterBase_o *)v1968;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[204],
    (int64_t)v1968,
    v1969,
    v1970,
    v1971,
    v1972,
    v1973,
    v1974);
  v1975 = (ShopActionMaster_o *)sub_1C2E378(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1975, 0LL);
  if ( v1975 )
  {
    v538 = sub_1C2E268(v1975, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1607;
  v536->m_Items[205] = (DataMasterBase_o *)v1975;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[205],
    (int64_t)v1975,
    v1976,
    v1977,
    v1978,
    v1979,
    v1980,
    v1981);
  v1982 = (EventRewardSceneReleaseMaster_o *)sub_1C2E378(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1982, 0LL);
  if ( v1982 )
  {
    v538 = sub_1C2E268(v1982, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1607;
  v536->m_Items[206] = (DataMasterBase_o *)v1982;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[206],
    (int64_t)v1982,
    v1983,
    v1984,
    v1985,
    v1986,
    v1987,
    v1988);
  v1989 = (QuestBehaviorMaster_o *)sub_1C2E378(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1989, 0LL);
  if ( v1989 )
  {
    v538 = sub_1C2E268(v1989, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1607;
  v536->m_Items[207] = (DataMasterBase_o *)v1989;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[207],
    (int64_t)v1989,
    v1990,
    v1991,
    v1992,
    v1993,
    v1994,
    v1995);
  v1996 = (MapMaster_o *)sub_1C2E378(MapMaster_TypeInfo);
  MapMaster___ctor(v1996, 0LL);
  if ( v1996 )
  {
    v538 = sub_1C2E268(v1996, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1607;
  v536->m_Items[208] = (DataMasterBase_o *)v1996;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[208],
    (int64_t)v1996,
    v1997,
    v1998,
    v1999,
    v2000,
    v2001,
    v2002);
  v2003 = (MapCondMaster_o *)sub_1C2E378(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v2003, 0LL);
  if ( v2003 )
  {
    v538 = sub_1C2E268(v2003, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1607;
  v536->m_Items[209] = (DataMasterBase_o *)v2003;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[209],
    (int64_t)v2003,
    v2004,
    v2005,
    v2006,
    v2007,
    v2008,
    v2009);
  v2010 = (MapButtonMaster_o *)sub_1C2E378(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v2010, 0LL);
  if ( v2010 )
  {
    v538 = sub_1C2E268(v2010, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1607;
  v536->m_Items[210] = (DataMasterBase_o *)v2010;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[210],
    (int64_t)v2010,
    v2011,
    v2012,
    v2013,
    v2014,
    v2015,
    v2016);
  v2017 = (BannerAddMaster_o *)sub_1C2E378(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v2017, 0LL);
  if ( v2017 )
  {
    v538 = sub_1C2E268(v2017, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1607;
  v536->m_Items[211] = (DataMasterBase_o *)v2017;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[211],
    (int64_t)v2017,
    v2018,
    v2019,
    v2020,
    v2021,
    v2022,
    v2023);
  v2024 = (EventAddMaster_o *)sub_1C2E378(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v2024, 0LL);
  if ( v2024 )
  {
    v538 = sub_1C2E268(v2024, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1607;
  v536->m_Items[212] = (DataMasterBase_o *)v2024;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[212],
    (int64_t)v2024,
    v2025,
    v2026,
    v2027,
    v2028,
    v2029,
    v2030);
  v2031 = (TotalLoginMaster_o *)sub_1C2E378(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v2031, 0LL);
  if ( v2031 )
  {
    v538 = sub_1C2E268(v2031, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1607;
  v536->m_Items[213] = (DataMasterBase_o *)v2031;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[213],
    (int64_t)v2031,
    v2032,
    v2033,
    v2034,
    v2035,
    v2036,
    v2037);
  v2038 = (ServantFilterMaster_o *)sub_1C2E378(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v2038, 0LL);
  if ( v2038 )
  {
    v538 = sub_1C2E268(v2038, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1607;
  v536->m_Items[214] = (DataMasterBase_o *)v2038;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[214],
    (int64_t)v2038,
    v2039,
    v2040,
    v2041,
    v2042,
    v2043,
    v2044);
  v2045 = (CombineCostumeMaster_o *)sub_1C2E378(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v2045, 0LL);
  if ( v2045 )
  {
    v538 = sub_1C2E268(v2045, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1607;
  v536->m_Items[215] = (DataMasterBase_o *)v2045;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[215],
    (int64_t)v2045,
    v2046,
    v2047,
    v2048,
    v2049,
    v2050,
    v2051);
  v2052 = (ServantCostumeMaster_o *)sub_1C2E378(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v2052, 0LL);
  if ( v2052 )
  {
    v538 = sub_1C2E268(v2052, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1607;
  v536->m_Items[216] = (DataMasterBase_o *)v2052;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[216],
    (int64_t)v2052,
    v2053,
    v2054,
    v2055,
    v2056,
    v2057,
    v2058);
  v2059 = (ServantCostumeReleaseMaster_o *)sub_1C2E378(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v2059, 0LL);
  if ( v2059 )
  {
    v538 = sub_1C2E268(v2059, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1607;
  v536->m_Items[217] = (DataMasterBase_o *)v2059;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[217],
    (int64_t)v2059,
    v2060,
    v2061,
    v2062,
    v2063,
    v2064,
    v2065);
  v2066 = (UserFriendRequestHistoryMaster_o *)sub_1C2E378(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v2066, 0LL);
  if ( v2066 )
  {
    v538 = sub_1C2E268(v2066, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1607;
  v536->m_Items[218] = (DataMasterBase_o *)v2066;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[218],
    (int64_t)v2066,
    v2067,
    v2068,
    v2069,
    v2070,
    v2071,
    v2072);
  v2073 = (UserBlacklistMaster_o *)sub_1C2E378(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v2073, 0LL);
  if ( v2073 )
  {
    v538 = sub_1C2E268(v2073, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1607;
  v536->m_Items[219] = (DataMasterBase_o *)v2073;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[219],
    (int64_t)v2073,
    v2074,
    v2075,
    v2076,
    v2077,
    v2078,
    v2079);
  v2080 = (ItemSelectMaster_o *)sub_1C2E378(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v2080, 0LL);
  if ( v2080 )
  {
    v538 = sub_1C2E268(v2080, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1607;
  v536->m_Items[220] = (DataMasterBase_o *)v2080;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[220],
    (int64_t)v2080,
    v2081,
    v2082,
    v2083,
    v2084,
    v2085,
    v2086);
  v2087 = (TotalEventRaceMaster_o *)sub_1C2E378(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v2087, 0LL);
  if ( v2087 )
  {
    v538 = sub_1C2E268(v2087, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1607;
  v536->m_Items[221] = (DataMasterBase_o *)v2087;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[221],
    (int64_t)v2087,
    v2088,
    v2089,
    v2090,
    v2091,
    v2092,
    v2093);
  v2094 = (EventPointGroupAddMaster_o *)sub_1C2E378(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v2094, 0LL);
  if ( v2094 )
  {
    v538 = sub_1C2E268(v2094, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1607;
  v536->m_Items[222] = (DataMasterBase_o *)v2094;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[222],
    (int64_t)v2094,
    v2095,
    v2096,
    v2097,
    v2098,
    v2099,
    v2100);
  v2101 = (VoicePlayGroupMaster_o *)sub_1C2E378(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v2101, 0LL);
  if ( v2101 )
  {
    v538 = sub_1C2E268(v2101, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1607;
  v536->m_Items[223] = (DataMasterBase_o *)v2101;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[223],
    (int64_t)v2101,
    v2102,
    v2103,
    v2104,
    v2105,
    v2106,
    v2107);
  v2108 = (VoicePlayCondMaster_o *)sub_1C2E378(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v2108, 0LL);
  if ( v2108 )
  {
    v538 = sub_1C2E268(v2108, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1607;
  v536->m_Items[224] = (DataMasterBase_o *)v2108;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[224],
    (int64_t)v2108,
    v2109,
    v2110,
    v2111,
    v2112,
    v2113,
    v2114);
  v2115 = (GachaStoryAdjustMaster_o *)sub_1C2E378(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v2115, 0LL);
  if ( v2115 )
  {
    v538 = sub_1C2E268(v2115, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1607;
  v536->m_Items[225] = (DataMasterBase_o *)v2115;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[225],
    (int64_t)v2115,
    v2116,
    v2117,
    v2118,
    v2119,
    v2120,
    v2121);
  v2122 = (ServantFlagMaster_o *)sub_1C2E378(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v2122, 0LL);
  if ( v2122 )
  {
    v538 = sub_1C2E268(v2122, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1607;
  v536->m_Items[226] = (DataMasterBase_o *)v2122;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[226],
    (int64_t)v2122,
    v2123,
    v2124,
    v2125,
    v2126,
    v2127,
    v2128);
  v2129 = (ServantFlagReleaseMaster_o *)sub_1C2E378(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v2129, 0LL);
  if ( v2129 )
  {
    v538 = sub_1C2E268(v2129, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1607;
  v536->m_Items[227] = (DataMasterBase_o *)v2129;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[227],
    (int64_t)v2129,
    v2130,
    v2131,
    v2132,
    v2133,
    v2134,
    v2135);
  v2136 = (EventLocationCampaignMaster_o *)sub_1C2E378(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v2136, 0LL);
  if ( v2136 )
  {
    v538 = sub_1C2E268(v2136, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1607;
  v536->m_Items[228] = (DataMasterBase_o *)v2136;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[228],
    (int64_t)v2136,
    v2137,
    v2138,
    v2139,
    v2140,
    v2141,
    v2142);
  v2143 = (CampaignInfoMaster_o *)sub_1C2E378(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v2143, 0LL);
  if ( v2143 )
  {
    v538 = sub_1C2E268(v2143, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1607;
  v536->m_Items[229] = (DataMasterBase_o *)v2143;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[229],
    (int64_t)v2143,
    v2144,
    v2145,
    v2146,
    v2147,
    v2148,
    v2149);
  v2150 = (DialogMessageMaster_o *)sub_1C2E378(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v2150, 0LL);
  if ( v2150 )
  {
    v538 = sub_1C2E268(v2150, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1607;
  v536->m_Items[230] = (DataMasterBase_o *)v2150;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[230],
    (int64_t)v2150,
    v2151,
    v2152,
    v2153,
    v2154,
    v2155,
    v2156);
  v2157 = (ServantIndividualityMaster_o *)sub_1C2E378(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v2157, 0LL);
  if ( v2157 )
  {
    v538 = sub_1C2E268(v2157, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1607;
  v536->m_Items[231] = (DataMasterBase_o *)v2157;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[231],
    (int64_t)v2157,
    v2158,
    v2159,
    v2160,
    v2161,
    v2162,
    v2163);
  v2164 = (BoardMessageMaster_o *)sub_1C2E378(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v2164, 0LL);
  if ( v2164 )
  {
    v538 = sub_1C2E268(v2164, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1607;
  v536->m_Items[232] = (DataMasterBase_o *)v2164;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[232],
    (int64_t)v2164,
    v2165,
    v2166,
    v2167,
    v2168,
    v2169,
    v2170);
  v2171 = (BoardMessageReleaseMaster_o *)sub_1C2E378(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v2171, 0LL);
  if ( v2171 )
  {
    v538 = sub_1C2E268(v2171, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1607;
  v536->m_Items[233] = (DataMasterBase_o *)v2171;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[233],
    (int64_t)v2171,
    v2172,
    v2173,
    v2174,
    v2175,
    v2176,
    v2177);
  v2178 = (EventServantFatigueMaster_o *)sub_1C2E378(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v2178, 0LL);
  if ( v2178 )
  {
    v538 = sub_1C2E268(v2178, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1607;
  v536->m_Items[234] = (DataMasterBase_o *)v2178;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[234],
    (int64_t)v2178,
    v2179,
    v2180,
    v2181,
    v2182,
    v2183,
    v2184);
  v2185 = (UserEventDeckMaster_o *)sub_1C2E378(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v2185, 0LL);
  if ( v2185 )
  {
    v538 = sub_1C2E268(v2185, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1607;
  v536->m_Items[235] = (DataMasterBase_o *)v2185;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[235],
    (int64_t)v2185,
    v2186,
    v2187,
    v2188,
    v2189,
    v2190,
    v2191);
  v2192 = (EventTowerMaster_o *)sub_1C2E378(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v2192, 0LL);
  if ( v2192 )
  {
    v538 = sub_1C2E268(v2192, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1607;
  v536->m_Items[236] = (DataMasterBase_o *)v2192;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[236],
    (int64_t)v2192,
    v2193,
    v2194,
    v2195,
    v2196,
    v2197,
    v2198);
  v2199 = (EventTowerRewardMaster_o *)sub_1C2E378(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v2199, 0LL);
  if ( v2199 )
  {
    v538 = sub_1C2E268(v2199, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1607;
  v536->m_Items[237] = (DataMasterBase_o *)v2199;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[237],
    (int64_t)v2199,
    v2200,
    v2201,
    v2202,
    v2203,
    v2204,
    v2205);
  v2206 = (EventBulletinBoardMaster_o *)sub_1C2E378(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v2206, 0LL);
  if ( v2206 )
  {
    v538 = sub_1C2E268(v2206, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1607;
  v536->m_Items[238] = (DataMasterBase_o *)v2206;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[238],
    (int64_t)v2206,
    v2207,
    v2208,
    v2209,
    v2210,
    v2211,
    v2212);
  v2213 = (EventBulletinBoardReleaseMaster_o *)sub_1C2E378(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v2213, 0LL);
  if ( v2213 )
  {
    v538 = sub_1C2E268(v2213, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1607;
  v536->m_Items[239] = (DataMasterBase_o *)v2213;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[239],
    (int64_t)v2213,
    v2214,
    v2215,
    v2216,
    v2217,
    v2218,
    v2219);
  v2220 = (EventFactoryMaster_o *)sub_1C2E378(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v2220, 0LL);
  if ( v2220 )
  {
    v538 = sub_1C2E268(v2220, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1607;
  v536->m_Items[240] = (DataMasterBase_o *)v2220;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[240],
    (int64_t)v2220,
    v2221,
    v2222,
    v2223,
    v2224,
    v2225,
    v2226);
  v2227 = (ShopGroupMaster_o *)sub_1C2E378(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v2227, 0LL);
  if ( v2227 )
  {
    v538 = sub_1C2E268(v2227, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1607;
  v536->m_Items[241] = (DataMasterBase_o *)v2227;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[241],
    (int64_t)v2227,
    v2228,
    v2229,
    v2230,
    v2231,
    v2232,
    v2233);
  v2234 = (AuraEffectMaster_o *)sub_1C2E378(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v2234, 0LL);
  if ( v2234 )
  {
    v538 = sub_1C2E268(v2234, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1607;
  v536->m_Items[242] = (DataMasterBase_o *)v2234;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[242],
    (int64_t)v2234,
    v2235,
    v2236,
    v2237,
    v2238,
    v2239,
    v2240);
  v2241 = (AuraEffectPosOverwriteMaster_o *)sub_1C2E378(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v2241, 0LL);
  if ( v2241 )
  {
    v538 = sub_1C2E268(v2241, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1607;
  v536->m_Items[243] = (DataMasterBase_o *)v2241;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[243],
    (int64_t)v2241,
    v2242,
    v2243,
    v2244,
    v2245,
    v2246,
    v2247);
  v2248 = (UserEventMissionFixMaster_o *)sub_1C2E378(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v2248, 0LL);
  if ( v2248 )
  {
    v538 = sub_1C2E268(v2248, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1607;
  v536->m_Items[244] = (DataMasterBase_o *)v2248;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[244],
    (int64_t)v2248,
    v2249,
    v2250,
    v2251,
    v2252,
    v2253,
    v2254);
  v2255 = (NotEndEventMissionFixMaster_o *)sub_1C2E378(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v2255, 0LL);
  if ( v2255 )
  {
    v538 = sub_1C2E268(v2255, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1607;
  v536->m_Items[245] = (DataMasterBase_o *)v2255;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[245],
    (int64_t)v2255,
    v2256,
    v2257,
    v2258,
    v2259,
    v2260,
    v2261);
  v2262 = (EnemyMstMaster_o *)sub_1C2E378(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v2262, 0LL);
  if ( v2262 )
  {
    v538 = sub_1C2E268(v2262, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1607;
  v536->m_Items[246] = (DataMasterBase_o *)v2262;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[246],
    (int64_t)v2262,
    v2263,
    v2264,
    v2265,
    v2266,
    v2267,
    v2268);
  v2269 = (EnemyMstBattleMaster_o *)sub_1C2E378(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v2269, 0LL);
  if ( v2269 )
  {
    v538 = sub_1C2E268(v2269, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1607;
  v536->m_Items[247] = (DataMasterBase_o *)v2269;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[247],
    (int64_t)v2269,
    v2270,
    v2271,
    v2272,
    v2273,
    v2274,
    v2275);
  v2276 = (ServantSkillReleaseMaster_o *)sub_1C2E378(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v2276, 0LL);
  if ( v2276 )
  {
    v538 = sub_1C2E268(v2276, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1607;
  v536->m_Items[248] = (DataMasterBase_o *)v2276;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[248],
    (int64_t)v2276,
    v2277,
    v2278,
    v2279,
    v2280,
    v2281,
    v2282);
  v2283 = (ServantPassiveSkillReleaseMaster_o *)sub_1C2E378(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v2283, 0LL);
  if ( v2283 )
  {
    v538 = sub_1C2E268(v2283, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1607;
  v536->m_Items[249] = (DataMasterBase_o *)v2283;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[249],
    (int64_t)v2283,
    v2284,
    v2285,
    v2286,
    v2287,
    v2288,
    v2289);
  v2290 = (ServantTreasureDeviceReleaseMaster_o *)sub_1C2E378(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v2290, 0LL);
  if ( v2290 )
  {
    v538 = sub_1C2E268(v2290, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1607;
  v536->m_Items[250] = (DataMasterBase_o *)v2290;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[250],
    (int64_t)v2290,
    v2291,
    v2292,
    v2293,
    v2294,
    v2295,
    v2296);
  v2297 = (MapGimmickReleaseMaster_o *)sub_1C2E378(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v2297, 0LL);
  if ( v2297 )
  {
    v538 = sub_1C2E268(v2297, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1607;
  v536->m_Items[251] = (DataMasterBase_o *)v2297;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[251],
    (int64_t)v2297,
    v2298,
    v2299,
    v2300,
    v2301,
    v2302,
    v2303);
  v2304 = (CommandCodeMaster_o *)sub_1C2E378(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v2304, 0LL);
  if ( v2304 )
  {
    v538 = sub_1C2E268(v2304, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1607;
  v536->m_Items[252] = (DataMasterBase_o *)v2304;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[252],
    (int64_t)v2304,
    v2305,
    v2306,
    v2307,
    v2308,
    v2309,
    v2310);
  v2311 = (ServantCommandCodeUnlockMaster_o *)sub_1C2E378(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v2311, 0LL);
  if ( v2311 )
  {
    v538 = sub_1C2E268(v2311, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1607;
  v536->m_Items[253] = (DataMasterBase_o *)v2311;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[253],
    (int64_t)v2311,
    v2312,
    v2313,
    v2314,
    v2315,
    v2316,
    v2317);
  v2318 = (UserCommandCodeMaster_o *)sub_1C2E378(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v2318, 0LL);
  if ( v2318 )
  {
    v538 = sub_1C2E268(v2318, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1607;
  v536->m_Items[254] = (DataMasterBase_o *)v2318;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[254],
    (int64_t)v2318,
    v2319,
    v2320,
    v2321,
    v2322,
    v2323,
    v2324);
  v2325 = (UserCommandCodeCollectionMaster_o *)sub_1C2E378(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v2325, 0LL);
  if ( v2325 )
  {
    v538 = sub_1C2E268(v2325, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1607;
  v536->m_Items[255] = (DataMasterBase_o *)v2325;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[255],
    (int64_t)v2325,
    v2326,
    v2327,
    v2328,
    v2329,
    v2330,
    v2331);
  v2332 = (UserServantCommandCodeMaster_o *)sub_1C2E378(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v2332, 0LL);
  if ( v2332 )
  {
    v538 = sub_1C2E268(v2332, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1607;
  v536->m_Items[256] = (DataMasterBase_o *)v2332;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[256],
    (int64_t)v2332,
    v2333,
    v2334,
    v2335,
    v2336,
    v2337,
    v2338);
  v2339 = (UserServantCommandCardMaster_o *)sub_1C2E378(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v2339, 0LL);
  if ( v2339 )
  {
    v538 = sub_1C2E268(v2339, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1607;
  v536->m_Items[257] = (DataMasterBase_o *)v2339;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[257],
    (int64_t)v2339,
    v2340,
    v2341,
    v2342,
    v2343,
    v2344,
    v2345);
  v2346 = (CommandCardRankParamMaster_o *)sub_1C2E378(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v2346, 0LL);
  if ( v2346 )
  {
    v538 = sub_1C2E268(v2346, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1607;
  v536->m_Items[258] = (DataMasterBase_o *)v2346;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[258],
    (int64_t)v2346,
    v2347,
    v2348,
    v2349,
    v2350,
    v2351,
    v2352);
  v2353 = (CommandCodeSkillMaster_o *)sub_1C2E378(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v2353, 0LL);
  if ( v2353 )
  {
    v538 = sub_1C2E268(v2353, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1607;
  v536->m_Items[259] = (DataMasterBase_o *)v2353;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[259],
    (int64_t)v2353,
    v2354,
    v2355,
    v2356,
    v2357,
    v2358,
    v2359);
  v2360 = (CommandCodeSkillReleaseMaster_o *)sub_1C2E378(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v2360, 0LL);
  if ( v2360 )
  {
    v538 = sub_1C2E268(v2360, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1607;
  v536->m_Items[260] = (DataMasterBase_o *)v2360;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[260],
    (int64_t)v2360,
    v2361,
    v2362,
    v2363,
    v2364,
    v2365,
    v2366);
  v2367 = (CommandCodeCommentMaster_o *)sub_1C2E378(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v2367, 0LL);
  if ( v2367 )
  {
    v538 = sub_1C2E268(v2367, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1607;
  v536->m_Items[261] = (DataMasterBase_o *)v2367;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[261],
    (int64_t)v2367,
    v2368,
    v2369,
    v2370,
    v2371,
    v2372,
    v2373);
  v2374 = (EventStatusMaster_o *)sub_1C2E378(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v2374, 0LL);
  if ( v2374 )
  {
    v538 = sub_1C2E268(v2374, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1607;
  v536->m_Items[262] = (DataMasterBase_o *)v2374;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[262],
    (int64_t)v2374,
    v2375,
    v2376,
    v2377,
    v2378,
    v2379,
    v2380);
  v2381 = (EventStatusQuestMaster_o *)sub_1C2E378(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v2381, 0LL);
  if ( v2381 )
  {
    v538 = sub_1C2E268(v2381, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1607;
  v536->m_Items[263] = (DataMasterBase_o *)v2381;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[263],
    (int64_t)v2381,
    v2382,
    v2383,
    v2384,
    v2385,
    v2386,
    v2387);
  v2388 = (CommonRestrictionMaster_o *)sub_1C2E378(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v2388, 0LL);
  if ( v2388 )
  {
    v538 = sub_1C2E268(v2388, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1607;
  v536->m_Items[264] = (DataMasterBase_o *)v2388;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[264],
    (int64_t)v2388,
    v2389,
    v2390,
    v2391,
    v2392,
    v2393,
    v2394);
  v2395 = (EventPointBuffMaster_o *)sub_1C2E378(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v2395, 0LL);
  if ( v2395 )
  {
    v538 = sub_1C2E268(v2395, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1607;
  v536->m_Items[265] = (DataMasterBase_o *)v2395;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[265],
    (int64_t)v2395,
    v2396,
    v2397,
    v2398,
    v2399,
    v2400,
    v2401);
  v2402 = (UserFollowMaster_o *)sub_1C2E378(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v2402, 0LL);
  if ( v2402 )
  {
    v538 = sub_1C2E268(v2402, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1607;
  v536->m_Items[266] = (DataMasterBase_o *)v2402;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[266],
    (int64_t)v2402,
    v2403,
    v2404,
    v2405,
    v2406,
    v2407,
    v2408);
  v2409 = (EventRewardGuideReleaseMaster_o *)sub_1C2E378(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v2409, 0LL);
  if ( v2409 )
  {
    v538 = sub_1C2E268(v2409, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1607;
  v536->m_Items[267] = (DataMasterBase_o *)v2409;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[267],
    (int64_t)v2409,
    v2410,
    v2411,
    v2412,
    v2413,
    v2414,
    v2415);
  v2416 = (NpcServantEquipMaster_o *)sub_1C2E378(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v2416, 0LL);
  if ( v2416 )
  {
    v538 = sub_1C2E268(v2416, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1607;
  v536->m_Items[268] = (DataMasterBase_o *)v2416;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[268],
    (int64_t)v2416,
    v2417,
    v2418,
    v2419,
    v2420,
    v2421,
    v2422);
  v2423 = (EventCampaignReleaseMaster_o *)sub_1C2E378(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v2423, 0LL);
  if ( v2423 )
  {
    v538 = sub_1C2E268(v2423, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1607;
  v536->m_Items[269] = (DataMasterBase_o *)v2423;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[269],
    (int64_t)v2423,
    v2424,
    v2425,
    v2426,
    v2427,
    v2428,
    v2429);
  v2430 = (ServantMaterialFolderMaster_o *)sub_1C2E378(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v2430, 0LL);
  if ( v2430 )
  {
    v538 = sub_1C2E268(v2430, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1607;
  v536->m_Items[270] = (DataMasterBase_o *)v2430;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[270],
    (int64_t)v2430,
    v2431,
    v2432,
    v2433,
    v2434,
    v2435,
    v2436);
  v2437 = (EventEquipSkillReleaseMaster_o *)sub_1C2E378(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v2437, 0LL);
  if ( v2437 )
  {
    v538 = sub_1C2E268(v2437, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1607;
  v536->m_Items[271] = (DataMasterBase_o *)v2437;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[271],
    (int64_t)v2437,
    v2438,
    v2439,
    v2440,
    v2441,
    v2442,
    v2443);
  v2444 = (EventPointActivityMaster_o *)sub_1C2E378(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v2444, 0LL);
  if ( v2444 )
  {
    v538 = sub_1C2E268(v2444, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1607;
  v536->m_Items[272] = (DataMasterBase_o *)v2444;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[272],
    (int64_t)v2444,
    v2445,
    v2446,
    v2447,
    v2448,
    v2449,
    v2450);
  v2451 = (FunctionCategoryMaster_o *)sub_1C2E378(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v2451, 0LL);
  if ( v2451 )
  {
    v538 = sub_1C2E268(v2451, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1607;
  v536->m_Items[273] = (DataMasterBase_o *)v2451;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[273],
    (int64_t)v2451,
    v2452,
    v2453,
    v2454,
    v2455,
    v2456,
    v2457);
  v2458 = (QuestPickupMaster_o *)sub_1C2E378(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v2458, 0LL);
  if ( v2458 )
  {
    v538 = sub_1C2E268(v2458, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1607;
  v536->m_Items[274] = (DataMasterBase_o *)v2458;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[274],
    (int64_t)v2458,
    v2459,
    v2460,
    v2461,
    v2462,
    v2463,
    v2464);
  v2465 = (EventUiMaster_o *)sub_1C2E378(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v2465, 0LL);
  if ( v2465 )
  {
    v538 = sub_1C2E268(v2465, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1607;
  v536->m_Items[275] = (DataMasterBase_o *)v2465;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[275],
    (int64_t)v2465,
    v2466,
    v2467,
    v2468,
    v2469,
    v2470,
    v2471);
  v2472 = (EventUiReleaseMaster_o *)sub_1C2E378(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v2472, 0LL);
  if ( v2472 )
  {
    v538 = sub_1C2E268(v2472, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1607;
  v536->m_Items[276] = (DataMasterBase_o *)v2472;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[276],
    (int64_t)v2472,
    v2473,
    v2474,
    v2475,
    v2476,
    v2477,
    v2478);
  v2479 = (EventUiValueMaster_o *)sub_1C2E378(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v2479, 0LL);
  if ( v2479 )
  {
    v538 = sub_1C2E268(v2479, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1607;
  v536->m_Items[277] = (DataMasterBase_o *)v2479;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[277],
    (int64_t)v2479,
    v2480,
    v2481,
    v2482,
    v2483,
    v2484,
    v2485);
  v2486 = (EventConquestRewardMaster_o *)sub_1C2E378(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v2486, 0LL);
  if ( v2486 )
  {
    v538 = sub_1C2E268(v2486, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1607;
  v536->m_Items[278] = (DataMasterBase_o *)v2486;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[278],
    (int64_t)v2486,
    v2487,
    v2488,
    v2489,
    v2490,
    v2491,
    v2492);
  v2493 = (NpcFollowerReleaseMaster_o *)sub_1C2E378(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v2493, 0LL);
  if ( v2493 )
  {
    v538 = sub_1C2E268(v2493, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1607;
  v536->m_Items[279] = (DataMasterBase_o *)v2493;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[279],
    (int64_t)v2493,
    v2494,
    v2495,
    v2496,
    v2497,
    v2498,
    v2499);
  v2500 = (EventBonusFilterMaster_o *)sub_1C2E378(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v2500, 0LL);
  if ( v2500 )
  {
    v538 = sub_1C2E268(v2500, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1607;
  v536->m_Items[280] = (DataMasterBase_o *)v2500;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[280],
    (int64_t)v2500,
    v2501,
    v2502,
    v2503,
    v2504,
    v2505,
    v2506);
  v2507 = (EventBonusFilterGroupInfoMaster_o *)sub_1C2E378(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v2507, 0LL);
  if ( v2507 )
  {
    v538 = sub_1C2E268(v2507, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1607;
  v536->m_Items[281] = (DataMasterBase_o *)v2507;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[281],
    (int64_t)v2507,
    v2508,
    v2509,
    v2510,
    v2511,
    v2512,
    v2513);
  v2514 = (EventBonusFilterGroupMemberMaster_o *)sub_1C2E378(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v2514, 0LL);
  if ( v2514 )
  {
    v538 = sub_1C2E268(v2514, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1607;
  v536->m_Items[282] = (DataMasterBase_o *)v2514;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[282],
    (int64_t)v2514,
    v2515,
    v2516,
    v2517,
    v2518,
    v2519,
    v2520);
  v2521 = (UserGachaExtraCountMaster_o *)sub_1C2E378(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v2521, 0LL);
  if ( v2521 )
  {
    v538 = sub_1C2E268(v2521, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1607;
  v536->m_Items[283] = (DataMasterBase_o *)v2521;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[283],
    (int64_t)v2521,
    v2522,
    v2523,
    v2524,
    v2525,
    v2526,
    v2527);
  v2528 = (PrivilegeMaster_o *)sub_1C2E378(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v2528, 0LL);
  if ( v2528 )
  {
    v538 = sub_1C2E268(v2528, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1607;
  v536->m_Items[284] = (DataMasterBase_o *)v2528;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[284],
    (int64_t)v2528,
    v2529,
    v2530,
    v2531,
    v2532,
    v2533,
    v2534);
  v2535 = (UserPrivilegeMaster_o *)sub_1C2E378(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v2535, 0LL);
  if ( v2535 )
  {
    v538 = sub_1C2E268(v2535, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1607;
  v536->m_Items[285] = (DataMasterBase_o *)v2535;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[285],
    (int64_t)v2535,
    v2536,
    v2537,
    v2538,
    v2539,
    v2540,
    v2541);
  v2542 = (UserQuestRouteMaster_o *)sub_1C2E378(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v2542, 0LL);
  if ( v2542 )
  {
    v538 = sub_1C2E268(v2542, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1607;
  v536->m_Items[286] = (DataMasterBase_o *)v2542;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[286],
    (int64_t)v2542,
    v2543,
    v2544,
    v2545,
    v2546,
    v2547,
    v2548);
  v2549 = (EventBossStatusUiMaster_o *)sub_1C2E378(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v2549, 0LL);
  if ( v2549 )
  {
    v538 = sub_1C2E268(v2549, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1607;
  v536->m_Items[287] = (DataMasterBase_o *)v2549;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[287],
    (int64_t)v2549,
    v2550,
    v2551,
    v2552,
    v2553,
    v2554,
    v2555);
  v2556 = (CommonReleaseMaster_o *)sub_1C2E378(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v2556, 0LL);
  if ( v2556 )
  {
    v538 = sub_1C2E268(v2556, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1607;
  v536->m_Items[288] = (DataMasterBase_o *)v2556;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[288],
    (int64_t)v2556,
    v2557,
    v2558,
    v2559,
    v2560,
    v2561,
    v2562);
  v2563 = (QuestSpotReleaseMaster_o *)sub_1C2E378(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v2563, 0LL);
  if ( v2563 )
  {
    v538 = sub_1C2E268(v2563, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1607;
  v536->m_Items[289] = (DataMasterBase_o *)v2563;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[289],
    (int64_t)v2563,
    v2564,
    v2565,
    v2566,
    v2567,
    v2568,
    v2569);
  v2570 = (VoiceMaterialCondMaster_o *)sub_1C2E378(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v2570, 0LL);
  if ( v2570 )
  {
    v538 = sub_1C2E268(v2570, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1607;
  v536->m_Items[290] = (DataMasterBase_o *)v2570;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[290],
    (int64_t)v2570,
    v2571,
    v2572,
    v2573,
    v2574,
    v2575,
    v2576);
  v2577 = (ClassRelationOverwriteMaster_o *)sub_1C2E378(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v2577, 0LL);
  if ( v2577 )
  {
    v538 = sub_1C2E268(v2577, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1607;
  v536->m_Items[291] = (DataMasterBase_o *)v2577;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[291],
    (int64_t)v2577,
    v2578,
    v2579,
    v2580,
    v2581,
    v2582,
    v2583);
  v2584 = (EventGroupMaster_o *)sub_1C2E378(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v2584, 0LL);
  if ( v2584 )
  {
    v538 = sub_1C2E268(v2584, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1607;
  v536->m_Items[292] = (DataMasterBase_o *)v2584;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[292],
    (int64_t)v2584,
    v2585,
    v2586,
    v2587,
    v2588,
    v2589,
    v2590);
  v2591 = (TotalBoxGachaMaster_o *)sub_1C2E378(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v2591, 0LL);
  if ( v2591 )
  {
    v538 = sub_1C2E268(v2591, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1607;
  v536->m_Items[293] = (DataMasterBase_o *)v2591;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[293],
    (int64_t)v2591,
    v2592,
    v2593,
    v2594,
    v2595,
    v2596,
    v2597);
  v2598 = (ServantTreasureDeviceDamageMaster_o *)sub_1C2E378(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v2598, 0LL);
  if ( v2598 )
  {
    v538 = sub_1C2E268(v2598, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1607;
  v536->m_Items[294] = (DataMasterBase_o *)v2598;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[294],
    (int64_t)v2598,
    v2599,
    v2600,
    v2601,
    v2602,
    v2603,
    v2604);
  v2605 = (UserEventServantFatigueMaster_o *)sub_1C2E378(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v2605, 0LL);
  if ( v2605 )
  {
    v538 = sub_1C2E268(v2605, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1607;
  v536->m_Items[295] = (DataMasterBase_o *)v2605;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[295],
    (int64_t)v2605,
    v2606,
    v2607,
    v2608,
    v2609,
    v2610,
    v2611);
  v2612 = (EventRewardBgMaster_o *)sub_1C2E378(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v2612, 0LL);
  if ( v2612 )
  {
    v538 = sub_1C2E268(v2612, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1607;
  v536->m_Items[296] = (DataMasterBase_o *)v2612;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[296],
    (int64_t)v2612,
    v2613,
    v2614,
    v2615,
    v2616,
    v2617,
    v2618);
  v2619 = (EventFatigueRecoveryMaster_o *)sub_1C2E378(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v2619, 0LL);
  if ( v2619 )
  {
    v538 = sub_1C2E268(v2619, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1607;
  v536->m_Items[297] = (DataMasterBase_o *)v2619;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[297],
    (int64_t)v2619,
    v2620,
    v2621,
    v2622,
    v2623,
    v2624,
    v2625);
  v2626 = (EventBoostItemUsedMaster_o *)sub_1C2E378(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v2626, 0LL);
  if ( v2626 )
  {
    v538 = sub_1C2E268(v2626, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1607;
  v536->m_Items[298] = (DataMasterBase_o *)v2626;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[298],
    (int64_t)v2626,
    v2627,
    v2628,
    v2629,
    v2630,
    v2631,
    v2632);
  v2633 = (StatusEffectPosOverwriteMaster_o *)sub_1C2E378(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v2633, 0LL);
  if ( v2633 )
  {
    v538 = sub_1C2E268(v2633, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1607;
  v536->m_Items[299] = (DataMasterBase_o *)v2633;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[299],
    (int64_t)v2633,
    v2634,
    v2635,
    v2636,
    v2637,
    v2638,
    v2639);
  v2640 = (QuestPhaseDetailAddMaster_o *)sub_1C2E378(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v2640, 0LL);
  if ( v2640 )
  {
    v538 = sub_1C2E268(v2640, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1607;
  v536->m_Items[300] = (DataMasterBase_o *)v2640;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[300],
    (int64_t)v2640,
    v2641,
    v2642,
    v2643,
    v2644,
    v2645,
    v2646);
  v2647 = (VoiceClosedMessageMaster_o *)sub_1C2E378(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v2647, 0LL);
  if ( v2647 )
  {
    v538 = sub_1C2E268(v2647, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1607;
  v536->m_Items[301] = (DataMasterBase_o *)v2647;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[301],
    (int64_t)v2647,
    v2648,
    v2649,
    v2650,
    v2651,
    v2652,
    v2653);
  v2654 = (ReprintStageMaster_o *)sub_1C2E378(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v2654, 0LL);
  if ( v2654 )
  {
    v538 = sub_1C2E268(v2654, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1607;
  v536->m_Items[302] = (DataMasterBase_o *)v2654;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[302],
    (int64_t)v2654,
    v2655,
    v2656,
    v2657,
    v2658,
    v2659,
    v2660);
  v2661 = (UserCombineExpMaster_o *)sub_1C2E378(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v2661, 0LL);
  if ( v2661 )
  {
    v538 = sub_1C2E268(v2661, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1607;
  v536->m_Items[303] = (DataMasterBase_o *)v2661;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[303],
    (int64_t)v2661,
    v2662,
    v2663,
    v2664,
    v2665,
    v2666,
    v2667);
  v2668 = (EventBoardGameCellMaster_o *)sub_1C2E378(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v2668, 0LL);
  if ( v2668 )
  {
    v538 = sub_1C2E268(v2668, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1607;
  v536->m_Items[304] = (DataMasterBase_o *)v2668;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[304],
    (int64_t)v2668,
    v2669,
    v2670,
    v2671,
    v2672,
    v2673,
    v2674);
  v2675 = (EventBoardGameTokenMaster_o *)sub_1C2E378(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v2675, 0LL);
  if ( v2675 )
  {
    v538 = sub_1C2E268(v2675, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1607;
  v536->m_Items[305] = (DataMasterBase_o *)v2675;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[305],
    (int64_t)v2675,
    v2676,
    v2677,
    v2678,
    v2679,
    v2680,
    v2681);
  v2682 = (EventBoardGameTokenRewardMaster_o *)sub_1C2E378(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v2682, 0LL);
  if ( v2682 )
  {
    v538 = sub_1C2E268(v2682, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1607;
  v536->m_Items[306] = (DataMasterBase_o *)v2682;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[306],
    (int64_t)v2682,
    v2683,
    v2684,
    v2685,
    v2686,
    v2687,
    v2688);
  v2689 = (UserEventBoardGameTokenMaster_o *)sub_1C2E378(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v2689, 0LL);
  if ( v2689 )
  {
    v538 = sub_1C2E268(v2689, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1607;
  v536->m_Items[307] = (DataMasterBase_o *)v2689;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[307],
    (int64_t)v2689,
    v2690,
    v2691,
    v2692,
    v2693,
    v2694,
    v2695);
  v2696 = (ServantAnimationOverwriteMaster_o *)sub_1C2E378(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v2696, 0LL);
  if ( v2696 )
  {
    v538 = sub_1C2E268(v2696, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1607;
  v536->m_Items[308] = (DataMasterBase_o *)v2696;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[308],
    (int64_t)v2696,
    v2697,
    v2698,
    v2699,
    v2700,
    v2701,
    v2702);
  v2703 = (OpeningMovieMaster_o *)sub_1C2E378(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v2703, 0LL);
  if ( v2703 )
  {
    v538 = sub_1C2E268(v2703, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1607;
  v536->m_Items[309] = (DataMasterBase_o *)v2703;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[309],
    (int64_t)v2703,
    v2704,
    v2705,
    v2706,
    v2707,
    v2708,
    v2709);
  v2710 = (ServantLimitSpoilerProtectionMaster_o *)sub_1C2E378(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v2710, 0LL);
  if ( v2710 )
  {
    v538 = sub_1C2E268(v2710, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1607;
  v536->m_Items[310] = (DataMasterBase_o *)v2710;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[310],
    (int64_t)v2710,
    v2711,
    v2712,
    v2713,
    v2714,
    v2715,
    v2716);
  v2717 = (PickupUserFollowerMaster_o *)sub_1C2E378(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v2717, 0LL);
  if ( v2717 )
  {
    v538 = sub_1C2E268(v2717, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1607;
  v536->m_Items[311] = (DataMasterBase_o *)v2717;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[311],
    (int64_t)v2717,
    v2718,
    v2719,
    v2720,
    v2721,
    v2722,
    v2723);
  v2724 = (ServantCollectionMaster_o *)sub_1C2E378(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v2724, 0LL);
  if ( v2724 )
  {
    v538 = sub_1C2E268(v2724, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1607;
  v536->m_Items[312] = (DataMasterBase_o *)v2724;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[312],
    (int64_t)v2724,
    v2725,
    v2726,
    v2727,
    v2728,
    v2729,
    v2730);
  v2731 = (GachaBehaviorMaster_o *)sub_1C2E378(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v2731, 0LL);
  if ( v2731 )
  {
    v538 = sub_1C2E268(v2731, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1607;
  v536->m_Items[313] = (DataMasterBase_o *)v2731;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[313],
    (int64_t)v2731,
    v2732,
    v2733,
    v2734,
    v2735,
    v2736,
    v2737);
  v2738 = (EventQuestCooltimeMaster_o *)sub_1C2E378(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v2738, 0LL);
  if ( v2738 )
  {
    v538 = sub_1C2E268(v2738, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1607;
  v536->m_Items[314] = (DataMasterBase_o *)v2738;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[314],
    (int64_t)v2738,
    v2739,
    v2740,
    v2741,
    v2742,
    v2743,
    v2744);
  v2745 = (UserEventQuestCooltimeMaster_o *)sub_1C2E378(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v2745, 0LL);
  if ( v2745 )
  {
    v538 = sub_1C2E268(v2745, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1607;
  v536->m_Items[315] = (DataMasterBase_o *)v2745;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[315],
    (int64_t)v2745,
    v2746,
    v2747,
    v2748,
    v2749,
    v2750,
    v2751);
  v2752 = (BoostMaster_o *)sub_1C2E378(BoostMaster_TypeInfo);
  BoostMaster___ctor(v2752, 0LL);
  if ( v2752 )
  {
    v538 = sub_1C2E268(v2752, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1607;
  v536->m_Items[316] = (DataMasterBase_o *)v2752;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[316],
    (int64_t)v2752,
    v2753,
    v2754,
    v2755,
    v2756,
    v2757,
    v2758);
  v2759 = (WarBoardMaster_o *)sub_1C2E378(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v2759, 0LL);
  if ( v2759 )
  {
    v538 = sub_1C2E268(v2759, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1607;
  v536->m_Items[317] = (DataMasterBase_o *)v2759;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[317],
    (int64_t)v2759,
    v2760,
    v2761,
    v2762,
    v2763,
    v2764,
    v2765);
  v2766 = (WarBoardSquareMaster_o *)sub_1C2E378(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v2766, 0LL);
  if ( v2766 )
  {
    v538 = sub_1C2E268(v2766, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1607;
  v536->m_Items[318] = (DataMasterBase_o *)v2766;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[318],
    (int64_t)v2766,
    v2767,
    v2768,
    v2769,
    v2770,
    v2771,
    v2772);
  v2773 = (WarBoardRoadMaster_o *)sub_1C2E378(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v2773, 0LL);
  if ( v2773 )
  {
    v538 = sub_1C2E268(v2773, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1607;
  v536->m_Items[319] = (DataMasterBase_o *)v2773;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[319],
    (int64_t)v2773,
    v2774,
    v2775,
    v2776,
    v2777,
    v2778,
    v2779);
  v2780 = (WarBoardStageMaster_o *)sub_1C2E378(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v2780, 0LL);
  if ( v2780 )
  {
    v538 = sub_1C2E268(v2780, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1607;
  v536->m_Items[320] = (DataMasterBase_o *)v2780;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[320],
    (int64_t)v2780,
    v2781,
    v2782,
    v2783,
    v2784,
    v2785,
    v2786);
  v2787 = (WarBoardActionPointMaster_o *)sub_1C2E378(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v2787, 0LL);
  if ( v2787 )
  {
    v538 = sub_1C2E268(v2787, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1607;
  v536->m_Items[321] = (DataMasterBase_o *)v2787;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[321],
    (int64_t)v2787,
    v2788,
    v2789,
    v2790,
    v2791,
    v2792,
    v2793);
  v2794 = (WarBoardActionTrendMaster_o *)sub_1C2E378(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v2794, 0LL);
  if ( v2794 )
  {
    v538 = sub_1C2E268(v2794, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1607;
  v536->m_Items[322] = (DataMasterBase_o *)v2794;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[322],
    (int64_t)v2794,
    v2795,
    v2796,
    v2797,
    v2798,
    v2799,
    v2800);
  v2801 = (WarBoardTacticalTrendMaster_o *)sub_1C2E378(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v2801, 0LL);
  if ( v2801 )
  {
    v538 = sub_1C2E268(v2801, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1607;
  v536->m_Items[323] = (DataMasterBase_o *)v2801;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[323],
    (int64_t)v2801,
    v2802,
    v2803,
    v2804,
    v2805,
    v2806,
    v2807);
  v2808 = (WarBoardStageLayoutMaster_o *)sub_1C2E378(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v2808, 0LL);
  if ( v2808 )
  {
    v538 = sub_1C2E268(v2808, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1607;
  v536->m_Items[324] = (DataMasterBase_o *)v2808;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[324],
    (int64_t)v2808,
    v2809,
    v2810,
    v2811,
    v2812,
    v2813,
    v2814);
  v2815 = (WarBoardStageNpcMaster_o *)sub_1C2E378(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v2815, 0LL);
  if ( v2815 )
  {
    v538 = sub_1C2E268(v2815, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1607;
  v536->m_Items[325] = (DataMasterBase_o *)v2815;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[325],
    (int64_t)v2815,
    v2816,
    v2817,
    v2818,
    v2819,
    v2820,
    v2821);
  v2822 = (WarBoardStageWallMaster_o *)sub_1C2E378(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v2822, 0LL);
  if ( v2822 )
  {
    v538 = sub_1C2E268(v2822, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1607;
  v536->m_Items[326] = (DataMasterBase_o *)v2822;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[326],
    (int64_t)v2822,
    v2823,
    v2824,
    v2825,
    v2826,
    v2827,
    v2828);
  v2829 = (WarBoardAIMaster_o *)sub_1C2E378(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v2829, 0LL);
  if ( v2829 )
  {
    v538 = sub_1C2E268(v2829, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1607;
  v536->m_Items[327] = (DataMasterBase_o *)v2829;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[327],
    (int64_t)v2829,
    v2830,
    v2831,
    v2832,
    v2833,
    v2834,
    v2835);
  v2836 = (WarBoardRatingBaseMaster_o *)sub_1C2E378(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v2836, 0LL);
  if ( v2836 )
  {
    v538 = sub_1C2E268(v2836, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1607;
  v536->m_Items[328] = (DataMasterBase_o *)v2836;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[328],
    (int64_t)v2836,
    v2837,
    v2838,
    v2839,
    v2840,
    v2841,
    v2842);
  v2843 = (WarBoardRatingOffsetMaster_o *)sub_1C2E378(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v2843, 0LL);
  if ( v2843 )
  {
    v538 = sub_1C2E268(v2843, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1607;
  v536->m_Items[329] = (DataMasterBase_o *)v2843;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[329],
    (int64_t)v2843,
    v2844,
    v2845,
    v2846,
    v2847,
    v2848,
    v2849);
  v2850 = (WarBoardItemMaster_o *)sub_1C2E378(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v2850, 0LL);
  if ( v2850 )
  {
    v538 = sub_1C2E268(v2850, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1607;
  v536->m_Items[330] = (DataMasterBase_o *)v2850;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[330],
    (int64_t)v2850,
    v2851,
    v2852,
    v2853,
    v2854,
    v2855,
    v2856);
  v2857 = (WarBoardTreasureMaster_o *)sub_1C2E378(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v2857, 0LL);
  if ( v2857 )
  {
    v538 = sub_1C2E268(v2857, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1607;
  v536->m_Items[331] = (DataMasterBase_o *)v2857;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[331],
    (int64_t)v2857,
    v2858,
    v2859,
    v2860,
    v2861,
    v2862,
    v2863);
  v2864 = (WarBoardQuestMaster_o *)sub_1C2E378(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v2864, 0LL);
  if ( v2864 )
  {
    v538 = sub_1C2E268(v2864, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1607;
  v536->m_Items[332] = (DataMasterBase_o *)v2864;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[332],
    (int64_t)v2864,
    v2865,
    v2866,
    v2867,
    v2868,
    v2869,
    v2870);
  v2871 = (WarBoardDataMaster_o *)sub_1C2E378(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v2871, 0LL);
  if ( v2871 )
  {
    v538 = sub_1C2E268(v2871, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1607;
  v536->m_Items[333] = (DataMasterBase_o *)v2871;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[333],
    (int64_t)v2871,
    v2872,
    v2873,
    v2874,
    v2875,
    v2876,
    v2877);
  v2878 = (WarBoardIndividualityClassMaster_o *)sub_1C2E378(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v2878, 0LL);
  if ( v2878 )
  {
    v538 = sub_1C2E268(v2878, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1607;
  v536->m_Items[334] = (DataMasterBase_o *)v2878;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[334],
    (int64_t)v2878,
    v2879,
    v2880,
    v2881,
    v2882,
    v2883,
    v2884);
  v2885 = (WarBoardActionTrendConditionMaster_o *)sub_1C2E378(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v2885, 0LL);
  if ( v2885 )
  {
    v538 = sub_1C2E268(v2885, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1607;
  v536->m_Items[335] = (DataMasterBase_o *)v2885;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[335],
    (int64_t)v2885,
    v2886,
    v2887,
    v2888,
    v2889,
    v2890,
    v2891);
  v2892 = (WarBoardActionPointClassMaster_o *)sub_1C2E378(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v2892, 0LL);
  if ( v2892 )
  {
    v538 = sub_1C2E268(v2892, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1607;
  v536->m_Items[336] = (DataMasterBase_o *)v2892;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[336],
    (int64_t)v2892,
    v2893,
    v2894,
    v2895,
    v2896,
    v2897,
    v2898);
  v2899 = (EventPanelMapMaster_o *)sub_1C2E378(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v2899, 0LL);
  if ( v2899 )
  {
    v538 = sub_1C2E268(v2899, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1607;
  v536->m_Items[337] = (DataMasterBase_o *)v2899;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[337],
    (int64_t)v2899,
    v2900,
    v2901,
    v2902,
    v2903,
    v2904,
    v2905);
  v2906 = (EventPanelMapDetailMaster_o *)sub_1C2E378(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v2906, 0LL);
  if ( v2906 )
  {
    v538 = sub_1C2E268(v2906, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1607;
  v536->m_Items[338] = (DataMasterBase_o *)v2906;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[338],
    (int64_t)v2906,
    v2907,
    v2908,
    v2909,
    v2910,
    v2911,
    v2912);
  v2913 = (EventPanelSpotMaster_o *)sub_1C2E378(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v2913, 0LL);
  if ( v2913 )
  {
    v538 = sub_1C2E268(v2913, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1607;
  v536->m_Items[339] = (DataMasterBase_o *)v2913;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[339],
    (int64_t)v2913,
    v2914,
    v2915,
    v2916,
    v2917,
    v2918,
    v2919);
  v2920 = (EventPanelScanMaster_o *)sub_1C2E378(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v2920, 0LL);
  if ( v2920 )
  {
    v538 = sub_1C2E268(v2920, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1607;
  v536->m_Items[340] = (DataMasterBase_o *)v2920;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[340],
    (int64_t)v2920,
    v2921,
    v2922,
    v2923,
    v2924,
    v2925,
    v2926);
  v2927 = (CommonConsumeMaster_o *)sub_1C2E378(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v2927, 0LL);
  if ( v2927 )
  {
    v538 = sub_1C2E268(v2927, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1607;
  v536->m_Items[341] = (DataMasterBase_o *)v2927;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[341],
    (int64_t)v2927,
    v2928,
    v2929,
    v2930,
    v2931,
    v2932,
    v2933);
  v2934 = (UserEventMapMaster_o *)sub_1C2E378(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v2934, 0LL);
  if ( v2934 )
  {
    v538 = sub_1C2E268(v2934, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1607;
  v536->m_Items[342] = (DataMasterBase_o *)v2934;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[342],
    (int64_t)v2934,
    v2935,
    v2936,
    v2937,
    v2938,
    v2939,
    v2940);
  v2941 = (UserEventSpotMaster_o *)sub_1C2E378(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v2941, 0LL);
  if ( v2941 )
  {
    v538 = sub_1C2E268(v2941, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1607;
  v536->m_Items[343] = (DataMasterBase_o *)v2941;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[343],
    (int64_t)v2941,
    v2942,
    v2943,
    v2944,
    v2945,
    v2946,
    v2947);
  v2948 = (WarGroupMaster_o *)sub_1C2E378(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v2948, 0LL);
  if ( v2948 )
  {
    v538 = sub_1C2E268(v2948, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1607;
  v536->m_Items[344] = (DataMasterBase_o *)v2948;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[344],
    (int64_t)v2948,
    v2949,
    v2950,
    v2951,
    v2952,
    v2953,
    v2954);
  v2955 = (ServantLimitImageMaster_o *)sub_1C2E378(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v2955, 0LL);
  if ( v2955 )
  {
    v538 = sub_1C2E268(v2955, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1607;
  v536->m_Items[345] = (DataMasterBase_o *)v2955;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[345],
    (int64_t)v2955,
    v2956,
    v2957,
    v2958,
    v2959,
    v2960,
    v2961);
  v2962 = (FriendshipQuestDialogInfoMaster_o *)sub_1C2E378(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v2962, 0LL);
  if ( v2962 )
  {
    v538 = sub_1C2E268(v2962, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1607;
  v536->m_Items[346] = (DataMasterBase_o *)v2962;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[346],
    (int64_t)v2962,
    v2963,
    v2964,
    v2965,
    v2966,
    v2967,
    v2968);
  v2969 = (QuestRestrictionInfoMaster_o *)sub_1C2E378(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v2969, 0LL);
  if ( v2969 )
  {
    v538 = sub_1C2E268(v2969, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1607;
  v536->m_Items[347] = (DataMasterBase_o *)v2969;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[347],
    (int64_t)v2969,
    v2970,
    v2971,
    v2972,
    v2973,
    v2974,
    v2975);
  v2976 = (AssistMaster_o *)sub_1C2E378(AssistMaster_TypeInfo);
  AssistMaster___ctor(v2976, 0LL);
  if ( v2976 )
  {
    v538 = sub_1C2E268(v2976, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1607;
  v536->m_Items[348] = (DataMasterBase_o *)v2976;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[348],
    (int64_t)v2976,
    v2977,
    v2978,
    v2979,
    v2980,
    v2981,
    v2982);
  v2983 = (WarBoardEffectMaster_o *)sub_1C2E378(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v2983, 0LL);
  if ( v2983 )
  {
    v538 = sub_1C2E268(v2983, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1607;
  v536->m_Items[349] = (DataMasterBase_o *)v2983;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[349],
    (int64_t)v2983,
    v2984,
    v2985,
    v2986,
    v2987,
    v2988,
    v2989);
  v2990 = (WarBoardOnboardSkillMaster_o *)sub_1C2E378(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v2990, 0LL);
  if ( v2990 )
  {
    v538 = sub_1C2E268(v2990, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1607;
  v536->m_Items[350] = (DataMasterBase_o *)v2990;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[350],
    (int64_t)v2990,
    v2991,
    v2992,
    v2993,
    v2994,
    v2995,
    v2996);
  v2997 = (BeforeBirthDayMaster_o *)sub_1C2E378(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v2997, 0LL);
  if ( v2997 )
  {
    v538 = sub_1C2E268(v2997, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1607;
  v536->m_Items[351] = (DataMasterBase_o *)v2997;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[351],
    (int64_t)v2997,
    v2998,
    v2999,
    v3000,
    v3001,
    v3002,
    v3003);
  v3004 = (LoginQuestMaster_o *)sub_1C2E378(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v3004, 0LL);
  if ( v3004 )
  {
    v538 = sub_1C2E268(v3004, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1607;
  v536->m_Items[352] = (DataMasterBase_o *)v3004;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[352],
    (int64_t)v3004,
    v3005,
    v3006,
    v3007,
    v3008,
    v3009,
    v3010);
  v3011 = (EventCombineCostumeMaster_o *)sub_1C2E378(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v3011, 0LL);
  if ( v3011 )
  {
    v538 = sub_1C2E268(v3011, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1607;
  v536->m_Items[353] = (DataMasterBase_o *)v3011;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[353],
    (int64_t)v3011,
    v3012,
    v3013,
    v3014,
    v3015,
    v3016,
    v3017);
  v3018 = (WarBoardStagePieceDetailMaster_o *)sub_1C2E378(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v3018, 0LL);
  if ( v3018 )
  {
    v538 = sub_1C2E268(v3018, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1607;
  v536->m_Items[354] = (DataMasterBase_o *)v3018;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[354],
    (int64_t)v3018,
    v3019,
    v3020,
    v3021,
    v3022,
    v3023,
    v3024);
  v3025 = (ServantTreasureDeviceAddMaster_o *)sub_1C2E378(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v3025, 0LL);
  if ( v3025 )
  {
    v538 = sub_1C2E268(v3025, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1607;
  v536->m_Items[355] = (DataMasterBase_o *)v3025;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[355],
    (int64_t)v3025,
    v3026,
    v3027,
    v3028,
    v3029,
    v3030,
    v3031);
  v3032 = (SkillAddMaster_o *)sub_1C2E378(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v3032, 0LL);
  if ( v3032 )
  {
    v538 = sub_1C2E268(v3032, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1607;
  v536->m_Items[356] = (DataMasterBase_o *)v3032;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[356],
    (int64_t)v3032,
    v3033,
    v3034,
    v3035,
    v3036,
    v3037,
    v3038);
  v3039 = (ServantLvDetailMaster_o *)sub_1C2E378(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v3039, 0LL);
  if ( v3039 )
  {
    v538 = sub_1C2E268(v3039, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1607;
  v536->m_Items[357] = (DataMasterBase_o *)v3039;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[357],
    (int64_t)v3039,
    v3040,
    v3041,
    v3042,
    v3043,
    v3044,
    v3045);
  v3046 = (GachaAppendMaster_o *)sub_1C2E378(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v3046, 0LL);
  if ( v3046 )
  {
    v538 = sub_1C2E268(v3046, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1607;
  v536->m_Items[358] = (DataMasterBase_o *)v3046;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[358],
    (int64_t)v3046,
    v3047,
    v3048,
    v3049,
    v3050,
    v3051,
    v3052);
  v3053 = (UserGachaDrawLogMaster_o *)sub_1C2E378(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v3053, 0LL);
  if ( v3053 )
  {
    v538 = sub_1C2E268(v3053, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1607;
  v536->m_Items[359] = (DataMasterBase_o *)v3053;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[359],
    (int64_t)v3053,
    v3054,
    v3055,
    v3056,
    v3057,
    v3058,
    v3059);
  v3060 = (ServantAppendPassiveSkillMaster_o *)sub_1C2E378(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v3060, 0LL);
  if ( v3060 )
  {
    v538 = sub_1C2E268(v3060, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1607;
  v536->m_Items[360] = (DataMasterBase_o *)v3060;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[360],
    (int64_t)v3060,
    v3061,
    v3062,
    v3063,
    v3064,
    v3065,
    v3066);
  v3067 = (UserServantAppendPassiveSkillMaster_o *)sub_1C2E378(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v3067, 0LL);
  if ( v3067 )
  {
    v538 = sub_1C2E268(v3067, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1607;
  v536->m_Items[361] = (DataMasterBase_o *)v3067;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[361],
    (int64_t)v3067,
    v3068,
    v3069,
    v3070,
    v3071,
    v3072,
    v3073);
  v3074 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1C2E378(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v3074, 0LL);
  if ( v3074 )
  {
    v538 = sub_1C2E268(v3074, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1607;
  v536->m_Items[362] = (DataMasterBase_o *)v3074;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[362],
    (int64_t)v3074,
    v3075,
    v3076,
    v3077,
    v3078,
    v3079,
    v3080);
  v3081 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1C2E378(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v3081, 0LL);
  if ( v3081 )
  {
    v538 = sub_1C2E268(v3081, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1607;
  v536->m_Items[363] = (DataMasterBase_o *)v3081;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[363],
    (int64_t)v3081,
    v3082,
    v3083,
    v3084,
    v3085,
    v3086,
    v3087);
  v3088 = (CombineAppendPassiveSkillMaster_o *)sub_1C2E378(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v3088, 0LL);
  if ( v3088 )
  {
    v538 = sub_1C2E268(v3088, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1607;
  v536->m_Items[364] = (DataMasterBase_o *)v3088;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[364],
    (int64_t)v3088,
    v3089,
    v3090,
    v3091,
    v3092,
    v3093,
    v3094);
  v3095 = (SvtCoinMaster_o *)sub_1C2E378(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v3095, 0LL);
  if ( v3095 )
  {
    v538 = sub_1C2E268(v3095, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1607;
  v536->m_Items[365] = (DataMasterBase_o *)v3095;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[365],
    (int64_t)v3095,
    v3096,
    v3097,
    v3098,
    v3099,
    v3100,
    v3101);
  v3102 = (UserSvtCoinMaster_o *)sub_1C2E378(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v3102, 0LL);
  if ( v3102 )
  {
    v538 = sub_1C2E268(v3102, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1607;
  v536->m_Items[366] = (DataMasterBase_o *)v3102;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[366],
    (int64_t)v3102,
    v3103,
    v3104,
    v3105,
    v3106,
    v3107,
    v3108);
  v3109 = (ServantAddMaster_o *)sub_1C2E378(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v3109, 0LL);
  if ( v3109 )
  {
    v538 = sub_1C2E268(v3109, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1607;
  v536->m_Items[367] = (DataMasterBase_o *)v3109;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[367],
    (int64_t)v3109,
    v3110,
    v3111,
    v3112,
    v3113,
    v3114,
    v3115);
  v3116 = (TreasureBoxMaster_o *)sub_1C2E378(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v3116, 0LL);
  if ( v3116 )
  {
    v538 = sub_1C2E268(v3116, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1607;
  v536->m_Items[368] = (DataMasterBase_o *)v3116;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[368],
    (int64_t)v3116,
    v3117,
    v3118,
    v3119,
    v3120,
    v3121,
    v3122);
  v3123 = (TreasureBoxGiftMaster_o *)sub_1C2E378(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v3123, 0LL);
  if ( v3123 )
  {
    v538 = sub_1C2E268(v3123, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1607;
  v536->m_Items[369] = (DataMasterBase_o *)v3123;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[369],
    (int64_t)v3123,
    v3124,
    v3125,
    v3126,
    v3127,
    v3128,
    v3129);
  v3130 = (TreasureBoxTalkMaster_o *)sub_1C2E378(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v3130, 0LL);
  if ( v3130 )
  {
    v538 = sub_1C2E268(v3130, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1607;
  v536->m_Items[370] = (DataMasterBase_o *)v3130;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[370],
    (int64_t)v3130,
    v3131,
    v3132,
    v3133,
    v3134,
    v3135,
    v3136);
  v3137 = (UserEventExpeditionMaster_o *)sub_1C2E378(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v3137, 0LL);
  if ( v3137 )
  {
    v538 = sub_1C2E268(v3137, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1607;
  v536->m_Items[371] = (DataMasterBase_o *)v3137;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[371],
    (int64_t)v3137,
    v3138,
    v3139,
    v3140,
    v3141,
    v3142,
    v3143);
  v3144 = (EventExpeditionMaster_o *)sub_1C2E378(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v3144, 0LL);
  if ( v3144 )
  {
    v538 = sub_1C2E268(v3144, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1607;
  v536->m_Items[372] = (DataMasterBase_o *)v3144;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[372],
    (int64_t)v3144,
    v3145,
    v3146,
    v3147,
    v3148,
    v3149,
    v3150);
  v3151 = (EventExpeditionPieceMaster_o *)sub_1C2E378(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v3151, 0LL);
  if ( v3151 )
  {
    v538 = sub_1C2E268(v3151, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1607;
  v536->m_Items[373] = (DataMasterBase_o *)v3151;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[373],
    (int64_t)v3151,
    v3152,
    v3153,
    v3154,
    v3155,
    v3156,
    v3157);
  v3158 = (EventRecipeMaster_o *)sub_1C2E378(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v3158, 0LL);
  if ( v3158 )
  {
    v538 = sub_1C2E268(v3158, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1607;
  v536->m_Items[374] = (DataMasterBase_o *)v3158;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[374],
    (int64_t)v3158,
    v3159,
    v3160,
    v3161,
    v3162,
    v3163,
    v3164);
  v3165 = (EventRecipeGiftMaster_o *)sub_1C2E378(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v3165, 0LL);
  if ( v3165 )
  {
    v538 = sub_1C2E268(v3165, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1607;
  v536->m_Items[375] = (DataMasterBase_o *)v3165;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[375],
    (int64_t)v3165,
    v3166,
    v3167,
    v3168,
    v3169,
    v3170,
    v3171);
  v3172 = (UserEventFortificationMaster_o *)sub_1C2E378(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v3172, 0LL);
  if ( v3172 )
  {
    v538 = sub_1C2E268(v3172, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1607;
  v536->m_Items[376] = (DataMasterBase_o *)v3172;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[376],
    (int64_t)v3172,
    v3173,
    v3174,
    v3175,
    v3176,
    v3177,
    v3178);
  v3179 = (EventFortificationMaster_o *)sub_1C2E378(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v3179, 0LL);
  if ( v3179 )
  {
    v538 = sub_1C2E268(v3179, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1607;
  v536->m_Items[377] = (DataMasterBase_o *)v3179;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[377],
    (int64_t)v3179,
    v3180,
    v3181,
    v3182,
    v3183,
    v3184,
    v3185);
  v3186 = (EventFortificationDetailMaster_o *)sub_1C2E378(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v3186, 0LL);
  if ( v3186 )
  {
    v538 = sub_1C2E268(v3186, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1607;
  v536->m_Items[378] = (DataMasterBase_o *)v3186;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[378],
    (int64_t)v3186,
    v3187,
    v3188,
    v3189,
    v3190,
    v3191,
    v3192);
  v3193 = (EventFortificationSvtMaster_o *)sub_1C2E378(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v3193, 0LL);
  if ( v3193 )
  {
    v538 = sub_1C2E268(v3193, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1607;
  v536->m_Items[379] = (DataMasterBase_o *)v3193;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[379],
    (int64_t)v3193,
    v3194,
    v3195,
    v3196,
    v3197,
    v3198,
    v3199);
  v3200 = (UserServantVoicePlayedMaster_o *)sub_1C2E378(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v3200, 0LL);
  if ( v3200 )
  {
    v538 = sub_1C2E268(v3200, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1607;
  v536->m_Items[380] = (DataMasterBase_o *)v3200;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[380],
    (int64_t)v3200,
    v3201,
    v3202,
    v3203,
    v3204,
    v3205,
    v3206);
  v3207 = (UpdateProfileDialogInfoMaster_o *)sub_1C2E378(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v3207, 0LL);
  if ( v3207 )
  {
    v538 = sub_1C2E268(v3207, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1607;
  v536->m_Items[381] = (DataMasterBase_o *)v3207;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[381],
    (int64_t)v3207,
    v3208,
    v3209,
    v3210,
    v3211,
    v3212,
    v3213);
  v3214 = (SvtMaterialTdMaster_o *)sub_1C2E378(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v3214, 0LL);
  if ( v3214 )
  {
    v538 = sub_1C2E268(v3214, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1607;
  v536->m_Items[382] = (DataMasterBase_o *)v3214;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[382],
    (int64_t)v3214,
    v3215,
    v3216,
    v3217,
    v3218,
    v3219,
    v3220);
  v3221 = (BattleMasterImageMaster_o *)sub_1C2E378(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v3221, 0LL);
  if ( v3221 )
  {
    v538 = sub_1C2E268(v3221, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1607;
  v536->m_Items[383] = (DataMasterBase_o *)v3221;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[383],
    (int64_t)v3221,
    v3222,
    v3223,
    v3224,
    v3225,
    v3226,
    v3227);
  v3228 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1C2E378(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v3228, 0LL);
  if ( v3228 )
  {
    v538 = sub_1C2E268(v3228, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1607;
  v536->m_Items[384] = (DataMasterBase_o *)v3228;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[384],
    (int64_t)v3228,
    v3229,
    v3230,
    v3231,
    v3232,
    v3233,
    v3234);
  v3235 = (UserEventRandomMissionMaster_o *)sub_1C2E378(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v3235, 0LL);
  if ( v3235 )
  {
    v538 = sub_1C2E268(v3235, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1607;
  v536->m_Items[385] = (DataMasterBase_o *)v3235;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[385],
    (int64_t)v3235,
    v3236,
    v3237,
    v3238,
    v3239,
    v3240,
    v3241);
  v3242 = (EventProgressValueMaster_o *)sub_1C2E378(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v3242, 0LL);
  if ( v3242 )
  {
    v538 = sub_1C2E268(v3242, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1607;
  v536->m_Items[386] = (DataMasterBase_o *)v3242;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[386],
    (int64_t)v3242,
    v3243,
    v3244,
    v3245,
    v3246,
    v3247,
    v3248);
  v3249 = (SvtMultiPortraitMaster_o *)sub_1C2E378(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v3249, 0LL);
  if ( v3249 )
  {
    v538 = sub_1C2E268(v3249, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1607;
  v536->m_Items[387] = (DataMasterBase_o *)v3249;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[387],
    (int64_t)v3249,
    v3250,
    v3251,
    v3252,
    v3253,
    v3254,
    v3255);
  v3256 = (EventRandomMissionMaster_o *)sub_1C2E378(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v3256, 0LL);
  if ( v3256 )
  {
    v538 = sub_1C2E268(v3256, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1607;
  v536->m_Items[388] = (DataMasterBase_o *)v3256;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[388],
    (int64_t)v3256,
    v3257,
    v3258,
    v3259,
    v3260,
    v3261,
    v3262);
  v3263 = (UserGachaHistoryMaster_o *)sub_1C2E378(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v3263, 0LL);
  if ( v3263 )
  {
    v538 = sub_1C2E268(v3263, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1607;
  v536->m_Items[389] = (DataMasterBase_o *)v3263;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[389],
    (int64_t)v3263,
    v3264,
    v3265,
    v3266,
    v3267,
    v3268,
    v3269);
  v3270 = (UserCoinRoomMaster_o *)sub_1C2E378(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v3270, 0LL);
  if ( v3270 )
  {
    v538 = sub_1C2E268(v3270, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1607;
  v536->m_Items[390] = (DataMasterBase_o *)v3270;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[390],
    (int64_t)v3270,
    v3271,
    v3272,
    v3273,
    v3274,
    v3275,
    v3276);
  v3277 = (EventBuddyPointMaster_o *)sub_1C2E378(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v3277, 0LL);
  if ( v3277 )
  {
    v538 = sub_1C2E268(v3277, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1607;
  v536->m_Items[391] = (DataMasterBase_o *)v3277;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[391],
    (int64_t)v3277,
    v3278,
    v3279,
    v3280,
    v3281,
    v3282,
    v3283);
  v3284 = (EventServantPointRankMaster_o *)sub_1C2E378(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v3284, 0LL);
  if ( v3284 )
  {
    v538 = sub_1C2E268(v3284, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1607;
  v536->m_Items[392] = (DataMasterBase_o *)v3284;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[392],
    (int64_t)v3284,
    v3285,
    v3286,
    v3287,
    v3288,
    v3289,
    v3290);
  v3291 = (UserEventServantPointMaster_o *)sub_1C2E378(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v3291, 0LL);
  if ( v3291 )
  {
    v538 = sub_1C2E268(v3291, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1607;
  v536->m_Items[393] = (DataMasterBase_o *)v3291;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[393],
    (int64_t)v3291,
    v3292,
    v3293,
    v3294,
    v3295,
    v3296,
    v3297);
  v3298 = (FieldMotionMaster_o *)sub_1C2E378(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v3298, 0LL);
  if ( v3298 )
  {
    v538 = sub_1C2E268(v3298, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1607;
  v536->m_Items[394] = (DataMasterBase_o *)v3298;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[394],
    (int64_t)v3298,
    v3299,
    v3300,
    v3301,
    v3302,
    v3303,
    v3304);
  v3305 = (UserDeleteReservationMaster_o *)sub_1C2E378(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v3305, 0LL);
  if ( v3305 )
  {
    v538 = sub_1C2E268(v3305, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1607;
  v536->m_Items[395] = (DataMasterBase_o *)v3305;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[395],
    (int64_t)v3305,
    v3306,
    v3307,
    v3308,
    v3309,
    v3310,
    v3311);
  v3312 = (ServantScriptMultipleMaster_o *)sub_1C2E378(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v3312, 0LL);
  if ( v3312 )
  {
    v538 = sub_1C2E268(v3312, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1607;
  v536->m_Items[396] = (DataMasterBase_o *)v3312;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[396],
    (int64_t)v3312,
    v3313,
    v3314,
    v3315,
    v3316,
    v3317,
    v3318);
  v3319 = (EquipAddMaster_o *)sub_1C2E378(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v3319, 0LL);
  if ( v3319 )
  {
    v538 = sub_1C2E268(v3319, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1607;
  v536->m_Items[397] = (DataMasterBase_o *)v3319;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[397],
    (int64_t)v3319,
    v3320,
    v3321,
    v3322,
    v3323,
    v3324,
    v3325);
  v3326 = (QuestReleaseOverwriteMaster_o *)sub_1C2E378(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v3326, 0LL);
  if ( v3326 )
  {
    v538 = sub_1C2E268(v3326, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1607;
  v536->m_Items[398] = (DataMasterBase_o *)v3326;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[398],
    (int64_t)v3326,
    v3327,
    v3328,
    v3329,
    v3330,
    v3331,
    v3332);
  v3333 = (UserEventAlloutBattleMaster_o *)sub_1C2E378(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v3333, 0LL);
  if ( v3333 )
  {
    v538 = sub_1C2E268(v3333, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1607;
  v536->m_Items[399] = (DataMasterBase_o *)v3333;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[399],
    (int64_t)v3333,
    v3334,
    v3335,
    v3336,
    v3337,
    v3338,
    v3339);
  v3340 = (QuestScriptMaterialNextMaster_o *)sub_1C2E378(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v3340, 0LL);
  if ( v3340 )
  {
    v538 = sub_1C2E268(v3340, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1607;
  v536->m_Items[400] = (DataMasterBase_o *)v3340;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[400],
    (int64_t)v3340,
    v3341,
    v3342,
    v3343,
    v3344,
    v3345,
    v3346);
  v3347 = (EventDiggingMaster_o *)sub_1C2E378(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v3347, 0LL);
  if ( v3347 )
  {
    v538 = sub_1C2E268(v3347, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1607;
  v536->m_Items[401] = (DataMasterBase_o *)v3347;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[401],
    (int64_t)v3347,
    v3348,
    v3349,
    v3350,
    v3351,
    v3352,
    v3353);
  v3354 = (EventDiggingBlockMaster_o *)sub_1C2E378(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v3354, 0LL);
  if ( v3354 )
  {
    v538 = sub_1C2E268(v3354, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1607;
  v536->m_Items[402] = (DataMasterBase_o *)v3354;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[402],
    (int64_t)v3354,
    v3355,
    v3356,
    v3357,
    v3358,
    v3359,
    v3360);
  v3361 = (EventDiggingRewardMaster_o *)sub_1C2E378(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v3361, 0LL);
  if ( v3361 )
  {
    v538 = sub_1C2E268(v3361, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1607;
  v536->m_Items[403] = (DataMasterBase_o *)v3361;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[403],
    (int64_t)v3361,
    v3362,
    v3363,
    v3364,
    v3365,
    v3366,
    v3367);
  v3368 = (UserEventDiggingMaster_o *)sub_1C2E378(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v3368, 0LL);
  if ( v3368 )
  {
    v538 = sub_1C2E268(v3368, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1607;
  v536->m_Items[404] = (DataMasterBase_o *)v3368;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[404],
    (int64_t)v3368,
    v3369,
    v3370,
    v3371,
    v3372,
    v3373,
    v3374);
  v3375 = (BattleMessageMaster_o *)sub_1C2E378(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v3375, 0LL);
  if ( v3375 )
  {
    v538 = sub_1C2E268(v3375, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1607;
  v536->m_Items[405] = (DataMasterBase_o *)v3375;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[405],
    (int64_t)v3375,
    v3376,
    v3377,
    v3378,
    v3379,
    v3380,
    v3381);
  v3382 = (BattleMessageGroupMaster_o *)sub_1C2E378(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v3382, 0LL);
  if ( v3382 )
  {
    v538 = sub_1C2E268(v3382, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1607;
  v536->m_Items[406] = (DataMasterBase_o *)v3382;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[406],
    (int64_t)v3382,
    v3383,
    v3384,
    v3385,
    v3386,
    v3387,
    v3388);
  v3389 = (UserNpcSvtRecordMaster_o *)sub_1C2E378(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v3389, 0LL);
  if ( v3389 )
  {
    v538 = sub_1C2E268(v3389, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1607;
  v536->m_Items[407] = (DataMasterBase_o *)v3389;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[407],
    (int64_t)v3389,
    v3390,
    v3391,
    v3392,
    v3393,
    v3394,
    v3395);
  v3396 = (BuffTypeDetailMaster_o *)sub_1C2E378(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v3396, 0LL);
  if ( v3396 )
  {
    v538 = sub_1C2E268(v3396, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1607;
  v536->m_Items[408] = (DataMasterBase_o *)v3396;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[408],
    (int64_t)v3396,
    v3397,
    v3398,
    v3399,
    v3400,
    v3401,
    v3402);
  v3403 = (WarBoardMessageMaster_o *)sub_1C2E378(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v3403, 0LL);
  if ( v3403 )
  {
    v538 = sub_1C2E268(v3403, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1607;
  v536->m_Items[409] = (DataMasterBase_o *)v3403;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[409],
    (int64_t)v3403,
    v3404,
    v3405,
    v3406,
    v3407,
    v3408,
    v3409);
  v3410 = (WarBoardPartySkillMaster_o *)sub_1C2E378(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v3410, 0LL);
  if ( v3410 )
  {
    v538 = sub_1C2E268(v3410, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1607;
  v536->m_Items[410] = (DataMasterBase_o *)v3410;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[410],
    (int64_t)v3410,
    v3411,
    v3412,
    v3413,
    v3414,
    v3415,
    v3416);
  v3417 = (WarBoardMessageScriptMaster_o *)sub_1C2E378(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v3417, 0LL);
  if ( v3417 )
  {
    v538 = sub_1C2E268(v3417, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1607;
  v536->m_Items[411] = (DataMasterBase_o *)v3417;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[411],
    (int64_t)v3417,
    v3418,
    v3419,
    v3420,
    v3421,
    v3422,
    v3423);
  v3424 = (WarQuestSelectionMaster_o *)sub_1C2E378(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v3424, 0LL);
  if ( v3424 )
  {
    v538 = sub_1C2E268(v3424, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1607;
  v536->m_Items[412] = (DataMasterBase_o *)v3424;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[412],
    (int64_t)v3424,
    v3425,
    v3426,
    v3427,
    v3428,
    v3429,
    v3430);
  v3431 = (WarBoardStageDetailMaster_o *)sub_1C2E378(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v3431, 0LL);
  if ( v3431 )
  {
    v538 = sub_1C2E268(v3431, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1607;
  v536->m_Items[413] = (DataMasterBase_o *)v3431;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[413],
    (int64_t)v3431,
    v3432,
    v3433,
    v3434,
    v3435,
    v3436,
    v3437);
  v3438 = (QuestScriptMaterialOverwriteMaster_o *)sub_1C2E378(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v3438, 0LL);
  if ( v3438 )
  {
    v538 = sub_1C2E268(v3438, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1607;
  v536->m_Items[414] = (DataMasterBase_o *)v3438;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[414],
    (int64_t)v3438,
    v3439,
    v3440,
    v3441,
    v3442,
    v3443,
    v3444);
  v3445 = (QuestScriptBranchMaterialMaster_o *)sub_1C2E378(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v3445, 0LL);
  if ( v3445 )
  {
    v538 = sub_1C2E268(v3445, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1607;
  v536->m_Items[415] = (DataMasterBase_o *)v3445;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[415],
    (int64_t)v3445,
    v3446,
    v3447,
    v3448,
    v3449,
    v3450,
    v3451);
  v3452 = (AdCheckPointMaster_o *)sub_1C2E378(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v3452, 0LL);
  if ( v3452 )
  {
    v538 = sub_1C2E268(v3452, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1607;
  v536->m_Items[416] = (DataMasterBase_o *)v3452;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[416],
    (int64_t)v3452,
    v3453,
    v3454,
    v3455,
    v3456,
    v3457,
    v3458);
  v3459 = (GiftDetailMaster_o *)sub_1C2E378(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v3459, 0LL);
  if ( v3459 )
  {
    v538 = sub_1C2E268(v3459, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1607;
  v536->m_Items[417] = (DataMasterBase_o *)v3459;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[417],
    (int64_t)v3459,
    v3460,
    v3461,
    v3462,
    v3463,
    v3464,
    v3465);
  v3466 = (CombineLimitGiftMaster_o *)sub_1C2E378(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v3466, 0LL);
  if ( v3466 )
  {
    v538 = sub_1C2E268(v3466, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1607;
  v536->m_Items[418] = (DataMasterBase_o *)v3466;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[418],
    (int64_t)v3466,
    v3467,
    v3468,
    v3469,
    v3470,
    v3471,
    v3472);
  v3473 = (EventCooltimeRewardMaster_o *)sub_1C2E378(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v3473, 0LL);
  if ( v3473 )
  {
    v538 = sub_1C2E268(v3473, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1607;
  v536->m_Items[419] = (DataMasterBase_o *)v3473;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[419],
    (int64_t)v3473,
    v3474,
    v3475,
    v3476,
    v3477,
    v3478,
    v3479);
  v3480 = (UserEventCooltimeRewardMaster_o *)sub_1C2E378(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v3480, 0LL);
  if ( v3480 )
  {
    v538 = sub_1C2E268(v3480, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1607;
  v536->m_Items[420] = (DataMasterBase_o *)v3480;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[420],
    (int64_t)v3480,
    v3481,
    v3482,
    v3483,
    v3484,
    v3485,
    v3486);
  v3487 = (ClassBoardBaseMaster_o *)sub_1C2E378(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v3487, 0LL);
  if ( v3487 )
  {
    v538 = sub_1C2E268(v3487, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1607;
  v536->m_Items[421] = (DataMasterBase_o *)v3487;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[421],
    (int64_t)v3487,
    v3488,
    v3489,
    v3490,
    v3491,
    v3492,
    v3493);
  v3494 = (ClassBoardLockMaster_o *)sub_1C2E378(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v3494, 0LL);
  if ( v3494 )
  {
    v538 = sub_1C2E268(v3494, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1607;
  v536->m_Items[422] = (DataMasterBase_o *)v3494;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[422],
    (int64_t)v3494,
    v3495,
    v3496,
    v3497,
    v3498,
    v3499,
    v3500);
  v3501 = (ClassBoardSquareMaster_o *)sub_1C2E378(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v3501, 0LL);
  if ( v3501 )
  {
    v538 = sub_1C2E268(v3501, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1607;
  v536->m_Items[423] = (DataMasterBase_o *)v3501;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[423],
    (int64_t)v3501,
    v3502,
    v3503,
    v3504,
    v3505,
    v3506,
    v3507);
  v3508 = (ClassBoardLineMaster_o *)sub_1C2E378(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v3508, 0LL);
  if ( v3508 )
  {
    v538 = sub_1C2E268(v3508, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1607;
  v536->m_Items[424] = (DataMasterBase_o *)v3508;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[424],
    (int64_t)v3508,
    v3509,
    v3510,
    v3511,
    v3512,
    v3513,
    v3514);
  v3515 = (UserClassBoardSquareMaster_o *)sub_1C2E378(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v3515, 0LL);
  if ( v3515 )
  {
    v538 = sub_1C2E268(v3515, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1607;
  v536->m_Items[425] = (DataMasterBase_o *)v3515;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[425],
    (int64_t)v3515,
    v3516,
    v3517,
    v3518,
    v3519,
    v3520,
    v3521);
  v3522 = (ServantCardAddMaster_o *)sub_1C2E378(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v3522, 0LL);
  if ( v3522 )
  {
    v538 = sub_1C2E268(v3522, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1607;
  v536->m_Items[426] = (DataMasterBase_o *)v3522;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[426],
    (int64_t)v3522,
    v3523,
    v3524,
    v3525,
    v3526,
    v3527,
    v3528);
  v3529 = (MapLayerMaster_o *)sub_1C2E378(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v3529, 0LL);
  if ( v3529 )
  {
    v538 = sub_1C2E268(v3529, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1607;
  v536->m_Items[427] = (DataMasterBase_o *)v3529;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[427],
    (int64_t)v3529,
    v3530,
    v3531,
    v3532,
    v3533,
    v3534,
    v3535);
  v3536 = (SpotLayerMaster_o *)sub_1C2E378(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v3536, 0LL);
  if ( v3536 )
  {
    v538 = sub_1C2E268(v3536, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1607;
  v536->m_Items[428] = (DataMasterBase_o *)v3536;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[428],
    (int64_t)v3536,
    v3537,
    v3538,
    v3539,
    v3540,
    v3541,
    v3542);
  v3543 = (MapGimmickLayerMaster_o *)sub_1C2E378(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v3543, 0LL);
  if ( v3543 )
  {
    v538 = sub_1C2E268(v3543, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1607;
  v536->m_Items[429] = (DataMasterBase_o *)v3543;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[429],
    (int64_t)v3543,
    v3544,
    v3545,
    v3546,
    v3547,
    v3548,
    v3549);
  v3550 = (EventDataLostBattleMaster_o *)sub_1C2E378(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v3550, 0LL);
  if ( v3550 )
  {
    v538 = sub_1C2E268(v3550, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1607;
  v536->m_Items[430] = (DataMasterBase_o *)v3550;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[430],
    (int64_t)v3550,
    v3551,
    v3552,
    v3553,
    v3554,
    v3555,
    v3556);
  v3557 = (EventDataLostBattleResetMaster_o *)sub_1C2E378(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v3557, 0LL);
  if ( v3557 )
  {
    v538 = sub_1C2E268(v3557, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1607;
  v536->m_Items[431] = (DataMasterBase_o *)v3557;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[431],
    (int64_t)v3557,
    v3558,
    v3559,
    v3560,
    v3561,
    v3562,
    v3563);
  v3564 = (UserEventDataLostMaster_o *)sub_1C2E378(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v3564, 0LL);
  if ( v3564 )
  {
    v538 = sub_1C2E268(v3564, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1607;
  v536->m_Items[432] = (DataMasterBase_o *)v3564;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[432],
    (int64_t)v3564,
    v3565,
    v3566,
    v3567,
    v3568,
    v3569,
    v3570);
  v3571 = (QuestHintMaster_o *)sub_1C2E378(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v3571, 0LL);
  if ( v3571 )
  {
    v538 = sub_1C2E268(v3571, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1607;
  v536->m_Items[433] = (DataMasterBase_o *)v3571;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[433],
    (int64_t)v3571,
    v3572,
    v3573,
    v3574,
    v3575,
    v3576,
    v3577);
  v3578 = (FuncTypeDetailMaster_o *)sub_1C2E378(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v3578, 0LL);
  if ( v3578 )
  {
    v538 = sub_1C2E268(v3578, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1607;
  v536->m_Items[434] = (DataMasterBase_o *)v3578;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[434],
    (int64_t)v3578,
    v3579,
    v3580,
    v3581,
    v3582,
    v3583,
    v3584);
  v3585 = (BuffConvertMaster_o *)sub_1C2E378(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v3585, 0LL);
  if ( v3585 )
  {
    v538 = sub_1C2E268(v3585, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1607;
  v536->m_Items[435] = (DataMasterBase_o *)v3585;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[435],
    (int64_t)v3585,
    v3586,
    v3587,
    v3588,
    v3589,
    v3590,
    v3591);
  v3592 = (SkillGroupMaster_o *)sub_1C2E378(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v3592, 0LL);
  if ( v3592 )
  {
    v538 = sub_1C2E268(v3592, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1607;
  v536->m_Items[436] = (DataMasterBase_o *)v3592;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[436],
    (int64_t)v3592,
    v3593,
    v3594,
    v3595,
    v3596,
    v3597,
    v3598);
  v3599 = (SkillGroupOverwriteMaster_o *)sub_1C2E378(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v3599, 0LL);
  if ( v3599 )
  {
    v538 = sub_1C2E268(v3599, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1607;
  v536->m_Items[437] = (DataMasterBase_o *)v3599;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[437],
    (int64_t)v3599,
    v3600,
    v3601,
    v3602,
    v3603,
    v3604,
    v3605);
  v3606 = (SkillIndividualityMaster_o *)sub_1C2E378(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v3606, 0LL);
  if ( v3606 )
  {
    v538 = sub_1C2E268(v3606, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1607;
  v536->m_Items[438] = (DataMasterBase_o *)v3606;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[438],
    (int64_t)v3606,
    v3607,
    v3608,
    v3609,
    v3610,
    v3611,
    v3612);
  v3613 = (RestrictionBaseMaster_o *)sub_1C2E378(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v3613, 0LL);
  if ( v3613 )
  {
    v538 = sub_1C2E268(v3613, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1607;
  v536->m_Items[439] = (DataMasterBase_o *)v3613;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[439],
    (int64_t)v3613,
    v3614,
    v3615,
    v3616,
    v3617,
    v3618,
    v3619);
  v3620 = (RestrictionSlotMaster_o *)sub_1C2E378(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v3620, 0LL);
  if ( v3620 )
  {
    v538 = sub_1C2E268(v3620, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1607;
  v536->m_Items[440] = (DataMasterBase_o *)v3620;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[440],
    (int64_t)v3620,
    v3621,
    v3622,
    v3623,
    v3624,
    v3625,
    v3626);
  v3627 = (RestrictionSlotDetailMaster_o *)sub_1C2E378(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v3627, 0LL);
  if ( v3627 )
  {
    v538 = sub_1C2E268(v3627, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1607;
  v536->m_Items[441] = (DataMasterBase_o *)v3627;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[441],
    (int64_t)v3627,
    v3628,
    v3629,
    v3630,
    v3631,
    v3632,
    v3633);
  v3634 = (RestrictionMessageMaster_o *)sub_1C2E378(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v3634, 0LL);
  if ( v3634 )
  {
    v538 = sub_1C2E268(v3634, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1607;
  v536->m_Items[442] = (DataMasterBase_o *)v3634;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[442],
    (int64_t)v3634,
    v3635,
    v3636,
    v3637,
    v3638,
    v3639,
    v3640);
  v3641 = (RestrictionWholeMaster_o *)sub_1C2E378(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v3641, 0LL);
  if ( v3641 )
  {
    v538 = sub_1C2E268(v3641, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1607;
  v536->m_Items[443] = (DataMasterBase_o *)v3641;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[443],
    (int64_t)v3641,
    v3642,
    v3643,
    v3644,
    v3645,
    v3646,
    v3647);
  v3648 = (FuncDispMaster_o *)sub_1C2E378(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v3648, 0LL);
  if ( v3648 )
  {
    v538 = sub_1C2E268(v3648, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1607;
  v536->m_Items[444] = (DataMasterBase_o *)v3648;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[444],
    (int64_t)v3648,
    v3649,
    v3650,
    v3651,
    v3652,
    v3653,
    v3654);
  v3655 = (ClassBoardCommandSpellMaster_o *)sub_1C2E378(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v3655, 0LL);
  if ( v3655 )
  {
    v538 = sub_1C2E268(v3655, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1607;
  v536->m_Items[445] = (DataMasterBase_o *)v3655;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[445],
    (int64_t)v3655,
    v3656,
    v3657,
    v3658,
    v3659,
    v3660,
    v3661);
  v3662 = (ClassBoardClassMaster_o *)sub_1C2E378(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v3662, 0LL);
  if ( v3662 )
  {
    v538 = sub_1C2E268(v3662, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1607;
  v536->m_Items[446] = (DataMasterBase_o *)v3662;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[446],
    (int64_t)v3662,
    v3663,
    v3664,
    v3665,
    v3666,
    v3667,
    v3668);
  v3669 = (EventCommandAssistMaster_o *)sub_1C2E378(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v3669, 0LL);
  if ( v3669 )
  {
    v538 = sub_1C2E268(v3669, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1607;
  v536->m_Items[447] = (DataMasterBase_o *)v3669;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[447],
    (int64_t)v3669,
    v3670,
    v3671,
    v3672,
    v3673,
    v3674,
    v3675);
  v3676 = (EventMissionGroupMaster_o *)sub_1C2E378(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v3676, 0LL);
  if ( v3676 )
  {
    v538 = sub_1C2E268(v3676, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1607;
  v536->m_Items[448] = (DataMasterBase_o *)v3676;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[448],
    (int64_t)v3676,
    v3677,
    v3678,
    v3679,
    v3680,
    v3681,
    v3682);
  v3683 = (CombineLimitReleaseMaster_o *)sub_1C2E378(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v3683, 0LL);
  if ( v3683 )
  {
    v538 = sub_1C2E268(v3683, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1607;
  v536->m_Items[449] = (DataMasterBase_o *)v3683;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[449],
    (int64_t)v3683,
    v3684,
    v3685,
    v3686,
    v3687,
    v3688,
    v3689);
  v3690 = (HeelPortraitMaster_o *)sub_1C2E378(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v3690, 0LL);
  if ( v3690 )
  {
    v538 = sub_1C2E268(v3690, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1607;
  v536->m_Items[450] = (DataMasterBase_o *)v3690;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[450],
    (int64_t)v3690,
    v3691,
    v3692,
    v3693,
    v3694,
    v3695,
    v3696);
  v3697 = (UserHeelPortraitMaster_o *)sub_1C2E378(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v3697, 0LL);
  if ( v3697 )
  {
    v538 = sub_1C2E268(v3697, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1607;
  v536->m_Items[451] = (DataMasterBase_o *)v3697;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[451],
    (int64_t)v3697,
    v3698,
    v3699,
    v3700,
    v3701,
    v3702,
    v3703);
  v3704 = (TreasureDeviceSequenceWeightMaster_o *)sub_1C2E378(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v3704, 0LL);
  if ( v3704 )
  {
    v538 = sub_1C2E268(v3704, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1607;
  v536->m_Items[452] = (DataMasterBase_o *)v3704;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[452],
    (int64_t)v3704,
    v3705,
    v3706,
    v3707,
    v3708,
    v3709,
    v3710);
  v3711 = (NpcServantFollowerIndividualityMaster_o *)sub_1C2E378(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v3711, 0LL);
  if ( v3711 )
  {
    v538 = sub_1C2E268(v3711, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1607;
  v536->m_Items[453] = (DataMasterBase_o *)v3711;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[453],
    (int64_t)v3711,
    v3712,
    v3713,
    v3714,
    v3715,
    v3716,
    v3717);
  v3718 = (GachaExtraGiftMaster_o *)sub_1C2E378(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v3718, 0LL);
  if ( v3718 )
  {
    v538 = sub_1C2E268(v3718, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1607;
  v536->m_Items[454] = (DataMasterBase_o *)v3718;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[454],
    (int64_t)v3718,
    v3719,
    v3720,
    v3721,
    v3722,
    v3723,
    v3724);
  v3725 = (EventMuralMaster_o *)sub_1C2E378(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v3725, 0LL);
  if ( v3725 )
  {
    v538 = sub_1C2E268(v3725, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1607;
  v536->m_Items[455] = (DataMasterBase_o *)v3725;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[455],
    (int64_t)v3725,
    v3726,
    v3727,
    v3728,
    v3729,
    v3730,
    v3731);
  v3732 = (ViewWaveEnemyMaster_o *)sub_1C2E378(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v3732, 0LL);
  if ( v3732 )
  {
    v538 = sub_1C2E268(v3732, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1607;
  v536->m_Items[456] = (DataMasterBase_o *)v3732;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[456],
    (int64_t)v3732,
    v3733,
    v3734,
    v3735,
    v3736,
    v3737,
    v3738);
  v3739 = (BlankEarthSpotNavimenuMaster_o *)sub_1C2E378(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v3739, 0LL);
  if ( v3739 )
  {
    v538 = sub_1C2E268(v3739, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1607;
  v536->m_Items[457] = (DataMasterBase_o *)v3739;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[457],
    (int64_t)v3739,
    v3740,
    v3741,
    v3742,
    v3743,
    v3744,
    v3745);
  v3746 = (BlankEarthGimmickMaster_o *)sub_1C2E378(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v3746, 0LL);
  if ( v3746 )
  {
    v538 = sub_1C2E268(v3746, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1607;
  v536->m_Items[458] = (DataMasterBase_o *)v3746;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[458],
    (int64_t)v3746,
    v3747,
    v3748,
    v3749,
    v3750,
    v3751,
    v3752);
  v3753 = (TerminalOverwriteMaster_o *)sub_1C2E378(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v3753, 0LL);
  if ( v3753 )
  {
    v538 = sub_1C2E268(v3753, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1607;
  v536->m_Items[459] = (DataMasterBase_o *)v3753;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[459],
    (int64_t)v3753,
    v3754,
    v3755,
    v3756,
    v3757,
    v3758,
    v3759);
  v3760 = (UserExchangeSvtMaster_o *)sub_1C2E378(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v3760, 0LL);
  if ( v3760 )
  {
    v538 = sub_1C2E268(v3760, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1607;
  v536->m_Items[460] = (DataMasterBase_o *)v3760;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[460],
    (int64_t)v3760,
    v3761,
    v3762,
    v3763,
    v3764,
    v3765,
    v3766);
  v3767 = (WarBoardCommonReleaseMaster_o *)sub_1C2E378(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v3767, 0LL);
  if ( v3767 )
  {
    v538 = sub_1C2E268(v3767, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1607;
  v536->m_Items[461] = (DataMasterBase_o *)v3767;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[461],
    (int64_t)v3767,
    v3768,
    v3769,
    v3770,
    v3771,
    v3772,
    v3773);
  v3774 = (WarBoardEventMaster_o *)sub_1C2E378(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v3774, 0LL);
  if ( v3774 )
  {
    v538 = sub_1C2E268(v3774, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1607;
  v536->m_Items[462] = (DataMasterBase_o *)v3774;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[462],
    (int64_t)v3774,
    v3775,
    v3776,
    v3777,
    v3778,
    v3779,
    v3780);
  v3781 = (WarBoardEventScriptMaster_o *)sub_1C2E378(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v3781, 0LL);
  if ( v3781 )
  {
    v538 = sub_1C2E268(v3781, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1607;
  v536->m_Items[463] = (DataMasterBase_o *)v3781;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[463],
    (int64_t)v3781,
    v3782,
    v3783,
    v3784,
    v3785,
    v3786,
    v3787);
  v3788 = (WarBoardStageBossMaster_o *)sub_1C2E378(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v3788, 0LL);
  if ( v3788 )
  {
    v538 = sub_1C2E268(v3788, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1607;
  v536->m_Items[464] = (DataMasterBase_o *)v3788;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[464],
    (int64_t)v3788,
    v3789,
    v3790,
    v3791,
    v3792,
    v3793,
    v3794);
  v3795 = (WarBoardSquareIndexGroupMaster_o *)sub_1C2E378(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v3795, 0LL);
  if ( v3795 )
  {
    v538 = sub_1C2E268(v3795, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1607;
  v536->m_Items[465] = (DataMasterBase_o *)v3795;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[465],
    (int64_t)v3795,
    v3796,
    v3797,
    v3798,
    v3799,
    v3800,
    v3801);
  v3802 = (WarBoardActionTrendGroupMaster_o *)sub_1C2E378(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v3802, 0LL);
  if ( v3802 )
  {
    v538 = sub_1C2E268(v3802, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1607;
  v536->m_Items[466] = (DataMasterBase_o *)v3802;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[466],
    (int64_t)v3802,
    v3803,
    v3804,
    v3805,
    v3806,
    v3807,
    v3808);
  v3809 = (WarBoardRatingOffsetGroupMaster_o *)sub_1C2E378(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v3809, 0LL);
  if ( v3809 )
  {
    v538 = sub_1C2E268(v3809, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1607;
  v536->m_Items[467] = (DataMasterBase_o *)v3809;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[467],
    (int64_t)v3809,
    v3810,
    v3811,
    v3812,
    v3813,
    v3814,
    v3815);
  v3816 = (WarBoardReinforcementsMaster_o *)sub_1C2E378(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v3816, 0LL);
  if ( v3816 )
  {
    v538 = sub_1C2E268(v3816, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1607;
  v536->m_Items[468] = (DataMasterBase_o *)v3816;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[468],
    (int64_t)v3816,
    v3817,
    v3818,
    v3819,
    v3820,
    v3821,
    v3822);
  v3823 = (WarBoardStageReinforcementsMaster_o *)sub_1C2E378(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v3823, 0LL);
  if ( v3823 )
  {
    v538 = sub_1C2E268(v3823, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1607;
  v536->m_Items[469] = (DataMasterBase_o *)v3823;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[469],
    (int64_t)v3823,
    v3824,
    v3825,
    v3826,
    v3827,
    v3828,
    v3829);
  v3830 = (WarBoardFutureActionTrendMaster_o *)sub_1C2E378(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v3830, 0LL);
  if ( v3830 )
  {
    v538 = sub_1C2E268(v3830, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1607;
  v536->m_Items[470] = (DataMasterBase_o *)v3830;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[470],
    (int64_t)v3830,
    v3831,
    v3832,
    v3833,
    v3834,
    v3835,
    v3836);
  v3837 = (ServantProfilePushMaster_o *)sub_1C2E378(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v3837, 0LL);
  if ( v3837 )
  {
    v538 = sub_1C2E268(v3837, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1607;
  v536->m_Items[471] = (DataMasterBase_o *)v3837;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[471],
    (int64_t)v3837,
    v3838,
    v3839,
    v3840,
    v3841,
    v3842,
    v3843);
  v3844 = (MapGimmickPathMaster_o *)sub_1C2E378(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v3844, 0LL);
  if ( v3844 )
  {
    v538 = sub_1C2E268(v3844, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1607;
  v536->m_Items[472] = (DataMasterBase_o *)v3844;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[472],
    (int64_t)v3844,
    v3845,
    v3846,
    v3847,
    v3848,
    v3849,
    v3850);
  v3851 = (MapGimmickPathReleaseMaster_o *)sub_1C2E378(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v3851, 0LL);
  if ( v3851 )
  {
    v538 = sub_1C2E268(v3851, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1607;
  v536->m_Items[473] = (DataMasterBase_o *)v3851;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[473],
    (int64_t)v3851,
    v3852,
    v3853,
    v3854,
    v3855,
    v3856,
    v3857);
  v3858 = (ServantOverwriteMaster_o *)sub_1C2E378(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v3858, 0LL);
  if ( v3858 )
  {
    v538 = sub_1C2E268(v3858, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1607;
  v536->m_Items[474] = (DataMasterBase_o *)v3858;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[474],
    (int64_t)v3858,
    v3859,
    v3860,
    v3861,
    v3862,
    v3863,
    v3864);
  v3865 = (IndividualityPolicyMaster_o *)sub_1C2E378(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v3865, 0LL);
  if ( v3865 )
  {
    v538 = sub_1C2E268(v3865, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1607;
  v536->m_Items[475] = (DataMasterBase_o *)v3865;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[475],
    (int64_t)v3865,
    v3866,
    v3867,
    v3868,
    v3869,
    v3870,
    v3871);
  v3872 = (IndividualityPersonalityMaster_o *)sub_1C2E378(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v3872, 0LL);
  if ( v3872 )
  {
    v538 = sub_1C2E268(v3872, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1607;
  v536->m_Items[476] = (DataMasterBase_o *)v3872;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[476],
    (int64_t)v3872,
    v3873,
    v3874,
    v3875,
    v3876,
    v3877,
    v3878);
  v3879 = (AttriMaster_o *)sub_1C2E378(AttriMaster_TypeInfo);
  AttriMaster___ctor(v3879, 0LL);
  if ( v3879 )
  {
    v538 = sub_1C2E268(v3879, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1607;
  v536->m_Items[477] = (DataMasterBase_o *)v3879;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[477],
    (int64_t)v3879,
    v3880,
    v3881,
    v3882,
    v3883,
    v3884,
    v3885);
  v3886 = (ServantVoicePatternMaster_o *)sub_1C2E378(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v3886, 0LL);
  if ( v3886 )
  {
    v538 = sub_1C2E268(v3886, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1607;
  v536->m_Items[478] = (DataMasterBase_o *)v3886;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[478],
    (int64_t)v3886,
    v3887,
    v3888,
    v3889,
    v3890,
    v3891,
    v3892);
  v3893 = (UserGameCommonMaster_o *)sub_1C2E378(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v3893, 0LL);
  if ( v3893 )
  {
    v538 = sub_1C2E268(v3893, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1607;
  v536->m_Items[479] = (DataMasterBase_o *)v3893;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[479],
    (int64_t)v3893,
    v3894,
    v3895,
    v3896,
    v3897,
    v3898,
    v3899);
  v3900 = (ServantPhotoMaster_o *)sub_1C2E378(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v3900, 0LL);
  if ( v3900 )
  {
    v538 = sub_1C2E268(v3900, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1607;
  v536->m_Items[480] = (DataMasterBase_o *)v3900;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[480],
    (int64_t)v3900,
    v3901,
    v3902,
    v3903,
    v3904,
    v3905,
    v3906);
  v3907 = (MasterPhotoMaster_o *)sub_1C2E378(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v3907, 0LL);
  if ( v3907 )
  {
    v538 = sub_1C2E268(v3907, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1607;
  v536->m_Items[481] = (DataMasterBase_o *)v3907;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[481],
    (int64_t)v3907,
    v3908,
    v3909,
    v3910,
    v3911,
    v3912,
    v3913);
  v3914 = (WarMessageMaster_o *)sub_1C2E378(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v3914, 0LL);
  if ( v3914 )
  {
    v538 = sub_1C2E268(v3914, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1607;
  v536->m_Items[482] = (DataMasterBase_o *)v3914;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[482],
    (int64_t)v3914,
    v3915,
    v3916,
    v3917,
    v3918,
    v3919,
    v3920);
  v3921 = (QuestAutoOrganizationAdjustMaster_o *)sub_1C2E378(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v3921, 0LL);
  if ( v3921 )
  {
    v538 = sub_1C2E268(v3921, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1607;
  v536->m_Items[483] = (DataMasterBase_o *)v3921;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[483],
    (int64_t)v3921,
    v3922,
    v3923,
    v3924,
    v3925,
    v3926,
    v3927);
  v3928 = (ExcludeMotionMaster_o *)sub_1C2E378(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v3928, 0LL);
  if ( v3928 )
  {
    v538 = sub_1C2E268(v3928, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1607;
  v536->m_Items[484] = (DataMasterBase_o *)v3928;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[484],
    (int64_t)v3928,
    v3929,
    v3930,
    v3931,
    v3932,
    v3933,
    v3934);
  v3935 = (UserInterruptionQuestMaster_o *)sub_1C2E378(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v3935, 0LL);
  if ( v3935 )
  {
    v538 = sub_1C2E268(v3935, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1607;
  v536->m_Items[485] = (DataMasterBase_o *)v3935;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[485],
    (int64_t)v3935,
    v3936,
    v3937,
    v3938,
    v3939,
    v3940,
    v3941);
  v3942 = (ServantTransformMaster_o *)sub_1C2E378(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v3942, 0LL);
  if ( v3942 )
  {
    v538 = sub_1C2E268(v3942, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1607;
  v536->m_Items[486] = (DataMasterBase_o *)v3942;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[486],
    (int64_t)v3942,
    v3943,
    v3944,
    v3945,
    v3946,
    v3947,
    v3948);
  v3949 = (MapUpdateScheduleMaster_o *)sub_1C2E378(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v3949, 0LL);
  if ( v3949 )
  {
    v538 = sub_1C2E268(v3949, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1607;
  v536->m_Items[487] = (DataMasterBase_o *)v3949;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[487],
    (int64_t)v3949,
    v3950,
    v3951,
    v3952,
    v3953,
    v3954,
    v3955);
  v3956 = (QuestPhasePresentMaster_o *)sub_1C2E378(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v3956, 0LL);
  if ( v3956 )
  {
    v538 = sub_1C2E268(v3956, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1607;
  v536->m_Items[488] = (DataMasterBase_o *)v3956;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[488],
    (int64_t)v3956,
    v3957,
    v3958,
    v3959,
    v3960,
    v3961,
    v3962);
  v3963 = (UserAccountLinkageMaster_o *)sub_1C2E378(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v3963, 0LL);
  if ( v3963 )
  {
    v538 = sub_1C2E268(v3963, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1607;
  v536->m_Items[489] = (DataMasterBase_o *)v3963;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[489],
    (int64_t)v3963,
    v3964,
    v3965,
    v3966,
    v3967,
    v3968,
    v3969);
  v3970 = (MissionNaviTransitionMaster_o *)sub_1C2E378(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v3970, 0LL);
  if ( v3970 )
  {
    v538 = sub_1C2E268(v3970, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1607;
  v536->m_Items[490] = (DataMasterBase_o *)v3970;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[490],
    (int64_t)v3970,
    v3971,
    v3972,
    v3973,
    v3974,
    v3975,
    v3976);
  v3977 = (MissionNaviQuestMaster_o *)sub_1C2E378(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v3977, 0LL);
  if ( v3977 )
  {
    v538 = sub_1C2E268(v3977, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1607;
  v536->m_Items[491] = (DataMasterBase_o *)v3977;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[491],
    (int64_t)v3977,
    v3978,
    v3979,
    v3980,
    v3981,
    v3982,
    v3983);
  v3984 = (EventTradeGoodsMaster_o *)sub_1C2E378(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v3984, 0LL);
  if ( v3984 )
  {
    v538 = sub_1C2E268(v3984, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1607;
  v536->m_Items[492] = (DataMasterBase_o *)v3984;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[492],
    (int64_t)v3984,
    v3985,
    v3986,
    v3987,
    v3988,
    v3989,
    v3990);
  v3991 = (EventTradeStoreMaster_o *)sub_1C2E378(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v3991, 0LL);
  if ( v3991 )
  {
    v538 = sub_1C2E268(v3991, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1607;
  v536->m_Items[493] = (DataMasterBase_o *)v3991;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[493],
    (int64_t)v3991,
    v3992,
    v3993,
    v3994,
    v3995,
    v3996,
    v3997);
  v3998 = (EventTradePickupMaster_o *)sub_1C2E378(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v3998, 0LL);
  if ( v3998 )
  {
    v538 = sub_1C2E268(v3998, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1607;
  v536->m_Items[494] = (DataMasterBase_o *)v3998;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[494],
    (int64_t)v3998,
    v3999,
    v4000,
    v4001,
    v4002,
    v4003,
    v4004);
  v4005 = (UserEventTradeMaster_o *)sub_1C2E378(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v4005, 0LL);
  if ( v4005 )
  {
    v538 = sub_1C2E268(v4005, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1607;
  v536->m_Items[495] = (DataMasterBase_o *)v4005;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[495],
    (int64_t)v4005,
    v4006,
    v4007,
    v4008,
    v4009,
    v4010,
    v4011);
  v4012 = (PaymentHistoryMaster_o *)sub_1C2E378(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v4012, 0LL);
  if ( v4012 )
  {
    v538 = sub_1C2E268(v4012, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1607;
  v536->m_Items[496] = (DataMasterBase_o *)v4012;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[496],
    (int64_t)v4012,
    v4013,
    v4014,
    v4015,
    v4016,
    v4017,
    v4018);
  v4019 = (UserExternalPaymentStoneMaster_o *)sub_1C2E378(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v4019, 0LL);
  if ( v4019 )
  {
    v538 = sub_1C2E268(v4019, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1607;
  v536->m_Items[497] = (DataMasterBase_o *)v4019;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[497],
    (int64_t)v4019,
    v4020,
    v4021,
    v4022,
    v4023,
    v4024,
    v4025);
  v4026 = (QuestPhaseIndividualityMaster_o *)sub_1C2E378(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v4026, 0LL);
  if ( v4026 )
  {
    v538 = sub_1C2E268(v4026, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1607;
  v536->m_Items[498] = (DataMasterBase_o *)v4026;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[498],
    (int64_t)v4026,
    v4027,
    v4028,
    v4029,
    v4030,
    v4031,
    v4032);
  v4033 = (ViewGachaFeaturedServantMaster_o *)sub_1C2E378(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v4033, 0LL);
  if ( v4033 )
  {
    v538 = sub_1C2E268(v4033, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1607;
  v536->m_Items[499] = (DataMasterBase_o *)v4033;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[499],
    (int64_t)v4033,
    v4034,
    v4035,
    v4036,
    v4037,
    v4038,
    v4039);
  v4040 = (UserGachaPickupCollateralMaster_o *)sub_1C2E378(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v4040, 0LL);
  if ( v4040 )
  {
    v538 = sub_1C2E268(v4040, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1607;
  v536->m_Items[500] = (DataMasterBase_o *)v4040;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[500],
    (int64_t)v4040,
    v4041,
    v4042,
    v4043,
    v4044,
    v4045,
    v4046);
  v4047 = (GachaPickupCollateralMaster_o *)sub_1C2E378(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v4047, 0LL);
  if ( v4047 )
  {
    v538 = sub_1C2E268(v4047, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1607;
  v536->m_Items[501] = (DataMasterBase_o *)v4047;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[501],
    (int64_t)v4047,
    v4048,
    v4049,
    v4050,
    v4051,
    v4052,
    v4053);
  v4054 = (GachaPickupCollateralGroupMaster_o *)sub_1C2E378(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v4054, 0LL);
  if ( v4054 )
  {
    v538 = sub_1C2E268(v4054, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1607;
  v536->m_Items[502] = (DataMasterBase_o *)v4054;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[502],
    (int64_t)v4054,
    v4055,
    v4056,
    v4057,
    v4058,
    v4059,
    v4060);
  v4061 = (BattlePointMaster_o *)sub_1C2E378(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v4061, 0LL);
  if ( v4061 )
  {
    v538 = sub_1C2E268(v4061, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1607;
  v536->m_Items[503] = (DataMasterBase_o *)v4061;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[503],
    (int64_t)v4061,
    v4062,
    v4063,
    v4064,
    v4065,
    v4066,
    v4067);
  v4068 = (BattlePointPhaseMaster_o *)sub_1C2E378(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v4068, 0LL);
  if ( v4068 )
  {
    v538 = sub_1C2E268(v4068, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1607;
  v536->m_Items[504] = (DataMasterBase_o *)v4068;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[504],
    (int64_t)v4068,
    v4069,
    v4070,
    v4071,
    v4072,
    v4073,
    v4074);
  v4075 = (ServantBattlePointMaster_o *)sub_1C2E378(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v4075, 0LL);
  if ( v4075 )
  {
    v538 = sub_1C2E268(v4075, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1607;
  v536->m_Items[505] = (DataMasterBase_o *)v4075;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[505],
    (int64_t)v4075,
    v4076,
    v4077,
    v4078,
    v4079,
    v4080,
    v4081);
  v4082 = (EffectMovieMaster_o *)sub_1C2E378(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v4082, 0LL);
  if ( v4082 )
  {
    v538 = sub_1C2E268(v4082, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1607;
  v536->m_Items[506] = (DataMasterBase_o *)v4082;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[506],
    (int64_t)v4082,
    v4083,
    v4084,
    v4085,
    v4086,
    v4087,
    v4088);
  v4089 = (PaymentLimitMaster_o *)sub_1C2E378(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v4089, 0LL);
  if ( v4089 )
  {
    v538 = sub_1C2E268(v4089, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1607;
  v536->m_Items[507] = (DataMasterBase_o *)v4089;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[507],
    (int64_t)v4089,
    v4090,
    v4091,
    v4092,
    v4093,
    v4094,
    v4095);
  v4096 = (UserPaymentLimitMaster_o *)sub_1C2E378(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v4096, 0LL);
  if ( v4096 )
  {
    v538 = sub_1C2E268(v4096, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1607;
  v536->m_Items[508] = (DataMasterBase_o *)v4096;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[508],
    (int64_t)v4096,
    v4097,
    v4098,
    v4099,
    v4100,
    v4101,
    v4102);
  v4103 = (RoadmapMaster_o *)sub_1C2E378(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v4103, 0LL);
  if ( v4103 )
  {
    v538 = sub_1C2E268(v4103, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1607;
  v536->m_Items[509] = (DataMasterBase_o *)v4103;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[509],
    (int64_t)v4103,
    v4104,
    v4105,
    v4106,
    v4107,
    v4108,
    v4109);
  v4110 = (UserRecommendSupportMaster_o *)sub_1C2E378(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v4110, 0LL);
  if ( v4110 )
  {
    v538 = sub_1C2E268(v4110, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1607;
  v536->m_Items[510] = (DataMasterBase_o *)v4110;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[510],
    (int64_t)v4110,
    v4111,
    v4112,
    v4113,
    v4114,
    v4115,
    v4116);
  v4117 = (RecommendSupportQuestMaster_o *)sub_1C2E378(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v4117, 0LL);
  if ( v4117 )
  {
    v538 = sub_1C2E268(v4117, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1607;
  v536->m_Items[511] = (DataMasterBase_o *)v4117;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[511],
    (int64_t)v4117,
    v4118,
    v4119,
    v4120,
    v4121,
    v4122,
    v4123);
  v4124 = (RecommendAdviceMessageMaster_o *)sub_1C2E378(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v4124, 0LL);
  if ( v4124 )
  {
    v538 = sub_1C2E268(v4124, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1607;
  v536->m_Items[512] = (DataMasterBase_o *)v4124;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[512],
    (int64_t)v4124,
    v4125,
    v4126,
    v4127,
    v4128,
    v4129,
    v4130);
  v4131 = (UserRecommendFollowerMaster_o *)sub_1C2E378(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v4131, 0LL);
  if ( v4131 )
  {
    v538 = sub_1C2E268(v4131, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1607;
  v536->m_Items[513] = (DataMasterBase_o *)v4131;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[513],
    (int64_t)v4131,
    v4132,
    v4133,
    v4134,
    v4135,
    v4136,
    v4137);
  v4138 = (ItemDropEfficiencyMaster_o *)sub_1C2E378(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v4138, 0LL);
  if ( v4138 )
  {
    v538 = sub_1C2E268(v4138, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1607;
  v536->m_Items[514] = (DataMasterBase_o *)v4138;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[514],
    (int64_t)v4138,
    v4139,
    v4140,
    v4141,
    v4142,
    v4143,
    v4144);
  v4145 = (BlankEarthGimmickAddMaster_o *)sub_1C2E378(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v4145, 0LL);
  if ( v4145 )
  {
    v538 = sub_1C2E268(v4145, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1607;
  v536->m_Items[515] = (DataMasterBase_o *)v4145;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[515],
    (int64_t)v4145,
    v4146,
    v4147,
    v4148,
    v4149,
    v4150,
    v4151);
  v4152 = (WarReleaseMaster_o *)sub_1C2E378(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v4152, 0LL);
  if ( v4152 )
  {
    v538 = sub_1C2E268(v4152, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1607;
  v536->m_Items[516] = (DataMasterBase_o *)v4152;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[516],
    (int64_t)v4152,
    v4153,
    v4154,
    v4155,
    v4156,
    v4157,
    v4158);
  v4159 = (SelectBonusBaseMaster_o *)sub_1C2E378(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v4159, 0LL);
  if ( v4159 )
  {
    v538 = sub_1C2E268(v4159, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1607;
  v536->m_Items[517] = (DataMasterBase_o *)v4159;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[517],
    (int64_t)v4159,
    v4160,
    v4161,
    v4162,
    v4163,
    v4164,
    v4165);
  v4166 = (SelectBonusMaster_o *)sub_1C2E378(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v4166, 0LL);
  if ( v4166 )
  {
    v538 = sub_1C2E268(v4166, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1607;
  v536->m_Items[518] = (DataMasterBase_o *)v4166;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[518],
    (int64_t)v4166,
    v4167,
    v4168,
    v4169,
    v4170,
    v4171,
    v4172);
  v4173 = (MyroomServantSpecialImageMaster_o *)sub_1C2E378(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v4173, 0LL);
  if ( v4173 )
  {
    v538 = sub_1C2E268(v4173, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1607;
  v536->m_Items[519] = (DataMasterBase_o *)v4173;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[519],
    (int64_t)v4173,
    v4174,
    v4175,
    v4176,
    v4177,
    v4178,
    v4179);
  v4180 = (ShopResetMaster_o *)sub_1C2E378(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v4180, 0LL);
  if ( v4180 )
  {
    v538 = sub_1C2E268(v4180, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1607;
  v536->m_Items[520] = (DataMasterBase_o *)v4180;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[520],
    (int64_t)v4180,
    v4181,
    v4182,
    v4183,
    v4184,
    v4185,
    v4186);
  v4187 = (NpcServantDisplayTypeDetailMaster_o *)sub_1C2E378(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v4187, 0LL);
  if ( v4187 )
  {
    v538 = sub_1C2E268(v4187, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1607;
  v536->m_Items[521] = (DataMasterBase_o *)v4187;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[521],
    (int64_t)v4187,
    v4188,
    v4189,
    v4190,
    v4191,
    v4192,
    v4193);
  v4194 = (FriendshipServantMaster_o *)sub_1C2E378(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v4194, 0LL);
  if ( v4194 )
  {
    v538 = sub_1C2E268(v4194, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1607;
  v536->m_Items[522] = (DataMasterBase_o *)v4194;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[522],
    (int64_t)v4194,
    v4195,
    v4196,
    v4197,
    v4198,
    v4199,
    v4200);
  v4201 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1C2E378(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v4201, 0LL);
  if ( v4201 )
  {
    v538 = sub_1C2E268(v4201, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1607;
  v536->m_Items[523] = (DataMasterBase_o *)v4201;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[523],
    (int64_t)v4201,
    v4202,
    v4203,
    v4204,
    v4205,
    v4206,
    v4207);
  v4208 = (ChaldeaGatePickupMaster_o *)sub_1C2E378(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v4208, 0LL);
  if ( v4208 )
  {
    v538 = sub_1C2E268(v4208, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1607;
  v536->m_Items[524] = (DataMasterBase_o *)v4208;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[524],
    (int64_t)v4208,
    v4209,
    v4210,
    v4211,
    v4212,
    v4213,
    v4214);
  v4215 = (WarGroupIgnoreMaster_o *)sub_1C2E378(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v4215, 0LL);
  if ( v4215 )
  {
    v538 = sub_1C2E268(v4215, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20D )
    goto LABEL_1607;
  v536->m_Items[525] = (DataMasterBase_o *)v4215;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[525],
    (int64_t)v4215,
    v4216,
    v4217,
    v4218,
    v4219,
    v4220,
    v4221);
  v4222 = (ImagePartsGroupMaster_o *)sub_1C2E378(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v4222, 0LL);
  if ( v4222 )
  {
    v538 = sub_1C2E268(v4222, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20E )
    goto LABEL_1607;
  v536->m_Items[526] = (DataMasterBase_o *)v4222;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[526],
    (int64_t)v4222,
    v4223,
    v4224,
    v4225,
    v4226,
    v4227,
    v4228);
  v4229 = (UserImagePartsGroupMaster_o *)sub_1C2E378(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v4229, 0LL);
  if ( v4229 )
  {
    v538 = sub_1C2E268(v4229, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x20F )
    goto LABEL_1607;
  v536->m_Items[527] = (DataMasterBase_o *)v4229;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[527],
    (int64_t)v4229,
    v4230,
    v4231,
    v4232,
    v4233,
    v4234,
    v4235);
  v4236 = (MissionItemDisplayMaster_o *)sub_1C2E378(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v4236, 0LL);
  if ( v4236 )
  {
    v538 = sub_1C2E268(v4236, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x210 )
    goto LABEL_1607;
  v536->m_Items[528] = (DataMasterBase_o *)v4236;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[528],
    (int64_t)v4236,
    v4237,
    v4238,
    v4239,
    v4240,
    v4241,
    v4242);
  v4243 = (QuestUseItemGroupMaster_o *)sub_1C2E378(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v4243, 0LL);
  if ( v4243 )
  {
    v538 = sub_1C2E268(v4243, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x211 )
    goto LABEL_1607;
  v536->m_Items[529] = (DataMasterBase_o *)v4243;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[529],
    (int64_t)v4243,
    v4244,
    v4245,
    v4246,
    v4247,
    v4248,
    v4249);
  v4250 = (QuestUseItemPickupMaster_o *)sub_1C2E378(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v4250, 0LL);
  if ( v4250 )
  {
    v538 = sub_1C2E268(v4250, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x212 )
    goto LABEL_1607;
  v536->m_Items[530] = (DataMasterBase_o *)v4250;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[530],
    (int64_t)v4250,
    v4251,
    v4252,
    v4253,
    v4254,
    v4255,
    v4256);
  v4257 = (UserEventItemLinkSvtMaster_o *)sub_1C2E378(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v4257, 0LL);
  if ( v4257 )
  {
    v538 = sub_1C2E268(v4257, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x213 )
    goto LABEL_1607;
  v536->m_Items[531] = (DataMasterBase_o *)v4257;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[531],
    (int64_t)v4257,
    v4258,
    v4259,
    v4260,
    v4261,
    v4262,
    v4263);
  v4264 = (QuestHintOverwriteMaster_o *)sub_1C2E378(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v4264, 0LL);
  if ( v4264 )
  {
    v538 = sub_1C2E268(v4264, v536->obj.klass->_1.element_class);
    if ( !v538 )
      goto LABEL_1608;
  }
  if ( *p_max_length <= 0x214 )
    goto LABEL_1607;
  v536->m_Items[532] = (DataMasterBase_o *)v4264;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[532],
    (int64_t)v4264,
    v4265,
    v4266,
    v4267,
    v4268,
    v4269,
    v4270);
  v4271 = (ReachedWaveInfoMaster_o *)sub_1C2E378(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v4271, 0LL);
  if ( v4271 )
  {
    v538 = sub_1C2E268(v4271, v536->obj.klass->_1.element_class);
    if ( !v538 )
    {
LABEL_1608:
      v4279 = sub_1C2E3AC(v538);
      sub_1C2E254(v4279, 0LL);
    }
  }
  if ( *p_max_length <= 0x215 )
LABEL_1607:
    sub_1C2E390(v538, v539);
  v536->m_Items[533] = (DataMasterBase_o *)v4271;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v536->m_Items[533],
    (int64_t)v4271,
    v4272,
    v4273,
    v4274,
    v4275,
    v4276,
    v4277);
  return v536;
}


void __fastcall DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  DataManager_c *v4; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v6; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v8; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_4BFD26D & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v2);
    byte_4BFD26D = 1;
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
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v6 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v8 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v8);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int v19; // w26
  Il2CppObject *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x20
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  int v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFD26A & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_8695/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4BFD26A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_masterCheckName, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  v19 = 1;
  do
  {
    v35 = v19;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v16, v17, v18);
    v21 = System_String__Format((System_String_o *)StringLiteral_8695/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v20, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get(v21, 0LL);
    if ( System_String__op_Equality(v22, v21, 0LL) )
      break;
    v30 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v30->fields._items;
      v32 = Method_System_Collections_Generic_List_string__Add__;
      ++v30->fields._version;
      if ( items )
        continue;
    }
    sub_1C2E388(v30, v23);
    size = v30->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        (Il2CppObject *)v22,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v30->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v22;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
    }
    ++v19;
  }
  while ( v19 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2FD1830 *method)
{
  long double v2; // q0
  const MethodInfo_2FD1830_RGCTXs *rgctx_data; // x8
  const MethodInfo_2FD1830 *_1_TMaster; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v12; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v15; // x20
  long double v16; // q0
  Il2CppObject *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v19; // x19
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x19
  System_Enum_o v26; // [xsp+8h] [xbp-48h] BYREF
  int v27; // [xsp+18h] [xbp-38h]
  int v28; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v30; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1C2E12C(&UnityEngine_Debug_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v6);
    sub_1C2E12C(&int_TypeInfo, v7);
    sub_1C2E12C(&DataNameKind_Kind_TypeInfo, v8);
    sub_1C2E12C(&System_Type_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_21714/*"master[{0}] is null[{1}:{2}]"*/, v10);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C80064();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v12 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v12 )
  {
    sub_1C80064();
    v12 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v12[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C80008(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v15) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v15,
         &value,
         (const MethodInfo_32D6660 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v15 = value;
    _1_TMaster = (const MethodInfo_2FD1830 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2FD1830 *)sub_1C80008(v16);
    if ( !v15 )
      return 0LL;
    result = (Il2CppObject *)sub_1C2E268(v15, _1_TMaster);
    if ( result )
      return result;
    sub_1C2E648(v15);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v30.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1C2E388(rgctxDataDummy, method);
  v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v28 = (int)v15;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
  v27 = (int)v15;
  v26.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v26.monitor = (void *)-1LL;
  v24 = (Il2CppObject *)System_Enum__ToString(&v26, 0LL);
  v25 = (Il2CppObject *)System_String__Format_63250024((System_String_o *)StringLiteral_21714/*"master[{0}] is null[{1}:{2}]"*/, v19, v23, v24, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v25, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2FD17DC *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1C80064();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FD1830 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4BFD255 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_CreateMasterData__, method);
    sub_1C2E12C(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4BFD255 = 1;
  }
  v4 = (System_Func_object__o *)sub_1C2E378(System_Func_DataMasterBase____TypeInfo);
  System_Func_object____ctor(v4, 0LL, Method_DataManager_CreateMasterData__, 0LL);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v4, v5);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v9; // x19
  int64_t v10; // x21
  System_Collections_Generic_Dictionary_int__object__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // w8
  unsigned int v19; // w23
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v4 = this;
  if ( (byte_4BFD256 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1C2E12C(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4BFD256 = 1;
  }
  datalist = v4->fields.datalist;
  if ( datalist )
  {
    max_length = datalist->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0LL;
      while ( (unsigned int)v9 < max_length )
      {
        this = (DataManager_o *)datalist->m_Items[v9];
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *, const MethodInfo *))&this->klass[1]._1.byval_arg.bits)(
                                  this,
                                  this->klass[1]._1.this_arg.data,
                                  method);
        max_length = datalist->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v10 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))createMasterDataMethod->fields.m_target)(
                  createMasterDataMethod->fields.original_method_info,
                  *(_QWORD *)&createMasterDataMethod->fields.extra_arg,
                  method),
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_32D4500 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1C2E388(this, createMasterDataMethod);
    }
    v18 = *(_DWORD *)(v10 + 24);
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( v19 < v18 )
      {
        v20 = *(_QWORD *)(v10 + 8LL * (int)v19 + 32);
        if ( !v20 || !v11 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v11,
          *(_DWORD *)(v20 + 16),
          (Il2CppObject *)v20,
          (const MethodInfo_32D4ED4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v18 = *(_DWORD *)(v10 + 24);
        if ( (int)++v19 >= v18 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1C2E390(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.datalist, v10, v12, v13, v14, v15, v16, v17);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.lookup, (int64_t)v11, v21, v22, v23, v24, v25, v26);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x20
  __int64 v16; // x26
  unsigned __int64 i; // x27
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v22; // w23
  Il2CppObject *Item; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v32; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v34; // x25
  __int64 Index_object; // x0
  __int64 v36; // x1
  const MethodInfo_37886F4 *v37; // x3
  struct DataMasterBase_array *v38; // x8
  DataMasterBase_o *v39; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo_37886F4 *v44; // x3
  __int64 v45; // x0
  __int64 v46; // x1
  Il2CppObject *lockCountObj; // x22
  int v48; // w1
  _QWORD **v49; // x20
  __int64 v50; // x0
  Il2CppObject *v51; // x20
  __int64 v52; // x0
  struct System_Threading_SynchronizationContext_o *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  System_Threading_SendOrPostCallback_o *v57; // x21
  __int64 v58; // x0
  Il2CppObject *v59; // x23
  __int64 v60; // x0
  intptr_t v61; // w0
  __int64 v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  _QWORD *exception; // x0
  __int64 v70; // [xsp+10h] [xbp-90h]
  __int64 v71; // [xsp+18h] [xbp-88h] BYREF
  __int64 v72; // [xsp+20h] [xbp-80h]
  __int64 v73; // [xsp+28h] [xbp-78h] BYREF
  __int64 v74; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v76; // 0:x0.16
  System_Nullable_long__o v77; // 0:x0.16

  v5 = this;
  if ( (byte_4BFD267 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1C2E12C(&byte___TypeInfo, v6);
    sub_1C2E12C(&int___TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1C2E12C(&Method_System_Nullable_long___ctor__, v10);
    sub_1C2E12C(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1C2E12C(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4BFD267 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1C2E388(this, indexList);
  v14 = sub_1C2E268(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    v70 = sub_1C2E1D4(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1C2E378(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1C2E390(v19, v20);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1C2E388(0LL, v20);
        v22 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v22,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1C2E388(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)Item, v24, v25, v26, v27, v28, v29);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1C2E388(0LL, v30);
        v32 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v22,
                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v34 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v34,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v34,
                           (const MethodInfo_30CDD60 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v38 = v5->fields.datalist;
            if ( !v38 )
              sub_1C2E388(Index_object, v36);
            if ( (unsigned int)Index_object >= v38->max_length )
              sub_1C2E390(Index_object, v36);
            if ( !v32 )
              sub_1C2E388(Index_object, v36);
            if ( !LODWORD(v32[1].monitor) )
              sub_1C2E390(Index_object, v36);
            v39 = v38->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v76.fields.value = (int64_t)v32[2].klass;
            v73 = 0LL;
            v74 = 0LL;
            *(_QWORD *)&v76.fields.hasValue = &v73;
            System_Nullable_long____ctor(v76, Method_System_Nullable_long___ctor__, v37);
            if ( LODWORD(v32[1].monitor) <= 1 )
              sub_1C2E390(v42, v43);
            v77.fields.value = (int64_t)v32[2].monitor;
            v71 = 0LL;
            v72 = 0LL;
            *(_QWORD *)&v77.fields.hasValue = &v71;
            System_Nullable_long____ctor(v77, Method_System_Nullable_long___ctor__, v44);
            if ( !v39 )
              sub_1C2E388(v45, v46);
            (*(void (__fastcall **)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, void *))&v39->klass[1]._1.byval_arg.bits)(
              v39,
              masterDataBytes,
              context,
              v73,
              v74,
              v71,
              v72,
              v70,
              v39->klass[1]._1.this_arg.data);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_64462016(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1C2E648(indexList);
    if ( v48 != 1 )
      sub_1D18BBC();
    v49 = (_QWORD **)__cxa_begin_catch(v3);
    v50 = sub_1C2E140(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v50, **v49) & 1) != 0 )
    {
      __cxa_end_catch();
      v51 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64462016(v51, lockTaken, 0LL);
    }
    else
    {
      v52 = sub_1C2E140(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v52, **v49) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v49;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v53 = v5->fields.context;
      v54 = sub_1C2E140(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v54 + 224) )
        j_il2cpp_runtime_class_init_0(v54);
      v55 = sub_1C2E140(&DataManager___c_TypeInfo);
      v57 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v55 + 184) + 8LL);
      if ( !v57 )
      {
        v58 = sub_1C2E140(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v58 + 224) )
          j_il2cpp_runtime_class_init_0(v58);
        v59 = **(Il2CppObject ***)(sub_1C2E140(&DataManager___c_TypeInfo) + 184);
        v60 = sub_1C2E140(&System_Threading_SendOrPostCallback_TypeInfo);
        v57 = (System_Threading_SendOrPostCallback_o *)sub_1C2E378(v60);
        v61 = sub_1C2E140(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v57, v59, v61, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1C2E140(&DataManager___c_TypeInfo) + 184) + 8LL) = v57;
        v62 = sub_1C2E140(&DataManager___c_TypeInfo);
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)(*(_QWORD *)(v62 + 184) + 8LL),
          (int64_t)v57,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
      if ( !v53 )
        sub_1C2E388(v55, v56);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v53->klass->vtable._5_Post.method)(
        v53,
        v57,
        0LL,
        v53->klass->vtable._6_OperationStarted.methodPtr);
      v51 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64462016(v51, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v51, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x1
  int64_t v21; // x23
  System_Collections_Generic_List_object__o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_List_object__o *v43; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_IEnumerable_int__o *v51; // x0
  System_Int32_array *v52; // x21
  System_Comparison_int__o *v53; // x22
  __int64 v54; // x22
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Threading_ParameterizedThreadStart_o *v61; // x24
  System_Threading_Thread_o *v62; // x23
  System_Func_int__bool__o *v63; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Int32_array *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  int v76; // w8
  bool v77; // nf

  if ( (byte_4BFD265 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Sort_int____77756120, *(_QWORD *)&maxIndex);
    sub_1C2E12C(&System_Comparison_int__TypeInfo, v7);
    sub_1C2E12C(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1C2E12C(&System_Func_int__bool__TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1C2E12C(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1C2E12C(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1C2E12C(&System_Threading_Thread_TypeInfo, v16);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1C2E12C(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1C2E12C(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4BFD265 = 1;
  }
  v21 = sub_1C2E378(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)loadedIndices, v30, v31, v32, v33, v34, v35);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.context, (int64_t)Current, v37, v38, v39, v40, v41, v42);
  v43 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v43;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.masterLoadThreads, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v52 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v53 = (System_Comparison_int__o *)sub_1C2E378(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v53,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__49933740(
    v52,
    (System_Comparison_T__o *)v53,
    (const MethodInfo_2F9EDAC *)Method_System_Array_Sort_int____77756120);
  v54 = sub_1C2E378(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
LABEL_14:
    sub_1C2E388(v22, v23);
  *(_QWORD *)(v54 + 24) = v21;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v54 + 24), v21, v55, v56, v57, v58, v59, v60);
  *(_DWORD *)(v54 + 16) = 0;
  do
  {
    v61 = (System_Threading_ParameterizedThreadStart_o *)sub_1C2E378(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v61,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v62 = (System_Threading_Thread_o *)sub_1C2E378(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_64498096(v62, v61, 0LL);
    if ( !v62 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v62, 1, 0LL);
    v63 = (System_Func_int__bool__o *)sub_1C2E378(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v63,
      (Il2CppObject *)v54,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v64 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v52,
            (System_Func_TSource__bool__o *)v63,
            (const MethodInfo_30119FC *)Method_System_Linq_Enumerable_Where_int___);
    v65 = System_Linq_Enumerable__ToArray_int_(
            v64,
            (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_64498676(v62, &v65->obj, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v22->fields._items;
    v73 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v62,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v75[4] = (Il2CppClass *)v62;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v62, v66, v67, v68, v69, v70, v71);
    }
    v76 = *(_DWORD *)(v54 + 16) + 1;
    v77 = *(_DWORD *)(v54 + 16) - 4 < 0;
    *(_DWORD *)(v54 + 16) = v76;
  }
  while ( v77 != __OFSUB__(v76, 5) );
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
  __int64 v11; // x1
  System_Threading_ParameterizedThreadStart_o *v12; // x21
  System_Threading_Thread_o *v13; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1

  if ( (byte_4BFD268 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1C2E12C(&System_Threading_ParameterizedThreadStart_TypeInfo, v10);
    sub_1C2E12C(&System_Threading_Thread_TypeInfo, v11);
    byte_4BFD268 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.writeMasterDataThreadException,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (System_Threading_ParameterizedThreadStart_o *)sub_1C2E378(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v12,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v13 = (System_Threading_Thread_o *)sub_1C2E378(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_64498096(v13, v12, 0LL);
  this->fields.writeMasterDataThread = v13;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_writeMasterDataThread, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  if ( !*p_writeMasterDataThread )
    sub_1C2E388(0LL, v21);
  System_Threading_Thread__Start_64498676(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
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

  if ( (byte_4BFD266 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4BFD266 = 1;
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
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1C2E388(Item, v7);
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
    sub_1C2E0D0(p_masterLoadThreads, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_1C2E388(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  System_IO_Stream_o *v11; // x20
  System_IO_Stream_o *v12; // x22
  System_IO_BinaryWriter_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v24; // w22
  Il2CppObject *Item; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  System_IO_BinaryWriter_c *v37; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  System_IO_Stream_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4BFD269 & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v5);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1C2E12C(&string_TypeInfo, v9);
    byte_4BFD269 = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v10 = param;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v10, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v12 = CatAndMouseGame__CatGameZ(v11, 0LL);
  v13 = (System_IO_BinaryWriter_o *)sub_1C2E378(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63474076(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1C2E388(v14, v15);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v13 )
      goto LABEL_34;
  }
  else
  {
    v24 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v24,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1C2E388(0LL, v26);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1C2E390(Item, v26);
      if ( !v13 )
        sub_1C2E388(Item, v26);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v28 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v28 )
        sub_1C2E388(0LL, v27);
      masterDataBytes = this->fields.masterDataBytes;
      v30 = System_Collections_Generic_List_object___get_Item(
              v28,
              v24,
              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v30 )
        sub_1C2E388(0LL, v31);
      if ( !LODWORD(v30[1].monitor) )
        sub_1C2E390(v30, v31);
      if ( !this->fields.saveDataMapList )
        sub_1C2E388(v30, v31);
      klass = v30[2].klass;
      v33 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v24,
              (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v33 )
        sub_1C2E388(0LL, v34);
      if ( LODWORD(v33[1].monitor) <= 1 )
        sub_1C2E390(v33, v34);
      v35 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v13->klass->vtable._11_Write.method)(
              v13,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v33[2].monitor),
              v13->klass->vtable._12_Write.methodPtr);
      if ( size == ++v24 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1C2E388(v35, v36);
    }
  }
  v37 = v13->klass;
  v38 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_31;
    }
    v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v40 = sub_1C8010C(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v40)(v13, *(_QWORD *)(v40 + 8));
LABEL_34:
  if ( v11 )
  {
    v41 = v11->klass;
    v42 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_39;
      }
      v44 = (__int64)(&v41->vtable._0_Equals.method + 2 * *v43);
    }
    else
    {
LABEL_39:
      v44 = sub_1C8010C(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v44)(v11, *(_QWORD *)(v44 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v16, v17, v18, v19, v20, v21);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return this->fields.writeMasterDataThreadEnd;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BFD250 & 1) == 0 )
  {
    sub_1C2E12C(&DatFileName_TypeInfo, v1);
    sub_1C2E12C(&DataManager_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFD250 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_63246844(CachePath, (System_String_o *)StringLiteral_1102/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BFD24F & 1) == 0 )
  {
    sub_1C2E12C(&DatFileName_TypeInfo, v1);
    sub_1C2E12C(&DataManager_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFD24F = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_63246844(CachePath, (System_String_o *)StringLiteral_1102/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4BFD24D & 1) == 0 )
  {
    sub_1C2E12C(&AndroidUtil_TypeInfo, v1);
    sub_1C2E12C(&CacheFolderName_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFD24D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_63246844(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BFD24E & 1) == 0 )
  {
    sub_1C2E12C(&DatFileName_TypeInfo, v1);
    sub_1C2E12C(&DataManager_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFD24E = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_63246844(CachePath, (System_String_o *)StringLiteral_1102/*"/"*/, FileName, 0LL);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BFD25B & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD25B = 1;
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

  if ( (byte_4BFD25C & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD25C = 1;
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

  if ( (byte_4BFD26B & 1) == 0 )
  {
    sub_1C2E12C(&Crc32_TypeInfo, name);
    byte_4BFD26B = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1C2E388(0LL, v7);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4BFD251 & 1) == 0 )
  {
    sub_1C2E12C(&AndroidUtil_TypeInfo, v1);
    sub_1C2E12C(&CacheFolderName_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFD251 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_63246844(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1102/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BFD260 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD260 = 1;
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

  if ( (byte_4BFD25F & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD25F = 1;
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
    sub_1C2E388(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4BFD258 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD258 = 1;
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

  if ( (byte_4BFD263 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    byte_4BFD263 = 1;
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

  if ( (byte_4BFD262 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4BFD262 = 1;
  }
  v3 = sub_1C2E378(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  DataManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w2
  int v24; // w9
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t v26; // w2
  int v27; // w9
  ManagerConfig_c *v28; // x0
  DataManager_c *v29; // x0
  System_String_o *CacheListFileName; // x21
  System_String_o *AllText; // x20
  System_String_o *v32; // x20
  System_Char_array *v33; // x0
  System_String_o *v34; // x20
  System_Char_array *v35; // x0
  il2cpp_array_size_t max_length; // w8
  int v37; // w22
  __int64 *v38; // x8
  System_String_o *v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x21
  System_String_o *v42; // x21
  System_String_o *v43; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v45; // x1
  System_Byte_array *v46; // x22
  uint32_t v47; // w22
  System_Char_array *v48; // x0
  il2cpp_array_size_t v49; // w8
  DataManager_o *v50; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v52; // x21
  DataManager_o *v53; // x21
  System_String_o *v54; // x0
  ManagerConfig_c *v55; // x8
  System_String_o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  DataManager_o *v63; // x20
  int64_t v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  PartyOrganizationUtility_o *p_saveNameList; // x0
  int v94; // w22
  int64_t v95; // x0
  DataManager_c *v96; // x8
  int64_t v97; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v99; // x22
  unsigned int v100; // w23
  System_String_o *v101; // x21
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  DataManager_o *v108; // x8
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v112; // x8
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x1
  DataManager_c *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  void *v134; // x1
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x1
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  void *v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int64_t v167; // [xsp+8h] [xbp-58h] BYREF
  int v168; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4BFD270 & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, method);
    sub_1C2E12C(&char___TypeInfo, v3);
    sub_1C2E12C(&Crc32_TypeInfo, v4);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v9);
    sub_1C2E12C(&string___TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_5211/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1C2E12C(&StringLiteral_5214/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1C2E12C(&StringLiteral_117/*" "*/, v13);
    sub_1C2E12C(&StringLiteral_25631/*"~"*/, v14);
    sub_1C2E12C(&StringLiteral_800/*") -> ("*/, v15);
    sub_1C2E12C(&StringLiteral_791/*")"*/, v16);
    sub_1C2E12C(&StringLiteral_1867/*"@"*/, v17);
    sub_1C2E12C(&StringLiteral_21690/*"master versiton different ("*/, v18);
    sub_1C2E12C(&StringLiteral_5215/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1C2E12C(&StringLiteral_5216/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1C2E12C(&StringLiteral_5213/*"DataManager version load error : list file break"*/, v21);
    byte_4BFD270 = 1;
  }
  v168 = 0;
  v167 = 0LL;
  saveNameList = v2->fields.saveNameList;
  if ( !saveNameList )
    goto LABEL_119;
  size = saveNameList->fields._size;
  v24 = saveNameList->fields._version + 1;
  saveNameList->fields._size = 0;
  saveNameList->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)saveNameList->fields._items, 0, size, 0LL);
  saveDataMapList = v2->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_119;
  v26 = saveDataMapList->fields._size;
  v27 = saveDataMapList->fields._version + 1;
  saveDataMapList->fields._size = 0;
  saveDataMapList->fields._version = v27;
  if ( v26 >= 1 )
    System_Array__Clear((System_Array_o *)saveDataMapList->fields._items, 0, v26, 0LL);
  v28 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v28 = ManagerConfig_TypeInfo;
  }
  if ( v28->static_fields->UseMock )
    return 0;
  v29 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v29);
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_64:
    DataManager__ClearSaveDataList(v2, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v32 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v32 )
  {
    v33 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1C2E388(0LL, 0LL);
    if ( !v33->max_length )
      sub_1C2E390(v33, v33);
    v33->m_Items[2] = -257;
    v34 = System_String__Trim_63265332(v32, v33, 0LL);
    v35 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 2LL);
    if ( !v35 )
      sub_1C2E388(0LL, 0LL);
    max_length = v35->max_length;
    if ( !max_length )
      sub_1C2E390(v35, v35);
    v35->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1C2E390(v35, v35);
    v35->m_Items[3] = 10;
    if ( !v34 )
      sub_1C2E388(v35, v35);
    v37 = System_String__IndexOfAny(v34, v35, 0LL);
    if ( v37 < 2 )
    {
      v38 = &StringLiteral_5215/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v39 = System_String__Substring_63254588(v34, 0, v37, 0LL);
    v41 = v39;
    if ( !v39 )
      sub_1C2E388(0LL, v40);
    if ( System_String__StartsWith(v39, (System_String_o *)StringLiteral_25631/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v34, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1C2E388(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v47 )
      {
        v48 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 2LL);
        if ( !v48 )
          sub_1C2E388(0LL, 0LL);
        v49 = v48->max_length;
        if ( !v49 )
          sub_1C2E390(v48, v48);
        v48->m_Items[2] = 13;
        if ( v49 == 1 )
          sub_1C2E390(v48, v48);
        v48->m_Items[3] = 10;
        if ( !v43 )
          sub_1C2E388(v48, v48);
        this = (DataManager_o *)System_String__Split_63257976(v43, v48, 1, 0LL);
        v50 = this;
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
                                  (System_String_o *)StringLiteral_1867/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v50->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v52 = *(System_String_o **)&v50->fields._DispLog;
          this = (DataManager_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v52 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_63257740(v52, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v53 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v54 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v55 = ManagerConfig_TypeInfo;
          v56 = v54;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v55 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v55->static_fields->MasterDataCacheVer, v56, 0LL) )
          {
            this = (DataManager_o *)sub_1C2E1D4(string___TypeInfo, 5LL);
            if ( this )
            {
              v63 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v64 = StringLiteral_21690/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21690/*"master versiton different ("*/;
                sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._DispLog, v64, v57, v58, v59, v60, v61, v62);
                if ( LODWORD(v63->fields.m_CancellationTokenSource) > 1 )
                {
                  v63->fields.datalist = (struct DataMasterBase_array *)v56;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)&v63->fields.datalist,
                    (int64_t)v56,
                    v65,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70);
                  if ( LODWORD(v63->fields.m_CancellationTokenSource) > 2 )
                  {
                    v77 = StringLiteral_800/*") -> ("*/;
                    v63->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_800/*") -> ("*/;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->fields.lookup, v77, v71, v72, v73, v74, v75, v76);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v63->fields.m_CancellationTokenSource) > 3 )
                    {
                      v84 = *(_QWORD *)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v63->fields.masterDataBytes = (struct System_Byte_array *)v84;
                      sub_1C2E0D0(
                        (PartyOrganizationUtility_o *)&v63->fields.masterDataBytes,
                        v84,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        v83);
                      if ( LODWORD(v63->fields.m_CancellationTokenSource) > 4 )
                      {
                        v91 = StringLiteral_791/*")"*/;
                        v63->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_791/*")"*/;
                        p_saveNameList = (PartyOrganizationUtility_o *)&v63->fields.saveNameList;
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
          if ( LODWORD(v53->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v53->fields.datalist, 0LL);
            v168 = (int)this;
            if ( LODWORD(v53->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v94 = (int)this;
            v95 = System_Int64__Parse((System_String_o *)v53->fields.lookup, 0LL);
            v96 = DataManager_TypeInfo;
            v167 = v95;
            v97 = v95;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v96 = DataManager_TypeInfo;
            }
            static_fields = v96->static_fields;
            if ( static_fields->readDataVersion != v94 )
              goto LABEL_91;
            if ( !v96->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v96);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v97 )
            {
              v99 = v50->fields.m_CancellationTokenSource;
              if ( (int)v99 < 2 )
                return 1;
              v100 = 2;
              while ( 1 )
              {
                v101 = (System_String_o *)*((_QWORD *)&v50->fields._DispLog + (int)(v100 - 1));
                this = (DataManager_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v101 )
                  break;
                this = (DataManager_o *)System_String__Split_63257740(v101, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v108 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v108->fields._DispLog;
                v109 = *(_QWORD *)&this->fields.m_CachedPtr;
                v110 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v109 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v109 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_366B8AC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                }
                else
                {
                  v112 = v109 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v112 + 32) = method;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)(v112 + 32),
                    (int64_t)method,
                    v102,
                    v103,
                    v104,
                    v105,
                    v106,
                    v107);
                }
                if ( (_DWORD)v99 == v100 )
                  return 1;
                if ( v100++ >= LODWORD(v50->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1C2E1D4(string___TypeInfo, 9LL);
              if ( this )
              {
                v63 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v120 = StringLiteral_21690/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21690/*"master versiton different ("*/;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)&this->fields._DispLog,
                    v120,
                    v114,
                    v115,
                    v116,
                    v117,
                    v118,
                    v119);
                  v121 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v121 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v121->static_fields, 0LL);
                  if ( LODWORD(v63->fields.m_CancellationTokenSource) > 1 )
                  {
                    v63->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)&v63->fields.datalist,
                      (int64_t)this,
                      v122,
                      v123,
                      v124,
                      v125,
                      v126,
                      v127);
                    if ( LODWORD(v63->fields.m_CancellationTokenSource) > 2 )
                    {
                      v134 = StringLiteral_117/*" "*/;
                      v63->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1C2E0D0(
                        (PartyOrganizationUtility_o *)&v63->fields.lookup,
                        (int64_t)v134,
                        v128,
                        v129,
                        v130,
                        v131,
                        v132,
                        v133);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v63->fields.m_CancellationTokenSource) > 3 )
                      {
                        v63->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1C2E0D0(
                          (PartyOrganizationUtility_o *)&v63->fields.masterDataBytes,
                          (int64_t)this,
                          v135,
                          v136,
                          v137,
                          v138,
                          v139,
                          v140);
                        if ( LODWORD(v63->fields.m_CancellationTokenSource) > 4 )
                        {
                          v147 = StringLiteral_800/*") -> ("*/;
                          v63->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_800/*") -> ("*/;
                          sub_1C2E0D0(
                            (PartyOrganizationUtility_o *)&v63->fields.saveNameList,
                            v147,
                            v141,
                            v142,
                            v143,
                            v144,
                            v145,
                            v146);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v168, 0LL);
                          if ( LODWORD(v63->fields.m_CancellationTokenSource) > 5 )
                          {
                            v63->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1C2E0D0(
                              (PartyOrganizationUtility_o *)&v63->fields.saveDataMapList,
                              (int64_t)this,
                              v148,
                              v149,
                              v150,
                              v151,
                              v152,
                              v153);
                            if ( LODWORD(v63->fields.m_CancellationTokenSource) > 6 )
                            {
                              v160 = StringLiteral_117/*" "*/;
                              *(_QWORD *)&v63->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1C2E0D0(
                                (PartyOrganizationUtility_o *)&v63->fields.lastFrameTime,
                                (int64_t)v160,
                                v154,
                                v155,
                                v156,
                                v157,
                                v158,
                                v159);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v167, 0LL);
                              if ( LODWORD(v63->fields.m_CancellationTokenSource) > 7 )
                              {
                                v63->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1C2E0D0(
                                  (PartyOrganizationUtility_o *)&v63->fields.masterCheckName,
                                  (int64_t)this,
                                  v161,
                                  v162,
                                  v163,
                                  v164,
                                  v165,
                                  v166);
                                if ( LODWORD(v63->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v91 = StringLiteral_791/*")"*/;
                                  v63->fields.lockCountObj = (Il2CppObject *)StringLiteral_791/*")"*/;
                                  p_saveNameList = (PartyOrganizationUtility_o *)&v63->fields.lockCountObj;
LABEL_104:
                                  sub_1C2E0D0(p_saveNameList, v91, v85, v86, v87, v88, v89, v90);
                                  if ( System_String__Concat_63249112((System_String_array *)v63, 0LL) )
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
                sub_1C2E390(this, method);
              }
            }
LABEL_119:
            sub_1C2E388(this, method);
          }
          v38 = &StringLiteral_5214/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v38 = &StringLiteral_5213/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v38 = &StringLiteral_5211/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v38 = &StringLiteral_5216/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v38 )
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

  if ( (byte_4BFD261 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4BFD261 = 1;
  }
  v3 = sub_1C2E378(DataManager__readMasterVersion_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  ManagerConfig_c *v18; // x0
  DataManager_c *v19; // x0
  System_String_o *CacheVersionFileName; // x21
  const MethodInfo *v21; // x1
  System_String_o *AllText; // x20
  System_String_o *v23; // x20
  System_Char_array *v24; // x0
  System_String_o *v25; // x20
  System_Char_array *v26; // x0
  il2cpp_array_size_t max_length; // w8
  int v28; // w22
  __int64 *v29; // x8
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x21
  System_String_o *v33; // x21
  System_String_o *v34; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v36; // x1
  System_Byte_array *v37; // x22
  uint32_t v38; // w22
  System_Char_array *v39; // x0
  il2cpp_array_size_t v40; // w8
  __int64 v41; // x0
  __int64 v42; // x20
  __int64 v43; // x8
  System_String_o *v44; // x20
  __int64 v45; // x20
  System_String_o *v46; // x0
  ManagerConfig_c *v47; // x8
  System_String_o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x20
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x1
  System_String_o *v84; // x8
  DataManager_c *v85; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v88; // x8
  int32_t v89; // w19
  struct DataManager_StaticFields *v90; // x8
  int64_t v91; // x0
  struct DataManager_StaticFields *v92; // x8

  if ( (byte_4BFD26E & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, method);
    sub_1C2E12C(&char___TypeInfo, v3);
    sub_1C2E12C(&Crc32_TypeInfo, v4);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v6);
    sub_1C2E12C(&string___TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_5210/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1C2E12C(&StringLiteral_5207/*"DataManager boot load error : list file break"*/, v9);
    sub_1C2E12C(&StringLiteral_5209/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1C2E12C(&StringLiteral_5205/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1C2E12C(&StringLiteral_25631/*"~"*/, v12);
    sub_1C2E12C(&StringLiteral_21689/*"master data versiton different ("*/, v13);
    sub_1C2E12C(&StringLiteral_800/*") -> ("*/, v14);
    sub_1C2E12C(&StringLiteral_791/*")"*/, v15);
    sub_1C2E12C(&StringLiteral_1867/*"@"*/, v16);
    sub_1C2E12C(&StringLiteral_5208/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4BFD26E = 1;
  }
  v18 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  if ( v18->static_fields->UseMock )
    return 0;
  v19 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v19);
  if ( !System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
LABEL_59:
    v85 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v85 = DataManager_TypeInfo;
    }
    static_fields = v85->static_fields;
    static_fields->dataVersion = 0;
    static_fields->dateVersion = 0LL;
    DataManager__ClearSaveDataList(this, v21);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v23 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
  if ( v23 )
  {
    v24 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1C2E388(0LL, 0LL);
    if ( !v24->max_length )
      sub_1C2E390(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_63265332(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1C2E388(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1C2E390(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1C2E390(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1C2E388(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5209/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v84 = (System_String_o *)*v29;
LABEL_58:
      if ( v84 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_63254588(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_1C2E388(0LL, v31);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_25631/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5210/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v33 = System_String__Substring(v32, 1, 0LL);
    v34 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1C2E388(0LL, v36);
    v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v34,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v38 = Crc32__Compute(v37, 0LL);
    if ( System_UInt32__Parse(v33, 0LL) != v38 )
    {
      v29 = &StringLiteral_5205/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v39 = (System_Char_array *)sub_1C2E1D4(char___TypeInfo, 2LL);
    if ( !v39 )
      sub_1C2E388(0LL, 0LL);
    v40 = v39->max_length;
    if ( !v40 )
      sub_1C2E390(v39, v39);
    v39->m_Items[2] = 13;
    if ( v40 == 1 )
      sub_1C2E390(v39, v39);
    v39->m_Items[3] = 10;
    if ( !v34 )
      sub_1C2E388(v39, v39);
    v41 = (__int64)System_String__Split_63257976(v34, v39, 1, 0LL);
    v42 = v41;
    if ( !v41 )
      return 1;
    v43 = *(_QWORD *)(v41 + 24);
    if ( v43 )
    {
      if ( !(_DWORD)v43 )
        goto LABEL_78;
      v41 = *(_QWORD *)(v41 + 32);
      if ( !v41 )
        goto LABEL_83;
      v41 = System_String__StartsWith((System_String_o *)v41, (System_String_o *)StringLiteral_1867/*"@"*/, 0LL);
      if ( (v41 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v42 + 24) )
          goto LABEL_78;
        v44 = *(System_String_o **)(v42 + 32);
        v41 = sub_1C2E1D4(char___TypeInfo, 1LL);
        if ( v41 )
        {
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_78;
          *(_WORD *)(v41 + 32) = 44;
          if ( v44 )
          {
            v41 = (__int64)System_String__Split_63257740(v44, (System_Char_array *)v41, 0LL);
            if ( v41 )
            {
              v45 = v41;
              if ( !*(_DWORD *)(v41 + 24) )
                goto LABEL_78;
              v41 = *(_QWORD *)(v41 + 32);
              if ( v41 )
              {
                v46 = System_String__Substring((System_String_o *)v41, 1, 0LL);
                v47 = ManagerConfig_TypeInfo;
                v48 = v46;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v47 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v47->static_fields->MasterDataCacheVer, v48, 0LL) )
                {
                  if ( *(_DWORD *)(v45 + 24) != 3 )
                  {
                    v29 = &StringLiteral_5208/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v41 = System_Int32__Parse(*(System_String_o **)(v45 + 40), 0LL);
                  v88 = DataManager_TypeInfo;
                  v89 = v41;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v88 = DataManager_TypeInfo;
                  }
                  v90 = v88->static_fields;
                  v90->dataVersion = v89;
                  v90->readDataVersion = v89;
                  if ( *(_DWORD *)(v45 + 24) > 2u )
                  {
                    v91 = System_Int64__Parse(*(System_String_o **)(v45 + 48), 0LL);
                    v92 = DataManager_TypeInfo->static_fields;
                    v92->dateVersion = v91;
                    v92->readDateVersion = v91;
                    return 1;
                  }
LABEL_78:
                  sub_1C2E390(v41, v21);
                }
                v41 = sub_1C2E1D4(string___TypeInfo, 5LL);
                if ( v41 )
                {
                  v55 = v41;
                  if ( *(_DWORD *)(v41 + 24) )
                  {
                    v56 = StringLiteral_21689/*"master data versiton different ("*/;
                    *(_QWORD *)(v41 + 32) = StringLiteral_21689/*"master data versiton different ("*/;
                    sub_1C2E0D0((PartyOrganizationUtility_o *)(v41 + 32), v56, v49, v50, v51, v52, v53, v54);
                    if ( *(_DWORD *)(v55 + 24) > 1u )
                    {
                      *(_QWORD *)(v55 + 40) = v48;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 40), (int64_t)v48, v57, v58, v59, v60, v61, v62);
                      if ( *(_DWORD *)(v55 + 24) > 2u )
                      {
                        v69 = StringLiteral_800/*") -> ("*/;
                        *(_QWORD *)(v55 + 48) = StringLiteral_800/*") -> ("*/;
                        sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 48), v69, v63, v64, v65, v66, v67, v68);
                        v41 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v41 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v55 + 24) > 3u )
                        {
                          v76 = *(_QWORD *)(*(_QWORD *)(v41 + 184) + 32LL);
                          *(_QWORD *)(v55 + 56) = v76;
                          sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 56), v76, v70, v71, v72, v73, v74, v75);
                          if ( *(_DWORD *)(v55 + 24) > 4u )
                          {
                            v83 = StringLiteral_791/*")"*/;
                            *(_QWORD *)(v55 + 64) = StringLiteral_791/*")"*/;
                            sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 64), v83, v77, v78, v79, v80, v81, v82);
                            v84 = System_String__Concat_63249112((System_String_array *)v55, 0LL);
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
        sub_1C2E388(v41, v21);
      }
    }
    v29 = &StringLiteral_5207/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4BFD25E & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4BFD25E = 1;
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
  sub_1C2E0D0(p_updateData, (int64_t)v14, dateVer, (int32_t)obj, (System_String_o *)method, v5, v6, v7);
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

  if ( (byte_4BFD25D & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4BFD25D = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_c *v11; // x0
  void *v12; // x1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x0
  DataManager_c *v25; // x8
  struct DataManager_StaticFields *v26; // x0
  DataManager_c *v27; // x0

  if ( (byte_4BFD257 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, obj);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v9);
    sub_1C2E12C(&StringLiteral_1/*""*/, v10);
    byte_4BFD257 = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  v12 = StringLiteral_1/*""*/;
  static_fields = v11->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->serverHash,
    (int64_t)v12,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( obj )
  {
    v14 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v15 = System_String__op_Equality(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v15 )
    {
      if ( !v14 )
        sub_1C2E388(v15, v16);
      v17 = System_String__Substring(v14, v14->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v24 = System_String__Substring_63254588(v14, 0, v14->fields._stringLength - 1, 0LL);
        v25 = DataManager_TypeInfo;
        v14 = v24;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v25 = DataManager_TypeInfo;
        }
        v26 = v25->static_fields;
      }
      else
      {
        v27 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v27 = DataManager_TypeInfo;
        }
        v26 = v27->static_fields;
      }
      v26->serverHash = v14;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v26->serverHash, (int64_t)v14, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4BFD259 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, obj);
    byte_4BFD259 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_1C2E0D0(
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

  if ( (byte_4BFD272 & 1) == 0 )
  {
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4BFD272 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1C2E648(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_40116212(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_40116212(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *v10; // x21
  __int64 methodPtr_low; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v14; // w26
  il2cpp_array_size_t v15; // w9
  __int64 v16; // x27
  DataMasterBase_o *v17; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v19; // x8
  DataMasterBase_o *v20; // x23
  __int64 v21; // x9
  struct DataMasterBase_array *v22; // x8
  int v23; // w9
  int v24; // w26
  il2cpp_array_size_t v25; // w9
  __int64 v26; // x27
  DataMasterBase_o *v27; // x8
  Il2CppObject *v28; // x22
  struct DataMasterBase_array *v29; // x8
  DataMasterBase_o *v30; // x23
  __int64 v31; // x9
  struct DataMasterBase_array *v32; // x8
  int v33; // w9
  int v34; // w25
  il2cpp_array_size_t v35; // w9
  __int64 v36; // x26
  DataMasterBase_o *v37; // x8
  Il2CppObject *v38; // x21
  struct DataMasterBase_array *v39; // x8
  DataMasterBase_o *v40; // x22
  DataManager_o *v41; // x0
  const MethodInfo *v42; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4BFD273 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_24777/*"updated"*/, v7);
    sub_1C2E12C(&StringLiteral_18888/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1C2E12C(&StringLiteral_23311/*"replaced"*/, v9);
    byte_4BFD273 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1C2E388(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18888/*"deleted"*/,
         (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18888/*"deleted"*/,
                              (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = this;
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
    v14 = max_length - 1;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( v15 < datalist->max_length )
      {
        v16 = (int)v15;
        v17 = datalist->m_Items[v15];
        if ( !v17 || !v10 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v17->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v10,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v19 = v4->fields.datalist;
          if ( !v19 )
            goto LABEL_57;
          if ( (unsigned int)v16 >= v19->max_length )
            break;
          v20 = v19->m_Items[v16];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v10,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v20 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v20->klass[1]._1.castClass)(
                                    v20,
                                    this,
                                    v20->klass[1]._1.declaringType);
        }
        if ( v14 == (_DWORD)v16 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v15 = v16 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1C2E390(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24777/*"updated"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24777/*"updated"*/,
                            (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1C2E648(v10);
      goto LABEL_61;
    }
  }
  v22 = v4->fields.datalist;
  if ( !v22 )
    goto LABEL_57;
  v23 = v22->max_length;
  v24 = v23 - 1;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v22->max_length )
    {
      v26 = (int)v25;
      v27 = v22->m_Items[v25];
      if ( !v27 || !v10 )
        goto LABEL_57;
      v28 = (Il2CppObject *)v27->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v10,
                                v28,
                                (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = v4->fields.datalist;
        if ( !v29 )
          goto LABEL_57;
        if ( (unsigned int)v26 >= v29->max_length )
          goto LABEL_59;
        v30 = v29->m_Items[v26];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v10,
                                  v28,
                                  (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v30 )
          goto LABEL_57;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))&v30->klass[1]._1.this_arg.bits)(
                                  v30,
                                  this,
                                  v30->klass[1]._1.element_class);
      }
      if ( v24 == (_DWORD)v26 )
        goto LABEL_40;
      v22 = v4->fields.datalist;
      v25 = v26 + 1;
      if ( !v22 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23311/*"replaced"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23311/*"replaced"*/,
                            (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1C2E648(v3);
      DataManager__getRevisionTotal(v41, v42);
      return;
    }
  }
  v32 = v4->fields.datalist;
  if ( !v32 )
    goto LABEL_57;
  v33 = v32->max_length;
  v34 = v33 - 1;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( v35 < v32->max_length )
    {
      v36 = (int)v35;
      v37 = v32->m_Items[v35];
      if ( !v37 || !v3 )
        goto LABEL_57;
      v38 = (Il2CppObject *)v37->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v38,
                                (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v39 = v4->fields.datalist;
        if ( !v39 )
          goto LABEL_57;
        if ( (unsigned int)v36 >= v39->max_length )
          goto LABEL_59;
        v40 = v39->m_Items[v36];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v38,
                                  (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v40 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v40->klass[1]._1.namespaze)(
                                  v40,
                                  this,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  v40->klass[1]._1.byval_arg.data);
      }
      if ( v34 == (_DWORD)v36 )
        return;
      v32 = v4->fields.datalist;
      v35 = v36 + 1;
      if ( !v32 )
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
  bool v5; // w21
  __int64 v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BFD264 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4BFD264 = 1;
  }
  v5 = isUseTips;
  v6 = sub_1C2E378(DataManager__updateMasterData_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BFD25A & 1) == 0 )
  {
    sub_1C2E12C(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4BFD25A = 1;
  }
  v3 = sub_1C2E378(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C2E388(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ManagerConfig_c *v16; // x0
  DataManager_c *v17; // x0
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v22; // x20
  System_Text_StringBuilder_o *v23; // x21
  ManagerConfig_c *v24; // x0
  int v25; // w8
  int v26; // w24
  int32_t v27; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v29; // x19
  System_Byte_array *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x19
  System_String_o *v36; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x1
  System_IO_StreamWriter_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  uint32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BFD271 & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, method);
    sub_1C2E12C(&Crc32_TypeInfo, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v8);
    sub_1C2E12C(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1C2E12C(&uint_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v12);
    sub_1C2E12C(&StringLiteral_25634/*"~{0}\n{1}"*/, v13);
    sub_1C2E12C(&StringLiteral_1867/*"@"*/, v14);
    sub_1C2E12C(&StringLiteral_845/*","*/, v15);
    byte_4BFD271 = 1;
  }
  v16 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( !v16->static_fields->UseMock )
  {
    v17 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = (System_Collections_Generic_List_object__o *)DataManager__getCacheListFileName((const MethodInfo *)v17);
    saveNameList = this->fields.saveNameList;
    if ( !saveNameList )
      goto LABEL_17;
    size = saveNameList->fields._size;
    v22 = (System_String_o *)CacheListFileName;
    v23 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62390088(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)StringLiteral_1867/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_62396736(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)StringLiteral_845/*","*/, 0LL);
    System_Text_StringBuilder__Append_62399232(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)StringLiteral_845/*","*/, 0LL);
    System_Text_StringBuilder__Append_62399320(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v25 = CacheListFileName->fields._size;
    v26 = v25 - 1;
    if ( v25 >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v27,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_62396736(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        if ( v26 == v27 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v27;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v29 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                            v23,
                            v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_17:
      sub_1C2E388(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_63249956((System_String_o *)StringLiteral_25634/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1C2E378(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63404720(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1C2E388(v39, v40);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v38->klass->vtable._16_Write.method)(
      v38,
      v36,
      v38->klass->vtable._17_Write.methodPtr);
    klass = v38->klass;
    v42 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        p_offset += 4;
        if ( !v42 )
          goto LABEL_28;
      }
      v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_28:
      v44 = sub_1C8010C(v38, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v44)(v38, *(_QWORD *)(v44 + 8));
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ManagerConfig_c *v11; // x0
  DataManager_c *v12; // x0
  System_String_o *CacheVersionFileName; // x19
  char *UTF8; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  char *v22; // x20
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  void *v37; // x1
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
  void *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  System_String_o *v64; // x20
  System_Byte_array *v65; // x21
  System_String_o *v66; // x0
  System_String_o *v67; // x20
  System_String_o *v68; // x20
  System_Text_Encoding_o *v69; // x22
  System_IO_StreamWriter_o *v70; // x21
  uint32_t v71; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BFD26F & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, method);
    sub_1C2E12C(&Crc32_TypeInfo, v2);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v4);
    sub_1C2E12C(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1C2E12C(&string___TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v7);
    sub_1C2E12C(&StringLiteral_25631/*"~"*/, v8);
    sub_1C2E12C(&StringLiteral_1867/*"@"*/, v9);
    sub_1C2E12C(&StringLiteral_845/*","*/, v10);
    byte_4BFD26F = 1;
  }
  v11 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( !v11->static_fields->UseMock )
  {
    v12 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v12);
    UTF8 = (char *)sub_1C2E1D4(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v22 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v23 = StringLiteral_1867/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1867/*"@"*/;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(UTF8 + 32), v23, v16, v17, v18, v19, v20, v21);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v22 + 6) <= 1u )
      goto LABEL_26;
    v30 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v22 + 5) = v30;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 40), v30, v24, v25, v26, v27, v28, v29);
    if ( *((_DWORD *)v22 + 6) <= 2u )
      goto LABEL_26;
    v37 = StringLiteral_845/*","*/;
    *((_QWORD *)v22 + 6) = StringLiteral_845/*","*/;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 48), (int64_t)v37, v31, v32, v33, v34, v35, v36);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v22 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v22 + 7) = UTF8;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 56), (int64_t)UTF8, v38, v39, v40, v41, v42, v43);
    if ( *((_DWORD *)v22 + 6) <= 4u
      || (v50 = StringLiteral_845/*","*/,
          *((_QWORD *)v22 + 8) = StringLiteral_845/*","*/,
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 64), (int64_t)v50, v44, v45, v46, v47, v48, v49),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v22 + 6) <= 5u)
      || (*((_QWORD *)v22 + 9) = UTF8,
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 72), (int64_t)UTF8, v51, v52, v53, v54, v55, v56),
          *((_DWORD *)v22 + 6) <= 6u) )
    {
LABEL_26:
      sub_1C2E390(UTF8, v15);
    }
    v63 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v22 + 10) = StringLiteral_43/*"\n"*/;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 80), v63, v57, v58, v59, v60, v61, v62);
    v64 = System_String__Concat_63249112((System_String_array *)v22, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v65 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v64,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v71 = Crc32__Compute(v65, 0LL);
    v66 = System_UInt32__ToString((uint32_t)&v71, 0LL);
    v67 = System_String__Concat_63248848(
            (System_String_o *)StringLiteral_25631/*"~"*/,
            v66,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v64,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v68 = CatAndMouseGame__CatGame1(v67, 0, 0LL);
    v69 = System_Text_Encoding__get_UTF8(0LL);
    v70 = (System_IO_StreamWriter_o *)sub_1C2E378(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63404720(v70, CacheVersionFileName, 0, v69, 0LL);
    if ( !v70 )
LABEL_27:
      sub_1C2E388(UTF8, v15);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v70->klass->vtable._16_Write.method)(
      v70,
      v68,
      v70->klass->vtable._17_Write.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v70->klass->vtable._8_Close.method)(
      v70,
      v70->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD277 & 1) == 0 )
  {
    sub_1C2E12C(&DataManager___c_TypeInfo, v1);
    byte_4BFD277 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)DataManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4BFD278 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1C2E12C(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4BFD278 = 1;
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
                                                  (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1C2E390(this, *(_QWORD *)&a);
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
  if ( (byte_4BFD279 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1C2E12C(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4BFD279 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1C2E388(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C2E388(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct DataManager_o *_4__this; // x19
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v15; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  char v23; // w8
  DataManager_c *v24; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v26; // w10
  DataManager_c *v27; // x0
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v29; // x21
  System_IO_Stream_o *v30; // x24
  System_IO_Stream_o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  float v37; // s0
  UnityEngine_WaitForEndOfFrame_o *v38; // x19
  PartyOrganizationUtility_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // w8
  DataManager_c *v47; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  System_IO_Stream_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  int64_t v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_IO_MemoryStream_c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v70; // x21
  System_IO_BinaryReader_o *v71; // x24
  __int64 v72; // x0
  __int64 v73; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v76; // x0
  __int64 v77; // x1
  int v78; // w22
  __int64 v79; // x23
  __int64 v80; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x1
  int v90; // w8
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  System_IO_BinaryReader_c *v95; // x8
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  System_IO_MemoryStream_c *v99; // x8
  __int64 v100; // x9
  int32_t *v101; // x10
  __int64 v102; // x0
  UnityEngine_WaitForEndOfFrame_o *v103; // x19
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7

  v2 = this;
  if ( (byte_4BFD27A & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryReader_TypeInfo, method);
    sub_1C2E12C(&byte___TypeInfo, v3);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v4);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&System_GC_TypeInfo, v6);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v7);
    sub_1C2E12C(&long___TypeInfo, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1C2E12C(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1C2E12C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4BFD27A = 1;
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
        v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C2E0D0(p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
        v23 = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v23 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, method) )
      {
        v27 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v27);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v29 = (System_IO_MemoryStream_o *)sub_1C2E378(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v29, 0LL);
          v30 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v31 = CatAndMouseGame__MouseGameZ(v30, 0LL);
          v32 = sub_1C2E1D4(byte___TypeInfo, 0x4000LL);
          v34 = v32;
          if ( !v32 )
            sub_1C2E388(0LL, v33);
          if ( !v31 )
            sub_1C2E388(v32, v33);
          while ( 1 )
          {
            v35 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v31->klass->vtable._33_unknown.method)(
                    v31,
                    v34,
                    0LL,
                    *(unsigned int *)(v34 + 24),
                    v31->klass->vtable._34_Read.methodPtr);
            if ( (int)v35 <= 0 )
              break;
            if ( !v29 )
              sub_1C2E388(v35, v36);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._36_Write.method)(
              v29,
              v34,
              0LL,
              (unsigned int)v35,
              v29->klass->vtable._37_Write.methodPtr);
          }
          klass = v31->klass;
          v49 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v49;
              p_offset += 4;
              if ( !v49 )
                goto LABEL_37;
            }
            v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v51 = sub_1C8010C(v31, System_IDisposable_TypeInfo, 0LL);
          }
          v52 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v51)(v31, *(_QWORD *)(v51 + 8));
          if ( v30 )
          {
            v54 = v30->klass;
            v55 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
            {
              v56 = &v54->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
              {
                --v55;
                v56 += 4;
                if ( !v55 )
                  goto LABEL_44;
              }
              v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
            }
            else
            {
LABEL_44:
              v57 = sub_1C8010C(v30, System_IDisposable_TypeInfo, 0LL);
            }
            v52 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v57)(v30, *(_QWORD *)(v57 + 8));
          }
          if ( !v29 )
            sub_1C2E388(v52, v53);
          v58 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v29->klass->vtable._42_ToArray.method)(
                  v29,
                  v29->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v58;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v65 = v29->klass;
          v66 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
          {
            v67 = &v65->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              --v66;
              v67 += 4;
              if ( !v66 )
                goto LABEL_52;
            }
            v68 = (__int64)(&v65->vtable._0_Equals.method + 2 * *v67);
          }
          else
          {
LABEL_52:
            v68 = sub_1C8010C(v29, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v68)(v29, *(_QWORD *)(v68 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v70 = (System_IO_MemoryStream_o *)sub_1C2E378(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_63379596(v70, masterDataBytes, 0LL);
          v71 = (System_IO_BinaryReader_o *)sub_1C2E378(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v71, (System_IO_Stream_o *)v70, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1C2E388(v72, v73);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v71 )
            {
LABEL_76:
              if ( v70 )
              {
                v99 = v70->klass;
                v100 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
                {
                  v101 = &v99->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v100;
                    v101 += 4;
                    if ( !v100 )
                      goto LABEL_81;
                  }
                  v102 = (__int64)(&v99->vtable._0_Equals.method + 2 * *v101);
                }
                else
                {
LABEL_81:
                  v102 = sub_1C8010C(v70, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v102)(v70, *(_QWORD *)(v102 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_64282240(0LL);
              v103 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v103, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v103;
              v39 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C2E0D0(v39, (int64_t)v103, v104, v105, v106, v107, v108, v109);
              v46 = 2;
LABEL_87:
              *(_DWORD *)&v39[-1].fields._IsQuestStartMenuMode_k__BackingField = v46;
              v23 = 1;
              return v23 & 1;
            }
          }
          else
          {
            if ( !v71 )
              sub_1C2E388(v72, v73);
            do
            {
              v76 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v71->klass->vtable._15_ReadInt32.method)(
                      v71,
                      v71->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v70 )
                sub_1C2E388(v76, v77);
              v78 = v76;
              v79 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v70->klass->vtable._12_get_Position.method)(
                      v70,
                      v70->klass->vtable._13_set_Position.methodPtr);
              v80 = v78;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v70->klass->vtable._31_Seek.method)(
                v70,
                v78,
                1LL,
                v70->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v82 = sub_1C2E1D4(long___TypeInfo, 2LL);
              v89 = v82;
              if ( !v82 )
                sub_1C2E388(0LL, 0LL);
              v90 = *(_DWORD *)(v82 + 24);
              if ( !v90 )
                sub_1C2E390(v82, v82);
              *(_QWORD *)(v82 + 32) = v79;
              if ( v90 == 1 )
                sub_1C2E390(v82, v82);
              *(_QWORD *)(v82 + 40) = v80;
              if ( !saveDataMapList )
                sub_1C2E388(v82, v82);
              items = saveDataMapList->fields._items;
              v92 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1C2E388(v82, v82);
              v93 = saveDataMapList->fields._size;
              if ( (unsigned int)v93 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v82,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v94 = &items->obj.klass + v93;
                saveDataMapList->fields._size = v93 + 1;
                v94[4] = (Il2CppClass *)v89;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v94 + 4), v89, v83, v84, v85, v86, v87, v88);
              }
              --size;
            }
            while ( size );
          }
          v95 = v71->klass;
          v96 = *(unsigned __int16 *)(&v71->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v71->klass->_2.bitflags2 + 3) )
          {
            v97 = &v95->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
            {
              --v96;
              v97 += 4;
              if ( !v96 )
                goto LABEL_73;
            }
            v98 = (__int64)(&v95->vtable._0_Equals.method + 2 * *v97);
          }
          else
          {
LABEL_73:
            v98 = sub_1C8010C(v71, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v98)(v71, *(_QWORD *)(v98 + 8));
          goto LABEL_76;
        }
      }
      v37 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v37 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v37;
        v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v38;
        v39 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C2E0D0(v39, (int64_t)v38, v40, v41, v42, v43, v44, v45);
        v46 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, method);
      v47 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v47 = DataManager_TypeInfo;
      }
      static_fields = v47->static_fields;
      v23 = 0;
      v26 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v26;
      return v23 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v24 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v24 = DataManager_TypeInfo;
      }
      static_fields = v24->static_fields;
      v23 = 0;
      v26 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1C2E388(this, method);
      goto LABEL_28;
    default:
      v23 = 0;
      return v23 & 1;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v17; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v19; // w9

  v2 = this;
  if ( (byte_4BFD27B & 1) == 0 )
  {
    sub_1C2E12C(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1C2E12C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4BFD27B = 1;
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
        v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C2E0D0(p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1C2E388(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, method);
  v17 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v19 = 1;
  else
    v19 = 5;
  static_fields->readMasterVersionResult = v19;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
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
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  struct DataManager_o *_4__this; // x20
  DataManager_c *v80; // x0
  int v81; // w8
  MasterDataUnpakcer_o *v82; // x21
  __int64 v83; // x0
  __int64 v84; // x1
  Il2CppObject *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  PartyOrganizationUtility_o *v93; // x19
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int v100; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v102; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v104; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  DataManager_c *v107; // x0
  System_String_o *CachePath; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  __int64 v127; // x1
  DataManager_c *v128; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v130; // x21
  System_Byte_array *v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  DataManager_c *v144; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v146; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  UnityEngine_WaitForEndOfFrame_o *v169; // x20
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  DataManager_c *v176; // x0
  const MethodInfo *v177; // x2
  System_Func_bool__o *v178; // x21
  UnityEngine_WaitUntil_o *v179; // x20
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  int64_t v186; // x1
  PartyOrganizationUtility_o *p_dataMapDict_5__6; // x0
  const MethodInfo *v188; // x1
  float v189; // s0
  UnityEngine_WaitForEndOfFrame_o *v190; // x20
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v198; // x20
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int v205; // w8
  DataManager_c *v206; // x8
  struct DataManager_StaticFields *v207; // x8
  int v208; // w9
  Il2CppObject *v209; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  struct DataMasterBase_array *v223; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v225; // x8
  int64_t MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  __int64 v234; // x0
  __int64 v235; // x1
  struct DataManager___c__DisplayClass49_0_o *v236; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  float v245; // s0
  struct DataManager___c__DisplayClass49_0_o *v246; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v249; // x24
  System_Predicate_object__o *v250; // x23
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  int64_t v257; // x2
  int32_t v258; // w3
  System_String_o *v259; // x4
  BattleSetupInfo_o *v260; // x5
  FollowerInfo_o *v261; // x6
  PartyListViewItem_o *v262; // x7
  System_Collections_Generic_List_object__o *v263; // x22
  DataManager__updateMasterData_d__49_o *v264; // x24
  System_Predicate_object__o *v265; // x23
  int32_t Index; // w0
  int32_t v267; // w22
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  __int64 v274; // x8
  _QWORD *v275; // x9
  __int64 _2__current_low; // x10
  __int64 v277; // x8
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  __int64 v284; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  __int64 v287; // x8
  float v288; // s0
  UnityEngine_WaitForEndOfFrame_o *v289; // x20
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  ManagerConfig_c *v296; // x0
  int64_t v297; // x2
  int32_t v298; // w3
  System_String_o *v299; // x4
  BattleSetupInfo_o *v300; // x5
  FollowerInfo_o *v301; // x6
  PartyListViewItem_o *v302; // x7
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  struct System_Collections_Generic_List_string__o *v309; // x8
  System_Collections_Generic_List_int__o *v310; // x22
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  ManagerConfig_c *v317; // x0
  __int64 v318; // x22
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  DataManager__updateMasterData_d__49_o *v325; // x23
  int64_t v326; // x2
  int32_t v327; // w3
  System_String_o *v328; // x4
  BattleSetupInfo_o *v329; // x5
  FollowerInfo_o *v330; // x6
  PartyListViewItem_o *v331; // x7
  DataManager__updateMasterData_d__49_o *v332; // x23
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  DataManager__updateMasterData_d__49_o *v339; // x23
  int64_t v340; // x2
  int32_t v341; // w3
  System_String_o *v342; // x4
  BattleSetupInfo_o *v343; // x5
  FollowerInfo_o *v344; // x6
  PartyListViewItem_o *v345; // x7
  DataManager__updateMasterData_d__49_o *v346; // x23
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  DataManager__updateMasterData_d__49_o *v353; // x23
  int64_t v354; // x2
  int32_t v355; // w3
  System_String_o *v356; // x4
  BattleSetupInfo_o *v357; // x5
  FollowerInfo_o *v358; // x6
  PartyListViewItem_o *v359; // x7
  DataManager__updateMasterData_d__49_o *v360; // x23
  int64_t v361; // x2
  int32_t v362; // w3
  System_String_o *v363; // x4
  BattleSetupInfo_o *v364; // x5
  FollowerInfo_o *v365; // x6
  PartyListViewItem_o *v366; // x7
  DataManager__updateMasterData_d__49_o *v367; // x23
  int64_t v368; // x2
  int32_t v369; // w3
  System_String_o *v370; // x4
  BattleSetupInfo_o *v371; // x5
  FollowerInfo_o *v372; // x6
  PartyListViewItem_o *v373; // x7
  DataManager__updateMasterData_d__49_o *v374; // x23
  int64_t v375; // x2
  int32_t v376; // w3
  System_String_o *v377; // x4
  BattleSetupInfo_o *v378; // x5
  FollowerInfo_o *v379; // x6
  PartyListViewItem_o *v380; // x7
  DataManager__updateMasterData_d__49_o *v381; // x23
  __int64 v382; // x8
  __int64 v383; // x21
  _QWORD *v384; // x23
  __int64 v385; // x24
  int64_t v386; // x2
  int32_t v387; // w3
  System_String_o *v388; // x4
  BattleSetupInfo_o *v389; // x5
  FollowerInfo_o *v390; // x6
  PartyListViewItem_o *v391; // x7
  int64_t v392; // x1
  System_Collections_Generic_List_object__o *v393; // x25
  System_Predicate_object__o *v394; // x26
  int32_t v395; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_37886F4 *v397; // x3
  const MethodInfo_37886F4 *v398; // x3
  __int64 v399; // x8
  _QWORD *v400; // x9
  __int64 v401; // x10
  UnityEngine_WaitForEndOfFrame_o *v402; // x20
  int64_t v403; // x2
  int32_t v404; // w3
  System_String_o *v405; // x4
  BattleSetupInfo_o *v406; // x5
  FollowerInfo_o *v407; // x6
  PartyListViewItem_o *v408; // x7
  const MethodInfo *v409; // x1
  ManagerConfig_c *v410; // x0
  Il2CppObject *lockCountObj; // x22
  const MethodInfo *v412; // x1
  DataManager_c *v413; // x0
  int v414; // w21
  DataManager_c *v415; // x8
  UnityEngine_WaitForEndOfFrame_o *v416; // x20
  int64_t v417; // x2
  int32_t v418; // w3
  System_String_o *v419; // x4
  BattleSetupInfo_o *v420; // x5
  FollowerInfo_o *v421; // x6
  PartyListViewItem_o *v422; // x7
  int32_t v423; // w3
  System_String_o *v424; // x4
  BattleSetupInfo_o *v425; // x5
  FollowerInfo_o *v426; // x6
  PartyListViewItem_o *v427; // x7
  struct System_Collections_Generic_List_string__o *v428; // x8
  int32_t size; // w2
  int v430; // w9
  struct System_Collections_Generic_List_long____o *v431; // x8
  int64_t v432; // x2
  int v433; // w9
  UnityEngine_WaitForEndOfFrame_o *v434; // x20
  int64_t v435; // x2
  int32_t v436; // w3
  System_String_o *v437; // x4
  BattleSetupInfo_o *v438; // x5
  FollowerInfo_o *v439; // x6
  PartyListViewItem_o *v440; // x7
  float v441; // s0
  UnityEngine_WaitForEndOfFrame_o *v442; // x20
  int64_t v443; // x2
  int32_t v444; // w3
  System_String_o *v445; // x4
  BattleSetupInfo_o *v446; // x5
  FollowerInfo_o *v447; // x6
  PartyListViewItem_o *v448; // x7
  UnityEngine_WaitForEndOfFrame_o *v449; // x20
  int64_t v450; // x2
  int32_t v451; // w3
  System_String_o *v452; // x4
  BattleSetupInfo_o *v453; // x5
  FollowerInfo_o *v454; // x6
  PartyListViewItem_o *v455; // x7
  __int64 v456; // x0
  struct DataMasterBase_array *v457; // x9
  float v458; // s0
  DataManager_c *v459; // x8
  UnityEngine_WaitForEndOfFrame_o *v460; // x20
  int64_t v461; // x2
  int32_t v462; // w3
  System_String_o *v463; // x4
  BattleSetupInfo_o *v464; // x5
  FollowerInfo_o *v465; // x6
  PartyListViewItem_o *v466; // x7
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+8h] [xbp-A8h]
  __int64 v468; // [xsp+18h] [xbp-98h] BYREF
  __int64 v469; // [xsp+20h] [xbp-90h]
  __int64 v470; // [xsp+28h] [xbp-88h] BYREF
  __int64 v471; // [xsp+30h] [xbp-80h]
  int v472; // [xsp+40h] [xbp-70h]
  bool lockTaken; // [xsp+4Ch] [xbp-64h] BYREF
  System_Nullable_long__o v474; // 0:x0.16
  System_Nullable_long__o v475; // 0:x0.16

  v8 = this;
  if ( (byte_4BFD27C & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, v9);
    sub_1C2E12C(&System_Convert_TypeInfo, v10);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantProfileMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventServantMaster___, v12);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantAddMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantClassMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantCommentMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantMaster___, v18);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantProfileMaster___, v19);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v20);
    sub_1C2E12C(&Method_DataManager__updateMasterData_b__49_0__, v21);
    sub_1C2E12C(&DataManager_TypeInfo, v22);
    sub_1C2E12C(&DataMasterBase___TypeInfo, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v25);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v26);
    sub_1C2E12C(&EventRandomMissionClearManager_TypeInfo, v27);
    sub_1C2E12C(&System_Func_bool__TypeInfo, v28);
    sub_1C2E12C(&System_GC_TypeInfo, v29);
    sub_1C2E12C(&ImageLimitCount_TypeInfo, v30);
    sub_1C2E12C(&LastUsedDeckNumberManager_TypeInfo, v31);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v32);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v33);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____Add__, v34);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Clear__, v35);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____Clear__, v36);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__FindIndex__, v38);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__RemoveAt__, v39);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____RemoveAt__, v40);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v41);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____get_Count__, v42);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__get_Count__, v43);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____get_Item__, v44);
    sub_1C2E12C(&Method_System_Collections_Generic_List_long____set_Item__, v45);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v46);
    sub_1C2E12C(&LogoMain_TypeInfo, v47);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v48);
    sub_1C2E12C(&MasterDataUnpakcer_TypeInfo, v49);
    sub_1C2E12C(&MaterialBranchRouteManager_TypeInfo, v50);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v51);
    sub_1C2E12C(&MaterialServantLimitCountManager_TypeInfo, v52);
    sub_1C2E12C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v53);
    sub_1C2E12C(&Method_System_Nullable_long___ctor__, v54);
    sub_1C2E12C(&OtherUserNewManager_TypeInfo, v55);
    sub_1C2E12C(&System_Predicate_string__TypeInfo, v56);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v57);
    sub_1C2E12C(&ServantProfileEventJoinManager_TypeInfo, v58);
    sub_1C2E12C(&ServantProfileLimitCountManager_TypeInfo, v59);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v60);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v61);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v62);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v63);
    sub_1C2E12C(&DataManager___c__DisplayClass49_0_TypeInfo, v64);
    sub_1C2E12C(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v65);
    sub_1C2E12C(&DataManager___c__DisplayClass49_1_TypeInfo, v66);
    sub_1C2E12C(&UserCommandCodeCollectionManager_TypeInfo, v67);
    sub_1C2E12C(&UserCommandCodeNewManager_TypeInfo, v68);
    sub_1C2E12C(&UserEquipNewManager_TypeInfo, v69);
    sub_1C2E12C(&UserMissionProgressManager_TypeInfo, v70);
    sub_1C2E12C(&UserServantCollectionManager_TypeInfo, v71);
    sub_1C2E12C(&UserServantLockManager_TypeInfo, v72);
    sub_1C2E12C(&UserServantNewManager_TypeInfo, v73);
    sub_1C2E12C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v74);
    sub_1C2E12C(&UnityEngine_WaitUntil_TypeInfo, v75);
    sub_1C2E12C(&WarBoardMessageHistoryManager_TypeInfo, v76);
    sub_1C2E12C(&WarBoardMovieHistoryManager_TypeInfo, v77);
    this = (DataManager__updateMasterData_d__49_o *)sub_1C2E12C(&StringLiteral_11668/*"SCRIPT"*/, v78);
    byte_4BFD27C = 1;
  }
  lockTaken = 0;
  v472 = 0;
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
      v107 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath((const MethodInfo *)v107);
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
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v109, v110, v111, v112, v113, v114);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v121, v122, v123, v124, v125, v126);
      v128 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v128 = DataManager_TypeInfo;
      }
      updateData = v128->static_fields->updateData;
      if ( !updateData )
        sub_1C2E388(0LL, v127);
      v130 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v131 = System_Convert__FromBase64String(v130, 0LL);
      v8->fields._cryptBytes_5__8 = v131;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8,
        (int64_t)v131,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
      v144 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v144 = DataManager_TypeInfo;
      }
      static_fields = v144->static_fields;
      static_fields->updateData = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v138, v139, v140, v141, v142, v143);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64282240(0LL);
      v146 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v146, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v146;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C2E0D0(p__2__current, (int64_t)v146, v148, v149, v150, v151, v152, v153);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v156 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1C2E388(v156, v156);
      _4__this->fields.masterDataBytes = v156;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
        (int64_t)v156,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v163, v164, v165, v166, v167, v168);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64282240(0LL);
      v169 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v169, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v169;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C2E0D0(v93, (int64_t)v169, v170, v171, v172, v173, v174, v175);
      v100 = 2;
      goto LABEL_241;
    case 2:
      v8->fields.__1__state = -1;
      v82 = (MasterDataUnpakcer_o *)sub_1C2E378(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v82, 0LL);
      if ( !_4__this )
        sub_1C2E388(v83, v84);
      if ( !v82 )
        sub_1C2E388(v83, v84);
      v85 = MasterDataUnpakcer__Unpack_39496428(v82, _4__this->fields.masterDataBytes, 0LL);
      v8->fields._dataMapObject_5__7 = v85;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        (int64_t)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_64282240(0LL);
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v92;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C2E0D0(v93, (int64_t)v92, v94, v95, v96, v97, v98, v99);
      v100 = 3;
      goto LABEL_241;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v102 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v104 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v104 = 0LL;
        }
        else
        {
          v104 = 0LL;
        }
        v8->fields._dataMapDict_5__6 = v104;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v102 )
            v186 = (int64_t)dataMapObject_5__7;
          else
            v186 = 0LL;
        }
        else
        {
          v186 = 0LL;
        }
      }
      else
      {
        v186 = 0LL;
        v8->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_1C2E0D0(p_dataMapDict_5__6, v186, v2, (int32_t)v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_291;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v198 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v198, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v198;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C2E0D0(v93, (int64_t)v198, v199, v200, v201, v202, v203, v204);
        v100 = 4;
        goto LABEL_241;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_82;
      v205 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v205 < v8->fields._dataListCount_5__2 )
        {
          v209 = (Il2CppObject *)sub_1C2E378(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v209, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v209;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v8->fields.__8__1,
            (int64_t)v209,
            v211,
            v212,
            v213,
            v214,
            v215,
            v216);
          v223 = _4__this->fields.datalist;
          if ( !v223 )
            goto LABEL_291;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v223->max_length )
            goto LABEL_292;
          v225 = v223->m_Items[i_5__9];
          if ( !v225 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = (int64_t)v225->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields,
            MasterName_k__BackingField,
            v217,
            v218,
            v219,
            v220,
            v221,
            v222);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v228,
              v229,
              v230,
              v231,
              v232,
              v233);
            v236 = v8->fields.__8__1;
            if ( !v236 )
              sub_1C2E388(v234, v235);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1C2E388(0LL, v235);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v236->fields.masterName,
                     (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              (int64_t)Item,
              v239,
              v240,
              v241,
              v242,
              v243,
              v244);
            v245 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v245 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v245;
              v449 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v449, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v449;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C2E0D0(v93, (int64_t)v449, v450, v451, v452, v453, v454, v455);
              v100 = 5;
              goto LABEL_241;
            }
LABEL_95:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v246 = v8->fields.__8__1;
            if ( !v246 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v246->fields.masterName,
                                                              (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v415 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v415 = DataManager_TypeInfo;
                }
                v207 = v415->static_fields;
                result = 0;
                v208 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v249 = *p__8__1;
            v250 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v250,
              (Il2CppObject *)v249,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v250,
                                                              (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v274 = *(_QWORD *)&this->fields.__1__state;
              v275 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v274 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v274 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
              }
              else
              {
                v277 = v274 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v277 + 32) = method;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)(v277 + 32),
                  (int64_t)method,
                  v251,
                  v252,
                  v253,
                  v254,
                  v255,
                  v256);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v284 = *(_QWORD *)&this->fields.__1__state;
              v285 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v284 )
                goto LABEL_291;
              v286 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v286 >= *(_DWORD *)(v284 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
              }
              else
              {
                v287 = v284 + 8 * v286;
                LODWORD(this->fields.__2__current) = v286 + 1;
                *(_QWORD *)(v287 + 32) = method;
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)(v287 + 32),
                  (int64_t)method,
                  v278,
                  v279,
                  v280,
                  v281,
                  v282,
                  v283);
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
                (const MethodInfo_366B630 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0LL;
            v8->fields._isAdd_5__4 = 1;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v257,
              v258,
              v259,
              v260,
              v261,
              v262);
          }
          else
          {
            v263 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v264 = *p__8__1;
            v265 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v265,
              (Il2CppObject *)v264,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v263 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v263,
                      (System_Predicate_T__o *)v265,
                      (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_124;
            v267 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v267,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v267,
              (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)p__8__1, 0LL, v268, v269, v270, v271, v272, v273);
LABEL_124:
          v205 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v205;
          continue;
        }
        break;
      }
      v288 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v288 - _4__this->fields.lastFrameTime) <= 0.1 )
      {
LABEL_128:
        if ( !v8->fields._isAdd_5__4 )
        {
          v296 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v296 = ManagerConfig_TypeInfo;
          }
          if ( !v296->static_fields->UseMock )
            goto LABEL_82;
        }
        v8->fields._dataMapDict_5__6 = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0LL;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
          0LL,
          v297,
          v298,
          v299,
          v300,
          v301,
          v302);
        v8->fields._cryptBytes_5__8 = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v303, v304, v305, v306, v307, v308);
        if ( !_4__this )
          goto LABEL_291;
LABEL_133:
        v309 = _4__this->fields.saveNameList;
        if ( !v309 )
LABEL_291:
          sub_1C2E388(this, method);
        if ( v309->fields._size <= 0 )
        {
LABEL_82:
          v206 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v206 = DataManager_TypeInfo;
          }
          v207 = v206->static_fields;
          result = 0;
          v208 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v310 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v310,
          (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v310;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v8->fields._loadedIndices_5__5,
          (int64_t)v310,
          v311,
          v312,
          v313,
          v314,
          v315,
          v316);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
        if ( v8->fields.isUseTips )
        {
          v317 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v317 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v317->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11668/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v318 = sub_1C2E1D4(DataMasterBase___TypeInfo, 9LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v318 )
                goto LABEL_291;
              v325 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( !*(_DWORD *)(v318 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v318 + 32) = v325;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 32), (int64_t)v325, v319, v320, v321, v322, v323, v324);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantClassMaster___);
              v332 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 40) = v332;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 40), (int64_t)v332, v326, v327, v328, v329, v330, v331);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v339 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 48) = v339;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 48), (int64_t)v339, v333, v334, v335, v336, v337, v338);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v346 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 56) = v346;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 56), (int64_t)v346, v340, v341, v342, v343, v344, v345);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v353 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 64) = v353;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 64), (int64_t)v353, v347, v348, v349, v350, v351, v352);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventServantMaster___);
              v360 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 72) = v360;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 72), (int64_t)v360, v354, v355, v356, v357, v358, v359);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v367 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 80) = v367;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 80), (int64_t)v367, v361, v362, v363, v364, v365, v366);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v374 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                  goto LABEL_240;
              }
              if ( *(_DWORD *)(v318 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v318 + 88) = v374;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 88), (int64_t)v374, v368, v369, v370, v371, v372, v373);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantAddMaster___);
              v381 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1C2E268(this, *(_QWORD *)(*(_QWORD *)v318 + 64LL));
                if ( !this )
                {
LABEL_240:
                  v456 = sub_1C2E3AC(this);
                  sub_1C2E254(v456, 0LL);
                }
              }
              if ( *(_DWORD *)(v318 + 24) <= 8u )
LABEL_292:
                sub_1C2E390(this, method);
              *(_QWORD *)(v318 + 96) = v381;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v318 + 96), (int64_t)v381, v375, v376, v377, v378, v379, v380);
              v382 = *(_QWORD *)(v318 + 24);
              if ( (int)v382 >= 1 )
              {
                v383 = 0LL;
                while ( (unsigned int)v383 < (unsigned int)v382 )
                {
                  v384 = *(_QWORD **)(v318 + 32 + 8 * v383);
                  v385 = sub_1C2E378(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v385, 0LL);
                  if ( !v384 )
                    goto LABEL_291;
                  if ( !v385 )
                    goto LABEL_291;
                  v392 = v384[3];
                  *(_QWORD *)(v385 + 16) = v392;
                  sub_1C2E0D0((PartyOrganizationUtility_o *)(v385 + 16), v392, v386, v387, v388, v389, v390, v391);
                  v393 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v394 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v394,
                    (Il2CppObject *)v385,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v393 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v393,
                                                                    (System_Predicate_T__o *)v394,
                                                                    (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v395 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v395,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v474.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v474.fields.hasValue = &v470;
                    v470 = 0LL;
                    v471 = 0LL;
                    System_Nullable_long____ctor(v474, Method_System_Nullable_long___ctor__, v397);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v395,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v475.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v475.fields.hasValue = &v468;
                    v468 = 0LL;
                    v469 = 0LL;
                    System_Nullable_long____ctor(v475, Method_System_Nullable_long___ctor__, v398);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v384 + 424LL))(
                      v384,
                      masterDataBytes,
                      v470,
                      v471,
                      v468,
                      v469,
                      *(_QWORD *)(*v384 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v399 = *(_QWORD *)&this->fields.__1__state;
                    v400 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v399 )
                      goto LABEL_291;
                    v401 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v401 >= *(_DWORD *)(v399 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v395,
                        *(const MethodInfo_364E888 **)(*(_QWORD *)(v400[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v401 + 1;
                      *(_DWORD *)(v399 + 4 * v401 + 32) = v395;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v382 = *(_QWORD *)(v318 + 24);
                  if ( (int)++v383 >= (int)v382 )
                    goto LABEL_191;
                }
                goto LABEL_292;
              }
LABEL_191:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_203:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v402 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v402, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v402;
                  v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1C2E0D0(v93, (int64_t)v402, v403, v404, v405, v406, v407, v408);
                  v100 = 7;
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
          v410 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v410 = ManagerConfig_TypeInfo;
          }
          if ( !v410->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, v409);
            v441 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v441 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v441;
              v442 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v442, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v442;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C2E0D0(v93, (int64_t)v442, v443, v444, v445, v446, v447, v448);
              v100 = 8;
              goto LABEL_241;
            }
LABEL_56:
            v176 = DataManager_TypeInfo;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName((const MethodInfo *)v176);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, v177);
              v178 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v178,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v179 = (UnityEngine_WaitUntil_o *)sub_1C2E378(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v179, v178, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v179;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C2E0D0(v93, (int64_t)v179, v180, v181, v182, v183, v184, v185);
              v100 = 9;
              goto LABEL_241;
            }
            goto LABEL_291;
          }
        }
LABEL_208:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_64462016(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v414 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v413 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v413 = DataManager_TypeInfo;
          }
          v413->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, v412);
          v414 = 20;
        }
        else
        {
          v414 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v414 == 62 )
        {
          v416 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v416, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v416;
          v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C2E0D0(v93, (int64_t)v416, v417, v418, v419, v420, v421, v422);
          v100 = 11;
          goto LABEL_241;
        }
        if ( v414 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, v412);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v428 = _4__this->fields.saveNameList;
          if ( v428 )
          {
            size = v428->fields._size;
            v430 = v428->fields._version + 1;
            v428->fields._size = 0;
            v428->fields._version = v430;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v428->fields._items, 0, size, 0LL);
            v431 = _4__this->fields.saveDataMapList;
            if ( v431 )
            {
              v432 = (unsigned int)v431->fields._size;
              v433 = v431->fields._version + 1;
              v431->fields._size = 0;
              v431->fields._version = v433;
              if ( (int)v432 >= 1 )
                System_Array__Clear((System_Array_o *)v431->fields._items, 0, v432, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
                0LL,
                v432,
                v423,
                v424,
                v425,
                v426,
                v427);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_64282240(0LL);
              v434 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v434, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v434;
              v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1C2E0D0(v93, (int64_t)v434, v435, v436, v437, v438, v439, v440);
              v100 = 12;
              goto LABEL_241;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      _4__this->fields.lastFrameTime = v288;
      v289 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v289, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v289;
      v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C2E0D0(v93, (int64_t)v289, v290, v291, v292, v293, v294, v295);
      v100 = 6;
LABEL_241:
      *(_DWORD *)&v93[-1].fields._IsQuestStartMenuMode_k__BackingField = v100;
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
        v80 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v80 = DataManager_TypeInfo;
        }
        v80->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, method);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, method);
      DataManager__writeMasterVersionFile(_4__this, v188);
      v189 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v189 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v189;
        v190 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v190, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v190;
        v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C2E0D0(v93, (int64_t)v190, v191, v192, v193, v194, v195, v196);
        v100 = 10;
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
      v81 = 0;
      v8->fields.__1__state = -1;
      v8->fields._i_5__9 = 0;
      goto LABEL_249;
    case 0xD:
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v81 = v8->fields._i_5__9 + 1;
        v8->fields._i_5__9 = v81;
LABEL_249:
        if ( v81 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_291;
        v457 = _4__this->fields.datalist;
        if ( !v457 )
          goto LABEL_291;
        if ( v81 >= v457->max_length )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__49_o *)v457->m_Items[v81];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v458 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          if ( (float)(v458 - _4__this->fields.lastFrameTime) > 0.1 )
          {
            _4__this->fields.lastFrameTime = v458;
            v460 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v460, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v460;
            v93 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C2E0D0(v93, (int64_t)v460, v461, v462, v463, v464, v465, v466);
            v100 = 13;
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
      v459 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v459 = DataManager_TypeInfo;
      }
      v207 = v459->static_fields;
      result = 0;
      v208 = 1;
LABEL_289:
      v207->updateMasterDataResult = v208;
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  __int64 v19; // x1
  __int64 v20; // x1
  DataManager_o *_4__this; // x20
  DataManager_c *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  DataManager_c *v36; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v38; // x0
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
  DataManager_c *v51; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v54; // x1
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v65; // x21
  Il2CppObject *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  UnityEngine_WaitForEndOfFrame_o *v73; // x20
  Il2CppObject **v74; // x19
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int v81; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_39470976; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_WaitForEndOfFrame_o *v90; // x20
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v99; // x21
  System_String_o *v100; // x22
  Il2CppObject *v101; // x0
  System_Collections_Generic_Dictionary_string__object__o *v102; // x23
  __int64 methodPtr_low; // x9
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7

  if ( (byte_4BFD27D & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, method);
    sub_1C2E12C(&System_Convert_TypeInfo, v9);
    sub_1C2E12C(&DataManager_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13);
    sub_1C2E12C(&JsonManager_TypeInfo, v14);
    sub_1C2E12C(&NetworkManager_TypeInfo, v15);
    sub_1C2E12C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_1C2E12C(&StringLiteral_18540/*"contactURL"*/, v17);
    sub_1C2E12C(&StringLiteral_19771/*"filePass"*/, v18);
    sub_1C2E12C(&StringLiteral_17381/*"baseURL"*/, v19);
    sub_1C2E12C(&StringLiteral_1/*""*/, v20);
    byte_4BFD27D = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v22 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v22 = DataManager_TypeInfo;
      }
      if ( !v22->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._cryptString_5__3, 0LL, v23, v24, v25, v26, v27, v28);
      this->fields._dataObject_5__4 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v29, v30, v31, v32, v33, v34);
      v36 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v36 = DataManager_TypeInfo;
      }
      webViewData = v36->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v38 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))webViewData->klass->vtable[3].method)(
                                        webViewData,
                                        webViewData->klass->vtable[4].methodPtr);
      this->fields._cryptString_5__3 = v38;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        (int64_t)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v51 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v51 = DataManager_TypeInfo;
      }
      static_fields = v51->static_fields;
      static_fields->webViewData = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->webViewData, 0LL, v45, v46, v47, v48, v49, v50);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
        this->fields.__2__current = (Il2CppObject *)v55;
        p__2__current = &this->fields.__2__current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)p__2__current, (int64_t)v55, v57, v58, v59, v60, v61, v62);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v65 = System_Convert__FromBase64String(cryptString_5__3, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v66 = CatAndMouseGame__MouseGame2MsgPack(v65, 0, 0LL);
      this->fields._dataObject_5__4 = v66;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields._dataObject_5__4,
        (int64_t)v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v73 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v73, 0LL);
        this->fields.__2__current = (Il2CppObject *)v73;
        v74 = &this->fields.__2__current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)v74, (int64_t)v73, v75, v76, v77, v78, v79, v80);
        v81 = 2;
LABEL_30:
        *((_DWORD *)v74 - 2) = v81;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_39470976 = JsonManager__getDictionary_39470976(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_39470976;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields._data_5__2,
        (int64_t)Dictionary_39470976,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v90 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2E378(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v90, 0LL);
        this->fields.__2__current = (Il2CppObject *)v90;
        v74 = &this->fields.__2__current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)v74, (int64_t)v90, v91, v92, v93, v94, v95, v96);
        v81 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v99 = (System_String_o *)StringLiteral_1/*""*/;
      v100 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17381/*"baseURL"*/,
              (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17381/*"baseURL"*/,
               (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v100 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                  Item,
                                  Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18540/*"contactURL"*/,
              (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18540/*"contactURL"*/,
               (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v99 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19771/*"filePass"*/,
             (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1C2E388(Item, v54);
        v101 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)StringLiteral_19771/*"filePass"*/,
                 (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v102 = (System_Collections_Generic_Dictionary_string__object__o *)v101;
        if ( v101 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v101->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v101->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1C2E648(v101);
LABEL_54:
            sub_1C2E388(webViewData, v35);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v100, v99, v102, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        0LL,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      this->fields._dataObject_5__4 = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v110, v111, v112, v113, v114, v115);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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