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

  if ( (byte_4B666E0 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B666E0 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = DataManager_TypeInfo->static_fields;
  v10->webViewData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v10->webViewData, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_1/*""*/;
  v18 = DataManager_TypeInfo->static_fields;
  v18->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v18->serverHash, (int64_t)v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4B666DF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BE4ACC(&object_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4B666DF = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.saveNameList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.saveDataMapList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (Il2CppObject *)sub_1BE4D18(object_TypeInfo);
  System_Object___ctor(v22, 0LL);
  this->fields.lockCountObj = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.lockCountObj, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38291E0 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4B666BD & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, v1);
    byte_4B666BD = 1;
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

  if ( (byte_4B666BE & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666BE = 1;
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

  if ( (byte_4B666BC & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, v1);
    byte_4B666BC = 1;
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

  if ( (byte_4B666D6 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4B666D6 = 1;
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
    sub_1BE4D28(v5, method);
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
  DataMasterBase_array *v528; // x19
  ServantMaster_o *v529; // x20
  __int64 v530; // x0
  __int64 v531; // x1
  int64_t v532; // x2
  int32_t v533; // w3
  System_String_o *v534; // x4
  BattleSetupInfo_o *v535; // x5
  FollowerInfo_o *v536; // x6
  PartyListViewItem_o *v537; // x7
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v539; // x20
  int64_t v540; // x2
  int32_t v541; // w3
  System_String_o *v542; // x4
  BattleSetupInfo_o *v543; // x5
  FollowerInfo_o *v544; // x6
  PartyListViewItem_o *v545; // x7
  ServantCommentMaster_o *v546; // x20
  int64_t v547; // x2
  int32_t v548; // w3
  System_String_o *v549; // x4
  BattleSetupInfo_o *v550; // x5
  FollowerInfo_o *v551; // x6
  PartyListViewItem_o *v552; // x7
  ServantProfileMaster_o *v553; // x20
  int64_t v554; // x2
  int32_t v555; // w3
  System_String_o *v556; // x4
  BattleSetupInfo_o *v557; // x5
  FollowerInfo_o *v558; // x6
  PartyListViewItem_o *v559; // x7
  WarMaster_o *v560; // x20
  int64_t v561; // x2
  int32_t v562; // w3
  System_String_o *v563; // x4
  BattleSetupInfo_o *v564; // x5
  FollowerInfo_o *v565; // x6
  PartyListViewItem_o *v566; // x7
  UserMaster_o *v567; // x20
  int64_t v568; // x2
  int32_t v569; // w3
  System_String_o *v570; // x4
  BattleSetupInfo_o *v571; // x5
  FollowerInfo_o *v572; // x6
  PartyListViewItem_o *v573; // x7
  UserGameMaster_o *v574; // x20
  int64_t v575; // x2
  int32_t v576; // w3
  System_String_o *v577; // x4
  BattleSetupInfo_o *v578; // x5
  FollowerInfo_o *v579; // x6
  PartyListViewItem_o *v580; // x7
  TblUserMaster_o *v581; // x20
  int64_t v582; // x2
  int32_t v583; // w3
  System_String_o *v584; // x4
  BattleSetupInfo_o *v585; // x5
  FollowerInfo_o *v586; // x6
  PartyListViewItem_o *v587; // x7
  UserItemMaster_o *v588; // x20
  int64_t v589; // x2
  int32_t v590; // w3
  System_String_o *v591; // x4
  BattleSetupInfo_o *v592; // x5
  FollowerInfo_o *v593; // x6
  PartyListViewItem_o *v594; // x7
  UserServantMaster_o *v595; // x20
  int64_t v596; // x2
  int32_t v597; // w3
  System_String_o *v598; // x4
  BattleSetupInfo_o *v599; // x5
  FollowerInfo_o *v600; // x6
  PartyListViewItem_o *v601; // x7
  UserServantStorageMaster_o *v602; // x20
  int64_t v603; // x2
  int32_t v604; // w3
  System_String_o *v605; // x4
  BattleSetupInfo_o *v606; // x5
  FollowerInfo_o *v607; // x6
  PartyListViewItem_o *v608; // x7
  UserAccessaryMaster_o *v609; // x20
  int64_t v610; // x2
  int32_t v611; // w3
  System_String_o *v612; // x4
  BattleSetupInfo_o *v613; // x5
  FollowerInfo_o *v614; // x6
  PartyListViewItem_o *v615; // x7
  UserQuestMaster_o *v616; // x20
  int64_t v617; // x2
  int32_t v618; // w3
  System_String_o *v619; // x4
  BattleSetupInfo_o *v620; // x5
  FollowerInfo_o *v621; // x6
  PartyListViewItem_o *v622; // x7
  BattleMaster_o *v623; // x20
  int64_t v624; // x2
  int32_t v625; // w3
  System_String_o *v626; // x4
  BattleSetupInfo_o *v627; // x5
  FollowerInfo_o *v628; // x6
  PartyListViewItem_o *v629; // x7
  OtherUserGameMaster_o *v630; // x20
  int64_t v631; // x2
  int32_t v632; // w3
  System_String_o *v633; // x4
  BattleSetupInfo_o *v634; // x5
  FollowerInfo_o *v635; // x6
  PartyListViewItem_o *v636; // x7
  TblFriendMaster_o *v637; // x20
  int64_t v638; // x2
  int32_t v639; // w3
  System_String_o *v640; // x4
  BattleSetupInfo_o *v641; // x5
  FollowerInfo_o *v642; // x6
  PartyListViewItem_o *v643; // x7
  AreaMaster_o *v644; // x20
  int64_t v645; // x2
  int32_t v646; // w3
  System_String_o *v647; // x4
  BattleSetupInfo_o *v648; // x5
  FollowerInfo_o *v649; // x6
  PartyListViewItem_o *v650; // x7
  ServantCardMaster_o *v651; // x20
  int64_t v652; // x2
  int32_t v653; // w3
  System_String_o *v654; // x4
  BattleSetupInfo_o *v655; // x5
  FollowerInfo_o *v656; // x6
  PartyListViewItem_o *v657; // x7
  EventMaster_o *v658; // x20
  int64_t v659; // x2
  int32_t v660; // w3
  System_String_o *v661; // x4
  BattleSetupInfo_o *v662; // x5
  FollowerInfo_o *v663; // x6
  PartyListViewItem_o *v664; // x7
  ItemMaster_o *v665; // x20
  int64_t v666; // x2
  int32_t v667; // w3
  System_String_o *v668; // x4
  BattleSetupInfo_o *v669; // x5
  FollowerInfo_o *v670; // x6
  PartyListViewItem_o *v671; // x7
  QuestMaster_o *v672; // x20
  int64_t v673; // x2
  int32_t v674; // w3
  System_String_o *v675; // x4
  BattleSetupInfo_o *v676; // x5
  FollowerInfo_o *v677; // x6
  PartyListViewItem_o *v678; // x7
  QuestAddMaster_o *v679; // x20
  int64_t v680; // x2
  int32_t v681; // w3
  System_String_o *v682; // x4
  BattleSetupInfo_o *v683; // x5
  FollowerInfo_o *v684; // x6
  PartyListViewItem_o *v685; // x7
  QuestReleaseMaster_o *v686; // x20
  int64_t v687; // x2
  int32_t v688; // w3
  System_String_o *v689; // x4
  BattleSetupInfo_o *v690; // x5
  FollowerInfo_o *v691; // x6
  PartyListViewItem_o *v692; // x7
  QuestDateRangeMaster_o *v693; // x20
  int64_t v694; // x2
  int32_t v695; // w3
  System_String_o *v696; // x4
  BattleSetupInfo_o *v697; // x5
  FollowerInfo_o *v698; // x6
  PartyListViewItem_o *v699; // x7
  QuestPhaseMaster_o *v700; // x20
  int64_t v701; // x2
  int32_t v702; // w3
  System_String_o *v703; // x4
  BattleSetupInfo_o *v704; // x5
  FollowerInfo_o *v705; // x6
  PartyListViewItem_o *v706; // x7
  QuestPhaseDetailMaster_o *v707; // x20
  int64_t v708; // x2
  int32_t v709; // w3
  System_String_o *v710; // x4
  BattleSetupInfo_o *v711; // x5
  FollowerInfo_o *v712; // x6
  PartyListViewItem_o *v713; // x7
  QuestGroupMaster_o *v714; // x20
  int64_t v715; // x2
  int32_t v716; // w3
  System_String_o *v717; // x4
  BattleSetupInfo_o *v718; // x5
  FollowerInfo_o *v719; // x6
  PartyListViewItem_o *v720; // x7
  QuestRandomGroupMaster_o *v721; // x20
  int64_t v722; // x2
  int32_t v723; // w3
  System_String_o *v724; // x4
  BattleSetupInfo_o *v725; // x5
  FollowerInfo_o *v726; // x6
  PartyListViewItem_o *v727; // x7
  QuestConsumeItemMaster_o *v728; // x20
  int64_t v729; // x2
  int32_t v730; // w3
  System_String_o *v731; // x4
  BattleSetupInfo_o *v732; // x5
  FollowerInfo_o *v733; // x6
  PartyListViewItem_o *v734; // x7
  QuestMessageMaster_o *v735; // x20
  int64_t v736; // x2
  int32_t v737; // w3
  System_String_o *v738; // x4
  BattleSetupInfo_o *v739; // x5
  FollowerInfo_o *v740; // x6
  PartyListViewItem_o *v741; // x7
  UserQuestInfoMaster_o *v742; // x20
  int64_t v743; // x2
  int32_t v744; // w3
  System_String_o *v745; // x4
  BattleSetupInfo_o *v746; // x5
  FollowerInfo_o *v747; // x6
  PartyListViewItem_o *v748; // x7
  UserQuestRecordMaster_o *v749; // x20
  int64_t v750; // x2
  int32_t v751; // w3
  System_String_o *v752; // x4
  BattleSetupInfo_o *v753; // x5
  FollowerInfo_o *v754; // x6
  PartyListViewItem_o *v755; // x7
  ViewQuestInfoMaster_o *v756; // x20
  int64_t v757; // x2
  int32_t v758; // w3
  System_String_o *v759; // x4
  BattleSetupInfo_o *v760; // x5
  FollowerInfo_o *v761; // x6
  PartyListViewItem_o *v762; // x7
  ViewEnemyMaster_o *v763; // x20
  int64_t v764; // x2
  int32_t v765; // w3
  System_String_o *v766; // x4
  BattleSetupInfo_o *v767; // x5
  FollowerInfo_o *v768; // x6
  PartyListViewItem_o *v769; // x7
  ViewQuestEnemyInfoMaster_o *v770; // x20
  int64_t v771; // x2
  int32_t v772; // w3
  System_String_o *v773; // x4
  BattleSetupInfo_o *v774; // x5
  FollowerInfo_o *v775; // x6
  PartyListViewItem_o *v776; // x7
  BlankEarthSpotMaster_o *v777; // x20
  int64_t v778; // x2
  int32_t v779; // w3
  System_String_o *v780; // x4
  BattleSetupInfo_o *v781; // x5
  FollowerInfo_o *v782; // x6
  PartyListViewItem_o *v783; // x7
  BlankEarthSpotAddMaster_o *v784; // x20
  int64_t v785; // x2
  int32_t v786; // w3
  System_String_o *v787; // x4
  BattleSetupInfo_o *v788; // x5
  FollowerInfo_o *v789; // x6
  PartyListViewItem_o *v790; // x7
  SpotMaster_o *v791; // x20
  int64_t v792; // x2
  int32_t v793; // w3
  System_String_o *v794; // x4
  BattleSetupInfo_o *v795; // x5
  FollowerInfo_o *v796; // x6
  PartyListViewItem_o *v797; // x7
  SpotImageMaster_o *v798; // x20
  int64_t v799; // x2
  int32_t v800; // w3
  System_String_o *v801; // x4
  BattleSetupInfo_o *v802; // x5
  FollowerInfo_o *v803; // x6
  PartyListViewItem_o *v804; // x7
  SpotRoadMaster_o *v805; // x20
  int64_t v806; // x2
  int32_t v807; // w3
  System_String_o *v808; // x4
  BattleSetupInfo_o *v809; // x5
  FollowerInfo_o *v810; // x6
  PartyListViewItem_o *v811; // x7
  SpotPathMaster_o *v812; // x20
  int64_t v813; // x2
  int32_t v814; // w3
  System_String_o *v815; // x4
  BattleSetupInfo_o *v816; // x5
  FollowerInfo_o *v817; // x6
  PartyListViewItem_o *v818; // x7
  SpotAddMaster_o *v819; // x20
  int64_t v820; // x2
  int32_t v821; // w3
  System_String_o *v822; // x4
  BattleSetupInfo_o *v823; // x5
  FollowerInfo_o *v824; // x6
  PartyListViewItem_o *v825; // x7
  MapGimmickMaster_o *v826; // x20
  int64_t v827; // x2
  int32_t v828; // w3
  System_String_o *v829; // x4
  BattleSetupInfo_o *v830; // x5
  FollowerInfo_o *v831; // x6
  PartyListViewItem_o *v832; // x7
  GiftMaster_o *v833; // x20
  int64_t v834; // x2
  int32_t v835; // w3
  System_String_o *v836; // x4
  BattleSetupInfo_o *v837; // x5
  FollowerInfo_o *v838; // x6
  PartyListViewItem_o *v839; // x7
  GiftAddMaster_o *v840; // x20
  int64_t v841; // x2
  int32_t v842; // w3
  System_String_o *v843; // x4
  BattleSetupInfo_o *v844; // x5
  FollowerInfo_o *v845; // x6
  PartyListViewItem_o *v846; // x7
  ShopMaster_o *v847; // x20
  int64_t v848; // x2
  int32_t v849; // w3
  System_String_o *v850; // x4
  BattleSetupInfo_o *v851; // x5
  FollowerInfo_o *v852; // x6
  PartyListViewItem_o *v853; // x7
  StoneShopMaster_o *v854; // x20
  int64_t v855; // x2
  int32_t v856; // w3
  System_String_o *v857; // x4
  BattleSetupInfo_o *v858; // x5
  FollowerInfo_o *v859; // x6
  PartyListViewItem_o *v860; // x7
  BankShopMaster_o *v861; // x20
  int64_t v862; // x2
  int32_t v863; // w3
  System_String_o *v864; // x4
  BattleSetupInfo_o *v865; // x5
  FollowerInfo_o *v866; // x6
  PartyListViewItem_o *v867; // x7
  ShopScriptMaster_o *v868; // x20
  int64_t v869; // x2
  int32_t v870; // w3
  System_String_o *v871; // x4
  BattleSetupInfo_o *v872; // x5
  FollowerInfo_o *v873; // x6
  PartyListViewItem_o *v874; // x7
  StageMaster_o *v875; // x20
  int64_t v876; // x2
  int32_t v877; // w3
  System_String_o *v878; // x4
  BattleSetupInfo_o *v879; // x5
  FollowerInfo_o *v880; // x6
  PartyListViewItem_o *v881; // x7
  ServantGroupMaster_o *v882; // x20
  int64_t v883; // x2
  int32_t v884; // w3
  System_String_o *v885; // x4
  BattleSetupInfo_o *v886; // x5
  FollowerInfo_o *v887; // x6
  PartyListViewItem_o *v888; // x7
  ServantLimitMaster_o *v889; // x20
  int64_t v890; // x2
  int32_t v891; // w3
  System_String_o *v892; // x4
  BattleSetupInfo_o *v893; // x5
  FollowerInfo_o *v894; // x6
  PartyListViewItem_o *v895; // x7
  ServantLimitAddMaster_o *v896; // x20
  int64_t v897; // x2
  int32_t v898; // w3
  System_String_o *v899; // x4
  BattleSetupInfo_o *v900; // x5
  FollowerInfo_o *v901; // x6
  PartyListViewItem_o *v902; // x7
  ServantSkillMaster_o *v903; // x20
  int64_t v904; // x2
  int32_t v905; // w3
  System_String_o *v906; // x4
  BattleSetupInfo_o *v907; // x5
  FollowerInfo_o *v908; // x6
  PartyListViewItem_o *v909; // x7
  ServantPassiveSkillMaster_o *v910; // x20
  int64_t v911; // x2
  int32_t v912; // w3
  System_String_o *v913; // x4
  BattleSetupInfo_o *v914; // x5
  FollowerInfo_o *v915; // x6
  PartyListViewItem_o *v916; // x7
  BgmMaster_o *v917; // x20
  int64_t v918; // x2
  int32_t v919; // w3
  System_String_o *v920; // x4
  BattleSetupInfo_o *v921; // x5
  FollowerInfo_o *v922; // x6
  PartyListViewItem_o *v923; // x7
  ServantScriptMaster_o *v924; // x20
  int64_t v925; // x2
  int32_t v926; // w3
  System_String_o *v927; // x4
  BattleSetupInfo_o *v928; // x5
  FollowerInfo_o *v929; // x6
  PartyListViewItem_o *v930; // x7
  NewsMaster_o *v931; // x20
  int64_t v932; // x2
  int32_t v933; // w3
  System_String_o *v934; // x4
  BattleSetupInfo_o *v935; // x5
  FollowerInfo_o *v936; // x6
  PartyListViewItem_o *v937; // x7
  TelopMaster_o *v938; // x20
  int64_t v939; // x2
  int32_t v940; // w3
  System_String_o *v941; // x4
  BattleSetupInfo_o *v942; // x5
  FollowerInfo_o *v943; // x6
  PartyListViewItem_o *v944; // x7
  UserExpMaster_o *v945; // x20
  int64_t v946; // x2
  int32_t v947; // w3
  System_String_o *v948; // x4
  BattleSetupInfo_o *v949; // x5
  FollowerInfo_o *v950; // x6
  PartyListViewItem_o *v951; // x7
  TreasureDvcMaster_o *v952; // x20
  int64_t v953; // x2
  int32_t v954; // w3
  System_String_o *v955; // x4
  BattleSetupInfo_o *v956; // x5
  FollowerInfo_o *v957; // x6
  PartyListViewItem_o *v958; // x7
  ServantTreasureDvcMaster_o *v959; // x20
  int64_t v960; // x2
  int32_t v961; // w3
  System_String_o *v962; // x4
  BattleSetupInfo_o *v963; // x5
  FollowerInfo_o *v964; // x6
  PartyListViewItem_o *v965; // x7
  SkillMaster_o *v966; // x20
  int64_t v967; // x2
  int32_t v968; // w3
  System_String_o *v969; // x4
  BattleSetupInfo_o *v970; // x5
  FollowerInfo_o *v971; // x6
  PartyListViewItem_o *v972; // x7
  SkillLvMaster_o *v973; // x20
  int64_t v974; // x2
  int32_t v975; // w3
  System_String_o *v976; // x4
  BattleSetupInfo_o *v977; // x5
  FollowerInfo_o *v978; // x6
  PartyListViewItem_o *v979; // x7
  SkillDetailMaster_o *v980; // x20
  int64_t v981; // x2
  int32_t v982; // w3
  System_String_o *v983; // x4
  BattleSetupInfo_o *v984; // x5
  FollowerInfo_o *v985; // x6
  PartyListViewItem_o *v986; // x7
  CommandSpellMaster_o *v987; // x20
  int64_t v988; // x2
  int32_t v989; // w3
  System_String_o *v990; // x4
  BattleSetupInfo_o *v991; // x5
  FollowerInfo_o *v992; // x6
  PartyListViewItem_o *v993; // x7
  EquipMaster_o *v994; // x20
  int64_t v995; // x2
  int32_t v996; // w3
  System_String_o *v997; // x4
  BattleSetupInfo_o *v998; // x5
  FollowerInfo_o *v999; // x6
  PartyListViewItem_o *v1000; // x7
  EquipExpMaster_o *v1001; // x20
  int64_t v1002; // x2
  int32_t v1003; // w3
  System_String_o *v1004; // x4
  BattleSetupInfo_o *v1005; // x5
  FollowerInfo_o *v1006; // x6
  PartyListViewItem_o *v1007; // x7
  EquipSkillMaster_o *v1008; // x20
  int64_t v1009; // x2
  int32_t v1010; // w3
  System_String_o *v1011; // x4
  BattleSetupInfo_o *v1012; // x5
  FollowerInfo_o *v1013; // x6
  PartyListViewItem_o *v1014; // x7
  SubEquipMaster_o *v1015; // x20
  int64_t v1016; // x2
  int32_t v1017; // w3
  System_String_o *v1018; // x4
  BattleSetupInfo_o *v1019; // x5
  FollowerInfo_o *v1020; // x6
  PartyListViewItem_o *v1021; // x7
  AccessaryMaster_o *v1022; // x20
  int64_t v1023; // x2
  int32_t v1024; // w3
  System_String_o *v1025; // x4
  BattleSetupInfo_o *v1026; // x5
  FollowerInfo_o *v1027; // x6
  PartyListViewItem_o *v1028; // x7
  UserPresentBoxMaster_o *v1029; // x20
  int64_t v1030; // x2
  int32_t v1031; // w3
  System_String_o *v1032; // x4
  BattleSetupInfo_o *v1033; // x5
  FollowerInfo_o *v1034; // x6
  PartyListViewItem_o *v1035; // x7
  UserDeckMaster_o *v1036; // x20
  int64_t v1037; // x2
  int32_t v1038; // w3
  System_String_o *v1039; // x4
  BattleSetupInfo_o *v1040; // x5
  FollowerInfo_o *v1041; // x6
  PartyListViewItem_o *v1042; // x7
  UserSubEquipMaster_o *v1043; // x20
  int64_t v1044; // x2
  int32_t v1045; // w3
  System_String_o *v1046; // x4
  BattleSetupInfo_o *v1047; // x5
  FollowerInfo_o *v1048; // x6
  PartyListViewItem_o *v1049; // x7
  GachaMaster_o *v1050; // x20
  int64_t v1051; // x2
  int32_t v1052; // w3
  System_String_o *v1053; // x4
  BattleSetupInfo_o *v1054; // x5
  FollowerInfo_o *v1055; // x6
  PartyListViewItem_o *v1056; // x7
  GachaImageMaster_o *v1057; // x20
  int64_t v1058; // x2
  int32_t v1059; // w3
  System_String_o *v1060; // x4
  BattleSetupInfo_o *v1061; // x5
  FollowerInfo_o *v1062; // x6
  PartyListViewItem_o *v1063; // x7
  UserGachaMaster_o *v1064; // x20
  int64_t v1065; // x2
  int32_t v1066; // w3
  System_String_o *v1067; // x4
  BattleSetupInfo_o *v1068; // x5
  FollowerInfo_o *v1069; // x6
  PartyListViewItem_o *v1070; // x7
  UserEquipMaster_o *v1071; // x20
  int64_t v1072; // x2
  int32_t v1073; // w3
  System_String_o *v1074; // x4
  BattleSetupInfo_o *v1075; // x5
  FollowerInfo_o *v1076; // x6
  PartyListViewItem_o *v1077; // x7
  UserServantCollectionMaster_o *v1078; // x20
  int64_t v1079; // x2
  int32_t v1080; // w3
  System_String_o *v1081; // x4
  BattleSetupInfo_o *v1082; // x5
  FollowerInfo_o *v1083; // x6
  PartyListViewItem_o *v1084; // x7
  FriendshipMaster_o *v1085; // x20
  int64_t v1086; // x2
  int32_t v1087; // w3
  System_String_o *v1088; // x4
  BattleSetupInfo_o *v1089; // x5
  FollowerInfo_o *v1090; // x6
  PartyListViewItem_o *v1091; // x7
  GachaTicketMaster_o *v1092; // x20
  int64_t v1093; // x2
  int32_t v1094; // w3
  System_String_o *v1095; // x4
  BattleSetupInfo_o *v1096; // x5
  FollowerInfo_o *v1097; // x6
  PartyListViewItem_o *v1098; // x7
  UserFormationMaster_o *v1099; // x20
  int64_t v1100; // x2
  int32_t v1101; // w3
  System_String_o *v1102; // x4
  BattleSetupInfo_o *v1103; // x5
  FollowerInfo_o *v1104; // x6
  PartyListViewItem_o *v1105; // x7
  FunctionMaster_o *v1106; // x20
  int64_t v1107; // x2
  int32_t v1108; // w3
  System_String_o *v1109; // x4
  BattleSetupInfo_o *v1110; // x5
  FollowerInfo_o *v1111; // x6
  PartyListViewItem_o *v1112; // x7
  BuffMaster_o *v1113; // x20
  int64_t v1114; // x2
  int32_t v1115; // w3
  System_String_o *v1116; // x4
  BattleSetupInfo_o *v1117; // x5
  FollowerInfo_o *v1118; // x6
  PartyListViewItem_o *v1119; // x7
  GachaReleaseMaster_o *v1120; // x20
  int64_t v1121; // x2
  int32_t v1122; // w3
  System_String_o *v1123; // x4
  BattleSetupInfo_o *v1124; // x5
  FollowerInfo_o *v1125; // x6
  PartyListViewItem_o *v1126; // x7
  CombineQpMaster_o *v1127; // x20
  int64_t v1128; // x2
  int32_t v1129; // w3
  System_String_o *v1130; // x4
  BattleSetupInfo_o *v1131; // x5
  FollowerInfo_o *v1132; // x6
  PartyListViewItem_o *v1133; // x7
  CombineMaterialMaster_o *v1134; // x20
  int64_t v1135; // x2
  int32_t v1136; // w3
  System_String_o *v1137; // x4
  BattleSetupInfo_o *v1138; // x5
  FollowerInfo_o *v1139; // x6
  PartyListViewItem_o *v1140; // x7
  EventCombineMaster_o *v1141; // x20
  int64_t v1142; // x2
  int32_t v1143; // w3
  System_String_o *v1144; // x4
  BattleSetupInfo_o *v1145; // x5
  FollowerInfo_o *v1146; // x6
  PartyListViewItem_o *v1147; // x7
  ServantExpMaster_o *v1148; // x20
  int64_t v1149; // x2
  int32_t v1150; // w3
  System_String_o *v1151; // x4
  BattleSetupInfo_o *v1152; // x5
  FollowerInfo_o *v1153; // x6
  PartyListViewItem_o *v1154; // x7
  CombineSkillMaster_o *v1155; // x20
  int64_t v1156; // x2
  int32_t v1157; // w3
  System_String_o *v1158; // x4
  BattleSetupInfo_o *v1159; // x5
  FollowerInfo_o *v1160; // x6
  PartyListViewItem_o *v1161; // x7
  CombineTdMaster_o *v1162; // x20
  int64_t v1163; // x2
  int32_t v1164; // w3
  System_String_o *v1165; // x4
  BattleSetupInfo_o *v1166; // x5
  FollowerInfo_o *v1167; // x6
  PartyListViewItem_o *v1168; // x7
  EventQuestMaster_o *v1169; // x20
  int64_t v1170; // x2
  int32_t v1171; // w3
  System_String_o *v1172; // x4
  BattleSetupInfo_o *v1173; // x5
  FollowerInfo_o *v1174; // x6
  PartyListViewItem_o *v1175; // x7
  EventCampaignMaster_o *v1176; // x20
  int64_t v1177; // x2
  int32_t v1178; // w3
  System_String_o *v1179; // x4
  BattleSetupInfo_o *v1180; // x5
  FollowerInfo_o *v1181; // x6
  PartyListViewItem_o *v1182; // x7
  IllustratorMaster_o *v1183; // x20
  int64_t v1184; // x2
  int32_t v1185; // w3
  System_String_o *v1186; // x4
  BattleSetupInfo_o *v1187; // x5
  FollowerInfo_o *v1188; // x6
  PartyListViewItem_o *v1189; // x7
  CvMaster_o *v1190; // x20
  int64_t v1191; // x2
  int32_t v1192; // w3
  System_String_o *v1193; // x4
  BattleSetupInfo_o *v1194; // x5
  FollowerInfo_o *v1195; // x6
  PartyListViewItem_o *v1196; // x7
  TreasureDvcLvMaster_o *v1197; // x20
  int64_t v1198; // x2
  int32_t v1199; // w3
  System_String_o *v1200; // x4
  BattleSetupInfo_o *v1201; // x5
  FollowerInfo_o *v1202; // x6
  PartyListViewItem_o *v1203; // x7
  TreasureDvcDetailMaster_o *v1204; // x20
  int64_t v1205; // x2
  int32_t v1206; // w3
  System_String_o *v1207; // x4
  BattleSetupInfo_o *v1208; // x5
  FollowerInfo_o *v1209; // x6
  PartyListViewItem_o *v1210; // x7
  UserFollowerMaster_o *v1211; // x20
  int64_t v1212; // x2
  int32_t v1213; // w3
  System_String_o *v1214; // x4
  BattleSetupInfo_o *v1215; // x5
  FollowerInfo_o *v1216; // x6
  PartyListViewItem_o *v1217; // x7
  NpcFollowerMaster_o *v1218; // x20
  int64_t v1219; // x2
  int32_t v1220; // w3
  System_String_o *v1221; // x4
  BattleSetupInfo_o *v1222; // x5
  FollowerInfo_o *v1223; // x6
  PartyListViewItem_o *v1224; // x7
  NpcServantFollowerMaster_o *v1225; // x20
  int64_t v1226; // x2
  int32_t v1227; // w3
  System_String_o *v1228; // x4
  BattleSetupInfo_o *v1229; // x5
  FollowerInfo_o *v1230; // x6
  PartyListViewItem_o *v1231; // x7
  UserEventMaster_o *v1232; // x20
  int64_t v1233; // x2
  int32_t v1234; // w3
  System_String_o *v1235; // x4
  BattleSetupInfo_o *v1236; // x5
  FollowerInfo_o *v1237; // x6
  PartyListViewItem_o *v1238; // x7
  UserShopMaster_o *v1239; // x20
  int64_t v1240; // x2
  int32_t v1241; // w3
  System_String_o *v1242; // x4
  BattleSetupInfo_o *v1243; // x5
  FollowerInfo_o *v1244; // x6
  PartyListViewItem_o *v1245; // x7
  UserContinueMaster_o *v1246; // x20
  int64_t v1247; // x2
  int32_t v1248; // w3
  System_String_o *v1249; // x4
  BattleSetupInfo_o *v1250; // x5
  FollowerInfo_o *v1251; // x6
  PartyListViewItem_o *v1252; // x7
  ConstantMaster_o *v1253; // x20
  int64_t v1254; // x2
  int32_t v1255; // w3
  System_String_o *v1256; // x4
  BattleSetupInfo_o *v1257; // x5
  FollowerInfo_o *v1258; // x6
  PartyListViewItem_o *v1259; // x7
  ConstantLongMaster_o *v1260; // x20
  int64_t v1261; // x2
  int32_t v1262; // w3
  System_String_o *v1263; // x4
  BattleSetupInfo_o *v1264; // x5
  FollowerInfo_o *v1265; // x6
  PartyListViewItem_o *v1266; // x7
  ConstantStrMaster_o *v1267; // x20
  int64_t v1268; // x2
  int32_t v1269; // w3
  System_String_o *v1270; // x4
  BattleSetupInfo_o *v1271; // x5
  FollowerInfo_o *v1272; // x6
  PartyListViewItem_o *v1273; // x7
  AiMaster_o *v1274; // x20
  int64_t v1275; // x2
  int32_t v1276; // w3
  System_String_o *v1277; // x4
  BattleSetupInfo_o *v1278; // x5
  FollowerInfo_o *v1279; // x6
  PartyListViewItem_o *v1280; // x7
  AiActMaster_o *v1281; // x20
  int64_t v1282; // x2
  int32_t v1283; // w3
  System_String_o *v1284; // x4
  BattleSetupInfo_o *v1285; // x5
  FollowerInfo_o *v1286; // x6
  PartyListViewItem_o *v1287; // x7
  AttriRelationMaster_o *v1288; // x20
  int64_t v1289; // x2
  int32_t v1290; // w3
  System_String_o *v1291; // x4
  BattleSetupInfo_o *v1292; // x5
  FollowerInfo_o *v1293; // x6
  PartyListViewItem_o *v1294; // x7
  ClassRelationMaster_o *v1295; // x20
  int64_t v1296; // x2
  int32_t v1297; // w3
  System_String_o *v1298; // x4
  BattleSetupInfo_o *v1299; // x5
  FollowerInfo_o *v1300; // x6
  PartyListViewItem_o *v1301; // x7
  EffectMaster_o *v1302; // x20
  int64_t v1303; // x2
  int32_t v1304; // w3
  System_String_o *v1305; // x4
  BattleSetupInfo_o *v1306; // x5
  FollowerInfo_o *v1307; // x6
  PartyListViewItem_o *v1308; // x7
  EquipImageMaster_o *v1309; // x20
  int64_t v1310; // x2
  int32_t v1311; // w3
  System_String_o *v1312; // x4
  BattleSetupInfo_o *v1313; // x5
  FollowerInfo_o *v1314; // x6
  PartyListViewItem_o *v1315; // x7
  ServantVoiceMaster_o *v1316; // x20
  int64_t v1317; // x2
  int32_t v1318; // w3
  System_String_o *v1319; // x4
  BattleSetupInfo_o *v1320; // x5
  FollowerInfo_o *v1321; // x6
  PartyListViewItem_o *v1322; // x7
  CombineLimitMaster_o *v1323; // x20
  int64_t v1324; // x2
  int32_t v1325; // w3
  System_String_o *v1326; // x4
  BattleSetupInfo_o *v1327; // x5
  FollowerInfo_o *v1328; // x6
  PartyListViewItem_o *v1329; // x7
  CardMaster_o *v1330; // x20
  int64_t v1331; // x2
  int32_t v1332; // w3
  System_String_o *v1333; // x4
  BattleSetupInfo_o *v1334; // x5
  FollowerInfo_o *v1335; // x6
  PartyListViewItem_o *v1336; // x7
  CombineQpSvtEquipMaster_o *v1337; // x20
  int64_t v1338; // x2
  int32_t v1339; // w3
  System_String_o *v1340; // x4
  BattleSetupInfo_o *v1341; // x5
  FollowerInfo_o *v1342; // x6
  PartyListViewItem_o *v1343; // x7
  ServantRarityMaster_o *v1344; // x20
  int64_t v1345; // x2
  int32_t v1346; // w3
  System_String_o *v1347; // x4
  BattleSetupInfo_o *v1348; // x5
  FollowerInfo_o *v1349; // x6
  PartyListViewItem_o *v1350; // x7
  SetItemMaster_o *v1351; // x20
  int64_t v1352; // x2
  int32_t v1353; // w3
  System_String_o *v1354; // x4
  BattleSetupInfo_o *v1355; // x5
  FollowerInfo_o *v1356; // x6
  PartyListViewItem_o *v1357; // x7
  RecoverMaster_o *v1358; // x20
  int64_t v1359; // x2
  int32_t v1360; // w3
  System_String_o *v1361; // x4
  BattleSetupInfo_o *v1362; // x5
  FollowerInfo_o *v1363; // x6
  PartyListViewItem_o *v1364; // x7
  BannerMaster_o *v1365; // x20
  int64_t v1366; // x2
  int32_t v1367; // w3
  System_String_o *v1368; // x4
  BattleSetupInfo_o *v1369; // x5
  FollowerInfo_o *v1370; // x6
  PartyListViewItem_o *v1371; // x7
  ShopReleaseMaster_o *v1372; // x20
  int64_t v1373; // x2
  int32_t v1374; // w3
  System_String_o *v1375; // x4
  BattleSetupInfo_o *v1376; // x5
  FollowerInfo_o *v1377; // x6
  PartyListViewItem_o *v1378; // x7
  EventRewardMaster_o *v1379; // x20
  int64_t v1380; // x2
  int32_t v1381; // w3
  System_String_o *v1382; // x4
  BattleSetupInfo_o *v1383; // x5
  FollowerInfo_o *v1384; // x6
  PartyListViewItem_o *v1385; // x7
  EventDetailMaster_o *v1386; // x20
  int64_t v1387; // x2
  int32_t v1388; // w3
  System_String_o *v1389; // x4
  BattleSetupInfo_o *v1390; // x5
  FollowerInfo_o *v1391; // x6
  PartyListViewItem_o *v1392; // x7
  EventServantMaster_o *v1393; // x20
  int64_t v1394; // x2
  int32_t v1395; // w3
  System_String_o *v1396; // x4
  BattleSetupInfo_o *v1397; // x5
  FollowerInfo_o *v1398; // x6
  PartyListViewItem_o *v1399; // x7
  BoxGachaMaster_o *v1400; // x20
  int64_t v1401; // x2
  int32_t v1402; // w3
  System_String_o *v1403; // x4
  BattleSetupInfo_o *v1404; // x5
  FollowerInfo_o *v1405; // x6
  PartyListViewItem_o *v1406; // x7
  BoxGachaBaseMaster_o *v1407; // x20
  int64_t v1408; // x2
  int32_t v1409; // w3
  System_String_o *v1410; // x4
  BattleSetupInfo_o *v1411; // x5
  FollowerInfo_o *v1412; // x6
  PartyListViewItem_o *v1413; // x7
  BoxGachaTalkMaster_o *v1414; // x20
  int64_t v1415; // x2
  int32_t v1416; // w3
  System_String_o *v1417; // x4
  BattleSetupInfo_o *v1418; // x5
  FollowerInfo_o *v1419; // x6
  PartyListViewItem_o *v1420; // x7
  UserBoxGachaMaster_o *v1421; // x20
  int64_t v1422; // x2
  int32_t v1423; // w3
  System_String_o *v1424; // x4
  BattleSetupInfo_o *v1425; // x5
  FollowerInfo_o *v1426; // x6
  PartyListViewItem_o *v1427; // x7
  BoxGachaHistoryMaster_o *v1428; // x20
  int64_t v1429; // x2
  int32_t v1430; // w3
  System_String_o *v1431; // x4
  BattleSetupInfo_o *v1432; // x5
  FollowerInfo_o *v1433; // x6
  PartyListViewItem_o *v1434; // x7
  BattleBgMaster_o *v1435; // x20
  int64_t v1436; // x2
  int32_t v1437; // w3
  System_String_o *v1438; // x4
  BattleSetupInfo_o *v1439; // x5
  FollowerInfo_o *v1440; // x6
  PartyListViewItem_o *v1441; // x7
  TipsBattleMaster_o *v1442; // x20
  int64_t v1443; // x2
  int32_t v1444; // w3
  System_String_o *v1445; // x4
  BattleSetupInfo_o *v1446; // x5
  FollowerInfo_o *v1447; // x6
  PartyListViewItem_o *v1448; // x7
  UserLoginMaster_o *v1449; // x20
  int64_t v1450; // x2
  int32_t v1451; // w3
  System_String_o *v1452; // x4
  BattleSetupInfo_o *v1453; // x5
  FollowerInfo_o *v1454; // x6
  PartyListViewItem_o *v1455; // x7
  VoiceMaster_o *v1456; // x20
  int64_t v1457; // x2
  int32_t v1458; // w3
  System_String_o *v1459; // x4
  BattleSetupInfo_o *v1460; // x5
  FollowerInfo_o *v1461; // x6
  PartyListViewItem_o *v1462; // x7
  EventRewardExtraMaster_o *v1463; // x20
  int64_t v1464; // x2
  int32_t v1465; // w3
  System_String_o *v1466; // x4
  BattleSetupInfo_o *v1467; // x5
  FollowerInfo_o *v1468; // x6
  PartyListViewItem_o *v1469; // x7
  EventMissionMaster_o *v1470; // x20
  int64_t v1471; // x2
  int32_t v1472; // w3
  System_String_o *v1473; // x4
  BattleSetupInfo_o *v1474; // x5
  FollowerInfo_o *v1475; // x6
  PartyListViewItem_o *v1476; // x7
  EventMissionActionMaster_o *v1477; // x20
  int64_t v1478; // x2
  int32_t v1479; // w3
  System_String_o *v1480; // x4
  BattleSetupInfo_o *v1481; // x5
  FollowerInfo_o *v1482; // x6
  PartyListViewItem_o *v1483; // x7
  EventMissionActionAddMaster_o *v1484; // x20
  int64_t v1485; // x2
  int32_t v1486; // w3
  System_String_o *v1487; // x4
  BattleSetupInfo_o *v1488; // x5
  FollowerInfo_o *v1489; // x6
  PartyListViewItem_o *v1490; // x7
  EventMissionConditionMaster_o *v1491; // x20
  int64_t v1492; // x2
  int32_t v1493; // w3
  System_String_o *v1494; // x4
  BattleSetupInfo_o *v1495; // x5
  FollowerInfo_o *v1496; // x6
  PartyListViewItem_o *v1497; // x7
  EventMissionCondDetailMaster_o *v1498; // x20
  int64_t v1499; // x2
  int32_t v1500; // w3
  System_String_o *v1501; // x4
  BattleSetupInfo_o *v1502; // x5
  FollowerInfo_o *v1503; // x6
  PartyListViewItem_o *v1504; // x7
  EventMissionAddMaster_o *v1505; // x20
  int64_t v1506; // x2
  int32_t v1507; // w3
  System_String_o *v1508; // x4
  BattleSetupInfo_o *v1509; // x5
  FollowerInfo_o *v1510; // x6
  PartyListViewItem_o *v1511; // x7
  CompleteMissionMaster_o *v1512; // x20
  int64_t v1513; // x2
  int32_t v1514; // w3
  System_String_o *v1515; // x4
  BattleSetupInfo_o *v1516; // x5
  FollowerInfo_o *v1517; // x6
  PartyListViewItem_o *v1518; // x7
  EventRewardSetMaster_o *v1519; // x20
  int64_t v1520; // x2
  int32_t v1521; // w3
  System_String_o *v1522; // x4
  BattleSetupInfo_o *v1523; // x5
  FollowerInfo_o *v1524; // x6
  PartyListViewItem_o *v1525; // x7
  UserEventMissionMaster_o *v1526; // x20
  int64_t v1527; // x2
  int32_t v1528; // w3
  System_String_o *v1529; // x4
  BattleSetupInfo_o *v1530; // x5
  FollowerInfo_o *v1531; // x6
  PartyListViewItem_o *v1532; // x7
  UserEventMissionCondDetailMaster_o *v1533; // x20
  int64_t v1534; // x2
  int32_t v1535; // w3
  System_String_o *v1536; // x4
  BattleSetupInfo_o *v1537; // x5
  FollowerInfo_o *v1538; // x6
  PartyListViewItem_o *v1539; // x7
  BoxGachaBaseDetailMaster_o *v1540; // x20
  int64_t v1541; // x2
  int32_t v1542; // w3
  System_String_o *v1543; // x4
  BattleSetupInfo_o *v1544; // x5
  FollowerInfo_o *v1545; // x6
  PartyListViewItem_o *v1546; // x7
  UserServantLeaderMaster_o *v1547; // x20
  int64_t v1548; // x2
  int32_t v1549; // w3
  System_String_o *v1550; // x4
  BattleSetupInfo_o *v1551; // x5
  FollowerInfo_o *v1552; // x6
  PartyListViewItem_o *v1553; // x7
  ClosedMessageMaster_o *v1554; // x20
  int64_t v1555; // x2
  int32_t v1556; // w3
  System_String_o *v1557; // x4
  BattleSetupInfo_o *v1558; // x5
  FollowerInfo_o *v1559; // x6
  PartyListViewItem_o *v1560; // x7
  FunctionGroupMaster_o *v1561; // x20
  int64_t v1562; // x2
  int32_t v1563; // w3
  System_String_o *v1564; // x4
  BattleSetupInfo_o *v1565; // x5
  FollowerInfo_o *v1566; // x6
  PartyListViewItem_o *v1567; // x7
  EventRaidMaster_o *v1568; // x20
  int64_t v1569; // x2
  int32_t v1570; // w3
  System_String_o *v1571; // x4
  BattleSetupInfo_o *v1572; // x5
  FollowerInfo_o *v1573; // x6
  PartyListViewItem_o *v1574; // x7
  TotalEventRaidMaster_o *v1575; // x20
  int64_t v1576; // x2
  int32_t v1577; // w3
  System_String_o *v1578; // x4
  BattleSetupInfo_o *v1579; // x5
  FollowerInfo_o *v1580; // x6
  PartyListViewItem_o *v1581; // x7
  UserEventRaidMaster_o *v1582; // x20
  int64_t v1583; // x2
  int32_t v1584; // w3
  System_String_o *v1585; // x4
  BattleSetupInfo_o *v1586; // x5
  FollowerInfo_o *v1587; // x6
  PartyListViewItem_o *v1588; // x7
  EventPointMaster_o *v1589; // x20
  int64_t v1590; // x2
  int32_t v1591; // w3
  System_String_o *v1592; // x4
  BattleSetupInfo_o *v1593; // x5
  FollowerInfo_o *v1594; // x6
  PartyListViewItem_o *v1595; // x7
  EventPointGroupMaster_o *v1596; // x20
  int64_t v1597; // x2
  int32_t v1598; // w3
  System_String_o *v1599; // x4
  BattleSetupInfo_o *v1600; // x5
  FollowerInfo_o *v1601; // x6
  PartyListViewItem_o *v1602; // x7
  TotalEventPointMaster_o *v1603; // x20
  int64_t v1604; // x2
  int32_t v1605; // w3
  System_String_o *v1606; // x4
  BattleSetupInfo_o *v1607; // x5
  FollowerInfo_o *v1608; // x6
  PartyListViewItem_o *v1609; // x7
  UserEventPointMaster_o *v1610; // x20
  int64_t v1611; // x2
  int32_t v1612; // w3
  System_String_o *v1613; // x4
  BattleSetupInfo_o *v1614; // x5
  FollowerInfo_o *v1615; // x6
  PartyListViewItem_o *v1616; // x7
  EventPointUpperMaster_o *v1617; // x20
  int64_t v1618; // x2
  int32_t v1619; // w3
  System_String_o *v1620; // x4
  BattleSetupInfo_o *v1621; // x5
  FollowerInfo_o *v1622; // x6
  PartyListViewItem_o *v1623; // x7
  EventPointUpperReleaseMaster_o *v1624; // x20
  int64_t v1625; // x2
  int32_t v1626; // w3
  System_String_o *v1627; // x4
  BattleSetupInfo_o *v1628; // x5
  FollowerInfo_o *v1629; // x6
  PartyListViewItem_o *v1630; // x7
  EventRaceMaster_o *v1631; // x20
  int64_t v1632; // x2
  int32_t v1633; // w3
  System_String_o *v1634; // x4
  BattleSetupInfo_o *v1635; // x5
  FollowerInfo_o *v1636; // x6
  PartyListViewItem_o *v1637; // x7
  EventRaceResultMaster_o *v1638; // x20
  int64_t v1639; // x2
  int32_t v1640; // w3
  System_String_o *v1641; // x4
  BattleSetupInfo_o *v1642; // x5
  FollowerInfo_o *v1643; // x6
  PartyListViewItem_o *v1644; // x7
  QuestRacePointMaster_o *v1645; // x20
  int64_t v1646; // x2
  int32_t v1647; // w3
  System_String_o *v1648; // x4
  BattleSetupInfo_o *v1649; // x5
  FollowerInfo_o *v1650; // x6
  PartyListViewItem_o *v1651; // x7
  UserEventRaceMaster_o *v1652; // x20
  int64_t v1653; // x2
  int32_t v1654; // w3
  System_String_o *v1655; // x4
  BattleSetupInfo_o *v1656; // x5
  FollowerInfo_o *v1657; // x6
  PartyListViewItem_o *v1658; // x7
  EventScriptMaster_o *v1659; // x20
  int64_t v1660; // x2
  int32_t v1661; // w3
  System_String_o *v1662; // x4
  BattleSetupInfo_o *v1663; // x5
  FollowerInfo_o *v1664; // x6
  PartyListViewItem_o *v1665; // x7
  EventScriptReleaseMaster_o *v1666; // x20
  int64_t v1667; // x2
  int32_t v1668; // w3
  System_String_o *v1669; // x4
  BattleSetupInfo_o *v1670; // x5
  FollowerInfo_o *v1671; // x6
  PartyListViewItem_o *v1672; // x7
  UserPresentHistoryMaster_o *v1673; // x20
  int64_t v1674; // x2
  int32_t v1675; // w3
  System_String_o *v1676; // x4
  BattleSetupInfo_o *v1677; // x5
  FollowerInfo_o *v1678; // x6
  PartyListViewItem_o *v1679; // x7
  MstMissionMaster_o *v1680; // x20
  int64_t v1681; // x2
  int32_t v1682; // w3
  System_String_o *v1683; // x4
  BattleSetupInfo_o *v1684; // x5
  FollowerInfo_o *v1685; // x6
  PartyListViewItem_o *v1686; // x7
  ServantExceedMaster_o *v1687; // x20
  int64_t v1688; // x2
  int32_t v1689; // w3
  System_String_o *v1690; // x4
  BattleSetupInfo_o *v1691; // x5
  FollowerInfo_o *v1692; // x6
  PartyListViewItem_o *v1693; // x7
  PartialMaintenanceMaster_o *v1694; // x20
  int64_t v1695; // x2
  int32_t v1696; // w3
  System_String_o *v1697; // x4
  BattleSetupInfo_o *v1698; // x5
  FollowerInfo_o *v1699; // x6
  PartyListViewItem_o *v1700; // x7
  GuideMaster_o *v1701; // x20
  int64_t v1702; // x2
  int32_t v1703; // w3
  System_String_o *v1704; // x4
  BattleSetupInfo_o *v1705; // x5
  FollowerInfo_o *v1706; // x6
  PartyListViewItem_o *v1707; // x7
  MstMissionDisplayInfoMaster_o *v1708; // x20
  int64_t v1709; // x2
  int32_t v1710; // w3
  System_String_o *v1711; // x4
  BattleSetupInfo_o *v1712; // x5
  FollowerInfo_o *v1713; // x6
  PartyListViewItem_o *v1714; // x7
  GachaGroupMaster_o *v1715; // x20
  int64_t v1716; // x2
  int32_t v1717; // w3
  System_String_o *v1718; // x4
  BattleSetupInfo_o *v1719; // x5
  FollowerInfo_o *v1720; // x6
  PartyListViewItem_o *v1721; // x7
  QuestResetMaster_o *v1722; // x20
  int64_t v1723; // x2
  int32_t v1724; // w3
  System_String_o *v1725; // x4
  BattleSetupInfo_o *v1726; // x5
  FollowerInfo_o *v1727; // x6
  PartyListViewItem_o *v1728; // x7
  WarAddMaster_o *v1729; // x20
  int64_t v1730; // x2
  int32_t v1731; // w3
  System_String_o *v1732; // x4
  BattleSetupInfo_o *v1733; // x5
  FollowerInfo_o *v1734; // x6
  PartyListViewItem_o *v1735; // x7
  EventItemDisplayMaster_o *v1736; // x20
  int64_t v1737; // x2
  int32_t v1738; // w3
  System_String_o *v1739; // x4
  BattleSetupInfo_o *v1740; // x5
  FollowerInfo_o *v1741; // x6
  PartyListViewItem_o *v1742; // x7
  EventItemDisplayGroupMaster_o *v1743; // x20
  int64_t v1744; // x2
  int32_t v1745; // w3
  System_String_o *v1746; // x4
  BattleSetupInfo_o *v1747; // x5
  FollowerInfo_o *v1748; // x6
  PartyListViewItem_o *v1749; // x7
  EventItemDisplayReleaseMaster_o *v1750; // x20
  int64_t v1751; // x2
  int32_t v1752; // w3
  System_String_o *v1753; // x4
  BattleSetupInfo_o *v1754; // x5
  FollowerInfo_o *v1755; // x6
  PartyListViewItem_o *v1756; // x7
  EventTutorialMaster_o *v1757; // x20
  int64_t v1758; // x2
  int32_t v1759; // w3
  System_String_o *v1760; // x4
  BattleSetupInfo_o *v1761; // x5
  FollowerInfo_o *v1762; // x6
  PartyListViewItem_o *v1763; // x7
  EventTutorialCondMaster_o *v1764; // x20
  int64_t v1765; // x2
  int32_t v1766; // w3
  System_String_o *v1767; // x4
  BattleSetupInfo_o *v1768; // x5
  FollowerInfo_o *v1769; // x6
  PartyListViewItem_o *v1770; // x7
  VoiceReleaseMaster_o *v1771; // x20
  int64_t v1772; // x2
  int32_t v1773; // w3
  System_String_o *v1774; // x4
  BattleSetupInfo_o *v1775; // x5
  FollowerInfo_o *v1776; // x6
  PartyListViewItem_o *v1777; // x7
  EventSuperBossMaster_o *v1778; // x20
  int64_t v1779; // x2
  int32_t v1780; // w3
  System_String_o *v1781; // x4
  BattleSetupInfo_o *v1782; // x5
  FollowerInfo_o *v1783; // x6
  PartyListViewItem_o *v1784; // x7
  UserSuperBossMaster_o *v1785; // x20
  int64_t v1786; // x2
  int32_t v1787; // w3
  System_String_o *v1788; // x4
  BattleSetupInfo_o *v1789; // x5
  FollowerInfo_o *v1790; // x6
  PartyListViewItem_o *v1791; // x7
  QuestScriptMaster_o *v1792; // x20
  int64_t v1793; // x2
  int32_t v1794; // w3
  System_String_o *v1795; // x4
  BattleSetupInfo_o *v1796; // x5
  FollowerInfo_o *v1797; // x6
  PartyListViewItem_o *v1798; // x7
  QuestScriptReleaseMaster_o *v1799; // x20
  int64_t v1800; // x2
  int32_t v1801; // w3
  System_String_o *v1802; // x4
  BattleSetupInfo_o *v1803; // x5
  FollowerInfo_o *v1804; // x6
  PartyListViewItem_o *v1805; // x7
  MaterialFolderMaster_o *v1806; // x20
  int64_t v1807; // x2
  int32_t v1808; // w3
  System_String_o *v1809; // x4
  BattleSetupInfo_o *v1810; // x5
  FollowerInfo_o *v1811; // x6
  PartyListViewItem_o *v1812; // x7
  RestrictionMaster_o *v1813; // x20
  int64_t v1814; // x2
  int32_t v1815; // w3
  System_String_o *v1816; // x4
  BattleSetupInfo_o *v1817; // x5
  FollowerInfo_o *v1818; // x6
  PartyListViewItem_o *v1819; // x7
  QuestRestrictionMaster_o *v1820; // x20
  int64_t v1821; // x2
  int32_t v1822; // w3
  System_String_o *v1823; // x4
  BattleSetupInfo_o *v1824; // x5
  FollowerInfo_o *v1825; // x6
  PartyListViewItem_o *v1826; // x7
  ServantVoiceRelationMaster_o *v1827; // x20
  int64_t v1828; // x2
  int32_t v1829; // w3
  System_String_o *v1830; // x4
  BattleSetupInfo_o *v1831; // x5
  FollowerInfo_o *v1832; // x6
  PartyListViewItem_o *v1833; // x7
  ShopDetailMaster_o *v1834; // x20
  int64_t v1835; // x2
  int32_t v1836; // w3
  System_String_o *v1837; // x4
  BattleSetupInfo_o *v1838; // x5
  FollowerInfo_o *v1839; // x6
  PartyListViewItem_o *v1840; // x7
  ServantScriptAddMaster_o *v1841; // x20
  int64_t v1842; // x2
  int32_t v1843; // w3
  System_String_o *v1844; // x4
  BattleSetupInfo_o *v1845; // x5
  FollowerInfo_o *v1846; // x6
  PartyListViewItem_o *v1847; // x7
  CombineMaster_o *v1848; // x20
  int64_t v1849; // x2
  int32_t v1850; // w3
  System_String_o *v1851; // x4
  BattleSetupInfo_o *v1852; // x5
  FollowerInfo_o *v1853; // x6
  PartyListViewItem_o *v1854; // x7
  AiFieldMaster_o *v1855; // x20
  int64_t v1856; // x2
  int32_t v1857; // w3
  System_String_o *v1858; // x4
  BattleSetupInfo_o *v1859; // x5
  FollowerInfo_o *v1860; // x6
  PartyListViewItem_o *v1861; // x7
  ServantCommentAddMaster_o *v1862; // x20
  int64_t v1863; // x2
  int32_t v1864; // w3
  System_String_o *v1865; // x4
  BattleSetupInfo_o *v1866; // x5
  FollowerInfo_o *v1867; // x6
  PartyListViewItem_o *v1868; // x7
  EventFilterMaster_o *v1869; // x20
  int64_t v1870; // x2
  int32_t v1871; // w3
  System_String_o *v1872; // x4
  BattleSetupInfo_o *v1873; // x5
  FollowerInfo_o *v1874; // x6
  PartyListViewItem_o *v1875; // x7
  UserSupportDeckMaster_o *v1876; // x20
  int64_t v1877; // x2
  int32_t v1878; // w3
  System_String_o *v1879; // x4
  BattleSetupInfo_o *v1880; // x5
  FollowerInfo_o *v1881; // x6
  PartyListViewItem_o *v1882; // x7
  EventRewardSceneMaster_o *v1883; // x20
  int64_t v1884; // x2
  int32_t v1885; // w3
  System_String_o *v1886; // x4
  BattleSetupInfo_o *v1887; // x5
  FollowerInfo_o *v1888; // x6
  PartyListViewItem_o *v1889; // x7
  EventVoicePlayMaster_o *v1890; // x20
  int64_t v1891; // x2
  int32_t v1892; // w3
  System_String_o *v1893; // x4
  BattleSetupInfo_o *v1894; // x5
  FollowerInfo_o *v1895; // x6
  PartyListViewItem_o *v1896; // x7
  GachaSubMaster_o *v1897; // x20
  int64_t v1898; // x2
  int32_t v1899; // w3
  System_String_o *v1900; // x4
  BattleSetupInfo_o *v1901; // x5
  FollowerInfo_o *v1902; // x6
  PartyListViewItem_o *v1903; // x7
  GachaDetailMaster_o *v1904; // x20
  int64_t v1905; // x2
  int32_t v1906; // w3
  System_String_o *v1907; // x4
  BattleSetupInfo_o *v1908; // x5
  FollowerInfo_o *v1909; // x6
  PartyListViewItem_o *v1910; // x7
  GachaBaseCollateralMaster_o *v1911; // x20
  int64_t v1912; // x2
  int32_t v1913; // w3
  System_String_o *v1914; // x4
  BattleSetupInfo_o *v1915; // x5
  FollowerInfo_o *v1916; // x6
  PartyListViewItem_o *v1917; // x7
  GachaAdjustAddMaster_o *v1918; // x20
  int64_t v1919; // x2
  int32_t v1920; // w3
  System_String_o *v1921; // x4
  BattleSetupInfo_o *v1922; // x5
  FollowerInfo_o *v1923; // x6
  PartyListViewItem_o *v1924; // x7
  GachaBonusSelectMaster_o *v1925; // x20
  int64_t v1926; // x2
  int32_t v1927; // w3
  System_String_o *v1928; // x4
  BattleSetupInfo_o *v1929; // x5
  FollowerInfo_o *v1930; // x6
  PartyListViewItem_o *v1931; // x7
  GachaBonusSelectLineupMaster_o *v1932; // x20
  int64_t v1933; // x2
  int32_t v1934; // w3
  System_String_o *v1935; // x4
  BattleSetupInfo_o *v1936; // x5
  FollowerInfo_o *v1937; // x6
  PartyListViewItem_o *v1938; // x7
  ServantChangeMaster_o *v1939; // x20
  int64_t v1940; // x2
  int32_t v1941; // w3
  System_String_o *v1942; // x4
  BattleSetupInfo_o *v1943; // x5
  FollowerInfo_o *v1944; // x6
  PartyListViewItem_o *v1945; // x7
  VoiceCondMaster_o *v1946; // x20
  int64_t v1947; // x2
  int32_t v1948; // w3
  System_String_o *v1949; // x4
  BattleSetupInfo_o *v1950; // x5
  FollowerInfo_o *v1951; // x6
  PartyListViewItem_o *v1952; // x7
  BgmReleaseMaster_o *v1953; // x20
  int64_t v1954; // x2
  int32_t v1955; // w3
  System_String_o *v1956; // x4
  BattleSetupInfo_o *v1957; // x5
  FollowerInfo_o *v1958; // x6
  PartyListViewItem_o *v1959; // x7
  MyRoomAddMaster_o *v1960; // x20
  int64_t v1961; // x2
  int32_t v1962; // w3
  System_String_o *v1963; // x4
  BattleSetupInfo_o *v1964; // x5
  FollowerInfo_o *v1965; // x6
  PartyListViewItem_o *v1966; // x7
  ShopActionMaster_o *v1967; // x20
  int64_t v1968; // x2
  int32_t v1969; // w3
  System_String_o *v1970; // x4
  BattleSetupInfo_o *v1971; // x5
  FollowerInfo_o *v1972; // x6
  PartyListViewItem_o *v1973; // x7
  EventRewardSceneReleaseMaster_o *v1974; // x20
  int64_t v1975; // x2
  int32_t v1976; // w3
  System_String_o *v1977; // x4
  BattleSetupInfo_o *v1978; // x5
  FollowerInfo_o *v1979; // x6
  PartyListViewItem_o *v1980; // x7
  QuestBehaviorMaster_o *v1981; // x20
  int64_t v1982; // x2
  int32_t v1983; // w3
  System_String_o *v1984; // x4
  BattleSetupInfo_o *v1985; // x5
  FollowerInfo_o *v1986; // x6
  PartyListViewItem_o *v1987; // x7
  MapMaster_o *v1988; // x20
  int64_t v1989; // x2
  int32_t v1990; // w3
  System_String_o *v1991; // x4
  BattleSetupInfo_o *v1992; // x5
  FollowerInfo_o *v1993; // x6
  PartyListViewItem_o *v1994; // x7
  MapCondMaster_o *v1995; // x20
  int64_t v1996; // x2
  int32_t v1997; // w3
  System_String_o *v1998; // x4
  BattleSetupInfo_o *v1999; // x5
  FollowerInfo_o *v2000; // x6
  PartyListViewItem_o *v2001; // x7
  MapButtonMaster_o *v2002; // x20
  int64_t v2003; // x2
  int32_t v2004; // w3
  System_String_o *v2005; // x4
  BattleSetupInfo_o *v2006; // x5
  FollowerInfo_o *v2007; // x6
  PartyListViewItem_o *v2008; // x7
  BannerAddMaster_o *v2009; // x20
  int64_t v2010; // x2
  int32_t v2011; // w3
  System_String_o *v2012; // x4
  BattleSetupInfo_o *v2013; // x5
  FollowerInfo_o *v2014; // x6
  PartyListViewItem_o *v2015; // x7
  EventAddMaster_o *v2016; // x20
  int64_t v2017; // x2
  int32_t v2018; // w3
  System_String_o *v2019; // x4
  BattleSetupInfo_o *v2020; // x5
  FollowerInfo_o *v2021; // x6
  PartyListViewItem_o *v2022; // x7
  TotalLoginMaster_o *v2023; // x20
  int64_t v2024; // x2
  int32_t v2025; // w3
  System_String_o *v2026; // x4
  BattleSetupInfo_o *v2027; // x5
  FollowerInfo_o *v2028; // x6
  PartyListViewItem_o *v2029; // x7
  ServantFilterMaster_o *v2030; // x20
  int64_t v2031; // x2
  int32_t v2032; // w3
  System_String_o *v2033; // x4
  BattleSetupInfo_o *v2034; // x5
  FollowerInfo_o *v2035; // x6
  PartyListViewItem_o *v2036; // x7
  CombineCostumeMaster_o *v2037; // x20
  int64_t v2038; // x2
  int32_t v2039; // w3
  System_String_o *v2040; // x4
  BattleSetupInfo_o *v2041; // x5
  FollowerInfo_o *v2042; // x6
  PartyListViewItem_o *v2043; // x7
  ServantCostumeMaster_o *v2044; // x20
  int64_t v2045; // x2
  int32_t v2046; // w3
  System_String_o *v2047; // x4
  BattleSetupInfo_o *v2048; // x5
  FollowerInfo_o *v2049; // x6
  PartyListViewItem_o *v2050; // x7
  ServantCostumeReleaseMaster_o *v2051; // x20
  int64_t v2052; // x2
  int32_t v2053; // w3
  System_String_o *v2054; // x4
  BattleSetupInfo_o *v2055; // x5
  FollowerInfo_o *v2056; // x6
  PartyListViewItem_o *v2057; // x7
  UserFriendRequestHistoryMaster_o *v2058; // x20
  int64_t v2059; // x2
  int32_t v2060; // w3
  System_String_o *v2061; // x4
  BattleSetupInfo_o *v2062; // x5
  FollowerInfo_o *v2063; // x6
  PartyListViewItem_o *v2064; // x7
  UserBlacklistMaster_o *v2065; // x20
  int64_t v2066; // x2
  int32_t v2067; // w3
  System_String_o *v2068; // x4
  BattleSetupInfo_o *v2069; // x5
  FollowerInfo_o *v2070; // x6
  PartyListViewItem_o *v2071; // x7
  ItemSelectMaster_o *v2072; // x20
  int64_t v2073; // x2
  int32_t v2074; // w3
  System_String_o *v2075; // x4
  BattleSetupInfo_o *v2076; // x5
  FollowerInfo_o *v2077; // x6
  PartyListViewItem_o *v2078; // x7
  TotalEventRaceMaster_o *v2079; // x20
  int64_t v2080; // x2
  int32_t v2081; // w3
  System_String_o *v2082; // x4
  BattleSetupInfo_o *v2083; // x5
  FollowerInfo_o *v2084; // x6
  PartyListViewItem_o *v2085; // x7
  EventPointGroupAddMaster_o *v2086; // x20
  int64_t v2087; // x2
  int32_t v2088; // w3
  System_String_o *v2089; // x4
  BattleSetupInfo_o *v2090; // x5
  FollowerInfo_o *v2091; // x6
  PartyListViewItem_o *v2092; // x7
  VoicePlayGroupMaster_o *v2093; // x20
  int64_t v2094; // x2
  int32_t v2095; // w3
  System_String_o *v2096; // x4
  BattleSetupInfo_o *v2097; // x5
  FollowerInfo_o *v2098; // x6
  PartyListViewItem_o *v2099; // x7
  VoicePlayCondMaster_o *v2100; // x20
  int64_t v2101; // x2
  int32_t v2102; // w3
  System_String_o *v2103; // x4
  BattleSetupInfo_o *v2104; // x5
  FollowerInfo_o *v2105; // x6
  PartyListViewItem_o *v2106; // x7
  GachaStoryAdjustMaster_o *v2107; // x20
  int64_t v2108; // x2
  int32_t v2109; // w3
  System_String_o *v2110; // x4
  BattleSetupInfo_o *v2111; // x5
  FollowerInfo_o *v2112; // x6
  PartyListViewItem_o *v2113; // x7
  ServantFlagMaster_o *v2114; // x20
  int64_t v2115; // x2
  int32_t v2116; // w3
  System_String_o *v2117; // x4
  BattleSetupInfo_o *v2118; // x5
  FollowerInfo_o *v2119; // x6
  PartyListViewItem_o *v2120; // x7
  ServantFlagReleaseMaster_o *v2121; // x20
  int64_t v2122; // x2
  int32_t v2123; // w3
  System_String_o *v2124; // x4
  BattleSetupInfo_o *v2125; // x5
  FollowerInfo_o *v2126; // x6
  PartyListViewItem_o *v2127; // x7
  EventLocationCampaignMaster_o *v2128; // x20
  int64_t v2129; // x2
  int32_t v2130; // w3
  System_String_o *v2131; // x4
  BattleSetupInfo_o *v2132; // x5
  FollowerInfo_o *v2133; // x6
  PartyListViewItem_o *v2134; // x7
  CampaignInfoMaster_o *v2135; // x20
  int64_t v2136; // x2
  int32_t v2137; // w3
  System_String_o *v2138; // x4
  BattleSetupInfo_o *v2139; // x5
  FollowerInfo_o *v2140; // x6
  PartyListViewItem_o *v2141; // x7
  DialogMessageMaster_o *v2142; // x20
  int64_t v2143; // x2
  int32_t v2144; // w3
  System_String_o *v2145; // x4
  BattleSetupInfo_o *v2146; // x5
  FollowerInfo_o *v2147; // x6
  PartyListViewItem_o *v2148; // x7
  ServantIndividualityMaster_o *v2149; // x20
  int64_t v2150; // x2
  int32_t v2151; // w3
  System_String_o *v2152; // x4
  BattleSetupInfo_o *v2153; // x5
  FollowerInfo_o *v2154; // x6
  PartyListViewItem_o *v2155; // x7
  BoardMessageMaster_o *v2156; // x20
  int64_t v2157; // x2
  int32_t v2158; // w3
  System_String_o *v2159; // x4
  BattleSetupInfo_o *v2160; // x5
  FollowerInfo_o *v2161; // x6
  PartyListViewItem_o *v2162; // x7
  BoardMessageReleaseMaster_o *v2163; // x20
  int64_t v2164; // x2
  int32_t v2165; // w3
  System_String_o *v2166; // x4
  BattleSetupInfo_o *v2167; // x5
  FollowerInfo_o *v2168; // x6
  PartyListViewItem_o *v2169; // x7
  EventServantFatigueMaster_o *v2170; // x20
  int64_t v2171; // x2
  int32_t v2172; // w3
  System_String_o *v2173; // x4
  BattleSetupInfo_o *v2174; // x5
  FollowerInfo_o *v2175; // x6
  PartyListViewItem_o *v2176; // x7
  UserEventDeckMaster_o *v2177; // x20
  int64_t v2178; // x2
  int32_t v2179; // w3
  System_String_o *v2180; // x4
  BattleSetupInfo_o *v2181; // x5
  FollowerInfo_o *v2182; // x6
  PartyListViewItem_o *v2183; // x7
  EventTowerMaster_o *v2184; // x20
  int64_t v2185; // x2
  int32_t v2186; // w3
  System_String_o *v2187; // x4
  BattleSetupInfo_o *v2188; // x5
  FollowerInfo_o *v2189; // x6
  PartyListViewItem_o *v2190; // x7
  EventTowerRewardMaster_o *v2191; // x20
  int64_t v2192; // x2
  int32_t v2193; // w3
  System_String_o *v2194; // x4
  BattleSetupInfo_o *v2195; // x5
  FollowerInfo_o *v2196; // x6
  PartyListViewItem_o *v2197; // x7
  EventBulletinBoardMaster_o *v2198; // x20
  int64_t v2199; // x2
  int32_t v2200; // w3
  System_String_o *v2201; // x4
  BattleSetupInfo_o *v2202; // x5
  FollowerInfo_o *v2203; // x6
  PartyListViewItem_o *v2204; // x7
  EventBulletinBoardReleaseMaster_o *v2205; // x20
  int64_t v2206; // x2
  int32_t v2207; // w3
  System_String_o *v2208; // x4
  BattleSetupInfo_o *v2209; // x5
  FollowerInfo_o *v2210; // x6
  PartyListViewItem_o *v2211; // x7
  EventFactoryMaster_o *v2212; // x20
  int64_t v2213; // x2
  int32_t v2214; // w3
  System_String_o *v2215; // x4
  BattleSetupInfo_o *v2216; // x5
  FollowerInfo_o *v2217; // x6
  PartyListViewItem_o *v2218; // x7
  ShopGroupMaster_o *v2219; // x20
  int64_t v2220; // x2
  int32_t v2221; // w3
  System_String_o *v2222; // x4
  BattleSetupInfo_o *v2223; // x5
  FollowerInfo_o *v2224; // x6
  PartyListViewItem_o *v2225; // x7
  AuraEffectMaster_o *v2226; // x20
  int64_t v2227; // x2
  int32_t v2228; // w3
  System_String_o *v2229; // x4
  BattleSetupInfo_o *v2230; // x5
  FollowerInfo_o *v2231; // x6
  PartyListViewItem_o *v2232; // x7
  AuraEffectPosOverwriteMaster_o *v2233; // x20
  int64_t v2234; // x2
  int32_t v2235; // w3
  System_String_o *v2236; // x4
  BattleSetupInfo_o *v2237; // x5
  FollowerInfo_o *v2238; // x6
  PartyListViewItem_o *v2239; // x7
  UserEventMissionFixMaster_o *v2240; // x20
  int64_t v2241; // x2
  int32_t v2242; // w3
  System_String_o *v2243; // x4
  BattleSetupInfo_o *v2244; // x5
  FollowerInfo_o *v2245; // x6
  PartyListViewItem_o *v2246; // x7
  NotEndEventMissionFixMaster_o *v2247; // x20
  int64_t v2248; // x2
  int32_t v2249; // w3
  System_String_o *v2250; // x4
  BattleSetupInfo_o *v2251; // x5
  FollowerInfo_o *v2252; // x6
  PartyListViewItem_o *v2253; // x7
  EnemyMstMaster_o *v2254; // x20
  int64_t v2255; // x2
  int32_t v2256; // w3
  System_String_o *v2257; // x4
  BattleSetupInfo_o *v2258; // x5
  FollowerInfo_o *v2259; // x6
  PartyListViewItem_o *v2260; // x7
  EnemyMstBattleMaster_o *v2261; // x20
  int64_t v2262; // x2
  int32_t v2263; // w3
  System_String_o *v2264; // x4
  BattleSetupInfo_o *v2265; // x5
  FollowerInfo_o *v2266; // x6
  PartyListViewItem_o *v2267; // x7
  ServantSkillReleaseMaster_o *v2268; // x20
  int64_t v2269; // x2
  int32_t v2270; // w3
  System_String_o *v2271; // x4
  BattleSetupInfo_o *v2272; // x5
  FollowerInfo_o *v2273; // x6
  PartyListViewItem_o *v2274; // x7
  ServantPassiveSkillReleaseMaster_o *v2275; // x20
  int64_t v2276; // x2
  int32_t v2277; // w3
  System_String_o *v2278; // x4
  BattleSetupInfo_o *v2279; // x5
  FollowerInfo_o *v2280; // x6
  PartyListViewItem_o *v2281; // x7
  ServantTreasureDeviceReleaseMaster_o *v2282; // x20
  int64_t v2283; // x2
  int32_t v2284; // w3
  System_String_o *v2285; // x4
  BattleSetupInfo_o *v2286; // x5
  FollowerInfo_o *v2287; // x6
  PartyListViewItem_o *v2288; // x7
  MapGimmickReleaseMaster_o *v2289; // x20
  int64_t v2290; // x2
  int32_t v2291; // w3
  System_String_o *v2292; // x4
  BattleSetupInfo_o *v2293; // x5
  FollowerInfo_o *v2294; // x6
  PartyListViewItem_o *v2295; // x7
  CommandCodeMaster_o *v2296; // x20
  int64_t v2297; // x2
  int32_t v2298; // w3
  System_String_o *v2299; // x4
  BattleSetupInfo_o *v2300; // x5
  FollowerInfo_o *v2301; // x6
  PartyListViewItem_o *v2302; // x7
  ServantCommandCodeUnlockMaster_o *v2303; // x20
  int64_t v2304; // x2
  int32_t v2305; // w3
  System_String_o *v2306; // x4
  BattleSetupInfo_o *v2307; // x5
  FollowerInfo_o *v2308; // x6
  PartyListViewItem_o *v2309; // x7
  UserCommandCodeMaster_o *v2310; // x20
  int64_t v2311; // x2
  int32_t v2312; // w3
  System_String_o *v2313; // x4
  BattleSetupInfo_o *v2314; // x5
  FollowerInfo_o *v2315; // x6
  PartyListViewItem_o *v2316; // x7
  UserCommandCodeCollectionMaster_o *v2317; // x20
  int64_t v2318; // x2
  int32_t v2319; // w3
  System_String_o *v2320; // x4
  BattleSetupInfo_o *v2321; // x5
  FollowerInfo_o *v2322; // x6
  PartyListViewItem_o *v2323; // x7
  UserServantCommandCodeMaster_o *v2324; // x20
  int64_t v2325; // x2
  int32_t v2326; // w3
  System_String_o *v2327; // x4
  BattleSetupInfo_o *v2328; // x5
  FollowerInfo_o *v2329; // x6
  PartyListViewItem_o *v2330; // x7
  UserServantCommandCardMaster_o *v2331; // x20
  int64_t v2332; // x2
  int32_t v2333; // w3
  System_String_o *v2334; // x4
  BattleSetupInfo_o *v2335; // x5
  FollowerInfo_o *v2336; // x6
  PartyListViewItem_o *v2337; // x7
  CommandCardRankParamMaster_o *v2338; // x20
  int64_t v2339; // x2
  int32_t v2340; // w3
  System_String_o *v2341; // x4
  BattleSetupInfo_o *v2342; // x5
  FollowerInfo_o *v2343; // x6
  PartyListViewItem_o *v2344; // x7
  CommandCodeSkillMaster_o *v2345; // x20
  int64_t v2346; // x2
  int32_t v2347; // w3
  System_String_o *v2348; // x4
  BattleSetupInfo_o *v2349; // x5
  FollowerInfo_o *v2350; // x6
  PartyListViewItem_o *v2351; // x7
  CommandCodeSkillReleaseMaster_o *v2352; // x20
  int64_t v2353; // x2
  int32_t v2354; // w3
  System_String_o *v2355; // x4
  BattleSetupInfo_o *v2356; // x5
  FollowerInfo_o *v2357; // x6
  PartyListViewItem_o *v2358; // x7
  CommandCodeCommentMaster_o *v2359; // x20
  int64_t v2360; // x2
  int32_t v2361; // w3
  System_String_o *v2362; // x4
  BattleSetupInfo_o *v2363; // x5
  FollowerInfo_o *v2364; // x6
  PartyListViewItem_o *v2365; // x7
  EventStatusMaster_o *v2366; // x20
  int64_t v2367; // x2
  int32_t v2368; // w3
  System_String_o *v2369; // x4
  BattleSetupInfo_o *v2370; // x5
  FollowerInfo_o *v2371; // x6
  PartyListViewItem_o *v2372; // x7
  EventStatusQuestMaster_o *v2373; // x20
  int64_t v2374; // x2
  int32_t v2375; // w3
  System_String_o *v2376; // x4
  BattleSetupInfo_o *v2377; // x5
  FollowerInfo_o *v2378; // x6
  PartyListViewItem_o *v2379; // x7
  CommonRestrictionMaster_o *v2380; // x20
  int64_t v2381; // x2
  int32_t v2382; // w3
  System_String_o *v2383; // x4
  BattleSetupInfo_o *v2384; // x5
  FollowerInfo_o *v2385; // x6
  PartyListViewItem_o *v2386; // x7
  EventPointBuffMaster_o *v2387; // x20
  int64_t v2388; // x2
  int32_t v2389; // w3
  System_String_o *v2390; // x4
  BattleSetupInfo_o *v2391; // x5
  FollowerInfo_o *v2392; // x6
  PartyListViewItem_o *v2393; // x7
  UserFollowMaster_o *v2394; // x20
  int64_t v2395; // x2
  int32_t v2396; // w3
  System_String_o *v2397; // x4
  BattleSetupInfo_o *v2398; // x5
  FollowerInfo_o *v2399; // x6
  PartyListViewItem_o *v2400; // x7
  EventRewardGuideReleaseMaster_o *v2401; // x20
  int64_t v2402; // x2
  int32_t v2403; // w3
  System_String_o *v2404; // x4
  BattleSetupInfo_o *v2405; // x5
  FollowerInfo_o *v2406; // x6
  PartyListViewItem_o *v2407; // x7
  NpcServantEquipMaster_o *v2408; // x20
  int64_t v2409; // x2
  int32_t v2410; // w3
  System_String_o *v2411; // x4
  BattleSetupInfo_o *v2412; // x5
  FollowerInfo_o *v2413; // x6
  PartyListViewItem_o *v2414; // x7
  EventCampaignReleaseMaster_o *v2415; // x20
  int64_t v2416; // x2
  int32_t v2417; // w3
  System_String_o *v2418; // x4
  BattleSetupInfo_o *v2419; // x5
  FollowerInfo_o *v2420; // x6
  PartyListViewItem_o *v2421; // x7
  ServantMaterialFolderMaster_o *v2422; // x20
  int64_t v2423; // x2
  int32_t v2424; // w3
  System_String_o *v2425; // x4
  BattleSetupInfo_o *v2426; // x5
  FollowerInfo_o *v2427; // x6
  PartyListViewItem_o *v2428; // x7
  EventEquipSkillReleaseMaster_o *v2429; // x20
  int64_t v2430; // x2
  int32_t v2431; // w3
  System_String_o *v2432; // x4
  BattleSetupInfo_o *v2433; // x5
  FollowerInfo_o *v2434; // x6
  PartyListViewItem_o *v2435; // x7
  EventPointActivityMaster_o *v2436; // x20
  int64_t v2437; // x2
  int32_t v2438; // w3
  System_String_o *v2439; // x4
  BattleSetupInfo_o *v2440; // x5
  FollowerInfo_o *v2441; // x6
  PartyListViewItem_o *v2442; // x7
  FunctionCategoryMaster_o *v2443; // x20
  int64_t v2444; // x2
  int32_t v2445; // w3
  System_String_o *v2446; // x4
  BattleSetupInfo_o *v2447; // x5
  FollowerInfo_o *v2448; // x6
  PartyListViewItem_o *v2449; // x7
  QuestPickupMaster_o *v2450; // x20
  int64_t v2451; // x2
  int32_t v2452; // w3
  System_String_o *v2453; // x4
  BattleSetupInfo_o *v2454; // x5
  FollowerInfo_o *v2455; // x6
  PartyListViewItem_o *v2456; // x7
  EventUiMaster_o *v2457; // x20
  int64_t v2458; // x2
  int32_t v2459; // w3
  System_String_o *v2460; // x4
  BattleSetupInfo_o *v2461; // x5
  FollowerInfo_o *v2462; // x6
  PartyListViewItem_o *v2463; // x7
  EventUiReleaseMaster_o *v2464; // x20
  int64_t v2465; // x2
  int32_t v2466; // w3
  System_String_o *v2467; // x4
  BattleSetupInfo_o *v2468; // x5
  FollowerInfo_o *v2469; // x6
  PartyListViewItem_o *v2470; // x7
  EventUiValueMaster_o *v2471; // x20
  int64_t v2472; // x2
  int32_t v2473; // w3
  System_String_o *v2474; // x4
  BattleSetupInfo_o *v2475; // x5
  FollowerInfo_o *v2476; // x6
  PartyListViewItem_o *v2477; // x7
  EventConquestRewardMaster_o *v2478; // x20
  int64_t v2479; // x2
  int32_t v2480; // w3
  System_String_o *v2481; // x4
  BattleSetupInfo_o *v2482; // x5
  FollowerInfo_o *v2483; // x6
  PartyListViewItem_o *v2484; // x7
  NpcFollowerReleaseMaster_o *v2485; // x20
  int64_t v2486; // x2
  int32_t v2487; // w3
  System_String_o *v2488; // x4
  BattleSetupInfo_o *v2489; // x5
  FollowerInfo_o *v2490; // x6
  PartyListViewItem_o *v2491; // x7
  EventBonusFilterMaster_o *v2492; // x20
  int64_t v2493; // x2
  int32_t v2494; // w3
  System_String_o *v2495; // x4
  BattleSetupInfo_o *v2496; // x5
  FollowerInfo_o *v2497; // x6
  PartyListViewItem_o *v2498; // x7
  EventBonusFilterGroupInfoMaster_o *v2499; // x20
  int64_t v2500; // x2
  int32_t v2501; // w3
  System_String_o *v2502; // x4
  BattleSetupInfo_o *v2503; // x5
  FollowerInfo_o *v2504; // x6
  PartyListViewItem_o *v2505; // x7
  EventBonusFilterGroupMemberMaster_o *v2506; // x20
  int64_t v2507; // x2
  int32_t v2508; // w3
  System_String_o *v2509; // x4
  BattleSetupInfo_o *v2510; // x5
  FollowerInfo_o *v2511; // x6
  PartyListViewItem_o *v2512; // x7
  UserGachaExtraCountMaster_o *v2513; // x20
  int64_t v2514; // x2
  int32_t v2515; // w3
  System_String_o *v2516; // x4
  BattleSetupInfo_o *v2517; // x5
  FollowerInfo_o *v2518; // x6
  PartyListViewItem_o *v2519; // x7
  PrivilegeMaster_o *v2520; // x20
  int64_t v2521; // x2
  int32_t v2522; // w3
  System_String_o *v2523; // x4
  BattleSetupInfo_o *v2524; // x5
  FollowerInfo_o *v2525; // x6
  PartyListViewItem_o *v2526; // x7
  UserPrivilegeMaster_o *v2527; // x20
  int64_t v2528; // x2
  int32_t v2529; // w3
  System_String_o *v2530; // x4
  BattleSetupInfo_o *v2531; // x5
  FollowerInfo_o *v2532; // x6
  PartyListViewItem_o *v2533; // x7
  UserQuestRouteMaster_o *v2534; // x20
  int64_t v2535; // x2
  int32_t v2536; // w3
  System_String_o *v2537; // x4
  BattleSetupInfo_o *v2538; // x5
  FollowerInfo_o *v2539; // x6
  PartyListViewItem_o *v2540; // x7
  EventBossStatusUiMaster_o *v2541; // x20
  int64_t v2542; // x2
  int32_t v2543; // w3
  System_String_o *v2544; // x4
  BattleSetupInfo_o *v2545; // x5
  FollowerInfo_o *v2546; // x6
  PartyListViewItem_o *v2547; // x7
  CommonReleaseMaster_o *v2548; // x20
  int64_t v2549; // x2
  int32_t v2550; // w3
  System_String_o *v2551; // x4
  BattleSetupInfo_o *v2552; // x5
  FollowerInfo_o *v2553; // x6
  PartyListViewItem_o *v2554; // x7
  QuestSpotReleaseMaster_o *v2555; // x20
  int64_t v2556; // x2
  int32_t v2557; // w3
  System_String_o *v2558; // x4
  BattleSetupInfo_o *v2559; // x5
  FollowerInfo_o *v2560; // x6
  PartyListViewItem_o *v2561; // x7
  VoiceMaterialCondMaster_o *v2562; // x20
  int64_t v2563; // x2
  int32_t v2564; // w3
  System_String_o *v2565; // x4
  BattleSetupInfo_o *v2566; // x5
  FollowerInfo_o *v2567; // x6
  PartyListViewItem_o *v2568; // x7
  ClassRelationOverwriteMaster_o *v2569; // x20
  int64_t v2570; // x2
  int32_t v2571; // w3
  System_String_o *v2572; // x4
  BattleSetupInfo_o *v2573; // x5
  FollowerInfo_o *v2574; // x6
  PartyListViewItem_o *v2575; // x7
  EventGroupMaster_o *v2576; // x20
  int64_t v2577; // x2
  int32_t v2578; // w3
  System_String_o *v2579; // x4
  BattleSetupInfo_o *v2580; // x5
  FollowerInfo_o *v2581; // x6
  PartyListViewItem_o *v2582; // x7
  TotalBoxGachaMaster_o *v2583; // x20
  int64_t v2584; // x2
  int32_t v2585; // w3
  System_String_o *v2586; // x4
  BattleSetupInfo_o *v2587; // x5
  FollowerInfo_o *v2588; // x6
  PartyListViewItem_o *v2589; // x7
  ServantTreasureDeviceDamageMaster_o *v2590; // x20
  int64_t v2591; // x2
  int32_t v2592; // w3
  System_String_o *v2593; // x4
  BattleSetupInfo_o *v2594; // x5
  FollowerInfo_o *v2595; // x6
  PartyListViewItem_o *v2596; // x7
  UserEventServantFatigueMaster_o *v2597; // x20
  int64_t v2598; // x2
  int32_t v2599; // w3
  System_String_o *v2600; // x4
  BattleSetupInfo_o *v2601; // x5
  FollowerInfo_o *v2602; // x6
  PartyListViewItem_o *v2603; // x7
  EventRewardBgMaster_o *v2604; // x20
  int64_t v2605; // x2
  int32_t v2606; // w3
  System_String_o *v2607; // x4
  BattleSetupInfo_o *v2608; // x5
  FollowerInfo_o *v2609; // x6
  PartyListViewItem_o *v2610; // x7
  EventFatigueRecoveryMaster_o *v2611; // x20
  int64_t v2612; // x2
  int32_t v2613; // w3
  System_String_o *v2614; // x4
  BattleSetupInfo_o *v2615; // x5
  FollowerInfo_o *v2616; // x6
  PartyListViewItem_o *v2617; // x7
  EventBoostItemUsedMaster_o *v2618; // x20
  int64_t v2619; // x2
  int32_t v2620; // w3
  System_String_o *v2621; // x4
  BattleSetupInfo_o *v2622; // x5
  FollowerInfo_o *v2623; // x6
  PartyListViewItem_o *v2624; // x7
  StatusEffectPosOverwriteMaster_o *v2625; // x20
  int64_t v2626; // x2
  int32_t v2627; // w3
  System_String_o *v2628; // x4
  BattleSetupInfo_o *v2629; // x5
  FollowerInfo_o *v2630; // x6
  PartyListViewItem_o *v2631; // x7
  QuestPhaseDetailAddMaster_o *v2632; // x20
  int64_t v2633; // x2
  int32_t v2634; // w3
  System_String_o *v2635; // x4
  BattleSetupInfo_o *v2636; // x5
  FollowerInfo_o *v2637; // x6
  PartyListViewItem_o *v2638; // x7
  VoiceClosedMessageMaster_o *v2639; // x20
  int64_t v2640; // x2
  int32_t v2641; // w3
  System_String_o *v2642; // x4
  BattleSetupInfo_o *v2643; // x5
  FollowerInfo_o *v2644; // x6
  PartyListViewItem_o *v2645; // x7
  ReprintStageMaster_o *v2646; // x20
  int64_t v2647; // x2
  int32_t v2648; // w3
  System_String_o *v2649; // x4
  BattleSetupInfo_o *v2650; // x5
  FollowerInfo_o *v2651; // x6
  PartyListViewItem_o *v2652; // x7
  UserCombineExpMaster_o *v2653; // x20
  int64_t v2654; // x2
  int32_t v2655; // w3
  System_String_o *v2656; // x4
  BattleSetupInfo_o *v2657; // x5
  FollowerInfo_o *v2658; // x6
  PartyListViewItem_o *v2659; // x7
  EventBoardGameCellMaster_o *v2660; // x20
  int64_t v2661; // x2
  int32_t v2662; // w3
  System_String_o *v2663; // x4
  BattleSetupInfo_o *v2664; // x5
  FollowerInfo_o *v2665; // x6
  PartyListViewItem_o *v2666; // x7
  EventBoardGameTokenMaster_o *v2667; // x20
  int64_t v2668; // x2
  int32_t v2669; // w3
  System_String_o *v2670; // x4
  BattleSetupInfo_o *v2671; // x5
  FollowerInfo_o *v2672; // x6
  PartyListViewItem_o *v2673; // x7
  EventBoardGameTokenRewardMaster_o *v2674; // x20
  int64_t v2675; // x2
  int32_t v2676; // w3
  System_String_o *v2677; // x4
  BattleSetupInfo_o *v2678; // x5
  FollowerInfo_o *v2679; // x6
  PartyListViewItem_o *v2680; // x7
  UserEventBoardGameTokenMaster_o *v2681; // x20
  int64_t v2682; // x2
  int32_t v2683; // w3
  System_String_o *v2684; // x4
  BattleSetupInfo_o *v2685; // x5
  FollowerInfo_o *v2686; // x6
  PartyListViewItem_o *v2687; // x7
  ServantAnimationOverwriteMaster_o *v2688; // x20
  int64_t v2689; // x2
  int32_t v2690; // w3
  System_String_o *v2691; // x4
  BattleSetupInfo_o *v2692; // x5
  FollowerInfo_o *v2693; // x6
  PartyListViewItem_o *v2694; // x7
  OpeningMovieMaster_o *v2695; // x20
  int64_t v2696; // x2
  int32_t v2697; // w3
  System_String_o *v2698; // x4
  BattleSetupInfo_o *v2699; // x5
  FollowerInfo_o *v2700; // x6
  PartyListViewItem_o *v2701; // x7
  ServantLimitSpoilerProtectionMaster_o *v2702; // x20
  int64_t v2703; // x2
  int32_t v2704; // w3
  System_String_o *v2705; // x4
  BattleSetupInfo_o *v2706; // x5
  FollowerInfo_o *v2707; // x6
  PartyListViewItem_o *v2708; // x7
  PickupUserFollowerMaster_o *v2709; // x20
  int64_t v2710; // x2
  int32_t v2711; // w3
  System_String_o *v2712; // x4
  BattleSetupInfo_o *v2713; // x5
  FollowerInfo_o *v2714; // x6
  PartyListViewItem_o *v2715; // x7
  ServantCollectionMaster_o *v2716; // x20
  int64_t v2717; // x2
  int32_t v2718; // w3
  System_String_o *v2719; // x4
  BattleSetupInfo_o *v2720; // x5
  FollowerInfo_o *v2721; // x6
  PartyListViewItem_o *v2722; // x7
  GachaBehaviorMaster_o *v2723; // x20
  int64_t v2724; // x2
  int32_t v2725; // w3
  System_String_o *v2726; // x4
  BattleSetupInfo_o *v2727; // x5
  FollowerInfo_o *v2728; // x6
  PartyListViewItem_o *v2729; // x7
  EventQuestCooltimeMaster_o *v2730; // x20
  int64_t v2731; // x2
  int32_t v2732; // w3
  System_String_o *v2733; // x4
  BattleSetupInfo_o *v2734; // x5
  FollowerInfo_o *v2735; // x6
  PartyListViewItem_o *v2736; // x7
  UserEventQuestCooltimeMaster_o *v2737; // x20
  int64_t v2738; // x2
  int32_t v2739; // w3
  System_String_o *v2740; // x4
  BattleSetupInfo_o *v2741; // x5
  FollowerInfo_o *v2742; // x6
  PartyListViewItem_o *v2743; // x7
  BoostMaster_o *v2744; // x20
  int64_t v2745; // x2
  int32_t v2746; // w3
  System_String_o *v2747; // x4
  BattleSetupInfo_o *v2748; // x5
  FollowerInfo_o *v2749; // x6
  PartyListViewItem_o *v2750; // x7
  WarBoardMaster_o *v2751; // x20
  int64_t v2752; // x2
  int32_t v2753; // w3
  System_String_o *v2754; // x4
  BattleSetupInfo_o *v2755; // x5
  FollowerInfo_o *v2756; // x6
  PartyListViewItem_o *v2757; // x7
  WarBoardSquareMaster_o *v2758; // x20
  int64_t v2759; // x2
  int32_t v2760; // w3
  System_String_o *v2761; // x4
  BattleSetupInfo_o *v2762; // x5
  FollowerInfo_o *v2763; // x6
  PartyListViewItem_o *v2764; // x7
  WarBoardRoadMaster_o *v2765; // x20
  int64_t v2766; // x2
  int32_t v2767; // w3
  System_String_o *v2768; // x4
  BattleSetupInfo_o *v2769; // x5
  FollowerInfo_o *v2770; // x6
  PartyListViewItem_o *v2771; // x7
  WarBoardStageMaster_o *v2772; // x20
  int64_t v2773; // x2
  int32_t v2774; // w3
  System_String_o *v2775; // x4
  BattleSetupInfo_o *v2776; // x5
  FollowerInfo_o *v2777; // x6
  PartyListViewItem_o *v2778; // x7
  WarBoardActionPointMaster_o *v2779; // x20
  int64_t v2780; // x2
  int32_t v2781; // w3
  System_String_o *v2782; // x4
  BattleSetupInfo_o *v2783; // x5
  FollowerInfo_o *v2784; // x6
  PartyListViewItem_o *v2785; // x7
  WarBoardActionTrendMaster_o *v2786; // x20
  int64_t v2787; // x2
  int32_t v2788; // w3
  System_String_o *v2789; // x4
  BattleSetupInfo_o *v2790; // x5
  FollowerInfo_o *v2791; // x6
  PartyListViewItem_o *v2792; // x7
  WarBoardTacticalTrendMaster_o *v2793; // x20
  int64_t v2794; // x2
  int32_t v2795; // w3
  System_String_o *v2796; // x4
  BattleSetupInfo_o *v2797; // x5
  FollowerInfo_o *v2798; // x6
  PartyListViewItem_o *v2799; // x7
  WarBoardStageLayoutMaster_o *v2800; // x20
  int64_t v2801; // x2
  int32_t v2802; // w3
  System_String_o *v2803; // x4
  BattleSetupInfo_o *v2804; // x5
  FollowerInfo_o *v2805; // x6
  PartyListViewItem_o *v2806; // x7
  WarBoardStageNpcMaster_o *v2807; // x20
  int64_t v2808; // x2
  int32_t v2809; // w3
  System_String_o *v2810; // x4
  BattleSetupInfo_o *v2811; // x5
  FollowerInfo_o *v2812; // x6
  PartyListViewItem_o *v2813; // x7
  WarBoardStageWallMaster_o *v2814; // x20
  int64_t v2815; // x2
  int32_t v2816; // w3
  System_String_o *v2817; // x4
  BattleSetupInfo_o *v2818; // x5
  FollowerInfo_o *v2819; // x6
  PartyListViewItem_o *v2820; // x7
  WarBoardAIMaster_o *v2821; // x20
  int64_t v2822; // x2
  int32_t v2823; // w3
  System_String_o *v2824; // x4
  BattleSetupInfo_o *v2825; // x5
  FollowerInfo_o *v2826; // x6
  PartyListViewItem_o *v2827; // x7
  WarBoardRatingBaseMaster_o *v2828; // x20
  int64_t v2829; // x2
  int32_t v2830; // w3
  System_String_o *v2831; // x4
  BattleSetupInfo_o *v2832; // x5
  FollowerInfo_o *v2833; // x6
  PartyListViewItem_o *v2834; // x7
  WarBoardRatingOffsetMaster_o *v2835; // x20
  int64_t v2836; // x2
  int32_t v2837; // w3
  System_String_o *v2838; // x4
  BattleSetupInfo_o *v2839; // x5
  FollowerInfo_o *v2840; // x6
  PartyListViewItem_o *v2841; // x7
  WarBoardItemMaster_o *v2842; // x20
  int64_t v2843; // x2
  int32_t v2844; // w3
  System_String_o *v2845; // x4
  BattleSetupInfo_o *v2846; // x5
  FollowerInfo_o *v2847; // x6
  PartyListViewItem_o *v2848; // x7
  WarBoardTreasureMaster_o *v2849; // x20
  int64_t v2850; // x2
  int32_t v2851; // w3
  System_String_o *v2852; // x4
  BattleSetupInfo_o *v2853; // x5
  FollowerInfo_o *v2854; // x6
  PartyListViewItem_o *v2855; // x7
  WarBoardQuestMaster_o *v2856; // x20
  int64_t v2857; // x2
  int32_t v2858; // w3
  System_String_o *v2859; // x4
  BattleSetupInfo_o *v2860; // x5
  FollowerInfo_o *v2861; // x6
  PartyListViewItem_o *v2862; // x7
  WarBoardDataMaster_o *v2863; // x20
  int64_t v2864; // x2
  int32_t v2865; // w3
  System_String_o *v2866; // x4
  BattleSetupInfo_o *v2867; // x5
  FollowerInfo_o *v2868; // x6
  PartyListViewItem_o *v2869; // x7
  WarBoardIndividualityClassMaster_o *v2870; // x20
  int64_t v2871; // x2
  int32_t v2872; // w3
  System_String_o *v2873; // x4
  BattleSetupInfo_o *v2874; // x5
  FollowerInfo_o *v2875; // x6
  PartyListViewItem_o *v2876; // x7
  WarBoardActionTrendConditionMaster_o *v2877; // x20
  int64_t v2878; // x2
  int32_t v2879; // w3
  System_String_o *v2880; // x4
  BattleSetupInfo_o *v2881; // x5
  FollowerInfo_o *v2882; // x6
  PartyListViewItem_o *v2883; // x7
  WarBoardActionPointClassMaster_o *v2884; // x20
  int64_t v2885; // x2
  int32_t v2886; // w3
  System_String_o *v2887; // x4
  BattleSetupInfo_o *v2888; // x5
  FollowerInfo_o *v2889; // x6
  PartyListViewItem_o *v2890; // x7
  EventPanelMapMaster_o *v2891; // x20
  int64_t v2892; // x2
  int32_t v2893; // w3
  System_String_o *v2894; // x4
  BattleSetupInfo_o *v2895; // x5
  FollowerInfo_o *v2896; // x6
  PartyListViewItem_o *v2897; // x7
  EventPanelMapDetailMaster_o *v2898; // x20
  int64_t v2899; // x2
  int32_t v2900; // w3
  System_String_o *v2901; // x4
  BattleSetupInfo_o *v2902; // x5
  FollowerInfo_o *v2903; // x6
  PartyListViewItem_o *v2904; // x7
  EventPanelSpotMaster_o *v2905; // x20
  int64_t v2906; // x2
  int32_t v2907; // w3
  System_String_o *v2908; // x4
  BattleSetupInfo_o *v2909; // x5
  FollowerInfo_o *v2910; // x6
  PartyListViewItem_o *v2911; // x7
  EventPanelScanMaster_o *v2912; // x20
  int64_t v2913; // x2
  int32_t v2914; // w3
  System_String_o *v2915; // x4
  BattleSetupInfo_o *v2916; // x5
  FollowerInfo_o *v2917; // x6
  PartyListViewItem_o *v2918; // x7
  CommonConsumeMaster_o *v2919; // x20
  int64_t v2920; // x2
  int32_t v2921; // w3
  System_String_o *v2922; // x4
  BattleSetupInfo_o *v2923; // x5
  FollowerInfo_o *v2924; // x6
  PartyListViewItem_o *v2925; // x7
  UserEventMapMaster_o *v2926; // x20
  int64_t v2927; // x2
  int32_t v2928; // w3
  System_String_o *v2929; // x4
  BattleSetupInfo_o *v2930; // x5
  FollowerInfo_o *v2931; // x6
  PartyListViewItem_o *v2932; // x7
  UserEventSpotMaster_o *v2933; // x20
  int64_t v2934; // x2
  int32_t v2935; // w3
  System_String_o *v2936; // x4
  BattleSetupInfo_o *v2937; // x5
  FollowerInfo_o *v2938; // x6
  PartyListViewItem_o *v2939; // x7
  WarGroupMaster_o *v2940; // x20
  int64_t v2941; // x2
  int32_t v2942; // w3
  System_String_o *v2943; // x4
  BattleSetupInfo_o *v2944; // x5
  FollowerInfo_o *v2945; // x6
  PartyListViewItem_o *v2946; // x7
  ServantLimitImageMaster_o *v2947; // x20
  int64_t v2948; // x2
  int32_t v2949; // w3
  System_String_o *v2950; // x4
  BattleSetupInfo_o *v2951; // x5
  FollowerInfo_o *v2952; // x6
  PartyListViewItem_o *v2953; // x7
  FriendshipQuestDialogInfoMaster_o *v2954; // x20
  int64_t v2955; // x2
  int32_t v2956; // w3
  System_String_o *v2957; // x4
  BattleSetupInfo_o *v2958; // x5
  FollowerInfo_o *v2959; // x6
  PartyListViewItem_o *v2960; // x7
  QuestRestrictionInfoMaster_o *v2961; // x20
  int64_t v2962; // x2
  int32_t v2963; // w3
  System_String_o *v2964; // x4
  BattleSetupInfo_o *v2965; // x5
  FollowerInfo_o *v2966; // x6
  PartyListViewItem_o *v2967; // x7
  AssistMaster_o *v2968; // x20
  int64_t v2969; // x2
  int32_t v2970; // w3
  System_String_o *v2971; // x4
  BattleSetupInfo_o *v2972; // x5
  FollowerInfo_o *v2973; // x6
  PartyListViewItem_o *v2974; // x7
  WarBoardEffectMaster_o *v2975; // x20
  int64_t v2976; // x2
  int32_t v2977; // w3
  System_String_o *v2978; // x4
  BattleSetupInfo_o *v2979; // x5
  FollowerInfo_o *v2980; // x6
  PartyListViewItem_o *v2981; // x7
  WarBoardOnboardSkillMaster_o *v2982; // x20
  int64_t v2983; // x2
  int32_t v2984; // w3
  System_String_o *v2985; // x4
  BattleSetupInfo_o *v2986; // x5
  FollowerInfo_o *v2987; // x6
  PartyListViewItem_o *v2988; // x7
  BeforeBirthDayMaster_o *v2989; // x20
  int64_t v2990; // x2
  int32_t v2991; // w3
  System_String_o *v2992; // x4
  BattleSetupInfo_o *v2993; // x5
  FollowerInfo_o *v2994; // x6
  PartyListViewItem_o *v2995; // x7
  LoginQuestMaster_o *v2996; // x20
  int64_t v2997; // x2
  int32_t v2998; // w3
  System_String_o *v2999; // x4
  BattleSetupInfo_o *v3000; // x5
  FollowerInfo_o *v3001; // x6
  PartyListViewItem_o *v3002; // x7
  EventCombineCostumeMaster_o *v3003; // x20
  int64_t v3004; // x2
  int32_t v3005; // w3
  System_String_o *v3006; // x4
  BattleSetupInfo_o *v3007; // x5
  FollowerInfo_o *v3008; // x6
  PartyListViewItem_o *v3009; // x7
  WarBoardStagePieceDetailMaster_o *v3010; // x20
  int64_t v3011; // x2
  int32_t v3012; // w3
  System_String_o *v3013; // x4
  BattleSetupInfo_o *v3014; // x5
  FollowerInfo_o *v3015; // x6
  PartyListViewItem_o *v3016; // x7
  ServantTreasureDeviceAddMaster_o *v3017; // x20
  int64_t v3018; // x2
  int32_t v3019; // w3
  System_String_o *v3020; // x4
  BattleSetupInfo_o *v3021; // x5
  FollowerInfo_o *v3022; // x6
  PartyListViewItem_o *v3023; // x7
  SkillAddMaster_o *v3024; // x20
  int64_t v3025; // x2
  int32_t v3026; // w3
  System_String_o *v3027; // x4
  BattleSetupInfo_o *v3028; // x5
  FollowerInfo_o *v3029; // x6
  PartyListViewItem_o *v3030; // x7
  ServantLvDetailMaster_o *v3031; // x20
  int64_t v3032; // x2
  int32_t v3033; // w3
  System_String_o *v3034; // x4
  BattleSetupInfo_o *v3035; // x5
  FollowerInfo_o *v3036; // x6
  PartyListViewItem_o *v3037; // x7
  GachaAppendMaster_o *v3038; // x20
  int64_t v3039; // x2
  int32_t v3040; // w3
  System_String_o *v3041; // x4
  BattleSetupInfo_o *v3042; // x5
  FollowerInfo_o *v3043; // x6
  PartyListViewItem_o *v3044; // x7
  UserGachaDrawLogMaster_o *v3045; // x20
  int64_t v3046; // x2
  int32_t v3047; // w3
  System_String_o *v3048; // x4
  BattleSetupInfo_o *v3049; // x5
  FollowerInfo_o *v3050; // x6
  PartyListViewItem_o *v3051; // x7
  ServantAppendPassiveSkillMaster_o *v3052; // x20
  int64_t v3053; // x2
  int32_t v3054; // w3
  System_String_o *v3055; // x4
  BattleSetupInfo_o *v3056; // x5
  FollowerInfo_o *v3057; // x6
  PartyListViewItem_o *v3058; // x7
  UserServantAppendPassiveSkillMaster_o *v3059; // x20
  int64_t v3060; // x2
  int32_t v3061; // w3
  System_String_o *v3062; // x4
  BattleSetupInfo_o *v3063; // x5
  FollowerInfo_o *v3064; // x6
  PartyListViewItem_o *v3065; // x7
  UserServantAppendPassiveSkillLvMaster_o *v3066; // x20
  int64_t v3067; // x2
  int32_t v3068; // w3
  System_String_o *v3069; // x4
  BattleSetupInfo_o *v3070; // x5
  FollowerInfo_o *v3071; // x6
  PartyListViewItem_o *v3072; // x7
  SvtAppendPassiveSkillUnlockMaster_o *v3073; // x20
  int64_t v3074; // x2
  int32_t v3075; // w3
  System_String_o *v3076; // x4
  BattleSetupInfo_o *v3077; // x5
  FollowerInfo_o *v3078; // x6
  PartyListViewItem_o *v3079; // x7
  CombineAppendPassiveSkillMaster_o *v3080; // x20
  int64_t v3081; // x2
  int32_t v3082; // w3
  System_String_o *v3083; // x4
  BattleSetupInfo_o *v3084; // x5
  FollowerInfo_o *v3085; // x6
  PartyListViewItem_o *v3086; // x7
  SvtCoinMaster_o *v3087; // x20
  int64_t v3088; // x2
  int32_t v3089; // w3
  System_String_o *v3090; // x4
  BattleSetupInfo_o *v3091; // x5
  FollowerInfo_o *v3092; // x6
  PartyListViewItem_o *v3093; // x7
  UserSvtCoinMaster_o *v3094; // x20
  int64_t v3095; // x2
  int32_t v3096; // w3
  System_String_o *v3097; // x4
  BattleSetupInfo_o *v3098; // x5
  FollowerInfo_o *v3099; // x6
  PartyListViewItem_o *v3100; // x7
  ServantAddMaster_o *v3101; // x20
  int64_t v3102; // x2
  int32_t v3103; // w3
  System_String_o *v3104; // x4
  BattleSetupInfo_o *v3105; // x5
  FollowerInfo_o *v3106; // x6
  PartyListViewItem_o *v3107; // x7
  TreasureBoxMaster_o *v3108; // x20
  int64_t v3109; // x2
  int32_t v3110; // w3
  System_String_o *v3111; // x4
  BattleSetupInfo_o *v3112; // x5
  FollowerInfo_o *v3113; // x6
  PartyListViewItem_o *v3114; // x7
  TreasureBoxGiftMaster_o *v3115; // x20
  int64_t v3116; // x2
  int32_t v3117; // w3
  System_String_o *v3118; // x4
  BattleSetupInfo_o *v3119; // x5
  FollowerInfo_o *v3120; // x6
  PartyListViewItem_o *v3121; // x7
  TreasureBoxTalkMaster_o *v3122; // x20
  int64_t v3123; // x2
  int32_t v3124; // w3
  System_String_o *v3125; // x4
  BattleSetupInfo_o *v3126; // x5
  FollowerInfo_o *v3127; // x6
  PartyListViewItem_o *v3128; // x7
  UserEventExpeditionMaster_o *v3129; // x20
  int64_t v3130; // x2
  int32_t v3131; // w3
  System_String_o *v3132; // x4
  BattleSetupInfo_o *v3133; // x5
  FollowerInfo_o *v3134; // x6
  PartyListViewItem_o *v3135; // x7
  EventExpeditionMaster_o *v3136; // x20
  int64_t v3137; // x2
  int32_t v3138; // w3
  System_String_o *v3139; // x4
  BattleSetupInfo_o *v3140; // x5
  FollowerInfo_o *v3141; // x6
  PartyListViewItem_o *v3142; // x7
  EventExpeditionPieceMaster_o *v3143; // x20
  int64_t v3144; // x2
  int32_t v3145; // w3
  System_String_o *v3146; // x4
  BattleSetupInfo_o *v3147; // x5
  FollowerInfo_o *v3148; // x6
  PartyListViewItem_o *v3149; // x7
  EventRecipeMaster_o *v3150; // x20
  int64_t v3151; // x2
  int32_t v3152; // w3
  System_String_o *v3153; // x4
  BattleSetupInfo_o *v3154; // x5
  FollowerInfo_o *v3155; // x6
  PartyListViewItem_o *v3156; // x7
  EventRecipeGiftMaster_o *v3157; // x20
  int64_t v3158; // x2
  int32_t v3159; // w3
  System_String_o *v3160; // x4
  BattleSetupInfo_o *v3161; // x5
  FollowerInfo_o *v3162; // x6
  PartyListViewItem_o *v3163; // x7
  UserEventFortificationMaster_o *v3164; // x20
  int64_t v3165; // x2
  int32_t v3166; // w3
  System_String_o *v3167; // x4
  BattleSetupInfo_o *v3168; // x5
  FollowerInfo_o *v3169; // x6
  PartyListViewItem_o *v3170; // x7
  EventFortificationMaster_o *v3171; // x20
  int64_t v3172; // x2
  int32_t v3173; // w3
  System_String_o *v3174; // x4
  BattleSetupInfo_o *v3175; // x5
  FollowerInfo_o *v3176; // x6
  PartyListViewItem_o *v3177; // x7
  EventFortificationDetailMaster_o *v3178; // x20
  int64_t v3179; // x2
  int32_t v3180; // w3
  System_String_o *v3181; // x4
  BattleSetupInfo_o *v3182; // x5
  FollowerInfo_o *v3183; // x6
  PartyListViewItem_o *v3184; // x7
  EventFortificationSvtMaster_o *v3185; // x20
  int64_t v3186; // x2
  int32_t v3187; // w3
  System_String_o *v3188; // x4
  BattleSetupInfo_o *v3189; // x5
  FollowerInfo_o *v3190; // x6
  PartyListViewItem_o *v3191; // x7
  UserServantVoicePlayedMaster_o *v3192; // x20
  int64_t v3193; // x2
  int32_t v3194; // w3
  System_String_o *v3195; // x4
  BattleSetupInfo_o *v3196; // x5
  FollowerInfo_o *v3197; // x6
  PartyListViewItem_o *v3198; // x7
  UpdateProfileDialogInfoMaster_o *v3199; // x20
  int64_t v3200; // x2
  int32_t v3201; // w3
  System_String_o *v3202; // x4
  BattleSetupInfo_o *v3203; // x5
  FollowerInfo_o *v3204; // x6
  PartyListViewItem_o *v3205; // x7
  SvtMaterialTdMaster_o *v3206; // x20
  int64_t v3207; // x2
  int32_t v3208; // w3
  System_String_o *v3209; // x4
  BattleSetupInfo_o *v3210; // x5
  FollowerInfo_o *v3211; // x6
  PartyListViewItem_o *v3212; // x7
  BattleMasterImageMaster_o *v3213; // x20
  int64_t v3214; // x2
  int32_t v3215; // w3
  System_String_o *v3216; // x4
  BattleSetupInfo_o *v3217; // x5
  FollowerInfo_o *v3218; // x6
  PartyListViewItem_o *v3219; // x7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v3220; // x20
  int64_t v3221; // x2
  int32_t v3222; // w3
  System_String_o *v3223; // x4
  BattleSetupInfo_o *v3224; // x5
  FollowerInfo_o *v3225; // x6
  PartyListViewItem_o *v3226; // x7
  UserEventRandomMissionMaster_o *v3227; // x20
  int64_t v3228; // x2
  int32_t v3229; // w3
  System_String_o *v3230; // x4
  BattleSetupInfo_o *v3231; // x5
  FollowerInfo_o *v3232; // x6
  PartyListViewItem_o *v3233; // x7
  EventProgressValueMaster_o *v3234; // x20
  int64_t v3235; // x2
  int32_t v3236; // w3
  System_String_o *v3237; // x4
  BattleSetupInfo_o *v3238; // x5
  FollowerInfo_o *v3239; // x6
  PartyListViewItem_o *v3240; // x7
  SvtMultiPortraitMaster_o *v3241; // x20
  int64_t v3242; // x2
  int32_t v3243; // w3
  System_String_o *v3244; // x4
  BattleSetupInfo_o *v3245; // x5
  FollowerInfo_o *v3246; // x6
  PartyListViewItem_o *v3247; // x7
  EventRandomMissionMaster_o *v3248; // x20
  int64_t v3249; // x2
  int32_t v3250; // w3
  System_String_o *v3251; // x4
  BattleSetupInfo_o *v3252; // x5
  FollowerInfo_o *v3253; // x6
  PartyListViewItem_o *v3254; // x7
  UserGachaHistoryMaster_o *v3255; // x20
  int64_t v3256; // x2
  int32_t v3257; // w3
  System_String_o *v3258; // x4
  BattleSetupInfo_o *v3259; // x5
  FollowerInfo_o *v3260; // x6
  PartyListViewItem_o *v3261; // x7
  UserCoinRoomMaster_o *v3262; // x20
  int64_t v3263; // x2
  int32_t v3264; // w3
  System_String_o *v3265; // x4
  BattleSetupInfo_o *v3266; // x5
  FollowerInfo_o *v3267; // x6
  PartyListViewItem_o *v3268; // x7
  EventBuddyPointMaster_o *v3269; // x20
  int64_t v3270; // x2
  int32_t v3271; // w3
  System_String_o *v3272; // x4
  BattleSetupInfo_o *v3273; // x5
  FollowerInfo_o *v3274; // x6
  PartyListViewItem_o *v3275; // x7
  EventServantPointRankMaster_o *v3276; // x20
  int64_t v3277; // x2
  int32_t v3278; // w3
  System_String_o *v3279; // x4
  BattleSetupInfo_o *v3280; // x5
  FollowerInfo_o *v3281; // x6
  PartyListViewItem_o *v3282; // x7
  UserEventServantPointMaster_o *v3283; // x20
  int64_t v3284; // x2
  int32_t v3285; // w3
  System_String_o *v3286; // x4
  BattleSetupInfo_o *v3287; // x5
  FollowerInfo_o *v3288; // x6
  PartyListViewItem_o *v3289; // x7
  FieldMotionMaster_o *v3290; // x20
  int64_t v3291; // x2
  int32_t v3292; // w3
  System_String_o *v3293; // x4
  BattleSetupInfo_o *v3294; // x5
  FollowerInfo_o *v3295; // x6
  PartyListViewItem_o *v3296; // x7
  UserDeleteReservationMaster_o *v3297; // x20
  int64_t v3298; // x2
  int32_t v3299; // w3
  System_String_o *v3300; // x4
  BattleSetupInfo_o *v3301; // x5
  FollowerInfo_o *v3302; // x6
  PartyListViewItem_o *v3303; // x7
  ServantScriptMultipleMaster_o *v3304; // x20
  int64_t v3305; // x2
  int32_t v3306; // w3
  System_String_o *v3307; // x4
  BattleSetupInfo_o *v3308; // x5
  FollowerInfo_o *v3309; // x6
  PartyListViewItem_o *v3310; // x7
  EquipAddMaster_o *v3311; // x20
  int64_t v3312; // x2
  int32_t v3313; // w3
  System_String_o *v3314; // x4
  BattleSetupInfo_o *v3315; // x5
  FollowerInfo_o *v3316; // x6
  PartyListViewItem_o *v3317; // x7
  QuestReleaseOverwriteMaster_o *v3318; // x20
  int64_t v3319; // x2
  int32_t v3320; // w3
  System_String_o *v3321; // x4
  BattleSetupInfo_o *v3322; // x5
  FollowerInfo_o *v3323; // x6
  PartyListViewItem_o *v3324; // x7
  UserEventAlloutBattleMaster_o *v3325; // x20
  int64_t v3326; // x2
  int32_t v3327; // w3
  System_String_o *v3328; // x4
  BattleSetupInfo_o *v3329; // x5
  FollowerInfo_o *v3330; // x6
  PartyListViewItem_o *v3331; // x7
  QuestScriptMaterialNextMaster_o *v3332; // x20
  int64_t v3333; // x2
  int32_t v3334; // w3
  System_String_o *v3335; // x4
  BattleSetupInfo_o *v3336; // x5
  FollowerInfo_o *v3337; // x6
  PartyListViewItem_o *v3338; // x7
  EventDiggingMaster_o *v3339; // x20
  int64_t v3340; // x2
  int32_t v3341; // w3
  System_String_o *v3342; // x4
  BattleSetupInfo_o *v3343; // x5
  FollowerInfo_o *v3344; // x6
  PartyListViewItem_o *v3345; // x7
  EventDiggingBlockMaster_o *v3346; // x20
  int64_t v3347; // x2
  int32_t v3348; // w3
  System_String_o *v3349; // x4
  BattleSetupInfo_o *v3350; // x5
  FollowerInfo_o *v3351; // x6
  PartyListViewItem_o *v3352; // x7
  EventDiggingRewardMaster_o *v3353; // x20
  int64_t v3354; // x2
  int32_t v3355; // w3
  System_String_o *v3356; // x4
  BattleSetupInfo_o *v3357; // x5
  FollowerInfo_o *v3358; // x6
  PartyListViewItem_o *v3359; // x7
  UserEventDiggingMaster_o *v3360; // x20
  int64_t v3361; // x2
  int32_t v3362; // w3
  System_String_o *v3363; // x4
  BattleSetupInfo_o *v3364; // x5
  FollowerInfo_o *v3365; // x6
  PartyListViewItem_o *v3366; // x7
  BattleMessageMaster_o *v3367; // x20
  int64_t v3368; // x2
  int32_t v3369; // w3
  System_String_o *v3370; // x4
  BattleSetupInfo_o *v3371; // x5
  FollowerInfo_o *v3372; // x6
  PartyListViewItem_o *v3373; // x7
  BattleMessageGroupMaster_o *v3374; // x20
  int64_t v3375; // x2
  int32_t v3376; // w3
  System_String_o *v3377; // x4
  BattleSetupInfo_o *v3378; // x5
  FollowerInfo_o *v3379; // x6
  PartyListViewItem_o *v3380; // x7
  UserNpcSvtRecordMaster_o *v3381; // x20
  int64_t v3382; // x2
  int32_t v3383; // w3
  System_String_o *v3384; // x4
  BattleSetupInfo_o *v3385; // x5
  FollowerInfo_o *v3386; // x6
  PartyListViewItem_o *v3387; // x7
  BuffTypeDetailMaster_o *v3388; // x20
  int64_t v3389; // x2
  int32_t v3390; // w3
  System_String_o *v3391; // x4
  BattleSetupInfo_o *v3392; // x5
  FollowerInfo_o *v3393; // x6
  PartyListViewItem_o *v3394; // x7
  WarBoardMessageMaster_o *v3395; // x20
  int64_t v3396; // x2
  int32_t v3397; // w3
  System_String_o *v3398; // x4
  BattleSetupInfo_o *v3399; // x5
  FollowerInfo_o *v3400; // x6
  PartyListViewItem_o *v3401; // x7
  WarBoardPartySkillMaster_o *v3402; // x20
  int64_t v3403; // x2
  int32_t v3404; // w3
  System_String_o *v3405; // x4
  BattleSetupInfo_o *v3406; // x5
  FollowerInfo_o *v3407; // x6
  PartyListViewItem_o *v3408; // x7
  WarBoardMessageScriptMaster_o *v3409; // x20
  int64_t v3410; // x2
  int32_t v3411; // w3
  System_String_o *v3412; // x4
  BattleSetupInfo_o *v3413; // x5
  FollowerInfo_o *v3414; // x6
  PartyListViewItem_o *v3415; // x7
  WarQuestSelectionMaster_o *v3416; // x20
  int64_t v3417; // x2
  int32_t v3418; // w3
  System_String_o *v3419; // x4
  BattleSetupInfo_o *v3420; // x5
  FollowerInfo_o *v3421; // x6
  PartyListViewItem_o *v3422; // x7
  WarBoardStageDetailMaster_o *v3423; // x20
  int64_t v3424; // x2
  int32_t v3425; // w3
  System_String_o *v3426; // x4
  BattleSetupInfo_o *v3427; // x5
  FollowerInfo_o *v3428; // x6
  PartyListViewItem_o *v3429; // x7
  QuestScriptMaterialOverwriteMaster_o *v3430; // x20
  int64_t v3431; // x2
  int32_t v3432; // w3
  System_String_o *v3433; // x4
  BattleSetupInfo_o *v3434; // x5
  FollowerInfo_o *v3435; // x6
  PartyListViewItem_o *v3436; // x7
  QuestScriptBranchMaterialMaster_o *v3437; // x20
  int64_t v3438; // x2
  int32_t v3439; // w3
  System_String_o *v3440; // x4
  BattleSetupInfo_o *v3441; // x5
  FollowerInfo_o *v3442; // x6
  PartyListViewItem_o *v3443; // x7
  AdCheckPointMaster_o *v3444; // x20
  int64_t v3445; // x2
  int32_t v3446; // w3
  System_String_o *v3447; // x4
  BattleSetupInfo_o *v3448; // x5
  FollowerInfo_o *v3449; // x6
  PartyListViewItem_o *v3450; // x7
  GiftDetailMaster_o *v3451; // x20
  int64_t v3452; // x2
  int32_t v3453; // w3
  System_String_o *v3454; // x4
  BattleSetupInfo_o *v3455; // x5
  FollowerInfo_o *v3456; // x6
  PartyListViewItem_o *v3457; // x7
  CombineLimitGiftMaster_o *v3458; // x20
  int64_t v3459; // x2
  int32_t v3460; // w3
  System_String_o *v3461; // x4
  BattleSetupInfo_o *v3462; // x5
  FollowerInfo_o *v3463; // x6
  PartyListViewItem_o *v3464; // x7
  EventCooltimeRewardMaster_o *v3465; // x20
  int64_t v3466; // x2
  int32_t v3467; // w3
  System_String_o *v3468; // x4
  BattleSetupInfo_o *v3469; // x5
  FollowerInfo_o *v3470; // x6
  PartyListViewItem_o *v3471; // x7
  UserEventCooltimeRewardMaster_o *v3472; // x20
  int64_t v3473; // x2
  int32_t v3474; // w3
  System_String_o *v3475; // x4
  BattleSetupInfo_o *v3476; // x5
  FollowerInfo_o *v3477; // x6
  PartyListViewItem_o *v3478; // x7
  ClassBoardBaseMaster_o *v3479; // x20
  int64_t v3480; // x2
  int32_t v3481; // w3
  System_String_o *v3482; // x4
  BattleSetupInfo_o *v3483; // x5
  FollowerInfo_o *v3484; // x6
  PartyListViewItem_o *v3485; // x7
  ClassBoardLockMaster_o *v3486; // x20
  int64_t v3487; // x2
  int32_t v3488; // w3
  System_String_o *v3489; // x4
  BattleSetupInfo_o *v3490; // x5
  FollowerInfo_o *v3491; // x6
  PartyListViewItem_o *v3492; // x7
  ClassBoardSquareMaster_o *v3493; // x20
  int64_t v3494; // x2
  int32_t v3495; // w3
  System_String_o *v3496; // x4
  BattleSetupInfo_o *v3497; // x5
  FollowerInfo_o *v3498; // x6
  PartyListViewItem_o *v3499; // x7
  ClassBoardLineMaster_o *v3500; // x20
  int64_t v3501; // x2
  int32_t v3502; // w3
  System_String_o *v3503; // x4
  BattleSetupInfo_o *v3504; // x5
  FollowerInfo_o *v3505; // x6
  PartyListViewItem_o *v3506; // x7
  UserClassBoardSquareMaster_o *v3507; // x20
  int64_t v3508; // x2
  int32_t v3509; // w3
  System_String_o *v3510; // x4
  BattleSetupInfo_o *v3511; // x5
  FollowerInfo_o *v3512; // x6
  PartyListViewItem_o *v3513; // x7
  ServantCardAddMaster_o *v3514; // x20
  int64_t v3515; // x2
  int32_t v3516; // w3
  System_String_o *v3517; // x4
  BattleSetupInfo_o *v3518; // x5
  FollowerInfo_o *v3519; // x6
  PartyListViewItem_o *v3520; // x7
  MapLayerMaster_o *v3521; // x20
  int64_t v3522; // x2
  int32_t v3523; // w3
  System_String_o *v3524; // x4
  BattleSetupInfo_o *v3525; // x5
  FollowerInfo_o *v3526; // x6
  PartyListViewItem_o *v3527; // x7
  SpotLayerMaster_o *v3528; // x20
  int64_t v3529; // x2
  int32_t v3530; // w3
  System_String_o *v3531; // x4
  BattleSetupInfo_o *v3532; // x5
  FollowerInfo_o *v3533; // x6
  PartyListViewItem_o *v3534; // x7
  MapGimmickLayerMaster_o *v3535; // x20
  int64_t v3536; // x2
  int32_t v3537; // w3
  System_String_o *v3538; // x4
  BattleSetupInfo_o *v3539; // x5
  FollowerInfo_o *v3540; // x6
  PartyListViewItem_o *v3541; // x7
  EventDataLostBattleMaster_o *v3542; // x20
  int64_t v3543; // x2
  int32_t v3544; // w3
  System_String_o *v3545; // x4
  BattleSetupInfo_o *v3546; // x5
  FollowerInfo_o *v3547; // x6
  PartyListViewItem_o *v3548; // x7
  EventDataLostBattleResetMaster_o *v3549; // x20
  int64_t v3550; // x2
  int32_t v3551; // w3
  System_String_o *v3552; // x4
  BattleSetupInfo_o *v3553; // x5
  FollowerInfo_o *v3554; // x6
  PartyListViewItem_o *v3555; // x7
  UserEventDataLostMaster_o *v3556; // x20
  int64_t v3557; // x2
  int32_t v3558; // w3
  System_String_o *v3559; // x4
  BattleSetupInfo_o *v3560; // x5
  FollowerInfo_o *v3561; // x6
  PartyListViewItem_o *v3562; // x7
  QuestHintMaster_o *v3563; // x20
  int64_t v3564; // x2
  int32_t v3565; // w3
  System_String_o *v3566; // x4
  BattleSetupInfo_o *v3567; // x5
  FollowerInfo_o *v3568; // x6
  PartyListViewItem_o *v3569; // x7
  FuncTypeDetailMaster_o *v3570; // x20
  int64_t v3571; // x2
  int32_t v3572; // w3
  System_String_o *v3573; // x4
  BattleSetupInfo_o *v3574; // x5
  FollowerInfo_o *v3575; // x6
  PartyListViewItem_o *v3576; // x7
  BuffConvertMaster_o *v3577; // x20
  int64_t v3578; // x2
  int32_t v3579; // w3
  System_String_o *v3580; // x4
  BattleSetupInfo_o *v3581; // x5
  FollowerInfo_o *v3582; // x6
  PartyListViewItem_o *v3583; // x7
  SkillGroupMaster_o *v3584; // x20
  int64_t v3585; // x2
  int32_t v3586; // w3
  System_String_o *v3587; // x4
  BattleSetupInfo_o *v3588; // x5
  FollowerInfo_o *v3589; // x6
  PartyListViewItem_o *v3590; // x7
  SkillGroupOverwriteMaster_o *v3591; // x20
  int64_t v3592; // x2
  int32_t v3593; // w3
  System_String_o *v3594; // x4
  BattleSetupInfo_o *v3595; // x5
  FollowerInfo_o *v3596; // x6
  PartyListViewItem_o *v3597; // x7
  SkillIndividualityMaster_o *v3598; // x20
  int64_t v3599; // x2
  int32_t v3600; // w3
  System_String_o *v3601; // x4
  BattleSetupInfo_o *v3602; // x5
  FollowerInfo_o *v3603; // x6
  PartyListViewItem_o *v3604; // x7
  RestrictionBaseMaster_o *v3605; // x20
  int64_t v3606; // x2
  int32_t v3607; // w3
  System_String_o *v3608; // x4
  BattleSetupInfo_o *v3609; // x5
  FollowerInfo_o *v3610; // x6
  PartyListViewItem_o *v3611; // x7
  RestrictionSlotMaster_o *v3612; // x20
  int64_t v3613; // x2
  int32_t v3614; // w3
  System_String_o *v3615; // x4
  BattleSetupInfo_o *v3616; // x5
  FollowerInfo_o *v3617; // x6
  PartyListViewItem_o *v3618; // x7
  RestrictionSlotDetailMaster_o *v3619; // x20
  int64_t v3620; // x2
  int32_t v3621; // w3
  System_String_o *v3622; // x4
  BattleSetupInfo_o *v3623; // x5
  FollowerInfo_o *v3624; // x6
  PartyListViewItem_o *v3625; // x7
  RestrictionMessageMaster_o *v3626; // x20
  int64_t v3627; // x2
  int32_t v3628; // w3
  System_String_o *v3629; // x4
  BattleSetupInfo_o *v3630; // x5
  FollowerInfo_o *v3631; // x6
  PartyListViewItem_o *v3632; // x7
  RestrictionWholeMaster_o *v3633; // x20
  int64_t v3634; // x2
  int32_t v3635; // w3
  System_String_o *v3636; // x4
  BattleSetupInfo_o *v3637; // x5
  FollowerInfo_o *v3638; // x6
  PartyListViewItem_o *v3639; // x7
  FuncDispMaster_o *v3640; // x20
  int64_t v3641; // x2
  int32_t v3642; // w3
  System_String_o *v3643; // x4
  BattleSetupInfo_o *v3644; // x5
  FollowerInfo_o *v3645; // x6
  PartyListViewItem_o *v3646; // x7
  ClassBoardCommandSpellMaster_o *v3647; // x20
  int64_t v3648; // x2
  int32_t v3649; // w3
  System_String_o *v3650; // x4
  BattleSetupInfo_o *v3651; // x5
  FollowerInfo_o *v3652; // x6
  PartyListViewItem_o *v3653; // x7
  ClassBoardClassMaster_o *v3654; // x20
  int64_t v3655; // x2
  int32_t v3656; // w3
  System_String_o *v3657; // x4
  BattleSetupInfo_o *v3658; // x5
  FollowerInfo_o *v3659; // x6
  PartyListViewItem_o *v3660; // x7
  EventCommandAssistMaster_o *v3661; // x20
  int64_t v3662; // x2
  int32_t v3663; // w3
  System_String_o *v3664; // x4
  BattleSetupInfo_o *v3665; // x5
  FollowerInfo_o *v3666; // x6
  PartyListViewItem_o *v3667; // x7
  EventMissionGroupMaster_o *v3668; // x20
  int64_t v3669; // x2
  int32_t v3670; // w3
  System_String_o *v3671; // x4
  BattleSetupInfo_o *v3672; // x5
  FollowerInfo_o *v3673; // x6
  PartyListViewItem_o *v3674; // x7
  CombineLimitReleaseMaster_o *v3675; // x20
  int64_t v3676; // x2
  int32_t v3677; // w3
  System_String_o *v3678; // x4
  BattleSetupInfo_o *v3679; // x5
  FollowerInfo_o *v3680; // x6
  PartyListViewItem_o *v3681; // x7
  HeelPortraitMaster_o *v3682; // x20
  int64_t v3683; // x2
  int32_t v3684; // w3
  System_String_o *v3685; // x4
  BattleSetupInfo_o *v3686; // x5
  FollowerInfo_o *v3687; // x6
  PartyListViewItem_o *v3688; // x7
  UserHeelPortraitMaster_o *v3689; // x20
  int64_t v3690; // x2
  int32_t v3691; // w3
  System_String_o *v3692; // x4
  BattleSetupInfo_o *v3693; // x5
  FollowerInfo_o *v3694; // x6
  PartyListViewItem_o *v3695; // x7
  TreasureDeviceSequenceWeightMaster_o *v3696; // x20
  int64_t v3697; // x2
  int32_t v3698; // w3
  System_String_o *v3699; // x4
  BattleSetupInfo_o *v3700; // x5
  FollowerInfo_o *v3701; // x6
  PartyListViewItem_o *v3702; // x7
  NpcServantFollowerIndividualityMaster_o *v3703; // x20
  int64_t v3704; // x2
  int32_t v3705; // w3
  System_String_o *v3706; // x4
  BattleSetupInfo_o *v3707; // x5
  FollowerInfo_o *v3708; // x6
  PartyListViewItem_o *v3709; // x7
  GachaExtraGiftMaster_o *v3710; // x20
  int64_t v3711; // x2
  int32_t v3712; // w3
  System_String_o *v3713; // x4
  BattleSetupInfo_o *v3714; // x5
  FollowerInfo_o *v3715; // x6
  PartyListViewItem_o *v3716; // x7
  EventMuralMaster_o *v3717; // x20
  int64_t v3718; // x2
  int32_t v3719; // w3
  System_String_o *v3720; // x4
  BattleSetupInfo_o *v3721; // x5
  FollowerInfo_o *v3722; // x6
  PartyListViewItem_o *v3723; // x7
  ViewWaveEnemyMaster_o *v3724; // x20
  int64_t v3725; // x2
  int32_t v3726; // w3
  System_String_o *v3727; // x4
  BattleSetupInfo_o *v3728; // x5
  FollowerInfo_o *v3729; // x6
  PartyListViewItem_o *v3730; // x7
  BlankEarthSpotNavimenuMaster_o *v3731; // x20
  int64_t v3732; // x2
  int32_t v3733; // w3
  System_String_o *v3734; // x4
  BattleSetupInfo_o *v3735; // x5
  FollowerInfo_o *v3736; // x6
  PartyListViewItem_o *v3737; // x7
  BlankEarthGimmickMaster_o *v3738; // x20
  int64_t v3739; // x2
  int32_t v3740; // w3
  System_String_o *v3741; // x4
  BattleSetupInfo_o *v3742; // x5
  FollowerInfo_o *v3743; // x6
  PartyListViewItem_o *v3744; // x7
  TerminalOverwriteMaster_o *v3745; // x20
  int64_t v3746; // x2
  int32_t v3747; // w3
  System_String_o *v3748; // x4
  BattleSetupInfo_o *v3749; // x5
  FollowerInfo_o *v3750; // x6
  PartyListViewItem_o *v3751; // x7
  UserExchangeSvtMaster_o *v3752; // x20
  int64_t v3753; // x2
  int32_t v3754; // w3
  System_String_o *v3755; // x4
  BattleSetupInfo_o *v3756; // x5
  FollowerInfo_o *v3757; // x6
  PartyListViewItem_o *v3758; // x7
  WarBoardCommonReleaseMaster_o *v3759; // x20
  int64_t v3760; // x2
  int32_t v3761; // w3
  System_String_o *v3762; // x4
  BattleSetupInfo_o *v3763; // x5
  FollowerInfo_o *v3764; // x6
  PartyListViewItem_o *v3765; // x7
  WarBoardEventMaster_o *v3766; // x20
  int64_t v3767; // x2
  int32_t v3768; // w3
  System_String_o *v3769; // x4
  BattleSetupInfo_o *v3770; // x5
  FollowerInfo_o *v3771; // x6
  PartyListViewItem_o *v3772; // x7
  WarBoardEventScriptMaster_o *v3773; // x20
  int64_t v3774; // x2
  int32_t v3775; // w3
  System_String_o *v3776; // x4
  BattleSetupInfo_o *v3777; // x5
  FollowerInfo_o *v3778; // x6
  PartyListViewItem_o *v3779; // x7
  WarBoardStageBossMaster_o *v3780; // x20
  int64_t v3781; // x2
  int32_t v3782; // w3
  System_String_o *v3783; // x4
  BattleSetupInfo_o *v3784; // x5
  FollowerInfo_o *v3785; // x6
  PartyListViewItem_o *v3786; // x7
  WarBoardSquareIndexGroupMaster_o *v3787; // x20
  int64_t v3788; // x2
  int32_t v3789; // w3
  System_String_o *v3790; // x4
  BattleSetupInfo_o *v3791; // x5
  FollowerInfo_o *v3792; // x6
  PartyListViewItem_o *v3793; // x7
  WarBoardActionTrendGroupMaster_o *v3794; // x20
  int64_t v3795; // x2
  int32_t v3796; // w3
  System_String_o *v3797; // x4
  BattleSetupInfo_o *v3798; // x5
  FollowerInfo_o *v3799; // x6
  PartyListViewItem_o *v3800; // x7
  WarBoardRatingOffsetGroupMaster_o *v3801; // x20
  int64_t v3802; // x2
  int32_t v3803; // w3
  System_String_o *v3804; // x4
  BattleSetupInfo_o *v3805; // x5
  FollowerInfo_o *v3806; // x6
  PartyListViewItem_o *v3807; // x7
  WarBoardReinforcementsMaster_o *v3808; // x20
  int64_t v3809; // x2
  int32_t v3810; // w3
  System_String_o *v3811; // x4
  BattleSetupInfo_o *v3812; // x5
  FollowerInfo_o *v3813; // x6
  PartyListViewItem_o *v3814; // x7
  WarBoardStageReinforcementsMaster_o *v3815; // x20
  int64_t v3816; // x2
  int32_t v3817; // w3
  System_String_o *v3818; // x4
  BattleSetupInfo_o *v3819; // x5
  FollowerInfo_o *v3820; // x6
  PartyListViewItem_o *v3821; // x7
  WarBoardFutureActionTrendMaster_o *v3822; // x20
  int64_t v3823; // x2
  int32_t v3824; // w3
  System_String_o *v3825; // x4
  BattleSetupInfo_o *v3826; // x5
  FollowerInfo_o *v3827; // x6
  PartyListViewItem_o *v3828; // x7
  ServantProfilePushMaster_o *v3829; // x20
  int64_t v3830; // x2
  int32_t v3831; // w3
  System_String_o *v3832; // x4
  BattleSetupInfo_o *v3833; // x5
  FollowerInfo_o *v3834; // x6
  PartyListViewItem_o *v3835; // x7
  MapGimmickPathMaster_o *v3836; // x20
  int64_t v3837; // x2
  int32_t v3838; // w3
  System_String_o *v3839; // x4
  BattleSetupInfo_o *v3840; // x5
  FollowerInfo_o *v3841; // x6
  PartyListViewItem_o *v3842; // x7
  MapGimmickPathReleaseMaster_o *v3843; // x20
  int64_t v3844; // x2
  int32_t v3845; // w3
  System_String_o *v3846; // x4
  BattleSetupInfo_o *v3847; // x5
  FollowerInfo_o *v3848; // x6
  PartyListViewItem_o *v3849; // x7
  ServantOverwriteMaster_o *v3850; // x20
  int64_t v3851; // x2
  int32_t v3852; // w3
  System_String_o *v3853; // x4
  BattleSetupInfo_o *v3854; // x5
  FollowerInfo_o *v3855; // x6
  PartyListViewItem_o *v3856; // x7
  IndividualityPolicyMaster_o *v3857; // x20
  int64_t v3858; // x2
  int32_t v3859; // w3
  System_String_o *v3860; // x4
  BattleSetupInfo_o *v3861; // x5
  FollowerInfo_o *v3862; // x6
  PartyListViewItem_o *v3863; // x7
  IndividualityPersonalityMaster_o *v3864; // x20
  int64_t v3865; // x2
  int32_t v3866; // w3
  System_String_o *v3867; // x4
  BattleSetupInfo_o *v3868; // x5
  FollowerInfo_o *v3869; // x6
  PartyListViewItem_o *v3870; // x7
  AttriMaster_o *v3871; // x20
  int64_t v3872; // x2
  int32_t v3873; // w3
  System_String_o *v3874; // x4
  BattleSetupInfo_o *v3875; // x5
  FollowerInfo_o *v3876; // x6
  PartyListViewItem_o *v3877; // x7
  ServantVoicePatternMaster_o *v3878; // x20
  int64_t v3879; // x2
  int32_t v3880; // w3
  System_String_o *v3881; // x4
  BattleSetupInfo_o *v3882; // x5
  FollowerInfo_o *v3883; // x6
  PartyListViewItem_o *v3884; // x7
  UserGameCommonMaster_o *v3885; // x20
  int64_t v3886; // x2
  int32_t v3887; // w3
  System_String_o *v3888; // x4
  BattleSetupInfo_o *v3889; // x5
  FollowerInfo_o *v3890; // x6
  PartyListViewItem_o *v3891; // x7
  ServantPhotoMaster_o *v3892; // x20
  int64_t v3893; // x2
  int32_t v3894; // w3
  System_String_o *v3895; // x4
  BattleSetupInfo_o *v3896; // x5
  FollowerInfo_o *v3897; // x6
  PartyListViewItem_o *v3898; // x7
  MasterPhotoMaster_o *v3899; // x20
  int64_t v3900; // x2
  int32_t v3901; // w3
  System_String_o *v3902; // x4
  BattleSetupInfo_o *v3903; // x5
  FollowerInfo_o *v3904; // x6
  PartyListViewItem_o *v3905; // x7
  WarMessageMaster_o *v3906; // x20
  int64_t v3907; // x2
  int32_t v3908; // w3
  System_String_o *v3909; // x4
  BattleSetupInfo_o *v3910; // x5
  FollowerInfo_o *v3911; // x6
  PartyListViewItem_o *v3912; // x7
  QuestAutoOrganizationAdjustMaster_o *v3913; // x20
  int64_t v3914; // x2
  int32_t v3915; // w3
  System_String_o *v3916; // x4
  BattleSetupInfo_o *v3917; // x5
  FollowerInfo_o *v3918; // x6
  PartyListViewItem_o *v3919; // x7
  ExcludeMotionMaster_o *v3920; // x20
  int64_t v3921; // x2
  int32_t v3922; // w3
  System_String_o *v3923; // x4
  BattleSetupInfo_o *v3924; // x5
  FollowerInfo_o *v3925; // x6
  PartyListViewItem_o *v3926; // x7
  UserInterruptionQuestMaster_o *v3927; // x20
  int64_t v3928; // x2
  int32_t v3929; // w3
  System_String_o *v3930; // x4
  BattleSetupInfo_o *v3931; // x5
  FollowerInfo_o *v3932; // x6
  PartyListViewItem_o *v3933; // x7
  ServantTransformMaster_o *v3934; // x20
  int64_t v3935; // x2
  int32_t v3936; // w3
  System_String_o *v3937; // x4
  BattleSetupInfo_o *v3938; // x5
  FollowerInfo_o *v3939; // x6
  PartyListViewItem_o *v3940; // x7
  MapUpdateScheduleMaster_o *v3941; // x20
  int64_t v3942; // x2
  int32_t v3943; // w3
  System_String_o *v3944; // x4
  BattleSetupInfo_o *v3945; // x5
  FollowerInfo_o *v3946; // x6
  PartyListViewItem_o *v3947; // x7
  QuestPhasePresentMaster_o *v3948; // x20
  int64_t v3949; // x2
  int32_t v3950; // w3
  System_String_o *v3951; // x4
  BattleSetupInfo_o *v3952; // x5
  FollowerInfo_o *v3953; // x6
  PartyListViewItem_o *v3954; // x7
  UserAccountLinkageMaster_o *v3955; // x20
  int64_t v3956; // x2
  int32_t v3957; // w3
  System_String_o *v3958; // x4
  BattleSetupInfo_o *v3959; // x5
  FollowerInfo_o *v3960; // x6
  PartyListViewItem_o *v3961; // x7
  MissionNaviTransitionMaster_o *v3962; // x20
  int64_t v3963; // x2
  int32_t v3964; // w3
  System_String_o *v3965; // x4
  BattleSetupInfo_o *v3966; // x5
  FollowerInfo_o *v3967; // x6
  PartyListViewItem_o *v3968; // x7
  MissionNaviQuestMaster_o *v3969; // x20
  int64_t v3970; // x2
  int32_t v3971; // w3
  System_String_o *v3972; // x4
  BattleSetupInfo_o *v3973; // x5
  FollowerInfo_o *v3974; // x6
  PartyListViewItem_o *v3975; // x7
  EventTradeGoodsMaster_o *v3976; // x20
  int64_t v3977; // x2
  int32_t v3978; // w3
  System_String_o *v3979; // x4
  BattleSetupInfo_o *v3980; // x5
  FollowerInfo_o *v3981; // x6
  PartyListViewItem_o *v3982; // x7
  EventTradeStoreMaster_o *v3983; // x20
  int64_t v3984; // x2
  int32_t v3985; // w3
  System_String_o *v3986; // x4
  BattleSetupInfo_o *v3987; // x5
  FollowerInfo_o *v3988; // x6
  PartyListViewItem_o *v3989; // x7
  EventTradePickupMaster_o *v3990; // x20
  int64_t v3991; // x2
  int32_t v3992; // w3
  System_String_o *v3993; // x4
  BattleSetupInfo_o *v3994; // x5
  FollowerInfo_o *v3995; // x6
  PartyListViewItem_o *v3996; // x7
  UserEventTradeMaster_o *v3997; // x20
  int64_t v3998; // x2
  int32_t v3999; // w3
  System_String_o *v4000; // x4
  BattleSetupInfo_o *v4001; // x5
  FollowerInfo_o *v4002; // x6
  PartyListViewItem_o *v4003; // x7
  PaymentHistoryMaster_o *v4004; // x20
  int64_t v4005; // x2
  int32_t v4006; // w3
  System_String_o *v4007; // x4
  BattleSetupInfo_o *v4008; // x5
  FollowerInfo_o *v4009; // x6
  PartyListViewItem_o *v4010; // x7
  UserExternalPaymentStoneMaster_o *v4011; // x20
  int64_t v4012; // x2
  int32_t v4013; // w3
  System_String_o *v4014; // x4
  BattleSetupInfo_o *v4015; // x5
  FollowerInfo_o *v4016; // x6
  PartyListViewItem_o *v4017; // x7
  QuestPhaseIndividualityMaster_o *v4018; // x20
  int64_t v4019; // x2
  int32_t v4020; // w3
  System_String_o *v4021; // x4
  BattleSetupInfo_o *v4022; // x5
  FollowerInfo_o *v4023; // x6
  PartyListViewItem_o *v4024; // x7
  ViewGachaFeaturedServantMaster_o *v4025; // x20
  int64_t v4026; // x2
  int32_t v4027; // w3
  System_String_o *v4028; // x4
  BattleSetupInfo_o *v4029; // x5
  FollowerInfo_o *v4030; // x6
  PartyListViewItem_o *v4031; // x7
  UserGachaPickupCollateralMaster_o *v4032; // x20
  int64_t v4033; // x2
  int32_t v4034; // w3
  System_String_o *v4035; // x4
  BattleSetupInfo_o *v4036; // x5
  FollowerInfo_o *v4037; // x6
  PartyListViewItem_o *v4038; // x7
  GachaPickupCollateralMaster_o *v4039; // x20
  int64_t v4040; // x2
  int32_t v4041; // w3
  System_String_o *v4042; // x4
  BattleSetupInfo_o *v4043; // x5
  FollowerInfo_o *v4044; // x6
  PartyListViewItem_o *v4045; // x7
  GachaPickupCollateralGroupMaster_o *v4046; // x20
  int64_t v4047; // x2
  int32_t v4048; // w3
  System_String_o *v4049; // x4
  BattleSetupInfo_o *v4050; // x5
  FollowerInfo_o *v4051; // x6
  PartyListViewItem_o *v4052; // x7
  BattlePointMaster_o *v4053; // x20
  int64_t v4054; // x2
  int32_t v4055; // w3
  System_String_o *v4056; // x4
  BattleSetupInfo_o *v4057; // x5
  FollowerInfo_o *v4058; // x6
  PartyListViewItem_o *v4059; // x7
  BattlePointPhaseMaster_o *v4060; // x20
  int64_t v4061; // x2
  int32_t v4062; // w3
  System_String_o *v4063; // x4
  BattleSetupInfo_o *v4064; // x5
  FollowerInfo_o *v4065; // x6
  PartyListViewItem_o *v4066; // x7
  ServantBattlePointMaster_o *v4067; // x20
  int64_t v4068; // x2
  int32_t v4069; // w3
  System_String_o *v4070; // x4
  BattleSetupInfo_o *v4071; // x5
  FollowerInfo_o *v4072; // x6
  PartyListViewItem_o *v4073; // x7
  EffectMovieMaster_o *v4074; // x20
  int64_t v4075; // x2
  int32_t v4076; // w3
  System_String_o *v4077; // x4
  BattleSetupInfo_o *v4078; // x5
  FollowerInfo_o *v4079; // x6
  PartyListViewItem_o *v4080; // x7
  PaymentLimitMaster_o *v4081; // x20
  int64_t v4082; // x2
  int32_t v4083; // w3
  System_String_o *v4084; // x4
  BattleSetupInfo_o *v4085; // x5
  FollowerInfo_o *v4086; // x6
  PartyListViewItem_o *v4087; // x7
  UserPaymentLimitMaster_o *v4088; // x20
  int64_t v4089; // x2
  int32_t v4090; // w3
  System_String_o *v4091; // x4
  BattleSetupInfo_o *v4092; // x5
  FollowerInfo_o *v4093; // x6
  PartyListViewItem_o *v4094; // x7
  RoadmapMaster_o *v4095; // x20
  int64_t v4096; // x2
  int32_t v4097; // w3
  System_String_o *v4098; // x4
  BattleSetupInfo_o *v4099; // x5
  FollowerInfo_o *v4100; // x6
  PartyListViewItem_o *v4101; // x7
  UserRecommendSupportMaster_o *v4102; // x20
  int64_t v4103; // x2
  int32_t v4104; // w3
  System_String_o *v4105; // x4
  BattleSetupInfo_o *v4106; // x5
  FollowerInfo_o *v4107; // x6
  PartyListViewItem_o *v4108; // x7
  RecommendSupportQuestMaster_o *v4109; // x20
  int64_t v4110; // x2
  int32_t v4111; // w3
  System_String_o *v4112; // x4
  BattleSetupInfo_o *v4113; // x5
  FollowerInfo_o *v4114; // x6
  PartyListViewItem_o *v4115; // x7
  RecommendAdviceMessageMaster_o *v4116; // x20
  int64_t v4117; // x2
  int32_t v4118; // w3
  System_String_o *v4119; // x4
  BattleSetupInfo_o *v4120; // x5
  FollowerInfo_o *v4121; // x6
  PartyListViewItem_o *v4122; // x7
  UserRecommendFollowerMaster_o *v4123; // x20
  int64_t v4124; // x2
  int32_t v4125; // w3
  System_String_o *v4126; // x4
  BattleSetupInfo_o *v4127; // x5
  FollowerInfo_o *v4128; // x6
  PartyListViewItem_o *v4129; // x7
  ItemDropEfficiencyMaster_o *v4130; // x20
  int64_t v4131; // x2
  int32_t v4132; // w3
  System_String_o *v4133; // x4
  BattleSetupInfo_o *v4134; // x5
  FollowerInfo_o *v4135; // x6
  PartyListViewItem_o *v4136; // x7
  BlankEarthGimmickAddMaster_o *v4137; // x20
  int64_t v4138; // x2
  int32_t v4139; // w3
  System_String_o *v4140; // x4
  BattleSetupInfo_o *v4141; // x5
  FollowerInfo_o *v4142; // x6
  PartyListViewItem_o *v4143; // x7
  WarReleaseMaster_o *v4144; // x20
  int64_t v4145; // x2
  int32_t v4146; // w3
  System_String_o *v4147; // x4
  BattleSetupInfo_o *v4148; // x5
  FollowerInfo_o *v4149; // x6
  PartyListViewItem_o *v4150; // x7
  SelectBonusBaseMaster_o *v4151; // x20
  int64_t v4152; // x2
  int32_t v4153; // w3
  System_String_o *v4154; // x4
  BattleSetupInfo_o *v4155; // x5
  FollowerInfo_o *v4156; // x6
  PartyListViewItem_o *v4157; // x7
  SelectBonusMaster_o *v4158; // x20
  int64_t v4159; // x2
  int32_t v4160; // w3
  System_String_o *v4161; // x4
  BattleSetupInfo_o *v4162; // x5
  FollowerInfo_o *v4163; // x6
  PartyListViewItem_o *v4164; // x7
  MyroomServantSpecialImageMaster_o *v4165; // x20
  int64_t v4166; // x2
  int32_t v4167; // w3
  System_String_o *v4168; // x4
  BattleSetupInfo_o *v4169; // x5
  FollowerInfo_o *v4170; // x6
  PartyListViewItem_o *v4171; // x7
  ShopResetMaster_o *v4172; // x20
  int64_t v4173; // x2
  int32_t v4174; // w3
  System_String_o *v4175; // x4
  BattleSetupInfo_o *v4176; // x5
  FollowerInfo_o *v4177; // x6
  PartyListViewItem_o *v4178; // x7
  NpcServantDisplayTypeDetailMaster_o *v4179; // x20
  int64_t v4180; // x2
  int32_t v4181; // w3
  System_String_o *v4182; // x4
  BattleSetupInfo_o *v4183; // x5
  FollowerInfo_o *v4184; // x6
  PartyListViewItem_o *v4185; // x7
  FriendshipServantMaster_o *v4186; // x20
  int64_t v4187; // x2
  int32_t v4188; // w3
  System_String_o *v4189; // x4
  BattleSetupInfo_o *v4190; // x5
  FollowerInfo_o *v4191; // x6
  PartyListViewItem_o *v4192; // x7
  ExchangeSvtCoinGivenNumMaster_o *v4193; // x20
  int64_t v4194; // x2
  int32_t v4195; // w3
  System_String_o *v4196; // x4
  BattleSetupInfo_o *v4197; // x5
  FollowerInfo_o *v4198; // x6
  PartyListViewItem_o *v4199; // x7
  ChaldeaGatePickupMaster_o *v4200; // x20
  int64_t v4201; // x2
  int32_t v4202; // w3
  System_String_o *v4203; // x4
  BattleSetupInfo_o *v4204; // x5
  FollowerInfo_o *v4205; // x6
  PartyListViewItem_o *v4206; // x7
  WarGroupIgnoreMaster_o *v4207; // x20
  int64_t v4208; // x2
  int32_t v4209; // w3
  System_String_o *v4210; // x4
  BattleSetupInfo_o *v4211; // x5
  FollowerInfo_o *v4212; // x6
  PartyListViewItem_o *v4213; // x7
  __int64 v4215; // x0

  if ( (byte_4B666DE & 1) == 0 )
  {
    sub_1BE4ACC(&AccessaryMaster_TypeInfo, v1);
    sub_1BE4ACC(&AdCheckPointMaster_TypeInfo, v2);
    sub_1BE4ACC(&AiActMaster_TypeInfo, v3);
    sub_1BE4ACC(&AiFieldMaster_TypeInfo, v4);
    sub_1BE4ACC(&AiMaster_TypeInfo, v5);
    sub_1BE4ACC(&AreaMaster_TypeInfo, v6);
    sub_1BE4ACC(&AssistMaster_TypeInfo, v7);
    sub_1BE4ACC(&AttriMaster_TypeInfo, v8);
    sub_1BE4ACC(&AttriRelationMaster_TypeInfo, v9);
    sub_1BE4ACC(&AuraEffectMaster_TypeInfo, v10);
    sub_1BE4ACC(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1BE4ACC(&BankShopMaster_TypeInfo, v12);
    sub_1BE4ACC(&BannerAddMaster_TypeInfo, v13);
    sub_1BE4ACC(&BannerMaster_TypeInfo, v14);
    sub_1BE4ACC(&BattleBgMaster_TypeInfo, v15);
    sub_1BE4ACC(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1BE4ACC(&BattleMaster_TypeInfo, v17);
    sub_1BE4ACC(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1BE4ACC(&BattleMessageMaster_TypeInfo, v19);
    sub_1BE4ACC(&BattlePointMaster_TypeInfo, v20);
    sub_1BE4ACC(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1BE4ACC(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1BE4ACC(&BgmMaster_TypeInfo, v23);
    sub_1BE4ACC(&BgmReleaseMaster_TypeInfo, v24);
    sub_1BE4ACC(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1BE4ACC(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1BE4ACC(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1BE4ACC(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1BE4ACC(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1BE4ACC(&BoardMessageMaster_TypeInfo, v30);
    sub_1BE4ACC(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1BE4ACC(&BoostMaster_TypeInfo, v32);
    sub_1BE4ACC(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1BE4ACC(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1BE4ACC(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1BE4ACC(&BoxGachaMaster_TypeInfo, v36);
    sub_1BE4ACC(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1BE4ACC(&BuffConvertMaster_TypeInfo, v38);
    sub_1BE4ACC(&BuffMaster_TypeInfo, v39);
    sub_1BE4ACC(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1BE4ACC(&CampaignInfoMaster_TypeInfo, v41);
    sub_1BE4ACC(&CardMaster_TypeInfo, v42);
    sub_1BE4ACC(&ChaldeaGatePickupMaster_TypeInfo, v43);
    sub_1BE4ACC(&ClassBoardBaseMaster_TypeInfo, v44);
    sub_1BE4ACC(&ClassBoardClassMaster_TypeInfo, v45);
    sub_1BE4ACC(&ClassBoardCommandSpellMaster_TypeInfo, v46);
    sub_1BE4ACC(&ClassBoardLineMaster_TypeInfo, v47);
    sub_1BE4ACC(&ClassBoardLockMaster_TypeInfo, v48);
    sub_1BE4ACC(&ClassBoardSquareMaster_TypeInfo, v49);
    sub_1BE4ACC(&ClassRelationMaster_TypeInfo, v50);
    sub_1BE4ACC(&ClassRelationOverwriteMaster_TypeInfo, v51);
    sub_1BE4ACC(&ClosedMessageMaster_TypeInfo, v52);
    sub_1BE4ACC(&CombineAppendPassiveSkillMaster_TypeInfo, v53);
    sub_1BE4ACC(&CombineCostumeMaster_TypeInfo, v54);
    sub_1BE4ACC(&CombineLimitGiftMaster_TypeInfo, v55);
    sub_1BE4ACC(&CombineLimitMaster_TypeInfo, v56);
    sub_1BE4ACC(&CombineLimitReleaseMaster_TypeInfo, v57);
    sub_1BE4ACC(&CombineMaster_TypeInfo, v58);
    sub_1BE4ACC(&CombineMaterialMaster_TypeInfo, v59);
    sub_1BE4ACC(&CombineQpMaster_TypeInfo, v60);
    sub_1BE4ACC(&CombineQpSvtEquipMaster_TypeInfo, v61);
    sub_1BE4ACC(&CombineSkillMaster_TypeInfo, v62);
    sub_1BE4ACC(&CombineTdMaster_TypeInfo, v63);
    sub_1BE4ACC(&CommandCardRankParamMaster_TypeInfo, v64);
    sub_1BE4ACC(&CommandCodeCommentMaster_TypeInfo, v65);
    sub_1BE4ACC(&CommandCodeMaster_TypeInfo, v66);
    sub_1BE4ACC(&CommandCodeSkillMaster_TypeInfo, v67);
    sub_1BE4ACC(&CommandCodeSkillReleaseMaster_TypeInfo, v68);
    sub_1BE4ACC(&CommandSpellMaster_TypeInfo, v69);
    sub_1BE4ACC(&CommonConsumeMaster_TypeInfo, v70);
    sub_1BE4ACC(&CommonReleaseMaster_TypeInfo, v71);
    sub_1BE4ACC(&CommonRestrictionMaster_TypeInfo, v72);
    sub_1BE4ACC(&CompleteMissionMaster_TypeInfo, v73);
    sub_1BE4ACC(&ConstantLongMaster_TypeInfo, v74);
    sub_1BE4ACC(&ConstantMaster_TypeInfo, v75);
    sub_1BE4ACC(&ConstantStrMaster_TypeInfo, v76);
    sub_1BE4ACC(&CvMaster_TypeInfo, v77);
    sub_1BE4ACC(&DataMasterBase___TypeInfo, v78);
    sub_1BE4ACC(&DialogMessageMaster_TypeInfo, v79);
    sub_1BE4ACC(&EffectMaster_TypeInfo, v80);
    sub_1BE4ACC(&EffectMovieMaster_TypeInfo, v81);
    sub_1BE4ACC(&EnemyMstBattleMaster_TypeInfo, v82);
    sub_1BE4ACC(&EnemyMstMaster_TypeInfo, v83);
    sub_1BE4ACC(&EquipAddMaster_TypeInfo, v84);
    sub_1BE4ACC(&EquipExpMaster_TypeInfo, v85);
    sub_1BE4ACC(&EquipImageMaster_TypeInfo, v86);
    sub_1BE4ACC(&EquipMaster_TypeInfo, v87);
    sub_1BE4ACC(&EquipSkillMaster_TypeInfo, v88);
    sub_1BE4ACC(&EventAddMaster_TypeInfo, v89);
    sub_1BE4ACC(&EventBoardGameCellMaster_TypeInfo, v90);
    sub_1BE4ACC(&EventBoardGameTokenMaster_TypeInfo, v91);
    sub_1BE4ACC(&EventBoardGameTokenRewardMaster_TypeInfo, v92);
    sub_1BE4ACC(&EventBonusFilterGroupInfoMaster_TypeInfo, v93);
    sub_1BE4ACC(&EventBonusFilterGroupMemberMaster_TypeInfo, v94);
    sub_1BE4ACC(&EventBonusFilterMaster_TypeInfo, v95);
    sub_1BE4ACC(&EventBoostItemUsedMaster_TypeInfo, v96);
    sub_1BE4ACC(&EventBossStatusUiMaster_TypeInfo, v97);
    sub_1BE4ACC(&EventBuddyPointMaster_TypeInfo, v98);
    sub_1BE4ACC(&EventBulletinBoardMaster_TypeInfo, v99);
    sub_1BE4ACC(&EventBulletinBoardReleaseMaster_TypeInfo, v100);
    sub_1BE4ACC(&EventCampaignMaster_TypeInfo, v101);
    sub_1BE4ACC(&EventCampaignReleaseMaster_TypeInfo, v102);
    sub_1BE4ACC(&EventCombineCostumeMaster_TypeInfo, v103);
    sub_1BE4ACC(&EventCombineMaster_TypeInfo, v104);
    sub_1BE4ACC(&EventCommandAssistMaster_TypeInfo, v105);
    sub_1BE4ACC(&EventConquestRewardMaster_TypeInfo, v106);
    sub_1BE4ACC(&EventCooltimeRewardMaster_TypeInfo, v107);
    sub_1BE4ACC(&EventDataLostBattleMaster_TypeInfo, v108);
    sub_1BE4ACC(&EventDataLostBattleResetMaster_TypeInfo, v109);
    sub_1BE4ACC(&EventDetailMaster_TypeInfo, v110);
    sub_1BE4ACC(&EventDiggingBlockMaster_TypeInfo, v111);
    sub_1BE4ACC(&EventDiggingMaster_TypeInfo, v112);
    sub_1BE4ACC(&EventDiggingRewardMaster_TypeInfo, v113);
    sub_1BE4ACC(&EventEquipSkillReleaseMaster_TypeInfo, v114);
    sub_1BE4ACC(&EventExpeditionMaster_TypeInfo, v115);
    sub_1BE4ACC(&EventExpeditionPieceMaster_TypeInfo, v116);
    sub_1BE4ACC(&EventFactoryMaster_TypeInfo, v117);
    sub_1BE4ACC(&EventFatigueRecoveryMaster_TypeInfo, v118);
    sub_1BE4ACC(&EventFilterMaster_TypeInfo, v119);
    sub_1BE4ACC(&EventFortificationDetailMaster_TypeInfo, v120);
    sub_1BE4ACC(&EventFortificationMaster_TypeInfo, v121);
    sub_1BE4ACC(&EventFortificationSvtMaster_TypeInfo, v122);
    sub_1BE4ACC(&EventGroupMaster_TypeInfo, v123);
    sub_1BE4ACC(&EventItemDisplayGroupMaster_TypeInfo, v124);
    sub_1BE4ACC(&EventItemDisplayMaster_TypeInfo, v125);
    sub_1BE4ACC(&EventItemDisplayReleaseMaster_TypeInfo, v126);
    sub_1BE4ACC(&EventLocationCampaignMaster_TypeInfo, v127);
    sub_1BE4ACC(&EventMaster_TypeInfo, v128);
    sub_1BE4ACC(&EventMissionActionAddMaster_TypeInfo, v129);
    sub_1BE4ACC(&EventMissionActionMaster_TypeInfo, v130);
    sub_1BE4ACC(&EventMissionAddMaster_TypeInfo, v131);
    sub_1BE4ACC(&EventMissionCondDetailMaster_TypeInfo, v132);
    sub_1BE4ACC(&EventMissionConditionMaster_TypeInfo, v133);
    sub_1BE4ACC(&EventMissionGroupMaster_TypeInfo, v134);
    sub_1BE4ACC(&EventMissionMaster_TypeInfo, v135);
    sub_1BE4ACC(&EventMuralMaster_TypeInfo, v136);
    sub_1BE4ACC(&EventPanelMapDetailMaster_TypeInfo, v137);
    sub_1BE4ACC(&EventPanelMapMaster_TypeInfo, v138);
    sub_1BE4ACC(&EventPanelScanMaster_TypeInfo, v139);
    sub_1BE4ACC(&EventPanelSpotMaster_TypeInfo, v140);
    sub_1BE4ACC(&EventPointActivityMaster_TypeInfo, v141);
    sub_1BE4ACC(&EventPointBuffMaster_TypeInfo, v142);
    sub_1BE4ACC(&EventPointGroupAddMaster_TypeInfo, v143);
    sub_1BE4ACC(&EventPointGroupMaster_TypeInfo, v144);
    sub_1BE4ACC(&EventPointMaster_TypeInfo, v145);
    sub_1BE4ACC(&EventPointUpperMaster_TypeInfo, v146);
    sub_1BE4ACC(&EventPointUpperReleaseMaster_TypeInfo, v147);
    sub_1BE4ACC(&EventProgressValueMaster_TypeInfo, v148);
    sub_1BE4ACC(&EventQuestCooltimeMaster_TypeInfo, v149);
    sub_1BE4ACC(&EventQuestMaster_TypeInfo, v150);
    sub_1BE4ACC(&EventRaceMaster_TypeInfo, v151);
    sub_1BE4ACC(&EventRaceResultMaster_TypeInfo, v152);
    sub_1BE4ACC(&EventRaidMaster_TypeInfo, v153);
    sub_1BE4ACC(&EventRandomMissionMaster_TypeInfo, v154);
    sub_1BE4ACC(&EventRecipeGiftMaster_TypeInfo, v155);
    sub_1BE4ACC(&EventRecipeMaster_TypeInfo, v156);
    sub_1BE4ACC(&EventRewardBgMaster_TypeInfo, v157);
    sub_1BE4ACC(&EventRewardExtraMaster_TypeInfo, v158);
    sub_1BE4ACC(&EventRewardGuideReleaseMaster_TypeInfo, v159);
    sub_1BE4ACC(&EventRewardMaster_TypeInfo, v160);
    sub_1BE4ACC(&EventRewardSceneMaster_TypeInfo, v161);
    sub_1BE4ACC(&EventRewardSceneReleaseMaster_TypeInfo, v162);
    sub_1BE4ACC(&EventRewardSetMaster_TypeInfo, v163);
    sub_1BE4ACC(&EventScriptMaster_TypeInfo, v164);
    sub_1BE4ACC(&EventScriptReleaseMaster_TypeInfo, v165);
    sub_1BE4ACC(&EventServantFatigueMaster_TypeInfo, v166);
    sub_1BE4ACC(&EventServantMaster_TypeInfo, v167);
    sub_1BE4ACC(&EventServantPointRankMaster_TypeInfo, v168);
    sub_1BE4ACC(&EventStatusMaster_TypeInfo, v169);
    sub_1BE4ACC(&EventStatusQuestMaster_TypeInfo, v170);
    sub_1BE4ACC(&EventSuperBossMaster_TypeInfo, v171);
    sub_1BE4ACC(&EventTowerMaster_TypeInfo, v172);
    sub_1BE4ACC(&EventTowerRewardMaster_TypeInfo, v173);
    sub_1BE4ACC(&EventTradeGoodsMaster_TypeInfo, v174);
    sub_1BE4ACC(&EventTradePickupMaster_TypeInfo, v175);
    sub_1BE4ACC(&EventTradeStoreMaster_TypeInfo, v176);
    sub_1BE4ACC(&EventTutorialCondMaster_TypeInfo, v177);
    sub_1BE4ACC(&EventTutorialMaster_TypeInfo, v178);
    sub_1BE4ACC(&EventUiMaster_TypeInfo, v179);
    sub_1BE4ACC(&EventUiReleaseMaster_TypeInfo, v180);
    sub_1BE4ACC(&EventUiValueMaster_TypeInfo, v181);
    sub_1BE4ACC(&EventVoicePlayMaster_TypeInfo, v182);
    sub_1BE4ACC(&ExchangeSvtCoinGivenNumMaster_TypeInfo, v183);
    sub_1BE4ACC(&ExcludeMotionMaster_TypeInfo, v184);
    sub_1BE4ACC(&FieldMotionMaster_TypeInfo, v185);
    sub_1BE4ACC(&FriendshipMaster_TypeInfo, v186);
    sub_1BE4ACC(&FriendshipQuestDialogInfoMaster_TypeInfo, v187);
    sub_1BE4ACC(&FriendshipServantMaster_TypeInfo, v188);
    sub_1BE4ACC(&FuncDispMaster_TypeInfo, v189);
    sub_1BE4ACC(&FuncTypeDetailMaster_TypeInfo, v190);
    sub_1BE4ACC(&FunctionCategoryMaster_TypeInfo, v191);
    sub_1BE4ACC(&FunctionGroupMaster_TypeInfo, v192);
    sub_1BE4ACC(&FunctionMaster_TypeInfo, v193);
    sub_1BE4ACC(&GachaAdjustAddMaster_TypeInfo, v194);
    sub_1BE4ACC(&GachaAppendMaster_TypeInfo, v195);
    sub_1BE4ACC(&GachaBaseCollateralMaster_TypeInfo, v196);
    sub_1BE4ACC(&GachaBehaviorMaster_TypeInfo, v197);
    sub_1BE4ACC(&GachaBonusSelectLineupMaster_TypeInfo, v198);
    sub_1BE4ACC(&GachaBonusSelectMaster_TypeInfo, v199);
    sub_1BE4ACC(&GachaDetailMaster_TypeInfo, v200);
    sub_1BE4ACC(&GachaExtraGiftMaster_TypeInfo, v201);
    sub_1BE4ACC(&GachaGroupMaster_TypeInfo, v202);
    sub_1BE4ACC(&GachaImageMaster_TypeInfo, v203);
    sub_1BE4ACC(&GachaMaster_TypeInfo, v204);
    sub_1BE4ACC(&GachaPickupCollateralGroupMaster_TypeInfo, v205);
    sub_1BE4ACC(&GachaPickupCollateralMaster_TypeInfo, v206);
    sub_1BE4ACC(&GachaReleaseMaster_TypeInfo, v207);
    sub_1BE4ACC(&GachaStoryAdjustMaster_TypeInfo, v208);
    sub_1BE4ACC(&GachaSubMaster_TypeInfo, v209);
    sub_1BE4ACC(&GachaTicketMaster_TypeInfo, v210);
    sub_1BE4ACC(&GiftAddMaster_TypeInfo, v211);
    sub_1BE4ACC(&GiftDetailMaster_TypeInfo, v212);
    sub_1BE4ACC(&GiftMaster_TypeInfo, v213);
    sub_1BE4ACC(&GuideMaster_TypeInfo, v214);
    sub_1BE4ACC(&HeelPortraitMaster_TypeInfo, v215);
    sub_1BE4ACC(&IllustratorMaster_TypeInfo, v216);
    sub_1BE4ACC(&IndividualityPersonalityMaster_TypeInfo, v217);
    sub_1BE4ACC(&IndividualityPolicyMaster_TypeInfo, v218);
    sub_1BE4ACC(&ItemDropEfficiencyMaster_TypeInfo, v219);
    sub_1BE4ACC(&ItemMaster_TypeInfo, v220);
    sub_1BE4ACC(&ItemSelectMaster_TypeInfo, v221);
    sub_1BE4ACC(&LoginQuestMaster_TypeInfo, v222);
    sub_1BE4ACC(&MapButtonMaster_TypeInfo, v223);
    sub_1BE4ACC(&MapCondMaster_TypeInfo, v224);
    sub_1BE4ACC(&MapGimmickLayerMaster_TypeInfo, v225);
    sub_1BE4ACC(&MapGimmickMaster_TypeInfo, v226);
    sub_1BE4ACC(&MapGimmickPathMaster_TypeInfo, v227);
    sub_1BE4ACC(&MapGimmickPathReleaseMaster_TypeInfo, v228);
    sub_1BE4ACC(&MapGimmickReleaseMaster_TypeInfo, v229);
    sub_1BE4ACC(&MapLayerMaster_TypeInfo, v230);
    sub_1BE4ACC(&MapMaster_TypeInfo, v231);
    sub_1BE4ACC(&MapUpdateScheduleMaster_TypeInfo, v232);
    sub_1BE4ACC(&MasterPhotoMaster_TypeInfo, v233);
    sub_1BE4ACC(&MaterialFolderMaster_TypeInfo, v234);
    sub_1BE4ACC(&MissionNaviQuestMaster_TypeInfo, v235);
    sub_1BE4ACC(&MissionNaviTransitionMaster_TypeInfo, v236);
    sub_1BE4ACC(&MstMissionDisplayInfoMaster_TypeInfo, v237);
    sub_1BE4ACC(&MstMissionMaster_TypeInfo, v238);
    sub_1BE4ACC(&MyRoomAddMaster_TypeInfo, v239);
    sub_1BE4ACC(&MyroomServantSpecialImageMaster_TypeInfo, v240);
    sub_1BE4ACC(&NewsMaster_TypeInfo, v241);
    sub_1BE4ACC(&NotEndEventMissionFixMaster_TypeInfo, v242);
    sub_1BE4ACC(&NpcFollowerMaster_TypeInfo, v243);
    sub_1BE4ACC(&NpcFollowerReleaseMaster_TypeInfo, v244);
    sub_1BE4ACC(&NpcServantDisplayTypeDetailMaster_TypeInfo, v245);
    sub_1BE4ACC(&NpcServantEquipMaster_TypeInfo, v246);
    sub_1BE4ACC(&NpcServantFollowerIndividualityMaster_TypeInfo, v247);
    sub_1BE4ACC(&NpcServantFollowerMaster_TypeInfo, v248);
    sub_1BE4ACC(&OpeningMovieMaster_TypeInfo, v249);
    sub_1BE4ACC(&OtherUserGameMaster_TypeInfo, v250);
    sub_1BE4ACC(&PartialMaintenanceMaster_TypeInfo, v251);
    sub_1BE4ACC(&PaymentHistoryMaster_TypeInfo, v252);
    sub_1BE4ACC(&PaymentLimitMaster_TypeInfo, v253);
    sub_1BE4ACC(&PickupUserFollowerMaster_TypeInfo, v254);
    sub_1BE4ACC(&PrivilegeMaster_TypeInfo, v255);
    sub_1BE4ACC(&QuestAddMaster_TypeInfo, v256);
    sub_1BE4ACC(&QuestAutoOrganizationAdjustMaster_TypeInfo, v257);
    sub_1BE4ACC(&QuestBehaviorMaster_TypeInfo, v258);
    sub_1BE4ACC(&QuestConsumeItemMaster_TypeInfo, v259);
    sub_1BE4ACC(&QuestDateRangeMaster_TypeInfo, v260);
    sub_1BE4ACC(&QuestGroupMaster_TypeInfo, v261);
    sub_1BE4ACC(&QuestHintMaster_TypeInfo, v262);
    sub_1BE4ACC(&QuestMaster_TypeInfo, v263);
    sub_1BE4ACC(&QuestMessageMaster_TypeInfo, v264);
    sub_1BE4ACC(&QuestPhaseDetailAddMaster_TypeInfo, v265);
    sub_1BE4ACC(&QuestPhaseDetailMaster_TypeInfo, v266);
    sub_1BE4ACC(&QuestPhaseIndividualityMaster_TypeInfo, v267);
    sub_1BE4ACC(&QuestPhaseMaster_TypeInfo, v268);
    sub_1BE4ACC(&QuestPhasePresentMaster_TypeInfo, v269);
    sub_1BE4ACC(&QuestPickupMaster_TypeInfo, v270);
    sub_1BE4ACC(&QuestRacePointMaster_TypeInfo, v271);
    sub_1BE4ACC(&QuestRandomGroupMaster_TypeInfo, v272);
    sub_1BE4ACC(&QuestReleaseMaster_TypeInfo, v273);
    sub_1BE4ACC(&QuestReleaseOverwriteMaster_TypeInfo, v274);
    sub_1BE4ACC(&QuestResetMaster_TypeInfo, v275);
    sub_1BE4ACC(&QuestRestrictionInfoMaster_TypeInfo, v276);
    sub_1BE4ACC(&QuestRestrictionMaster_TypeInfo, v277);
    sub_1BE4ACC(&QuestScriptBranchMaterialMaster_TypeInfo, v278);
    sub_1BE4ACC(&QuestScriptMaster_TypeInfo, v279);
    sub_1BE4ACC(&QuestScriptMaterialNextMaster_TypeInfo, v280);
    sub_1BE4ACC(&QuestScriptMaterialOverwriteMaster_TypeInfo, v281);
    sub_1BE4ACC(&QuestScriptReleaseMaster_TypeInfo, v282);
    sub_1BE4ACC(&QuestSpotReleaseMaster_TypeInfo, v283);
    sub_1BE4ACC(&RecommendAdviceMessageMaster_TypeInfo, v284);
    sub_1BE4ACC(&RecommendSupportQuestMaster_TypeInfo, v285);
    sub_1BE4ACC(&RecoverMaster_TypeInfo, v286);
    sub_1BE4ACC(&ReprintStageMaster_TypeInfo, v287);
    sub_1BE4ACC(&RestrictionBaseMaster_TypeInfo, v288);
    sub_1BE4ACC(&RestrictionMaster_TypeInfo, v289);
    sub_1BE4ACC(&RestrictionMessageMaster_TypeInfo, v290);
    sub_1BE4ACC(&RestrictionSlotDetailMaster_TypeInfo, v291);
    sub_1BE4ACC(&RestrictionSlotMaster_TypeInfo, v292);
    sub_1BE4ACC(&RestrictionWholeMaster_TypeInfo, v293);
    sub_1BE4ACC(&RoadmapMaster_TypeInfo, v294);
    sub_1BE4ACC(&SelectBonusBaseMaster_TypeInfo, v295);
    sub_1BE4ACC(&SelectBonusMaster_TypeInfo, v296);
    sub_1BE4ACC(&ServantAddMaster_TypeInfo, v297);
    sub_1BE4ACC(&ServantAnimationOverwriteMaster_TypeInfo, v298);
    sub_1BE4ACC(&ServantAppendPassiveSkillMaster_TypeInfo, v299);
    sub_1BE4ACC(&ServantBattlePointMaster_TypeInfo, v300);
    sub_1BE4ACC(&ServantCardAddMaster_TypeInfo, v301);
    sub_1BE4ACC(&ServantCardMaster_TypeInfo, v302);
    sub_1BE4ACC(&ServantChangeMaster_TypeInfo, v303);
    sub_1BE4ACC(&ServantClassMaster_TypeInfo, v304);
    sub_1BE4ACC(&ServantCollectionMaster_TypeInfo, v305);
    sub_1BE4ACC(&ServantCommandCodeUnlockMaster_TypeInfo, v306);
    sub_1BE4ACC(&ServantCommentAddMaster_TypeInfo, v307);
    sub_1BE4ACC(&ServantCommentMaster_TypeInfo, v308);
    sub_1BE4ACC(&ServantCostumeMaster_TypeInfo, v309);
    sub_1BE4ACC(&ServantCostumeReleaseMaster_TypeInfo, v310);
    sub_1BE4ACC(&ServantExceedMaster_TypeInfo, v311);
    sub_1BE4ACC(&ServantExpMaster_TypeInfo, v312);
    sub_1BE4ACC(&ServantFilterMaster_TypeInfo, v313);
    sub_1BE4ACC(&ServantFlagMaster_TypeInfo, v314);
    sub_1BE4ACC(&ServantFlagReleaseMaster_TypeInfo, v315);
    sub_1BE4ACC(&ServantGroupMaster_TypeInfo, v316);
    sub_1BE4ACC(&ServantIndividualityMaster_TypeInfo, v317);
    sub_1BE4ACC(&ServantLimitAddMaster_TypeInfo, v318);
    sub_1BE4ACC(&ServantLimitImageMaster_TypeInfo, v319);
    sub_1BE4ACC(&ServantLimitMaster_TypeInfo, v320);
    sub_1BE4ACC(&ServantLimitSpoilerProtectionMaster_TypeInfo, v321);
    sub_1BE4ACC(&ServantLvDetailMaster_TypeInfo, v322);
    sub_1BE4ACC(&ServantMaster_TypeInfo, v323);
    sub_1BE4ACC(&ServantMaterialFolderMaster_TypeInfo, v324);
    sub_1BE4ACC(&ServantOverwriteMaster_TypeInfo, v325);
    sub_1BE4ACC(&ServantPassiveSkillMaster_TypeInfo, v326);
    sub_1BE4ACC(&ServantPassiveSkillReleaseMaster_TypeInfo, v327);
    sub_1BE4ACC(&ServantPhotoMaster_TypeInfo, v328);
    sub_1BE4ACC(&ServantProfileMaster_TypeInfo, v329);
    sub_1BE4ACC(&ServantProfilePushMaster_TypeInfo, v330);
    sub_1BE4ACC(&ServantRarityMaster_TypeInfo, v331);
    sub_1BE4ACC(&ServantScriptAddMaster_TypeInfo, v332);
    sub_1BE4ACC(&ServantScriptMaster_TypeInfo, v333);
    sub_1BE4ACC(&ServantScriptMultipleMaster_TypeInfo, v334);
    sub_1BE4ACC(&ServantSkillMaster_TypeInfo, v335);
    sub_1BE4ACC(&ServantSkillReleaseMaster_TypeInfo, v336);
    sub_1BE4ACC(&ServantTransformMaster_TypeInfo, v337);
    sub_1BE4ACC(&ServantTreasureDeviceAddMaster_TypeInfo, v338);
    sub_1BE4ACC(&ServantTreasureDeviceDamageMaster_TypeInfo, v339);
    sub_1BE4ACC(&ServantTreasureDeviceReleaseMaster_TypeInfo, v340);
    sub_1BE4ACC(&ServantTreasureDvcMaster_TypeInfo, v341);
    sub_1BE4ACC(&ServantVoiceMaster_TypeInfo, v342);
    sub_1BE4ACC(&ServantVoicePatternMaster_TypeInfo, v343);
    sub_1BE4ACC(&ServantVoiceRelationMaster_TypeInfo, v344);
    sub_1BE4ACC(&SetItemMaster_TypeInfo, v345);
    sub_1BE4ACC(&ShopActionMaster_TypeInfo, v346);
    sub_1BE4ACC(&ShopDetailMaster_TypeInfo, v347);
    sub_1BE4ACC(&ShopGroupMaster_TypeInfo, v348);
    sub_1BE4ACC(&ShopMaster_TypeInfo, v349);
    sub_1BE4ACC(&ShopReleaseMaster_TypeInfo, v350);
    sub_1BE4ACC(&ShopResetMaster_TypeInfo, v351);
    sub_1BE4ACC(&ShopScriptMaster_TypeInfo, v352);
    sub_1BE4ACC(&SkillAddMaster_TypeInfo, v353);
    sub_1BE4ACC(&SkillDetailMaster_TypeInfo, v354);
    sub_1BE4ACC(&SkillGroupMaster_TypeInfo, v355);
    sub_1BE4ACC(&SkillGroupOverwriteMaster_TypeInfo, v356);
    sub_1BE4ACC(&SkillIndividualityMaster_TypeInfo, v357);
    sub_1BE4ACC(&SkillLvMaster_TypeInfo, v358);
    sub_1BE4ACC(&SkillMaster_TypeInfo, v359);
    sub_1BE4ACC(&SpotAddMaster_TypeInfo, v360);
    sub_1BE4ACC(&SpotImageMaster_TypeInfo, v361);
    sub_1BE4ACC(&SpotLayerMaster_TypeInfo, v362);
    sub_1BE4ACC(&SpotMaster_TypeInfo, v363);
    sub_1BE4ACC(&SpotPathMaster_TypeInfo, v364);
    sub_1BE4ACC(&SpotRoadMaster_TypeInfo, v365);
    sub_1BE4ACC(&StageMaster_TypeInfo, v366);
    sub_1BE4ACC(&StatusEffectPosOverwriteMaster_TypeInfo, v367);
    sub_1BE4ACC(&StoneShopMaster_TypeInfo, v368);
    sub_1BE4ACC(&SubEquipMaster_TypeInfo, v369);
    sub_1BE4ACC(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v370);
    sub_1BE4ACC(&SvtCoinMaster_TypeInfo, v371);
    sub_1BE4ACC(&SvtMaterialTdMaster_TypeInfo, v372);
    sub_1BE4ACC(&SvtMultiPortraitMaster_TypeInfo, v373);
    sub_1BE4ACC(&TblFriendMaster_TypeInfo, v374);
    sub_1BE4ACC(&TblUserMaster_TypeInfo, v375);
    sub_1BE4ACC(&TelopMaster_TypeInfo, v376);
    sub_1BE4ACC(&TerminalOverwriteMaster_TypeInfo, v377);
    sub_1BE4ACC(&TipsBattleMaster_TypeInfo, v378);
    sub_1BE4ACC(&TotalBoxGachaMaster_TypeInfo, v379);
    sub_1BE4ACC(&TotalEventPointMaster_TypeInfo, v380);
    sub_1BE4ACC(&TotalEventRaceMaster_TypeInfo, v381);
    sub_1BE4ACC(&TotalEventRaidMaster_TypeInfo, v382);
    sub_1BE4ACC(&TotalLoginMaster_TypeInfo, v383);
    sub_1BE4ACC(&TreasureBoxGiftMaster_TypeInfo, v384);
    sub_1BE4ACC(&TreasureBoxMaster_TypeInfo, v385);
    sub_1BE4ACC(&TreasureBoxTalkMaster_TypeInfo, v386);
    sub_1BE4ACC(&TreasureDeviceSequenceWeightMaster_TypeInfo, v387);
    sub_1BE4ACC(&TreasureDvcDetailMaster_TypeInfo, v388);
    sub_1BE4ACC(&TreasureDvcLvMaster_TypeInfo, v389);
    sub_1BE4ACC(&TreasureDvcMaster_TypeInfo, v390);
    sub_1BE4ACC(&UpdateProfileDialogInfoMaster_TypeInfo, v391);
    sub_1BE4ACC(&UserAccessaryMaster_TypeInfo, v392);
    sub_1BE4ACC(&UserAccountLinkageMaster_TypeInfo, v393);
    sub_1BE4ACC(&UserBlacklistMaster_TypeInfo, v394);
    sub_1BE4ACC(&UserBoxGachaMaster_TypeInfo, v395);
    sub_1BE4ACC(&UserClassBoardSquareMaster_TypeInfo, v396);
    sub_1BE4ACC(&UserCoinRoomMaster_TypeInfo, v397);
    sub_1BE4ACC(&UserCombineExpMaster_TypeInfo, v398);
    sub_1BE4ACC(&UserCommandCodeCollectionMaster_TypeInfo, v399);
    sub_1BE4ACC(&UserCommandCodeMaster_TypeInfo, v400);
    sub_1BE4ACC(&UserContinueMaster_TypeInfo, v401);
    sub_1BE4ACC(&UserDeckMaster_TypeInfo, v402);
    sub_1BE4ACC(&UserDeleteReservationMaster_TypeInfo, v403);
    sub_1BE4ACC(&UserEquipMaster_TypeInfo, v404);
    sub_1BE4ACC(&UserEventAlloutBattleMaster_TypeInfo, v405);
    sub_1BE4ACC(&UserEventBoardGameTokenMaster_TypeInfo, v406);
    sub_1BE4ACC(&UserEventCooltimeRewardMaster_TypeInfo, v407);
    sub_1BE4ACC(&UserEventDataLostMaster_TypeInfo, v408);
    sub_1BE4ACC(&UserEventDeckMaster_TypeInfo, v409);
    sub_1BE4ACC(&UserEventDiggingMaster_TypeInfo, v410);
    sub_1BE4ACC(&UserEventExpeditionMaster_TypeInfo, v411);
    sub_1BE4ACC(&UserEventFortificationMaster_TypeInfo, v412);
    sub_1BE4ACC(&UserEventMapMaster_TypeInfo, v413);
    sub_1BE4ACC(&UserEventMaster_TypeInfo, v414);
    sub_1BE4ACC(&UserEventMissionCondDetailMaster_TypeInfo, v415);
    sub_1BE4ACC(&UserEventMissionFixMaster_TypeInfo, v416);
    sub_1BE4ACC(&UserEventMissionMaster_TypeInfo, v417);
    sub_1BE4ACC(&UserEventPointMaster_TypeInfo, v418);
    sub_1BE4ACC(&UserEventQuestCooltimeMaster_TypeInfo, v419);
    sub_1BE4ACC(&UserEventRaceMaster_TypeInfo, v420);
    sub_1BE4ACC(&UserEventRaidMaster_TypeInfo, v421);
    sub_1BE4ACC(&UserEventRandomMissionMaster_TypeInfo, v422);
    sub_1BE4ACC(&UserEventServantFatigueMaster_TypeInfo, v423);
    sub_1BE4ACC(&UserEventServantPointMaster_TypeInfo, v424);
    sub_1BE4ACC(&UserEventSpotMaster_TypeInfo, v425);
    sub_1BE4ACC(&UserEventTradeMaster_TypeInfo, v426);
    sub_1BE4ACC(&UserExchangeSvtMaster_TypeInfo, v427);
    sub_1BE4ACC(&UserExpMaster_TypeInfo, v428);
    sub_1BE4ACC(&UserExternalPaymentStoneMaster_TypeInfo, v429);
    sub_1BE4ACC(&UserFollowMaster_TypeInfo, v430);
    sub_1BE4ACC(&UserFollowerMaster_TypeInfo, v431);
    sub_1BE4ACC(&UserFormationMaster_TypeInfo, v432);
    sub_1BE4ACC(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v433);
    sub_1BE4ACC(&UserFriendRequestHistoryMaster_TypeInfo, v434);
    sub_1BE4ACC(&UserGachaDrawLogMaster_TypeInfo, v435);
    sub_1BE4ACC(&UserGachaExtraCountMaster_TypeInfo, v436);
    sub_1BE4ACC(&UserGachaHistoryMaster_TypeInfo, v437);
    sub_1BE4ACC(&UserGachaMaster_TypeInfo, v438);
    sub_1BE4ACC(&UserGachaPickupCollateralMaster_TypeInfo, v439);
    sub_1BE4ACC(&UserGameCommonMaster_TypeInfo, v440);
    sub_1BE4ACC(&UserGameMaster_TypeInfo, v441);
    sub_1BE4ACC(&UserHeelPortraitMaster_TypeInfo, v442);
    sub_1BE4ACC(&UserInterruptionQuestMaster_TypeInfo, v443);
    sub_1BE4ACC(&UserItemMaster_TypeInfo, v444);
    sub_1BE4ACC(&UserLoginMaster_TypeInfo, v445);
    sub_1BE4ACC(&UserMaster_TypeInfo, v446);
    sub_1BE4ACC(&UserNpcSvtRecordMaster_TypeInfo, v447);
    sub_1BE4ACC(&UserPaymentLimitMaster_TypeInfo, v448);
    sub_1BE4ACC(&UserPresentBoxMaster_TypeInfo, v449);
    sub_1BE4ACC(&UserPresentHistoryMaster_TypeInfo, v450);
    sub_1BE4ACC(&UserPrivilegeMaster_TypeInfo, v451);
    sub_1BE4ACC(&UserQuestInfoMaster_TypeInfo, v452);
    sub_1BE4ACC(&UserQuestMaster_TypeInfo, v453);
    sub_1BE4ACC(&UserQuestRecordMaster_TypeInfo, v454);
    sub_1BE4ACC(&UserQuestRouteMaster_TypeInfo, v455);
    sub_1BE4ACC(&UserRecommendFollowerMaster_TypeInfo, v456);
    sub_1BE4ACC(&UserRecommendSupportMaster_TypeInfo, v457);
    sub_1BE4ACC(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v458);
    sub_1BE4ACC(&UserServantAppendPassiveSkillMaster_TypeInfo, v459);
    sub_1BE4ACC(&UserServantCollectionMaster_TypeInfo, v460);
    sub_1BE4ACC(&UserServantCommandCardMaster_TypeInfo, v461);
    sub_1BE4ACC(&UserServantCommandCodeMaster_TypeInfo, v462);
    sub_1BE4ACC(&UserServantLeaderMaster_TypeInfo, v463);
    sub_1BE4ACC(&UserServantMaster_TypeInfo, v464);
    sub_1BE4ACC(&UserServantStorageMaster_TypeInfo, v465);
    sub_1BE4ACC(&UserServantVoicePlayedMaster_TypeInfo, v466);
    sub_1BE4ACC(&UserShopMaster_TypeInfo, v467);
    sub_1BE4ACC(&UserSubEquipMaster_TypeInfo, v468);
    sub_1BE4ACC(&UserSuperBossMaster_TypeInfo, v469);
    sub_1BE4ACC(&UserSupportDeckMaster_TypeInfo, v470);
    sub_1BE4ACC(&UserSvtCoinMaster_TypeInfo, v471);
    sub_1BE4ACC(&ViewEnemyMaster_TypeInfo, v472);
    sub_1BE4ACC(&ViewGachaFeaturedServantMaster_TypeInfo, v473);
    sub_1BE4ACC(&ViewQuestEnemyInfoMaster_TypeInfo, v474);
    sub_1BE4ACC(&ViewQuestInfoMaster_TypeInfo, v475);
    sub_1BE4ACC(&ViewWaveEnemyMaster_TypeInfo, v476);
    sub_1BE4ACC(&VoiceClosedMessageMaster_TypeInfo, v477);
    sub_1BE4ACC(&VoiceCondMaster_TypeInfo, v478);
    sub_1BE4ACC(&VoiceMaster_TypeInfo, v479);
    sub_1BE4ACC(&VoiceMaterialCondMaster_TypeInfo, v480);
    sub_1BE4ACC(&VoicePlayCondMaster_TypeInfo, v481);
    sub_1BE4ACC(&VoicePlayGroupMaster_TypeInfo, v482);
    sub_1BE4ACC(&VoiceReleaseMaster_TypeInfo, v483);
    sub_1BE4ACC(&WarAddMaster_TypeInfo, v484);
    sub_1BE4ACC(&WarBoardAIMaster_TypeInfo, v485);
    sub_1BE4ACC(&WarBoardActionPointClassMaster_TypeInfo, v486);
    sub_1BE4ACC(&WarBoardActionPointMaster_TypeInfo, v487);
    sub_1BE4ACC(&WarBoardActionTrendConditionMaster_TypeInfo, v488);
    sub_1BE4ACC(&WarBoardActionTrendGroupMaster_TypeInfo, v489);
    sub_1BE4ACC(&WarBoardActionTrendMaster_TypeInfo, v490);
    sub_1BE4ACC(&WarBoardCommonReleaseMaster_TypeInfo, v491);
    sub_1BE4ACC(&WarBoardDataMaster_TypeInfo, v492);
    sub_1BE4ACC(&WarBoardEffectMaster_TypeInfo, v493);
    sub_1BE4ACC(&WarBoardEventMaster_TypeInfo, v494);
    sub_1BE4ACC(&WarBoardEventScriptMaster_TypeInfo, v495);
    sub_1BE4ACC(&WarBoardFutureActionTrendMaster_TypeInfo, v496);
    sub_1BE4ACC(&WarBoardIndividualityClassMaster_TypeInfo, v497);
    sub_1BE4ACC(&WarBoardItemMaster_TypeInfo, v498);
    sub_1BE4ACC(&WarBoardMaster_TypeInfo, v499);
    sub_1BE4ACC(&WarBoardMessageMaster_TypeInfo, v500);
    sub_1BE4ACC(&WarBoardMessageScriptMaster_TypeInfo, v501);
    sub_1BE4ACC(&WarBoardOnboardSkillMaster_TypeInfo, v502);
    sub_1BE4ACC(&WarBoardPartySkillMaster_TypeInfo, v503);
    sub_1BE4ACC(&WarBoardQuestMaster_TypeInfo, v504);
    sub_1BE4ACC(&WarBoardRatingBaseMaster_TypeInfo, v505);
    sub_1BE4ACC(&WarBoardRatingOffsetGroupMaster_TypeInfo, v506);
    sub_1BE4ACC(&WarBoardRatingOffsetMaster_TypeInfo, v507);
    sub_1BE4ACC(&WarBoardReinforcementsMaster_TypeInfo, v508);
    sub_1BE4ACC(&WarBoardRoadMaster_TypeInfo, v509);
    sub_1BE4ACC(&WarBoardSquareIndexGroupMaster_TypeInfo, v510);
    sub_1BE4ACC(&WarBoardSquareMaster_TypeInfo, v511);
    sub_1BE4ACC(&WarBoardStageBossMaster_TypeInfo, v512);
    sub_1BE4ACC(&WarBoardStageDetailMaster_TypeInfo, v513);
    sub_1BE4ACC(&WarBoardStageLayoutMaster_TypeInfo, v514);
    sub_1BE4ACC(&WarBoardStageMaster_TypeInfo, v515);
    sub_1BE4ACC(&WarBoardStageNpcMaster_TypeInfo, v516);
    sub_1BE4ACC(&WarBoardStagePieceDetailMaster_TypeInfo, v517);
    sub_1BE4ACC(&WarBoardStageReinforcementsMaster_TypeInfo, v518);
    sub_1BE4ACC(&WarBoardStageWallMaster_TypeInfo, v519);
    sub_1BE4ACC(&WarBoardTacticalTrendMaster_TypeInfo, v520);
    sub_1BE4ACC(&WarBoardTreasureMaster_TypeInfo, v521);
    sub_1BE4ACC(&WarGroupIgnoreMaster_TypeInfo, v522);
    sub_1BE4ACC(&WarGroupMaster_TypeInfo, v523);
    sub_1BE4ACC(&WarMaster_TypeInfo, v524);
    sub_1BE4ACC(&WarMessageMaster_TypeInfo, v525);
    sub_1BE4ACC(&WarQuestSelectionMaster_TypeInfo, v526);
    sub_1BE4ACC(&WarReleaseMaster_TypeInfo, v527);
    byte_4B666DE = 1;
  }
  v528 = (DataMasterBase_array *)sub_1BE4B74(DataMasterBase___TypeInfo, 526LL);
  v529 = (ServantMaster_o *)sub_1BE4D18(ServantMaster_TypeInfo);
  ServantMaster___ctor(v529, 0LL);
  if ( !v528 )
    sub_1BE4D28(v530, v531);
  if ( v529 )
  {
    v530 = sub_1BE4C08(v529, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  p_max_length = &v528->max_length;
  if ( !v528->max_length )
    goto LABEL_1583;
  v528->m_Items[0] = (DataMasterBase_o *)v529;
  sub_1BE4A70((PartyOrganizationUtility_o *)v528->m_Items, (int64_t)v529, v532, v533, v534, v535, v536, v537);
  v539 = (ServantClassMaster_o *)sub_1BE4D18(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v539, 0LL);
  if ( v539 )
  {
    v530 = sub_1BE4C08(v539, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1583;
  v528->m_Items[1] = (DataMasterBase_o *)v539;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[1], (int64_t)v539, v540, v541, v542, v543, v544, v545);
  v546 = (ServantCommentMaster_o *)sub_1BE4D18(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v546, 0LL);
  if ( v546 )
  {
    v530 = sub_1BE4C08(v546, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1583;
  v528->m_Items[2] = (DataMasterBase_o *)v546;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[2], (int64_t)v546, v547, v548, v549, v550, v551, v552);
  v553 = (ServantProfileMaster_o *)sub_1BE4D18(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v553, 0LL);
  if ( v553 )
  {
    v530 = sub_1BE4C08(v553, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1583;
  v528->m_Items[3] = (DataMasterBase_o *)v553;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[3], (int64_t)v553, v554, v555, v556, v557, v558, v559);
  v560 = (WarMaster_o *)sub_1BE4D18(WarMaster_TypeInfo);
  WarMaster___ctor(v560, 0LL);
  if ( v560 )
  {
    v530 = sub_1BE4C08(v560, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1583;
  v528->m_Items[4] = (DataMasterBase_o *)v560;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[4], (int64_t)v560, v561, v562, v563, v564, v565, v566);
  v567 = (UserMaster_o *)sub_1BE4D18(UserMaster_TypeInfo);
  UserMaster___ctor(v567, 0LL);
  if ( v567 )
  {
    v530 = sub_1BE4C08(v567, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1583;
  v528->m_Items[5] = (DataMasterBase_o *)v567;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[5], (int64_t)v567, v568, v569, v570, v571, v572, v573);
  v574 = (UserGameMaster_o *)sub_1BE4D18(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v574, 0LL);
  if ( v574 )
  {
    v530 = sub_1BE4C08(v574, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1583;
  v528->m_Items[6] = (DataMasterBase_o *)v574;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[6], (int64_t)v574, v575, v576, v577, v578, v579, v580);
  v581 = (TblUserMaster_o *)sub_1BE4D18(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v581, 0LL);
  if ( v581 )
  {
    v530 = sub_1BE4C08(v581, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1583;
  v528->m_Items[7] = (DataMasterBase_o *)v581;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[7], (int64_t)v581, v582, v583, v584, v585, v586, v587);
  v588 = (UserItemMaster_o *)sub_1BE4D18(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v588, 0LL);
  if ( v588 )
  {
    v530 = sub_1BE4C08(v588, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1583;
  v528->m_Items[8] = (DataMasterBase_o *)v588;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[8], (int64_t)v588, v589, v590, v591, v592, v593, v594);
  v595 = (UserServantMaster_o *)sub_1BE4D18(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v595, 0LL);
  if ( v595 )
  {
    v530 = sub_1BE4C08(v595, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1583;
  v528->m_Items[9] = (DataMasterBase_o *)v595;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[9], (int64_t)v595, v596, v597, v598, v599, v600, v601);
  v602 = (UserServantStorageMaster_o *)sub_1BE4D18(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v602, 0LL);
  if ( v602 )
  {
    v530 = sub_1BE4C08(v602, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1583;
  v528->m_Items[10] = (DataMasterBase_o *)v602;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[10], (int64_t)v602, v603, v604, v605, v606, v607, v608);
  v609 = (UserAccessaryMaster_o *)sub_1BE4D18(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v609, 0LL);
  if ( v609 )
  {
    v530 = sub_1BE4C08(v609, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1583;
  v528->m_Items[11] = (DataMasterBase_o *)v609;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[11], (int64_t)v609, v610, v611, v612, v613, v614, v615);
  v616 = (UserQuestMaster_o *)sub_1BE4D18(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v616, 0LL);
  if ( v616 )
  {
    v530 = sub_1BE4C08(v616, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1583;
  v528->m_Items[12] = (DataMasterBase_o *)v616;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[12], (int64_t)v616, v617, v618, v619, v620, v621, v622);
  v623 = (BattleMaster_o *)sub_1BE4D18(BattleMaster_TypeInfo);
  BattleMaster___ctor(v623, 0LL);
  if ( v623 )
  {
    v530 = sub_1BE4C08(v623, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1583;
  v528->m_Items[13] = (DataMasterBase_o *)v623;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[13], (int64_t)v623, v624, v625, v626, v627, v628, v629);
  v630 = (OtherUserGameMaster_o *)sub_1BE4D18(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v630, 0LL);
  if ( v630 )
  {
    v530 = sub_1BE4C08(v630, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1583;
  v528->m_Items[14] = (DataMasterBase_o *)v630;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[14], (int64_t)v630, v631, v632, v633, v634, v635, v636);
  v637 = (TblFriendMaster_o *)sub_1BE4D18(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v637, 0LL);
  if ( v637 )
  {
    v530 = sub_1BE4C08(v637, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1583;
  v528->m_Items[15] = (DataMasterBase_o *)v637;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[15], (int64_t)v637, v638, v639, v640, v641, v642, v643);
  v644 = (AreaMaster_o *)sub_1BE4D18(AreaMaster_TypeInfo);
  AreaMaster___ctor(v644, 0LL);
  if ( v644 )
  {
    v530 = sub_1BE4C08(v644, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1583;
  v528->m_Items[16] = (DataMasterBase_o *)v644;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[16], (int64_t)v644, v645, v646, v647, v648, v649, v650);
  v651 = (ServantCardMaster_o *)sub_1BE4D18(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v651, 0LL);
  if ( v651 )
  {
    v530 = sub_1BE4C08(v651, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1583;
  v528->m_Items[17] = (DataMasterBase_o *)v651;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[17], (int64_t)v651, v652, v653, v654, v655, v656, v657);
  v658 = (EventMaster_o *)sub_1BE4D18(EventMaster_TypeInfo);
  EventMaster___ctor(v658, 0LL);
  if ( v658 )
  {
    v530 = sub_1BE4C08(v658, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1583;
  v528->m_Items[18] = (DataMasterBase_o *)v658;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[18], (int64_t)v658, v659, v660, v661, v662, v663, v664);
  v665 = (ItemMaster_o *)sub_1BE4D18(ItemMaster_TypeInfo);
  ItemMaster___ctor(v665, 0LL);
  if ( v665 )
  {
    v530 = sub_1BE4C08(v665, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1583;
  v528->m_Items[19] = (DataMasterBase_o *)v665;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[19], (int64_t)v665, v666, v667, v668, v669, v670, v671);
  v672 = (QuestMaster_o *)sub_1BE4D18(QuestMaster_TypeInfo);
  QuestMaster___ctor(v672, 0LL);
  if ( v672 )
  {
    v530 = sub_1BE4C08(v672, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1583;
  v528->m_Items[20] = (DataMasterBase_o *)v672;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[20], (int64_t)v672, v673, v674, v675, v676, v677, v678);
  v679 = (QuestAddMaster_o *)sub_1BE4D18(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v679, 0LL);
  if ( v679 )
  {
    v530 = sub_1BE4C08(v679, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1583;
  v528->m_Items[21] = (DataMasterBase_o *)v679;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[21], (int64_t)v679, v680, v681, v682, v683, v684, v685);
  v686 = (QuestReleaseMaster_o *)sub_1BE4D18(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v686, 0LL);
  if ( v686 )
  {
    v530 = sub_1BE4C08(v686, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1583;
  v528->m_Items[22] = (DataMasterBase_o *)v686;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[22], (int64_t)v686, v687, v688, v689, v690, v691, v692);
  v693 = (QuestDateRangeMaster_o *)sub_1BE4D18(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v693, 0LL);
  if ( v693 )
  {
    v530 = sub_1BE4C08(v693, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1583;
  v528->m_Items[23] = (DataMasterBase_o *)v693;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[23], (int64_t)v693, v694, v695, v696, v697, v698, v699);
  v700 = (QuestPhaseMaster_o *)sub_1BE4D18(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v700, 0LL);
  if ( v700 )
  {
    v530 = sub_1BE4C08(v700, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1583;
  v528->m_Items[24] = (DataMasterBase_o *)v700;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[24], (int64_t)v700, v701, v702, v703, v704, v705, v706);
  v707 = (QuestPhaseDetailMaster_o *)sub_1BE4D18(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v707, 0LL);
  if ( v707 )
  {
    v530 = sub_1BE4C08(v707, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1583;
  v528->m_Items[25] = (DataMasterBase_o *)v707;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[25], (int64_t)v707, v708, v709, v710, v711, v712, v713);
  v714 = (QuestGroupMaster_o *)sub_1BE4D18(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v714, 0LL);
  if ( v714 )
  {
    v530 = sub_1BE4C08(v714, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1583;
  v528->m_Items[26] = (DataMasterBase_o *)v714;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[26], (int64_t)v714, v715, v716, v717, v718, v719, v720);
  v721 = (QuestRandomGroupMaster_o *)sub_1BE4D18(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v721, 0LL);
  if ( v721 )
  {
    v530 = sub_1BE4C08(v721, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1583;
  v528->m_Items[27] = (DataMasterBase_o *)v721;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[27], (int64_t)v721, v722, v723, v724, v725, v726, v727);
  v728 = (QuestConsumeItemMaster_o *)sub_1BE4D18(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v728, 0LL);
  if ( v728 )
  {
    v530 = sub_1BE4C08(v728, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1583;
  v528->m_Items[28] = (DataMasterBase_o *)v728;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[28], (int64_t)v728, v729, v730, v731, v732, v733, v734);
  v735 = (QuestMessageMaster_o *)sub_1BE4D18(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v735, 0LL);
  if ( v735 )
  {
    v530 = sub_1BE4C08(v735, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1583;
  v528->m_Items[29] = (DataMasterBase_o *)v735;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[29], (int64_t)v735, v736, v737, v738, v739, v740, v741);
  v742 = (UserQuestInfoMaster_o *)sub_1BE4D18(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v742, 0LL);
  if ( v742 )
  {
    v530 = sub_1BE4C08(v742, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1583;
  v528->m_Items[30] = (DataMasterBase_o *)v742;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[30], (int64_t)v742, v743, v744, v745, v746, v747, v748);
  v749 = (UserQuestRecordMaster_o *)sub_1BE4D18(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v749, 0LL);
  if ( v749 )
  {
    v530 = sub_1BE4C08(v749, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1583;
  v528->m_Items[31] = (DataMasterBase_o *)v749;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[31], (int64_t)v749, v750, v751, v752, v753, v754, v755);
  v756 = (ViewQuestInfoMaster_o *)sub_1BE4D18(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v756, 0LL);
  if ( v756 )
  {
    v530 = sub_1BE4C08(v756, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1583;
  v528->m_Items[32] = (DataMasterBase_o *)v756;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[32], (int64_t)v756, v757, v758, v759, v760, v761, v762);
  v763 = (ViewEnemyMaster_o *)sub_1BE4D18(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v763, 0LL);
  if ( v763 )
  {
    v530 = sub_1BE4C08(v763, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1583;
  v528->m_Items[33] = (DataMasterBase_o *)v763;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[33], (int64_t)v763, v764, v765, v766, v767, v768, v769);
  v770 = (ViewQuestEnemyInfoMaster_o *)sub_1BE4D18(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v770, 0LL);
  if ( v770 )
  {
    v530 = sub_1BE4C08(v770, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1583;
  v528->m_Items[34] = (DataMasterBase_o *)v770;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[34], (int64_t)v770, v771, v772, v773, v774, v775, v776);
  v777 = (BlankEarthSpotMaster_o *)sub_1BE4D18(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v777, 0LL);
  if ( v777 )
  {
    v530 = sub_1BE4C08(v777, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1583;
  v528->m_Items[35] = (DataMasterBase_o *)v777;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[35], (int64_t)v777, v778, v779, v780, v781, v782, v783);
  v784 = (BlankEarthSpotAddMaster_o *)sub_1BE4D18(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v784, 0LL);
  if ( v784 )
  {
    v530 = sub_1BE4C08(v784, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1583;
  v528->m_Items[36] = (DataMasterBase_o *)v784;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[36], (int64_t)v784, v785, v786, v787, v788, v789, v790);
  v791 = (SpotMaster_o *)sub_1BE4D18(SpotMaster_TypeInfo);
  SpotMaster___ctor(v791, 0LL);
  if ( v791 )
  {
    v530 = sub_1BE4C08(v791, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1583;
  v528->m_Items[37] = (DataMasterBase_o *)v791;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[37], (int64_t)v791, v792, v793, v794, v795, v796, v797);
  v798 = (SpotImageMaster_o *)sub_1BE4D18(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v798, 0LL);
  if ( v798 )
  {
    v530 = sub_1BE4C08(v798, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1583;
  v528->m_Items[38] = (DataMasterBase_o *)v798;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[38], (int64_t)v798, v799, v800, v801, v802, v803, v804);
  v805 = (SpotRoadMaster_o *)sub_1BE4D18(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v805, 0LL);
  if ( v805 )
  {
    v530 = sub_1BE4C08(v805, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1583;
  v528->m_Items[39] = (DataMasterBase_o *)v805;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[39], (int64_t)v805, v806, v807, v808, v809, v810, v811);
  v812 = (SpotPathMaster_o *)sub_1BE4D18(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v812, 0LL);
  if ( v812 )
  {
    v530 = sub_1BE4C08(v812, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1583;
  v528->m_Items[40] = (DataMasterBase_o *)v812;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[40], (int64_t)v812, v813, v814, v815, v816, v817, v818);
  v819 = (SpotAddMaster_o *)sub_1BE4D18(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v819, 0LL);
  if ( v819 )
  {
    v530 = sub_1BE4C08(v819, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1583;
  v528->m_Items[41] = (DataMasterBase_o *)v819;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[41], (int64_t)v819, v820, v821, v822, v823, v824, v825);
  v826 = (MapGimmickMaster_o *)sub_1BE4D18(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v826, 0LL);
  if ( v826 )
  {
    v530 = sub_1BE4C08(v826, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1583;
  v528->m_Items[42] = (DataMasterBase_o *)v826;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[42], (int64_t)v826, v827, v828, v829, v830, v831, v832);
  v833 = (GiftMaster_o *)sub_1BE4D18(GiftMaster_TypeInfo);
  GiftMaster___ctor(v833, 0LL);
  if ( v833 )
  {
    v530 = sub_1BE4C08(v833, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1583;
  v528->m_Items[43] = (DataMasterBase_o *)v833;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[43], (int64_t)v833, v834, v835, v836, v837, v838, v839);
  v840 = (GiftAddMaster_o *)sub_1BE4D18(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v840, 0LL);
  if ( v840 )
  {
    v530 = sub_1BE4C08(v840, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1583;
  v528->m_Items[44] = (DataMasterBase_o *)v840;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[44], (int64_t)v840, v841, v842, v843, v844, v845, v846);
  v847 = (ShopMaster_o *)sub_1BE4D18(ShopMaster_TypeInfo);
  ShopMaster___ctor(v847, 0LL);
  if ( v847 )
  {
    v530 = sub_1BE4C08(v847, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1583;
  v528->m_Items[45] = (DataMasterBase_o *)v847;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[45], (int64_t)v847, v848, v849, v850, v851, v852, v853);
  v854 = (StoneShopMaster_o *)sub_1BE4D18(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v854, 0LL);
  if ( v854 )
  {
    v530 = sub_1BE4C08(v854, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1583;
  v528->m_Items[46] = (DataMasterBase_o *)v854;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[46], (int64_t)v854, v855, v856, v857, v858, v859, v860);
  v861 = (BankShopMaster_o *)sub_1BE4D18(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v861, 0LL);
  if ( v861 )
  {
    v530 = sub_1BE4C08(v861, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1583;
  v528->m_Items[47] = (DataMasterBase_o *)v861;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[47], (int64_t)v861, v862, v863, v864, v865, v866, v867);
  v868 = (ShopScriptMaster_o *)sub_1BE4D18(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v868, 0LL);
  if ( v868 )
  {
    v530 = sub_1BE4C08(v868, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1583;
  v528->m_Items[48] = (DataMasterBase_o *)v868;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[48], (int64_t)v868, v869, v870, v871, v872, v873, v874);
  v875 = (StageMaster_o *)sub_1BE4D18(StageMaster_TypeInfo);
  StageMaster___ctor(v875, 0LL);
  if ( v875 )
  {
    v530 = sub_1BE4C08(v875, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1583;
  v528->m_Items[49] = (DataMasterBase_o *)v875;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[49], (int64_t)v875, v876, v877, v878, v879, v880, v881);
  v882 = (ServantGroupMaster_o *)sub_1BE4D18(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v882, 0LL);
  if ( v882 )
  {
    v530 = sub_1BE4C08(v882, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1583;
  v528->m_Items[50] = (DataMasterBase_o *)v882;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[50], (int64_t)v882, v883, v884, v885, v886, v887, v888);
  v889 = (ServantLimitMaster_o *)sub_1BE4D18(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v889, 0LL);
  if ( v889 )
  {
    v530 = sub_1BE4C08(v889, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1583;
  v528->m_Items[51] = (DataMasterBase_o *)v889;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[51], (int64_t)v889, v890, v891, v892, v893, v894, v895);
  v896 = (ServantLimitAddMaster_o *)sub_1BE4D18(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v896, 0LL);
  if ( v896 )
  {
    v530 = sub_1BE4C08(v896, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1583;
  v528->m_Items[52] = (DataMasterBase_o *)v896;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[52], (int64_t)v896, v897, v898, v899, v900, v901, v902);
  v903 = (ServantSkillMaster_o *)sub_1BE4D18(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v903, 0LL);
  if ( v903 )
  {
    v530 = sub_1BE4C08(v903, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1583;
  v528->m_Items[53] = (DataMasterBase_o *)v903;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[53], (int64_t)v903, v904, v905, v906, v907, v908, v909);
  v910 = (ServantPassiveSkillMaster_o *)sub_1BE4D18(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v910, 0LL);
  if ( v910 )
  {
    v530 = sub_1BE4C08(v910, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1583;
  v528->m_Items[54] = (DataMasterBase_o *)v910;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[54], (int64_t)v910, v911, v912, v913, v914, v915, v916);
  v917 = (BgmMaster_o *)sub_1BE4D18(BgmMaster_TypeInfo);
  BgmMaster___ctor(v917, 0LL);
  if ( v917 )
  {
    v530 = sub_1BE4C08(v917, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1583;
  v528->m_Items[55] = (DataMasterBase_o *)v917;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[55], (int64_t)v917, v918, v919, v920, v921, v922, v923);
  v924 = (ServantScriptMaster_o *)sub_1BE4D18(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v924, 0LL);
  if ( v924 )
  {
    v530 = sub_1BE4C08(v924, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1583;
  v528->m_Items[56] = (DataMasterBase_o *)v924;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[56], (int64_t)v924, v925, v926, v927, v928, v929, v930);
  v931 = (NewsMaster_o *)sub_1BE4D18(NewsMaster_TypeInfo);
  NewsMaster___ctor(v931, 0LL);
  if ( v931 )
  {
    v530 = sub_1BE4C08(v931, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1583;
  v528->m_Items[57] = (DataMasterBase_o *)v931;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[57], (int64_t)v931, v932, v933, v934, v935, v936, v937);
  v938 = (TelopMaster_o *)sub_1BE4D18(TelopMaster_TypeInfo);
  TelopMaster___ctor(v938, 0LL);
  if ( v938 )
  {
    v530 = sub_1BE4C08(v938, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1583;
  v528->m_Items[58] = (DataMasterBase_o *)v938;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[58], (int64_t)v938, v939, v940, v941, v942, v943, v944);
  v945 = (UserExpMaster_o *)sub_1BE4D18(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v945, 0LL);
  if ( v945 )
  {
    v530 = sub_1BE4C08(v945, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1583;
  v528->m_Items[59] = (DataMasterBase_o *)v945;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[59], (int64_t)v945, v946, v947, v948, v949, v950, v951);
  v952 = (TreasureDvcMaster_o *)sub_1BE4D18(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v952, 0LL);
  if ( v952 )
  {
    v530 = sub_1BE4C08(v952, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1583;
  v528->m_Items[60] = (DataMasterBase_o *)v952;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[60], (int64_t)v952, v953, v954, v955, v956, v957, v958);
  v959 = (ServantTreasureDvcMaster_o *)sub_1BE4D18(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v959, 0LL);
  if ( v959 )
  {
    v530 = sub_1BE4C08(v959, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1583;
  v528->m_Items[61] = (DataMasterBase_o *)v959;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[61], (int64_t)v959, v960, v961, v962, v963, v964, v965);
  v966 = (SkillMaster_o *)sub_1BE4D18(SkillMaster_TypeInfo);
  SkillMaster___ctor(v966, 0LL);
  if ( v966 )
  {
    v530 = sub_1BE4C08(v966, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1583;
  v528->m_Items[62] = (DataMasterBase_o *)v966;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[62], (int64_t)v966, v967, v968, v969, v970, v971, v972);
  v973 = (SkillLvMaster_o *)sub_1BE4D18(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v973, 0LL);
  if ( v973 )
  {
    v530 = sub_1BE4C08(v973, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1583;
  v528->m_Items[63] = (DataMasterBase_o *)v973;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[63], (int64_t)v973, v974, v975, v976, v977, v978, v979);
  v980 = (SkillDetailMaster_o *)sub_1BE4D18(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v980, 0LL);
  if ( v980 )
  {
    v530 = sub_1BE4C08(v980, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1583;
  v528->m_Items[64] = (DataMasterBase_o *)v980;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[64], (int64_t)v980, v981, v982, v983, v984, v985, v986);
  v987 = (CommandSpellMaster_o *)sub_1BE4D18(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v987, 0LL);
  if ( v987 )
  {
    v530 = sub_1BE4C08(v987, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1583;
  v528->m_Items[65] = (DataMasterBase_o *)v987;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[65], (int64_t)v987, v988, v989, v990, v991, v992, v993);
  v994 = (EquipMaster_o *)sub_1BE4D18(EquipMaster_TypeInfo);
  EquipMaster___ctor(v994, 0LL);
  if ( v994 )
  {
    v530 = sub_1BE4C08(v994, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1583;
  v528->m_Items[66] = (DataMasterBase_o *)v994;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v528->m_Items[66], (int64_t)v994, v995, v996, v997, v998, v999, v1000);
  v1001 = (EquipExpMaster_o *)sub_1BE4D18(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v1001, 0LL);
  if ( v1001 )
  {
    v530 = sub_1BE4C08(v1001, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1583;
  v528->m_Items[67] = (DataMasterBase_o *)v1001;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[67],
    (int64_t)v1001,
    v1002,
    v1003,
    v1004,
    v1005,
    v1006,
    v1007);
  v1008 = (EquipSkillMaster_o *)sub_1BE4D18(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v1008, 0LL);
  if ( v1008 )
  {
    v530 = sub_1BE4C08(v1008, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1583;
  v528->m_Items[68] = (DataMasterBase_o *)v1008;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[68],
    (int64_t)v1008,
    v1009,
    v1010,
    v1011,
    v1012,
    v1013,
    v1014);
  v1015 = (SubEquipMaster_o *)sub_1BE4D18(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v1015, 0LL);
  if ( v1015 )
  {
    v530 = sub_1BE4C08(v1015, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1583;
  v528->m_Items[69] = (DataMasterBase_o *)v1015;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[69],
    (int64_t)v1015,
    v1016,
    v1017,
    v1018,
    v1019,
    v1020,
    v1021);
  v1022 = (AccessaryMaster_o *)sub_1BE4D18(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v1022, 0LL);
  if ( v1022 )
  {
    v530 = sub_1BE4C08(v1022, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1583;
  v528->m_Items[70] = (DataMasterBase_o *)v1022;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[70],
    (int64_t)v1022,
    v1023,
    v1024,
    v1025,
    v1026,
    v1027,
    v1028);
  v1029 = (UserPresentBoxMaster_o *)sub_1BE4D18(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v1029, 0LL);
  if ( v1029 )
  {
    v530 = sub_1BE4C08(v1029, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1583;
  v528->m_Items[71] = (DataMasterBase_o *)v1029;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[71],
    (int64_t)v1029,
    v1030,
    v1031,
    v1032,
    v1033,
    v1034,
    v1035);
  v1036 = (UserDeckMaster_o *)sub_1BE4D18(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v1036, 0LL);
  if ( v1036 )
  {
    v530 = sub_1BE4C08(v1036, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1583;
  v528->m_Items[72] = (DataMasterBase_o *)v1036;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[72],
    (int64_t)v1036,
    v1037,
    v1038,
    v1039,
    v1040,
    v1041,
    v1042);
  v1043 = (UserSubEquipMaster_o *)sub_1BE4D18(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v1043, 0LL);
  if ( v1043 )
  {
    v530 = sub_1BE4C08(v1043, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1583;
  v528->m_Items[73] = (DataMasterBase_o *)v1043;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[73],
    (int64_t)v1043,
    v1044,
    v1045,
    v1046,
    v1047,
    v1048,
    v1049);
  v1050 = (GachaMaster_o *)sub_1BE4D18(GachaMaster_TypeInfo);
  GachaMaster___ctor(v1050, 0LL);
  if ( v1050 )
  {
    v530 = sub_1BE4C08(v1050, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1583;
  v528->m_Items[74] = (DataMasterBase_o *)v1050;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[74],
    (int64_t)v1050,
    v1051,
    v1052,
    v1053,
    v1054,
    v1055,
    v1056);
  v1057 = (GachaImageMaster_o *)sub_1BE4D18(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v1057, 0LL);
  if ( v1057 )
  {
    v530 = sub_1BE4C08(v1057, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1583;
  v528->m_Items[75] = (DataMasterBase_o *)v1057;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[75],
    (int64_t)v1057,
    v1058,
    v1059,
    v1060,
    v1061,
    v1062,
    v1063);
  v1064 = (UserGachaMaster_o *)sub_1BE4D18(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v1064, 0LL);
  if ( v1064 )
  {
    v530 = sub_1BE4C08(v1064, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1583;
  v528->m_Items[76] = (DataMasterBase_o *)v1064;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[76],
    (int64_t)v1064,
    v1065,
    v1066,
    v1067,
    v1068,
    v1069,
    v1070);
  v1071 = (UserEquipMaster_o *)sub_1BE4D18(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v1071, 0LL);
  if ( v1071 )
  {
    v530 = sub_1BE4C08(v1071, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1583;
  v528->m_Items[77] = (DataMasterBase_o *)v1071;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[77],
    (int64_t)v1071,
    v1072,
    v1073,
    v1074,
    v1075,
    v1076,
    v1077);
  v1078 = (UserServantCollectionMaster_o *)sub_1BE4D18(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v1078, 0LL);
  if ( v1078 )
  {
    v530 = sub_1BE4C08(v1078, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1583;
  v528->m_Items[78] = (DataMasterBase_o *)v1078;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[78],
    (int64_t)v1078,
    v1079,
    v1080,
    v1081,
    v1082,
    v1083,
    v1084);
  v1085 = (FriendshipMaster_o *)sub_1BE4D18(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v1085, 0LL);
  if ( v1085 )
  {
    v530 = sub_1BE4C08(v1085, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1583;
  v528->m_Items[79] = (DataMasterBase_o *)v1085;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[79],
    (int64_t)v1085,
    v1086,
    v1087,
    v1088,
    v1089,
    v1090,
    v1091);
  v1092 = (GachaTicketMaster_o *)sub_1BE4D18(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v1092, 0LL);
  if ( v1092 )
  {
    v530 = sub_1BE4C08(v1092, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1583;
  v528->m_Items[80] = (DataMasterBase_o *)v1092;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[80],
    (int64_t)v1092,
    v1093,
    v1094,
    v1095,
    v1096,
    v1097,
    v1098);
  v1099 = (UserFormationMaster_o *)sub_1BE4D18(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v1099, 0LL);
  if ( v1099 )
  {
    v530 = sub_1BE4C08(v1099, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1583;
  v528->m_Items[81] = (DataMasterBase_o *)v1099;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[81],
    (int64_t)v1099,
    v1100,
    v1101,
    v1102,
    v1103,
    v1104,
    v1105);
  v1106 = (FunctionMaster_o *)sub_1BE4D18(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v1106, 0LL);
  if ( v1106 )
  {
    v530 = sub_1BE4C08(v1106, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1583;
  v528->m_Items[82] = (DataMasterBase_o *)v1106;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[82],
    (int64_t)v1106,
    v1107,
    v1108,
    v1109,
    v1110,
    v1111,
    v1112);
  v1113 = (BuffMaster_o *)sub_1BE4D18(BuffMaster_TypeInfo);
  BuffMaster___ctor(v1113, 0LL);
  if ( v1113 )
  {
    v530 = sub_1BE4C08(v1113, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1583;
  v528->m_Items[83] = (DataMasterBase_o *)v1113;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[83],
    (int64_t)v1113,
    v1114,
    v1115,
    v1116,
    v1117,
    v1118,
    v1119);
  v1120 = (GachaReleaseMaster_o *)sub_1BE4D18(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v1120, 0LL);
  if ( v1120 )
  {
    v530 = sub_1BE4C08(v1120, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1583;
  v528->m_Items[84] = (DataMasterBase_o *)v1120;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[84],
    (int64_t)v1120,
    v1121,
    v1122,
    v1123,
    v1124,
    v1125,
    v1126);
  v1127 = (CombineQpMaster_o *)sub_1BE4D18(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v1127, 0LL);
  if ( v1127 )
  {
    v530 = sub_1BE4C08(v1127, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1583;
  v528->m_Items[85] = (DataMasterBase_o *)v1127;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[85],
    (int64_t)v1127,
    v1128,
    v1129,
    v1130,
    v1131,
    v1132,
    v1133);
  v1134 = (CombineMaterialMaster_o *)sub_1BE4D18(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v1134, 0LL);
  if ( v1134 )
  {
    v530 = sub_1BE4C08(v1134, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1583;
  v528->m_Items[86] = (DataMasterBase_o *)v1134;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[86],
    (int64_t)v1134,
    v1135,
    v1136,
    v1137,
    v1138,
    v1139,
    v1140);
  v1141 = (EventCombineMaster_o *)sub_1BE4D18(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v1141, 0LL);
  if ( v1141 )
  {
    v530 = sub_1BE4C08(v1141, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1583;
  v528->m_Items[87] = (DataMasterBase_o *)v1141;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[87],
    (int64_t)v1141,
    v1142,
    v1143,
    v1144,
    v1145,
    v1146,
    v1147);
  v1148 = (ServantExpMaster_o *)sub_1BE4D18(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v1148, 0LL);
  if ( v1148 )
  {
    v530 = sub_1BE4C08(v1148, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1583;
  v528->m_Items[88] = (DataMasterBase_o *)v1148;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[88],
    (int64_t)v1148,
    v1149,
    v1150,
    v1151,
    v1152,
    v1153,
    v1154);
  v1155 = (CombineSkillMaster_o *)sub_1BE4D18(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v1155, 0LL);
  if ( v1155 )
  {
    v530 = sub_1BE4C08(v1155, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1583;
  v528->m_Items[89] = (DataMasterBase_o *)v1155;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[89],
    (int64_t)v1155,
    v1156,
    v1157,
    v1158,
    v1159,
    v1160,
    v1161);
  v1162 = (CombineTdMaster_o *)sub_1BE4D18(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v1162, 0LL);
  if ( v1162 )
  {
    v530 = sub_1BE4C08(v1162, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1583;
  v528->m_Items[90] = (DataMasterBase_o *)v1162;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[90],
    (int64_t)v1162,
    v1163,
    v1164,
    v1165,
    v1166,
    v1167,
    v1168);
  v1169 = (EventQuestMaster_o *)sub_1BE4D18(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v1169, 0LL);
  if ( v1169 )
  {
    v530 = sub_1BE4C08(v1169, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1583;
  v528->m_Items[91] = (DataMasterBase_o *)v1169;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[91],
    (int64_t)v1169,
    v1170,
    v1171,
    v1172,
    v1173,
    v1174,
    v1175);
  v1176 = (EventCampaignMaster_o *)sub_1BE4D18(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v1176, 0LL);
  if ( v1176 )
  {
    v530 = sub_1BE4C08(v1176, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1583;
  v528->m_Items[92] = (DataMasterBase_o *)v1176;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[92],
    (int64_t)v1176,
    v1177,
    v1178,
    v1179,
    v1180,
    v1181,
    v1182);
  v1183 = (IllustratorMaster_o *)sub_1BE4D18(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v1183, 0LL);
  if ( v1183 )
  {
    v530 = sub_1BE4C08(v1183, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1583;
  v528->m_Items[93] = (DataMasterBase_o *)v1183;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[93],
    (int64_t)v1183,
    v1184,
    v1185,
    v1186,
    v1187,
    v1188,
    v1189);
  v1190 = (CvMaster_o *)sub_1BE4D18(CvMaster_TypeInfo);
  CvMaster___ctor(v1190, 0LL);
  if ( v1190 )
  {
    v530 = sub_1BE4C08(v1190, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1583;
  v528->m_Items[94] = (DataMasterBase_o *)v1190;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[94],
    (int64_t)v1190,
    v1191,
    v1192,
    v1193,
    v1194,
    v1195,
    v1196);
  v1197 = (TreasureDvcLvMaster_o *)sub_1BE4D18(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v1197, 0LL);
  if ( v1197 )
  {
    v530 = sub_1BE4C08(v1197, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1583;
  v528->m_Items[95] = (DataMasterBase_o *)v1197;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[95],
    (int64_t)v1197,
    v1198,
    v1199,
    v1200,
    v1201,
    v1202,
    v1203);
  v1204 = (TreasureDvcDetailMaster_o *)sub_1BE4D18(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v1204, 0LL);
  if ( v1204 )
  {
    v530 = sub_1BE4C08(v1204, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1583;
  v528->m_Items[96] = (DataMasterBase_o *)v1204;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[96],
    (int64_t)v1204,
    v1205,
    v1206,
    v1207,
    v1208,
    v1209,
    v1210);
  v1211 = (UserFollowerMaster_o *)sub_1BE4D18(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v1211, 0LL);
  if ( v1211 )
  {
    v530 = sub_1BE4C08(v1211, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1583;
  v528->m_Items[97] = (DataMasterBase_o *)v1211;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[97],
    (int64_t)v1211,
    v1212,
    v1213,
    v1214,
    v1215,
    v1216,
    v1217);
  v1218 = (NpcFollowerMaster_o *)sub_1BE4D18(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v1218, 0LL);
  if ( v1218 )
  {
    v530 = sub_1BE4C08(v1218, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1583;
  v528->m_Items[98] = (DataMasterBase_o *)v1218;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[98],
    (int64_t)v1218,
    v1219,
    v1220,
    v1221,
    v1222,
    v1223,
    v1224);
  v1225 = (NpcServantFollowerMaster_o *)sub_1BE4D18(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v1225, 0LL);
  if ( v1225 )
  {
    v530 = sub_1BE4C08(v1225, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1583;
  v528->m_Items[99] = (DataMasterBase_o *)v1225;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[99],
    (int64_t)v1225,
    v1226,
    v1227,
    v1228,
    v1229,
    v1230,
    v1231);
  v1232 = (UserEventMaster_o *)sub_1BE4D18(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v1232, 0LL);
  if ( v1232 )
  {
    v530 = sub_1BE4C08(v1232, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1583;
  v528->m_Items[100] = (DataMasterBase_o *)v1232;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[100],
    (int64_t)v1232,
    v1233,
    v1234,
    v1235,
    v1236,
    v1237,
    v1238);
  v1239 = (UserShopMaster_o *)sub_1BE4D18(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v1239, 0LL);
  if ( v1239 )
  {
    v530 = sub_1BE4C08(v1239, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1583;
  v528->m_Items[101] = (DataMasterBase_o *)v1239;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[101],
    (int64_t)v1239,
    v1240,
    v1241,
    v1242,
    v1243,
    v1244,
    v1245);
  v1246 = (UserContinueMaster_o *)sub_1BE4D18(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v1246, 0LL);
  if ( v1246 )
  {
    v530 = sub_1BE4C08(v1246, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1583;
  v528->m_Items[102] = (DataMasterBase_o *)v1246;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[102],
    (int64_t)v1246,
    v1247,
    v1248,
    v1249,
    v1250,
    v1251,
    v1252);
  v1253 = (ConstantMaster_o *)sub_1BE4D18(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v1253, 0LL);
  if ( v1253 )
  {
    v530 = sub_1BE4C08(v1253, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1583;
  v528->m_Items[103] = (DataMasterBase_o *)v1253;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[103],
    (int64_t)v1253,
    v1254,
    v1255,
    v1256,
    v1257,
    v1258,
    v1259);
  v1260 = (ConstantLongMaster_o *)sub_1BE4D18(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v1260, 0LL);
  if ( v1260 )
  {
    v530 = sub_1BE4C08(v1260, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1583;
  v528->m_Items[104] = (DataMasterBase_o *)v1260;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[104],
    (int64_t)v1260,
    v1261,
    v1262,
    v1263,
    v1264,
    v1265,
    v1266);
  v1267 = (ConstantStrMaster_o *)sub_1BE4D18(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v1267, 0LL);
  if ( v1267 )
  {
    v530 = sub_1BE4C08(v1267, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1583;
  v528->m_Items[105] = (DataMasterBase_o *)v1267;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[105],
    (int64_t)v1267,
    v1268,
    v1269,
    v1270,
    v1271,
    v1272,
    v1273);
  v1274 = (AiMaster_o *)sub_1BE4D18(AiMaster_TypeInfo);
  AiMaster___ctor(v1274, 0LL);
  if ( v1274 )
  {
    v530 = sub_1BE4C08(v1274, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1583;
  v528->m_Items[106] = (DataMasterBase_o *)v1274;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[106],
    (int64_t)v1274,
    v1275,
    v1276,
    v1277,
    v1278,
    v1279,
    v1280);
  v1281 = (AiActMaster_o *)sub_1BE4D18(AiActMaster_TypeInfo);
  AiActMaster___ctor(v1281, 0LL);
  if ( v1281 )
  {
    v530 = sub_1BE4C08(v1281, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1583;
  v528->m_Items[107] = (DataMasterBase_o *)v1281;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[107],
    (int64_t)v1281,
    v1282,
    v1283,
    v1284,
    v1285,
    v1286,
    v1287);
  v1288 = (AttriRelationMaster_o *)sub_1BE4D18(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v1288, 0LL);
  if ( v1288 )
  {
    v530 = sub_1BE4C08(v1288, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1583;
  v528->m_Items[108] = (DataMasterBase_o *)v1288;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[108],
    (int64_t)v1288,
    v1289,
    v1290,
    v1291,
    v1292,
    v1293,
    v1294);
  v1295 = (ClassRelationMaster_o *)sub_1BE4D18(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v1295, 0LL);
  if ( v1295 )
  {
    v530 = sub_1BE4C08(v1295, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1583;
  v528->m_Items[109] = (DataMasterBase_o *)v1295;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[109],
    (int64_t)v1295,
    v1296,
    v1297,
    v1298,
    v1299,
    v1300,
    v1301);
  v1302 = (EffectMaster_o *)sub_1BE4D18(EffectMaster_TypeInfo);
  EffectMaster___ctor(v1302, 0LL);
  if ( v1302 )
  {
    v530 = sub_1BE4C08(v1302, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1583;
  v528->m_Items[110] = (DataMasterBase_o *)v1302;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[110],
    (int64_t)v1302,
    v1303,
    v1304,
    v1305,
    v1306,
    v1307,
    v1308);
  v1309 = (EquipImageMaster_o *)sub_1BE4D18(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v1309, 0LL);
  if ( v1309 )
  {
    v530 = sub_1BE4C08(v1309, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1583;
  v528->m_Items[111] = (DataMasterBase_o *)v1309;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[111],
    (int64_t)v1309,
    v1310,
    v1311,
    v1312,
    v1313,
    v1314,
    v1315);
  v1316 = (ServantVoiceMaster_o *)sub_1BE4D18(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v1316, 0LL);
  if ( v1316 )
  {
    v530 = sub_1BE4C08(v1316, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1583;
  v528->m_Items[112] = (DataMasterBase_o *)v1316;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[112],
    (int64_t)v1316,
    v1317,
    v1318,
    v1319,
    v1320,
    v1321,
    v1322);
  v1323 = (CombineLimitMaster_o *)sub_1BE4D18(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v1323, 0LL);
  if ( v1323 )
  {
    v530 = sub_1BE4C08(v1323, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1583;
  v528->m_Items[113] = (DataMasterBase_o *)v1323;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[113],
    (int64_t)v1323,
    v1324,
    v1325,
    v1326,
    v1327,
    v1328,
    v1329);
  v1330 = (CardMaster_o *)sub_1BE4D18(CardMaster_TypeInfo);
  CardMaster___ctor(v1330, 0LL);
  if ( v1330 )
  {
    v530 = sub_1BE4C08(v1330, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1583;
  v528->m_Items[114] = (DataMasterBase_o *)v1330;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[114],
    (int64_t)v1330,
    v1331,
    v1332,
    v1333,
    v1334,
    v1335,
    v1336);
  v1337 = (CombineQpSvtEquipMaster_o *)sub_1BE4D18(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v1337, 0LL);
  if ( v1337 )
  {
    v530 = sub_1BE4C08(v1337, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1583;
  v528->m_Items[115] = (DataMasterBase_o *)v1337;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[115],
    (int64_t)v1337,
    v1338,
    v1339,
    v1340,
    v1341,
    v1342,
    v1343);
  v1344 = (ServantRarityMaster_o *)sub_1BE4D18(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v1344, 0LL);
  if ( v1344 )
  {
    v530 = sub_1BE4C08(v1344, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1583;
  v528->m_Items[116] = (DataMasterBase_o *)v1344;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[116],
    (int64_t)v1344,
    v1345,
    v1346,
    v1347,
    v1348,
    v1349,
    v1350);
  v1351 = (SetItemMaster_o *)sub_1BE4D18(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v1351, 0LL);
  if ( v1351 )
  {
    v530 = sub_1BE4C08(v1351, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1583;
  v528->m_Items[117] = (DataMasterBase_o *)v1351;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[117],
    (int64_t)v1351,
    v1352,
    v1353,
    v1354,
    v1355,
    v1356,
    v1357);
  v1358 = (RecoverMaster_o *)sub_1BE4D18(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v1358, 0LL);
  if ( v1358 )
  {
    v530 = sub_1BE4C08(v1358, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1583;
  v528->m_Items[118] = (DataMasterBase_o *)v1358;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[118],
    (int64_t)v1358,
    v1359,
    v1360,
    v1361,
    v1362,
    v1363,
    v1364);
  v1365 = (BannerMaster_o *)sub_1BE4D18(BannerMaster_TypeInfo);
  BannerMaster___ctor(v1365, 0LL);
  if ( v1365 )
  {
    v530 = sub_1BE4C08(v1365, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1583;
  v528->m_Items[119] = (DataMasterBase_o *)v1365;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[119],
    (int64_t)v1365,
    v1366,
    v1367,
    v1368,
    v1369,
    v1370,
    v1371);
  v1372 = (ShopReleaseMaster_o *)sub_1BE4D18(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v1372, 0LL);
  if ( v1372 )
  {
    v530 = sub_1BE4C08(v1372, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1583;
  v528->m_Items[120] = (DataMasterBase_o *)v1372;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[120],
    (int64_t)v1372,
    v1373,
    v1374,
    v1375,
    v1376,
    v1377,
    v1378);
  v1379 = (EventRewardMaster_o *)sub_1BE4D18(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v1379, 0LL);
  if ( v1379 )
  {
    v530 = sub_1BE4C08(v1379, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1583;
  v528->m_Items[121] = (DataMasterBase_o *)v1379;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[121],
    (int64_t)v1379,
    v1380,
    v1381,
    v1382,
    v1383,
    v1384,
    v1385);
  v1386 = (EventDetailMaster_o *)sub_1BE4D18(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v1386, 0LL);
  if ( v1386 )
  {
    v530 = sub_1BE4C08(v1386, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1583;
  v528->m_Items[122] = (DataMasterBase_o *)v1386;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[122],
    (int64_t)v1386,
    v1387,
    v1388,
    v1389,
    v1390,
    v1391,
    v1392);
  v1393 = (EventServantMaster_o *)sub_1BE4D18(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v1393, 0LL);
  if ( v1393 )
  {
    v530 = sub_1BE4C08(v1393, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1583;
  v528->m_Items[123] = (DataMasterBase_o *)v1393;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[123],
    (int64_t)v1393,
    v1394,
    v1395,
    v1396,
    v1397,
    v1398,
    v1399);
  v1400 = (BoxGachaMaster_o *)sub_1BE4D18(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v1400, 0LL);
  if ( v1400 )
  {
    v530 = sub_1BE4C08(v1400, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1583;
  v528->m_Items[124] = (DataMasterBase_o *)v1400;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[124],
    (int64_t)v1400,
    v1401,
    v1402,
    v1403,
    v1404,
    v1405,
    v1406);
  v1407 = (BoxGachaBaseMaster_o *)sub_1BE4D18(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v1407, 0LL);
  if ( v1407 )
  {
    v530 = sub_1BE4C08(v1407, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1583;
  v528->m_Items[125] = (DataMasterBase_o *)v1407;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[125],
    (int64_t)v1407,
    v1408,
    v1409,
    v1410,
    v1411,
    v1412,
    v1413);
  v1414 = (BoxGachaTalkMaster_o *)sub_1BE4D18(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v1414, 0LL);
  if ( v1414 )
  {
    v530 = sub_1BE4C08(v1414, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1583;
  v528->m_Items[126] = (DataMasterBase_o *)v1414;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[126],
    (int64_t)v1414,
    v1415,
    v1416,
    v1417,
    v1418,
    v1419,
    v1420);
  v1421 = (UserBoxGachaMaster_o *)sub_1BE4D18(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v1421, 0LL);
  if ( v1421 )
  {
    v530 = sub_1BE4C08(v1421, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1583;
  v528->m_Items[127] = (DataMasterBase_o *)v1421;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[127],
    (int64_t)v1421,
    v1422,
    v1423,
    v1424,
    v1425,
    v1426,
    v1427);
  v1428 = (BoxGachaHistoryMaster_o *)sub_1BE4D18(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v1428, 0LL);
  if ( v1428 )
  {
    v530 = sub_1BE4C08(v1428, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1583;
  v528->m_Items[128] = (DataMasterBase_o *)v1428;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[128],
    (int64_t)v1428,
    v1429,
    v1430,
    v1431,
    v1432,
    v1433,
    v1434);
  v1435 = (BattleBgMaster_o *)sub_1BE4D18(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v1435, 0LL);
  if ( v1435 )
  {
    v530 = sub_1BE4C08(v1435, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1583;
  v528->m_Items[129] = (DataMasterBase_o *)v1435;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[129],
    (int64_t)v1435,
    v1436,
    v1437,
    v1438,
    v1439,
    v1440,
    v1441);
  v1442 = (TipsBattleMaster_o *)sub_1BE4D18(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v1442, 0LL);
  if ( v1442 )
  {
    v530 = sub_1BE4C08(v1442, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1583;
  v528->m_Items[130] = (DataMasterBase_o *)v1442;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[130],
    (int64_t)v1442,
    v1443,
    v1444,
    v1445,
    v1446,
    v1447,
    v1448);
  v1449 = (UserLoginMaster_o *)sub_1BE4D18(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v1449, 0LL);
  if ( v1449 )
  {
    v530 = sub_1BE4C08(v1449, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1583;
  v528->m_Items[131] = (DataMasterBase_o *)v1449;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[131],
    (int64_t)v1449,
    v1450,
    v1451,
    v1452,
    v1453,
    v1454,
    v1455);
  v1456 = (VoiceMaster_o *)sub_1BE4D18(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v1456, 0LL);
  if ( v1456 )
  {
    v530 = sub_1BE4C08(v1456, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1583;
  v528->m_Items[132] = (DataMasterBase_o *)v1456;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[132],
    (int64_t)v1456,
    v1457,
    v1458,
    v1459,
    v1460,
    v1461,
    v1462);
  v1463 = (EventRewardExtraMaster_o *)sub_1BE4D18(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v1463, 0LL);
  if ( v1463 )
  {
    v530 = sub_1BE4C08(v1463, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1583;
  v528->m_Items[133] = (DataMasterBase_o *)v1463;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[133],
    (int64_t)v1463,
    v1464,
    v1465,
    v1466,
    v1467,
    v1468,
    v1469);
  v1470 = (EventMissionMaster_o *)sub_1BE4D18(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v1470, 0LL);
  if ( v1470 )
  {
    v530 = sub_1BE4C08(v1470, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1583;
  v528->m_Items[134] = (DataMasterBase_o *)v1470;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[134],
    (int64_t)v1470,
    v1471,
    v1472,
    v1473,
    v1474,
    v1475,
    v1476);
  v1477 = (EventMissionActionMaster_o *)sub_1BE4D18(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v1477, 0LL);
  if ( v1477 )
  {
    v530 = sub_1BE4C08(v1477, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1583;
  v528->m_Items[135] = (DataMasterBase_o *)v1477;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[135],
    (int64_t)v1477,
    v1478,
    v1479,
    v1480,
    v1481,
    v1482,
    v1483);
  v1484 = (EventMissionActionAddMaster_o *)sub_1BE4D18(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v1484, 0LL);
  if ( v1484 )
  {
    v530 = sub_1BE4C08(v1484, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1583;
  v528->m_Items[136] = (DataMasterBase_o *)v1484;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[136],
    (int64_t)v1484,
    v1485,
    v1486,
    v1487,
    v1488,
    v1489,
    v1490);
  v1491 = (EventMissionConditionMaster_o *)sub_1BE4D18(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v1491, 0LL);
  if ( v1491 )
  {
    v530 = sub_1BE4C08(v1491, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1583;
  v528->m_Items[137] = (DataMasterBase_o *)v1491;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[137],
    (int64_t)v1491,
    v1492,
    v1493,
    v1494,
    v1495,
    v1496,
    v1497);
  v1498 = (EventMissionCondDetailMaster_o *)sub_1BE4D18(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v1498, 0LL);
  if ( v1498 )
  {
    v530 = sub_1BE4C08(v1498, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1583;
  v528->m_Items[138] = (DataMasterBase_o *)v1498;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[138],
    (int64_t)v1498,
    v1499,
    v1500,
    v1501,
    v1502,
    v1503,
    v1504);
  v1505 = (EventMissionAddMaster_o *)sub_1BE4D18(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v1505, 0LL);
  if ( v1505 )
  {
    v530 = sub_1BE4C08(v1505, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1583;
  v528->m_Items[139] = (DataMasterBase_o *)v1505;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[139],
    (int64_t)v1505,
    v1506,
    v1507,
    v1508,
    v1509,
    v1510,
    v1511);
  v1512 = (CompleteMissionMaster_o *)sub_1BE4D18(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v1512, 0LL);
  if ( v1512 )
  {
    v530 = sub_1BE4C08(v1512, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1583;
  v528->m_Items[140] = (DataMasterBase_o *)v1512;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[140],
    (int64_t)v1512,
    v1513,
    v1514,
    v1515,
    v1516,
    v1517,
    v1518);
  v1519 = (EventRewardSetMaster_o *)sub_1BE4D18(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v1519, 0LL);
  if ( v1519 )
  {
    v530 = sub_1BE4C08(v1519, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1583;
  v528->m_Items[141] = (DataMasterBase_o *)v1519;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[141],
    (int64_t)v1519,
    v1520,
    v1521,
    v1522,
    v1523,
    v1524,
    v1525);
  v1526 = (UserEventMissionMaster_o *)sub_1BE4D18(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v1526, 0LL);
  if ( v1526 )
  {
    v530 = sub_1BE4C08(v1526, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1583;
  v528->m_Items[142] = (DataMasterBase_o *)v1526;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[142],
    (int64_t)v1526,
    v1527,
    v1528,
    v1529,
    v1530,
    v1531,
    v1532);
  v1533 = (UserEventMissionCondDetailMaster_o *)sub_1BE4D18(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v1533, 0LL);
  if ( v1533 )
  {
    v530 = sub_1BE4C08(v1533, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1583;
  v528->m_Items[143] = (DataMasterBase_o *)v1533;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[143],
    (int64_t)v1533,
    v1534,
    v1535,
    v1536,
    v1537,
    v1538,
    v1539);
  v1540 = (BoxGachaBaseDetailMaster_o *)sub_1BE4D18(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v1540, 0LL);
  if ( v1540 )
  {
    v530 = sub_1BE4C08(v1540, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1583;
  v528->m_Items[144] = (DataMasterBase_o *)v1540;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[144],
    (int64_t)v1540,
    v1541,
    v1542,
    v1543,
    v1544,
    v1545,
    v1546);
  v1547 = (UserServantLeaderMaster_o *)sub_1BE4D18(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v1547, 0LL);
  if ( v1547 )
  {
    v530 = sub_1BE4C08(v1547, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1583;
  v528->m_Items[145] = (DataMasterBase_o *)v1547;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[145],
    (int64_t)v1547,
    v1548,
    v1549,
    v1550,
    v1551,
    v1552,
    v1553);
  v1554 = (ClosedMessageMaster_o *)sub_1BE4D18(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v1554, 0LL);
  if ( v1554 )
  {
    v530 = sub_1BE4C08(v1554, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1583;
  v528->m_Items[146] = (DataMasterBase_o *)v1554;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[146],
    (int64_t)v1554,
    v1555,
    v1556,
    v1557,
    v1558,
    v1559,
    v1560);
  v1561 = (FunctionGroupMaster_o *)sub_1BE4D18(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v1561, 0LL);
  if ( v1561 )
  {
    v530 = sub_1BE4C08(v1561, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1583;
  v528->m_Items[147] = (DataMasterBase_o *)v1561;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[147],
    (int64_t)v1561,
    v1562,
    v1563,
    v1564,
    v1565,
    v1566,
    v1567);
  v1568 = (EventRaidMaster_o *)sub_1BE4D18(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v1568, 0LL);
  if ( v1568 )
  {
    v530 = sub_1BE4C08(v1568, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1583;
  v528->m_Items[148] = (DataMasterBase_o *)v1568;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[148],
    (int64_t)v1568,
    v1569,
    v1570,
    v1571,
    v1572,
    v1573,
    v1574);
  v1575 = (TotalEventRaidMaster_o *)sub_1BE4D18(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v1575, 0LL);
  if ( v1575 )
  {
    v530 = sub_1BE4C08(v1575, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1583;
  v528->m_Items[149] = (DataMasterBase_o *)v1575;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[149],
    (int64_t)v1575,
    v1576,
    v1577,
    v1578,
    v1579,
    v1580,
    v1581);
  v1582 = (UserEventRaidMaster_o *)sub_1BE4D18(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v1582, 0LL);
  if ( v1582 )
  {
    v530 = sub_1BE4C08(v1582, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1583;
  v528->m_Items[150] = (DataMasterBase_o *)v1582;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[150],
    (int64_t)v1582,
    v1583,
    v1584,
    v1585,
    v1586,
    v1587,
    v1588);
  v1589 = (EventPointMaster_o *)sub_1BE4D18(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1589, 0LL);
  if ( v1589 )
  {
    v530 = sub_1BE4C08(v1589, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1583;
  v528->m_Items[151] = (DataMasterBase_o *)v1589;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[151],
    (int64_t)v1589,
    v1590,
    v1591,
    v1592,
    v1593,
    v1594,
    v1595);
  v1596 = (EventPointGroupMaster_o *)sub_1BE4D18(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1596, 0LL);
  if ( v1596 )
  {
    v530 = sub_1BE4C08(v1596, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1583;
  v528->m_Items[152] = (DataMasterBase_o *)v1596;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[152],
    (int64_t)v1596,
    v1597,
    v1598,
    v1599,
    v1600,
    v1601,
    v1602);
  v1603 = (TotalEventPointMaster_o *)sub_1BE4D18(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1603, 0LL);
  if ( v1603 )
  {
    v530 = sub_1BE4C08(v1603, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1583;
  v528->m_Items[153] = (DataMasterBase_o *)v1603;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[153],
    (int64_t)v1603,
    v1604,
    v1605,
    v1606,
    v1607,
    v1608,
    v1609);
  v1610 = (UserEventPointMaster_o *)sub_1BE4D18(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1610, 0LL);
  if ( v1610 )
  {
    v530 = sub_1BE4C08(v1610, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1583;
  v528->m_Items[154] = (DataMasterBase_o *)v1610;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[154],
    (int64_t)v1610,
    v1611,
    v1612,
    v1613,
    v1614,
    v1615,
    v1616);
  v1617 = (EventPointUpperMaster_o *)sub_1BE4D18(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1617, 0LL);
  if ( v1617 )
  {
    v530 = sub_1BE4C08(v1617, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1583;
  v528->m_Items[155] = (DataMasterBase_o *)v1617;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[155],
    (int64_t)v1617,
    v1618,
    v1619,
    v1620,
    v1621,
    v1622,
    v1623);
  v1624 = (EventPointUpperReleaseMaster_o *)sub_1BE4D18(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1624, 0LL);
  if ( v1624 )
  {
    v530 = sub_1BE4C08(v1624, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1583;
  v528->m_Items[156] = (DataMasterBase_o *)v1624;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[156],
    (int64_t)v1624,
    v1625,
    v1626,
    v1627,
    v1628,
    v1629,
    v1630);
  v1631 = (EventRaceMaster_o *)sub_1BE4D18(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1631, 0LL);
  if ( v1631 )
  {
    v530 = sub_1BE4C08(v1631, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1583;
  v528->m_Items[157] = (DataMasterBase_o *)v1631;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[157],
    (int64_t)v1631,
    v1632,
    v1633,
    v1634,
    v1635,
    v1636,
    v1637);
  v1638 = (EventRaceResultMaster_o *)sub_1BE4D18(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1638, 0LL);
  if ( v1638 )
  {
    v530 = sub_1BE4C08(v1638, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1583;
  v528->m_Items[158] = (DataMasterBase_o *)v1638;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[158],
    (int64_t)v1638,
    v1639,
    v1640,
    v1641,
    v1642,
    v1643,
    v1644);
  v1645 = (QuestRacePointMaster_o *)sub_1BE4D18(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1645, 0LL);
  if ( v1645 )
  {
    v530 = sub_1BE4C08(v1645, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1583;
  v528->m_Items[159] = (DataMasterBase_o *)v1645;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[159],
    (int64_t)v1645,
    v1646,
    v1647,
    v1648,
    v1649,
    v1650,
    v1651);
  v1652 = (UserEventRaceMaster_o *)sub_1BE4D18(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1652, 0LL);
  if ( v1652 )
  {
    v530 = sub_1BE4C08(v1652, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1583;
  v528->m_Items[160] = (DataMasterBase_o *)v1652;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[160],
    (int64_t)v1652,
    v1653,
    v1654,
    v1655,
    v1656,
    v1657,
    v1658);
  v1659 = (EventScriptMaster_o *)sub_1BE4D18(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1659, 0LL);
  if ( v1659 )
  {
    v530 = sub_1BE4C08(v1659, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1583;
  v528->m_Items[161] = (DataMasterBase_o *)v1659;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[161],
    (int64_t)v1659,
    v1660,
    v1661,
    v1662,
    v1663,
    v1664,
    v1665);
  v1666 = (EventScriptReleaseMaster_o *)sub_1BE4D18(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1666, 0LL);
  if ( v1666 )
  {
    v530 = sub_1BE4C08(v1666, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1583;
  v528->m_Items[162] = (DataMasterBase_o *)v1666;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[162],
    (int64_t)v1666,
    v1667,
    v1668,
    v1669,
    v1670,
    v1671,
    v1672);
  v1673 = (UserPresentHistoryMaster_o *)sub_1BE4D18(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1673, 0LL);
  if ( v1673 )
  {
    v530 = sub_1BE4C08(v1673, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1583;
  v528->m_Items[163] = (DataMasterBase_o *)v1673;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[163],
    (int64_t)v1673,
    v1674,
    v1675,
    v1676,
    v1677,
    v1678,
    v1679);
  v1680 = (MstMissionMaster_o *)sub_1BE4D18(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1680, 0LL);
  if ( v1680 )
  {
    v530 = sub_1BE4C08(v1680, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1583;
  v528->m_Items[164] = (DataMasterBase_o *)v1680;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[164],
    (int64_t)v1680,
    v1681,
    v1682,
    v1683,
    v1684,
    v1685,
    v1686);
  v1687 = (ServantExceedMaster_o *)sub_1BE4D18(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1687, 0LL);
  if ( v1687 )
  {
    v530 = sub_1BE4C08(v1687, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1583;
  v528->m_Items[165] = (DataMasterBase_o *)v1687;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[165],
    (int64_t)v1687,
    v1688,
    v1689,
    v1690,
    v1691,
    v1692,
    v1693);
  v1694 = (PartialMaintenanceMaster_o *)sub_1BE4D18(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1694, 0LL);
  if ( v1694 )
  {
    v530 = sub_1BE4C08(v1694, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1583;
  v528->m_Items[166] = (DataMasterBase_o *)v1694;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[166],
    (int64_t)v1694,
    v1695,
    v1696,
    v1697,
    v1698,
    v1699,
    v1700);
  v1701 = (GuideMaster_o *)sub_1BE4D18(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1701, 0LL);
  if ( v1701 )
  {
    v530 = sub_1BE4C08(v1701, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1583;
  v528->m_Items[167] = (DataMasterBase_o *)v1701;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[167],
    (int64_t)v1701,
    v1702,
    v1703,
    v1704,
    v1705,
    v1706,
    v1707);
  v1708 = (MstMissionDisplayInfoMaster_o *)sub_1BE4D18(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1708, 0LL);
  if ( v1708 )
  {
    v530 = sub_1BE4C08(v1708, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1583;
  v528->m_Items[168] = (DataMasterBase_o *)v1708;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[168],
    (int64_t)v1708,
    v1709,
    v1710,
    v1711,
    v1712,
    v1713,
    v1714);
  v1715 = (GachaGroupMaster_o *)sub_1BE4D18(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1715, 0LL);
  if ( v1715 )
  {
    v530 = sub_1BE4C08(v1715, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1583;
  v528->m_Items[169] = (DataMasterBase_o *)v1715;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[169],
    (int64_t)v1715,
    v1716,
    v1717,
    v1718,
    v1719,
    v1720,
    v1721);
  v1722 = (QuestResetMaster_o *)sub_1BE4D18(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1722, 0LL);
  if ( v1722 )
  {
    v530 = sub_1BE4C08(v1722, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1583;
  v528->m_Items[170] = (DataMasterBase_o *)v1722;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[170],
    (int64_t)v1722,
    v1723,
    v1724,
    v1725,
    v1726,
    v1727,
    v1728);
  v1729 = (WarAddMaster_o *)sub_1BE4D18(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1729, 0LL);
  if ( v1729 )
  {
    v530 = sub_1BE4C08(v1729, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1583;
  v528->m_Items[171] = (DataMasterBase_o *)v1729;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[171],
    (int64_t)v1729,
    v1730,
    v1731,
    v1732,
    v1733,
    v1734,
    v1735);
  v1736 = (EventItemDisplayMaster_o *)sub_1BE4D18(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1736, 0LL);
  if ( v1736 )
  {
    v530 = sub_1BE4C08(v1736, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1583;
  v528->m_Items[172] = (DataMasterBase_o *)v1736;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[172],
    (int64_t)v1736,
    v1737,
    v1738,
    v1739,
    v1740,
    v1741,
    v1742);
  v1743 = (EventItemDisplayGroupMaster_o *)sub_1BE4D18(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1743, 0LL);
  if ( v1743 )
  {
    v530 = sub_1BE4C08(v1743, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1583;
  v528->m_Items[173] = (DataMasterBase_o *)v1743;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[173],
    (int64_t)v1743,
    v1744,
    v1745,
    v1746,
    v1747,
    v1748,
    v1749);
  v1750 = (EventItemDisplayReleaseMaster_o *)sub_1BE4D18(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1750, 0LL);
  if ( v1750 )
  {
    v530 = sub_1BE4C08(v1750, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1583;
  v528->m_Items[174] = (DataMasterBase_o *)v1750;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[174],
    (int64_t)v1750,
    v1751,
    v1752,
    v1753,
    v1754,
    v1755,
    v1756);
  v1757 = (EventTutorialMaster_o *)sub_1BE4D18(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1757, 0LL);
  if ( v1757 )
  {
    v530 = sub_1BE4C08(v1757, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1583;
  v528->m_Items[175] = (DataMasterBase_o *)v1757;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[175],
    (int64_t)v1757,
    v1758,
    v1759,
    v1760,
    v1761,
    v1762,
    v1763);
  v1764 = (EventTutorialCondMaster_o *)sub_1BE4D18(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1764, 0LL);
  if ( v1764 )
  {
    v530 = sub_1BE4C08(v1764, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1583;
  v528->m_Items[176] = (DataMasterBase_o *)v1764;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[176],
    (int64_t)v1764,
    v1765,
    v1766,
    v1767,
    v1768,
    v1769,
    v1770);
  v1771 = (VoiceReleaseMaster_o *)sub_1BE4D18(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1771, 0LL);
  if ( v1771 )
  {
    v530 = sub_1BE4C08(v1771, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1583;
  v528->m_Items[177] = (DataMasterBase_o *)v1771;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[177],
    (int64_t)v1771,
    v1772,
    v1773,
    v1774,
    v1775,
    v1776,
    v1777);
  v1778 = (EventSuperBossMaster_o *)sub_1BE4D18(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1778, 0LL);
  if ( v1778 )
  {
    v530 = sub_1BE4C08(v1778, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1583;
  v528->m_Items[178] = (DataMasterBase_o *)v1778;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[178],
    (int64_t)v1778,
    v1779,
    v1780,
    v1781,
    v1782,
    v1783,
    v1784);
  v1785 = (UserSuperBossMaster_o *)sub_1BE4D18(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1785, 0LL);
  if ( v1785 )
  {
    v530 = sub_1BE4C08(v1785, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1583;
  v528->m_Items[179] = (DataMasterBase_o *)v1785;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[179],
    (int64_t)v1785,
    v1786,
    v1787,
    v1788,
    v1789,
    v1790,
    v1791);
  v1792 = (QuestScriptMaster_o *)sub_1BE4D18(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1792, 0LL);
  if ( v1792 )
  {
    v530 = sub_1BE4C08(v1792, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1583;
  v528->m_Items[180] = (DataMasterBase_o *)v1792;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[180],
    (int64_t)v1792,
    v1793,
    v1794,
    v1795,
    v1796,
    v1797,
    v1798);
  v1799 = (QuestScriptReleaseMaster_o *)sub_1BE4D18(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1799, 0LL);
  if ( v1799 )
  {
    v530 = sub_1BE4C08(v1799, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1583;
  v528->m_Items[181] = (DataMasterBase_o *)v1799;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[181],
    (int64_t)v1799,
    v1800,
    v1801,
    v1802,
    v1803,
    v1804,
    v1805);
  v1806 = (MaterialFolderMaster_o *)sub_1BE4D18(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1806, 0LL);
  if ( v1806 )
  {
    v530 = sub_1BE4C08(v1806, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1583;
  v528->m_Items[182] = (DataMasterBase_o *)v1806;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[182],
    (int64_t)v1806,
    v1807,
    v1808,
    v1809,
    v1810,
    v1811,
    v1812);
  v1813 = (RestrictionMaster_o *)sub_1BE4D18(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1813, 0LL);
  if ( v1813 )
  {
    v530 = sub_1BE4C08(v1813, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1583;
  v528->m_Items[183] = (DataMasterBase_o *)v1813;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[183],
    (int64_t)v1813,
    v1814,
    v1815,
    v1816,
    v1817,
    v1818,
    v1819);
  v1820 = (QuestRestrictionMaster_o *)sub_1BE4D18(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1820, 0LL);
  if ( v1820 )
  {
    v530 = sub_1BE4C08(v1820, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1583;
  v528->m_Items[184] = (DataMasterBase_o *)v1820;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[184],
    (int64_t)v1820,
    v1821,
    v1822,
    v1823,
    v1824,
    v1825,
    v1826);
  v1827 = (ServantVoiceRelationMaster_o *)sub_1BE4D18(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1827, 0LL);
  if ( v1827 )
  {
    v530 = sub_1BE4C08(v1827, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1583;
  v528->m_Items[185] = (DataMasterBase_o *)v1827;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[185],
    (int64_t)v1827,
    v1828,
    v1829,
    v1830,
    v1831,
    v1832,
    v1833);
  v1834 = (ShopDetailMaster_o *)sub_1BE4D18(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1834, 0LL);
  if ( v1834 )
  {
    v530 = sub_1BE4C08(v1834, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1583;
  v528->m_Items[186] = (DataMasterBase_o *)v1834;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[186],
    (int64_t)v1834,
    v1835,
    v1836,
    v1837,
    v1838,
    v1839,
    v1840);
  v1841 = (ServantScriptAddMaster_o *)sub_1BE4D18(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1841, 0LL);
  if ( v1841 )
  {
    v530 = sub_1BE4C08(v1841, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1583;
  v528->m_Items[187] = (DataMasterBase_o *)v1841;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[187],
    (int64_t)v1841,
    v1842,
    v1843,
    v1844,
    v1845,
    v1846,
    v1847);
  v1848 = (CombineMaster_o *)sub_1BE4D18(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1848, 0LL);
  if ( v1848 )
  {
    v530 = sub_1BE4C08(v1848, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1583;
  v528->m_Items[188] = (DataMasterBase_o *)v1848;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[188],
    (int64_t)v1848,
    v1849,
    v1850,
    v1851,
    v1852,
    v1853,
    v1854);
  v1855 = (AiFieldMaster_o *)sub_1BE4D18(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1855, 0LL);
  if ( v1855 )
  {
    v530 = sub_1BE4C08(v1855, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1583;
  v528->m_Items[189] = (DataMasterBase_o *)v1855;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[189],
    (int64_t)v1855,
    v1856,
    v1857,
    v1858,
    v1859,
    v1860,
    v1861);
  v1862 = (ServantCommentAddMaster_o *)sub_1BE4D18(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1862, 0LL);
  if ( v1862 )
  {
    v530 = sub_1BE4C08(v1862, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1583;
  v528->m_Items[190] = (DataMasterBase_o *)v1862;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[190],
    (int64_t)v1862,
    v1863,
    v1864,
    v1865,
    v1866,
    v1867,
    v1868);
  v1869 = (EventFilterMaster_o *)sub_1BE4D18(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1869, 0LL);
  if ( v1869 )
  {
    v530 = sub_1BE4C08(v1869, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1583;
  v528->m_Items[191] = (DataMasterBase_o *)v1869;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[191],
    (int64_t)v1869,
    v1870,
    v1871,
    v1872,
    v1873,
    v1874,
    v1875);
  v1876 = (UserSupportDeckMaster_o *)sub_1BE4D18(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1876, 0LL);
  if ( v1876 )
  {
    v530 = sub_1BE4C08(v1876, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1583;
  v528->m_Items[192] = (DataMasterBase_o *)v1876;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[192],
    (int64_t)v1876,
    v1877,
    v1878,
    v1879,
    v1880,
    v1881,
    v1882);
  v1883 = (EventRewardSceneMaster_o *)sub_1BE4D18(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1883, 0LL);
  if ( v1883 )
  {
    v530 = sub_1BE4C08(v1883, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1583;
  v528->m_Items[193] = (DataMasterBase_o *)v1883;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[193],
    (int64_t)v1883,
    v1884,
    v1885,
    v1886,
    v1887,
    v1888,
    v1889);
  v1890 = (EventVoicePlayMaster_o *)sub_1BE4D18(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1890, 0LL);
  if ( v1890 )
  {
    v530 = sub_1BE4C08(v1890, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1583;
  v528->m_Items[194] = (DataMasterBase_o *)v1890;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[194],
    (int64_t)v1890,
    v1891,
    v1892,
    v1893,
    v1894,
    v1895,
    v1896);
  v1897 = (GachaSubMaster_o *)sub_1BE4D18(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1897, 0LL);
  if ( v1897 )
  {
    v530 = sub_1BE4C08(v1897, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1583;
  v528->m_Items[195] = (DataMasterBase_o *)v1897;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[195],
    (int64_t)v1897,
    v1898,
    v1899,
    v1900,
    v1901,
    v1902,
    v1903);
  v1904 = (GachaDetailMaster_o *)sub_1BE4D18(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1904, 0LL);
  if ( v1904 )
  {
    v530 = sub_1BE4C08(v1904, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1583;
  v528->m_Items[196] = (DataMasterBase_o *)v1904;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[196],
    (int64_t)v1904,
    v1905,
    v1906,
    v1907,
    v1908,
    v1909,
    v1910);
  v1911 = (GachaBaseCollateralMaster_o *)sub_1BE4D18(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1911, 0LL);
  if ( v1911 )
  {
    v530 = sub_1BE4C08(v1911, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1583;
  v528->m_Items[197] = (DataMasterBase_o *)v1911;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[197],
    (int64_t)v1911,
    v1912,
    v1913,
    v1914,
    v1915,
    v1916,
    v1917);
  v1918 = (GachaAdjustAddMaster_o *)sub_1BE4D18(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1918, 0LL);
  if ( v1918 )
  {
    v530 = sub_1BE4C08(v1918, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1583;
  v528->m_Items[198] = (DataMasterBase_o *)v1918;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[198],
    (int64_t)v1918,
    v1919,
    v1920,
    v1921,
    v1922,
    v1923,
    v1924);
  v1925 = (GachaBonusSelectMaster_o *)sub_1BE4D18(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1925, 0LL);
  if ( v1925 )
  {
    v530 = sub_1BE4C08(v1925, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1583;
  v528->m_Items[199] = (DataMasterBase_o *)v1925;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[199],
    (int64_t)v1925,
    v1926,
    v1927,
    v1928,
    v1929,
    v1930,
    v1931);
  v1932 = (GachaBonusSelectLineupMaster_o *)sub_1BE4D18(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1932, 0LL);
  if ( v1932 )
  {
    v530 = sub_1BE4C08(v1932, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1583;
  v528->m_Items[200] = (DataMasterBase_o *)v1932;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[200],
    (int64_t)v1932,
    v1933,
    v1934,
    v1935,
    v1936,
    v1937,
    v1938);
  v1939 = (ServantChangeMaster_o *)sub_1BE4D18(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1939, 0LL);
  if ( v1939 )
  {
    v530 = sub_1BE4C08(v1939, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1583;
  v528->m_Items[201] = (DataMasterBase_o *)v1939;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[201],
    (int64_t)v1939,
    v1940,
    v1941,
    v1942,
    v1943,
    v1944,
    v1945);
  v1946 = (VoiceCondMaster_o *)sub_1BE4D18(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1946, 0LL);
  if ( v1946 )
  {
    v530 = sub_1BE4C08(v1946, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1583;
  v528->m_Items[202] = (DataMasterBase_o *)v1946;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[202],
    (int64_t)v1946,
    v1947,
    v1948,
    v1949,
    v1950,
    v1951,
    v1952);
  v1953 = (BgmReleaseMaster_o *)sub_1BE4D18(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1953, 0LL);
  if ( v1953 )
  {
    v530 = sub_1BE4C08(v1953, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1583;
  v528->m_Items[203] = (DataMasterBase_o *)v1953;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[203],
    (int64_t)v1953,
    v1954,
    v1955,
    v1956,
    v1957,
    v1958,
    v1959);
  v1960 = (MyRoomAddMaster_o *)sub_1BE4D18(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1960, 0LL);
  if ( v1960 )
  {
    v530 = sub_1BE4C08(v1960, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1583;
  v528->m_Items[204] = (DataMasterBase_o *)v1960;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[204],
    (int64_t)v1960,
    v1961,
    v1962,
    v1963,
    v1964,
    v1965,
    v1966);
  v1967 = (ShopActionMaster_o *)sub_1BE4D18(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1967, 0LL);
  if ( v1967 )
  {
    v530 = sub_1BE4C08(v1967, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1583;
  v528->m_Items[205] = (DataMasterBase_o *)v1967;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[205],
    (int64_t)v1967,
    v1968,
    v1969,
    v1970,
    v1971,
    v1972,
    v1973);
  v1974 = (EventRewardSceneReleaseMaster_o *)sub_1BE4D18(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1974, 0LL);
  if ( v1974 )
  {
    v530 = sub_1BE4C08(v1974, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1583;
  v528->m_Items[206] = (DataMasterBase_o *)v1974;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[206],
    (int64_t)v1974,
    v1975,
    v1976,
    v1977,
    v1978,
    v1979,
    v1980);
  v1981 = (QuestBehaviorMaster_o *)sub_1BE4D18(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1981, 0LL);
  if ( v1981 )
  {
    v530 = sub_1BE4C08(v1981, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1583;
  v528->m_Items[207] = (DataMasterBase_o *)v1981;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[207],
    (int64_t)v1981,
    v1982,
    v1983,
    v1984,
    v1985,
    v1986,
    v1987);
  v1988 = (MapMaster_o *)sub_1BE4D18(MapMaster_TypeInfo);
  MapMaster___ctor(v1988, 0LL);
  if ( v1988 )
  {
    v530 = sub_1BE4C08(v1988, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1583;
  v528->m_Items[208] = (DataMasterBase_o *)v1988;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[208],
    (int64_t)v1988,
    v1989,
    v1990,
    v1991,
    v1992,
    v1993,
    v1994);
  v1995 = (MapCondMaster_o *)sub_1BE4D18(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1995, 0LL);
  if ( v1995 )
  {
    v530 = sub_1BE4C08(v1995, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1583;
  v528->m_Items[209] = (DataMasterBase_o *)v1995;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[209],
    (int64_t)v1995,
    v1996,
    v1997,
    v1998,
    v1999,
    v2000,
    v2001);
  v2002 = (MapButtonMaster_o *)sub_1BE4D18(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v2002, 0LL);
  if ( v2002 )
  {
    v530 = sub_1BE4C08(v2002, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1583;
  v528->m_Items[210] = (DataMasterBase_o *)v2002;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[210],
    (int64_t)v2002,
    v2003,
    v2004,
    v2005,
    v2006,
    v2007,
    v2008);
  v2009 = (BannerAddMaster_o *)sub_1BE4D18(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v2009, 0LL);
  if ( v2009 )
  {
    v530 = sub_1BE4C08(v2009, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1583;
  v528->m_Items[211] = (DataMasterBase_o *)v2009;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[211],
    (int64_t)v2009,
    v2010,
    v2011,
    v2012,
    v2013,
    v2014,
    v2015);
  v2016 = (EventAddMaster_o *)sub_1BE4D18(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v2016, 0LL);
  if ( v2016 )
  {
    v530 = sub_1BE4C08(v2016, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1583;
  v528->m_Items[212] = (DataMasterBase_o *)v2016;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[212],
    (int64_t)v2016,
    v2017,
    v2018,
    v2019,
    v2020,
    v2021,
    v2022);
  v2023 = (TotalLoginMaster_o *)sub_1BE4D18(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v2023, 0LL);
  if ( v2023 )
  {
    v530 = sub_1BE4C08(v2023, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1583;
  v528->m_Items[213] = (DataMasterBase_o *)v2023;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[213],
    (int64_t)v2023,
    v2024,
    v2025,
    v2026,
    v2027,
    v2028,
    v2029);
  v2030 = (ServantFilterMaster_o *)sub_1BE4D18(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v2030, 0LL);
  if ( v2030 )
  {
    v530 = sub_1BE4C08(v2030, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1583;
  v528->m_Items[214] = (DataMasterBase_o *)v2030;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[214],
    (int64_t)v2030,
    v2031,
    v2032,
    v2033,
    v2034,
    v2035,
    v2036);
  v2037 = (CombineCostumeMaster_o *)sub_1BE4D18(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v2037, 0LL);
  if ( v2037 )
  {
    v530 = sub_1BE4C08(v2037, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1583;
  v528->m_Items[215] = (DataMasterBase_o *)v2037;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[215],
    (int64_t)v2037,
    v2038,
    v2039,
    v2040,
    v2041,
    v2042,
    v2043);
  v2044 = (ServantCostumeMaster_o *)sub_1BE4D18(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v2044, 0LL);
  if ( v2044 )
  {
    v530 = sub_1BE4C08(v2044, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1583;
  v528->m_Items[216] = (DataMasterBase_o *)v2044;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[216],
    (int64_t)v2044,
    v2045,
    v2046,
    v2047,
    v2048,
    v2049,
    v2050);
  v2051 = (ServantCostumeReleaseMaster_o *)sub_1BE4D18(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v2051, 0LL);
  if ( v2051 )
  {
    v530 = sub_1BE4C08(v2051, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1583;
  v528->m_Items[217] = (DataMasterBase_o *)v2051;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[217],
    (int64_t)v2051,
    v2052,
    v2053,
    v2054,
    v2055,
    v2056,
    v2057);
  v2058 = (UserFriendRequestHistoryMaster_o *)sub_1BE4D18(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v2058, 0LL);
  if ( v2058 )
  {
    v530 = sub_1BE4C08(v2058, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1583;
  v528->m_Items[218] = (DataMasterBase_o *)v2058;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[218],
    (int64_t)v2058,
    v2059,
    v2060,
    v2061,
    v2062,
    v2063,
    v2064);
  v2065 = (UserBlacklistMaster_o *)sub_1BE4D18(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v2065, 0LL);
  if ( v2065 )
  {
    v530 = sub_1BE4C08(v2065, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1583;
  v528->m_Items[219] = (DataMasterBase_o *)v2065;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[219],
    (int64_t)v2065,
    v2066,
    v2067,
    v2068,
    v2069,
    v2070,
    v2071);
  v2072 = (ItemSelectMaster_o *)sub_1BE4D18(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v2072, 0LL);
  if ( v2072 )
  {
    v530 = sub_1BE4C08(v2072, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1583;
  v528->m_Items[220] = (DataMasterBase_o *)v2072;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[220],
    (int64_t)v2072,
    v2073,
    v2074,
    v2075,
    v2076,
    v2077,
    v2078);
  v2079 = (TotalEventRaceMaster_o *)sub_1BE4D18(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v2079, 0LL);
  if ( v2079 )
  {
    v530 = sub_1BE4C08(v2079, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1583;
  v528->m_Items[221] = (DataMasterBase_o *)v2079;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[221],
    (int64_t)v2079,
    v2080,
    v2081,
    v2082,
    v2083,
    v2084,
    v2085);
  v2086 = (EventPointGroupAddMaster_o *)sub_1BE4D18(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v2086, 0LL);
  if ( v2086 )
  {
    v530 = sub_1BE4C08(v2086, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1583;
  v528->m_Items[222] = (DataMasterBase_o *)v2086;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[222],
    (int64_t)v2086,
    v2087,
    v2088,
    v2089,
    v2090,
    v2091,
    v2092);
  v2093 = (VoicePlayGroupMaster_o *)sub_1BE4D18(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v2093, 0LL);
  if ( v2093 )
  {
    v530 = sub_1BE4C08(v2093, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1583;
  v528->m_Items[223] = (DataMasterBase_o *)v2093;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[223],
    (int64_t)v2093,
    v2094,
    v2095,
    v2096,
    v2097,
    v2098,
    v2099);
  v2100 = (VoicePlayCondMaster_o *)sub_1BE4D18(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v2100, 0LL);
  if ( v2100 )
  {
    v530 = sub_1BE4C08(v2100, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1583;
  v528->m_Items[224] = (DataMasterBase_o *)v2100;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[224],
    (int64_t)v2100,
    v2101,
    v2102,
    v2103,
    v2104,
    v2105,
    v2106);
  v2107 = (GachaStoryAdjustMaster_o *)sub_1BE4D18(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v2107, 0LL);
  if ( v2107 )
  {
    v530 = sub_1BE4C08(v2107, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1583;
  v528->m_Items[225] = (DataMasterBase_o *)v2107;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[225],
    (int64_t)v2107,
    v2108,
    v2109,
    v2110,
    v2111,
    v2112,
    v2113);
  v2114 = (ServantFlagMaster_o *)sub_1BE4D18(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v2114, 0LL);
  if ( v2114 )
  {
    v530 = sub_1BE4C08(v2114, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1583;
  v528->m_Items[226] = (DataMasterBase_o *)v2114;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[226],
    (int64_t)v2114,
    v2115,
    v2116,
    v2117,
    v2118,
    v2119,
    v2120);
  v2121 = (ServantFlagReleaseMaster_o *)sub_1BE4D18(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v2121, 0LL);
  if ( v2121 )
  {
    v530 = sub_1BE4C08(v2121, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1583;
  v528->m_Items[227] = (DataMasterBase_o *)v2121;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[227],
    (int64_t)v2121,
    v2122,
    v2123,
    v2124,
    v2125,
    v2126,
    v2127);
  v2128 = (EventLocationCampaignMaster_o *)sub_1BE4D18(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v2128, 0LL);
  if ( v2128 )
  {
    v530 = sub_1BE4C08(v2128, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1583;
  v528->m_Items[228] = (DataMasterBase_o *)v2128;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[228],
    (int64_t)v2128,
    v2129,
    v2130,
    v2131,
    v2132,
    v2133,
    v2134);
  v2135 = (CampaignInfoMaster_o *)sub_1BE4D18(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v2135, 0LL);
  if ( v2135 )
  {
    v530 = sub_1BE4C08(v2135, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1583;
  v528->m_Items[229] = (DataMasterBase_o *)v2135;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[229],
    (int64_t)v2135,
    v2136,
    v2137,
    v2138,
    v2139,
    v2140,
    v2141);
  v2142 = (DialogMessageMaster_o *)sub_1BE4D18(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v2142, 0LL);
  if ( v2142 )
  {
    v530 = sub_1BE4C08(v2142, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1583;
  v528->m_Items[230] = (DataMasterBase_o *)v2142;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[230],
    (int64_t)v2142,
    v2143,
    v2144,
    v2145,
    v2146,
    v2147,
    v2148);
  v2149 = (ServantIndividualityMaster_o *)sub_1BE4D18(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v2149, 0LL);
  if ( v2149 )
  {
    v530 = sub_1BE4C08(v2149, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1583;
  v528->m_Items[231] = (DataMasterBase_o *)v2149;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[231],
    (int64_t)v2149,
    v2150,
    v2151,
    v2152,
    v2153,
    v2154,
    v2155);
  v2156 = (BoardMessageMaster_o *)sub_1BE4D18(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v2156, 0LL);
  if ( v2156 )
  {
    v530 = sub_1BE4C08(v2156, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1583;
  v528->m_Items[232] = (DataMasterBase_o *)v2156;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[232],
    (int64_t)v2156,
    v2157,
    v2158,
    v2159,
    v2160,
    v2161,
    v2162);
  v2163 = (BoardMessageReleaseMaster_o *)sub_1BE4D18(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v2163, 0LL);
  if ( v2163 )
  {
    v530 = sub_1BE4C08(v2163, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1583;
  v528->m_Items[233] = (DataMasterBase_o *)v2163;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[233],
    (int64_t)v2163,
    v2164,
    v2165,
    v2166,
    v2167,
    v2168,
    v2169);
  v2170 = (EventServantFatigueMaster_o *)sub_1BE4D18(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v2170, 0LL);
  if ( v2170 )
  {
    v530 = sub_1BE4C08(v2170, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1583;
  v528->m_Items[234] = (DataMasterBase_o *)v2170;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[234],
    (int64_t)v2170,
    v2171,
    v2172,
    v2173,
    v2174,
    v2175,
    v2176);
  v2177 = (UserEventDeckMaster_o *)sub_1BE4D18(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v2177, 0LL);
  if ( v2177 )
  {
    v530 = sub_1BE4C08(v2177, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1583;
  v528->m_Items[235] = (DataMasterBase_o *)v2177;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[235],
    (int64_t)v2177,
    v2178,
    v2179,
    v2180,
    v2181,
    v2182,
    v2183);
  v2184 = (EventTowerMaster_o *)sub_1BE4D18(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v2184, 0LL);
  if ( v2184 )
  {
    v530 = sub_1BE4C08(v2184, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1583;
  v528->m_Items[236] = (DataMasterBase_o *)v2184;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[236],
    (int64_t)v2184,
    v2185,
    v2186,
    v2187,
    v2188,
    v2189,
    v2190);
  v2191 = (EventTowerRewardMaster_o *)sub_1BE4D18(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v2191, 0LL);
  if ( v2191 )
  {
    v530 = sub_1BE4C08(v2191, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1583;
  v528->m_Items[237] = (DataMasterBase_o *)v2191;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[237],
    (int64_t)v2191,
    v2192,
    v2193,
    v2194,
    v2195,
    v2196,
    v2197);
  v2198 = (EventBulletinBoardMaster_o *)sub_1BE4D18(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v2198, 0LL);
  if ( v2198 )
  {
    v530 = sub_1BE4C08(v2198, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1583;
  v528->m_Items[238] = (DataMasterBase_o *)v2198;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[238],
    (int64_t)v2198,
    v2199,
    v2200,
    v2201,
    v2202,
    v2203,
    v2204);
  v2205 = (EventBulletinBoardReleaseMaster_o *)sub_1BE4D18(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v2205, 0LL);
  if ( v2205 )
  {
    v530 = sub_1BE4C08(v2205, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1583;
  v528->m_Items[239] = (DataMasterBase_o *)v2205;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[239],
    (int64_t)v2205,
    v2206,
    v2207,
    v2208,
    v2209,
    v2210,
    v2211);
  v2212 = (EventFactoryMaster_o *)sub_1BE4D18(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v2212, 0LL);
  if ( v2212 )
  {
    v530 = sub_1BE4C08(v2212, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1583;
  v528->m_Items[240] = (DataMasterBase_o *)v2212;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[240],
    (int64_t)v2212,
    v2213,
    v2214,
    v2215,
    v2216,
    v2217,
    v2218);
  v2219 = (ShopGroupMaster_o *)sub_1BE4D18(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v2219, 0LL);
  if ( v2219 )
  {
    v530 = sub_1BE4C08(v2219, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1583;
  v528->m_Items[241] = (DataMasterBase_o *)v2219;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[241],
    (int64_t)v2219,
    v2220,
    v2221,
    v2222,
    v2223,
    v2224,
    v2225);
  v2226 = (AuraEffectMaster_o *)sub_1BE4D18(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v2226, 0LL);
  if ( v2226 )
  {
    v530 = sub_1BE4C08(v2226, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1583;
  v528->m_Items[242] = (DataMasterBase_o *)v2226;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[242],
    (int64_t)v2226,
    v2227,
    v2228,
    v2229,
    v2230,
    v2231,
    v2232);
  v2233 = (AuraEffectPosOverwriteMaster_o *)sub_1BE4D18(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v2233, 0LL);
  if ( v2233 )
  {
    v530 = sub_1BE4C08(v2233, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1583;
  v528->m_Items[243] = (DataMasterBase_o *)v2233;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[243],
    (int64_t)v2233,
    v2234,
    v2235,
    v2236,
    v2237,
    v2238,
    v2239);
  v2240 = (UserEventMissionFixMaster_o *)sub_1BE4D18(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v2240, 0LL);
  if ( v2240 )
  {
    v530 = sub_1BE4C08(v2240, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1583;
  v528->m_Items[244] = (DataMasterBase_o *)v2240;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[244],
    (int64_t)v2240,
    v2241,
    v2242,
    v2243,
    v2244,
    v2245,
    v2246);
  v2247 = (NotEndEventMissionFixMaster_o *)sub_1BE4D18(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v2247, 0LL);
  if ( v2247 )
  {
    v530 = sub_1BE4C08(v2247, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1583;
  v528->m_Items[245] = (DataMasterBase_o *)v2247;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[245],
    (int64_t)v2247,
    v2248,
    v2249,
    v2250,
    v2251,
    v2252,
    v2253);
  v2254 = (EnemyMstMaster_o *)sub_1BE4D18(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v2254, 0LL);
  if ( v2254 )
  {
    v530 = sub_1BE4C08(v2254, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1583;
  v528->m_Items[246] = (DataMasterBase_o *)v2254;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[246],
    (int64_t)v2254,
    v2255,
    v2256,
    v2257,
    v2258,
    v2259,
    v2260);
  v2261 = (EnemyMstBattleMaster_o *)sub_1BE4D18(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v2261, 0LL);
  if ( v2261 )
  {
    v530 = sub_1BE4C08(v2261, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1583;
  v528->m_Items[247] = (DataMasterBase_o *)v2261;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[247],
    (int64_t)v2261,
    v2262,
    v2263,
    v2264,
    v2265,
    v2266,
    v2267);
  v2268 = (ServantSkillReleaseMaster_o *)sub_1BE4D18(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v2268, 0LL);
  if ( v2268 )
  {
    v530 = sub_1BE4C08(v2268, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1583;
  v528->m_Items[248] = (DataMasterBase_o *)v2268;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[248],
    (int64_t)v2268,
    v2269,
    v2270,
    v2271,
    v2272,
    v2273,
    v2274);
  v2275 = (ServantPassiveSkillReleaseMaster_o *)sub_1BE4D18(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v2275, 0LL);
  if ( v2275 )
  {
    v530 = sub_1BE4C08(v2275, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1583;
  v528->m_Items[249] = (DataMasterBase_o *)v2275;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[249],
    (int64_t)v2275,
    v2276,
    v2277,
    v2278,
    v2279,
    v2280,
    v2281);
  v2282 = (ServantTreasureDeviceReleaseMaster_o *)sub_1BE4D18(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v2282, 0LL);
  if ( v2282 )
  {
    v530 = sub_1BE4C08(v2282, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1583;
  v528->m_Items[250] = (DataMasterBase_o *)v2282;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[250],
    (int64_t)v2282,
    v2283,
    v2284,
    v2285,
    v2286,
    v2287,
    v2288);
  v2289 = (MapGimmickReleaseMaster_o *)sub_1BE4D18(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v2289, 0LL);
  if ( v2289 )
  {
    v530 = sub_1BE4C08(v2289, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1583;
  v528->m_Items[251] = (DataMasterBase_o *)v2289;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[251],
    (int64_t)v2289,
    v2290,
    v2291,
    v2292,
    v2293,
    v2294,
    v2295);
  v2296 = (CommandCodeMaster_o *)sub_1BE4D18(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v2296, 0LL);
  if ( v2296 )
  {
    v530 = sub_1BE4C08(v2296, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1583;
  v528->m_Items[252] = (DataMasterBase_o *)v2296;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[252],
    (int64_t)v2296,
    v2297,
    v2298,
    v2299,
    v2300,
    v2301,
    v2302);
  v2303 = (ServantCommandCodeUnlockMaster_o *)sub_1BE4D18(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v2303, 0LL);
  if ( v2303 )
  {
    v530 = sub_1BE4C08(v2303, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1583;
  v528->m_Items[253] = (DataMasterBase_o *)v2303;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[253],
    (int64_t)v2303,
    v2304,
    v2305,
    v2306,
    v2307,
    v2308,
    v2309);
  v2310 = (UserCommandCodeMaster_o *)sub_1BE4D18(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v2310, 0LL);
  if ( v2310 )
  {
    v530 = sub_1BE4C08(v2310, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1583;
  v528->m_Items[254] = (DataMasterBase_o *)v2310;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[254],
    (int64_t)v2310,
    v2311,
    v2312,
    v2313,
    v2314,
    v2315,
    v2316);
  v2317 = (UserCommandCodeCollectionMaster_o *)sub_1BE4D18(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v2317, 0LL);
  if ( v2317 )
  {
    v530 = sub_1BE4C08(v2317, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1583;
  v528->m_Items[255] = (DataMasterBase_o *)v2317;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[255],
    (int64_t)v2317,
    v2318,
    v2319,
    v2320,
    v2321,
    v2322,
    v2323);
  v2324 = (UserServantCommandCodeMaster_o *)sub_1BE4D18(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v2324, 0LL);
  if ( v2324 )
  {
    v530 = sub_1BE4C08(v2324, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1583;
  v528->m_Items[256] = (DataMasterBase_o *)v2324;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[256],
    (int64_t)v2324,
    v2325,
    v2326,
    v2327,
    v2328,
    v2329,
    v2330);
  v2331 = (UserServantCommandCardMaster_o *)sub_1BE4D18(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v2331, 0LL);
  if ( v2331 )
  {
    v530 = sub_1BE4C08(v2331, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1583;
  v528->m_Items[257] = (DataMasterBase_o *)v2331;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[257],
    (int64_t)v2331,
    v2332,
    v2333,
    v2334,
    v2335,
    v2336,
    v2337);
  v2338 = (CommandCardRankParamMaster_o *)sub_1BE4D18(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v2338, 0LL);
  if ( v2338 )
  {
    v530 = sub_1BE4C08(v2338, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1583;
  v528->m_Items[258] = (DataMasterBase_o *)v2338;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[258],
    (int64_t)v2338,
    v2339,
    v2340,
    v2341,
    v2342,
    v2343,
    v2344);
  v2345 = (CommandCodeSkillMaster_o *)sub_1BE4D18(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v2345, 0LL);
  if ( v2345 )
  {
    v530 = sub_1BE4C08(v2345, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1583;
  v528->m_Items[259] = (DataMasterBase_o *)v2345;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[259],
    (int64_t)v2345,
    v2346,
    v2347,
    v2348,
    v2349,
    v2350,
    v2351);
  v2352 = (CommandCodeSkillReleaseMaster_o *)sub_1BE4D18(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v2352, 0LL);
  if ( v2352 )
  {
    v530 = sub_1BE4C08(v2352, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1583;
  v528->m_Items[260] = (DataMasterBase_o *)v2352;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[260],
    (int64_t)v2352,
    v2353,
    v2354,
    v2355,
    v2356,
    v2357,
    v2358);
  v2359 = (CommandCodeCommentMaster_o *)sub_1BE4D18(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v2359, 0LL);
  if ( v2359 )
  {
    v530 = sub_1BE4C08(v2359, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1583;
  v528->m_Items[261] = (DataMasterBase_o *)v2359;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[261],
    (int64_t)v2359,
    v2360,
    v2361,
    v2362,
    v2363,
    v2364,
    v2365);
  v2366 = (EventStatusMaster_o *)sub_1BE4D18(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v2366, 0LL);
  if ( v2366 )
  {
    v530 = sub_1BE4C08(v2366, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1583;
  v528->m_Items[262] = (DataMasterBase_o *)v2366;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[262],
    (int64_t)v2366,
    v2367,
    v2368,
    v2369,
    v2370,
    v2371,
    v2372);
  v2373 = (EventStatusQuestMaster_o *)sub_1BE4D18(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v2373, 0LL);
  if ( v2373 )
  {
    v530 = sub_1BE4C08(v2373, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1583;
  v528->m_Items[263] = (DataMasterBase_o *)v2373;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[263],
    (int64_t)v2373,
    v2374,
    v2375,
    v2376,
    v2377,
    v2378,
    v2379);
  v2380 = (CommonRestrictionMaster_o *)sub_1BE4D18(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v2380, 0LL);
  if ( v2380 )
  {
    v530 = sub_1BE4C08(v2380, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1583;
  v528->m_Items[264] = (DataMasterBase_o *)v2380;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[264],
    (int64_t)v2380,
    v2381,
    v2382,
    v2383,
    v2384,
    v2385,
    v2386);
  v2387 = (EventPointBuffMaster_o *)sub_1BE4D18(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v2387, 0LL);
  if ( v2387 )
  {
    v530 = sub_1BE4C08(v2387, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1583;
  v528->m_Items[265] = (DataMasterBase_o *)v2387;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[265],
    (int64_t)v2387,
    v2388,
    v2389,
    v2390,
    v2391,
    v2392,
    v2393);
  v2394 = (UserFollowMaster_o *)sub_1BE4D18(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v2394, 0LL);
  if ( v2394 )
  {
    v530 = sub_1BE4C08(v2394, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1583;
  v528->m_Items[266] = (DataMasterBase_o *)v2394;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[266],
    (int64_t)v2394,
    v2395,
    v2396,
    v2397,
    v2398,
    v2399,
    v2400);
  v2401 = (EventRewardGuideReleaseMaster_o *)sub_1BE4D18(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v2401, 0LL);
  if ( v2401 )
  {
    v530 = sub_1BE4C08(v2401, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1583;
  v528->m_Items[267] = (DataMasterBase_o *)v2401;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[267],
    (int64_t)v2401,
    v2402,
    v2403,
    v2404,
    v2405,
    v2406,
    v2407);
  v2408 = (NpcServantEquipMaster_o *)sub_1BE4D18(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v2408, 0LL);
  if ( v2408 )
  {
    v530 = sub_1BE4C08(v2408, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1583;
  v528->m_Items[268] = (DataMasterBase_o *)v2408;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[268],
    (int64_t)v2408,
    v2409,
    v2410,
    v2411,
    v2412,
    v2413,
    v2414);
  v2415 = (EventCampaignReleaseMaster_o *)sub_1BE4D18(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v2415, 0LL);
  if ( v2415 )
  {
    v530 = sub_1BE4C08(v2415, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1583;
  v528->m_Items[269] = (DataMasterBase_o *)v2415;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[269],
    (int64_t)v2415,
    v2416,
    v2417,
    v2418,
    v2419,
    v2420,
    v2421);
  v2422 = (ServantMaterialFolderMaster_o *)sub_1BE4D18(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v2422, 0LL);
  if ( v2422 )
  {
    v530 = sub_1BE4C08(v2422, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1583;
  v528->m_Items[270] = (DataMasterBase_o *)v2422;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[270],
    (int64_t)v2422,
    v2423,
    v2424,
    v2425,
    v2426,
    v2427,
    v2428);
  v2429 = (EventEquipSkillReleaseMaster_o *)sub_1BE4D18(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v2429, 0LL);
  if ( v2429 )
  {
    v530 = sub_1BE4C08(v2429, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1583;
  v528->m_Items[271] = (DataMasterBase_o *)v2429;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[271],
    (int64_t)v2429,
    v2430,
    v2431,
    v2432,
    v2433,
    v2434,
    v2435);
  v2436 = (EventPointActivityMaster_o *)sub_1BE4D18(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v2436, 0LL);
  if ( v2436 )
  {
    v530 = sub_1BE4C08(v2436, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1583;
  v528->m_Items[272] = (DataMasterBase_o *)v2436;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[272],
    (int64_t)v2436,
    v2437,
    v2438,
    v2439,
    v2440,
    v2441,
    v2442);
  v2443 = (FunctionCategoryMaster_o *)sub_1BE4D18(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v2443, 0LL);
  if ( v2443 )
  {
    v530 = sub_1BE4C08(v2443, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1583;
  v528->m_Items[273] = (DataMasterBase_o *)v2443;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[273],
    (int64_t)v2443,
    v2444,
    v2445,
    v2446,
    v2447,
    v2448,
    v2449);
  v2450 = (QuestPickupMaster_o *)sub_1BE4D18(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v2450, 0LL);
  if ( v2450 )
  {
    v530 = sub_1BE4C08(v2450, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1583;
  v528->m_Items[274] = (DataMasterBase_o *)v2450;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[274],
    (int64_t)v2450,
    v2451,
    v2452,
    v2453,
    v2454,
    v2455,
    v2456);
  v2457 = (EventUiMaster_o *)sub_1BE4D18(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v2457, 0LL);
  if ( v2457 )
  {
    v530 = sub_1BE4C08(v2457, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1583;
  v528->m_Items[275] = (DataMasterBase_o *)v2457;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[275],
    (int64_t)v2457,
    v2458,
    v2459,
    v2460,
    v2461,
    v2462,
    v2463);
  v2464 = (EventUiReleaseMaster_o *)sub_1BE4D18(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v2464, 0LL);
  if ( v2464 )
  {
    v530 = sub_1BE4C08(v2464, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1583;
  v528->m_Items[276] = (DataMasterBase_o *)v2464;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[276],
    (int64_t)v2464,
    v2465,
    v2466,
    v2467,
    v2468,
    v2469,
    v2470);
  v2471 = (EventUiValueMaster_o *)sub_1BE4D18(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v2471, 0LL);
  if ( v2471 )
  {
    v530 = sub_1BE4C08(v2471, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1583;
  v528->m_Items[277] = (DataMasterBase_o *)v2471;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[277],
    (int64_t)v2471,
    v2472,
    v2473,
    v2474,
    v2475,
    v2476,
    v2477);
  v2478 = (EventConquestRewardMaster_o *)sub_1BE4D18(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v2478, 0LL);
  if ( v2478 )
  {
    v530 = sub_1BE4C08(v2478, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1583;
  v528->m_Items[278] = (DataMasterBase_o *)v2478;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[278],
    (int64_t)v2478,
    v2479,
    v2480,
    v2481,
    v2482,
    v2483,
    v2484);
  v2485 = (NpcFollowerReleaseMaster_o *)sub_1BE4D18(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v2485, 0LL);
  if ( v2485 )
  {
    v530 = sub_1BE4C08(v2485, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1583;
  v528->m_Items[279] = (DataMasterBase_o *)v2485;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[279],
    (int64_t)v2485,
    v2486,
    v2487,
    v2488,
    v2489,
    v2490,
    v2491);
  v2492 = (EventBonusFilterMaster_o *)sub_1BE4D18(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v2492, 0LL);
  if ( v2492 )
  {
    v530 = sub_1BE4C08(v2492, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1583;
  v528->m_Items[280] = (DataMasterBase_o *)v2492;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[280],
    (int64_t)v2492,
    v2493,
    v2494,
    v2495,
    v2496,
    v2497,
    v2498);
  v2499 = (EventBonusFilterGroupInfoMaster_o *)sub_1BE4D18(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v2499, 0LL);
  if ( v2499 )
  {
    v530 = sub_1BE4C08(v2499, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1583;
  v528->m_Items[281] = (DataMasterBase_o *)v2499;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[281],
    (int64_t)v2499,
    v2500,
    v2501,
    v2502,
    v2503,
    v2504,
    v2505);
  v2506 = (EventBonusFilterGroupMemberMaster_o *)sub_1BE4D18(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v2506, 0LL);
  if ( v2506 )
  {
    v530 = sub_1BE4C08(v2506, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1583;
  v528->m_Items[282] = (DataMasterBase_o *)v2506;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[282],
    (int64_t)v2506,
    v2507,
    v2508,
    v2509,
    v2510,
    v2511,
    v2512);
  v2513 = (UserGachaExtraCountMaster_o *)sub_1BE4D18(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v2513, 0LL);
  if ( v2513 )
  {
    v530 = sub_1BE4C08(v2513, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1583;
  v528->m_Items[283] = (DataMasterBase_o *)v2513;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[283],
    (int64_t)v2513,
    v2514,
    v2515,
    v2516,
    v2517,
    v2518,
    v2519);
  v2520 = (PrivilegeMaster_o *)sub_1BE4D18(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v2520, 0LL);
  if ( v2520 )
  {
    v530 = sub_1BE4C08(v2520, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1583;
  v528->m_Items[284] = (DataMasterBase_o *)v2520;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[284],
    (int64_t)v2520,
    v2521,
    v2522,
    v2523,
    v2524,
    v2525,
    v2526);
  v2527 = (UserPrivilegeMaster_o *)sub_1BE4D18(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v2527, 0LL);
  if ( v2527 )
  {
    v530 = sub_1BE4C08(v2527, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1583;
  v528->m_Items[285] = (DataMasterBase_o *)v2527;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[285],
    (int64_t)v2527,
    v2528,
    v2529,
    v2530,
    v2531,
    v2532,
    v2533);
  v2534 = (UserQuestRouteMaster_o *)sub_1BE4D18(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v2534, 0LL);
  if ( v2534 )
  {
    v530 = sub_1BE4C08(v2534, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1583;
  v528->m_Items[286] = (DataMasterBase_o *)v2534;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[286],
    (int64_t)v2534,
    v2535,
    v2536,
    v2537,
    v2538,
    v2539,
    v2540);
  v2541 = (EventBossStatusUiMaster_o *)sub_1BE4D18(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v2541, 0LL);
  if ( v2541 )
  {
    v530 = sub_1BE4C08(v2541, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1583;
  v528->m_Items[287] = (DataMasterBase_o *)v2541;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[287],
    (int64_t)v2541,
    v2542,
    v2543,
    v2544,
    v2545,
    v2546,
    v2547);
  v2548 = (CommonReleaseMaster_o *)sub_1BE4D18(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v2548, 0LL);
  if ( v2548 )
  {
    v530 = sub_1BE4C08(v2548, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1583;
  v528->m_Items[288] = (DataMasterBase_o *)v2548;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[288],
    (int64_t)v2548,
    v2549,
    v2550,
    v2551,
    v2552,
    v2553,
    v2554);
  v2555 = (QuestSpotReleaseMaster_o *)sub_1BE4D18(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v2555, 0LL);
  if ( v2555 )
  {
    v530 = sub_1BE4C08(v2555, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1583;
  v528->m_Items[289] = (DataMasterBase_o *)v2555;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[289],
    (int64_t)v2555,
    v2556,
    v2557,
    v2558,
    v2559,
    v2560,
    v2561);
  v2562 = (VoiceMaterialCondMaster_o *)sub_1BE4D18(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v2562, 0LL);
  if ( v2562 )
  {
    v530 = sub_1BE4C08(v2562, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1583;
  v528->m_Items[290] = (DataMasterBase_o *)v2562;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[290],
    (int64_t)v2562,
    v2563,
    v2564,
    v2565,
    v2566,
    v2567,
    v2568);
  v2569 = (ClassRelationOverwriteMaster_o *)sub_1BE4D18(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v2569, 0LL);
  if ( v2569 )
  {
    v530 = sub_1BE4C08(v2569, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1583;
  v528->m_Items[291] = (DataMasterBase_o *)v2569;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[291],
    (int64_t)v2569,
    v2570,
    v2571,
    v2572,
    v2573,
    v2574,
    v2575);
  v2576 = (EventGroupMaster_o *)sub_1BE4D18(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v2576, 0LL);
  if ( v2576 )
  {
    v530 = sub_1BE4C08(v2576, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1583;
  v528->m_Items[292] = (DataMasterBase_o *)v2576;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[292],
    (int64_t)v2576,
    v2577,
    v2578,
    v2579,
    v2580,
    v2581,
    v2582);
  v2583 = (TotalBoxGachaMaster_o *)sub_1BE4D18(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v2583, 0LL);
  if ( v2583 )
  {
    v530 = sub_1BE4C08(v2583, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1583;
  v528->m_Items[293] = (DataMasterBase_o *)v2583;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[293],
    (int64_t)v2583,
    v2584,
    v2585,
    v2586,
    v2587,
    v2588,
    v2589);
  v2590 = (ServantTreasureDeviceDamageMaster_o *)sub_1BE4D18(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v2590, 0LL);
  if ( v2590 )
  {
    v530 = sub_1BE4C08(v2590, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1583;
  v528->m_Items[294] = (DataMasterBase_o *)v2590;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[294],
    (int64_t)v2590,
    v2591,
    v2592,
    v2593,
    v2594,
    v2595,
    v2596);
  v2597 = (UserEventServantFatigueMaster_o *)sub_1BE4D18(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v2597, 0LL);
  if ( v2597 )
  {
    v530 = sub_1BE4C08(v2597, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1583;
  v528->m_Items[295] = (DataMasterBase_o *)v2597;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[295],
    (int64_t)v2597,
    v2598,
    v2599,
    v2600,
    v2601,
    v2602,
    v2603);
  v2604 = (EventRewardBgMaster_o *)sub_1BE4D18(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v2604, 0LL);
  if ( v2604 )
  {
    v530 = sub_1BE4C08(v2604, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1583;
  v528->m_Items[296] = (DataMasterBase_o *)v2604;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[296],
    (int64_t)v2604,
    v2605,
    v2606,
    v2607,
    v2608,
    v2609,
    v2610);
  v2611 = (EventFatigueRecoveryMaster_o *)sub_1BE4D18(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v2611, 0LL);
  if ( v2611 )
  {
    v530 = sub_1BE4C08(v2611, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1583;
  v528->m_Items[297] = (DataMasterBase_o *)v2611;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[297],
    (int64_t)v2611,
    v2612,
    v2613,
    v2614,
    v2615,
    v2616,
    v2617);
  v2618 = (EventBoostItemUsedMaster_o *)sub_1BE4D18(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v2618, 0LL);
  if ( v2618 )
  {
    v530 = sub_1BE4C08(v2618, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1583;
  v528->m_Items[298] = (DataMasterBase_o *)v2618;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[298],
    (int64_t)v2618,
    v2619,
    v2620,
    v2621,
    v2622,
    v2623,
    v2624);
  v2625 = (StatusEffectPosOverwriteMaster_o *)sub_1BE4D18(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v2625, 0LL);
  if ( v2625 )
  {
    v530 = sub_1BE4C08(v2625, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1583;
  v528->m_Items[299] = (DataMasterBase_o *)v2625;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[299],
    (int64_t)v2625,
    v2626,
    v2627,
    v2628,
    v2629,
    v2630,
    v2631);
  v2632 = (QuestPhaseDetailAddMaster_o *)sub_1BE4D18(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v2632, 0LL);
  if ( v2632 )
  {
    v530 = sub_1BE4C08(v2632, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1583;
  v528->m_Items[300] = (DataMasterBase_o *)v2632;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[300],
    (int64_t)v2632,
    v2633,
    v2634,
    v2635,
    v2636,
    v2637,
    v2638);
  v2639 = (VoiceClosedMessageMaster_o *)sub_1BE4D18(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v2639, 0LL);
  if ( v2639 )
  {
    v530 = sub_1BE4C08(v2639, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1583;
  v528->m_Items[301] = (DataMasterBase_o *)v2639;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[301],
    (int64_t)v2639,
    v2640,
    v2641,
    v2642,
    v2643,
    v2644,
    v2645);
  v2646 = (ReprintStageMaster_o *)sub_1BE4D18(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v2646, 0LL);
  if ( v2646 )
  {
    v530 = sub_1BE4C08(v2646, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1583;
  v528->m_Items[302] = (DataMasterBase_o *)v2646;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[302],
    (int64_t)v2646,
    v2647,
    v2648,
    v2649,
    v2650,
    v2651,
    v2652);
  v2653 = (UserCombineExpMaster_o *)sub_1BE4D18(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v2653, 0LL);
  if ( v2653 )
  {
    v530 = sub_1BE4C08(v2653, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1583;
  v528->m_Items[303] = (DataMasterBase_o *)v2653;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[303],
    (int64_t)v2653,
    v2654,
    v2655,
    v2656,
    v2657,
    v2658,
    v2659);
  v2660 = (EventBoardGameCellMaster_o *)sub_1BE4D18(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v2660, 0LL);
  if ( v2660 )
  {
    v530 = sub_1BE4C08(v2660, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1583;
  v528->m_Items[304] = (DataMasterBase_o *)v2660;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[304],
    (int64_t)v2660,
    v2661,
    v2662,
    v2663,
    v2664,
    v2665,
    v2666);
  v2667 = (EventBoardGameTokenMaster_o *)sub_1BE4D18(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v2667, 0LL);
  if ( v2667 )
  {
    v530 = sub_1BE4C08(v2667, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1583;
  v528->m_Items[305] = (DataMasterBase_o *)v2667;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[305],
    (int64_t)v2667,
    v2668,
    v2669,
    v2670,
    v2671,
    v2672,
    v2673);
  v2674 = (EventBoardGameTokenRewardMaster_o *)sub_1BE4D18(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v2674, 0LL);
  if ( v2674 )
  {
    v530 = sub_1BE4C08(v2674, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1583;
  v528->m_Items[306] = (DataMasterBase_o *)v2674;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[306],
    (int64_t)v2674,
    v2675,
    v2676,
    v2677,
    v2678,
    v2679,
    v2680);
  v2681 = (UserEventBoardGameTokenMaster_o *)sub_1BE4D18(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v2681, 0LL);
  if ( v2681 )
  {
    v530 = sub_1BE4C08(v2681, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1583;
  v528->m_Items[307] = (DataMasterBase_o *)v2681;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[307],
    (int64_t)v2681,
    v2682,
    v2683,
    v2684,
    v2685,
    v2686,
    v2687);
  v2688 = (ServantAnimationOverwriteMaster_o *)sub_1BE4D18(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v2688, 0LL);
  if ( v2688 )
  {
    v530 = sub_1BE4C08(v2688, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1583;
  v528->m_Items[308] = (DataMasterBase_o *)v2688;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[308],
    (int64_t)v2688,
    v2689,
    v2690,
    v2691,
    v2692,
    v2693,
    v2694);
  v2695 = (OpeningMovieMaster_o *)sub_1BE4D18(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v2695, 0LL);
  if ( v2695 )
  {
    v530 = sub_1BE4C08(v2695, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1583;
  v528->m_Items[309] = (DataMasterBase_o *)v2695;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[309],
    (int64_t)v2695,
    v2696,
    v2697,
    v2698,
    v2699,
    v2700,
    v2701);
  v2702 = (ServantLimitSpoilerProtectionMaster_o *)sub_1BE4D18(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v2702, 0LL);
  if ( v2702 )
  {
    v530 = sub_1BE4C08(v2702, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1583;
  v528->m_Items[310] = (DataMasterBase_o *)v2702;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[310],
    (int64_t)v2702,
    v2703,
    v2704,
    v2705,
    v2706,
    v2707,
    v2708);
  v2709 = (PickupUserFollowerMaster_o *)sub_1BE4D18(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v2709, 0LL);
  if ( v2709 )
  {
    v530 = sub_1BE4C08(v2709, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1583;
  v528->m_Items[311] = (DataMasterBase_o *)v2709;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[311],
    (int64_t)v2709,
    v2710,
    v2711,
    v2712,
    v2713,
    v2714,
    v2715);
  v2716 = (ServantCollectionMaster_o *)sub_1BE4D18(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v2716, 0LL);
  if ( v2716 )
  {
    v530 = sub_1BE4C08(v2716, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1583;
  v528->m_Items[312] = (DataMasterBase_o *)v2716;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[312],
    (int64_t)v2716,
    v2717,
    v2718,
    v2719,
    v2720,
    v2721,
    v2722);
  v2723 = (GachaBehaviorMaster_o *)sub_1BE4D18(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v2723, 0LL);
  if ( v2723 )
  {
    v530 = sub_1BE4C08(v2723, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1583;
  v528->m_Items[313] = (DataMasterBase_o *)v2723;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[313],
    (int64_t)v2723,
    v2724,
    v2725,
    v2726,
    v2727,
    v2728,
    v2729);
  v2730 = (EventQuestCooltimeMaster_o *)sub_1BE4D18(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v2730, 0LL);
  if ( v2730 )
  {
    v530 = sub_1BE4C08(v2730, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1583;
  v528->m_Items[314] = (DataMasterBase_o *)v2730;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[314],
    (int64_t)v2730,
    v2731,
    v2732,
    v2733,
    v2734,
    v2735,
    v2736);
  v2737 = (UserEventQuestCooltimeMaster_o *)sub_1BE4D18(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v2737, 0LL);
  if ( v2737 )
  {
    v530 = sub_1BE4C08(v2737, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1583;
  v528->m_Items[315] = (DataMasterBase_o *)v2737;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[315],
    (int64_t)v2737,
    v2738,
    v2739,
    v2740,
    v2741,
    v2742,
    v2743);
  v2744 = (BoostMaster_o *)sub_1BE4D18(BoostMaster_TypeInfo);
  BoostMaster___ctor(v2744, 0LL);
  if ( v2744 )
  {
    v530 = sub_1BE4C08(v2744, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1583;
  v528->m_Items[316] = (DataMasterBase_o *)v2744;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[316],
    (int64_t)v2744,
    v2745,
    v2746,
    v2747,
    v2748,
    v2749,
    v2750);
  v2751 = (WarBoardMaster_o *)sub_1BE4D18(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v2751, 0LL);
  if ( v2751 )
  {
    v530 = sub_1BE4C08(v2751, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1583;
  v528->m_Items[317] = (DataMasterBase_o *)v2751;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[317],
    (int64_t)v2751,
    v2752,
    v2753,
    v2754,
    v2755,
    v2756,
    v2757);
  v2758 = (WarBoardSquareMaster_o *)sub_1BE4D18(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v2758, 0LL);
  if ( v2758 )
  {
    v530 = sub_1BE4C08(v2758, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1583;
  v528->m_Items[318] = (DataMasterBase_o *)v2758;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[318],
    (int64_t)v2758,
    v2759,
    v2760,
    v2761,
    v2762,
    v2763,
    v2764);
  v2765 = (WarBoardRoadMaster_o *)sub_1BE4D18(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v2765, 0LL);
  if ( v2765 )
  {
    v530 = sub_1BE4C08(v2765, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1583;
  v528->m_Items[319] = (DataMasterBase_o *)v2765;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[319],
    (int64_t)v2765,
    v2766,
    v2767,
    v2768,
    v2769,
    v2770,
    v2771);
  v2772 = (WarBoardStageMaster_o *)sub_1BE4D18(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v2772, 0LL);
  if ( v2772 )
  {
    v530 = sub_1BE4C08(v2772, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1583;
  v528->m_Items[320] = (DataMasterBase_o *)v2772;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[320],
    (int64_t)v2772,
    v2773,
    v2774,
    v2775,
    v2776,
    v2777,
    v2778);
  v2779 = (WarBoardActionPointMaster_o *)sub_1BE4D18(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v2779, 0LL);
  if ( v2779 )
  {
    v530 = sub_1BE4C08(v2779, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1583;
  v528->m_Items[321] = (DataMasterBase_o *)v2779;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[321],
    (int64_t)v2779,
    v2780,
    v2781,
    v2782,
    v2783,
    v2784,
    v2785);
  v2786 = (WarBoardActionTrendMaster_o *)sub_1BE4D18(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v2786, 0LL);
  if ( v2786 )
  {
    v530 = sub_1BE4C08(v2786, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1583;
  v528->m_Items[322] = (DataMasterBase_o *)v2786;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[322],
    (int64_t)v2786,
    v2787,
    v2788,
    v2789,
    v2790,
    v2791,
    v2792);
  v2793 = (WarBoardTacticalTrendMaster_o *)sub_1BE4D18(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v2793, 0LL);
  if ( v2793 )
  {
    v530 = sub_1BE4C08(v2793, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1583;
  v528->m_Items[323] = (DataMasterBase_o *)v2793;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[323],
    (int64_t)v2793,
    v2794,
    v2795,
    v2796,
    v2797,
    v2798,
    v2799);
  v2800 = (WarBoardStageLayoutMaster_o *)sub_1BE4D18(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v2800, 0LL);
  if ( v2800 )
  {
    v530 = sub_1BE4C08(v2800, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1583;
  v528->m_Items[324] = (DataMasterBase_o *)v2800;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[324],
    (int64_t)v2800,
    v2801,
    v2802,
    v2803,
    v2804,
    v2805,
    v2806);
  v2807 = (WarBoardStageNpcMaster_o *)sub_1BE4D18(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v2807, 0LL);
  if ( v2807 )
  {
    v530 = sub_1BE4C08(v2807, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1583;
  v528->m_Items[325] = (DataMasterBase_o *)v2807;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[325],
    (int64_t)v2807,
    v2808,
    v2809,
    v2810,
    v2811,
    v2812,
    v2813);
  v2814 = (WarBoardStageWallMaster_o *)sub_1BE4D18(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v2814, 0LL);
  if ( v2814 )
  {
    v530 = sub_1BE4C08(v2814, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1583;
  v528->m_Items[326] = (DataMasterBase_o *)v2814;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[326],
    (int64_t)v2814,
    v2815,
    v2816,
    v2817,
    v2818,
    v2819,
    v2820);
  v2821 = (WarBoardAIMaster_o *)sub_1BE4D18(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v2821, 0LL);
  if ( v2821 )
  {
    v530 = sub_1BE4C08(v2821, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1583;
  v528->m_Items[327] = (DataMasterBase_o *)v2821;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[327],
    (int64_t)v2821,
    v2822,
    v2823,
    v2824,
    v2825,
    v2826,
    v2827);
  v2828 = (WarBoardRatingBaseMaster_o *)sub_1BE4D18(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v2828, 0LL);
  if ( v2828 )
  {
    v530 = sub_1BE4C08(v2828, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1583;
  v528->m_Items[328] = (DataMasterBase_o *)v2828;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[328],
    (int64_t)v2828,
    v2829,
    v2830,
    v2831,
    v2832,
    v2833,
    v2834);
  v2835 = (WarBoardRatingOffsetMaster_o *)sub_1BE4D18(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v2835, 0LL);
  if ( v2835 )
  {
    v530 = sub_1BE4C08(v2835, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1583;
  v528->m_Items[329] = (DataMasterBase_o *)v2835;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[329],
    (int64_t)v2835,
    v2836,
    v2837,
    v2838,
    v2839,
    v2840,
    v2841);
  v2842 = (WarBoardItemMaster_o *)sub_1BE4D18(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v2842, 0LL);
  if ( v2842 )
  {
    v530 = sub_1BE4C08(v2842, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1583;
  v528->m_Items[330] = (DataMasterBase_o *)v2842;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[330],
    (int64_t)v2842,
    v2843,
    v2844,
    v2845,
    v2846,
    v2847,
    v2848);
  v2849 = (WarBoardTreasureMaster_o *)sub_1BE4D18(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v2849, 0LL);
  if ( v2849 )
  {
    v530 = sub_1BE4C08(v2849, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1583;
  v528->m_Items[331] = (DataMasterBase_o *)v2849;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[331],
    (int64_t)v2849,
    v2850,
    v2851,
    v2852,
    v2853,
    v2854,
    v2855);
  v2856 = (WarBoardQuestMaster_o *)sub_1BE4D18(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v2856, 0LL);
  if ( v2856 )
  {
    v530 = sub_1BE4C08(v2856, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1583;
  v528->m_Items[332] = (DataMasterBase_o *)v2856;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[332],
    (int64_t)v2856,
    v2857,
    v2858,
    v2859,
    v2860,
    v2861,
    v2862);
  v2863 = (WarBoardDataMaster_o *)sub_1BE4D18(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v2863, 0LL);
  if ( v2863 )
  {
    v530 = sub_1BE4C08(v2863, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1583;
  v528->m_Items[333] = (DataMasterBase_o *)v2863;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[333],
    (int64_t)v2863,
    v2864,
    v2865,
    v2866,
    v2867,
    v2868,
    v2869);
  v2870 = (WarBoardIndividualityClassMaster_o *)sub_1BE4D18(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v2870, 0LL);
  if ( v2870 )
  {
    v530 = sub_1BE4C08(v2870, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1583;
  v528->m_Items[334] = (DataMasterBase_o *)v2870;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[334],
    (int64_t)v2870,
    v2871,
    v2872,
    v2873,
    v2874,
    v2875,
    v2876);
  v2877 = (WarBoardActionTrendConditionMaster_o *)sub_1BE4D18(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v2877, 0LL);
  if ( v2877 )
  {
    v530 = sub_1BE4C08(v2877, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1583;
  v528->m_Items[335] = (DataMasterBase_o *)v2877;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[335],
    (int64_t)v2877,
    v2878,
    v2879,
    v2880,
    v2881,
    v2882,
    v2883);
  v2884 = (WarBoardActionPointClassMaster_o *)sub_1BE4D18(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v2884, 0LL);
  if ( v2884 )
  {
    v530 = sub_1BE4C08(v2884, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1583;
  v528->m_Items[336] = (DataMasterBase_o *)v2884;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[336],
    (int64_t)v2884,
    v2885,
    v2886,
    v2887,
    v2888,
    v2889,
    v2890);
  v2891 = (EventPanelMapMaster_o *)sub_1BE4D18(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v2891, 0LL);
  if ( v2891 )
  {
    v530 = sub_1BE4C08(v2891, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1583;
  v528->m_Items[337] = (DataMasterBase_o *)v2891;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[337],
    (int64_t)v2891,
    v2892,
    v2893,
    v2894,
    v2895,
    v2896,
    v2897);
  v2898 = (EventPanelMapDetailMaster_o *)sub_1BE4D18(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v2898, 0LL);
  if ( v2898 )
  {
    v530 = sub_1BE4C08(v2898, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1583;
  v528->m_Items[338] = (DataMasterBase_o *)v2898;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[338],
    (int64_t)v2898,
    v2899,
    v2900,
    v2901,
    v2902,
    v2903,
    v2904);
  v2905 = (EventPanelSpotMaster_o *)sub_1BE4D18(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v2905, 0LL);
  if ( v2905 )
  {
    v530 = sub_1BE4C08(v2905, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1583;
  v528->m_Items[339] = (DataMasterBase_o *)v2905;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[339],
    (int64_t)v2905,
    v2906,
    v2907,
    v2908,
    v2909,
    v2910,
    v2911);
  v2912 = (EventPanelScanMaster_o *)sub_1BE4D18(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v2912, 0LL);
  if ( v2912 )
  {
    v530 = sub_1BE4C08(v2912, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1583;
  v528->m_Items[340] = (DataMasterBase_o *)v2912;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[340],
    (int64_t)v2912,
    v2913,
    v2914,
    v2915,
    v2916,
    v2917,
    v2918);
  v2919 = (CommonConsumeMaster_o *)sub_1BE4D18(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v2919, 0LL);
  if ( v2919 )
  {
    v530 = sub_1BE4C08(v2919, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1583;
  v528->m_Items[341] = (DataMasterBase_o *)v2919;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[341],
    (int64_t)v2919,
    v2920,
    v2921,
    v2922,
    v2923,
    v2924,
    v2925);
  v2926 = (UserEventMapMaster_o *)sub_1BE4D18(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v2926, 0LL);
  if ( v2926 )
  {
    v530 = sub_1BE4C08(v2926, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1583;
  v528->m_Items[342] = (DataMasterBase_o *)v2926;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[342],
    (int64_t)v2926,
    v2927,
    v2928,
    v2929,
    v2930,
    v2931,
    v2932);
  v2933 = (UserEventSpotMaster_o *)sub_1BE4D18(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v2933, 0LL);
  if ( v2933 )
  {
    v530 = sub_1BE4C08(v2933, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1583;
  v528->m_Items[343] = (DataMasterBase_o *)v2933;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[343],
    (int64_t)v2933,
    v2934,
    v2935,
    v2936,
    v2937,
    v2938,
    v2939);
  v2940 = (WarGroupMaster_o *)sub_1BE4D18(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v2940, 0LL);
  if ( v2940 )
  {
    v530 = sub_1BE4C08(v2940, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1583;
  v528->m_Items[344] = (DataMasterBase_o *)v2940;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[344],
    (int64_t)v2940,
    v2941,
    v2942,
    v2943,
    v2944,
    v2945,
    v2946);
  v2947 = (ServantLimitImageMaster_o *)sub_1BE4D18(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v2947, 0LL);
  if ( v2947 )
  {
    v530 = sub_1BE4C08(v2947, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1583;
  v528->m_Items[345] = (DataMasterBase_o *)v2947;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[345],
    (int64_t)v2947,
    v2948,
    v2949,
    v2950,
    v2951,
    v2952,
    v2953);
  v2954 = (FriendshipQuestDialogInfoMaster_o *)sub_1BE4D18(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v2954, 0LL);
  if ( v2954 )
  {
    v530 = sub_1BE4C08(v2954, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1583;
  v528->m_Items[346] = (DataMasterBase_o *)v2954;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[346],
    (int64_t)v2954,
    v2955,
    v2956,
    v2957,
    v2958,
    v2959,
    v2960);
  v2961 = (QuestRestrictionInfoMaster_o *)sub_1BE4D18(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v2961, 0LL);
  if ( v2961 )
  {
    v530 = sub_1BE4C08(v2961, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1583;
  v528->m_Items[347] = (DataMasterBase_o *)v2961;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[347],
    (int64_t)v2961,
    v2962,
    v2963,
    v2964,
    v2965,
    v2966,
    v2967);
  v2968 = (AssistMaster_o *)sub_1BE4D18(AssistMaster_TypeInfo);
  AssistMaster___ctor(v2968, 0LL);
  if ( v2968 )
  {
    v530 = sub_1BE4C08(v2968, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1583;
  v528->m_Items[348] = (DataMasterBase_o *)v2968;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[348],
    (int64_t)v2968,
    v2969,
    v2970,
    v2971,
    v2972,
    v2973,
    v2974);
  v2975 = (WarBoardEffectMaster_o *)sub_1BE4D18(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v2975, 0LL);
  if ( v2975 )
  {
    v530 = sub_1BE4C08(v2975, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1583;
  v528->m_Items[349] = (DataMasterBase_o *)v2975;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[349],
    (int64_t)v2975,
    v2976,
    v2977,
    v2978,
    v2979,
    v2980,
    v2981);
  v2982 = (WarBoardOnboardSkillMaster_o *)sub_1BE4D18(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v2982, 0LL);
  if ( v2982 )
  {
    v530 = sub_1BE4C08(v2982, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1583;
  v528->m_Items[350] = (DataMasterBase_o *)v2982;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[350],
    (int64_t)v2982,
    v2983,
    v2984,
    v2985,
    v2986,
    v2987,
    v2988);
  v2989 = (BeforeBirthDayMaster_o *)sub_1BE4D18(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v2989, 0LL);
  if ( v2989 )
  {
    v530 = sub_1BE4C08(v2989, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1583;
  v528->m_Items[351] = (DataMasterBase_o *)v2989;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[351],
    (int64_t)v2989,
    v2990,
    v2991,
    v2992,
    v2993,
    v2994,
    v2995);
  v2996 = (LoginQuestMaster_o *)sub_1BE4D18(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v2996, 0LL);
  if ( v2996 )
  {
    v530 = sub_1BE4C08(v2996, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1583;
  v528->m_Items[352] = (DataMasterBase_o *)v2996;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[352],
    (int64_t)v2996,
    v2997,
    v2998,
    v2999,
    v3000,
    v3001,
    v3002);
  v3003 = (EventCombineCostumeMaster_o *)sub_1BE4D18(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v3003, 0LL);
  if ( v3003 )
  {
    v530 = sub_1BE4C08(v3003, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1583;
  v528->m_Items[353] = (DataMasterBase_o *)v3003;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[353],
    (int64_t)v3003,
    v3004,
    v3005,
    v3006,
    v3007,
    v3008,
    v3009);
  v3010 = (WarBoardStagePieceDetailMaster_o *)sub_1BE4D18(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v3010, 0LL);
  if ( v3010 )
  {
    v530 = sub_1BE4C08(v3010, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1583;
  v528->m_Items[354] = (DataMasterBase_o *)v3010;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[354],
    (int64_t)v3010,
    v3011,
    v3012,
    v3013,
    v3014,
    v3015,
    v3016);
  v3017 = (ServantTreasureDeviceAddMaster_o *)sub_1BE4D18(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v3017, 0LL);
  if ( v3017 )
  {
    v530 = sub_1BE4C08(v3017, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1583;
  v528->m_Items[355] = (DataMasterBase_o *)v3017;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[355],
    (int64_t)v3017,
    v3018,
    v3019,
    v3020,
    v3021,
    v3022,
    v3023);
  v3024 = (SkillAddMaster_o *)sub_1BE4D18(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v3024, 0LL);
  if ( v3024 )
  {
    v530 = sub_1BE4C08(v3024, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1583;
  v528->m_Items[356] = (DataMasterBase_o *)v3024;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[356],
    (int64_t)v3024,
    v3025,
    v3026,
    v3027,
    v3028,
    v3029,
    v3030);
  v3031 = (ServantLvDetailMaster_o *)sub_1BE4D18(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v3031, 0LL);
  if ( v3031 )
  {
    v530 = sub_1BE4C08(v3031, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1583;
  v528->m_Items[357] = (DataMasterBase_o *)v3031;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[357],
    (int64_t)v3031,
    v3032,
    v3033,
    v3034,
    v3035,
    v3036,
    v3037);
  v3038 = (GachaAppendMaster_o *)sub_1BE4D18(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v3038, 0LL);
  if ( v3038 )
  {
    v530 = sub_1BE4C08(v3038, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1583;
  v528->m_Items[358] = (DataMasterBase_o *)v3038;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[358],
    (int64_t)v3038,
    v3039,
    v3040,
    v3041,
    v3042,
    v3043,
    v3044);
  v3045 = (UserGachaDrawLogMaster_o *)sub_1BE4D18(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v3045, 0LL);
  if ( v3045 )
  {
    v530 = sub_1BE4C08(v3045, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1583;
  v528->m_Items[359] = (DataMasterBase_o *)v3045;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[359],
    (int64_t)v3045,
    v3046,
    v3047,
    v3048,
    v3049,
    v3050,
    v3051);
  v3052 = (ServantAppendPassiveSkillMaster_o *)sub_1BE4D18(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v3052, 0LL);
  if ( v3052 )
  {
    v530 = sub_1BE4C08(v3052, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1583;
  v528->m_Items[360] = (DataMasterBase_o *)v3052;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[360],
    (int64_t)v3052,
    v3053,
    v3054,
    v3055,
    v3056,
    v3057,
    v3058);
  v3059 = (UserServantAppendPassiveSkillMaster_o *)sub_1BE4D18(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v3059, 0LL);
  if ( v3059 )
  {
    v530 = sub_1BE4C08(v3059, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1583;
  v528->m_Items[361] = (DataMasterBase_o *)v3059;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[361],
    (int64_t)v3059,
    v3060,
    v3061,
    v3062,
    v3063,
    v3064,
    v3065);
  v3066 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1BE4D18(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v3066, 0LL);
  if ( v3066 )
  {
    v530 = sub_1BE4C08(v3066, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1583;
  v528->m_Items[362] = (DataMasterBase_o *)v3066;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[362],
    (int64_t)v3066,
    v3067,
    v3068,
    v3069,
    v3070,
    v3071,
    v3072);
  v3073 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1BE4D18(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v3073, 0LL);
  if ( v3073 )
  {
    v530 = sub_1BE4C08(v3073, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1583;
  v528->m_Items[363] = (DataMasterBase_o *)v3073;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[363],
    (int64_t)v3073,
    v3074,
    v3075,
    v3076,
    v3077,
    v3078,
    v3079);
  v3080 = (CombineAppendPassiveSkillMaster_o *)sub_1BE4D18(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v3080, 0LL);
  if ( v3080 )
  {
    v530 = sub_1BE4C08(v3080, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1583;
  v528->m_Items[364] = (DataMasterBase_o *)v3080;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[364],
    (int64_t)v3080,
    v3081,
    v3082,
    v3083,
    v3084,
    v3085,
    v3086);
  v3087 = (SvtCoinMaster_o *)sub_1BE4D18(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v3087, 0LL);
  if ( v3087 )
  {
    v530 = sub_1BE4C08(v3087, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1583;
  v528->m_Items[365] = (DataMasterBase_o *)v3087;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[365],
    (int64_t)v3087,
    v3088,
    v3089,
    v3090,
    v3091,
    v3092,
    v3093);
  v3094 = (UserSvtCoinMaster_o *)sub_1BE4D18(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v3094, 0LL);
  if ( v3094 )
  {
    v530 = sub_1BE4C08(v3094, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1583;
  v528->m_Items[366] = (DataMasterBase_o *)v3094;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[366],
    (int64_t)v3094,
    v3095,
    v3096,
    v3097,
    v3098,
    v3099,
    v3100);
  v3101 = (ServantAddMaster_o *)sub_1BE4D18(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v3101, 0LL);
  if ( v3101 )
  {
    v530 = sub_1BE4C08(v3101, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1583;
  v528->m_Items[367] = (DataMasterBase_o *)v3101;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[367],
    (int64_t)v3101,
    v3102,
    v3103,
    v3104,
    v3105,
    v3106,
    v3107);
  v3108 = (TreasureBoxMaster_o *)sub_1BE4D18(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v3108, 0LL);
  if ( v3108 )
  {
    v530 = sub_1BE4C08(v3108, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1583;
  v528->m_Items[368] = (DataMasterBase_o *)v3108;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[368],
    (int64_t)v3108,
    v3109,
    v3110,
    v3111,
    v3112,
    v3113,
    v3114);
  v3115 = (TreasureBoxGiftMaster_o *)sub_1BE4D18(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v3115, 0LL);
  if ( v3115 )
  {
    v530 = sub_1BE4C08(v3115, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1583;
  v528->m_Items[369] = (DataMasterBase_o *)v3115;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[369],
    (int64_t)v3115,
    v3116,
    v3117,
    v3118,
    v3119,
    v3120,
    v3121);
  v3122 = (TreasureBoxTalkMaster_o *)sub_1BE4D18(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v3122, 0LL);
  if ( v3122 )
  {
    v530 = sub_1BE4C08(v3122, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1583;
  v528->m_Items[370] = (DataMasterBase_o *)v3122;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[370],
    (int64_t)v3122,
    v3123,
    v3124,
    v3125,
    v3126,
    v3127,
    v3128);
  v3129 = (UserEventExpeditionMaster_o *)sub_1BE4D18(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v3129, 0LL);
  if ( v3129 )
  {
    v530 = sub_1BE4C08(v3129, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1583;
  v528->m_Items[371] = (DataMasterBase_o *)v3129;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[371],
    (int64_t)v3129,
    v3130,
    v3131,
    v3132,
    v3133,
    v3134,
    v3135);
  v3136 = (EventExpeditionMaster_o *)sub_1BE4D18(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v3136, 0LL);
  if ( v3136 )
  {
    v530 = sub_1BE4C08(v3136, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1583;
  v528->m_Items[372] = (DataMasterBase_o *)v3136;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[372],
    (int64_t)v3136,
    v3137,
    v3138,
    v3139,
    v3140,
    v3141,
    v3142);
  v3143 = (EventExpeditionPieceMaster_o *)sub_1BE4D18(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v3143, 0LL);
  if ( v3143 )
  {
    v530 = sub_1BE4C08(v3143, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1583;
  v528->m_Items[373] = (DataMasterBase_o *)v3143;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[373],
    (int64_t)v3143,
    v3144,
    v3145,
    v3146,
    v3147,
    v3148,
    v3149);
  v3150 = (EventRecipeMaster_o *)sub_1BE4D18(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v3150, 0LL);
  if ( v3150 )
  {
    v530 = sub_1BE4C08(v3150, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1583;
  v528->m_Items[374] = (DataMasterBase_o *)v3150;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[374],
    (int64_t)v3150,
    v3151,
    v3152,
    v3153,
    v3154,
    v3155,
    v3156);
  v3157 = (EventRecipeGiftMaster_o *)sub_1BE4D18(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v3157, 0LL);
  if ( v3157 )
  {
    v530 = sub_1BE4C08(v3157, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1583;
  v528->m_Items[375] = (DataMasterBase_o *)v3157;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[375],
    (int64_t)v3157,
    v3158,
    v3159,
    v3160,
    v3161,
    v3162,
    v3163);
  v3164 = (UserEventFortificationMaster_o *)sub_1BE4D18(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v3164, 0LL);
  if ( v3164 )
  {
    v530 = sub_1BE4C08(v3164, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1583;
  v528->m_Items[376] = (DataMasterBase_o *)v3164;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[376],
    (int64_t)v3164,
    v3165,
    v3166,
    v3167,
    v3168,
    v3169,
    v3170);
  v3171 = (EventFortificationMaster_o *)sub_1BE4D18(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v3171, 0LL);
  if ( v3171 )
  {
    v530 = sub_1BE4C08(v3171, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1583;
  v528->m_Items[377] = (DataMasterBase_o *)v3171;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[377],
    (int64_t)v3171,
    v3172,
    v3173,
    v3174,
    v3175,
    v3176,
    v3177);
  v3178 = (EventFortificationDetailMaster_o *)sub_1BE4D18(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v3178, 0LL);
  if ( v3178 )
  {
    v530 = sub_1BE4C08(v3178, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1583;
  v528->m_Items[378] = (DataMasterBase_o *)v3178;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[378],
    (int64_t)v3178,
    v3179,
    v3180,
    v3181,
    v3182,
    v3183,
    v3184);
  v3185 = (EventFortificationSvtMaster_o *)sub_1BE4D18(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v3185, 0LL);
  if ( v3185 )
  {
    v530 = sub_1BE4C08(v3185, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1583;
  v528->m_Items[379] = (DataMasterBase_o *)v3185;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[379],
    (int64_t)v3185,
    v3186,
    v3187,
    v3188,
    v3189,
    v3190,
    v3191);
  v3192 = (UserServantVoicePlayedMaster_o *)sub_1BE4D18(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v3192, 0LL);
  if ( v3192 )
  {
    v530 = sub_1BE4C08(v3192, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1583;
  v528->m_Items[380] = (DataMasterBase_o *)v3192;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[380],
    (int64_t)v3192,
    v3193,
    v3194,
    v3195,
    v3196,
    v3197,
    v3198);
  v3199 = (UpdateProfileDialogInfoMaster_o *)sub_1BE4D18(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v3199, 0LL);
  if ( v3199 )
  {
    v530 = sub_1BE4C08(v3199, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1583;
  v528->m_Items[381] = (DataMasterBase_o *)v3199;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[381],
    (int64_t)v3199,
    v3200,
    v3201,
    v3202,
    v3203,
    v3204,
    v3205);
  v3206 = (SvtMaterialTdMaster_o *)sub_1BE4D18(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v3206, 0LL);
  if ( v3206 )
  {
    v530 = sub_1BE4C08(v3206, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1583;
  v528->m_Items[382] = (DataMasterBase_o *)v3206;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[382],
    (int64_t)v3206,
    v3207,
    v3208,
    v3209,
    v3210,
    v3211,
    v3212);
  v3213 = (BattleMasterImageMaster_o *)sub_1BE4D18(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v3213, 0LL);
  if ( v3213 )
  {
    v530 = sub_1BE4C08(v3213, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1583;
  v528->m_Items[383] = (DataMasterBase_o *)v3213;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[383],
    (int64_t)v3213,
    v3214,
    v3215,
    v3216,
    v3217,
    v3218,
    v3219);
  v3220 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1BE4D18(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v3220, 0LL);
  if ( v3220 )
  {
    v530 = sub_1BE4C08(v3220, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1583;
  v528->m_Items[384] = (DataMasterBase_o *)v3220;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[384],
    (int64_t)v3220,
    v3221,
    v3222,
    v3223,
    v3224,
    v3225,
    v3226);
  v3227 = (UserEventRandomMissionMaster_o *)sub_1BE4D18(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v3227, 0LL);
  if ( v3227 )
  {
    v530 = sub_1BE4C08(v3227, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1583;
  v528->m_Items[385] = (DataMasterBase_o *)v3227;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[385],
    (int64_t)v3227,
    v3228,
    v3229,
    v3230,
    v3231,
    v3232,
    v3233);
  v3234 = (EventProgressValueMaster_o *)sub_1BE4D18(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v3234, 0LL);
  if ( v3234 )
  {
    v530 = sub_1BE4C08(v3234, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1583;
  v528->m_Items[386] = (DataMasterBase_o *)v3234;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[386],
    (int64_t)v3234,
    v3235,
    v3236,
    v3237,
    v3238,
    v3239,
    v3240);
  v3241 = (SvtMultiPortraitMaster_o *)sub_1BE4D18(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v3241, 0LL);
  if ( v3241 )
  {
    v530 = sub_1BE4C08(v3241, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1583;
  v528->m_Items[387] = (DataMasterBase_o *)v3241;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[387],
    (int64_t)v3241,
    v3242,
    v3243,
    v3244,
    v3245,
    v3246,
    v3247);
  v3248 = (EventRandomMissionMaster_o *)sub_1BE4D18(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v3248, 0LL);
  if ( v3248 )
  {
    v530 = sub_1BE4C08(v3248, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1583;
  v528->m_Items[388] = (DataMasterBase_o *)v3248;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[388],
    (int64_t)v3248,
    v3249,
    v3250,
    v3251,
    v3252,
    v3253,
    v3254);
  v3255 = (UserGachaHistoryMaster_o *)sub_1BE4D18(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v3255, 0LL);
  if ( v3255 )
  {
    v530 = sub_1BE4C08(v3255, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1583;
  v528->m_Items[389] = (DataMasterBase_o *)v3255;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[389],
    (int64_t)v3255,
    v3256,
    v3257,
    v3258,
    v3259,
    v3260,
    v3261);
  v3262 = (UserCoinRoomMaster_o *)sub_1BE4D18(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v3262, 0LL);
  if ( v3262 )
  {
    v530 = sub_1BE4C08(v3262, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1583;
  v528->m_Items[390] = (DataMasterBase_o *)v3262;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[390],
    (int64_t)v3262,
    v3263,
    v3264,
    v3265,
    v3266,
    v3267,
    v3268);
  v3269 = (EventBuddyPointMaster_o *)sub_1BE4D18(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v3269, 0LL);
  if ( v3269 )
  {
    v530 = sub_1BE4C08(v3269, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1583;
  v528->m_Items[391] = (DataMasterBase_o *)v3269;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[391],
    (int64_t)v3269,
    v3270,
    v3271,
    v3272,
    v3273,
    v3274,
    v3275);
  v3276 = (EventServantPointRankMaster_o *)sub_1BE4D18(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v3276, 0LL);
  if ( v3276 )
  {
    v530 = sub_1BE4C08(v3276, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1583;
  v528->m_Items[392] = (DataMasterBase_o *)v3276;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[392],
    (int64_t)v3276,
    v3277,
    v3278,
    v3279,
    v3280,
    v3281,
    v3282);
  v3283 = (UserEventServantPointMaster_o *)sub_1BE4D18(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v3283, 0LL);
  if ( v3283 )
  {
    v530 = sub_1BE4C08(v3283, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1583;
  v528->m_Items[393] = (DataMasterBase_o *)v3283;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[393],
    (int64_t)v3283,
    v3284,
    v3285,
    v3286,
    v3287,
    v3288,
    v3289);
  v3290 = (FieldMotionMaster_o *)sub_1BE4D18(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v3290, 0LL);
  if ( v3290 )
  {
    v530 = sub_1BE4C08(v3290, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1583;
  v528->m_Items[394] = (DataMasterBase_o *)v3290;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[394],
    (int64_t)v3290,
    v3291,
    v3292,
    v3293,
    v3294,
    v3295,
    v3296);
  v3297 = (UserDeleteReservationMaster_o *)sub_1BE4D18(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v3297, 0LL);
  if ( v3297 )
  {
    v530 = sub_1BE4C08(v3297, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1583;
  v528->m_Items[395] = (DataMasterBase_o *)v3297;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[395],
    (int64_t)v3297,
    v3298,
    v3299,
    v3300,
    v3301,
    v3302,
    v3303);
  v3304 = (ServantScriptMultipleMaster_o *)sub_1BE4D18(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v3304, 0LL);
  if ( v3304 )
  {
    v530 = sub_1BE4C08(v3304, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1583;
  v528->m_Items[396] = (DataMasterBase_o *)v3304;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[396],
    (int64_t)v3304,
    v3305,
    v3306,
    v3307,
    v3308,
    v3309,
    v3310);
  v3311 = (EquipAddMaster_o *)sub_1BE4D18(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v3311, 0LL);
  if ( v3311 )
  {
    v530 = sub_1BE4C08(v3311, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1583;
  v528->m_Items[397] = (DataMasterBase_o *)v3311;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[397],
    (int64_t)v3311,
    v3312,
    v3313,
    v3314,
    v3315,
    v3316,
    v3317);
  v3318 = (QuestReleaseOverwriteMaster_o *)sub_1BE4D18(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v3318, 0LL);
  if ( v3318 )
  {
    v530 = sub_1BE4C08(v3318, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1583;
  v528->m_Items[398] = (DataMasterBase_o *)v3318;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[398],
    (int64_t)v3318,
    v3319,
    v3320,
    v3321,
    v3322,
    v3323,
    v3324);
  v3325 = (UserEventAlloutBattleMaster_o *)sub_1BE4D18(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v3325, 0LL);
  if ( v3325 )
  {
    v530 = sub_1BE4C08(v3325, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1583;
  v528->m_Items[399] = (DataMasterBase_o *)v3325;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[399],
    (int64_t)v3325,
    v3326,
    v3327,
    v3328,
    v3329,
    v3330,
    v3331);
  v3332 = (QuestScriptMaterialNextMaster_o *)sub_1BE4D18(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v3332, 0LL);
  if ( v3332 )
  {
    v530 = sub_1BE4C08(v3332, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1583;
  v528->m_Items[400] = (DataMasterBase_o *)v3332;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[400],
    (int64_t)v3332,
    v3333,
    v3334,
    v3335,
    v3336,
    v3337,
    v3338);
  v3339 = (EventDiggingMaster_o *)sub_1BE4D18(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v3339, 0LL);
  if ( v3339 )
  {
    v530 = sub_1BE4C08(v3339, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1583;
  v528->m_Items[401] = (DataMasterBase_o *)v3339;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[401],
    (int64_t)v3339,
    v3340,
    v3341,
    v3342,
    v3343,
    v3344,
    v3345);
  v3346 = (EventDiggingBlockMaster_o *)sub_1BE4D18(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v3346, 0LL);
  if ( v3346 )
  {
    v530 = sub_1BE4C08(v3346, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1583;
  v528->m_Items[402] = (DataMasterBase_o *)v3346;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[402],
    (int64_t)v3346,
    v3347,
    v3348,
    v3349,
    v3350,
    v3351,
    v3352);
  v3353 = (EventDiggingRewardMaster_o *)sub_1BE4D18(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v3353, 0LL);
  if ( v3353 )
  {
    v530 = sub_1BE4C08(v3353, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1583;
  v528->m_Items[403] = (DataMasterBase_o *)v3353;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[403],
    (int64_t)v3353,
    v3354,
    v3355,
    v3356,
    v3357,
    v3358,
    v3359);
  v3360 = (UserEventDiggingMaster_o *)sub_1BE4D18(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v3360, 0LL);
  if ( v3360 )
  {
    v530 = sub_1BE4C08(v3360, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1583;
  v528->m_Items[404] = (DataMasterBase_o *)v3360;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[404],
    (int64_t)v3360,
    v3361,
    v3362,
    v3363,
    v3364,
    v3365,
    v3366);
  v3367 = (BattleMessageMaster_o *)sub_1BE4D18(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v3367, 0LL);
  if ( v3367 )
  {
    v530 = sub_1BE4C08(v3367, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1583;
  v528->m_Items[405] = (DataMasterBase_o *)v3367;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[405],
    (int64_t)v3367,
    v3368,
    v3369,
    v3370,
    v3371,
    v3372,
    v3373);
  v3374 = (BattleMessageGroupMaster_o *)sub_1BE4D18(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v3374, 0LL);
  if ( v3374 )
  {
    v530 = sub_1BE4C08(v3374, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1583;
  v528->m_Items[406] = (DataMasterBase_o *)v3374;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[406],
    (int64_t)v3374,
    v3375,
    v3376,
    v3377,
    v3378,
    v3379,
    v3380);
  v3381 = (UserNpcSvtRecordMaster_o *)sub_1BE4D18(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v3381, 0LL);
  if ( v3381 )
  {
    v530 = sub_1BE4C08(v3381, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1583;
  v528->m_Items[407] = (DataMasterBase_o *)v3381;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[407],
    (int64_t)v3381,
    v3382,
    v3383,
    v3384,
    v3385,
    v3386,
    v3387);
  v3388 = (BuffTypeDetailMaster_o *)sub_1BE4D18(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v3388, 0LL);
  if ( v3388 )
  {
    v530 = sub_1BE4C08(v3388, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1583;
  v528->m_Items[408] = (DataMasterBase_o *)v3388;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[408],
    (int64_t)v3388,
    v3389,
    v3390,
    v3391,
    v3392,
    v3393,
    v3394);
  v3395 = (WarBoardMessageMaster_o *)sub_1BE4D18(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v3395, 0LL);
  if ( v3395 )
  {
    v530 = sub_1BE4C08(v3395, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1583;
  v528->m_Items[409] = (DataMasterBase_o *)v3395;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[409],
    (int64_t)v3395,
    v3396,
    v3397,
    v3398,
    v3399,
    v3400,
    v3401);
  v3402 = (WarBoardPartySkillMaster_o *)sub_1BE4D18(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v3402, 0LL);
  if ( v3402 )
  {
    v530 = sub_1BE4C08(v3402, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1583;
  v528->m_Items[410] = (DataMasterBase_o *)v3402;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[410],
    (int64_t)v3402,
    v3403,
    v3404,
    v3405,
    v3406,
    v3407,
    v3408);
  v3409 = (WarBoardMessageScriptMaster_o *)sub_1BE4D18(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v3409, 0LL);
  if ( v3409 )
  {
    v530 = sub_1BE4C08(v3409, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1583;
  v528->m_Items[411] = (DataMasterBase_o *)v3409;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[411],
    (int64_t)v3409,
    v3410,
    v3411,
    v3412,
    v3413,
    v3414,
    v3415);
  v3416 = (WarQuestSelectionMaster_o *)sub_1BE4D18(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v3416, 0LL);
  if ( v3416 )
  {
    v530 = sub_1BE4C08(v3416, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1583;
  v528->m_Items[412] = (DataMasterBase_o *)v3416;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[412],
    (int64_t)v3416,
    v3417,
    v3418,
    v3419,
    v3420,
    v3421,
    v3422);
  v3423 = (WarBoardStageDetailMaster_o *)sub_1BE4D18(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v3423, 0LL);
  if ( v3423 )
  {
    v530 = sub_1BE4C08(v3423, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1583;
  v528->m_Items[413] = (DataMasterBase_o *)v3423;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[413],
    (int64_t)v3423,
    v3424,
    v3425,
    v3426,
    v3427,
    v3428,
    v3429);
  v3430 = (QuestScriptMaterialOverwriteMaster_o *)sub_1BE4D18(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v3430, 0LL);
  if ( v3430 )
  {
    v530 = sub_1BE4C08(v3430, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1583;
  v528->m_Items[414] = (DataMasterBase_o *)v3430;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[414],
    (int64_t)v3430,
    v3431,
    v3432,
    v3433,
    v3434,
    v3435,
    v3436);
  v3437 = (QuestScriptBranchMaterialMaster_o *)sub_1BE4D18(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v3437, 0LL);
  if ( v3437 )
  {
    v530 = sub_1BE4C08(v3437, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1583;
  v528->m_Items[415] = (DataMasterBase_o *)v3437;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[415],
    (int64_t)v3437,
    v3438,
    v3439,
    v3440,
    v3441,
    v3442,
    v3443);
  v3444 = (AdCheckPointMaster_o *)sub_1BE4D18(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v3444, 0LL);
  if ( v3444 )
  {
    v530 = sub_1BE4C08(v3444, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1583;
  v528->m_Items[416] = (DataMasterBase_o *)v3444;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[416],
    (int64_t)v3444,
    v3445,
    v3446,
    v3447,
    v3448,
    v3449,
    v3450);
  v3451 = (GiftDetailMaster_o *)sub_1BE4D18(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v3451, 0LL);
  if ( v3451 )
  {
    v530 = sub_1BE4C08(v3451, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1583;
  v528->m_Items[417] = (DataMasterBase_o *)v3451;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[417],
    (int64_t)v3451,
    v3452,
    v3453,
    v3454,
    v3455,
    v3456,
    v3457);
  v3458 = (CombineLimitGiftMaster_o *)sub_1BE4D18(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v3458, 0LL);
  if ( v3458 )
  {
    v530 = sub_1BE4C08(v3458, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1583;
  v528->m_Items[418] = (DataMasterBase_o *)v3458;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[418],
    (int64_t)v3458,
    v3459,
    v3460,
    v3461,
    v3462,
    v3463,
    v3464);
  v3465 = (EventCooltimeRewardMaster_o *)sub_1BE4D18(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v3465, 0LL);
  if ( v3465 )
  {
    v530 = sub_1BE4C08(v3465, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1583;
  v528->m_Items[419] = (DataMasterBase_o *)v3465;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[419],
    (int64_t)v3465,
    v3466,
    v3467,
    v3468,
    v3469,
    v3470,
    v3471);
  v3472 = (UserEventCooltimeRewardMaster_o *)sub_1BE4D18(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v3472, 0LL);
  if ( v3472 )
  {
    v530 = sub_1BE4C08(v3472, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1583;
  v528->m_Items[420] = (DataMasterBase_o *)v3472;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[420],
    (int64_t)v3472,
    v3473,
    v3474,
    v3475,
    v3476,
    v3477,
    v3478);
  v3479 = (ClassBoardBaseMaster_o *)sub_1BE4D18(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v3479, 0LL);
  if ( v3479 )
  {
    v530 = sub_1BE4C08(v3479, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1583;
  v528->m_Items[421] = (DataMasterBase_o *)v3479;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[421],
    (int64_t)v3479,
    v3480,
    v3481,
    v3482,
    v3483,
    v3484,
    v3485);
  v3486 = (ClassBoardLockMaster_o *)sub_1BE4D18(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v3486, 0LL);
  if ( v3486 )
  {
    v530 = sub_1BE4C08(v3486, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1583;
  v528->m_Items[422] = (DataMasterBase_o *)v3486;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[422],
    (int64_t)v3486,
    v3487,
    v3488,
    v3489,
    v3490,
    v3491,
    v3492);
  v3493 = (ClassBoardSquareMaster_o *)sub_1BE4D18(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v3493, 0LL);
  if ( v3493 )
  {
    v530 = sub_1BE4C08(v3493, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1583;
  v528->m_Items[423] = (DataMasterBase_o *)v3493;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[423],
    (int64_t)v3493,
    v3494,
    v3495,
    v3496,
    v3497,
    v3498,
    v3499);
  v3500 = (ClassBoardLineMaster_o *)sub_1BE4D18(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v3500, 0LL);
  if ( v3500 )
  {
    v530 = sub_1BE4C08(v3500, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1583;
  v528->m_Items[424] = (DataMasterBase_o *)v3500;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[424],
    (int64_t)v3500,
    v3501,
    v3502,
    v3503,
    v3504,
    v3505,
    v3506);
  v3507 = (UserClassBoardSquareMaster_o *)sub_1BE4D18(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v3507, 0LL);
  if ( v3507 )
  {
    v530 = sub_1BE4C08(v3507, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1583;
  v528->m_Items[425] = (DataMasterBase_o *)v3507;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[425],
    (int64_t)v3507,
    v3508,
    v3509,
    v3510,
    v3511,
    v3512,
    v3513);
  v3514 = (ServantCardAddMaster_o *)sub_1BE4D18(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v3514, 0LL);
  if ( v3514 )
  {
    v530 = sub_1BE4C08(v3514, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1583;
  v528->m_Items[426] = (DataMasterBase_o *)v3514;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[426],
    (int64_t)v3514,
    v3515,
    v3516,
    v3517,
    v3518,
    v3519,
    v3520);
  v3521 = (MapLayerMaster_o *)sub_1BE4D18(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v3521, 0LL);
  if ( v3521 )
  {
    v530 = sub_1BE4C08(v3521, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1583;
  v528->m_Items[427] = (DataMasterBase_o *)v3521;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[427],
    (int64_t)v3521,
    v3522,
    v3523,
    v3524,
    v3525,
    v3526,
    v3527);
  v3528 = (SpotLayerMaster_o *)sub_1BE4D18(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v3528, 0LL);
  if ( v3528 )
  {
    v530 = sub_1BE4C08(v3528, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1583;
  v528->m_Items[428] = (DataMasterBase_o *)v3528;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[428],
    (int64_t)v3528,
    v3529,
    v3530,
    v3531,
    v3532,
    v3533,
    v3534);
  v3535 = (MapGimmickLayerMaster_o *)sub_1BE4D18(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v3535, 0LL);
  if ( v3535 )
  {
    v530 = sub_1BE4C08(v3535, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1583;
  v528->m_Items[429] = (DataMasterBase_o *)v3535;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[429],
    (int64_t)v3535,
    v3536,
    v3537,
    v3538,
    v3539,
    v3540,
    v3541);
  v3542 = (EventDataLostBattleMaster_o *)sub_1BE4D18(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v3542, 0LL);
  if ( v3542 )
  {
    v530 = sub_1BE4C08(v3542, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1583;
  v528->m_Items[430] = (DataMasterBase_o *)v3542;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[430],
    (int64_t)v3542,
    v3543,
    v3544,
    v3545,
    v3546,
    v3547,
    v3548);
  v3549 = (EventDataLostBattleResetMaster_o *)sub_1BE4D18(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v3549, 0LL);
  if ( v3549 )
  {
    v530 = sub_1BE4C08(v3549, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1583;
  v528->m_Items[431] = (DataMasterBase_o *)v3549;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[431],
    (int64_t)v3549,
    v3550,
    v3551,
    v3552,
    v3553,
    v3554,
    v3555);
  v3556 = (UserEventDataLostMaster_o *)sub_1BE4D18(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v3556, 0LL);
  if ( v3556 )
  {
    v530 = sub_1BE4C08(v3556, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1583;
  v528->m_Items[432] = (DataMasterBase_o *)v3556;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[432],
    (int64_t)v3556,
    v3557,
    v3558,
    v3559,
    v3560,
    v3561,
    v3562);
  v3563 = (QuestHintMaster_o *)sub_1BE4D18(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v3563, 0LL);
  if ( v3563 )
  {
    v530 = sub_1BE4C08(v3563, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1583;
  v528->m_Items[433] = (DataMasterBase_o *)v3563;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[433],
    (int64_t)v3563,
    v3564,
    v3565,
    v3566,
    v3567,
    v3568,
    v3569);
  v3570 = (FuncTypeDetailMaster_o *)sub_1BE4D18(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v3570, 0LL);
  if ( v3570 )
  {
    v530 = sub_1BE4C08(v3570, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1583;
  v528->m_Items[434] = (DataMasterBase_o *)v3570;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[434],
    (int64_t)v3570,
    v3571,
    v3572,
    v3573,
    v3574,
    v3575,
    v3576);
  v3577 = (BuffConvertMaster_o *)sub_1BE4D18(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v3577, 0LL);
  if ( v3577 )
  {
    v530 = sub_1BE4C08(v3577, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1583;
  v528->m_Items[435] = (DataMasterBase_o *)v3577;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[435],
    (int64_t)v3577,
    v3578,
    v3579,
    v3580,
    v3581,
    v3582,
    v3583);
  v3584 = (SkillGroupMaster_o *)sub_1BE4D18(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v3584, 0LL);
  if ( v3584 )
  {
    v530 = sub_1BE4C08(v3584, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1583;
  v528->m_Items[436] = (DataMasterBase_o *)v3584;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[436],
    (int64_t)v3584,
    v3585,
    v3586,
    v3587,
    v3588,
    v3589,
    v3590);
  v3591 = (SkillGroupOverwriteMaster_o *)sub_1BE4D18(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v3591, 0LL);
  if ( v3591 )
  {
    v530 = sub_1BE4C08(v3591, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1583;
  v528->m_Items[437] = (DataMasterBase_o *)v3591;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[437],
    (int64_t)v3591,
    v3592,
    v3593,
    v3594,
    v3595,
    v3596,
    v3597);
  v3598 = (SkillIndividualityMaster_o *)sub_1BE4D18(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v3598, 0LL);
  if ( v3598 )
  {
    v530 = sub_1BE4C08(v3598, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1583;
  v528->m_Items[438] = (DataMasterBase_o *)v3598;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[438],
    (int64_t)v3598,
    v3599,
    v3600,
    v3601,
    v3602,
    v3603,
    v3604);
  v3605 = (RestrictionBaseMaster_o *)sub_1BE4D18(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v3605, 0LL);
  if ( v3605 )
  {
    v530 = sub_1BE4C08(v3605, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1583;
  v528->m_Items[439] = (DataMasterBase_o *)v3605;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[439],
    (int64_t)v3605,
    v3606,
    v3607,
    v3608,
    v3609,
    v3610,
    v3611);
  v3612 = (RestrictionSlotMaster_o *)sub_1BE4D18(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v3612, 0LL);
  if ( v3612 )
  {
    v530 = sub_1BE4C08(v3612, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1583;
  v528->m_Items[440] = (DataMasterBase_o *)v3612;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[440],
    (int64_t)v3612,
    v3613,
    v3614,
    v3615,
    v3616,
    v3617,
    v3618);
  v3619 = (RestrictionSlotDetailMaster_o *)sub_1BE4D18(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v3619, 0LL);
  if ( v3619 )
  {
    v530 = sub_1BE4C08(v3619, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1583;
  v528->m_Items[441] = (DataMasterBase_o *)v3619;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[441],
    (int64_t)v3619,
    v3620,
    v3621,
    v3622,
    v3623,
    v3624,
    v3625);
  v3626 = (RestrictionMessageMaster_o *)sub_1BE4D18(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v3626, 0LL);
  if ( v3626 )
  {
    v530 = sub_1BE4C08(v3626, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1583;
  v528->m_Items[442] = (DataMasterBase_o *)v3626;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[442],
    (int64_t)v3626,
    v3627,
    v3628,
    v3629,
    v3630,
    v3631,
    v3632);
  v3633 = (RestrictionWholeMaster_o *)sub_1BE4D18(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v3633, 0LL);
  if ( v3633 )
  {
    v530 = sub_1BE4C08(v3633, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1583;
  v528->m_Items[443] = (DataMasterBase_o *)v3633;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[443],
    (int64_t)v3633,
    v3634,
    v3635,
    v3636,
    v3637,
    v3638,
    v3639);
  v3640 = (FuncDispMaster_o *)sub_1BE4D18(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v3640, 0LL);
  if ( v3640 )
  {
    v530 = sub_1BE4C08(v3640, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1583;
  v528->m_Items[444] = (DataMasterBase_o *)v3640;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[444],
    (int64_t)v3640,
    v3641,
    v3642,
    v3643,
    v3644,
    v3645,
    v3646);
  v3647 = (ClassBoardCommandSpellMaster_o *)sub_1BE4D18(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v3647, 0LL);
  if ( v3647 )
  {
    v530 = sub_1BE4C08(v3647, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1583;
  v528->m_Items[445] = (DataMasterBase_o *)v3647;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[445],
    (int64_t)v3647,
    v3648,
    v3649,
    v3650,
    v3651,
    v3652,
    v3653);
  v3654 = (ClassBoardClassMaster_o *)sub_1BE4D18(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v3654, 0LL);
  if ( v3654 )
  {
    v530 = sub_1BE4C08(v3654, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1583;
  v528->m_Items[446] = (DataMasterBase_o *)v3654;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[446],
    (int64_t)v3654,
    v3655,
    v3656,
    v3657,
    v3658,
    v3659,
    v3660);
  v3661 = (EventCommandAssistMaster_o *)sub_1BE4D18(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v3661, 0LL);
  if ( v3661 )
  {
    v530 = sub_1BE4C08(v3661, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1583;
  v528->m_Items[447] = (DataMasterBase_o *)v3661;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[447],
    (int64_t)v3661,
    v3662,
    v3663,
    v3664,
    v3665,
    v3666,
    v3667);
  v3668 = (EventMissionGroupMaster_o *)sub_1BE4D18(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v3668, 0LL);
  if ( v3668 )
  {
    v530 = sub_1BE4C08(v3668, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1583;
  v528->m_Items[448] = (DataMasterBase_o *)v3668;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[448],
    (int64_t)v3668,
    v3669,
    v3670,
    v3671,
    v3672,
    v3673,
    v3674);
  v3675 = (CombineLimitReleaseMaster_o *)sub_1BE4D18(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v3675, 0LL);
  if ( v3675 )
  {
    v530 = sub_1BE4C08(v3675, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1583;
  v528->m_Items[449] = (DataMasterBase_o *)v3675;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[449],
    (int64_t)v3675,
    v3676,
    v3677,
    v3678,
    v3679,
    v3680,
    v3681);
  v3682 = (HeelPortraitMaster_o *)sub_1BE4D18(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v3682, 0LL);
  if ( v3682 )
  {
    v530 = sub_1BE4C08(v3682, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1583;
  v528->m_Items[450] = (DataMasterBase_o *)v3682;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[450],
    (int64_t)v3682,
    v3683,
    v3684,
    v3685,
    v3686,
    v3687,
    v3688);
  v3689 = (UserHeelPortraitMaster_o *)sub_1BE4D18(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v3689, 0LL);
  if ( v3689 )
  {
    v530 = sub_1BE4C08(v3689, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1583;
  v528->m_Items[451] = (DataMasterBase_o *)v3689;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[451],
    (int64_t)v3689,
    v3690,
    v3691,
    v3692,
    v3693,
    v3694,
    v3695);
  v3696 = (TreasureDeviceSequenceWeightMaster_o *)sub_1BE4D18(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v3696, 0LL);
  if ( v3696 )
  {
    v530 = sub_1BE4C08(v3696, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1583;
  v528->m_Items[452] = (DataMasterBase_o *)v3696;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[452],
    (int64_t)v3696,
    v3697,
    v3698,
    v3699,
    v3700,
    v3701,
    v3702);
  v3703 = (NpcServantFollowerIndividualityMaster_o *)sub_1BE4D18(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v3703, 0LL);
  if ( v3703 )
  {
    v530 = sub_1BE4C08(v3703, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1583;
  v528->m_Items[453] = (DataMasterBase_o *)v3703;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[453],
    (int64_t)v3703,
    v3704,
    v3705,
    v3706,
    v3707,
    v3708,
    v3709);
  v3710 = (GachaExtraGiftMaster_o *)sub_1BE4D18(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v3710, 0LL);
  if ( v3710 )
  {
    v530 = sub_1BE4C08(v3710, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1583;
  v528->m_Items[454] = (DataMasterBase_o *)v3710;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[454],
    (int64_t)v3710,
    v3711,
    v3712,
    v3713,
    v3714,
    v3715,
    v3716);
  v3717 = (EventMuralMaster_o *)sub_1BE4D18(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v3717, 0LL);
  if ( v3717 )
  {
    v530 = sub_1BE4C08(v3717, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1583;
  v528->m_Items[455] = (DataMasterBase_o *)v3717;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[455],
    (int64_t)v3717,
    v3718,
    v3719,
    v3720,
    v3721,
    v3722,
    v3723);
  v3724 = (ViewWaveEnemyMaster_o *)sub_1BE4D18(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v3724, 0LL);
  if ( v3724 )
  {
    v530 = sub_1BE4C08(v3724, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1583;
  v528->m_Items[456] = (DataMasterBase_o *)v3724;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[456],
    (int64_t)v3724,
    v3725,
    v3726,
    v3727,
    v3728,
    v3729,
    v3730);
  v3731 = (BlankEarthSpotNavimenuMaster_o *)sub_1BE4D18(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v3731, 0LL);
  if ( v3731 )
  {
    v530 = sub_1BE4C08(v3731, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1583;
  v528->m_Items[457] = (DataMasterBase_o *)v3731;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[457],
    (int64_t)v3731,
    v3732,
    v3733,
    v3734,
    v3735,
    v3736,
    v3737);
  v3738 = (BlankEarthGimmickMaster_o *)sub_1BE4D18(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v3738, 0LL);
  if ( v3738 )
  {
    v530 = sub_1BE4C08(v3738, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1583;
  v528->m_Items[458] = (DataMasterBase_o *)v3738;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[458],
    (int64_t)v3738,
    v3739,
    v3740,
    v3741,
    v3742,
    v3743,
    v3744);
  v3745 = (TerminalOverwriteMaster_o *)sub_1BE4D18(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v3745, 0LL);
  if ( v3745 )
  {
    v530 = sub_1BE4C08(v3745, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1583;
  v528->m_Items[459] = (DataMasterBase_o *)v3745;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[459],
    (int64_t)v3745,
    v3746,
    v3747,
    v3748,
    v3749,
    v3750,
    v3751);
  v3752 = (UserExchangeSvtMaster_o *)sub_1BE4D18(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v3752, 0LL);
  if ( v3752 )
  {
    v530 = sub_1BE4C08(v3752, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1583;
  v528->m_Items[460] = (DataMasterBase_o *)v3752;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[460],
    (int64_t)v3752,
    v3753,
    v3754,
    v3755,
    v3756,
    v3757,
    v3758);
  v3759 = (WarBoardCommonReleaseMaster_o *)sub_1BE4D18(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v3759, 0LL);
  if ( v3759 )
  {
    v530 = sub_1BE4C08(v3759, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1583;
  v528->m_Items[461] = (DataMasterBase_o *)v3759;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[461],
    (int64_t)v3759,
    v3760,
    v3761,
    v3762,
    v3763,
    v3764,
    v3765);
  v3766 = (WarBoardEventMaster_o *)sub_1BE4D18(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v3766, 0LL);
  if ( v3766 )
  {
    v530 = sub_1BE4C08(v3766, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1583;
  v528->m_Items[462] = (DataMasterBase_o *)v3766;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[462],
    (int64_t)v3766,
    v3767,
    v3768,
    v3769,
    v3770,
    v3771,
    v3772);
  v3773 = (WarBoardEventScriptMaster_o *)sub_1BE4D18(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v3773, 0LL);
  if ( v3773 )
  {
    v530 = sub_1BE4C08(v3773, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1583;
  v528->m_Items[463] = (DataMasterBase_o *)v3773;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[463],
    (int64_t)v3773,
    v3774,
    v3775,
    v3776,
    v3777,
    v3778,
    v3779);
  v3780 = (WarBoardStageBossMaster_o *)sub_1BE4D18(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v3780, 0LL);
  if ( v3780 )
  {
    v530 = sub_1BE4C08(v3780, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1583;
  v528->m_Items[464] = (DataMasterBase_o *)v3780;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[464],
    (int64_t)v3780,
    v3781,
    v3782,
    v3783,
    v3784,
    v3785,
    v3786);
  v3787 = (WarBoardSquareIndexGroupMaster_o *)sub_1BE4D18(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v3787, 0LL);
  if ( v3787 )
  {
    v530 = sub_1BE4C08(v3787, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1583;
  v528->m_Items[465] = (DataMasterBase_o *)v3787;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[465],
    (int64_t)v3787,
    v3788,
    v3789,
    v3790,
    v3791,
    v3792,
    v3793);
  v3794 = (WarBoardActionTrendGroupMaster_o *)sub_1BE4D18(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v3794, 0LL);
  if ( v3794 )
  {
    v530 = sub_1BE4C08(v3794, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1583;
  v528->m_Items[466] = (DataMasterBase_o *)v3794;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[466],
    (int64_t)v3794,
    v3795,
    v3796,
    v3797,
    v3798,
    v3799,
    v3800);
  v3801 = (WarBoardRatingOffsetGroupMaster_o *)sub_1BE4D18(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v3801, 0LL);
  if ( v3801 )
  {
    v530 = sub_1BE4C08(v3801, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1583;
  v528->m_Items[467] = (DataMasterBase_o *)v3801;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[467],
    (int64_t)v3801,
    v3802,
    v3803,
    v3804,
    v3805,
    v3806,
    v3807);
  v3808 = (WarBoardReinforcementsMaster_o *)sub_1BE4D18(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v3808, 0LL);
  if ( v3808 )
  {
    v530 = sub_1BE4C08(v3808, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1583;
  v528->m_Items[468] = (DataMasterBase_o *)v3808;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[468],
    (int64_t)v3808,
    v3809,
    v3810,
    v3811,
    v3812,
    v3813,
    v3814);
  v3815 = (WarBoardStageReinforcementsMaster_o *)sub_1BE4D18(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v3815, 0LL);
  if ( v3815 )
  {
    v530 = sub_1BE4C08(v3815, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1583;
  v528->m_Items[469] = (DataMasterBase_o *)v3815;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[469],
    (int64_t)v3815,
    v3816,
    v3817,
    v3818,
    v3819,
    v3820,
    v3821);
  v3822 = (WarBoardFutureActionTrendMaster_o *)sub_1BE4D18(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v3822, 0LL);
  if ( v3822 )
  {
    v530 = sub_1BE4C08(v3822, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1583;
  v528->m_Items[470] = (DataMasterBase_o *)v3822;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[470],
    (int64_t)v3822,
    v3823,
    v3824,
    v3825,
    v3826,
    v3827,
    v3828);
  v3829 = (ServantProfilePushMaster_o *)sub_1BE4D18(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v3829, 0LL);
  if ( v3829 )
  {
    v530 = sub_1BE4C08(v3829, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1583;
  v528->m_Items[471] = (DataMasterBase_o *)v3829;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[471],
    (int64_t)v3829,
    v3830,
    v3831,
    v3832,
    v3833,
    v3834,
    v3835);
  v3836 = (MapGimmickPathMaster_o *)sub_1BE4D18(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v3836, 0LL);
  if ( v3836 )
  {
    v530 = sub_1BE4C08(v3836, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1583;
  v528->m_Items[472] = (DataMasterBase_o *)v3836;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[472],
    (int64_t)v3836,
    v3837,
    v3838,
    v3839,
    v3840,
    v3841,
    v3842);
  v3843 = (MapGimmickPathReleaseMaster_o *)sub_1BE4D18(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v3843, 0LL);
  if ( v3843 )
  {
    v530 = sub_1BE4C08(v3843, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1583;
  v528->m_Items[473] = (DataMasterBase_o *)v3843;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[473],
    (int64_t)v3843,
    v3844,
    v3845,
    v3846,
    v3847,
    v3848,
    v3849);
  v3850 = (ServantOverwriteMaster_o *)sub_1BE4D18(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v3850, 0LL);
  if ( v3850 )
  {
    v530 = sub_1BE4C08(v3850, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1583;
  v528->m_Items[474] = (DataMasterBase_o *)v3850;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[474],
    (int64_t)v3850,
    v3851,
    v3852,
    v3853,
    v3854,
    v3855,
    v3856);
  v3857 = (IndividualityPolicyMaster_o *)sub_1BE4D18(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v3857, 0LL);
  if ( v3857 )
  {
    v530 = sub_1BE4C08(v3857, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1583;
  v528->m_Items[475] = (DataMasterBase_o *)v3857;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[475],
    (int64_t)v3857,
    v3858,
    v3859,
    v3860,
    v3861,
    v3862,
    v3863);
  v3864 = (IndividualityPersonalityMaster_o *)sub_1BE4D18(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v3864, 0LL);
  if ( v3864 )
  {
    v530 = sub_1BE4C08(v3864, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1583;
  v528->m_Items[476] = (DataMasterBase_o *)v3864;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[476],
    (int64_t)v3864,
    v3865,
    v3866,
    v3867,
    v3868,
    v3869,
    v3870);
  v3871 = (AttriMaster_o *)sub_1BE4D18(AttriMaster_TypeInfo);
  AttriMaster___ctor(v3871, 0LL);
  if ( v3871 )
  {
    v530 = sub_1BE4C08(v3871, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1583;
  v528->m_Items[477] = (DataMasterBase_o *)v3871;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[477],
    (int64_t)v3871,
    v3872,
    v3873,
    v3874,
    v3875,
    v3876,
    v3877);
  v3878 = (ServantVoicePatternMaster_o *)sub_1BE4D18(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v3878, 0LL);
  if ( v3878 )
  {
    v530 = sub_1BE4C08(v3878, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1583;
  v528->m_Items[478] = (DataMasterBase_o *)v3878;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[478],
    (int64_t)v3878,
    v3879,
    v3880,
    v3881,
    v3882,
    v3883,
    v3884);
  v3885 = (UserGameCommonMaster_o *)sub_1BE4D18(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v3885, 0LL);
  if ( v3885 )
  {
    v530 = sub_1BE4C08(v3885, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1583;
  v528->m_Items[479] = (DataMasterBase_o *)v3885;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[479],
    (int64_t)v3885,
    v3886,
    v3887,
    v3888,
    v3889,
    v3890,
    v3891);
  v3892 = (ServantPhotoMaster_o *)sub_1BE4D18(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v3892, 0LL);
  if ( v3892 )
  {
    v530 = sub_1BE4C08(v3892, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1583;
  v528->m_Items[480] = (DataMasterBase_o *)v3892;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[480],
    (int64_t)v3892,
    v3893,
    v3894,
    v3895,
    v3896,
    v3897,
    v3898);
  v3899 = (MasterPhotoMaster_o *)sub_1BE4D18(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v3899, 0LL);
  if ( v3899 )
  {
    v530 = sub_1BE4C08(v3899, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1583;
  v528->m_Items[481] = (DataMasterBase_o *)v3899;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[481],
    (int64_t)v3899,
    v3900,
    v3901,
    v3902,
    v3903,
    v3904,
    v3905);
  v3906 = (WarMessageMaster_o *)sub_1BE4D18(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v3906, 0LL);
  if ( v3906 )
  {
    v530 = sub_1BE4C08(v3906, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1583;
  v528->m_Items[482] = (DataMasterBase_o *)v3906;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[482],
    (int64_t)v3906,
    v3907,
    v3908,
    v3909,
    v3910,
    v3911,
    v3912);
  v3913 = (QuestAutoOrganizationAdjustMaster_o *)sub_1BE4D18(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v3913, 0LL);
  if ( v3913 )
  {
    v530 = sub_1BE4C08(v3913, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1583;
  v528->m_Items[483] = (DataMasterBase_o *)v3913;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[483],
    (int64_t)v3913,
    v3914,
    v3915,
    v3916,
    v3917,
    v3918,
    v3919);
  v3920 = (ExcludeMotionMaster_o *)sub_1BE4D18(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v3920, 0LL);
  if ( v3920 )
  {
    v530 = sub_1BE4C08(v3920, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1583;
  v528->m_Items[484] = (DataMasterBase_o *)v3920;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[484],
    (int64_t)v3920,
    v3921,
    v3922,
    v3923,
    v3924,
    v3925,
    v3926);
  v3927 = (UserInterruptionQuestMaster_o *)sub_1BE4D18(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v3927, 0LL);
  if ( v3927 )
  {
    v530 = sub_1BE4C08(v3927, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1583;
  v528->m_Items[485] = (DataMasterBase_o *)v3927;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[485],
    (int64_t)v3927,
    v3928,
    v3929,
    v3930,
    v3931,
    v3932,
    v3933);
  v3934 = (ServantTransformMaster_o *)sub_1BE4D18(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v3934, 0LL);
  if ( v3934 )
  {
    v530 = sub_1BE4C08(v3934, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1583;
  v528->m_Items[486] = (DataMasterBase_o *)v3934;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[486],
    (int64_t)v3934,
    v3935,
    v3936,
    v3937,
    v3938,
    v3939,
    v3940);
  v3941 = (MapUpdateScheduleMaster_o *)sub_1BE4D18(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v3941, 0LL);
  if ( v3941 )
  {
    v530 = sub_1BE4C08(v3941, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1583;
  v528->m_Items[487] = (DataMasterBase_o *)v3941;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[487],
    (int64_t)v3941,
    v3942,
    v3943,
    v3944,
    v3945,
    v3946,
    v3947);
  v3948 = (QuestPhasePresentMaster_o *)sub_1BE4D18(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v3948, 0LL);
  if ( v3948 )
  {
    v530 = sub_1BE4C08(v3948, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1583;
  v528->m_Items[488] = (DataMasterBase_o *)v3948;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[488],
    (int64_t)v3948,
    v3949,
    v3950,
    v3951,
    v3952,
    v3953,
    v3954);
  v3955 = (UserAccountLinkageMaster_o *)sub_1BE4D18(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v3955, 0LL);
  if ( v3955 )
  {
    v530 = sub_1BE4C08(v3955, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1583;
  v528->m_Items[489] = (DataMasterBase_o *)v3955;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[489],
    (int64_t)v3955,
    v3956,
    v3957,
    v3958,
    v3959,
    v3960,
    v3961);
  v3962 = (MissionNaviTransitionMaster_o *)sub_1BE4D18(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v3962, 0LL);
  if ( v3962 )
  {
    v530 = sub_1BE4C08(v3962, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1583;
  v528->m_Items[490] = (DataMasterBase_o *)v3962;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[490],
    (int64_t)v3962,
    v3963,
    v3964,
    v3965,
    v3966,
    v3967,
    v3968);
  v3969 = (MissionNaviQuestMaster_o *)sub_1BE4D18(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v3969, 0LL);
  if ( v3969 )
  {
    v530 = sub_1BE4C08(v3969, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1583;
  v528->m_Items[491] = (DataMasterBase_o *)v3969;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[491],
    (int64_t)v3969,
    v3970,
    v3971,
    v3972,
    v3973,
    v3974,
    v3975);
  v3976 = (EventTradeGoodsMaster_o *)sub_1BE4D18(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v3976, 0LL);
  if ( v3976 )
  {
    v530 = sub_1BE4C08(v3976, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1583;
  v528->m_Items[492] = (DataMasterBase_o *)v3976;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[492],
    (int64_t)v3976,
    v3977,
    v3978,
    v3979,
    v3980,
    v3981,
    v3982);
  v3983 = (EventTradeStoreMaster_o *)sub_1BE4D18(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v3983, 0LL);
  if ( v3983 )
  {
    v530 = sub_1BE4C08(v3983, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1583;
  v528->m_Items[493] = (DataMasterBase_o *)v3983;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[493],
    (int64_t)v3983,
    v3984,
    v3985,
    v3986,
    v3987,
    v3988,
    v3989);
  v3990 = (EventTradePickupMaster_o *)sub_1BE4D18(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v3990, 0LL);
  if ( v3990 )
  {
    v530 = sub_1BE4C08(v3990, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1583;
  v528->m_Items[494] = (DataMasterBase_o *)v3990;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[494],
    (int64_t)v3990,
    v3991,
    v3992,
    v3993,
    v3994,
    v3995,
    v3996);
  v3997 = (UserEventTradeMaster_o *)sub_1BE4D18(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v3997, 0LL);
  if ( v3997 )
  {
    v530 = sub_1BE4C08(v3997, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1583;
  v528->m_Items[495] = (DataMasterBase_o *)v3997;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[495],
    (int64_t)v3997,
    v3998,
    v3999,
    v4000,
    v4001,
    v4002,
    v4003);
  v4004 = (PaymentHistoryMaster_o *)sub_1BE4D18(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v4004, 0LL);
  if ( v4004 )
  {
    v530 = sub_1BE4C08(v4004, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1583;
  v528->m_Items[496] = (DataMasterBase_o *)v4004;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[496],
    (int64_t)v4004,
    v4005,
    v4006,
    v4007,
    v4008,
    v4009,
    v4010);
  v4011 = (UserExternalPaymentStoneMaster_o *)sub_1BE4D18(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v4011, 0LL);
  if ( v4011 )
  {
    v530 = sub_1BE4C08(v4011, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1583;
  v528->m_Items[497] = (DataMasterBase_o *)v4011;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[497],
    (int64_t)v4011,
    v4012,
    v4013,
    v4014,
    v4015,
    v4016,
    v4017);
  v4018 = (QuestPhaseIndividualityMaster_o *)sub_1BE4D18(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v4018, 0LL);
  if ( v4018 )
  {
    v530 = sub_1BE4C08(v4018, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1583;
  v528->m_Items[498] = (DataMasterBase_o *)v4018;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[498],
    (int64_t)v4018,
    v4019,
    v4020,
    v4021,
    v4022,
    v4023,
    v4024);
  v4025 = (ViewGachaFeaturedServantMaster_o *)sub_1BE4D18(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v4025, 0LL);
  if ( v4025 )
  {
    v530 = sub_1BE4C08(v4025, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1583;
  v528->m_Items[499] = (DataMasterBase_o *)v4025;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[499],
    (int64_t)v4025,
    v4026,
    v4027,
    v4028,
    v4029,
    v4030,
    v4031);
  v4032 = (UserGachaPickupCollateralMaster_o *)sub_1BE4D18(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v4032, 0LL);
  if ( v4032 )
  {
    v530 = sub_1BE4C08(v4032, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1583;
  v528->m_Items[500] = (DataMasterBase_o *)v4032;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[500],
    (int64_t)v4032,
    v4033,
    v4034,
    v4035,
    v4036,
    v4037,
    v4038);
  v4039 = (GachaPickupCollateralMaster_o *)sub_1BE4D18(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v4039, 0LL);
  if ( v4039 )
  {
    v530 = sub_1BE4C08(v4039, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1583;
  v528->m_Items[501] = (DataMasterBase_o *)v4039;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[501],
    (int64_t)v4039,
    v4040,
    v4041,
    v4042,
    v4043,
    v4044,
    v4045);
  v4046 = (GachaPickupCollateralGroupMaster_o *)sub_1BE4D18(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v4046, 0LL);
  if ( v4046 )
  {
    v530 = sub_1BE4C08(v4046, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1583;
  v528->m_Items[502] = (DataMasterBase_o *)v4046;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[502],
    (int64_t)v4046,
    v4047,
    v4048,
    v4049,
    v4050,
    v4051,
    v4052);
  v4053 = (BattlePointMaster_o *)sub_1BE4D18(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v4053, 0LL);
  if ( v4053 )
  {
    v530 = sub_1BE4C08(v4053, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1583;
  v528->m_Items[503] = (DataMasterBase_o *)v4053;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[503],
    (int64_t)v4053,
    v4054,
    v4055,
    v4056,
    v4057,
    v4058,
    v4059);
  v4060 = (BattlePointPhaseMaster_o *)sub_1BE4D18(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v4060, 0LL);
  if ( v4060 )
  {
    v530 = sub_1BE4C08(v4060, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1583;
  v528->m_Items[504] = (DataMasterBase_o *)v4060;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[504],
    (int64_t)v4060,
    v4061,
    v4062,
    v4063,
    v4064,
    v4065,
    v4066);
  v4067 = (ServantBattlePointMaster_o *)sub_1BE4D18(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v4067, 0LL);
  if ( v4067 )
  {
    v530 = sub_1BE4C08(v4067, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1583;
  v528->m_Items[505] = (DataMasterBase_o *)v4067;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[505],
    (int64_t)v4067,
    v4068,
    v4069,
    v4070,
    v4071,
    v4072,
    v4073);
  v4074 = (EffectMovieMaster_o *)sub_1BE4D18(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v4074, 0LL);
  if ( v4074 )
  {
    v530 = sub_1BE4C08(v4074, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1583;
  v528->m_Items[506] = (DataMasterBase_o *)v4074;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[506],
    (int64_t)v4074,
    v4075,
    v4076,
    v4077,
    v4078,
    v4079,
    v4080);
  v4081 = (PaymentLimitMaster_o *)sub_1BE4D18(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v4081, 0LL);
  if ( v4081 )
  {
    v530 = sub_1BE4C08(v4081, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1583;
  v528->m_Items[507] = (DataMasterBase_o *)v4081;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[507],
    (int64_t)v4081,
    v4082,
    v4083,
    v4084,
    v4085,
    v4086,
    v4087);
  v4088 = (UserPaymentLimitMaster_o *)sub_1BE4D18(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v4088, 0LL);
  if ( v4088 )
  {
    v530 = sub_1BE4C08(v4088, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1583;
  v528->m_Items[508] = (DataMasterBase_o *)v4088;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[508],
    (int64_t)v4088,
    v4089,
    v4090,
    v4091,
    v4092,
    v4093,
    v4094);
  v4095 = (RoadmapMaster_o *)sub_1BE4D18(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v4095, 0LL);
  if ( v4095 )
  {
    v530 = sub_1BE4C08(v4095, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1583;
  v528->m_Items[509] = (DataMasterBase_o *)v4095;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[509],
    (int64_t)v4095,
    v4096,
    v4097,
    v4098,
    v4099,
    v4100,
    v4101);
  v4102 = (UserRecommendSupportMaster_o *)sub_1BE4D18(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v4102, 0LL);
  if ( v4102 )
  {
    v530 = sub_1BE4C08(v4102, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1583;
  v528->m_Items[510] = (DataMasterBase_o *)v4102;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[510],
    (int64_t)v4102,
    v4103,
    v4104,
    v4105,
    v4106,
    v4107,
    v4108);
  v4109 = (RecommendSupportQuestMaster_o *)sub_1BE4D18(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v4109, 0LL);
  if ( v4109 )
  {
    v530 = sub_1BE4C08(v4109, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1583;
  v528->m_Items[511] = (DataMasterBase_o *)v4109;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[511],
    (int64_t)v4109,
    v4110,
    v4111,
    v4112,
    v4113,
    v4114,
    v4115);
  v4116 = (RecommendAdviceMessageMaster_o *)sub_1BE4D18(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v4116, 0LL);
  if ( v4116 )
  {
    v530 = sub_1BE4C08(v4116, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1583;
  v528->m_Items[512] = (DataMasterBase_o *)v4116;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[512],
    (int64_t)v4116,
    v4117,
    v4118,
    v4119,
    v4120,
    v4121,
    v4122);
  v4123 = (UserRecommendFollowerMaster_o *)sub_1BE4D18(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v4123, 0LL);
  if ( v4123 )
  {
    v530 = sub_1BE4C08(v4123, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1583;
  v528->m_Items[513] = (DataMasterBase_o *)v4123;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[513],
    (int64_t)v4123,
    v4124,
    v4125,
    v4126,
    v4127,
    v4128,
    v4129);
  v4130 = (ItemDropEfficiencyMaster_o *)sub_1BE4D18(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v4130, 0LL);
  if ( v4130 )
  {
    v530 = sub_1BE4C08(v4130, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1583;
  v528->m_Items[514] = (DataMasterBase_o *)v4130;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[514],
    (int64_t)v4130,
    v4131,
    v4132,
    v4133,
    v4134,
    v4135,
    v4136);
  v4137 = (BlankEarthGimmickAddMaster_o *)sub_1BE4D18(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v4137, 0LL);
  if ( v4137 )
  {
    v530 = sub_1BE4C08(v4137, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1583;
  v528->m_Items[515] = (DataMasterBase_o *)v4137;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[515],
    (int64_t)v4137,
    v4138,
    v4139,
    v4140,
    v4141,
    v4142,
    v4143);
  v4144 = (WarReleaseMaster_o *)sub_1BE4D18(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v4144, 0LL);
  if ( v4144 )
  {
    v530 = sub_1BE4C08(v4144, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1583;
  v528->m_Items[516] = (DataMasterBase_o *)v4144;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[516],
    (int64_t)v4144,
    v4145,
    v4146,
    v4147,
    v4148,
    v4149,
    v4150);
  v4151 = (SelectBonusBaseMaster_o *)sub_1BE4D18(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v4151, 0LL);
  if ( v4151 )
  {
    v530 = sub_1BE4C08(v4151, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1583;
  v528->m_Items[517] = (DataMasterBase_o *)v4151;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[517],
    (int64_t)v4151,
    v4152,
    v4153,
    v4154,
    v4155,
    v4156,
    v4157);
  v4158 = (SelectBonusMaster_o *)sub_1BE4D18(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v4158, 0LL);
  if ( v4158 )
  {
    v530 = sub_1BE4C08(v4158, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1583;
  v528->m_Items[518] = (DataMasterBase_o *)v4158;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[518],
    (int64_t)v4158,
    v4159,
    v4160,
    v4161,
    v4162,
    v4163,
    v4164);
  v4165 = (MyroomServantSpecialImageMaster_o *)sub_1BE4D18(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v4165, 0LL);
  if ( v4165 )
  {
    v530 = sub_1BE4C08(v4165, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1583;
  v528->m_Items[519] = (DataMasterBase_o *)v4165;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[519],
    (int64_t)v4165,
    v4166,
    v4167,
    v4168,
    v4169,
    v4170,
    v4171);
  v4172 = (ShopResetMaster_o *)sub_1BE4D18(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v4172, 0LL);
  if ( v4172 )
  {
    v530 = sub_1BE4C08(v4172, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1583;
  v528->m_Items[520] = (DataMasterBase_o *)v4172;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[520],
    (int64_t)v4172,
    v4173,
    v4174,
    v4175,
    v4176,
    v4177,
    v4178);
  v4179 = (NpcServantDisplayTypeDetailMaster_o *)sub_1BE4D18(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v4179, 0LL);
  if ( v4179 )
  {
    v530 = sub_1BE4C08(v4179, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1583;
  v528->m_Items[521] = (DataMasterBase_o *)v4179;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[521],
    (int64_t)v4179,
    v4180,
    v4181,
    v4182,
    v4183,
    v4184,
    v4185);
  v4186 = (FriendshipServantMaster_o *)sub_1BE4D18(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v4186, 0LL);
  if ( v4186 )
  {
    v530 = sub_1BE4C08(v4186, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1583;
  v528->m_Items[522] = (DataMasterBase_o *)v4186;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[522],
    (int64_t)v4186,
    v4187,
    v4188,
    v4189,
    v4190,
    v4191,
    v4192);
  v4193 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1BE4D18(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v4193, 0LL);
  if ( v4193 )
  {
    v530 = sub_1BE4C08(v4193, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1583;
  v528->m_Items[523] = (DataMasterBase_o *)v4193;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[523],
    (int64_t)v4193,
    v4194,
    v4195,
    v4196,
    v4197,
    v4198,
    v4199);
  v4200 = (ChaldeaGatePickupMaster_o *)sub_1BE4D18(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v4200, 0LL);
  if ( v4200 )
  {
    v530 = sub_1BE4C08(v4200, v528->obj.klass->_1.element_class);
    if ( !v530 )
      goto LABEL_1584;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1583;
  v528->m_Items[524] = (DataMasterBase_o *)v4200;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[524],
    (int64_t)v4200,
    v4201,
    v4202,
    v4203,
    v4204,
    v4205,
    v4206);
  v4207 = (WarGroupIgnoreMaster_o *)sub_1BE4D18(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v4207, 0LL);
  if ( v4207 )
  {
    v530 = sub_1BE4C08(v4207, v528->obj.klass->_1.element_class);
    if ( !v530 )
    {
LABEL_1584:
      v4215 = sub_1BE4D4C(v530);
      sub_1BE4BF4(v4215, 0LL);
    }
  }
  if ( *p_max_length <= 0x20D )
LABEL_1583:
    sub_1BE4D30(v530, v531);
  v528->m_Items[525] = (DataMasterBase_o *)v4207;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v528->m_Items[525],
    (int64_t)v4207,
    v4208,
    v4209,
    v4210,
    v4211,
    v4212,
    v4213);
  return v528;
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

  if ( (byte_4B666D7 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v2);
    byte_4B666D7 = 1;
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

  if ( (byte_4B666D4 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_8666/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4B666D4 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_masterCheckName, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  v19 = 1;
  do
  {
    v35 = v19;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v16, v17, v18);
    v21 = System_String__Format((System_String_o *)StringLiteral_8666/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v20, 0LL);
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
    sub_1BE4D28(v30, v23);
    size = v30->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        (Il2CppObject *)v22,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v30->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v22;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
    }
    ++v19;
  }
  while ( v19 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2F59110 *method)
{
  long double v2; // q0
  const MethodInfo_2F59110_RGCTXs *rgctx_data; // x8
  const MethodInfo_2F59110 *_1_TMaster; // x19
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
    sub_1BE4ACC(&UnityEngine_Debug_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v6);
    sub_1BE4ACC(&int_TypeInfo, v7);
    sub_1BE4ACC(&DataNameKind_Kind_TypeInfo, v8);
    sub_1BE4ACC(&System_Type_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_21622/*"master[{0}] is null[{1}:{2}]"*/, v10);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C36A04();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v12 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v12 )
  {
    sub_1C36A04();
    v12 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v12[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C369A8(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v15) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v15,
         &value,
         (const MethodInfo_3251FF4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v15 = value;
    _1_TMaster = (const MethodInfo_2F59110 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2F59110 *)sub_1C369A8(v16);
    if ( !v15 )
      return 0LL;
    result = (Il2CppObject *)sub_1BE4C08(v15, _1_TMaster);
    if ( result )
      return result;
    sub_1BE4FE8(v15);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v30.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1BE4D28(rgctxDataDummy, method);
  v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v28 = (int)v15;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
  v27 = (int)v15;
  v26.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v26.monitor = (void *)-1LL;
  v24 = (Il2CppObject *)System_Enum__ToString(&v26, 0LL);
  v25 = (Il2CppObject *)System_String__Format_62713248((System_String_o *)StringLiteral_21622/*"master[{0}] is null[{1}:{2}]"*/, v19, v23, v24, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v25, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2F590BC *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1C36A04();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F59110 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B666BF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_CreateMasterData__, method);
    sub_1BE4ACC(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4B666BF = 1;
  }
  v4 = (System_Func_object__o *)sub_1BE4D18(System_Func_DataMasterBase____TypeInfo);
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
  if ( (byte_4B666C0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4B666C0 = 1;
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
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1BE4D28(this, createMasterDataMethod);
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
          (const MethodInfo_3250868 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v18 = *(_DWORD *)(v10 + 24);
        if ( (int)++v19 >= v18 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BE4D30(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.datalist, v10, v12, v13, v14, v15, v16, v17);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v4->fields.lookup, (int64_t)v11, v21, v22, v23, v24, v25, v26);
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
  const MethodInfo_3709998 *v37; // x3
  struct DataMasterBase_array *v38; // x8
  DataMasterBase_o *v39; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo_3709998 *v44; // x3
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
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v71; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v72; // [xsp+28h] [xbp-78h] BYREF
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v74; // 0:x0.16
  System_Nullable_long__o v75; // 0:x0.16

  v5 = this;
  if ( (byte_4B666D1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1BE4ACC(&byte___TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1BE4ACC(&Method_System_Nullable_long___ctor__, v10);
    sub_1BE4ACC(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1BE4ACC(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4B666D1 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1BE4D28(this, indexList);
  v14 = sub_1BE4C08(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    work = (System_Byte_array *)sub_1BE4B74(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1BE4D18(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1BE4D30(v19, v20);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1BE4D28(0LL, v20);
        v22 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v22,
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1BE4D28(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)Item, v24, v25, v26, v27, v28, v29);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1BE4D28(0LL, v30);
        v32 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v22,
                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v34 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v34,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v34,
                           (const MethodInfo_3054A6C *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v38 = v5->fields.datalist;
            if ( !v38 )
              sub_1BE4D28(Index_object, v36);
            if ( (unsigned int)Index_object >= v38->max_length )
              sub_1BE4D30(Index_object, v36);
            if ( !v32 )
              sub_1BE4D28(Index_object, v36);
            if ( !LODWORD(v32[1].monitor) )
              sub_1BE4D30(Index_object, v36);
            v39 = v38->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v74.fields.value = (int64_t)v32[2].klass;
            *(_QWORD *)&v72.fields.hasValue = 0LL;
            v72.fields.value = 0LL;
            *(_QWORD *)&v74.fields.hasValue = &v72;
            System_Nullable_long____ctor(v74, Method_System_Nullable_long___ctor__, v37);
            if ( LODWORD(v32[1].monitor) <= 1 )
              sub_1BE4D30(v42, v43);
            v75.fields.value = (int64_t)v32[2].monitor;
            *(_QWORD *)&v71.fields.hasValue = 0LL;
            v71.fields.value = 0LL;
            *(_QWORD *)&v75.fields.hasValue = &v71;
            System_Nullable_long____ctor(v75, Method_System_Nullable_long___ctor__, v44);
            if ( !v39 )
              sub_1BE4D28(v45, v46);
            DataMasterBase__ReplacedForThread(v39, p_obj, context, v72, v71, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_63925148(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1BE4FE8(indexList);
    if ( v48 != 1 )
      sub_1CCF55C();
    v49 = (_QWORD **)__cxa_begin_catch(v3);
    v50 = sub_1BE4AE0(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v50, **v49) & 1) != 0 )
    {
      __cxa_end_catch();
      v51 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63925148(v51, lockTaken, 0LL);
    }
    else
    {
      v52 = sub_1BE4AE0(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v52, **v49) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v49;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v53 = v5->fields.context;
      v54 = sub_1BE4AE0(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v54 + 224) )
        j_il2cpp_runtime_class_init_0(v54);
      v55 = sub_1BE4AE0(&DataManager___c_TypeInfo);
      v57 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v55 + 184) + 8LL);
      if ( !v57 )
      {
        v58 = sub_1BE4AE0(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v58 + 224) )
          j_il2cpp_runtime_class_init_0(v58);
        v59 = **(Il2CppObject ***)(sub_1BE4AE0(&DataManager___c_TypeInfo) + 184);
        v60 = sub_1BE4AE0(&System_Threading_SendOrPostCallback_TypeInfo);
        v57 = (System_Threading_SendOrPostCallback_o *)sub_1BE4D18(v60);
        v61 = sub_1BE4AE0(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v57, v59, v61, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1BE4AE0(&DataManager___c_TypeInfo) + 184) + 8LL) = v57;
        v62 = sub_1BE4AE0(&DataManager___c_TypeInfo);
        sub_1BE4A70(
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
        sub_1BE4D28(v55, v56);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v53->klass->vtable._5_Post.method)(
        v53,
        v57,
        0LL,
        v53->klass->vtable._6_OperationStarted.methodPtr);
      v51 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63925148(v51, lockTaken, 0LL);
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

  if ( (byte_4B666CF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Sort_int____77157216, *(_QWORD *)&maxIndex);
    sub_1BE4ACC(&System_Comparison_int__TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1BE4ACC(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1BE4ACC(&System_Threading_Thread_TypeInfo, v16);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1BE4ACC(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1BE4ACC(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4B666CF = 1;
  }
  v21 = sub_1BE4D18(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)loadedIndices, v30, v31, v32, v33, v34, v35);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.context, (int64_t)Current, v37, v38, v39, v40, v41, v42);
  v43 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v43;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.masterLoadThreads, (int64_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v52 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  v53 = (System_Comparison_int__o *)sub_1BE4D18(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v53,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__49441276(
    v52,
    (System_Comparison_T__o *)v53,
    (const MethodInfo_2F269FC *)Method_System_Array_Sort_int____77157216);
  v54 = sub_1BE4D18(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
LABEL_14:
    sub_1BE4D28(v22, v23);
  *(_QWORD *)(v54 + 24) = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v54 + 24), v21, v55, v56, v57, v58, v59, v60);
  *(_DWORD *)(v54 + 16) = 0;
  do
  {
    v61 = (System_Threading_ParameterizedThreadStart_o *)sub_1BE4D18(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v61,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v62 = (System_Threading_Thread_o *)sub_1BE4D18(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_63961228(v62, v61, 0LL);
    if ( !v62 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v62, 1, 0LL);
    v63 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v63,
      (Il2CppObject *)v54,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v64 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v52,
            (System_Func_TSource__bool__o *)v63,
            (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
    v65 = System_Linq_Enumerable__ToArray_int_(
            v64,
            (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_63961808(v62, &v65->obj, 0LL);
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
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v75[4] = (Il2CppClass *)v62;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v62, v66, v67, v68, v69, v70, v71);
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

  if ( (byte_4B666D2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1BE4ACC(&System_Threading_ParameterizedThreadStart_TypeInfo, v10);
    sub_1BE4ACC(&System_Threading_Thread_TypeInfo, v11);
    byte_4B666D2 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.writeMasterDataThreadException,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (System_Threading_ParameterizedThreadStart_o *)sub_1BE4D18(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v12,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v13 = (System_Threading_Thread_o *)sub_1BE4D18(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_63961228(v13, v12, 0LL);
  this->fields.writeMasterDataThread = v13;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_writeMasterDataThread, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  if ( !*p_writeMasterDataThread )
    sub_1BE4D28(0LL, v21);
  System_Threading_Thread__Start_63961808(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
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

  if ( (byte_4B666D0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4B666D0 = 1;
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
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1BE4D28(Item, v7);
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
    sub_1BE4A70(p_masterLoadThreads, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_1BE4D28(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B666D3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1BE4ACC(&string_TypeInfo, v9);
    byte_4B666D3 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1BE4D18(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_62937300(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1BE4D28(v14, v15);
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
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1BE4D28(0LL, v26);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1BE4D30(Item, v26);
      if ( !v13 )
        sub_1BE4D28(Item, v26);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v28 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v28 )
        sub_1BE4D28(0LL, v27);
      masterDataBytes = this->fields.masterDataBytes;
      v30 = System_Collections_Generic_List_object___get_Item(
              v28,
              v24,
              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v30 )
        sub_1BE4D28(0LL, v31);
      if ( !LODWORD(v30[1].monitor) )
        sub_1BE4D30(v30, v31);
      if ( !this->fields.saveDataMapList )
        sub_1BE4D28(v30, v31);
      klass = v30[2].klass;
      v33 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v24,
              (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v33 )
        sub_1BE4D28(0LL, v34);
      if ( LODWORD(v33[1].monitor) <= 1 )
        sub_1BE4D30(v33, v34);
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
        sub_1BE4D28(v35, v36);
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
    v40 = sub_1C36AAC(v13, System_IDisposable_TypeInfo, 0LL);
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
      v44 = sub_1C36AAC(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v44)(v11, *(_QWORD *)(v44 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_writeMasterDataThread, 0LL, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B666BA & 1) == 0 )
  {
    sub_1BE4ACC(&DatFileName_TypeInfo, v1);
    sub_1BE4ACC(&DataManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B666BA = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_62710068(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B666B9 & 1) == 0 )
  {
    sub_1BE4ACC(&DatFileName_TypeInfo, v1);
    sub_1BE4ACC(&DataManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B666B9 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_62710068(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B666B7 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, v1);
    sub_1BE4ACC(&CacheFolderName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B666B7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_62710068(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B666B8 & 1) == 0 )
  {
    sub_1BE4ACC(&DatFileName_TypeInfo, v1);
    sub_1BE4ACC(&DataManager_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B666B8 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_62710068(CachePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2F5930C *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1C36A04();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1BE4D28(0LL, v4);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2F59370 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1C36A04();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1BE4D28(0LL, v4);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2F599A4 *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B666C5 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666C5 = 1;
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

  if ( (byte_4B666C6 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666C6 = 1;
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

  if ( (byte_4B666D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Crc32_TypeInfo, name);
    byte_4B666D5 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BE4D28(0LL, v7);
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

  if ( (byte_4B666BB & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, v1);
    sub_1BE4ACC(&CacheFolderName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B666BB = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_62710068(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1120/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B666CA & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666CA = 1;
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

  if ( (byte_4B666C9 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666C9 = 1;
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
    sub_1BE4D28(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B666C2 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666C2 = 1;
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

  if ( (byte_4B666CD & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    byte_4B666CD = 1;
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

  if ( (byte_4B666CC & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4B666CC = 1;
  }
  v3 = sub_1BE4D18(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4B666DA & 1) == 0 )
  {
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, method);
    sub_1BE4ACC(&char___TypeInfo, v3);
    sub_1BE4ACC(&Crc32_TypeInfo, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v9);
    sub_1BE4ACC(&string___TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_5199/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1BE4ACC(&StringLiteral_5202/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1BE4ACC(&StringLiteral_116/*" "*/, v13);
    sub_1BE4ACC(&StringLiteral_25503/*"~"*/, v14);
    sub_1BE4ACC(&StringLiteral_818/*") -> ("*/, v15);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v16);
    sub_1BE4ACC(&StringLiteral_1888/*"@"*/, v17);
    sub_1BE4ACC(&StringLiteral_21598/*"master versiton different ("*/, v18);
    sub_1BE4ACC(&StringLiteral_5203/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1BE4ACC(&StringLiteral_5204/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1BE4ACC(&StringLiteral_5201/*"DataManager version load error : list file break"*/, v21);
    byte_4B666DA = 1;
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
    v33 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1BE4D28(0LL, 0LL);
    if ( !v33->max_length )
      sub_1BE4D30(v33, v33);
    v33->m_Items[2] = -257;
    v34 = System_String__Trim_62728556(v32, v33, 0LL);
    v35 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 2LL);
    if ( !v35 )
      sub_1BE4D28(0LL, 0LL);
    max_length = v35->max_length;
    if ( !max_length )
      sub_1BE4D30(v35, v35);
    v35->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BE4D30(v35, v35);
    v35->m_Items[3] = 10;
    if ( !v34 )
      sub_1BE4D28(v35, v35);
    v37 = System_String__IndexOfAny(v34, v35, 0LL);
    if ( v37 < 2 )
    {
      v38 = &StringLiteral_5203/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v39 = System_String__Substring_62717812(v34, 0, v37, 0LL);
    v41 = v39;
    if ( !v39 )
      sub_1BE4D28(0LL, v40);
    if ( System_String__StartsWith(v39, (System_String_o *)StringLiteral_25503/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v34, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BE4D28(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v47 )
      {
        v48 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 2LL);
        if ( !v48 )
          sub_1BE4D28(0LL, 0LL);
        v49 = v48->max_length;
        if ( !v49 )
          sub_1BE4D30(v48, v48);
        v48->m_Items[2] = 13;
        if ( v49 == 1 )
          sub_1BE4D30(v48, v48);
        v48->m_Items[3] = 10;
        if ( !v43 )
          sub_1BE4D28(v48, v48);
        this = (DataManager_o *)System_String__Split_62721200(v43, v48, 1, 0LL);
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
                                  (System_String_o *)StringLiteral_1888/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v50->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v52 = *(System_String_o **)&v50->fields._DispLog;
          this = (DataManager_o *)sub_1BE4B74(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v52 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_62720964(v52, (System_Char_array *)this, 0LL);
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
            this = (DataManager_o *)sub_1BE4B74(string___TypeInfo, 5LL);
            if ( this )
            {
              v63 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v64 = StringLiteral_21598/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21598/*"master versiton different ("*/;
                sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._DispLog, v64, v57, v58, v59, v60, v61, v62);
                if ( LODWORD(v63->fields.m_CancellationTokenSource) > 1 )
                {
                  v63->fields.datalist = (struct DataMasterBase_array *)v56;
                  sub_1BE4A70(
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
                    v77 = StringLiteral_818/*") -> ("*/;
                    v63->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_818/*") -> ("*/;
                    sub_1BE4A70((PartyOrganizationUtility_o *)&v63->fields.lookup, v77, v71, v72, v73, v74, v75, v76);
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
                      sub_1BE4A70(
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
                        v91 = StringLiteral_809/*")"*/;
                        v63->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_809/*")"*/;
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
                this = (DataManager_o *)sub_1BE4B74(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v101 )
                  break;
                this = (DataManager_o *)System_String__Split_62720964(v101, (System_Char_array *)this, 0LL);
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
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                }
                else
                {
                  v112 = v109 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v112 + 32) = method;
                  sub_1BE4A70(
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
              this = (DataManager_o *)sub_1BE4B74(string___TypeInfo, 9LL);
              if ( this )
              {
                v63 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v120 = StringLiteral_21598/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21598/*"master versiton different ("*/;
                  sub_1BE4A70(
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
                    sub_1BE4A70(
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
                      v134 = StringLiteral_116/*" "*/;
                      v63->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_116/*" "*/;
                      sub_1BE4A70(
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
                        sub_1BE4A70(
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
                          v147 = StringLiteral_818/*") -> ("*/;
                          v63->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_818/*") -> ("*/;
                          sub_1BE4A70(
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
                            sub_1BE4A70(
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
                              v160 = StringLiteral_116/*" "*/;
                              *(_QWORD *)&v63->fields.lastFrameTime = StringLiteral_116/*" "*/;
                              sub_1BE4A70(
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
                                sub_1BE4A70(
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
                                  v91 = StringLiteral_809/*")"*/;
                                  v63->fields.lockCountObj = (Il2CppObject *)StringLiteral_809/*")"*/;
                                  p_saveNameList = (PartyOrganizationUtility_o *)&v63->fields.lockCountObj;
LABEL_104:
                                  sub_1BE4A70(p_saveNameList, v91, v85, v86, v87, v88, v89, v90);
                                  if ( System_String__Concat_62712336((System_String_array *)v63, 0LL) )
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
                sub_1BE4D30(this, method);
              }
            }
LABEL_119:
            sub_1BE4D28(this, method);
          }
          v38 = &StringLiteral_5202/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v38 = &StringLiteral_5201/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v38 = &StringLiteral_5199/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v38 = &StringLiteral_5204/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
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

  if ( (byte_4B666CB & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4B666CB = 1;
  }
  v3 = sub_1BE4D18(DataManager__readMasterVersion_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4B666D8 & 1) == 0 )
  {
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, method);
    sub_1BE4ACC(&char___TypeInfo, v3);
    sub_1BE4ACC(&Crc32_TypeInfo, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v6);
    sub_1BE4ACC(&string___TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_5198/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1BE4ACC(&StringLiteral_5195/*"DataManager boot load error : list file break"*/, v9);
    sub_1BE4ACC(&StringLiteral_5197/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1BE4ACC(&StringLiteral_5193/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1BE4ACC(&StringLiteral_25503/*"~"*/, v12);
    sub_1BE4ACC(&StringLiteral_21597/*"master data versiton different ("*/, v13);
    sub_1BE4ACC(&StringLiteral_818/*") -> ("*/, v14);
    sub_1BE4ACC(&StringLiteral_809/*")"*/, v15);
    sub_1BE4ACC(&StringLiteral_1888/*"@"*/, v16);
    sub_1BE4ACC(&StringLiteral_5196/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4B666D8 = 1;
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
    v24 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1BE4D28(0LL, 0LL);
    if ( !v24->max_length )
      sub_1BE4D30(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_62728556(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1BE4D28(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1BE4D30(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BE4D30(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1BE4D28(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5197/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v84 = (System_String_o *)*v29;
LABEL_58:
      if ( v84 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_62717812(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_1BE4D28(0LL, v31);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_25503/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5198/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v33 = System_String__Substring(v32, 1, 0LL);
    v34 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1BE4D28(0LL, v36);
    v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v34,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v38 = Crc32__Compute(v37, 0LL);
    if ( System_UInt32__Parse(v33, 0LL) != v38 )
    {
      v29 = &StringLiteral_5193/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v39 = (System_Char_array *)sub_1BE4B74(char___TypeInfo, 2LL);
    if ( !v39 )
      sub_1BE4D28(0LL, 0LL);
    v40 = v39->max_length;
    if ( !v40 )
      sub_1BE4D30(v39, v39);
    v39->m_Items[2] = 13;
    if ( v40 == 1 )
      sub_1BE4D30(v39, v39);
    v39->m_Items[3] = 10;
    if ( !v34 )
      sub_1BE4D28(v39, v39);
    v41 = (__int64)System_String__Split_62721200(v34, v39, 1, 0LL);
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
      v41 = System_String__StartsWith((System_String_o *)v41, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
      if ( (v41 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v42 + 24) )
          goto LABEL_78;
        v44 = *(System_String_o **)(v42 + 32);
        v41 = sub_1BE4B74(char___TypeInfo, 1LL);
        if ( v41 )
        {
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_78;
          *(_WORD *)(v41 + 32) = 44;
          if ( v44 )
          {
            v41 = (__int64)System_String__Split_62720964(v44, (System_Char_array *)v41, 0LL);
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
                    v29 = &StringLiteral_5196/*"DataManager boot load error : list file parameter error"*/;
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
                  sub_1BE4D30(v41, v21);
                }
                v41 = sub_1BE4B74(string___TypeInfo, 5LL);
                if ( v41 )
                {
                  v55 = v41;
                  if ( *(_DWORD *)(v41 + 24) )
                  {
                    v56 = StringLiteral_21597/*"master data versiton different ("*/;
                    *(_QWORD *)(v41 + 32) = StringLiteral_21597/*"master data versiton different ("*/;
                    sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 32), v56, v49, v50, v51, v52, v53, v54);
                    if ( *(_DWORD *)(v55 + 24) > 1u )
                    {
                      *(_QWORD *)(v55 + 40) = v48;
                      sub_1BE4A70((PartyOrganizationUtility_o *)(v55 + 40), (int64_t)v48, v57, v58, v59, v60, v61, v62);
                      if ( *(_DWORD *)(v55 + 24) > 2u )
                      {
                        v69 = StringLiteral_818/*") -> ("*/;
                        *(_QWORD *)(v55 + 48) = StringLiteral_818/*") -> ("*/;
                        sub_1BE4A70((PartyOrganizationUtility_o *)(v55 + 48), v69, v63, v64, v65, v66, v67, v68);
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
                          sub_1BE4A70((PartyOrganizationUtility_o *)(v55 + 56), v76, v70, v71, v72, v73, v74, v75);
                          if ( *(_DWORD *)(v55 + 24) > 4u )
                          {
                            v83 = StringLiteral_809/*")"*/;
                            *(_QWORD *)(v55 + 64) = StringLiteral_809/*")"*/;
                            sub_1BE4A70((PartyOrganizationUtility_o *)(v55 + 64), v83, v77, v78, v79, v80, v81, v82);
                            v84 = System_String__Concat_62712336((System_String_array *)v55, 0LL);
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
        sub_1BE4D28(v41, v21);
      }
    }
    v29 = &StringLiteral_5195/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4B666C8 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B666C8 = 1;
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
  sub_1BE4A70(p_updateData, (int64_t)v14, dateVer, (int32_t)obj, (System_String_o *)method, v5, v6, v7);
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

  if ( (byte_4B666C7 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B666C7 = 1;
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

  if ( (byte_4B666C1 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, obj);
    sub_1BE4ACC(&StringLiteral_43/*"\n"*/, v9);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v10);
    byte_4B666C1 = 1;
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
  sub_1BE4A70(
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
        sub_1BE4D28(v15, v16);
      v17 = System_String__Substring(v14, v14->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v24 = System_String__Substring_62717812(v14, 0, v14->fields._stringLength - 1, 0LL);
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&v26->serverHash, (int64_t)v14, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4B666C3 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, obj);
    byte_4B666C3 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_1BE4A70(
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

  if ( (byte_4B666DC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4B666DC = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1BE4FE8(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_39702560(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_39702560(
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
  System_Nullable_long__o v43; // 0:x2.16
  System_Nullable_long__o v44; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4B666DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_24658/*"updated"*/, v7);
    sub_1BE4ACC(&StringLiteral_18805/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1BE4ACC(&StringLiteral_23200/*"replaced"*/, v9);
    byte_4B666DD = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1BE4D28(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18805/*"deleted"*/,
         (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18805/*"deleted"*/,
                              (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                  (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v20 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v20, (Il2CppObject *)this, 0LL);
        }
        if ( v14 == (_DWORD)v16 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v15 = v16 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1BE4D30(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24658/*"updated"*/,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24658/*"updated"*/,
                            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1BE4FE8(v10);
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
                                (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v30 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v30, (Il2CppObject *)this, 0LL);
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
          (Il2CppObject *)StringLiteral_23200/*"replaced"*/,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23200/*"replaced"*/,
                            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1BE4FE8(v3);
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
                                (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v40 )
          goto LABEL_57;
        *(_QWORD *)&v43.fields.hasValue = 0LL;
        v43.fields.value = 0LL;
        *(_QWORD *)&v44.fields.hasValue = 0LL;
        v44.fields.value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v40, (Il2CppObject *)this, v43, v44, 0LL);
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

  if ( (byte_4B666CE & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4B666CE = 1;
  }
  v5 = isUseTips;
  v6 = sub_1BE4D18(DataManager__updateMasterData_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4B666C4 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4B666C4 = 1;
  }
  v3 = sub_1BE4D18(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BE4D28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4B666DB & 1) == 0 )
  {
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, method);
    sub_1BE4ACC(&Crc32_TypeInfo, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v8);
    sub_1BE4ACC(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1BE4ACC(&uint_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_43/*"\n"*/, v12);
    sub_1BE4ACC(&StringLiteral_25506/*"~{0}\n{1}"*/, v13);
    sub_1BE4ACC(&StringLiteral_1888/*"@"*/, v14);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v15);
    byte_4B666DB = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_61853312(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_61859960(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    System_Text_StringBuilder__Append_61862456(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)StringLiteral_863/*","*/, 0LL);
    System_Text_StringBuilder__Append_61862544(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_61859960(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1BE4D28(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_62713180((System_String_o *)StringLiteral_25506/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1BE4D18(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_62867944(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1BE4D28(v39, v40);
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
      v44 = sub_1C36AAC(v38, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B666D9 & 1) == 0 )
  {
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, method);
    sub_1BE4ACC(&Crc32_TypeInfo, v2);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v4);
    sub_1BE4ACC(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1BE4ACC(&string___TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_43/*"\n"*/, v7);
    sub_1BE4ACC(&StringLiteral_25503/*"~"*/, v8);
    sub_1BE4ACC(&StringLiteral_1888/*"@"*/, v9);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v10);
    byte_4B666D9 = 1;
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
    UTF8 = (char *)sub_1BE4B74(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v22 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v23 = StringLiteral_1888/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1888/*"@"*/;
    sub_1BE4A70((PartyOrganizationUtility_o *)(UTF8 + 32), v23, v16, v17, v18, v19, v20, v21);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 40), v30, v24, v25, v26, v27, v28, v29);
    if ( *((_DWORD *)v22 + 6) <= 2u )
      goto LABEL_26;
    v37 = StringLiteral_863/*","*/;
    *((_QWORD *)v22 + 6) = StringLiteral_863/*","*/;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 48), (int64_t)v37, v31, v32, v33, v34, v35, v36);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v22 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v22 + 7) = UTF8;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 56), (int64_t)UTF8, v38, v39, v40, v41, v42, v43);
    if ( *((_DWORD *)v22 + 6) <= 4u
      || (v50 = StringLiteral_863/*","*/,
          *((_QWORD *)v22 + 8) = StringLiteral_863/*","*/,
          sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 64), (int64_t)v50, v44, v45, v46, v47, v48, v49),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v22 + 6) <= 5u)
      || (*((_QWORD *)v22 + 9) = UTF8,
          sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 72), (int64_t)UTF8, v51, v52, v53, v54, v55, v56),
          *((_DWORD *)v22 + 6) <= 6u) )
    {
LABEL_26:
      sub_1BE4D30(UTF8, v15);
    }
    v63 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v22 + 10) = StringLiteral_43/*"\n"*/;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 80), v63, v57, v58, v59, v60, v61, v62);
    v64 = System_String__Concat_62712336((System_String_array *)v22, 0LL);
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
    v67 = System_String__Concat_62712072(
            (System_String_o *)StringLiteral_25503/*"~"*/,
            v66,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v64,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v68 = CatAndMouseGame__CatGame1(v67, 0, 0LL);
    v69 = System_Text_Encoding__get_UTF8(0LL);
    v70 = (System_IO_StreamWriter_o *)sub_1BE4D18(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_62867944(v70, CacheVersionFileName, 0, v69, 0LL);
    if ( !v70 )
LABEL_27:
      sub_1BE4D28(UTF8, v15);
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

  if ( (byte_4B666E1 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager___c_TypeInfo, v1);
    byte_4B666E1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1BE4A70(
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
  if ( (byte_4B666E2 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1BE4ACC(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4B666E2 = 1;
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
                                                  (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1BE4D30(this, *(_QWORD *)&a);
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
  if ( (byte_4B666E3 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1BE4ACC(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4B666E3 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1BE4D28(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BE4D28(this, 0LL);
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
  if ( (byte_4B666E4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1BE4ACC(&byte___TypeInfo, v3);
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&System_GC_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&long___TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BE4ACC(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4B666E4 = 1;
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
        v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1BE4A70(p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
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
          v29 = (System_IO_MemoryStream_o *)sub_1BE4D18(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v29, 0LL);
          v30 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v31 = CatAndMouseGame__MouseGameZ(v30, 0LL);
          v32 = sub_1BE4B74(byte___TypeInfo, 0x4000LL);
          v34 = v32;
          if ( !v32 )
            sub_1BE4D28(0LL, v33);
          if ( !v31 )
            sub_1BE4D28(v32, v33);
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
              sub_1BE4D28(v35, v36);
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
            v51 = sub_1C36AAC(v31, System_IDisposable_TypeInfo, 0LL);
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
              v57 = sub_1C36AAC(v30, System_IDisposable_TypeInfo, 0LL);
            }
            v52 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v57)(v30, *(_QWORD *)(v57 + 8));
          }
          if ( !v29 )
            sub_1BE4D28(v52, v53);
          v58 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v29->klass->vtable._42_ToArray.method)(
                  v29,
                  v29->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v58;
          sub_1BE4A70(
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
            v68 = sub_1C36AAC(v29, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v68)(v29, *(_QWORD *)(v68 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v70 = (System_IO_MemoryStream_o *)sub_1BE4D18(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_62842820(v70, masterDataBytes, 0LL);
          v71 = (System_IO_BinaryReader_o *)sub_1BE4D18(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v71, (System_IO_Stream_o *)v70, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1BE4D28(v72, v73);
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
                  v102 = sub_1C36AAC(v70, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v102)(v70, *(_QWORD *)(v102 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_63745372(0LL);
              v103 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v103, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v103;
              v39 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1BE4A70(v39, (int64_t)v103, v104, v105, v106, v107, v108, v109);
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
              sub_1BE4D28(v72, v73);
            do
            {
              v76 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v71->klass->vtable._15_ReadInt32.method)(
                      v71,
                      v71->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v70 )
                sub_1BE4D28(v76, v77);
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
              v82 = sub_1BE4B74(long___TypeInfo, 2LL);
              v89 = v82;
              if ( !v82 )
                sub_1BE4D28(0LL, 0LL);
              v90 = *(_DWORD *)(v82 + 24);
              if ( !v90 )
                sub_1BE4D30(v82, v82);
              *(_QWORD *)(v82 + 32) = v79;
              if ( v90 == 1 )
                sub_1BE4D30(v82, v82);
              *(_QWORD *)(v82 + 40) = v80;
              if ( !saveDataMapList )
                sub_1BE4D28(v82, v82);
              items = saveDataMapList->fields._items;
              v92 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1BE4D28(v82, v82);
              v93 = saveDataMapList->fields._size;
              if ( (unsigned int)v93 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v82,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v94 = &items->obj.klass + v93;
                saveDataMapList->fields._size = v93 + 1;
                v94[4] = (Il2CppClass *)v89;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v94 + 4), v89, v83, v84, v85, v86, v87, v88);
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
            v98 = sub_1C36AAC(v71, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v98)(v71, *(_QWORD *)(v98 + 8));
          goto LABEL_76;
        }
      }
      v37 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v37 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v37;
        v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v38;
        v39 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1BE4A70(v39, (int64_t)v38, v40, v41, v42, v43, v44, v45);
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
        sub_1BE4D28(this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  if ( (byte_4B666E5 & 1) == 0 )
  {
    sub_1BE4ACC(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4B666E5 = 1;
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
        v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1BE4A70(p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1BE4D28(this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  struct DataManager_o *_4__this; // x20
  DataManager_c *v79; // x0
  int v80; // w8
  MasterDataUnpakcer_o *v81; // x21
  __int64 v82; // x0
  __int64 v83; // x1
  Il2CppObject *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  UnityEngine_WaitForEndOfFrame_o *v91; // x20
  PartyOrganizationUtility_o *v92; // x19
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int v99; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v101; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v103; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  DataManager_c *v106; // x0
  System_String_o *CachePath; // x21
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  __int64 v126; // x1
  DataManager_c *v127; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v129; // x21
  System_Byte_array *v130; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  DataManager_c *v143; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v145; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  UnityEngine_WaitForEndOfFrame_o *v168; // x20
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  DataManager_c *v175; // x0
  const MethodInfo *v176; // x2
  System_Func_bool__o *v177; // x21
  UnityEngine_WaitUntil_o *v178; // x20
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x1
  PartyOrganizationUtility_o *p_dataMapDict_5__6; // x0
  const MethodInfo *v187; // x1
  float v188; // s0
  UnityEngine_WaitForEndOfFrame_o *v189; // x20
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  float realtimeSinceStartup; // s0
  UnityEngine_WaitForEndOfFrame_o *v197; // x20
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  int v204; // w8
  DataManager_c *v205; // x8
  struct DataManager_StaticFields *v206; // x8
  int v207; // w9
  Il2CppObject *v208; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  struct DataMasterBase_array *v222; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v224; // x8
  int64_t MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  __int64 v233; // x0
  __int64 v234; // x1
  struct DataManager___c__DisplayClass49_0_o *v235; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  float v244; // s0
  struct DataManager___c__DisplayClass49_0_o *v245; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v248; // x24
  System_Predicate_object__o *v249; // x23
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  System_Collections_Generic_List_object__o *v262; // x22
  DataManager__updateMasterData_d__49_o *v263; // x24
  System_Predicate_object__o *v264; // x23
  int32_t Index; // w0
  int32_t v266; // w22
  int64_t v267; // x2
  int32_t v268; // w3
  System_String_o *v269; // x4
  BattleSetupInfo_o *v270; // x5
  FollowerInfo_o *v271; // x6
  PartyListViewItem_o *v272; // x7
  __int64 v273; // x8
  _QWORD *v274; // x9
  __int64 _2__current_low; // x10
  __int64 v276; // x8
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  __int64 v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  __int64 v286; // x8
  float v287; // s0
  UnityEngine_WaitForEndOfFrame_o *v288; // x20
  int64_t v289; // x2
  int32_t v290; // w3
  System_String_o *v291; // x4
  BattleSetupInfo_o *v292; // x5
  FollowerInfo_o *v293; // x6
  PartyListViewItem_o *v294; // x7
  ManagerConfig_c *v295; // x0
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  struct System_Collections_Generic_List_string__o *v308; // x8
  System_Collections_Generic_List_int__o *v309; // x22
  int64_t v310; // x2
  int32_t v311; // w3
  System_String_o *v312; // x4
  BattleSetupInfo_o *v313; // x5
  FollowerInfo_o *v314; // x6
  PartyListViewItem_o *v315; // x7
  ManagerConfig_c *v316; // x0
  __int64 v317; // x22
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  DataManager__updateMasterData_d__49_o *v324; // x23
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  DataManager__updateMasterData_d__49_o *v331; // x23
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  DataManager__updateMasterData_d__49_o *v338; // x23
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  DataManager__updateMasterData_d__49_o *v345; // x23
  int64_t v346; // x2
  int32_t v347; // w3
  System_String_o *v348; // x4
  BattleSetupInfo_o *v349; // x5
  FollowerInfo_o *v350; // x6
  PartyListViewItem_o *v351; // x7
  DataManager__updateMasterData_d__49_o *v352; // x23
  int64_t v353; // x2
  int32_t v354; // w3
  System_String_o *v355; // x4
  BattleSetupInfo_o *v356; // x5
  FollowerInfo_o *v357; // x6
  PartyListViewItem_o *v358; // x7
  DataManager__updateMasterData_d__49_o *v359; // x23
  int64_t v360; // x2
  int32_t v361; // w3
  System_String_o *v362; // x4
  BattleSetupInfo_o *v363; // x5
  FollowerInfo_o *v364; // x6
  PartyListViewItem_o *v365; // x7
  DataManager__updateMasterData_d__49_o *v366; // x23
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  DataManager__updateMasterData_d__49_o *v373; // x23
  __int64 v374; // x8
  __int64 v375; // x21
  DataMasterBase_o *v376; // x23
  __int64 v377; // x24
  int64_t v378; // x2
  int32_t v379; // w3
  System_String_o *v380; // x4
  BattleSetupInfo_o *v381; // x5
  FollowerInfo_o *v382; // x6
  PartyListViewItem_o *v383; // x7
  int64_t v384; // x1
  System_Collections_Generic_List_object__o *v385; // x25
  System_Predicate_object__o *v386; // x26
  int32_t v387; // w24
  Il2CppObject *p_obj; // x25
  const MethodInfo_3709998 *v389; // x3
  const MethodInfo_3709998 *v390; // x3
  __int64 v391; // x8
  _QWORD *v392; // x9
  __int64 v393; // x10
  UnityEngine_WaitForEndOfFrame_o *v394; // x20
  int64_t v395; // x2
  int32_t v396; // w3
  System_String_o *v397; // x4
  BattleSetupInfo_o *v398; // x5
  FollowerInfo_o *v399; // x6
  PartyListViewItem_o *v400; // x7
  const MethodInfo *v401; // x1
  ManagerConfig_c *v402; // x0
  Il2CppObject *lockCountObj; // x22
  const MethodInfo *v404; // x1
  DataManager_c *v405; // x0
  int v406; // w21
  DataManager_c *v407; // x8
  UnityEngine_WaitForEndOfFrame_o *v408; // x20
  int64_t v409; // x2
  int32_t v410; // w3
  System_String_o *v411; // x4
  BattleSetupInfo_o *v412; // x5
  FollowerInfo_o *v413; // x6
  PartyListViewItem_o *v414; // x7
  int32_t v415; // w3
  System_String_o *v416; // x4
  BattleSetupInfo_o *v417; // x5
  FollowerInfo_o *v418; // x6
  PartyListViewItem_o *v419; // x7
  struct System_Collections_Generic_List_string__o *v420; // x8
  int32_t size; // w2
  int v422; // w9
  struct System_Collections_Generic_List_long____o *v423; // x8
  int64_t v424; // x2
  int v425; // w9
  UnityEngine_WaitForEndOfFrame_o *v426; // x20
  int64_t v427; // x2
  int32_t v428; // w3
  System_String_o *v429; // x4
  BattleSetupInfo_o *v430; // x5
  FollowerInfo_o *v431; // x6
  PartyListViewItem_o *v432; // x7
  float v433; // s0
  UnityEngine_WaitForEndOfFrame_o *v434; // x20
  int64_t v435; // x2
  int32_t v436; // w3
  System_String_o *v437; // x4
  BattleSetupInfo_o *v438; // x5
  FollowerInfo_o *v439; // x6
  PartyListViewItem_o *v440; // x7
  UnityEngine_WaitForEndOfFrame_o *v441; // x20
  int64_t v442; // x2
  int32_t v443; // w3
  System_String_o *v444; // x4
  BattleSetupInfo_o *v445; // x5
  FollowerInfo_o *v446; // x6
  PartyListViewItem_o *v447; // x7
  __int64 v448; // x0
  struct DataMasterBase_array *v449; // x9
  float v450; // s0
  DataManager_c *v451; // x8
  UnityEngine_WaitForEndOfFrame_o *v452; // x20
  int64_t v453; // x2
  int32_t v454; // w3
  System_String_o *v455; // x4
  BattleSetupInfo_o *v456; // x5
  FollowerInfo_o *v457; // x6
  PartyListViewItem_o *v458; // x7
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+8h] [xbp-A8h]
  System_Nullable_long__o v460; // [xsp+18h] [xbp-98h] BYREF
  System_Nullable_long__o v461; // [xsp+28h] [xbp-88h] BYREF
  int v462; // [xsp+40h] [xbp-70h]
  bool lockTaken; // [xsp+4Ch] [xbp-64h] BYREF
  System_Nullable_long__o v464; // 0:x0.16
  System_Nullable_long__o v465; // 0:x0.16

  v8 = this;
  if ( (byte_4B666E6 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, v9);
    sub_1BE4ACC(&System_Convert_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantProfileMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventServantMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantClassMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCommentMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantProfileMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v19);
    sub_1BE4ACC(&Method_DataManager__updateMasterData_b__49_0__, v20);
    sub_1BE4ACC(&DataManager_TypeInfo, v21);
    sub_1BE4ACC(&DataMasterBase___TypeInfo, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v24);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v25);
    sub_1BE4ACC(&EventRandomMissionClearManager_TypeInfo, v26);
    sub_1BE4ACC(&System_Func_bool__TypeInfo, v27);
    sub_1BE4ACC(&System_GC_TypeInfo, v28);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v29);
    sub_1BE4ACC(&LastUsedDeckNumberManager_TypeInfo, v30);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v31);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v32);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____Add__, v33);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Clear__, v34);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____Clear__, v35);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v36);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__FindIndex__, v37);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__RemoveAt__, v38);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____RemoveAt__, v39);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v40);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____get_Count__, v41);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v42);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____get_Item__, v43);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long____set_Item__, v44);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v45);
    sub_1BE4ACC(&LogoMain_TypeInfo, v46);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v47);
    sub_1BE4ACC(&MasterDataUnpakcer_TypeInfo, v48);
    sub_1BE4ACC(&MaterialBranchRouteManager_TypeInfo, v49);
    sub_1BE4ACC(&MaterialGroupClearHistoryManager_TypeInfo, v50);
    sub_1BE4ACC(&MaterialServantLimitCountManager_TypeInfo, v51);
    sub_1BE4ACC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v52);
    sub_1BE4ACC(&Method_System_Nullable_long___ctor__, v53);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v54);
    sub_1BE4ACC(&System_Predicate_string__TypeInfo, v55);
    sub_1BE4ACC(&ServantCommentManager_TypeInfo, v56);
    sub_1BE4ACC(&ServantProfileEventJoinManager_TypeInfo, v57);
    sub_1BE4ACC(&ServantProfileLimitCountManager_TypeInfo, v58);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v59);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v60);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v61);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v62);
    sub_1BE4ACC(&DataManager___c__DisplayClass49_0_TypeInfo, v63);
    sub_1BE4ACC(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v64);
    sub_1BE4ACC(&DataManager___c__DisplayClass49_1_TypeInfo, v65);
    sub_1BE4ACC(&UserCommandCodeCollectionManager_TypeInfo, v66);
    sub_1BE4ACC(&UserCommandCodeNewManager_TypeInfo, v67);
    sub_1BE4ACC(&UserEquipNewManager_TypeInfo, v68);
    sub_1BE4ACC(&UserMissionProgressManager_TypeInfo, v69);
    sub_1BE4ACC(&UserServantCollectionManager_TypeInfo, v70);
    sub_1BE4ACC(&UserServantLockManager_TypeInfo, v71);
    sub_1BE4ACC(&UserServantNewManager_TypeInfo, v72);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v73);
    sub_1BE4ACC(&UnityEngine_WaitUntil_TypeInfo, v74);
    sub_1BE4ACC(&WarBoardMessageHistoryManager_TypeInfo, v75);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v76);
    this = (DataManager__updateMasterData_d__49_o *)sub_1BE4ACC(&StringLiteral_11626/*"SCRIPT"*/, v77);
    byte_4B666E6 = 1;
  }
  lockTaken = 0;
  v462 = 0;
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
      v106 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath((const MethodInfo *)v106);
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v108, v109, v110, v111, v112, v113);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v120, v121, v122, v123, v124, v125);
      v127 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v127 = DataManager_TypeInfo;
      }
      updateData = v127->static_fields->updateData;
      if ( !updateData )
        sub_1BE4D28(0LL, v126);
      v129 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v130 = System_Convert__FromBase64String(v129, 0LL);
      v8->fields._cryptBytes_5__8 = v130;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8,
        (int64_t)v130,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      v143 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v143 = DataManager_TypeInfo;
      }
      static_fields = v143->static_fields;
      static_fields->updateData = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->updateData, 0LL, v137, v138, v139, v140, v141, v142);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_63745372(0LL);
      v145 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v145, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v145;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(p__2__current, (int64_t)v145, v147, v148, v149, v150, v151, v152);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v8->fields._cryptBytes_5__8;
      v8->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v155 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1BE4D28(v155, v155);
      _4__this->fields.masterDataBytes = v155;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
        (int64_t)v155,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v162, v163, v164, v165, v166, v167);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_63745372(0LL);
      v168 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v168, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v168;
      v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v92, (int64_t)v168, v169, v170, v171, v172, v173, v174);
      v99 = 2;
      goto LABEL_238;
    case 2:
      v8->fields.__1__state = -1;
      v81 = (MasterDataUnpakcer_o *)sub_1BE4D18(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v81, 0LL);
      if ( !_4__this )
        sub_1BE4D28(v82, v83);
      if ( !v81 )
        sub_1BE4D28(v82, v83);
      v84 = MasterDataUnpakcer__Unpack_39087380(v81, _4__this->fields.masterDataBytes, 0LL);
      v8->fields._dataMapObject_5__7 = v84;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
        (int64_t)v84,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_63745372(0LL);
      v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v91;
      v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v92, (int64_t)v91, v93, v94, v95, v96, v97, v98);
      v99 = 3;
      goto LABEL_238;
    case 3:
      dataMapObject_5__7 = v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v101 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v103 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v103 = 0LL;
        }
        else
        {
          v103 = 0LL;
        }
        v8->fields._dataMapDict_5__6 = v103;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v101 )
            v185 = (int64_t)dataMapObject_5__7;
          else
            v185 = 0LL;
        }
        else
        {
          v185 = 0LL;
        }
      }
      else
      {
        v185 = 0LL;
        v8->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6;
      }
      sub_1BE4A70(p_dataMapDict_5__6, v185, v2, (int32_t)v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_288;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(realtimeSinceStartup - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = realtimeSinceStartup;
        v197 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v197, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v197;
        v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v92, (int64_t)v197, v198, v199, v200, v201, v202, v203);
        v99 = 4;
        goto LABEL_238;
      }
LABEL_75:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_82;
      v204 = 0;
      v8->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v204 < v8->fields._dataListCount_5__2 )
        {
          v208 = (Il2CppObject *)sub_1BE4D18(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v208, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v208;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&v8->fields.__8__1,
            (int64_t)v208,
            v210,
            v211,
            v212,
            v213,
            v214,
            v215);
          v222 = _4__this->fields.datalist;
          if ( !v222 )
            goto LABEL_288;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v222->max_length )
            goto LABEL_289;
          v224 = v222->m_Items[i_5__9];
          if ( !v224 )
            goto LABEL_288;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_288;
          MasterName_k__BackingField = (int64_t)v224->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&this->fields,
            MasterName_k__BackingField,
            v216,
            v217,
            v218,
            v219,
            v220,
            v221);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_288;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_288;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v227,
              v228,
              v229,
              v230,
              v231,
              v232);
            v235 = v8->fields.__8__1;
            if ( !v235 )
              sub_1BE4D28(v233, v234);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1BE4D28(0LL, v234);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v235->fields.masterName,
                     (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              (int64_t)Item,
              v238,
              v239,
              v240,
              v241,
              v242,
              v243);
            v244 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v244 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v244;
              v441 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v441, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v441;
              v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v92, (int64_t)v441, v442, v443, v444, v445, v446, v447);
              v99 = 5;
              goto LABEL_238;
            }
LABEL_95:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v245 = v8->fields.__8__1;
            if ( !v245 || !this )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v245->fields.masterName,
                                                              (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_288;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v407 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v407 = DataManager_TypeInfo;
                }
                v206 = v407->static_fields;
                result = 0;
                v207 = 6;
                goto LABEL_286;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v248 = *p__8__1;
            v249 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v249,
              (Il2CppObject *)v248,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v249,
                                                              (const MethodInfo_35ECA7C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_288;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v273 = *(_QWORD *)&this->fields.__1__state;
              v274 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v273 )
                goto LABEL_288;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v273 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
              }
              else
              {
                v276 = v273 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v276 + 32) = method;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)(v276 + 32),
                  (int64_t)method,
                  v250,
                  v251,
                  v252,
                  v253,
                  v254,
                  v255);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              method = (const MethodInfo *)v8->fields._dataMap_5__10;
              v283 = *(_QWORD *)&this->fields.__1__state;
              v284 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v283 )
                goto LABEL_288;
              v285 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v285 >= *(_DWORD *)(v283 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
              }
              else
              {
                v286 = v283 + 8 * v285;
                LODWORD(this->fields.__2__current) = v285 + 1;
                *(_QWORD *)(v286 + 32) = method;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)(v286 + 32),
                  (int64_t)method,
                  v277,
                  v278,
                  v279,
                  v280,
                  v281,
                  v282);
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
                (const MethodInfo_35EBFA8 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._dataMap_5__10 = 0LL;
            v8->fields._isAdd_5__4 = 1;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v8->fields._dataMap_5__10,
              0LL,
              v256,
              v257,
              v258,
              v259,
              v260,
              v261);
          }
          else
          {
            v262 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v263 = *p__8__1;
            v264 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v264,
              (Il2CppObject *)v263,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v262 )
              goto LABEL_288;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v262,
                      (System_Predicate_T__o *)v264,
                      (const MethodInfo_35ECA7C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_124;
            v266 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v266,
              (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v266,
              (const MethodInfo_35ED9F8 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v8->fields._saveDataCount_5__3;
          }
          v8->fields.__8__1 = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)p__8__1, 0LL, v267, v268, v269, v270, v271, v272);
LABEL_124:
          v204 = v8->fields._i_5__9 + 1;
          v8->fields._i_5__9 = v204;
          continue;
        }
        break;
      }
      v287 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v287 - _4__this->fields.lastFrameTime) <= 0.1 )
      {
LABEL_128:
        if ( !v8->fields._isAdd_5__4 )
        {
          v295 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v295 = ManagerConfig_TypeInfo;
          }
          if ( !v295->static_fields->UseMock )
            goto LABEL_82;
        }
        v8->fields._dataMapDict_5__6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
        v8->fields._dataMapObject_5__7 = 0LL;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._dataMapObject_5__7,
          0LL,
          v296,
          v297,
          v298,
          v299,
          v300,
          v301);
        v8->fields._cryptBytes_5__8 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._cryptBytes_5__8, 0LL, v302, v303, v304, v305, v306, v307);
        if ( !_4__this )
          goto LABEL_288;
LABEL_133:
        v308 = _4__this->fields.saveNameList;
        if ( !v308 )
LABEL_288:
          sub_1BE4D28(this, method);
        if ( v308->fields._size <= 0 )
        {
LABEL_82:
          v205 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v205 = DataManager_TypeInfo;
          }
          v206 = v205->static_fields;
          result = 0;
          v207 = 5;
          goto LABEL_286;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v309 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v309,
          (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
        v8->fields._loadedIndices_5__5 = v309;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v8->fields._loadedIndices_5__5,
          (int64_t)v309,
          v310,
          v311,
          v312,
          v313,
          v314,
          v315);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
        if ( v8->fields.isUseTips )
        {
          v316 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v316 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v316->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11626/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v317 = sub_1BE4B74(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v317 )
                goto LABEL_288;
              v324 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( !*(_DWORD *)(v317 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v317 + 32) = v324;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 32), (int64_t)v324, v318, v319, v320, v321, v322, v323);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantClassMaster___);
              v331 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 40) = v331;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 40), (int64_t)v331, v325, v326, v327, v328, v329, v330);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v338 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 48) = v338;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 48), (int64_t)v338, v332, v333, v334, v335, v336, v337);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v345 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 56) = v345;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 56), (int64_t)v345, v339, v340, v341, v342, v343, v344);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v352 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 64) = v352;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 64), (int64_t)v352, v346, v347, v348, v349, v350, v351);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventServantMaster___);
              v359 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 72) = v359;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 72), (int64_t)v359, v353, v354, v355, v356, v357, v358);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v366 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                  goto LABEL_237;
              }
              if ( *(_DWORD *)(v317 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v317 + 80) = v366;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 80), (int64_t)v366, v360, v361, v362, v363, v364, v365);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v373 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BE4C08(this, *(_QWORD *)(*(_QWORD *)v317 + 64LL));
                if ( !this )
                {
LABEL_237:
                  v448 = sub_1BE4D4C(this);
                  sub_1BE4BF4(v448, 0LL);
                }
              }
              if ( *(_DWORD *)(v317 + 24) <= 7u )
LABEL_289:
                sub_1BE4D30(this, method);
              *(_QWORD *)(v317 + 88) = v373;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v317 + 88), (int64_t)v373, v367, v368, v369, v370, v371, v372);
              v374 = *(_QWORD *)(v317 + 24);
              if ( (int)v374 >= 1 )
              {
                v375 = 0LL;
                while ( (unsigned int)v375 < (unsigned int)v374 )
                {
                  v376 = *(DataMasterBase_o **)(v317 + 32 + 8 * v375);
                  v377 = sub_1BE4D18(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v377, 0LL);
                  if ( !v376 )
                    goto LABEL_288;
                  if ( !v377 )
                    goto LABEL_288;
                  v384 = (int64_t)v376->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v377 + 16) = v384;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v377 + 16), v384, v378, v379, v380, v381, v382, v383);
                  v385 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v386 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v386,
                    (Il2CppObject *)v377,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v385 )
                    goto LABEL_288;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v385,
                                                                    (System_Predicate_T__o *)v386,
                                                                    (const MethodInfo_35ECA7C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v387 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    p_obj = &_4__this->fields.masterDataBytes->obj;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v387,
                                                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_289;
                    v464.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v464.fields.hasValue = &v461;
                    *(_QWORD *)&v461.fields.hasValue = 0LL;
                    v461.fields.value = 0LL;
                    System_Nullable_long____ctor(v464, Method_System_Nullable_long___ctor__, v389);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v387,
                                                                      (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_289;
                    v465.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v465.fields.hasValue = &v460;
                    *(_QWORD *)&v460.fields.hasValue = 0LL;
                    v460.fields.value = 0LL;
                    System_Nullable_long____ctor(v465, Method_System_Nullable_long___ctor__, v390);
                    DataMasterBase__Replaced(v376, p_obj, v461, v460, 0LL);
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_288;
                    v391 = *(_QWORD *)&this->fields.__1__state;
                    v392 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v391 )
                      goto LABEL_288;
                    v393 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v393 >= *(_DWORD *)(v391 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v387,
                        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v392[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v393 + 1;
                      *(_DWORD *)(v391 + 4 * v393 + 32) = v387;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v374 = *(_QWORD *)(v317 + 24);
                  if ( (int)++v375 >= (int)v374 )
                    goto LABEL_188;
                }
                goto LABEL_289;
              }
LABEL_188:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
              if ( !this )
                goto LABEL_288;
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
                  goto LABEL_200;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v394 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v394, 0LL);
                  v8->fields.__2__current = (Il2CppObject *)v394;
                  v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                  sub_1BE4A70(v92, (int64_t)v394, v395, v396, v397, v398, v399, v400);
                  v99 = 7;
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
          v402 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v402 = ManagerConfig_TypeInfo;
          }
          if ( !v402->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, v401);
            v433 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
            if ( (float)(v433 - _4__this->fields.lastFrameTime) > 0.1 )
            {
              _4__this->fields.lastFrameTime = v433;
              v434 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v434, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v434;
              v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v92, (int64_t)v434, v435, v436, v437, v438, v439, v440);
              v99 = 8;
              goto LABEL_238;
            }
LABEL_56:
            v175 = DataManager_TypeInfo;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName((const MethodInfo *)v175);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, v176);
              v177 = (System_Func_bool__o *)sub_1BE4D18(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v177,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v178 = (UnityEngine_WaitUntil_o *)sub_1BE4D18(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v178, v177, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v178;
              v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v92, (int64_t)v178, v179, v180, v181, v182, v183, v184);
              v99 = 9;
              goto LABEL_238;
            }
            goto LABEL_288;
          }
        }
LABEL_205:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_63925148(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v8->fields._saveDataCount_5__3 )
        {
          v406 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v405 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v405 = DataManager_TypeInfo;
          }
          v405->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, v404);
          v406 = 20;
        }
        else
        {
          v406 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v406 == 62 )
        {
          v408 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v408, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v408;
          v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BE4A70(v92, (int64_t)v408, v409, v410, v411, v412, v413, v414);
          v99 = 11;
          goto LABEL_238;
        }
        if ( v406 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, v404);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v420 = _4__this->fields.saveNameList;
          if ( v420 )
          {
            size = v420->fields._size;
            v422 = v420->fields._version + 1;
            v420->fields._size = 0;
            v420->fields._version = v422;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v420->fields._items, 0, size, 0LL);
            v423 = _4__this->fields.saveDataMapList;
            if ( v423 )
            {
              v424 = (unsigned int)v423->fields._size;
              v425 = v423->fields._version + 1;
              v423->fields._size = 0;
              v423->fields._version = v425;
              if ( (int)v424 >= 1 )
                System_Array__Clear((System_Array_o *)v423->fields._items, 0, v424, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&_4__this->fields.masterDataBytes,
                0LL,
                v424,
                v415,
                v416,
                v417,
                v418,
                v419);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_63745372(0LL);
              v426 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v426, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v426;
              v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
              sub_1BE4A70(v92, (int64_t)v426, v427, v428, v429, v430, v431, v432);
              v99 = 12;
              goto LABEL_238;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      _4__this->fields.lastFrameTime = v287;
      v288 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v288, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v288;
      v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BE4A70(v92, (int64_t)v288, v289, v290, v291, v292, v293, v294);
      v99 = 6;
LABEL_238:
      *(_DWORD *)&v92[-1].fields._IsQuestStartMenuMode_k__BackingField = v99;
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
        v79 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v79 = DataManager_TypeInfo;
        }
        v79->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, method);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, method);
      DataManager__writeMasterVersionFile(_4__this, v187);
      v188 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v188 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v188;
        v189 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v189, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v189;
        v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(v92, (int64_t)v189, v190, v191, v192, v193, v194, v195);
        v99 = 10;
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
      v80 = 0;
      v8->fields.__1__state = -1;
      v8->fields._i_5__9 = 0;
      goto LABEL_246;
    case 0xD:
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v80 = v8->fields._i_5__9 + 1;
        v8->fields._i_5__9 = v80;
LABEL_246:
        if ( v80 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_288;
        v449 = _4__this->fields.datalist;
        if ( !v449 )
          goto LABEL_288;
        if ( v80 >= v449->max_length )
          goto LABEL_289;
        this = (DataManager__updateMasterData_d__49_o *)v449->m_Items[v80];
        if ( !this )
          goto LABEL_288;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                          this,
                                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v450 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          if ( (float)(v450 - _4__this->fields.lastFrameTime) > 0.1 )
          {
            _4__this->fields.lastFrameTime = v450;
            v452 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v452, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v452;
            v92 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(v92, (int64_t)v452, v453, v454, v455, v456, v457, v458);
            v99 = 13;
            goto LABEL_238;
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
      v451 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v451 = DataManager_TypeInfo;
      }
      v206 = v451->static_fields;
      result = 0;
      v207 = 1;
LABEL_286:
      v206->updateMasterDataResult = v207;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_39061924; // x0
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

  if ( (byte_4B666E7 & 1) == 0 )
  {
    sub_1BE4ACC(&CatAndMouseGame_TypeInfo, method);
    sub_1BE4ACC(&System_Convert_TypeInfo, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13);
    sub_1BE4ACC(&JsonManager_TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_18456/*"contactURL"*/, v17);
    sub_1BE4ACC(&StringLiteral_19684/*"filePass"*/, v18);
    sub_1BE4ACC(&StringLiteral_17295/*"baseURL"*/, v19);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v20);
    byte_4B666E7 = 1;
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._cryptString_5__3, 0LL, v23, v24, v25, v26, v27, v28);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v29, v30, v31, v32, v33, v34);
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
      sub_1BE4A70(
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->webViewData, 0LL, v45, v46, v47, v48, v49, v50);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
        this->fields.__2__current = (Il2CppObject *)v55;
        p__2__current = &this->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)v55, v57, v58, v59, v60, v61, v62);
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
      sub_1BE4A70(
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
        v73 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v73, 0LL);
        this->fields.__2__current = (Il2CppObject *)v73;
        v74 = &this->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)v74, (int64_t)v73, v75, v76, v77, v78, v79, v80);
        v81 = 2;
LABEL_30:
        *((_DWORD *)v74 - 2) = v81;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_39061924 = JsonManager__getDictionary_39061924(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_39061924;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields._data_5__2,
        (int64_t)Dictionary_39061924,
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
        v90 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BE4D18(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v90, 0LL);
        this->fields.__2__current = (Il2CppObject *)v90;
        v74 = &this->fields.__2__current;
        sub_1BE4A70((PartyOrganizationUtility_o *)v74, (int64_t)v90, v91, v92, v93, v94, v95, v96);
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
              (Il2CppObject *)StringLiteral_17295/*"baseURL"*/,
              (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17295/*"baseURL"*/,
               (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18456/*"contactURL"*/,
              (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18456/*"contactURL"*/,
               (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19684/*"filePass"*/,
             (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1BE4D28(Item, v54);
        v101 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)StringLiteral_19684/*"filePass"*/,
                 (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v102 = (System_Collections_Generic_Dictionary_string__object__o *)v101;
        if ( v101 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v101->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v101->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1BE4FE8(v101);
LABEL_54:
            sub_1BE4D28(webViewData, v35);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v100, v99, v102, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields._cryptString_5__3,
        0LL,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields._dataObject_5__4, 0LL, v110, v111, v112, v113, v114, v115);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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