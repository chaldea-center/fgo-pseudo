void __fastcall DataManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  DataManager_c *v9; // x8
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct DataManager_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4216095 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4216095 = 1;
  }
  DataManager_TypeInfo->static_fields->readDataVersion = 0;
  v9 = DataManager_TypeInfo;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  v9->static_fields->dataVersion = 0;
  v9->static_fields->dateVersion = 0LL;
  static_fields = v9->static_fields;
  static_fields->updateData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = DataManager_TypeInfo->static_fields;
  v11->webViewData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v11->webViewData, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = DataManager_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  v18->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&v18->serverHash, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4216094 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_long____TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager___ctor__, v8);
    byte_4216094 = 1;
  }
  LOBYTE(this->fields.datalist) = 1;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.saveDataMapList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_long____TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_long_____ctor__);
  *(_QWORD *)&this->fields.lastFrameTime = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lastFrameTime,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (Il2CppObject *)sub_B0D974(object_TypeInfo, v25, v26);
  System_Object___ctor(v27, 0LL);
  *(_QWORD *)&this->fields.nowLoadCount = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nowLoadCount,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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
  __int64 v1; // x1
  DataManager_c *v2; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4216072 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v1);
    byte_4216072 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(CachePath, v4);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  DataManager_c *v3; // x0

  if ( (byte_4216073 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_4216073 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_43785104(cachePath, 1, 0LL);
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
  __int64 v1; // x1
  DataManager_c *v2; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4216071 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, v1);
    byte_4216071 = 1;
  }
  v2 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v2);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v4);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_c *v5; // x0
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x0

  if ( (byte_421608B & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_421608B = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  v5->static_fields->readDataVersion = 0;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__),
        (saveDataMapList = *(struct System_Collections_Generic_List_long____o **)&this->fields.lastFrameTime) == 0LL) )
  {
    sub_B0D97C(saveDataMapList);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_long____Clear__);
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
  __int64 v478; // x19
  __int64 v479; // x1
  __int64 v480; // x2
  ServantMaster_o *v481; // x20
  __int64 v482; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  _DWORD *v489; // x21
  __int64 v490; // x1
  __int64 v491; // x2
  ServantClassMaster_o *v492; // x20
  System_String_array **v493; // x2
  System_String_array **v494; // x3
  System_Boolean_array **v495; // x4
  System_Int32_array **v496; // x5
  System_Int32_array *v497; // x6
  System_Int32_array *v498; // x7
  __int64 v499; // x1
  __int64 v500; // x2
  ServantCommentMaster_o *v501; // x20
  System_String_array **v502; // x2
  System_String_array **v503; // x3
  System_Boolean_array **v504; // x4
  System_Int32_array **v505; // x5
  System_Int32_array *v506; // x6
  System_Int32_array *v507; // x7
  __int64 v508; // x1
  __int64 v509; // x2
  ServantProfileMaster_o *v510; // x20
  System_String_array **v511; // x2
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  __int64 v517; // x1
  __int64 v518; // x2
  WarMaster_o *v519; // x20
  System_String_array **v520; // x2
  System_String_array **v521; // x3
  System_Boolean_array **v522; // x4
  System_Int32_array **v523; // x5
  System_Int32_array *v524; // x6
  System_Int32_array *v525; // x7
  __int64 v526; // x1
  __int64 v527; // x2
  UserMaster_o *v528; // x20
  System_String_array **v529; // x2
  System_String_array **v530; // x3
  System_Boolean_array **v531; // x4
  System_Int32_array **v532; // x5
  System_Int32_array *v533; // x6
  System_Int32_array *v534; // x7
  __int64 v535; // x1
  __int64 v536; // x2
  UserGameMaster_o *v537; // x20
  System_String_array **v538; // x2
  System_String_array **v539; // x3
  System_Boolean_array **v540; // x4
  System_Int32_array **v541; // x5
  System_Int32_array *v542; // x6
  System_Int32_array *v543; // x7
  __int64 v544; // x1
  __int64 v545; // x2
  TblUserMaster_o *v546; // x20
  System_String_array **v547; // x2
  System_String_array **v548; // x3
  System_Boolean_array **v549; // x4
  System_Int32_array **v550; // x5
  System_Int32_array *v551; // x6
  System_Int32_array *v552; // x7
  __int64 v553; // x1
  __int64 v554; // x2
  UserItemMaster_o *v555; // x20
  System_String_array **v556; // x2
  System_String_array **v557; // x3
  System_Boolean_array **v558; // x4
  System_Int32_array **v559; // x5
  System_Int32_array *v560; // x6
  System_Int32_array *v561; // x7
  __int64 v562; // x1
  __int64 v563; // x2
  UserServantMaster_o *v564; // x20
  System_String_array **v565; // x2
  System_String_array **v566; // x3
  System_Boolean_array **v567; // x4
  System_Int32_array **v568; // x5
  System_Int32_array *v569; // x6
  System_Int32_array *v570; // x7
  __int64 v571; // x1
  __int64 v572; // x2
  UserServantStorageMaster_o *v573; // x20
  System_String_array **v574; // x2
  System_String_array **v575; // x3
  System_Boolean_array **v576; // x4
  System_Int32_array **v577; // x5
  System_Int32_array *v578; // x6
  System_Int32_array *v579; // x7
  __int64 v580; // x1
  __int64 v581; // x2
  UserAccessaryMaster_o *v582; // x20
  System_String_array **v583; // x2
  System_String_array **v584; // x3
  System_Boolean_array **v585; // x4
  System_Int32_array **v586; // x5
  System_Int32_array *v587; // x6
  System_Int32_array *v588; // x7
  __int64 v589; // x1
  __int64 v590; // x2
  UserQuestMaster_o *v591; // x20
  System_String_array **v592; // x2
  System_String_array **v593; // x3
  System_Boolean_array **v594; // x4
  System_Int32_array **v595; // x5
  System_Int32_array *v596; // x6
  System_Int32_array *v597; // x7
  __int64 v598; // x1
  __int64 v599; // x2
  BattleMaster_o *v600; // x20
  System_String_array **v601; // x2
  System_String_array **v602; // x3
  System_Boolean_array **v603; // x4
  System_Int32_array **v604; // x5
  System_Int32_array *v605; // x6
  System_Int32_array *v606; // x7
  __int64 v607; // x1
  __int64 v608; // x2
  OtherUserGameMaster_o *v609; // x20
  System_String_array **v610; // x2
  System_String_array **v611; // x3
  System_Boolean_array **v612; // x4
  System_Int32_array **v613; // x5
  System_Int32_array *v614; // x6
  System_Int32_array *v615; // x7
  __int64 v616; // x1
  __int64 v617; // x2
  TblFriendMaster_o *v618; // x20
  System_String_array **v619; // x2
  System_String_array **v620; // x3
  System_Boolean_array **v621; // x4
  System_Int32_array **v622; // x5
  System_Int32_array *v623; // x6
  System_Int32_array *v624; // x7
  __int64 v625; // x1
  __int64 v626; // x2
  AreaMaster_o *v627; // x20
  System_String_array **v628; // x2
  System_String_array **v629; // x3
  System_Boolean_array **v630; // x4
  System_Int32_array **v631; // x5
  System_Int32_array *v632; // x6
  System_Int32_array *v633; // x7
  __int64 v634; // x1
  __int64 v635; // x2
  ServantCardMaster_o *v636; // x20
  System_String_array **v637; // x2
  System_String_array **v638; // x3
  System_Boolean_array **v639; // x4
  System_Int32_array **v640; // x5
  System_Int32_array *v641; // x6
  System_Int32_array *v642; // x7
  __int64 v643; // x1
  __int64 v644; // x2
  EventMaster_o *v645; // x20
  System_String_array **v646; // x2
  System_String_array **v647; // x3
  System_Boolean_array **v648; // x4
  System_Int32_array **v649; // x5
  System_Int32_array *v650; // x6
  System_Int32_array *v651; // x7
  __int64 v652; // x1
  __int64 v653; // x2
  ItemMaster_o *v654; // x20
  System_String_array **v655; // x2
  System_String_array **v656; // x3
  System_Boolean_array **v657; // x4
  System_Int32_array **v658; // x5
  System_Int32_array *v659; // x6
  System_Int32_array *v660; // x7
  __int64 v661; // x1
  __int64 v662; // x2
  QuestMaster_o *v663; // x20
  System_String_array **v664; // x2
  System_String_array **v665; // x3
  System_Boolean_array **v666; // x4
  System_Int32_array **v667; // x5
  System_Int32_array *v668; // x6
  System_Int32_array *v669; // x7
  __int64 v670; // x1
  __int64 v671; // x2
  QuestAddMaster_o *v672; // x20
  System_String_array **v673; // x2
  System_String_array **v674; // x3
  System_Boolean_array **v675; // x4
  System_Int32_array **v676; // x5
  System_Int32_array *v677; // x6
  System_Int32_array *v678; // x7
  __int64 v679; // x1
  __int64 v680; // x2
  QuestReleaseMaster_o *v681; // x20
  System_String_array **v682; // x2
  System_String_array **v683; // x3
  System_Boolean_array **v684; // x4
  System_Int32_array **v685; // x5
  System_Int32_array *v686; // x6
  System_Int32_array *v687; // x7
  __int64 v688; // x1
  __int64 v689; // x2
  QuestDateRangeMaster_o *v690; // x20
  System_String_array **v691; // x2
  System_String_array **v692; // x3
  System_Boolean_array **v693; // x4
  System_Int32_array **v694; // x5
  System_Int32_array *v695; // x6
  System_Int32_array *v696; // x7
  __int64 v697; // x1
  __int64 v698; // x2
  QuestPhaseMaster_o *v699; // x20
  System_String_array **v700; // x2
  System_String_array **v701; // x3
  System_Boolean_array **v702; // x4
  System_Int32_array **v703; // x5
  System_Int32_array *v704; // x6
  System_Int32_array *v705; // x7
  __int64 v706; // x1
  __int64 v707; // x2
  QuestPhaseDetailMaster_o *v708; // x20
  System_String_array **v709; // x2
  System_String_array **v710; // x3
  System_Boolean_array **v711; // x4
  System_Int32_array **v712; // x5
  System_Int32_array *v713; // x6
  System_Int32_array *v714; // x7
  __int64 v715; // x1
  __int64 v716; // x2
  QuestGroupMaster_o *v717; // x20
  System_String_array **v718; // x2
  System_String_array **v719; // x3
  System_Boolean_array **v720; // x4
  System_Int32_array **v721; // x5
  System_Int32_array *v722; // x6
  System_Int32_array *v723; // x7
  __int64 v724; // x1
  __int64 v725; // x2
  QuestRandomGroupMaster_o *v726; // x20
  System_String_array **v727; // x2
  System_String_array **v728; // x3
  System_Boolean_array **v729; // x4
  System_Int32_array **v730; // x5
  System_Int32_array *v731; // x6
  System_Int32_array *v732; // x7
  __int64 v733; // x1
  __int64 v734; // x2
  QuestConsumeItemMaster_o *v735; // x20
  System_String_array **v736; // x2
  System_String_array **v737; // x3
  System_Boolean_array **v738; // x4
  System_Int32_array **v739; // x5
  System_Int32_array *v740; // x6
  System_Int32_array *v741; // x7
  __int64 v742; // x1
  __int64 v743; // x2
  QuestMessageMaster_o *v744; // x20
  System_String_array **v745; // x2
  System_String_array **v746; // x3
  System_Boolean_array **v747; // x4
  System_Int32_array **v748; // x5
  System_Int32_array *v749; // x6
  System_Int32_array *v750; // x7
  __int64 v751; // x1
  __int64 v752; // x2
  UserQuestInfoMaster_o *v753; // x20
  System_String_array **v754; // x2
  System_String_array **v755; // x3
  System_Boolean_array **v756; // x4
  System_Int32_array **v757; // x5
  System_Int32_array *v758; // x6
  System_Int32_array *v759; // x7
  __int64 v760; // x1
  __int64 v761; // x2
  UserQuestRecordMaster_o *v762; // x20
  System_String_array **v763; // x2
  System_String_array **v764; // x3
  System_Boolean_array **v765; // x4
  System_Int32_array **v766; // x5
  System_Int32_array *v767; // x6
  System_Int32_array *v768; // x7
  __int64 v769; // x1
  __int64 v770; // x2
  ViewQuestInfoMaster_o *v771; // x20
  System_String_array **v772; // x2
  System_String_array **v773; // x3
  System_Boolean_array **v774; // x4
  System_Int32_array **v775; // x5
  System_Int32_array *v776; // x6
  System_Int32_array *v777; // x7
  __int64 v778; // x1
  __int64 v779; // x2
  ViewEnemyMaster_o *v780; // x20
  System_String_array **v781; // x2
  System_String_array **v782; // x3
  System_Boolean_array **v783; // x4
  System_Int32_array **v784; // x5
  System_Int32_array *v785; // x6
  System_Int32_array *v786; // x7
  __int64 v787; // x1
  __int64 v788; // x2
  ViewQuestEnemyInfoMaster_o *v789; // x20
  System_String_array **v790; // x2
  System_String_array **v791; // x3
  System_Boolean_array **v792; // x4
  System_Int32_array **v793; // x5
  System_Int32_array *v794; // x6
  System_Int32_array *v795; // x7
  __int64 v796; // x1
  __int64 v797; // x2
  BlankEarthSpotMaster_o *v798; // x20
  System_String_array **v799; // x2
  System_String_array **v800; // x3
  System_Boolean_array **v801; // x4
  System_Int32_array **v802; // x5
  System_Int32_array *v803; // x6
  System_Int32_array *v804; // x7
  __int64 v805; // x1
  __int64 v806; // x2
  SpotMaster_o *v807; // x20
  System_String_array **v808; // x2
  System_String_array **v809; // x3
  System_Boolean_array **v810; // x4
  System_Int32_array **v811; // x5
  System_Int32_array *v812; // x6
  System_Int32_array *v813; // x7
  __int64 v814; // x1
  __int64 v815; // x2
  SpotImageMaster_o *v816; // x20
  System_String_array **v817; // x2
  System_String_array **v818; // x3
  System_Boolean_array **v819; // x4
  System_Int32_array **v820; // x5
  System_Int32_array *v821; // x6
  System_Int32_array *v822; // x7
  __int64 v823; // x1
  __int64 v824; // x2
  SpotRoadMaster_o *v825; // x20
  System_String_array **v826; // x2
  System_String_array **v827; // x3
  System_Boolean_array **v828; // x4
  System_Int32_array **v829; // x5
  System_Int32_array *v830; // x6
  System_Int32_array *v831; // x7
  __int64 v832; // x1
  __int64 v833; // x2
  SpotPathMaster_o *v834; // x20
  System_String_array **v835; // x2
  System_String_array **v836; // x3
  System_Boolean_array **v837; // x4
  System_Int32_array **v838; // x5
  System_Int32_array *v839; // x6
  System_Int32_array *v840; // x7
  __int64 v841; // x1
  __int64 v842; // x2
  SpotAddMaster_o *v843; // x20
  System_String_array **v844; // x2
  System_String_array **v845; // x3
  System_Boolean_array **v846; // x4
  System_Int32_array **v847; // x5
  System_Int32_array *v848; // x6
  System_Int32_array *v849; // x7
  __int64 v850; // x1
  __int64 v851; // x2
  MapGimmickMaster_o *v852; // x20
  System_String_array **v853; // x2
  System_String_array **v854; // x3
  System_Boolean_array **v855; // x4
  System_Int32_array **v856; // x5
  System_Int32_array *v857; // x6
  System_Int32_array *v858; // x7
  __int64 v859; // x1
  __int64 v860; // x2
  GiftMaster_o *v861; // x20
  System_String_array **v862; // x2
  System_String_array **v863; // x3
  System_Boolean_array **v864; // x4
  System_Int32_array **v865; // x5
  System_Int32_array *v866; // x6
  System_Int32_array *v867; // x7
  __int64 v868; // x1
  __int64 v869; // x2
  GiftAddMaster_o *v870; // x20
  System_String_array **v871; // x2
  System_String_array **v872; // x3
  System_Boolean_array **v873; // x4
  System_Int32_array **v874; // x5
  System_Int32_array *v875; // x6
  System_Int32_array *v876; // x7
  __int64 v877; // x1
  __int64 v878; // x2
  ShopMaster_o *v879; // x20
  System_String_array **v880; // x2
  System_String_array **v881; // x3
  System_Boolean_array **v882; // x4
  System_Int32_array **v883; // x5
  System_Int32_array *v884; // x6
  System_Int32_array *v885; // x7
  __int64 v886; // x1
  __int64 v887; // x2
  StoneShopMaster_o *v888; // x20
  System_String_array **v889; // x2
  System_String_array **v890; // x3
  System_Boolean_array **v891; // x4
  System_Int32_array **v892; // x5
  System_Int32_array *v893; // x6
  System_Int32_array *v894; // x7
  __int64 v895; // x1
  __int64 v896; // x2
  BankShopMaster_o *v897; // x20
  System_String_array **v898; // x2
  System_String_array **v899; // x3
  System_Boolean_array **v900; // x4
  System_Int32_array **v901; // x5
  System_Int32_array *v902; // x6
  System_Int32_array *v903; // x7
  __int64 v904; // x1
  __int64 v905; // x2
  ShopScriptMaster_o *v906; // x20
  System_String_array **v907; // x2
  System_String_array **v908; // x3
  System_Boolean_array **v909; // x4
  System_Int32_array **v910; // x5
  System_Int32_array *v911; // x6
  System_Int32_array *v912; // x7
  __int64 v913; // x1
  __int64 v914; // x2
  StageMaster_o *v915; // x20
  System_String_array **v916; // x2
  System_String_array **v917; // x3
  System_Boolean_array **v918; // x4
  System_Int32_array **v919; // x5
  System_Int32_array *v920; // x6
  System_Int32_array *v921; // x7
  __int64 v922; // x1
  __int64 v923; // x2
  ServantGroupMaster_o *v924; // x20
  System_String_array **v925; // x2
  System_String_array **v926; // x3
  System_Boolean_array **v927; // x4
  System_Int32_array **v928; // x5
  System_Int32_array *v929; // x6
  System_Int32_array *v930; // x7
  __int64 v931; // x1
  __int64 v932; // x2
  ServantLimitMaster_o *v933; // x20
  System_String_array **v934; // x2
  System_String_array **v935; // x3
  System_Boolean_array **v936; // x4
  System_Int32_array **v937; // x5
  System_Int32_array *v938; // x6
  System_Int32_array *v939; // x7
  __int64 v940; // x1
  __int64 v941; // x2
  ServantLimitAddMaster_o *v942; // x20
  System_String_array **v943; // x2
  System_String_array **v944; // x3
  System_Boolean_array **v945; // x4
  System_Int32_array **v946; // x5
  System_Int32_array *v947; // x6
  System_Int32_array *v948; // x7
  __int64 v949; // x1
  __int64 v950; // x2
  ServantSkillMaster_o *v951; // x20
  System_String_array **v952; // x2
  System_String_array **v953; // x3
  System_Boolean_array **v954; // x4
  System_Int32_array **v955; // x5
  System_Int32_array *v956; // x6
  System_Int32_array *v957; // x7
  __int64 v958; // x1
  __int64 v959; // x2
  ServantPassiveSkillMaster_o *v960; // x20
  System_String_array **v961; // x2
  System_String_array **v962; // x3
  System_Boolean_array **v963; // x4
  System_Int32_array **v964; // x5
  System_Int32_array *v965; // x6
  System_Int32_array *v966; // x7
  __int64 v967; // x1
  __int64 v968; // x2
  BgmMaster_o *v969; // x20
  System_String_array **v970; // x2
  System_String_array **v971; // x3
  System_Boolean_array **v972; // x4
  System_Int32_array **v973; // x5
  System_Int32_array *v974; // x6
  System_Int32_array *v975; // x7
  __int64 v976; // x1
  __int64 v977; // x2
  ServantScriptMaster_o *v978; // x20
  System_String_array **v979; // x2
  System_String_array **v980; // x3
  System_Boolean_array **v981; // x4
  System_Int32_array **v982; // x5
  System_Int32_array *v983; // x6
  System_Int32_array *v984; // x7
  __int64 v985; // x1
  __int64 v986; // x2
  NewsMaster_o *v987; // x20
  System_String_array **v988; // x2
  System_String_array **v989; // x3
  System_Boolean_array **v990; // x4
  System_Int32_array **v991; // x5
  System_Int32_array *v992; // x6
  System_Int32_array *v993; // x7
  __int64 v994; // x1
  __int64 v995; // x2
  TelopMaster_o *v996; // x20
  System_String_array **v997; // x2
  System_String_array **v998; // x3
  System_Boolean_array **v999; // x4
  System_Int32_array **v1000; // x5
  System_Int32_array *v1001; // x6
  System_Int32_array *v1002; // x7
  __int64 v1003; // x1
  __int64 v1004; // x2
  UserExpMaster_o *v1005; // x20
  System_String_array **v1006; // x2
  System_String_array **v1007; // x3
  System_Boolean_array **v1008; // x4
  System_Int32_array **v1009; // x5
  System_Int32_array *v1010; // x6
  System_Int32_array *v1011; // x7
  __int64 v1012; // x1
  __int64 v1013; // x2
  TreasureDvcMaster_o *v1014; // x20
  System_String_array **v1015; // x2
  System_String_array **v1016; // x3
  System_Boolean_array **v1017; // x4
  System_Int32_array **v1018; // x5
  System_Int32_array *v1019; // x6
  System_Int32_array *v1020; // x7
  __int64 v1021; // x1
  __int64 v1022; // x2
  ServantTreasureDvcMaster_o *v1023; // x20
  System_String_array **v1024; // x2
  System_String_array **v1025; // x3
  System_Boolean_array **v1026; // x4
  System_Int32_array **v1027; // x5
  System_Int32_array *v1028; // x6
  System_Int32_array *v1029; // x7
  __int64 v1030; // x1
  __int64 v1031; // x2
  SkillMaster_o *v1032; // x20
  System_String_array **v1033; // x2
  System_String_array **v1034; // x3
  System_Boolean_array **v1035; // x4
  System_Int32_array **v1036; // x5
  System_Int32_array *v1037; // x6
  System_Int32_array *v1038; // x7
  __int64 v1039; // x1
  __int64 v1040; // x2
  SkillLvMaster_o *v1041; // x20
  System_String_array **v1042; // x2
  System_String_array **v1043; // x3
  System_Boolean_array **v1044; // x4
  System_Int32_array **v1045; // x5
  System_Int32_array *v1046; // x6
  System_Int32_array *v1047; // x7
  __int64 v1048; // x1
  __int64 v1049; // x2
  SkillDetailMaster_o *v1050; // x20
  System_String_array **v1051; // x2
  System_String_array **v1052; // x3
  System_Boolean_array **v1053; // x4
  System_Int32_array **v1054; // x5
  System_Int32_array *v1055; // x6
  System_Int32_array *v1056; // x7
  __int64 v1057; // x1
  __int64 v1058; // x2
  CommandSpellMaster_o *v1059; // x20
  System_String_array **v1060; // x2
  System_String_array **v1061; // x3
  System_Boolean_array **v1062; // x4
  System_Int32_array **v1063; // x5
  System_Int32_array *v1064; // x6
  System_Int32_array *v1065; // x7
  __int64 v1066; // x1
  __int64 v1067; // x2
  EquipMaster_o *v1068; // x20
  System_String_array **v1069; // x2
  System_String_array **v1070; // x3
  System_Boolean_array **v1071; // x4
  System_Int32_array **v1072; // x5
  System_Int32_array *v1073; // x6
  System_Int32_array *v1074; // x7
  __int64 v1075; // x1
  __int64 v1076; // x2
  EquipExpMaster_o *v1077; // x20
  System_String_array **v1078; // x2
  System_String_array **v1079; // x3
  System_Boolean_array **v1080; // x4
  System_Int32_array **v1081; // x5
  System_Int32_array *v1082; // x6
  System_Int32_array *v1083; // x7
  __int64 v1084; // x1
  __int64 v1085; // x2
  EquipSkillMaster_o *v1086; // x20
  System_String_array **v1087; // x2
  System_String_array **v1088; // x3
  System_Boolean_array **v1089; // x4
  System_Int32_array **v1090; // x5
  System_Int32_array *v1091; // x6
  System_Int32_array *v1092; // x7
  __int64 v1093; // x1
  __int64 v1094; // x2
  SubEquipMaster_o *v1095; // x20
  System_String_array **v1096; // x2
  System_String_array **v1097; // x3
  System_Boolean_array **v1098; // x4
  System_Int32_array **v1099; // x5
  System_Int32_array *v1100; // x6
  System_Int32_array *v1101; // x7
  __int64 v1102; // x1
  __int64 v1103; // x2
  AccessaryMaster_o *v1104; // x20
  System_String_array **v1105; // x2
  System_String_array **v1106; // x3
  System_Boolean_array **v1107; // x4
  System_Int32_array **v1108; // x5
  System_Int32_array *v1109; // x6
  System_Int32_array *v1110; // x7
  __int64 v1111; // x1
  __int64 v1112; // x2
  UserPresentBoxMaster_o *v1113; // x20
  System_String_array **v1114; // x2
  System_String_array **v1115; // x3
  System_Boolean_array **v1116; // x4
  System_Int32_array **v1117; // x5
  System_Int32_array *v1118; // x6
  System_Int32_array *v1119; // x7
  __int64 v1120; // x1
  __int64 v1121; // x2
  UserDeckMaster_o *v1122; // x20
  System_String_array **v1123; // x2
  System_String_array **v1124; // x3
  System_Boolean_array **v1125; // x4
  System_Int32_array **v1126; // x5
  System_Int32_array *v1127; // x6
  System_Int32_array *v1128; // x7
  __int64 v1129; // x1
  __int64 v1130; // x2
  UserSubEquipMaster_o *v1131; // x20
  System_String_array **v1132; // x2
  System_String_array **v1133; // x3
  System_Boolean_array **v1134; // x4
  System_Int32_array **v1135; // x5
  System_Int32_array *v1136; // x6
  System_Int32_array *v1137; // x7
  __int64 v1138; // x1
  __int64 v1139; // x2
  GachaMaster_o *v1140; // x20
  System_String_array **v1141; // x2
  System_String_array **v1142; // x3
  System_Boolean_array **v1143; // x4
  System_Int32_array **v1144; // x5
  System_Int32_array *v1145; // x6
  System_Int32_array *v1146; // x7
  __int64 v1147; // x1
  __int64 v1148; // x2
  GachaImageMaster_o *v1149; // x20
  System_String_array **v1150; // x2
  System_String_array **v1151; // x3
  System_Boolean_array **v1152; // x4
  System_Int32_array **v1153; // x5
  System_Int32_array *v1154; // x6
  System_Int32_array *v1155; // x7
  __int64 v1156; // x1
  __int64 v1157; // x2
  UserGachaMaster_o *v1158; // x20
  System_String_array **v1159; // x2
  System_String_array **v1160; // x3
  System_Boolean_array **v1161; // x4
  System_Int32_array **v1162; // x5
  System_Int32_array *v1163; // x6
  System_Int32_array *v1164; // x7
  __int64 v1165; // x1
  __int64 v1166; // x2
  UserEquipMaster_o *v1167; // x20
  System_String_array **v1168; // x2
  System_String_array **v1169; // x3
  System_Boolean_array **v1170; // x4
  System_Int32_array **v1171; // x5
  System_Int32_array *v1172; // x6
  System_Int32_array *v1173; // x7
  __int64 v1174; // x1
  __int64 v1175; // x2
  UserServantCollectionMaster_o *v1176; // x20
  System_String_array **v1177; // x2
  System_String_array **v1178; // x3
  System_Boolean_array **v1179; // x4
  System_Int32_array **v1180; // x5
  System_Int32_array *v1181; // x6
  System_Int32_array *v1182; // x7
  __int64 v1183; // x1
  __int64 v1184; // x2
  FriendshipMaster_o *v1185; // x20
  System_String_array **v1186; // x2
  System_String_array **v1187; // x3
  System_Boolean_array **v1188; // x4
  System_Int32_array **v1189; // x5
  System_Int32_array *v1190; // x6
  System_Int32_array *v1191; // x7
  __int64 v1192; // x1
  __int64 v1193; // x2
  GachaTicketMaster_o *v1194; // x20
  System_String_array **v1195; // x2
  System_String_array **v1196; // x3
  System_Boolean_array **v1197; // x4
  System_Int32_array **v1198; // x5
  System_Int32_array *v1199; // x6
  System_Int32_array *v1200; // x7
  __int64 v1201; // x1
  __int64 v1202; // x2
  UserFormationMaster_o *v1203; // x20
  System_String_array **v1204; // x2
  System_String_array **v1205; // x3
  System_Boolean_array **v1206; // x4
  System_Int32_array **v1207; // x5
  System_Int32_array *v1208; // x6
  System_Int32_array *v1209; // x7
  __int64 v1210; // x1
  __int64 v1211; // x2
  FunctionMaster_o *v1212; // x20
  System_String_array **v1213; // x2
  System_String_array **v1214; // x3
  System_Boolean_array **v1215; // x4
  System_Int32_array **v1216; // x5
  System_Int32_array *v1217; // x6
  System_Int32_array *v1218; // x7
  __int64 v1219; // x1
  __int64 v1220; // x2
  BuffMaster_o *v1221; // x20
  System_String_array **v1222; // x2
  System_String_array **v1223; // x3
  System_Boolean_array **v1224; // x4
  System_Int32_array **v1225; // x5
  System_Int32_array *v1226; // x6
  System_Int32_array *v1227; // x7
  __int64 v1228; // x1
  __int64 v1229; // x2
  GachaReleaseMaster_o *v1230; // x20
  System_String_array **v1231; // x2
  System_String_array **v1232; // x3
  System_Boolean_array **v1233; // x4
  System_Int32_array **v1234; // x5
  System_Int32_array *v1235; // x6
  System_Int32_array *v1236; // x7
  __int64 v1237; // x1
  __int64 v1238; // x2
  CombineQpMaster_o *v1239; // x20
  System_String_array **v1240; // x2
  System_String_array **v1241; // x3
  System_Boolean_array **v1242; // x4
  System_Int32_array **v1243; // x5
  System_Int32_array *v1244; // x6
  System_Int32_array *v1245; // x7
  __int64 v1246; // x1
  __int64 v1247; // x2
  CombineMaterialMaster_o *v1248; // x20
  System_String_array **v1249; // x2
  System_String_array **v1250; // x3
  System_Boolean_array **v1251; // x4
  System_Int32_array **v1252; // x5
  System_Int32_array *v1253; // x6
  System_Int32_array *v1254; // x7
  __int64 v1255; // x1
  __int64 v1256; // x2
  EventCombineMaster_o *v1257; // x20
  System_String_array **v1258; // x2
  System_String_array **v1259; // x3
  System_Boolean_array **v1260; // x4
  System_Int32_array **v1261; // x5
  System_Int32_array *v1262; // x6
  System_Int32_array *v1263; // x7
  __int64 v1264; // x1
  __int64 v1265; // x2
  ServantExpMaster_o *v1266; // x20
  System_String_array **v1267; // x2
  System_String_array **v1268; // x3
  System_Boolean_array **v1269; // x4
  System_Int32_array **v1270; // x5
  System_Int32_array *v1271; // x6
  System_Int32_array *v1272; // x7
  __int64 v1273; // x1
  __int64 v1274; // x2
  CombineSkillMaster_o *v1275; // x20
  System_String_array **v1276; // x2
  System_String_array **v1277; // x3
  System_Boolean_array **v1278; // x4
  System_Int32_array **v1279; // x5
  System_Int32_array *v1280; // x6
  System_Int32_array *v1281; // x7
  __int64 v1282; // x1
  __int64 v1283; // x2
  CombineTdMaster_o *v1284; // x20
  System_String_array **v1285; // x2
  System_String_array **v1286; // x3
  System_Boolean_array **v1287; // x4
  System_Int32_array **v1288; // x5
  System_Int32_array *v1289; // x6
  System_Int32_array *v1290; // x7
  __int64 v1291; // x1
  __int64 v1292; // x2
  EventQuestMaster_o *v1293; // x20
  System_String_array **v1294; // x2
  System_String_array **v1295; // x3
  System_Boolean_array **v1296; // x4
  System_Int32_array **v1297; // x5
  System_Int32_array *v1298; // x6
  System_Int32_array *v1299; // x7
  __int64 v1300; // x1
  __int64 v1301; // x2
  EventCampaignMaster_o *v1302; // x20
  System_String_array **v1303; // x2
  System_String_array **v1304; // x3
  System_Boolean_array **v1305; // x4
  System_Int32_array **v1306; // x5
  System_Int32_array *v1307; // x6
  System_Int32_array *v1308; // x7
  __int64 v1309; // x1
  __int64 v1310; // x2
  IllustratorMaster_o *v1311; // x20
  System_String_array **v1312; // x2
  System_String_array **v1313; // x3
  System_Boolean_array **v1314; // x4
  System_Int32_array **v1315; // x5
  System_Int32_array *v1316; // x6
  System_Int32_array *v1317; // x7
  __int64 v1318; // x1
  __int64 v1319; // x2
  CvMaster_o *v1320; // x20
  const MethodInfo *v1321; // x1
  System_String_array **v1322; // x2
  System_String_array **v1323; // x3
  System_Boolean_array **v1324; // x4
  System_Int32_array **v1325; // x5
  System_Int32_array *v1326; // x6
  System_Int32_array *v1327; // x7
  __int64 v1328; // x1
  __int64 v1329; // x2
  TreasureDvcLvMaster_o *v1330; // x20
  System_String_array **v1331; // x2
  System_String_array **v1332; // x3
  System_Boolean_array **v1333; // x4
  System_Int32_array **v1334; // x5
  System_Int32_array *v1335; // x6
  System_Int32_array *v1336; // x7
  __int64 v1337; // x1
  __int64 v1338; // x2
  TreasureDvcDetailMaster_o *v1339; // x20
  System_String_array **v1340; // x2
  System_String_array **v1341; // x3
  System_Boolean_array **v1342; // x4
  System_Int32_array **v1343; // x5
  System_Int32_array *v1344; // x6
  System_Int32_array *v1345; // x7
  __int64 v1346; // x1
  __int64 v1347; // x2
  UserFollowerMaster_o *v1348; // x20
  System_String_array **v1349; // x2
  System_String_array **v1350; // x3
  System_Boolean_array **v1351; // x4
  System_Int32_array **v1352; // x5
  System_Int32_array *v1353; // x6
  System_Int32_array *v1354; // x7
  __int64 v1355; // x1
  __int64 v1356; // x2
  NpcFollowerMaster_o *v1357; // x20
  System_String_array **v1358; // x2
  System_String_array **v1359; // x3
  System_Boolean_array **v1360; // x4
  System_Int32_array **v1361; // x5
  System_Int32_array *v1362; // x6
  System_Int32_array *v1363; // x7
  __int64 v1364; // x1
  __int64 v1365; // x2
  NpcServantFollowerMaster_o *v1366; // x20
  System_String_array **v1367; // x2
  System_String_array **v1368; // x3
  System_Boolean_array **v1369; // x4
  System_Int32_array **v1370; // x5
  System_Int32_array *v1371; // x6
  System_Int32_array *v1372; // x7
  __int64 v1373; // x1
  __int64 v1374; // x2
  UserEventMaster_o *v1375; // x20
  System_String_array **v1376; // x2
  System_String_array **v1377; // x3
  System_Boolean_array **v1378; // x4
  System_Int32_array **v1379; // x5
  System_Int32_array *v1380; // x6
  System_Int32_array *v1381; // x7
  __int64 v1382; // x1
  __int64 v1383; // x2
  UserShopMaster_o *v1384; // x20
  System_String_array **v1385; // x2
  System_String_array **v1386; // x3
  System_Boolean_array **v1387; // x4
  System_Int32_array **v1388; // x5
  System_Int32_array *v1389; // x6
  System_Int32_array *v1390; // x7
  __int64 v1391; // x1
  __int64 v1392; // x2
  UserContinueMaster_o *v1393; // x20
  System_String_array **v1394; // x2
  System_String_array **v1395; // x3
  System_Boolean_array **v1396; // x4
  System_Int32_array **v1397; // x5
  System_Int32_array *v1398; // x6
  System_Int32_array *v1399; // x7
  __int64 v1400; // x1
  __int64 v1401; // x2
  ConstantMaster_o *v1402; // x20
  System_String_array **v1403; // x2
  System_String_array **v1404; // x3
  System_Boolean_array **v1405; // x4
  System_Int32_array **v1406; // x5
  System_Int32_array *v1407; // x6
  System_Int32_array *v1408; // x7
  __int64 v1409; // x1
  __int64 v1410; // x2
  ConstantLongMaster_o *v1411; // x20
  System_String_array **v1412; // x2
  System_String_array **v1413; // x3
  System_Boolean_array **v1414; // x4
  System_Int32_array **v1415; // x5
  System_Int32_array *v1416; // x6
  System_Int32_array *v1417; // x7
  __int64 v1418; // x1
  __int64 v1419; // x2
  ConstantStrMaster_o *v1420; // x20
  System_String_array **v1421; // x2
  System_String_array **v1422; // x3
  System_Boolean_array **v1423; // x4
  System_Int32_array **v1424; // x5
  System_Int32_array *v1425; // x6
  System_Int32_array *v1426; // x7
  __int64 v1427; // x1
  __int64 v1428; // x2
  AiMaster_o *v1429; // x20
  System_String_array **v1430; // x2
  System_String_array **v1431; // x3
  System_Boolean_array **v1432; // x4
  System_Int32_array **v1433; // x5
  System_Int32_array *v1434; // x6
  System_Int32_array *v1435; // x7
  __int64 v1436; // x1
  __int64 v1437; // x2
  AiActMaster_o *v1438; // x20
  System_String_array **v1439; // x2
  System_String_array **v1440; // x3
  System_Boolean_array **v1441; // x4
  System_Int32_array **v1442; // x5
  System_Int32_array *v1443; // x6
  System_Int32_array *v1444; // x7
  __int64 v1445; // x1
  __int64 v1446; // x2
  AttriRelationMaster_o *v1447; // x20
  System_String_array **v1448; // x2
  System_String_array **v1449; // x3
  System_Boolean_array **v1450; // x4
  System_Int32_array **v1451; // x5
  System_Int32_array *v1452; // x6
  System_Int32_array *v1453; // x7
  __int64 v1454; // x1
  __int64 v1455; // x2
  ClassRelationMaster_o *v1456; // x20
  System_String_array **v1457; // x2
  System_String_array **v1458; // x3
  System_Boolean_array **v1459; // x4
  System_Int32_array **v1460; // x5
  System_Int32_array *v1461; // x6
  System_Int32_array *v1462; // x7
  __int64 v1463; // x1
  __int64 v1464; // x2
  EffectMaster_o *v1465; // x20
  System_String_array **v1466; // x2
  System_String_array **v1467; // x3
  System_Boolean_array **v1468; // x4
  System_Int32_array **v1469; // x5
  System_Int32_array *v1470; // x6
  System_Int32_array *v1471; // x7
  __int64 v1472; // x1
  __int64 v1473; // x2
  EquipImageMaster_o *v1474; // x20
  System_String_array **v1475; // x2
  System_String_array **v1476; // x3
  System_Boolean_array **v1477; // x4
  System_Int32_array **v1478; // x5
  System_Int32_array *v1479; // x6
  System_Int32_array *v1480; // x7
  __int64 v1481; // x1
  __int64 v1482; // x2
  ServantVoiceMaster_o *v1483; // x20
  System_String_array **v1484; // x2
  System_String_array **v1485; // x3
  System_Boolean_array **v1486; // x4
  System_Int32_array **v1487; // x5
  System_Int32_array *v1488; // x6
  System_Int32_array *v1489; // x7
  __int64 v1490; // x1
  __int64 v1491; // x2
  CombineLimitMaster_o *v1492; // x20
  System_String_array **v1493; // x2
  System_String_array **v1494; // x3
  System_Boolean_array **v1495; // x4
  System_Int32_array **v1496; // x5
  System_Int32_array *v1497; // x6
  System_Int32_array *v1498; // x7
  __int64 v1499; // x1
  __int64 v1500; // x2
  CardMaster_o *v1501; // x20
  System_String_array **v1502; // x2
  System_String_array **v1503; // x3
  System_Boolean_array **v1504; // x4
  System_Int32_array **v1505; // x5
  System_Int32_array *v1506; // x6
  System_Int32_array *v1507; // x7
  __int64 v1508; // x1
  __int64 v1509; // x2
  CombineQpSvtEquipMaster_o *v1510; // x20
  System_String_array **v1511; // x2
  System_String_array **v1512; // x3
  System_Boolean_array **v1513; // x4
  System_Int32_array **v1514; // x5
  System_Int32_array *v1515; // x6
  System_Int32_array *v1516; // x7
  __int64 v1517; // x1
  __int64 v1518; // x2
  ServantRarityMaster_o *v1519; // x20
  System_String_array **v1520; // x2
  System_String_array **v1521; // x3
  System_Boolean_array **v1522; // x4
  System_Int32_array **v1523; // x5
  System_Int32_array *v1524; // x6
  System_Int32_array *v1525; // x7
  __int64 v1526; // x1
  __int64 v1527; // x2
  SetItemMaster_o *v1528; // x20
  System_String_array **v1529; // x2
  System_String_array **v1530; // x3
  System_Boolean_array **v1531; // x4
  System_Int32_array **v1532; // x5
  System_Int32_array *v1533; // x6
  System_Int32_array *v1534; // x7
  __int64 v1535; // x1
  __int64 v1536; // x2
  RecoverMaster_o *v1537; // x20
  System_String_array **v1538; // x2
  System_String_array **v1539; // x3
  System_Boolean_array **v1540; // x4
  System_Int32_array **v1541; // x5
  System_Int32_array *v1542; // x6
  System_Int32_array *v1543; // x7
  __int64 v1544; // x1
  __int64 v1545; // x2
  BannerMaster_o *v1546; // x20
  System_String_array **v1547; // x2
  System_String_array **v1548; // x3
  System_Boolean_array **v1549; // x4
  System_Int32_array **v1550; // x5
  System_Int32_array *v1551; // x6
  System_Int32_array *v1552; // x7
  __int64 v1553; // x1
  __int64 v1554; // x2
  ShopReleaseMaster_o *v1555; // x20
  System_String_array **v1556; // x2
  System_String_array **v1557; // x3
  System_Boolean_array **v1558; // x4
  System_Int32_array **v1559; // x5
  System_Int32_array *v1560; // x6
  System_Int32_array *v1561; // x7
  __int64 v1562; // x1
  __int64 v1563; // x2
  EventRewardMaster_o *v1564; // x20
  System_String_array **v1565; // x2
  System_String_array **v1566; // x3
  System_Boolean_array **v1567; // x4
  System_Int32_array **v1568; // x5
  System_Int32_array *v1569; // x6
  System_Int32_array *v1570; // x7
  __int64 v1571; // x1
  __int64 v1572; // x2
  EventDetailMaster_o *v1573; // x20
  System_String_array **v1574; // x2
  System_String_array **v1575; // x3
  System_Boolean_array **v1576; // x4
  System_Int32_array **v1577; // x5
  System_Int32_array *v1578; // x6
  System_Int32_array *v1579; // x7
  __int64 v1580; // x1
  __int64 v1581; // x2
  EventServantMaster_o *v1582; // x20
  System_String_array **v1583; // x2
  System_String_array **v1584; // x3
  System_Boolean_array **v1585; // x4
  System_Int32_array **v1586; // x5
  System_Int32_array *v1587; // x6
  System_Int32_array *v1588; // x7
  __int64 v1589; // x1
  __int64 v1590; // x2
  BoxGachaMaster_o *v1591; // x20
  System_String_array **v1592; // x2
  System_String_array **v1593; // x3
  System_Boolean_array **v1594; // x4
  System_Int32_array **v1595; // x5
  System_Int32_array *v1596; // x6
  System_Int32_array *v1597; // x7
  __int64 v1598; // x1
  __int64 v1599; // x2
  BoxGachaBaseMaster_o *v1600; // x20
  System_String_array **v1601; // x2
  System_String_array **v1602; // x3
  System_Boolean_array **v1603; // x4
  System_Int32_array **v1604; // x5
  System_Int32_array *v1605; // x6
  System_Int32_array *v1606; // x7
  __int64 v1607; // x1
  __int64 v1608; // x2
  BoxGachaTalkMaster_o *v1609; // x20
  System_String_array **v1610; // x2
  System_String_array **v1611; // x3
  System_Boolean_array **v1612; // x4
  System_Int32_array **v1613; // x5
  System_Int32_array *v1614; // x6
  System_Int32_array *v1615; // x7
  __int64 v1616; // x1
  __int64 v1617; // x2
  UserBoxGachaMaster_o *v1618; // x20
  System_String_array **v1619; // x2
  System_String_array **v1620; // x3
  System_Boolean_array **v1621; // x4
  System_Int32_array **v1622; // x5
  System_Int32_array *v1623; // x6
  System_Int32_array *v1624; // x7
  __int64 v1625; // x1
  __int64 v1626; // x2
  BoxGachaHistoryMaster_o *v1627; // x20
  System_String_array **v1628; // x2
  System_String_array **v1629; // x3
  System_Boolean_array **v1630; // x4
  System_Int32_array **v1631; // x5
  System_Int32_array *v1632; // x6
  System_Int32_array *v1633; // x7
  __int64 v1634; // x1
  __int64 v1635; // x2
  BattleBgMaster_o *v1636; // x20
  System_String_array **v1637; // x2
  System_String_array **v1638; // x3
  System_Boolean_array **v1639; // x4
  System_Int32_array **v1640; // x5
  System_Int32_array *v1641; // x6
  System_Int32_array *v1642; // x7
  __int64 v1643; // x1
  __int64 v1644; // x2
  TipsBattleMaster_o *v1645; // x20
  System_String_array **v1646; // x2
  System_String_array **v1647; // x3
  System_Boolean_array **v1648; // x4
  System_Int32_array **v1649; // x5
  System_Int32_array *v1650; // x6
  System_Int32_array *v1651; // x7
  __int64 v1652; // x1
  __int64 v1653; // x2
  UserLoginMaster_o *v1654; // x20
  System_String_array **v1655; // x2
  System_String_array **v1656; // x3
  System_Boolean_array **v1657; // x4
  System_Int32_array **v1658; // x5
  System_Int32_array *v1659; // x6
  System_Int32_array *v1660; // x7
  __int64 v1661; // x1
  __int64 v1662; // x2
  VoiceMaster_o *v1663; // x20
  System_String_array **v1664; // x2
  System_String_array **v1665; // x3
  System_Boolean_array **v1666; // x4
  System_Int32_array **v1667; // x5
  System_Int32_array *v1668; // x6
  System_Int32_array *v1669; // x7
  __int64 v1670; // x1
  __int64 v1671; // x2
  EventRewardExtraMaster_o *v1672; // x20
  System_String_array **v1673; // x2
  System_String_array **v1674; // x3
  System_Boolean_array **v1675; // x4
  System_Int32_array **v1676; // x5
  System_Int32_array *v1677; // x6
  System_Int32_array *v1678; // x7
  __int64 v1679; // x1
  __int64 v1680; // x2
  EventMissionMaster_o *v1681; // x20
  System_String_array **v1682; // x2
  System_String_array **v1683; // x3
  System_Boolean_array **v1684; // x4
  System_Int32_array **v1685; // x5
  System_Int32_array *v1686; // x6
  System_Int32_array *v1687; // x7
  __int64 v1688; // x1
  __int64 v1689; // x2
  EventMissionActionMaster_o *v1690; // x20
  System_String_array **v1691; // x2
  System_String_array **v1692; // x3
  System_Boolean_array **v1693; // x4
  System_Int32_array **v1694; // x5
  System_Int32_array *v1695; // x6
  System_Int32_array *v1696; // x7
  __int64 v1697; // x1
  __int64 v1698; // x2
  EventMissionActionAddMaster_o *v1699; // x20
  System_String_array **v1700; // x2
  System_String_array **v1701; // x3
  System_Boolean_array **v1702; // x4
  System_Int32_array **v1703; // x5
  System_Int32_array *v1704; // x6
  System_Int32_array *v1705; // x7
  __int64 v1706; // x1
  __int64 v1707; // x2
  EventMissionConditionMaster_o *v1708; // x20
  System_String_array **v1709; // x2
  System_String_array **v1710; // x3
  System_Boolean_array **v1711; // x4
  System_Int32_array **v1712; // x5
  System_Int32_array *v1713; // x6
  System_Int32_array *v1714; // x7
  __int64 v1715; // x1
  __int64 v1716; // x2
  EventMissionCondDetailMaster_o *v1717; // x20
  System_String_array **v1718; // x2
  System_String_array **v1719; // x3
  System_Boolean_array **v1720; // x4
  System_Int32_array **v1721; // x5
  System_Int32_array *v1722; // x6
  System_Int32_array *v1723; // x7
  __int64 v1724; // x1
  __int64 v1725; // x2
  EventMissionAddMaster_o *v1726; // x20
  System_String_array **v1727; // x2
  System_String_array **v1728; // x3
  System_Boolean_array **v1729; // x4
  System_Int32_array **v1730; // x5
  System_Int32_array *v1731; // x6
  System_Int32_array *v1732; // x7
  __int64 v1733; // x1
  __int64 v1734; // x2
  CompleteMissionMaster_o *v1735; // x20
  System_String_array **v1736; // x2
  System_String_array **v1737; // x3
  System_Boolean_array **v1738; // x4
  System_Int32_array **v1739; // x5
  System_Int32_array *v1740; // x6
  System_Int32_array *v1741; // x7
  __int64 v1742; // x1
  __int64 v1743; // x2
  EventRewardSetMaster_o *v1744; // x20
  System_String_array **v1745; // x2
  System_String_array **v1746; // x3
  System_Boolean_array **v1747; // x4
  System_Int32_array **v1748; // x5
  System_Int32_array *v1749; // x6
  System_Int32_array *v1750; // x7
  __int64 v1751; // x1
  __int64 v1752; // x2
  UserEventMissionMaster_o *v1753; // x20
  System_String_array **v1754; // x2
  System_String_array **v1755; // x3
  System_Boolean_array **v1756; // x4
  System_Int32_array **v1757; // x5
  System_Int32_array *v1758; // x6
  System_Int32_array *v1759; // x7
  __int64 v1760; // x1
  __int64 v1761; // x2
  UserEventMissionCondDetailMaster_o *v1762; // x20
  System_String_array **v1763; // x2
  System_String_array **v1764; // x3
  System_Boolean_array **v1765; // x4
  System_Int32_array **v1766; // x5
  System_Int32_array *v1767; // x6
  System_Int32_array *v1768; // x7
  __int64 v1769; // x1
  __int64 v1770; // x2
  BoxGachaBaseDetailMaster_o *v1771; // x20
  System_String_array **v1772; // x2
  System_String_array **v1773; // x3
  System_Boolean_array **v1774; // x4
  System_Int32_array **v1775; // x5
  System_Int32_array *v1776; // x6
  System_Int32_array *v1777; // x7
  __int64 v1778; // x1
  __int64 v1779; // x2
  UserServantLeaderMaster_o *v1780; // x20
  System_String_array **v1781; // x2
  System_String_array **v1782; // x3
  System_Boolean_array **v1783; // x4
  System_Int32_array **v1784; // x5
  System_Int32_array *v1785; // x6
  System_Int32_array *v1786; // x7
  __int64 v1787; // x1
  __int64 v1788; // x2
  ClosedMessageMaster_o *v1789; // x20
  System_String_array **v1790; // x2
  System_String_array **v1791; // x3
  System_Boolean_array **v1792; // x4
  System_Int32_array **v1793; // x5
  System_Int32_array *v1794; // x6
  System_Int32_array *v1795; // x7
  __int64 v1796; // x1
  __int64 v1797; // x2
  FunctionGroupMaster_o *v1798; // x20
  System_String_array **v1799; // x2
  System_String_array **v1800; // x3
  System_Boolean_array **v1801; // x4
  System_Int32_array **v1802; // x5
  System_Int32_array *v1803; // x6
  System_Int32_array *v1804; // x7
  __int64 v1805; // x1
  __int64 v1806; // x2
  EventRaidMaster_o *v1807; // x20
  System_String_array **v1808; // x2
  System_String_array **v1809; // x3
  System_Boolean_array **v1810; // x4
  System_Int32_array **v1811; // x5
  System_Int32_array *v1812; // x6
  System_Int32_array *v1813; // x7
  __int64 v1814; // x1
  __int64 v1815; // x2
  TotalEventRaidMaster_o *v1816; // x20
  System_String_array **v1817; // x2
  System_String_array **v1818; // x3
  System_Boolean_array **v1819; // x4
  System_Int32_array **v1820; // x5
  System_Int32_array *v1821; // x6
  System_Int32_array *v1822; // x7
  __int64 v1823; // x1
  __int64 v1824; // x2
  UserEventRaidMaster_o *v1825; // x20
  __int64 v1826; // x0
  System_String_array **v1827; // x2
  System_String_array **v1828; // x3
  System_Boolean_array **v1829; // x4
  System_Int32_array **v1830; // x5
  System_Int32_array *v1831; // x6
  System_Int32_array *v1832; // x7
  __int64 v1833; // x1
  __int64 v1834; // x2
  EventPointMaster_o *v1835; // x20
  System_String_array **v1836; // x2
  System_String_array **v1837; // x3
  System_Boolean_array **v1838; // x4
  System_Int32_array **v1839; // x5
  System_Int32_array *v1840; // x6
  System_Int32_array *v1841; // x7
  __int64 v1842; // x1
  __int64 v1843; // x2
  EventPointGroupMaster_o *v1844; // x20
  System_String_array **v1845; // x2
  System_String_array **v1846; // x3
  System_Boolean_array **v1847; // x4
  System_Int32_array **v1848; // x5
  System_Int32_array *v1849; // x6
  System_Int32_array *v1850; // x7
  __int64 v1851; // x1
  __int64 v1852; // x2
  TotalEventPointMaster_o *v1853; // x20
  System_String_array **v1854; // x2
  System_String_array **v1855; // x3
  System_Boolean_array **v1856; // x4
  System_Int32_array **v1857; // x5
  System_Int32_array *v1858; // x6
  System_Int32_array *v1859; // x7
  __int64 v1860; // x1
  __int64 v1861; // x2
  UserEventPointMaster_o *v1862; // x20
  System_String_array **v1863; // x2
  System_String_array **v1864; // x3
  System_Boolean_array **v1865; // x4
  System_Int32_array **v1866; // x5
  System_Int32_array *v1867; // x6
  System_Int32_array *v1868; // x7
  __int64 v1869; // x1
  __int64 v1870; // x2
  EventPointUpperMaster_o *v1871; // x20
  System_String_array **v1872; // x2
  System_String_array **v1873; // x3
  System_Boolean_array **v1874; // x4
  System_Int32_array **v1875; // x5
  System_Int32_array *v1876; // x6
  System_Int32_array *v1877; // x7
  __int64 v1878; // x1
  __int64 v1879; // x2
  EventPointUpperReleaseMaster_o *v1880; // x20
  System_String_array **v1881; // x2
  System_String_array **v1882; // x3
  System_Boolean_array **v1883; // x4
  System_Int32_array **v1884; // x5
  System_Int32_array *v1885; // x6
  System_Int32_array *v1886; // x7
  __int64 v1887; // x1
  __int64 v1888; // x2
  EventRaceMaster_o *v1889; // x20
  System_String_array **v1890; // x2
  System_String_array **v1891; // x3
  System_Boolean_array **v1892; // x4
  System_Int32_array **v1893; // x5
  System_Int32_array *v1894; // x6
  System_Int32_array *v1895; // x7
  __int64 v1896; // x1
  __int64 v1897; // x2
  EventRaceResultMaster_o *v1898; // x20
  System_String_array **v1899; // x2
  System_String_array **v1900; // x3
  System_Boolean_array **v1901; // x4
  System_Int32_array **v1902; // x5
  System_Int32_array *v1903; // x6
  System_Int32_array *v1904; // x7
  __int64 v1905; // x1
  __int64 v1906; // x2
  QuestRacePointMaster_o *v1907; // x20
  System_String_array **v1908; // x2
  System_String_array **v1909; // x3
  System_Boolean_array **v1910; // x4
  System_Int32_array **v1911; // x5
  System_Int32_array *v1912; // x6
  System_Int32_array *v1913; // x7
  __int64 v1914; // x1
  __int64 v1915; // x2
  UserEventRaceMaster_o *v1916; // x20
  System_String_array **v1917; // x2
  System_String_array **v1918; // x3
  System_Boolean_array **v1919; // x4
  System_Int32_array **v1920; // x5
  System_Int32_array *v1921; // x6
  System_Int32_array *v1922; // x7
  __int64 v1923; // x1
  __int64 v1924; // x2
  EventScriptMaster_o *v1925; // x20
  System_String_array **v1926; // x2
  System_String_array **v1927; // x3
  System_Boolean_array **v1928; // x4
  System_Int32_array **v1929; // x5
  System_Int32_array *v1930; // x6
  System_Int32_array *v1931; // x7
  __int64 v1932; // x1
  __int64 v1933; // x2
  EventScriptReleaseMaster_o *v1934; // x20
  System_String_array **v1935; // x2
  System_String_array **v1936; // x3
  System_Boolean_array **v1937; // x4
  System_Int32_array **v1938; // x5
  System_Int32_array *v1939; // x6
  System_Int32_array *v1940; // x7
  __int64 v1941; // x1
  __int64 v1942; // x2
  UserPresentHistoryMaster_o *v1943; // x20
  System_String_array **v1944; // x2
  System_String_array **v1945; // x3
  System_Boolean_array **v1946; // x4
  System_Int32_array **v1947; // x5
  System_Int32_array *v1948; // x6
  System_Int32_array *v1949; // x7
  __int64 v1950; // x1
  __int64 v1951; // x2
  MstMissionMaster_o *v1952; // x20
  System_String_array **v1953; // x2
  System_String_array **v1954; // x3
  System_Boolean_array **v1955; // x4
  System_Int32_array **v1956; // x5
  System_Int32_array *v1957; // x6
  System_Int32_array *v1958; // x7
  __int64 v1959; // x1
  __int64 v1960; // x2
  ServantExceedMaster_o *v1961; // x20
  System_String_array **v1962; // x2
  System_String_array **v1963; // x3
  System_Boolean_array **v1964; // x4
  System_Int32_array **v1965; // x5
  System_Int32_array *v1966; // x6
  System_Int32_array *v1967; // x7
  __int64 v1968; // x1
  __int64 v1969; // x2
  PartialMaintenanceMaster_o *v1970; // x20
  System_String_array **v1971; // x2
  System_String_array **v1972; // x3
  System_Boolean_array **v1973; // x4
  System_Int32_array **v1974; // x5
  System_Int32_array *v1975; // x6
  System_Int32_array *v1976; // x7
  __int64 v1977; // x1
  __int64 v1978; // x2
  GuideMaster_o *v1979; // x20
  System_String_array **v1980; // x2
  System_String_array **v1981; // x3
  System_Boolean_array **v1982; // x4
  System_Int32_array **v1983; // x5
  System_Int32_array *v1984; // x6
  System_Int32_array *v1985; // x7
  __int64 v1986; // x1
  __int64 v1987; // x2
  MstMissionDisplayInfoMaster_o *v1988; // x20
  System_String_array **v1989; // x2
  System_String_array **v1990; // x3
  System_Boolean_array **v1991; // x4
  System_Int32_array **v1992; // x5
  System_Int32_array *v1993; // x6
  System_Int32_array *v1994; // x7
  __int64 v1995; // x1
  __int64 v1996; // x2
  GachaGroupMaster_o *v1997; // x20
  System_String_array **v1998; // x2
  System_String_array **v1999; // x3
  System_Boolean_array **v2000; // x4
  System_Int32_array **v2001; // x5
  System_Int32_array *v2002; // x6
  System_Int32_array *v2003; // x7
  __int64 v2004; // x1
  __int64 v2005; // x2
  QuestResetMaster_o *v2006; // x20
  System_String_array **v2007; // x2
  System_String_array **v2008; // x3
  System_Boolean_array **v2009; // x4
  System_Int32_array **v2010; // x5
  System_Int32_array *v2011; // x6
  System_Int32_array *v2012; // x7
  __int64 v2013; // x1
  __int64 v2014; // x2
  WarAddMaster_o *v2015; // x20
  System_String_array **v2016; // x2
  System_String_array **v2017; // x3
  System_Boolean_array **v2018; // x4
  System_Int32_array **v2019; // x5
  System_Int32_array *v2020; // x6
  System_Int32_array *v2021; // x7
  __int64 v2022; // x1
  __int64 v2023; // x2
  EventItemDisplayMaster_o *v2024; // x20
  System_String_array **v2025; // x2
  System_String_array **v2026; // x3
  System_Boolean_array **v2027; // x4
  System_Int32_array **v2028; // x5
  System_Int32_array *v2029; // x6
  System_Int32_array *v2030; // x7
  __int64 v2031; // x1
  __int64 v2032; // x2
  EventItemDisplayGroupMaster_o *v2033; // x20
  System_String_array **v2034; // x2
  System_String_array **v2035; // x3
  System_Boolean_array **v2036; // x4
  System_Int32_array **v2037; // x5
  System_Int32_array *v2038; // x6
  System_Int32_array *v2039; // x7
  __int64 v2040; // x1
  __int64 v2041; // x2
  EventItemDisplayReleaseMaster_o *v2042; // x20
  System_String_array **v2043; // x2
  System_String_array **v2044; // x3
  System_Boolean_array **v2045; // x4
  System_Int32_array **v2046; // x5
  System_Int32_array *v2047; // x6
  System_Int32_array *v2048; // x7
  __int64 v2049; // x1
  __int64 v2050; // x2
  EventTutorialMaster_o *v2051; // x20
  System_String_array **v2052; // x2
  System_String_array **v2053; // x3
  System_Boolean_array **v2054; // x4
  System_Int32_array **v2055; // x5
  System_Int32_array *v2056; // x6
  System_Int32_array *v2057; // x7
  __int64 v2058; // x1
  __int64 v2059; // x2
  EventTutorialCondMaster_o *v2060; // x20
  System_String_array **v2061; // x2
  System_String_array **v2062; // x3
  System_Boolean_array **v2063; // x4
  System_Int32_array **v2064; // x5
  System_Int32_array *v2065; // x6
  System_Int32_array *v2066; // x7
  __int64 v2067; // x1
  __int64 v2068; // x2
  VoiceReleaseMaster_o *v2069; // x20
  System_String_array **v2070; // x2
  System_String_array **v2071; // x3
  System_Boolean_array **v2072; // x4
  System_Int32_array **v2073; // x5
  System_Int32_array *v2074; // x6
  System_Int32_array *v2075; // x7
  __int64 v2076; // x1
  __int64 v2077; // x2
  EventSuperBossMaster_o *v2078; // x20
  System_String_array **v2079; // x2
  System_String_array **v2080; // x3
  System_Boolean_array **v2081; // x4
  System_Int32_array **v2082; // x5
  System_Int32_array *v2083; // x6
  System_Int32_array *v2084; // x7
  __int64 v2085; // x1
  __int64 v2086; // x2
  UserSuperBossMaster_o *v2087; // x20
  System_String_array **v2088; // x2
  System_String_array **v2089; // x3
  System_Boolean_array **v2090; // x4
  System_Int32_array **v2091; // x5
  System_Int32_array *v2092; // x6
  System_Int32_array *v2093; // x7
  __int64 v2094; // x1
  __int64 v2095; // x2
  QuestScriptMaster_o *v2096; // x20
  System_String_array **v2097; // x2
  System_String_array **v2098; // x3
  System_Boolean_array **v2099; // x4
  System_Int32_array **v2100; // x5
  System_Int32_array *v2101; // x6
  System_Int32_array *v2102; // x7
  __int64 v2103; // x1
  __int64 v2104; // x2
  QuestScriptReleaseMaster_o *v2105; // x20
  System_String_array **v2106; // x2
  System_String_array **v2107; // x3
  System_Boolean_array **v2108; // x4
  System_Int32_array **v2109; // x5
  System_Int32_array *v2110; // x6
  System_Int32_array *v2111; // x7
  __int64 v2112; // x1
  __int64 v2113; // x2
  MaterialFolderMaster_o *v2114; // x20
  System_String_array **v2115; // x2
  System_String_array **v2116; // x3
  System_Boolean_array **v2117; // x4
  System_Int32_array **v2118; // x5
  System_Int32_array *v2119; // x6
  System_Int32_array *v2120; // x7
  __int64 v2121; // x1
  __int64 v2122; // x2
  RestrictionMaster_o *v2123; // x20
  System_String_array **v2124; // x2
  System_String_array **v2125; // x3
  System_Boolean_array **v2126; // x4
  System_Int32_array **v2127; // x5
  System_Int32_array *v2128; // x6
  System_Int32_array *v2129; // x7
  __int64 v2130; // x1
  __int64 v2131; // x2
  QuestRestrictionMaster_o *v2132; // x20
  System_String_array **v2133; // x2
  System_String_array **v2134; // x3
  System_Boolean_array **v2135; // x4
  System_Int32_array **v2136; // x5
  System_Int32_array *v2137; // x6
  System_Int32_array *v2138; // x7
  __int64 v2139; // x1
  __int64 v2140; // x2
  ServantVoiceRelationMaster_o *v2141; // x20
  System_String_array **v2142; // x2
  System_String_array **v2143; // x3
  System_Boolean_array **v2144; // x4
  System_Int32_array **v2145; // x5
  System_Int32_array *v2146; // x6
  System_Int32_array *v2147; // x7
  __int64 v2148; // x1
  __int64 v2149; // x2
  ShopDetailMaster_o *v2150; // x20
  System_String_array **v2151; // x2
  System_String_array **v2152; // x3
  System_Boolean_array **v2153; // x4
  System_Int32_array **v2154; // x5
  System_Int32_array *v2155; // x6
  System_Int32_array *v2156; // x7
  __int64 v2157; // x1
  __int64 v2158; // x2
  ServantScriptAddMaster_o *v2159; // x20
  System_String_array **v2160; // x2
  System_String_array **v2161; // x3
  System_Boolean_array **v2162; // x4
  System_Int32_array **v2163; // x5
  System_Int32_array *v2164; // x6
  System_Int32_array *v2165; // x7
  __int64 v2166; // x1
  __int64 v2167; // x2
  CombineMaster_o *v2168; // x20
  System_String_array **v2169; // x2
  System_String_array **v2170; // x3
  System_Boolean_array **v2171; // x4
  System_Int32_array **v2172; // x5
  System_Int32_array *v2173; // x6
  System_Int32_array *v2174; // x7
  __int64 v2175; // x0
  __int64 v2176; // x0
  __int64 v2177; // x0
  __int64 v2178; // x0
  __int64 v2179; // x0
  __int64 v2180; // x0

  if ( (byte_4216093 & 1) == 0 )
  {
    sub_B0D8A4(&AccessaryMaster_TypeInfo, v1);
    sub_B0D8A4(&AdCheckPointMaster_TypeInfo, v2);
    sub_B0D8A4(&AiActMaster_TypeInfo, v3);
    sub_B0D8A4(&AiFieldMaster_TypeInfo, v4);
    sub_B0D8A4(&AiMaster_TypeInfo, v5);
    sub_B0D8A4(&AreaMaster_TypeInfo, v6);
    sub_B0D8A4(&AssistMaster_TypeInfo, v7);
    sub_B0D8A4(&AttriMaster_TypeInfo, v8);
    sub_B0D8A4(&AttriRelationMaster_TypeInfo, v9);
    sub_B0D8A4(&AuraEffectMaster_TypeInfo, v10);
    sub_B0D8A4(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_B0D8A4(&BankShopMaster_TypeInfo, v12);
    sub_B0D8A4(&BannerAddMaster_TypeInfo, v13);
    sub_B0D8A4(&BannerMaster_TypeInfo, v14);
    sub_B0D8A4(&BattleBgMaster_TypeInfo, v15);
    sub_B0D8A4(&BattleMasterImageMaster_TypeInfo, v16);
    sub_B0D8A4(&BattleMaster_TypeInfo, v17);
    sub_B0D8A4(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_B0D8A4(&BattleMessageMaster_TypeInfo, v19);
    sub_B0D8A4(&BeforeBirthDayMaster_TypeInfo, v20);
    sub_B0D8A4(&BgmMaster_TypeInfo, v21);
    sub_B0D8A4(&BgmReleaseMaster_TypeInfo, v22);
    sub_B0D8A4(&BlankEarthSpotMaster_TypeInfo, v23);
    sub_B0D8A4(&BlankEarthSpotNavimenuMaster_TypeInfo, v24);
    sub_B0D8A4(&BoardMessageMaster_TypeInfo, v25);
    sub_B0D8A4(&BoardMessageReleaseMaster_TypeInfo, v26);
    sub_B0D8A4(&BoostMaster_TypeInfo, v27);
    sub_B0D8A4(&BoxGachaBaseDetailMaster_TypeInfo, v28);
    sub_B0D8A4(&BoxGachaBaseMaster_TypeInfo, v29);
    sub_B0D8A4(&BoxGachaHistoryMaster_TypeInfo, v30);
    sub_B0D8A4(&BoxGachaMaster_TypeInfo, v31);
    sub_B0D8A4(&BoxGachaTalkMaster_TypeInfo, v32);
    sub_B0D8A4(&BuffConvertMaster_TypeInfo, v33);
    sub_B0D8A4(&BuffMaster_TypeInfo, v34);
    sub_B0D8A4(&BuffTypeDetailMaster_TypeInfo, v35);
    sub_B0D8A4(&CampaignInfoMaster_TypeInfo, v36);
    sub_B0D8A4(&CardMaster_TypeInfo, v37);
    sub_B0D8A4(&ClassBoardBaseMaster_TypeInfo, v38);
    sub_B0D8A4(&ClassBoardClassMaster_TypeInfo, v39);
    sub_B0D8A4(&ClassBoardCommandSpellMaster_TypeInfo, v40);
    sub_B0D8A4(&ClassBoardLineMaster_TypeInfo, v41);
    sub_B0D8A4(&ClassBoardLockMaster_TypeInfo, v42);
    sub_B0D8A4(&ClassBoardSquareMaster_TypeInfo, v43);
    sub_B0D8A4(&ClassRelationMaster_TypeInfo, v44);
    sub_B0D8A4(&ClassRelationOverwriteMaster_TypeInfo, v45);
    sub_B0D8A4(&ClosedMessageMaster_TypeInfo, v46);
    sub_B0D8A4(&CombineAppendPassiveSkillMaster_TypeInfo, v47);
    sub_B0D8A4(&CombineCostumeMaster_TypeInfo, v48);
    sub_B0D8A4(&CombineLimitGiftMaster_TypeInfo, v49);
    sub_B0D8A4(&CombineLimitMaster_TypeInfo, v50);
    sub_B0D8A4(&CombineLimitReleaseMaster_TypeInfo, v51);
    sub_B0D8A4(&CombineMaster_TypeInfo, v52);
    sub_B0D8A4(&CombineMaterialMaster_TypeInfo, v53);
    sub_B0D8A4(&CombineQpMaster_TypeInfo, v54);
    sub_B0D8A4(&CombineQpSvtEquipMaster_TypeInfo, v55);
    sub_B0D8A4(&CombineSkillMaster_TypeInfo, v56);
    sub_B0D8A4(&CombineTdMaster_TypeInfo, v57);
    sub_B0D8A4(&CommandCardRankParamMaster_TypeInfo, v58);
    sub_B0D8A4(&CommandCodeCommentMaster_TypeInfo, v59);
    sub_B0D8A4(&CommandCodeMaster_TypeInfo, v60);
    sub_B0D8A4(&CommandCodeSkillMaster_TypeInfo, v61);
    sub_B0D8A4(&CommandCodeSkillReleaseMaster_TypeInfo, v62);
    sub_B0D8A4(&CommandSpellMaster_TypeInfo, v63);
    sub_B0D8A4(&CommonConsumeMaster_TypeInfo, v64);
    sub_B0D8A4(&CommonReleaseMaster_TypeInfo, v65);
    sub_B0D8A4(&CommonRestrictionMaster_TypeInfo, v66);
    sub_B0D8A4(&CompleteMissionMaster_TypeInfo, v67);
    sub_B0D8A4(&ConstantLongMaster_TypeInfo, v68);
    sub_B0D8A4(&ConstantMaster_TypeInfo, v69);
    sub_B0D8A4(&ConstantStrMaster_TypeInfo, v70);
    sub_B0D8A4(&CvMaster_TypeInfo, v71);
    sub_B0D8A4(&DataMasterBase___TypeInfo, v72);
    sub_B0D8A4(&DialogMessageMaster_TypeInfo, v73);
    sub_B0D8A4(&EffectMaster_TypeInfo, v74);
    sub_B0D8A4(&EnemyMstBattleMaster_TypeInfo, v75);
    sub_B0D8A4(&EnemyMstMaster_TypeInfo, v76);
    sub_B0D8A4(&EquipAddMaster_TypeInfo, v77);
    sub_B0D8A4(&EquipExpMaster_TypeInfo, v78);
    sub_B0D8A4(&EquipImageMaster_TypeInfo, v79);
    sub_B0D8A4(&EquipMaster_TypeInfo, v80);
    sub_B0D8A4(&EquipSkillMaster_TypeInfo, v81);
    sub_B0D8A4(&EventAddMaster_TypeInfo, v82);
    sub_B0D8A4(&EventBoardGameCellMaster_TypeInfo, v83);
    sub_B0D8A4(&EventBoardGameTokenMaster_TypeInfo, v84);
    sub_B0D8A4(&EventBoardGameTokenRewardMaster_TypeInfo, v85);
    sub_B0D8A4(&EventBonusFilterGroupInfoMaster_TypeInfo, v86);
    sub_B0D8A4(&EventBonusFilterGroupMemberMaster_TypeInfo, v87);
    sub_B0D8A4(&EventBonusFilterMaster_TypeInfo, v88);
    sub_B0D8A4(&EventBoostItemUsedMaster_TypeInfo, v89);
    sub_B0D8A4(&EventBossStatusUiMaster_TypeInfo, v90);
    sub_B0D8A4(&EventBuddyPointMaster_TypeInfo, v91);
    sub_B0D8A4(&EventBulletinBoardMaster_TypeInfo, v92);
    sub_B0D8A4(&EventBulletinBoardReleaseMaster_TypeInfo, v93);
    sub_B0D8A4(&EventCampaignMaster_TypeInfo, v94);
    sub_B0D8A4(&EventCampaignReleaseMaster_TypeInfo, v95);
    sub_B0D8A4(&EventCombineCostumeMaster_TypeInfo, v96);
    sub_B0D8A4(&EventCombineMaster_TypeInfo, v97);
    sub_B0D8A4(&EventCommandAssistMaster_TypeInfo, v98);
    sub_B0D8A4(&EventConquestRewardMaster_TypeInfo, v99);
    sub_B0D8A4(&EventCooltimeRewardMaster_TypeInfo, v100);
    sub_B0D8A4(&EventDataLostBattleMaster_TypeInfo, v101);
    sub_B0D8A4(&EventDataLostBattleResetMaster_TypeInfo, v102);
    sub_B0D8A4(&EventDetailMaster_TypeInfo, v103);
    sub_B0D8A4(&EventDiggingBlockMaster_TypeInfo, v104);
    sub_B0D8A4(&EventDiggingMaster_TypeInfo, v105);
    sub_B0D8A4(&EventDiggingRewardMaster_TypeInfo, v106);
    sub_B0D8A4(&EventEquipSkillReleaseMaster_TypeInfo, v107);
    sub_B0D8A4(&EventExpeditionMaster_TypeInfo, v108);
    sub_B0D8A4(&EventExpeditionPieceMaster_TypeInfo, v109);
    sub_B0D8A4(&EventFactoryMaster_TypeInfo, v110);
    sub_B0D8A4(&EventFatigueRecoveryMaster_TypeInfo, v111);
    sub_B0D8A4(&EventFilterMaster_TypeInfo, v112);
    sub_B0D8A4(&EventFortificationDetailMaster_TypeInfo, v113);
    sub_B0D8A4(&EventFortificationMaster_TypeInfo, v114);
    sub_B0D8A4(&EventFortificationSvtMaster_TypeInfo, v115);
    sub_B0D8A4(&EventGroupMaster_TypeInfo, v116);
    sub_B0D8A4(&EventItemDisplayGroupMaster_TypeInfo, v117);
    sub_B0D8A4(&EventItemDisplayMaster_TypeInfo, v118);
    sub_B0D8A4(&EventItemDisplayReleaseMaster_TypeInfo, v119);
    sub_B0D8A4(&EventLocationCampaignMaster_TypeInfo, v120);
    sub_B0D8A4(&EventMaster_TypeInfo, v121);
    sub_B0D8A4(&EventMissionActionAddMaster_TypeInfo, v122);
    sub_B0D8A4(&EventMissionActionMaster_TypeInfo, v123);
    sub_B0D8A4(&EventMissionAddMaster_TypeInfo, v124);
    sub_B0D8A4(&EventMissionCondDetailMaster_TypeInfo, v125);
    sub_B0D8A4(&EventMissionConditionMaster_TypeInfo, v126);
    sub_B0D8A4(&EventMissionGroupMaster_TypeInfo, v127);
    sub_B0D8A4(&EventMissionMaster_TypeInfo, v128);
    sub_B0D8A4(&EventMuralMaster_TypeInfo, v129);
    sub_B0D8A4(&EventPanelMapDetailMaster_TypeInfo, v130);
    sub_B0D8A4(&EventPanelMapMaster_TypeInfo, v131);
    sub_B0D8A4(&EventPanelScanMaster_TypeInfo, v132);
    sub_B0D8A4(&EventPanelSpotMaster_TypeInfo, v133);
    sub_B0D8A4(&EventPointActivityMaster_TypeInfo, v134);
    sub_B0D8A4(&EventPointBuffMaster_TypeInfo, v135);
    sub_B0D8A4(&EventPointGroupAddMaster_TypeInfo, v136);
    sub_B0D8A4(&EventPointGroupMaster_TypeInfo, v137);
    sub_B0D8A4(&EventPointMaster_TypeInfo, v138);
    sub_B0D8A4(&EventPointUpperMaster_TypeInfo, v139);
    sub_B0D8A4(&EventPointUpperReleaseMaster_TypeInfo, v140);
    sub_B0D8A4(&EventProgressValueMaster_TypeInfo, v141);
    sub_B0D8A4(&EventQuestCooltimeMaster_TypeInfo, v142);
    sub_B0D8A4(&EventQuestMaster_TypeInfo, v143);
    sub_B0D8A4(&EventRaceMaster_TypeInfo, v144);
    sub_B0D8A4(&EventRaceResultMaster_TypeInfo, v145);
    sub_B0D8A4(&EventRaidMaster_TypeInfo, v146);
    sub_B0D8A4(&EventRandomMissionMaster_TypeInfo, v147);
    sub_B0D8A4(&EventRecipeGiftMaster_TypeInfo, v148);
    sub_B0D8A4(&EventRecipeMaster_TypeInfo, v149);
    sub_B0D8A4(&EventRewardBgMaster_TypeInfo, v150);
    sub_B0D8A4(&EventRewardExtraMaster_TypeInfo, v151);
    sub_B0D8A4(&EventRewardGuideReleaseMaster_TypeInfo, v152);
    sub_B0D8A4(&EventRewardMaster_TypeInfo, v153);
    sub_B0D8A4(&EventRewardSceneMaster_TypeInfo, v154);
    sub_B0D8A4(&EventRewardSceneReleaseMaster_TypeInfo, v155);
    sub_B0D8A4(&EventRewardSetMaster_TypeInfo, v156);
    sub_B0D8A4(&EventScriptMaster_TypeInfo, v157);
    sub_B0D8A4(&EventScriptReleaseMaster_TypeInfo, v158);
    sub_B0D8A4(&EventServantFatigueMaster_TypeInfo, v159);
    sub_B0D8A4(&EventServantMaster_TypeInfo, v160);
    sub_B0D8A4(&EventServantPointRankMaster_TypeInfo, v161);
    sub_B0D8A4(&EventStatusMaster_TypeInfo, v162);
    sub_B0D8A4(&EventStatusQuestMaster_TypeInfo, v163);
    sub_B0D8A4(&EventSuperBossMaster_TypeInfo, v164);
    sub_B0D8A4(&EventTowerMaster_TypeInfo, v165);
    sub_B0D8A4(&EventTowerRewardMaster_TypeInfo, v166);
    sub_B0D8A4(&EventTutorialCondMaster_TypeInfo, v167);
    sub_B0D8A4(&EventTutorialMaster_TypeInfo, v168);
    sub_B0D8A4(&EventUiMaster_TypeInfo, v169);
    sub_B0D8A4(&EventUiReleaseMaster_TypeInfo, v170);
    sub_B0D8A4(&EventUiValueMaster_TypeInfo, v171);
    sub_B0D8A4(&EventVoicePlayMaster_TypeInfo, v172);
    sub_B0D8A4(&FieldMotionMaster_TypeInfo, v173);
    sub_B0D8A4(&FriendshipMaster_TypeInfo, v174);
    sub_B0D8A4(&FriendshipQuestDialogInfoMaster_TypeInfo, v175);
    sub_B0D8A4(&FuncDispMaster_TypeInfo, v176);
    sub_B0D8A4(&FuncTypeDetailMaster_TypeInfo, v177);
    sub_B0D8A4(&FunctionCategoryMaster_TypeInfo, v178);
    sub_B0D8A4(&FunctionGroupMaster_TypeInfo, v179);
    sub_B0D8A4(&FunctionMaster_TypeInfo, v180);
    sub_B0D8A4(&GachaAppendMaster_TypeInfo, v181);
    sub_B0D8A4(&GachaBehaviorMaster_TypeInfo, v182);
    sub_B0D8A4(&GachaBonusSelectLineupMaster_TypeInfo, v183);
    sub_B0D8A4(&GachaBonusSelectMaster_TypeInfo, v184);
    sub_B0D8A4(&GachaDetailMaster_TypeInfo, v185);
    sub_B0D8A4(&GachaExtraGiftMaster_TypeInfo, v186);
    sub_B0D8A4(&GachaGroupMaster_TypeInfo, v187);
    sub_B0D8A4(&GachaImageMaster_TypeInfo, v188);
    sub_B0D8A4(&GachaMaster_TypeInfo, v189);
    sub_B0D8A4(&GachaReleaseMaster_TypeInfo, v190);
    sub_B0D8A4(&GachaStoryAdjustMaster_TypeInfo, v191);
    sub_B0D8A4(&GachaSubMaster_TypeInfo, v192);
    sub_B0D8A4(&GachaTicketMaster_TypeInfo, v193);
    sub_B0D8A4(&GiftAddMaster_TypeInfo, v194);
    sub_B0D8A4(&GiftDetailMaster_TypeInfo, v195);
    sub_B0D8A4(&GiftMaster_TypeInfo, v196);
    sub_B0D8A4(&GuideMaster_TypeInfo, v197);
    sub_B0D8A4(&HeelPortraitMaster_TypeInfo, v198);
    sub_B0D8A4(&IllustratorMaster_TypeInfo, v199);
    sub_B0D8A4(&IndividualityPersonalityMaster_TypeInfo, v200);
    sub_B0D8A4(&IndividualityPolicyMaster_TypeInfo, v201);
    sub_B0D8A4(&ItemMaster_TypeInfo, v202);
    sub_B0D8A4(&ItemSelectMaster_TypeInfo, v203);
    sub_B0D8A4(&LoginQuestMaster_TypeInfo, v204);
    sub_B0D8A4(&MapButtonMaster_TypeInfo, v205);
    sub_B0D8A4(&MapCondMaster_TypeInfo, v206);
    sub_B0D8A4(&MapGimmickLayerMaster_TypeInfo, v207);
    sub_B0D8A4(&MapGimmickMaster_TypeInfo, v208);
    sub_B0D8A4(&MapGimmickPathMaster_TypeInfo, v209);
    sub_B0D8A4(&MapGimmickPathReleaseMaster_TypeInfo, v210);
    sub_B0D8A4(&MapGimmickReleaseMaster_TypeInfo, v211);
    sub_B0D8A4(&MapLayerMaster_TypeInfo, v212);
    sub_B0D8A4(&MapMaster_TypeInfo, v213);
    sub_B0D8A4(&MaterialFolderMaster_TypeInfo, v214);
    sub_B0D8A4(&MstMissionDisplayInfoMaster_TypeInfo, v215);
    sub_B0D8A4(&MstMissionMaster_TypeInfo, v216);
    sub_B0D8A4(&MyRoomAddMaster_TypeInfo, v217);
    sub_B0D8A4(&NewsMaster_TypeInfo, v218);
    sub_B0D8A4(&NotEndEventMissionFixMaster_TypeInfo, v219);
    sub_B0D8A4(&NpcFollowerMaster_TypeInfo, v220);
    sub_B0D8A4(&NpcFollowerReleaseMaster_TypeInfo, v221);
    sub_B0D8A4(&NpcServantEquipMaster_TypeInfo, v222);
    sub_B0D8A4(&NpcServantFollowerIndividualityMaster_TypeInfo, v223);
    sub_B0D8A4(&NpcServantFollowerMaster_TypeInfo, v224);
    sub_B0D8A4(&OpeningMovieMaster_TypeInfo, v225);
    sub_B0D8A4(&OtherUserGameMaster_TypeInfo, v226);
    sub_B0D8A4(&PartialMaintenanceMaster_TypeInfo, v227);
    sub_B0D8A4(&PickupUserFollowerMaster_TypeInfo, v228);
    sub_B0D8A4(&PrivilegeMaster_TypeInfo, v229);
    sub_B0D8A4(&QuestAddMaster_TypeInfo, v230);
    sub_B0D8A4(&QuestBehaviorMaster_TypeInfo, v231);
    sub_B0D8A4(&QuestConsumeItemMaster_TypeInfo, v232);
    sub_B0D8A4(&QuestDateRangeMaster_TypeInfo, v233);
    sub_B0D8A4(&QuestGroupMaster_TypeInfo, v234);
    sub_B0D8A4(&QuestHintMaster_TypeInfo, v235);
    sub_B0D8A4(&QuestMaster_TypeInfo, v236);
    sub_B0D8A4(&QuestMessageMaster_TypeInfo, v237);
    sub_B0D8A4(&QuestPhaseDetailAddMaster_TypeInfo, v238);
    sub_B0D8A4(&QuestPhaseDetailMaster_TypeInfo, v239);
    sub_B0D8A4(&QuestPhaseMaster_TypeInfo, v240);
    sub_B0D8A4(&QuestPickupMaster_TypeInfo, v241);
    sub_B0D8A4(&QuestRacePointMaster_TypeInfo, v242);
    sub_B0D8A4(&QuestRandomGroupMaster_TypeInfo, v243);
    sub_B0D8A4(&QuestReleaseMaster_TypeInfo, v244);
    sub_B0D8A4(&QuestReleaseOverwriteMaster_TypeInfo, v245);
    sub_B0D8A4(&QuestResetMaster_TypeInfo, v246);
    sub_B0D8A4(&QuestRestrictionInfoMaster_TypeInfo, v247);
    sub_B0D8A4(&QuestRestrictionMaster_TypeInfo, v248);
    sub_B0D8A4(&QuestScriptBranchMaterialMaster_TypeInfo, v249);
    sub_B0D8A4(&QuestScriptMaster_TypeInfo, v250);
    sub_B0D8A4(&QuestScriptMaterialNextMaster_TypeInfo, v251);
    sub_B0D8A4(&QuestScriptMaterialOverwriteMaster_TypeInfo, v252);
    sub_B0D8A4(&QuestScriptReleaseMaster_TypeInfo, v253);
    sub_B0D8A4(&QuestSpotReleaseMaster_TypeInfo, v254);
    sub_B0D8A4(&RecoverMaster_TypeInfo, v255);
    sub_B0D8A4(&ReprintStageMaster_TypeInfo, v256);
    sub_B0D8A4(&RestrictionBaseMaster_TypeInfo, v257);
    sub_B0D8A4(&RestrictionMaster_TypeInfo, v258);
    sub_B0D8A4(&RestrictionMessageMaster_TypeInfo, v259);
    sub_B0D8A4(&RestrictionSlotDetailMaster_TypeInfo, v260);
    sub_B0D8A4(&RestrictionSlotMaster_TypeInfo, v261);
    sub_B0D8A4(&RestrictionWholeMaster_TypeInfo, v262);
    sub_B0D8A4(&ServantAddMaster_TypeInfo, v263);
    sub_B0D8A4(&ServantAnimationOverwriteMaster_TypeInfo, v264);
    sub_B0D8A4(&ServantAppendPassiveSkillMaster_TypeInfo, v265);
    sub_B0D8A4(&ServantCardAddMaster_TypeInfo, v266);
    sub_B0D8A4(&ServantCardMaster_TypeInfo, v267);
    sub_B0D8A4(&ServantChangeMaster_TypeInfo, v268);
    sub_B0D8A4(&ServantClassMaster_TypeInfo, v269);
    sub_B0D8A4(&ServantCollectionMaster_TypeInfo, v270);
    sub_B0D8A4(&ServantCommandCodeUnlockMaster_TypeInfo, v271);
    sub_B0D8A4(&ServantCommentAddMaster_TypeInfo, v272);
    sub_B0D8A4(&ServantCommentMaster_TypeInfo, v273);
    sub_B0D8A4(&ServantCostumeMaster_TypeInfo, v274);
    sub_B0D8A4(&ServantCostumeReleaseMaster_TypeInfo, v275);
    sub_B0D8A4(&ServantExceedMaster_TypeInfo, v276);
    sub_B0D8A4(&ServantExpMaster_TypeInfo, v277);
    sub_B0D8A4(&ServantFilterMaster_TypeInfo, v278);
    sub_B0D8A4(&ServantFlagMaster_TypeInfo, v279);
    sub_B0D8A4(&ServantFlagReleaseMaster_TypeInfo, v280);
    sub_B0D8A4(&ServantGroupMaster_TypeInfo, v281);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v282);
    sub_B0D8A4(&ServantLimitAddMaster_TypeInfo, v283);
    sub_B0D8A4(&ServantLimitImageMaster_TypeInfo, v284);
    sub_B0D8A4(&ServantLimitMaster_TypeInfo, v285);
    sub_B0D8A4(&ServantLimitSpoilerProtectionMaster_TypeInfo, v286);
    sub_B0D8A4(&ServantLvDetailMaster_TypeInfo, v287);
    sub_B0D8A4(&ServantMaster_TypeInfo, v288);
    sub_B0D8A4(&ServantMaterialFolderMaster_TypeInfo, v289);
    sub_B0D8A4(&ServantOverwriteMaster_TypeInfo, v290);
    sub_B0D8A4(&ServantPassiveSkillMaster_TypeInfo, v291);
    sub_B0D8A4(&ServantPassiveSkillReleaseMaster_TypeInfo, v292);
    sub_B0D8A4(&ServantProfileMaster_TypeInfo, v293);
    sub_B0D8A4(&ServantProfilePushMaster_TypeInfo, v294);
    sub_B0D8A4(&ServantRarityMaster_TypeInfo, v295);
    sub_B0D8A4(&ServantScriptAddMaster_TypeInfo, v296);
    sub_B0D8A4(&ServantScriptMaster_TypeInfo, v297);
    sub_B0D8A4(&ServantScriptMultipleMaster_TypeInfo, v298);
    sub_B0D8A4(&ServantSkillMaster_TypeInfo, v299);
    sub_B0D8A4(&ServantSkillReleaseMaster_TypeInfo, v300);
    sub_B0D8A4(&ServantTreasureDeviceAddMaster_TypeInfo, v301);
    sub_B0D8A4(&ServantTreasureDeviceDamageMaster_TypeInfo, v302);
    sub_B0D8A4(&ServantTreasureDeviceReleaseMaster_TypeInfo, v303);
    sub_B0D8A4(&ServantTreasureDvcMaster_TypeInfo, v304);
    sub_B0D8A4(&ServantVoiceMaster_TypeInfo, v305);
    sub_B0D8A4(&ServantVoicePatternMaster_TypeInfo, v306);
    sub_B0D8A4(&ServantVoiceRelationMaster_TypeInfo, v307);
    sub_B0D8A4(&SetItemMaster_TypeInfo, v308);
    sub_B0D8A4(&ShopActionMaster_TypeInfo, v309);
    sub_B0D8A4(&ShopDetailMaster_TypeInfo, v310);
    sub_B0D8A4(&ShopGroupMaster_TypeInfo, v311);
    sub_B0D8A4(&ShopMaster_TypeInfo, v312);
    sub_B0D8A4(&ShopReleaseMaster_TypeInfo, v313);
    sub_B0D8A4(&ShopScriptMaster_TypeInfo, v314);
    sub_B0D8A4(&SkillAddMaster_TypeInfo, v315);
    sub_B0D8A4(&SkillDetailMaster_TypeInfo, v316);
    sub_B0D8A4(&SkillGroupMaster_TypeInfo, v317);
    sub_B0D8A4(&SkillGroupOverwriteMaster_TypeInfo, v318);
    sub_B0D8A4(&SkillIndividualityMaster_TypeInfo, v319);
    sub_B0D8A4(&SkillLvMaster_TypeInfo, v320);
    sub_B0D8A4(&SkillMaster_TypeInfo, v321);
    sub_B0D8A4(&SpotAddMaster_TypeInfo, v322);
    sub_B0D8A4(&SpotImageMaster_TypeInfo, v323);
    sub_B0D8A4(&SpotLayerMaster_TypeInfo, v324);
    sub_B0D8A4(&SpotMaster_TypeInfo, v325);
    sub_B0D8A4(&SpotPathMaster_TypeInfo, v326);
    sub_B0D8A4(&SpotRoadMaster_TypeInfo, v327);
    sub_B0D8A4(&StageMaster_TypeInfo, v328);
    sub_B0D8A4(&StatusEffectPosOverwriteMaster_TypeInfo, v329);
    sub_B0D8A4(&StoneShopMaster_TypeInfo, v330);
    sub_B0D8A4(&SubEquipMaster_TypeInfo, v331);
    sub_B0D8A4(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v332);
    sub_B0D8A4(&SvtCoinMaster_TypeInfo, v333);
    sub_B0D8A4(&SvtMaterialTdMaster_TypeInfo, v334);
    sub_B0D8A4(&SvtMultiPortraitMaster_TypeInfo, v335);
    sub_B0D8A4(&TblFriendMaster_TypeInfo, v336);
    sub_B0D8A4(&TblUserMaster_TypeInfo, v337);
    sub_B0D8A4(&TelopMaster_TypeInfo, v338);
    sub_B0D8A4(&TerminalOverwriteMaster_TypeInfo, v339);
    sub_B0D8A4(&TipsBattleMaster_TypeInfo, v340);
    sub_B0D8A4(&TotalBoxGachaMaster_TypeInfo, v341);
    sub_B0D8A4(&TotalEventPointMaster_TypeInfo, v342);
    sub_B0D8A4(&TotalEventRaceMaster_TypeInfo, v343);
    sub_B0D8A4(&TotalEventRaidMaster_TypeInfo, v344);
    sub_B0D8A4(&TotalLoginMaster_TypeInfo, v345);
    sub_B0D8A4(&TreasureBoxGiftMaster_TypeInfo, v346);
    sub_B0D8A4(&TreasureBoxMaster_TypeInfo, v347);
    sub_B0D8A4(&TreasureBoxTalkMaster_TypeInfo, v348);
    sub_B0D8A4(&TreasureDeviceSequenceWeightMaster_TypeInfo, v349);
    sub_B0D8A4(&TreasureDvcDetailMaster_TypeInfo, v350);
    sub_B0D8A4(&TreasureDvcLvMaster_TypeInfo, v351);
    sub_B0D8A4(&TreasureDvcMaster_TypeInfo, v352);
    sub_B0D8A4(&UpdateProfileDialogInfoMaster_TypeInfo, v353);
    sub_B0D8A4(&UserAccessaryMaster_TypeInfo, v354);
    sub_B0D8A4(&UserBlacklistMaster_TypeInfo, v355);
    sub_B0D8A4(&UserBoxGachaMaster_TypeInfo, v356);
    sub_B0D8A4(&UserClassBoardSquareMaster_TypeInfo, v357);
    sub_B0D8A4(&UserCoinRoomMaster_TypeInfo, v358);
    sub_B0D8A4(&UserCombineExpMaster_TypeInfo, v359);
    sub_B0D8A4(&UserCommandCodeCollectionMaster_TypeInfo, v360);
    sub_B0D8A4(&UserCommandCodeMaster_TypeInfo, v361);
    sub_B0D8A4(&UserContinueMaster_TypeInfo, v362);
    sub_B0D8A4(&UserDeckMaster_TypeInfo, v363);
    sub_B0D8A4(&UserDeleteReservationMaster_TypeInfo, v364);
    sub_B0D8A4(&UserEquipMaster_TypeInfo, v365);
    sub_B0D8A4(&UserEventAlloutBattleMaster_TypeInfo, v366);
    sub_B0D8A4(&UserEventBoardGameTokenMaster_TypeInfo, v367);
    sub_B0D8A4(&UserEventCooltimeRewardMaster_TypeInfo, v368);
    sub_B0D8A4(&UserEventDataLostMaster_TypeInfo, v369);
    sub_B0D8A4(&UserEventDeckMaster_TypeInfo, v370);
    sub_B0D8A4(&UserEventDiggingMaster_TypeInfo, v371);
    sub_B0D8A4(&UserEventExpeditionMaster_TypeInfo, v372);
    sub_B0D8A4(&UserEventFortificationMaster_TypeInfo, v373);
    sub_B0D8A4(&UserEventMapMaster_TypeInfo, v374);
    sub_B0D8A4(&UserEventMaster_TypeInfo, v375);
    sub_B0D8A4(&UserEventMissionCondDetailMaster_TypeInfo, v376);
    sub_B0D8A4(&UserEventMissionFixMaster_TypeInfo, v377);
    sub_B0D8A4(&UserEventMissionMaster_TypeInfo, v378);
    sub_B0D8A4(&UserEventPointMaster_TypeInfo, v379);
    sub_B0D8A4(&UserEventQuestCooltimeMaster_TypeInfo, v380);
    sub_B0D8A4(&UserEventRaceMaster_TypeInfo, v381);
    sub_B0D8A4(&UserEventRaidMaster_TypeInfo, v382);
    sub_B0D8A4(&UserEventRandomMissionMaster_TypeInfo, v383);
    sub_B0D8A4(&UserEventServantFatigueMaster_TypeInfo, v384);
    sub_B0D8A4(&UserEventServantPointMaster_TypeInfo, v385);
    sub_B0D8A4(&UserEventSpotMaster_TypeInfo, v386);
    sub_B0D8A4(&UserExchangeSvtMaster_TypeInfo, v387);
    sub_B0D8A4(&UserExpMaster_TypeInfo, v388);
    sub_B0D8A4(&UserFollowMaster_TypeInfo, v389);
    sub_B0D8A4(&UserFollowerMaster_TypeInfo, v390);
    sub_B0D8A4(&UserFormationMaster_TypeInfo, v391);
    sub_B0D8A4(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v392);
    sub_B0D8A4(&UserFriendRequestHistoryMaster_TypeInfo, v393);
    sub_B0D8A4(&UserGachaDrawLogMaster_TypeInfo, v394);
    sub_B0D8A4(&UserGachaExtraCountMaster_TypeInfo, v395);
    sub_B0D8A4(&UserGachaHistoryMaster_TypeInfo, v396);
    sub_B0D8A4(&UserGachaMaster_TypeInfo, v397);
    sub_B0D8A4(&UserGameCommonMaster_TypeInfo, v398);
    sub_B0D8A4(&UserGameMaster_TypeInfo, v399);
    sub_B0D8A4(&UserHeelPortraitMaster_TypeInfo, v400);
    sub_B0D8A4(&UserItemMaster_TypeInfo, v401);
    sub_B0D8A4(&UserLoginMaster_TypeInfo, v402);
    sub_B0D8A4(&UserMaster_TypeInfo, v403);
    sub_B0D8A4(&UserNpcSvtRecordMaster_TypeInfo, v404);
    sub_B0D8A4(&UserPresentBoxMaster_TypeInfo, v405);
    sub_B0D8A4(&UserPresentHistoryMaster_TypeInfo, v406);
    sub_B0D8A4(&UserPrivilegeMaster_TypeInfo, v407);
    sub_B0D8A4(&UserQuestInfoMaster_TypeInfo, v408);
    sub_B0D8A4(&UserQuestMaster_TypeInfo, v409);
    sub_B0D8A4(&UserQuestRecordMaster_TypeInfo, v410);
    sub_B0D8A4(&UserQuestRouteMaster_TypeInfo, v411);
    sub_B0D8A4(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v412);
    sub_B0D8A4(&UserServantAppendPassiveSkillMaster_TypeInfo, v413);
    sub_B0D8A4(&UserServantCollectionMaster_TypeInfo, v414);
    sub_B0D8A4(&UserServantCommandCardMaster_TypeInfo, v415);
    sub_B0D8A4(&UserServantCommandCodeMaster_TypeInfo, v416);
    sub_B0D8A4(&UserServantLeaderMaster_TypeInfo, v417);
    sub_B0D8A4(&UserServantMaster_TypeInfo, v418);
    sub_B0D8A4(&UserServantStorageMaster_TypeInfo, v419);
    sub_B0D8A4(&UserServantVoicePlayedMaster_TypeInfo, v420);
    sub_B0D8A4(&UserShopMaster_TypeInfo, v421);
    sub_B0D8A4(&UserSubEquipMaster_TypeInfo, v422);
    sub_B0D8A4(&UserSuperBossMaster_TypeInfo, v423);
    sub_B0D8A4(&UserSupportDeckMaster_TypeInfo, v424);
    sub_B0D8A4(&UserSvtCoinMaster_TypeInfo, v425);
    sub_B0D8A4(&ViewEnemyMaster_TypeInfo, v426);
    sub_B0D8A4(&ViewQuestEnemyInfoMaster_TypeInfo, v427);
    sub_B0D8A4(&ViewQuestInfoMaster_TypeInfo, v428);
    sub_B0D8A4(&ViewWaveEnemyMaster_TypeInfo, v429);
    sub_B0D8A4(&VoiceClosedMessageMaster_TypeInfo, v430);
    sub_B0D8A4(&VoiceCondMaster_TypeInfo, v431);
    sub_B0D8A4(&VoiceMaster_TypeInfo, v432);
    sub_B0D8A4(&VoiceMaterialCondMaster_TypeInfo, v433);
    sub_B0D8A4(&VoicePlayCondMaster_TypeInfo, v434);
    sub_B0D8A4(&VoicePlayGroupMaster_TypeInfo, v435);
    sub_B0D8A4(&VoiceReleaseMaster_TypeInfo, v436);
    sub_B0D8A4(&WarAddMaster_TypeInfo, v437);
    sub_B0D8A4(&WarBoardAIMaster_TypeInfo, v438);
    sub_B0D8A4(&WarBoardActionPointClassMaster_TypeInfo, v439);
    sub_B0D8A4(&WarBoardActionPointMaster_TypeInfo, v440);
    sub_B0D8A4(&WarBoardActionTrendConditionMaster_TypeInfo, v441);
    sub_B0D8A4(&WarBoardActionTrendGroupMaster_TypeInfo, v442);
    sub_B0D8A4(&WarBoardActionTrendMaster_TypeInfo, v443);
    sub_B0D8A4(&WarBoardCommonReleaseMaster_TypeInfo, v444);
    sub_B0D8A4(&WarBoardDataMaster_TypeInfo, v445);
    sub_B0D8A4(&WarBoardEffectMaster_TypeInfo, v446);
    sub_B0D8A4(&WarBoardEventMaster_TypeInfo, v447);
    sub_B0D8A4(&WarBoardEventScriptMaster_TypeInfo, v448);
    sub_B0D8A4(&WarBoardFutureActionTrendMaster_TypeInfo, v449);
    sub_B0D8A4(&WarBoardIndividualityClassMaster_TypeInfo, v450);
    sub_B0D8A4(&WarBoardItemMaster_TypeInfo, v451);
    sub_B0D8A4(&WarBoardMaster_TypeInfo, v452);
    sub_B0D8A4(&WarBoardMessageMaster_TypeInfo, v453);
    sub_B0D8A4(&WarBoardMessageScriptMaster_TypeInfo, v454);
    sub_B0D8A4(&WarBoardOnboardSkillMaster_TypeInfo, v455);
    sub_B0D8A4(&WarBoardPartySkillMaster_TypeInfo, v456);
    sub_B0D8A4(&WarBoardQuestMaster_TypeInfo, v457);
    sub_B0D8A4(&WarBoardRatingBaseMaster_TypeInfo, v458);
    sub_B0D8A4(&WarBoardRatingOffsetGroupMaster_TypeInfo, v459);
    sub_B0D8A4(&WarBoardRatingOffsetMaster_TypeInfo, v460);
    sub_B0D8A4(&WarBoardReinforcementsMaster_TypeInfo, v461);
    sub_B0D8A4(&WarBoardRoadMaster_TypeInfo, v462);
    sub_B0D8A4(&WarBoardSquareIndexGroupMaster_TypeInfo, v463);
    sub_B0D8A4(&WarBoardSquareMaster_TypeInfo, v464);
    sub_B0D8A4(&WarBoardStageBossMaster_TypeInfo, v465);
    sub_B0D8A4(&WarBoardStageDetailMaster_TypeInfo, v466);
    sub_B0D8A4(&WarBoardStageLayoutMaster_TypeInfo, v467);
    sub_B0D8A4(&WarBoardStageMaster_TypeInfo, v468);
    sub_B0D8A4(&WarBoardStageNpcMaster_TypeInfo, v469);
    sub_B0D8A4(&WarBoardStagePieceDetailMaster_TypeInfo, v470);
    sub_B0D8A4(&WarBoardStageReinforcementsMaster_TypeInfo, v471);
    sub_B0D8A4(&WarBoardStageWallMaster_TypeInfo, v472);
    sub_B0D8A4(&WarBoardTacticalTrendMaster_TypeInfo, v473);
    sub_B0D8A4(&WarBoardTreasureMaster_TypeInfo, v474);
    sub_B0D8A4(&WarGroupMaster_TypeInfo, v475);
    sub_B0D8A4(&WarMaster_TypeInfo, v476);
    sub_B0D8A4(&WarQuestSelectionMaster_TypeInfo, v477);
    byte_4216093 = 1;
  }
  v478 = sub_B0D8BC(DataMasterBase___TypeInfo, 476LL);
  v481 = (ServantMaster_o *)sub_B0D974(ServantMaster_TypeInfo, v479, v480);
  ServantMaster___ctor(v481, 0LL);
  if ( !v478 )
    sub_B0D97C(v482);
  if ( !v481 || (v482 = sub_B0D964(v481, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
  {
    v489 = (_DWORD *)(v478 + 24);
    if ( !*(_DWORD *)(v478 + 24) )
      goto LABEL_571;
    *(_QWORD *)(v478 + 32) = v481;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 32),
      (System_Int32_array **)v481,
      v483,
      v484,
      v485,
      v486,
      v487,
      v488);
    v492 = (ServantClassMaster_o *)sub_B0D974(ServantClassMaster_TypeInfo, v490, v491);
    ServantClassMaster___ctor(v492, 0LL);
    if ( v492 )
    {
      v482 = sub_B0D964(v492, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 1u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 40) = v492;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 40),
      (System_Int32_array **)v492,
      v493,
      v494,
      v495,
      v496,
      v497,
      v498);
    v501 = (ServantCommentMaster_o *)sub_B0D974(ServantCommentMaster_TypeInfo, v499, v500);
    ServantCommentMaster___ctor(v501, 0LL);
    if ( v501 )
    {
      v482 = sub_B0D964(v501, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 2u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 48) = v501;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 48),
      (System_Int32_array **)v501,
      v502,
      v503,
      v504,
      v505,
      v506,
      v507);
    v510 = (ServantProfileMaster_o *)sub_B0D974(ServantProfileMaster_TypeInfo, v508, v509);
    ServantProfileMaster___ctor(v510, 0LL);
    if ( v510 )
    {
      v482 = sub_B0D964(v510, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 3u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 56) = v510;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 56),
      (System_Int32_array **)v510,
      v511,
      v512,
      v513,
      v514,
      v515,
      v516);
    v519 = (WarMaster_o *)sub_B0D974(WarMaster_TypeInfo, v517, v518);
    WarMaster___ctor(v519, 0LL);
    if ( v519 )
    {
      v482 = sub_B0D964(v519, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 4u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 64) = v519;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 64),
      (System_Int32_array **)v519,
      v520,
      v521,
      v522,
      v523,
      v524,
      v525);
    v528 = (UserMaster_o *)sub_B0D974(UserMaster_TypeInfo, v526, v527);
    UserMaster___ctor(v528, 0LL);
    if ( v528 )
    {
      v482 = sub_B0D964(v528, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 5u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 72) = v528;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 72),
      (System_Int32_array **)v528,
      v529,
      v530,
      v531,
      v532,
      v533,
      v534);
    v537 = (UserGameMaster_o *)sub_B0D974(UserGameMaster_TypeInfo, v535, v536);
    UserGameMaster___ctor(v537, 0LL);
    if ( v537 )
    {
      v482 = sub_B0D964(v537, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 6u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 80) = v537;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 80),
      (System_Int32_array **)v537,
      v538,
      v539,
      v540,
      v541,
      v542,
      v543);
    v546 = (TblUserMaster_o *)sub_B0D974(TblUserMaster_TypeInfo, v544, v545);
    TblUserMaster___ctor(v546, 0LL);
    if ( v546 )
    {
      v482 = sub_B0D964(v546, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 7u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 88) = v546;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 88),
      (System_Int32_array **)v546,
      v547,
      v548,
      v549,
      v550,
      v551,
      v552);
    v555 = (UserItemMaster_o *)sub_B0D974(UserItemMaster_TypeInfo, v553, v554);
    UserItemMaster___ctor(v555, 0LL);
    if ( v555 )
    {
      v482 = sub_B0D964(v555, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 8u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 96) = v555;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 96),
      (System_Int32_array **)v555,
      v556,
      v557,
      v558,
      v559,
      v560,
      v561);
    v564 = (UserServantMaster_o *)sub_B0D974(UserServantMaster_TypeInfo, v562, v563);
    UserServantMaster___ctor(v564, 0LL);
    if ( v564 )
    {
      v482 = sub_B0D964(v564, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 9u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 104) = v564;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 104),
      (System_Int32_array **)v564,
      v565,
      v566,
      v567,
      v568,
      v569,
      v570);
    v573 = (UserServantStorageMaster_o *)sub_B0D974(UserServantStorageMaster_TypeInfo, v571, v572);
    UserServantStorageMaster___ctor(v573, 0LL);
    if ( v573 )
    {
      v482 = sub_B0D964(v573, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xAu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 112) = v573;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 112),
      (System_Int32_array **)v573,
      v574,
      v575,
      v576,
      v577,
      v578,
      v579);
    v582 = (UserAccessaryMaster_o *)sub_B0D974(UserAccessaryMaster_TypeInfo, v580, v581);
    UserAccessaryMaster___ctor(v582, 0LL);
    if ( v582 )
    {
      v482 = sub_B0D964(v582, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xBu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 120) = v582;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 120),
      (System_Int32_array **)v582,
      v583,
      v584,
      v585,
      v586,
      v587,
      v588);
    v591 = (UserQuestMaster_o *)sub_B0D974(UserQuestMaster_TypeInfo, v589, v590);
    UserQuestMaster___ctor(v591, 0LL);
    if ( v591 )
    {
      v482 = sub_B0D964(v591, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xCu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 128) = v591;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 128),
      (System_Int32_array **)v591,
      v592,
      v593,
      v594,
      v595,
      v596,
      v597);
    v600 = (BattleMaster_o *)sub_B0D974(BattleMaster_TypeInfo, v598, v599);
    BattleMaster___ctor(v600, 0LL);
    if ( v600 )
    {
      v482 = sub_B0D964(v600, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xDu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 136) = v600;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 136),
      (System_Int32_array **)v600,
      v601,
      v602,
      v603,
      v604,
      v605,
      v606);
    v609 = (OtherUserGameMaster_o *)sub_B0D974(OtherUserGameMaster_TypeInfo, v607, v608);
    OtherUserGameMaster___ctor(v609, 0LL);
    if ( v609 )
    {
      v482 = sub_B0D964(v609, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xEu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 144) = v609;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 144),
      (System_Int32_array **)v609,
      v610,
      v611,
      v612,
      v613,
      v614,
      v615);
    v618 = (TblFriendMaster_o *)sub_B0D974(TblFriendMaster_TypeInfo, v616, v617);
    TblFriendMaster___ctor(v618, 0LL);
    if ( v618 )
    {
      v482 = sub_B0D964(v618, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0xFu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 152) = v618;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 152),
      (System_Int32_array **)v618,
      v619,
      v620,
      v621,
      v622,
      v623,
      v624);
    v627 = (AreaMaster_o *)sub_B0D974(AreaMaster_TypeInfo, v625, v626);
    AreaMaster___ctor(v627, 0LL);
    if ( v627 )
    {
      v482 = sub_B0D964(v627, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x10u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 160) = v627;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 160),
      (System_Int32_array **)v627,
      v628,
      v629,
      v630,
      v631,
      v632,
      v633);
    v636 = (ServantCardMaster_o *)sub_B0D974(ServantCardMaster_TypeInfo, v634, v635);
    ServantCardMaster___ctor(v636, 0LL);
    if ( v636 )
    {
      v482 = sub_B0D964(v636, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x11u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 168) = v636;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 168),
      (System_Int32_array **)v636,
      v637,
      v638,
      v639,
      v640,
      v641,
      v642);
    v645 = (EventMaster_o *)sub_B0D974(EventMaster_TypeInfo, v643, v644);
    EventMaster___ctor(v645, 0LL);
    if ( v645 )
    {
      v482 = sub_B0D964(v645, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x12u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 176) = v645;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 176),
      (System_Int32_array **)v645,
      v646,
      v647,
      v648,
      v649,
      v650,
      v651);
    v654 = (ItemMaster_o *)sub_B0D974(ItemMaster_TypeInfo, v652, v653);
    ItemMaster___ctor(v654, 0LL);
    if ( v654 )
    {
      v482 = sub_B0D964(v654, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x13u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 184) = v654;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 184),
      (System_Int32_array **)v654,
      v655,
      v656,
      v657,
      v658,
      v659,
      v660);
    v663 = (QuestMaster_o *)sub_B0D974(QuestMaster_TypeInfo, v661, v662);
    QuestMaster___ctor(v663, 0LL);
    if ( v663 )
    {
      v482 = sub_B0D964(v663, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x14u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 192) = v663;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 192),
      (System_Int32_array **)v663,
      v664,
      v665,
      v666,
      v667,
      v668,
      v669);
    v672 = (QuestAddMaster_o *)sub_B0D974(QuestAddMaster_TypeInfo, v670, v671);
    QuestAddMaster___ctor(v672, 0LL);
    if ( v672 )
    {
      v482 = sub_B0D964(v672, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x15u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 200) = v672;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 200),
      (System_Int32_array **)v672,
      v673,
      v674,
      v675,
      v676,
      v677,
      v678);
    v681 = (QuestReleaseMaster_o *)sub_B0D974(QuestReleaseMaster_TypeInfo, v679, v680);
    QuestReleaseMaster___ctor(v681, 0LL);
    if ( v681 )
    {
      v482 = sub_B0D964(v681, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x16u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 208) = v681;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 208),
      (System_Int32_array **)v681,
      v682,
      v683,
      v684,
      v685,
      v686,
      v687);
    v690 = (QuestDateRangeMaster_o *)sub_B0D974(QuestDateRangeMaster_TypeInfo, v688, v689);
    QuestDateRangeMaster___ctor(v690, 0LL);
    if ( v690 )
    {
      v482 = sub_B0D964(v690, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x17u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 216) = v690;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 216),
      (System_Int32_array **)v690,
      v691,
      v692,
      v693,
      v694,
      v695,
      v696);
    v699 = (QuestPhaseMaster_o *)sub_B0D974(QuestPhaseMaster_TypeInfo, v697, v698);
    QuestPhaseMaster___ctor(v699, 0LL);
    if ( v699 )
    {
      v482 = sub_B0D964(v699, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x18u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 224) = v699;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 224),
      (System_Int32_array **)v699,
      v700,
      v701,
      v702,
      v703,
      v704,
      v705);
    v708 = (QuestPhaseDetailMaster_o *)sub_B0D974(QuestPhaseDetailMaster_TypeInfo, v706, v707);
    QuestPhaseDetailMaster___ctor(v708, 0LL);
    if ( v708 )
    {
      v482 = sub_B0D964(v708, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x19u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 232) = v708;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 232),
      (System_Int32_array **)v708,
      v709,
      v710,
      v711,
      v712,
      v713,
      v714);
    v717 = (QuestGroupMaster_o *)sub_B0D974(QuestGroupMaster_TypeInfo, v715, v716);
    QuestGroupMaster___ctor(v717, 0LL);
    if ( v717 )
    {
      v482 = sub_B0D964(v717, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Au )
      goto LABEL_571;
    *(_QWORD *)(v478 + 240) = v717;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 240),
      (System_Int32_array **)v717,
      v718,
      v719,
      v720,
      v721,
      v722,
      v723);
    v726 = (QuestRandomGroupMaster_o *)sub_B0D974(QuestRandomGroupMaster_TypeInfo, v724, v725);
    QuestRandomGroupMaster___ctor(v726, 0LL);
    if ( v726 )
    {
      v482 = sub_B0D964(v726, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Bu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 248) = v726;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 248),
      (System_Int32_array **)v726,
      v727,
      v728,
      v729,
      v730,
      v731,
      v732);
    v735 = (QuestConsumeItemMaster_o *)sub_B0D974(QuestConsumeItemMaster_TypeInfo, v733, v734);
    QuestConsumeItemMaster___ctor(v735, 0LL);
    if ( v735 )
    {
      v482 = sub_B0D964(v735, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Cu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 256) = v735;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 256),
      (System_Int32_array **)v735,
      v736,
      v737,
      v738,
      v739,
      v740,
      v741);
    v744 = (QuestMessageMaster_o *)sub_B0D974(QuestMessageMaster_TypeInfo, v742, v743);
    QuestMessageMaster___ctor(v744, 0LL);
    if ( v744 )
    {
      v482 = sub_B0D964(v744, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Du )
      goto LABEL_571;
    *(_QWORD *)(v478 + 264) = v744;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 264),
      (System_Int32_array **)v744,
      v745,
      v746,
      v747,
      v748,
      v749,
      v750);
    v753 = (UserQuestInfoMaster_o *)sub_B0D974(UserQuestInfoMaster_TypeInfo, v751, v752);
    UserQuestInfoMaster___ctor(v753, 0LL);
    if ( v753 )
    {
      v482 = sub_B0D964(v753, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Eu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 272) = v753;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 272),
      (System_Int32_array **)v753,
      v754,
      v755,
      v756,
      v757,
      v758,
      v759);
    v762 = (UserQuestRecordMaster_o *)sub_B0D974(UserQuestRecordMaster_TypeInfo, v760, v761);
    UserQuestRecordMaster___ctor(v762, 0LL);
    if ( v762 )
    {
      v482 = sub_B0D964(v762, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x1Fu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 280) = v762;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 280),
      (System_Int32_array **)v762,
      v763,
      v764,
      v765,
      v766,
      v767,
      v768);
    v771 = (ViewQuestInfoMaster_o *)sub_B0D974(ViewQuestInfoMaster_TypeInfo, v769, v770);
    ViewQuestInfoMaster___ctor(v771, 0LL);
    if ( v771 )
    {
      v482 = sub_B0D964(v771, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x20u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 288) = v771;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 288),
      (System_Int32_array **)v771,
      v772,
      v773,
      v774,
      v775,
      v776,
      v777);
    v780 = (ViewEnemyMaster_o *)sub_B0D974(ViewEnemyMaster_TypeInfo, v778, v779);
    ViewEnemyMaster___ctor(v780, 0LL);
    if ( v780 )
    {
      v482 = sub_B0D964(v780, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x21u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 296) = v780;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 296),
      (System_Int32_array **)v780,
      v781,
      v782,
      v783,
      v784,
      v785,
      v786);
    v789 = (ViewQuestEnemyInfoMaster_o *)sub_B0D974(ViewQuestEnemyInfoMaster_TypeInfo, v787, v788);
    ViewQuestEnemyInfoMaster___ctor(v789, 0LL);
    if ( v789 )
    {
      v482 = sub_B0D964(v789, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x22u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 304) = v789;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 304),
      (System_Int32_array **)v789,
      v790,
      v791,
      v792,
      v793,
      v794,
      v795);
    v798 = (BlankEarthSpotMaster_o *)sub_B0D974(BlankEarthSpotMaster_TypeInfo, v796, v797);
    BlankEarthSpotMaster___ctor(v798, 0LL);
    if ( v798 )
    {
      v482 = sub_B0D964(v798, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x23u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 312) = v798;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 312),
      (System_Int32_array **)v798,
      v799,
      v800,
      v801,
      v802,
      v803,
      v804);
    v807 = (SpotMaster_o *)sub_B0D974(SpotMaster_TypeInfo, v805, v806);
    SpotMaster___ctor(v807, 0LL);
    if ( v807 )
    {
      v482 = sub_B0D964(v807, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x24u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 320) = v807;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 320),
      (System_Int32_array **)v807,
      v808,
      v809,
      v810,
      v811,
      v812,
      v813);
    v816 = (SpotImageMaster_o *)sub_B0D974(SpotImageMaster_TypeInfo, v814, v815);
    SpotImageMaster___ctor(v816, 0LL);
    if ( v816 )
    {
      v482 = sub_B0D964(v816, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x25u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 328) = v816;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 328),
      (System_Int32_array **)v816,
      v817,
      v818,
      v819,
      v820,
      v821,
      v822);
    v825 = (SpotRoadMaster_o *)sub_B0D974(SpotRoadMaster_TypeInfo, v823, v824);
    SpotRoadMaster___ctor(v825, 0LL);
    if ( v825 )
    {
      v482 = sub_B0D964(v825, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x26u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 336) = v825;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 336),
      (System_Int32_array **)v825,
      v826,
      v827,
      v828,
      v829,
      v830,
      v831);
    v834 = (SpotPathMaster_o *)sub_B0D974(SpotPathMaster_TypeInfo, v832, v833);
    SpotPathMaster___ctor(v834, 0LL);
    if ( v834 )
    {
      v482 = sub_B0D964(v834, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x27u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 344) = v834;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 344),
      (System_Int32_array **)v834,
      v835,
      v836,
      v837,
      v838,
      v839,
      v840);
    v843 = (SpotAddMaster_o *)sub_B0D974(SpotAddMaster_TypeInfo, v841, v842);
    SpotAddMaster___ctor(v843, 0LL);
    if ( v843 )
    {
      v482 = sub_B0D964(v843, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x28u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 352) = v843;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 352),
      (System_Int32_array **)v843,
      v844,
      v845,
      v846,
      v847,
      v848,
      v849);
    v852 = (MapGimmickMaster_o *)sub_B0D974(MapGimmickMaster_TypeInfo, v850, v851);
    MapGimmickMaster___ctor(v852, 0LL);
    if ( v852 )
    {
      v482 = sub_B0D964(v852, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x29u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 360) = v852;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 360),
      (System_Int32_array **)v852,
      v853,
      v854,
      v855,
      v856,
      v857,
      v858);
    v861 = (GiftMaster_o *)sub_B0D974(GiftMaster_TypeInfo, v859, v860);
    GiftMaster___ctor(v861, 0LL);
    if ( v861 )
    {
      v482 = sub_B0D964(v861, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Au )
      goto LABEL_571;
    *(_QWORD *)(v478 + 368) = v861;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 368),
      (System_Int32_array **)v861,
      v862,
      v863,
      v864,
      v865,
      v866,
      v867);
    v870 = (GiftAddMaster_o *)sub_B0D974(GiftAddMaster_TypeInfo, v868, v869);
    GiftAddMaster___ctor(v870, 0LL);
    if ( v870 )
    {
      v482 = sub_B0D964(v870, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Bu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 376) = v870;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 376),
      (System_Int32_array **)v870,
      v871,
      v872,
      v873,
      v874,
      v875,
      v876);
    v879 = (ShopMaster_o *)sub_B0D974(ShopMaster_TypeInfo, v877, v878);
    ShopMaster___ctor(v879, 0LL);
    if ( v879 )
    {
      v482 = sub_B0D964(v879, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Cu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 384) = v879;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 384),
      (System_Int32_array **)v879,
      v880,
      v881,
      v882,
      v883,
      v884,
      v885);
    v888 = (StoneShopMaster_o *)sub_B0D974(StoneShopMaster_TypeInfo, v886, v887);
    StoneShopMaster___ctor(v888, 0LL);
    if ( v888 )
    {
      v482 = sub_B0D964(v888, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Du )
      goto LABEL_571;
    *(_QWORD *)(v478 + 392) = v888;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 392),
      (System_Int32_array **)v888,
      v889,
      v890,
      v891,
      v892,
      v893,
      v894);
    v897 = (BankShopMaster_o *)sub_B0D974(BankShopMaster_TypeInfo, v895, v896);
    BankShopMaster___ctor(v897, 0LL);
    if ( v897 )
    {
      v482 = sub_B0D964(v897, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Eu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 400) = v897;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 400),
      (System_Int32_array **)v897,
      v898,
      v899,
      v900,
      v901,
      v902,
      v903);
    v906 = (ShopScriptMaster_o *)sub_B0D974(ShopScriptMaster_TypeInfo, v904, v905);
    ShopScriptMaster___ctor(v906, 0LL);
    if ( v906 )
    {
      v482 = sub_B0D964(v906, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x2Fu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 408) = v906;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 408),
      (System_Int32_array **)v906,
      v907,
      v908,
      v909,
      v910,
      v911,
      v912);
    v915 = (StageMaster_o *)sub_B0D974(StageMaster_TypeInfo, v913, v914);
    StageMaster___ctor(v915, 0LL);
    if ( v915 )
    {
      v482 = sub_B0D964(v915, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x30u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 416) = v915;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 416),
      (System_Int32_array **)v915,
      v916,
      v917,
      v918,
      v919,
      v920,
      v921);
    v924 = (ServantGroupMaster_o *)sub_B0D974(ServantGroupMaster_TypeInfo, v922, v923);
    ServantGroupMaster___ctor(v924, 0LL);
    if ( v924 )
    {
      v482 = sub_B0D964(v924, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x31u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 424) = v924;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 424),
      (System_Int32_array **)v924,
      v925,
      v926,
      v927,
      v928,
      v929,
      v930);
    v933 = (ServantLimitMaster_o *)sub_B0D974(ServantLimitMaster_TypeInfo, v931, v932);
    ServantLimitMaster___ctor(v933, 0LL);
    if ( v933 )
    {
      v482 = sub_B0D964(v933, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x32u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 432) = v933;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 432),
      (System_Int32_array **)v933,
      v934,
      v935,
      v936,
      v937,
      v938,
      v939);
    v942 = (ServantLimitAddMaster_o *)sub_B0D974(ServantLimitAddMaster_TypeInfo, v940, v941);
    ServantLimitAddMaster___ctor(v942, 0LL);
    if ( v942 )
    {
      v482 = sub_B0D964(v942, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x33u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 440) = v942;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 440),
      (System_Int32_array **)v942,
      v943,
      v944,
      v945,
      v946,
      v947,
      v948);
    v951 = (ServantSkillMaster_o *)sub_B0D974(ServantSkillMaster_TypeInfo, v949, v950);
    ServantSkillMaster___ctor(v951, 0LL);
    if ( v951 )
    {
      v482 = sub_B0D964(v951, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x34u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 448) = v951;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 448),
      (System_Int32_array **)v951,
      v952,
      v953,
      v954,
      v955,
      v956,
      v957);
    v960 = (ServantPassiveSkillMaster_o *)sub_B0D974(ServantPassiveSkillMaster_TypeInfo, v958, v959);
    ServantPassiveSkillMaster___ctor(v960, 0LL);
    if ( v960 )
    {
      v482 = sub_B0D964(v960, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x35u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 456) = v960;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 456),
      (System_Int32_array **)v960,
      v961,
      v962,
      v963,
      v964,
      v965,
      v966);
    v969 = (BgmMaster_o *)sub_B0D974(BgmMaster_TypeInfo, v967, v968);
    BgmMaster___ctor(v969, 0LL);
    if ( v969 )
    {
      v482 = sub_B0D964(v969, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x36u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 464) = v969;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 464),
      (System_Int32_array **)v969,
      v970,
      v971,
      v972,
      v973,
      v974,
      v975);
    v978 = (ServantScriptMaster_o *)sub_B0D974(ServantScriptMaster_TypeInfo, v976, v977);
    ServantScriptMaster___ctor(v978, 0LL);
    if ( v978 )
    {
      v482 = sub_B0D964(v978, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x37u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 472) = v978;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 472),
      (System_Int32_array **)v978,
      v979,
      v980,
      v981,
      v982,
      v983,
      v984);
    v987 = (NewsMaster_o *)sub_B0D974(NewsMaster_TypeInfo, v985, v986);
    NewsMaster___ctor(v987, 0LL);
    if ( v987 )
    {
      v482 = sub_B0D964(v987, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x38u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 480) = v987;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 480),
      (System_Int32_array **)v987,
      v988,
      v989,
      v990,
      v991,
      v992,
      v993);
    v996 = (TelopMaster_o *)sub_B0D974(TelopMaster_TypeInfo, v994, v995);
    TelopMaster___ctor(v996, 0LL);
    if ( v996 )
    {
      v482 = sub_B0D964(v996, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x39u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 488) = v996;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 488),
      (System_Int32_array **)v996,
      v997,
      v998,
      v999,
      v1000,
      v1001,
      v1002);
    v1005 = (UserExpMaster_o *)sub_B0D974(UserExpMaster_TypeInfo, v1003, v1004);
    UserExpMaster___ctor(v1005, 0LL);
    if ( v1005 )
    {
      v482 = sub_B0D964(v1005, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Au )
      goto LABEL_571;
    *(_QWORD *)(v478 + 496) = v1005;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 496),
      (System_Int32_array **)v1005,
      v1006,
      v1007,
      v1008,
      v1009,
      v1010,
      v1011);
    v1014 = (TreasureDvcMaster_o *)sub_B0D974(TreasureDvcMaster_TypeInfo, v1012, v1013);
    TreasureDvcMaster___ctor(v1014, 0LL);
    if ( v1014 )
    {
      v482 = sub_B0D964(v1014, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Bu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 504) = v1014;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 504),
      (System_Int32_array **)v1014,
      v1015,
      v1016,
      v1017,
      v1018,
      v1019,
      v1020);
    v1023 = (ServantTreasureDvcMaster_o *)sub_B0D974(ServantTreasureDvcMaster_TypeInfo, v1021, v1022);
    ServantTreasureDvcMaster___ctor(v1023, 0LL);
    if ( v1023 )
    {
      v482 = sub_B0D964(v1023, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Cu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 512) = v1023;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 512),
      (System_Int32_array **)v1023,
      v1024,
      v1025,
      v1026,
      v1027,
      v1028,
      v1029);
    v1032 = (SkillMaster_o *)sub_B0D974(SkillMaster_TypeInfo, v1030, v1031);
    SkillMaster___ctor(v1032, 0LL);
    if ( v1032 )
    {
      v482 = sub_B0D964(v1032, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Du )
      goto LABEL_571;
    *(_QWORD *)(v478 + 520) = v1032;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 520),
      (System_Int32_array **)v1032,
      v1033,
      v1034,
      v1035,
      v1036,
      v1037,
      v1038);
    v1041 = (SkillLvMaster_o *)sub_B0D974(SkillLvMaster_TypeInfo, v1039, v1040);
    SkillLvMaster___ctor(v1041, 0LL);
    if ( v1041 )
    {
      v482 = sub_B0D964(v1041, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Eu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 528) = v1041;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 528),
      (System_Int32_array **)v1041,
      v1042,
      v1043,
      v1044,
      v1045,
      v1046,
      v1047);
    v1050 = (SkillDetailMaster_o *)sub_B0D974(SkillDetailMaster_TypeInfo, v1048, v1049);
    SkillDetailMaster___ctor(v1050, 0LL);
    if ( v1050 )
    {
      v482 = sub_B0D964(v1050, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x3Fu )
      goto LABEL_571;
    *(_QWORD *)(v478 + 536) = v1050;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 536),
      (System_Int32_array **)v1050,
      v1051,
      v1052,
      v1053,
      v1054,
      v1055,
      v1056);
    v1059 = (CommandSpellMaster_o *)sub_B0D974(CommandSpellMaster_TypeInfo, v1057, v1058);
    CommandSpellMaster___ctor(v1059, 0LL);
    if ( v1059 )
    {
      v482 = sub_B0D964(v1059, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x40u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 544) = v1059;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 544),
      (System_Int32_array **)v1059,
      v1060,
      v1061,
      v1062,
      v1063,
      v1064,
      v1065);
    v1068 = (EquipMaster_o *)sub_B0D974(EquipMaster_TypeInfo, v1066, v1067);
    EquipMaster___ctor(v1068, 0LL);
    if ( v1068 )
    {
      v482 = sub_B0D964(v1068, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x41u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 552) = v1068;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 552),
      (System_Int32_array **)v1068,
      v1069,
      v1070,
      v1071,
      v1072,
      v1073,
      v1074);
    v1077 = (EquipExpMaster_o *)sub_B0D974(EquipExpMaster_TypeInfo, v1075, v1076);
    EquipExpMaster___ctor(v1077, 0LL);
    if ( v1077 )
    {
      v482 = sub_B0D964(v1077, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x42u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 560) = v1077;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 560),
      (System_Int32_array **)v1077,
      v1078,
      v1079,
      v1080,
      v1081,
      v1082,
      v1083);
    v1086 = (EquipSkillMaster_o *)sub_B0D974(EquipSkillMaster_TypeInfo, v1084, v1085);
    EquipSkillMaster___ctor(v1086, 0LL);
    if ( v1086 )
    {
      v482 = sub_B0D964(v1086, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x43u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 568) = v1086;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 568),
      (System_Int32_array **)v1086,
      v1087,
      v1088,
      v1089,
      v1090,
      v1091,
      v1092);
    v1095 = (SubEquipMaster_o *)sub_B0D974(SubEquipMaster_TypeInfo, v1093, v1094);
    SubEquipMaster___ctor(v1095, 0LL);
    if ( v1095 )
    {
      v482 = sub_B0D964(v1095, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x44u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 576) = v1095;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 576),
      (System_Int32_array **)v1095,
      v1096,
      v1097,
      v1098,
      v1099,
      v1100,
      v1101);
    v1104 = (AccessaryMaster_o *)sub_B0D974(AccessaryMaster_TypeInfo, v1102, v1103);
    AccessaryMaster___ctor(v1104, 0LL);
    if ( v1104 )
    {
      v482 = sub_B0D964(v1104, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x45u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 584) = v1104;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 584),
      (System_Int32_array **)v1104,
      v1105,
      v1106,
      v1107,
      v1108,
      v1109,
      v1110);
    v1113 = (UserPresentBoxMaster_o *)sub_B0D974(UserPresentBoxMaster_TypeInfo, v1111, v1112);
    UserPresentBoxMaster___ctor(v1113, 0LL);
    if ( v1113 )
    {
      v482 = sub_B0D964(v1113, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x46u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 592) = v1113;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 592),
      (System_Int32_array **)v1113,
      v1114,
      v1115,
      v1116,
      v1117,
      v1118,
      v1119);
    v1122 = (UserDeckMaster_o *)sub_B0D974(UserDeckMaster_TypeInfo, v1120, v1121);
    UserDeckMaster___ctor(v1122, 0LL);
    if ( v1122 )
    {
      v482 = sub_B0D964(v1122, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x47u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 600) = v1122;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 600),
      (System_Int32_array **)v1122,
      v1123,
      v1124,
      v1125,
      v1126,
      v1127,
      v1128);
    v1131 = (UserSubEquipMaster_o *)sub_B0D974(UserSubEquipMaster_TypeInfo, v1129, v1130);
    UserSubEquipMaster___ctor(v1131, 0LL);
    if ( v1131 )
    {
      v482 = sub_B0D964(v1131, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x48u )
      goto LABEL_571;
    *(_QWORD *)(v478 + 608) = v1131;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 608),
      (System_Int32_array **)v1131,
      v1132,
      v1133,
      v1134,
      v1135,
      v1136,
      v1137);
    v1140 = (GachaMaster_o *)sub_B0D974(GachaMaster_TypeInfo, v1138, v1139);
    GachaMaster___ctor(v1140, 0LL);
    if ( v1140 )
    {
      v482 = sub_B0D964(v1140, *(_QWORD *)(*(_QWORD *)v478 + 64LL));
      if ( !v482 )
        goto LABEL_572;
    }
    if ( *v489 <= 0x49u )
    {
LABEL_571:
      v2177 = sub_B0D9A8(v482);
      sub_B0D948(v2177, 0LL);
    }
    *(_QWORD *)(v478 + 616) = v1140;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v478 + 616),
      (System_Int32_array **)v1140,
      v1141,
      v1142,
      v1143,
      v1144,
      v1145,
      v1146);
    v1149 = (GachaImageMaster_o *)sub_B0D974(GachaImageMaster_TypeInfo, v1147, v1148);
    GachaImageMaster___ctor(v1149, 0LL);
    if ( !v1149 || (v482 = sub_B0D964(v1149, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
    {
      if ( *v489 <= 0x4Au )
        goto LABEL_569;
      *(_QWORD *)(v478 + 624) = v1149;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v478 + 624),
        (System_Int32_array **)v1149,
        v1150,
        v1151,
        v1152,
        v1153,
        v1154,
        v1155);
      v1158 = (UserGachaMaster_o *)sub_B0D974(UserGachaMaster_TypeInfo, v1156, v1157);
      UserGachaMaster___ctor(v1158, 0LL);
      if ( !v1158 || (v482 = sub_B0D964(v1158, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
      {
        if ( *v489 <= 0x4Bu )
          goto LABEL_569;
        *(_QWORD *)(v478 + 632) = v1158;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v478 + 632),
          (System_Int32_array **)v1158,
          v1159,
          v1160,
          v1161,
          v1162,
          v1163,
          v1164);
        v1167 = (UserEquipMaster_o *)sub_B0D974(UserEquipMaster_TypeInfo, v1165, v1166);
        UserEquipMaster___ctor(v1167, 0LL);
        if ( !v1167 || (v482 = sub_B0D964(v1167, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
        {
          if ( *v489 <= 0x4Cu )
            goto LABEL_569;
          *(_QWORD *)(v478 + 640) = v1167;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v478 + 640),
            (System_Int32_array **)v1167,
            v1168,
            v1169,
            v1170,
            v1171,
            v1172,
            v1173);
          v1176 = (UserServantCollectionMaster_o *)sub_B0D974(UserServantCollectionMaster_TypeInfo, v1174, v1175);
          UserServantCollectionMaster___ctor(v1176, 0LL);
          if ( !v1176 || (v482 = sub_B0D964(v1176, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
          {
            if ( *v489 <= 0x4Du )
              goto LABEL_569;
            *(_QWORD *)(v478 + 648) = v1176;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v478 + 648),
              (System_Int32_array **)v1176,
              v1177,
              v1178,
              v1179,
              v1180,
              v1181,
              v1182);
            v1185 = (FriendshipMaster_o *)sub_B0D974(FriendshipMaster_TypeInfo, v1183, v1184);
            FriendshipMaster___ctor(v1185, 0LL);
            if ( !v1185 || (v482 = sub_B0D964(v1185, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
            {
              if ( *v489 <= 0x4Eu )
                goto LABEL_569;
              *(_QWORD *)(v478 + 656) = v1185;
              sub_B0D840(
                (BattleServantConfConponent_o *)(v478 + 656),
                (System_Int32_array **)v1185,
                v1186,
                v1187,
                v1188,
                v1189,
                v1190,
                v1191);
              v1194 = (GachaTicketMaster_o *)sub_B0D974(GachaTicketMaster_TypeInfo, v1192, v1193);
              GachaTicketMaster___ctor(v1194, 0LL);
              if ( !v1194 || (v482 = sub_B0D964(v1194, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
              {
                if ( *v489 <= 0x4Fu )
                  goto LABEL_569;
                *(_QWORD *)(v478 + 664) = v1194;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v478 + 664),
                  (System_Int32_array **)v1194,
                  v1195,
                  v1196,
                  v1197,
                  v1198,
                  v1199,
                  v1200);
                v1203 = (UserFormationMaster_o *)sub_B0D974(UserFormationMaster_TypeInfo, v1201, v1202);
                UserFormationMaster___ctor(v1203, 0LL);
                if ( !v1203 || (v482 = sub_B0D964(v1203, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                {
                  if ( *v489 <= 0x50u )
                    goto LABEL_569;
                  *(_QWORD *)(v478 + 672) = v1203;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)(v478 + 672),
                    (System_Int32_array **)v1203,
                    v1204,
                    v1205,
                    v1206,
                    v1207,
                    v1208,
                    v1209);
                  v1212 = (FunctionMaster_o *)sub_B0D974(FunctionMaster_TypeInfo, v1210, v1211);
                  FunctionMaster___ctor(v1212, 0LL);
                  if ( !v1212 || (v482 = sub_B0D964(v1212, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                  {
                    if ( *v489 <= 0x51u )
                      goto LABEL_569;
                    *(_QWORD *)(v478 + 680) = v1212;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)(v478 + 680),
                      (System_Int32_array **)v1212,
                      v1213,
                      v1214,
                      v1215,
                      v1216,
                      v1217,
                      v1218);
                    v1221 = (BuffMaster_o *)sub_B0D974(BuffMaster_TypeInfo, v1219, v1220);
                    BuffMaster___ctor(v1221, 0LL);
                    if ( !v1221 || (v482 = sub_B0D964(v1221, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                    {
                      if ( *v489 <= 0x52u )
                        goto LABEL_569;
                      *(_QWORD *)(v478 + 688) = v1221;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)(v478 + 688),
                        (System_Int32_array **)v1221,
                        v1222,
                        v1223,
                        v1224,
                        v1225,
                        v1226,
                        v1227);
                      v1230 = (GachaReleaseMaster_o *)sub_B0D974(GachaReleaseMaster_TypeInfo, v1228, v1229);
                      GachaReleaseMaster___ctor(v1230, 0LL);
                      if ( !v1230 || (v482 = sub_B0D964(v1230, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                      {
                        if ( *v489 <= 0x53u )
                          goto LABEL_569;
                        *(_QWORD *)(v478 + 696) = v1230;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)(v478 + 696),
                          (System_Int32_array **)v1230,
                          v1231,
                          v1232,
                          v1233,
                          v1234,
                          v1235,
                          v1236);
                        v1239 = (CombineQpMaster_o *)sub_B0D974(CombineQpMaster_TypeInfo, v1237, v1238);
                        CombineQpMaster___ctor(v1239, 0LL);
                        if ( !v1239 || (v482 = sub_B0D964(v1239, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                        {
                          if ( *v489 <= 0x54u )
                            goto LABEL_569;
                          *(_QWORD *)(v478 + 704) = v1239;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)(v478 + 704),
                            (System_Int32_array **)v1239,
                            v1240,
                            v1241,
                            v1242,
                            v1243,
                            v1244,
                            v1245);
                          v1248 = (CombineMaterialMaster_o *)sub_B0D974(CombineMaterialMaster_TypeInfo, v1246, v1247);
                          CombineMaterialMaster___ctor(v1248, 0LL);
                          if ( !v1248 || (v482 = sub_B0D964(v1248, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                          {
                            if ( *v489 <= 0x55u )
                              goto LABEL_569;
                            *(_QWORD *)(v478 + 712) = v1248;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)(v478 + 712),
                              (System_Int32_array **)v1248,
                              v1249,
                              v1250,
                              v1251,
                              v1252,
                              v1253,
                              v1254);
                            v1257 = (EventCombineMaster_o *)sub_B0D974(EventCombineMaster_TypeInfo, v1255, v1256);
                            EventCombineMaster___ctor(v1257, 0LL);
                            if ( !v1257 || (v482 = sub_B0D964(v1257, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                            {
                              if ( *v489 <= 0x56u )
                                goto LABEL_569;
                              *(_QWORD *)(v478 + 720) = v1257;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)(v478 + 720),
                                (System_Int32_array **)v1257,
                                v1258,
                                v1259,
                                v1260,
                                v1261,
                                v1262,
                                v1263);
                              v1266 = (ServantExpMaster_o *)sub_B0D974(ServantExpMaster_TypeInfo, v1264, v1265);
                              ServantExpMaster___ctor(v1266, 0LL);
                              if ( !v1266 || (v482 = sub_B0D964(v1266, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                              {
                                if ( *v489 <= 0x57u )
                                  goto LABEL_569;
                                *(_QWORD *)(v478 + 728) = v1266;
                                sub_B0D840(
                                  (BattleServantConfConponent_o *)(v478 + 728),
                                  (System_Int32_array **)v1266,
                                  v1267,
                                  v1268,
                                  v1269,
                                  v1270,
                                  v1271,
                                  v1272);
                                v1275 = (CombineSkillMaster_o *)sub_B0D974(CombineSkillMaster_TypeInfo, v1273, v1274);
                                CombineSkillMaster___ctor(v1275, 0LL);
                                if ( !v1275 || (v482 = sub_B0D964(v1275, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                {
                                  if ( *v489 <= 0x58u )
                                    goto LABEL_569;
                                  *(_QWORD *)(v478 + 736) = v1275;
                                  sub_B0D840(
                                    (BattleServantConfConponent_o *)(v478 + 736),
                                    (System_Int32_array **)v1275,
                                    v1276,
                                    v1277,
                                    v1278,
                                    v1279,
                                    v1280,
                                    v1281);
                                  v1284 = (CombineTdMaster_o *)sub_B0D974(CombineTdMaster_TypeInfo, v1282, v1283);
                                  CombineTdMaster___ctor(v1284, 0LL);
                                  if ( !v1284 || (v482 = sub_B0D964(v1284, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                  {
                                    if ( *v489 <= 0x59u )
                                      goto LABEL_569;
                                    *(_QWORD *)(v478 + 744) = v1284;
                                    sub_B0D840(
                                      (BattleServantConfConponent_o *)(v478 + 744),
                                      (System_Int32_array **)v1284,
                                      v1285,
                                      v1286,
                                      v1287,
                                      v1288,
                                      v1289,
                                      v1290);
                                    v1293 = (EventQuestMaster_o *)sub_B0D974(EventQuestMaster_TypeInfo, v1291, v1292);
                                    EventQuestMaster___ctor(v1293, 0LL);
                                    if ( !v1293 || (v482 = sub_B0D964(v1293, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                    {
                                      if ( *v489 <= 0x5Au )
                                        goto LABEL_569;
                                      *(_QWORD *)(v478 + 752) = v1293;
                                      sub_B0D840(
                                        (BattleServantConfConponent_o *)(v478 + 752),
                                        (System_Int32_array **)v1293,
                                        v1294,
                                        v1295,
                                        v1296,
                                        v1297,
                                        v1298,
                                        v1299);
                                      v1302 = (EventCampaignMaster_o *)sub_B0D974(
                                                                         EventCampaignMaster_TypeInfo,
                                                                         v1300,
                                                                         v1301);
                                      EventCampaignMaster___ctor(v1302, 0LL);
                                      if ( !v1302
                                        || (v482 = sub_B0D964(v1302, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                      {
                                        if ( *v489 <= 0x5Bu )
                                          goto LABEL_569;
                                        *(_QWORD *)(v478 + 760) = v1302;
                                        sub_B0D840(
                                          (BattleServantConfConponent_o *)(v478 + 760),
                                          (System_Int32_array **)v1302,
                                          v1303,
                                          v1304,
                                          v1305,
                                          v1306,
                                          v1307,
                                          v1308);
                                        v1311 = (IllustratorMaster_o *)sub_B0D974(
                                                                         IllustratorMaster_TypeInfo,
                                                                         v1309,
                                                                         v1310);
                                        IllustratorMaster___ctor(v1311, 0LL);
                                        if ( !v1311
                                          || (v482 = sub_B0D964(v1311, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                        {
                                          if ( *v489 <= 0x5Cu )
                                            goto LABEL_569;
                                          *(_QWORD *)(v478 + 768) = v1311;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)(v478 + 768),
                                            (System_Int32_array **)v1311,
                                            v1312,
                                            v1313,
                                            v1314,
                                            v1315,
                                            v1316,
                                            v1317);
                                          v1320 = (CvMaster_o *)sub_B0D974(CvMaster_TypeInfo, v1318, v1319);
                                          CvMaster___ctor(v1320, v1321);
                                          if ( !v1320
                                            || (v482 = sub_B0D964(v1320, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                          {
                                            if ( *v489 <= 0x5Du )
                                              goto LABEL_569;
                                            *(_QWORD *)(v478 + 776) = v1320;
                                            sub_B0D840(
                                              (BattleServantConfConponent_o *)(v478 + 776),
                                              (System_Int32_array **)v1320,
                                              v1322,
                                              v1323,
                                              v1324,
                                              v1325,
                                              v1326,
                                              v1327);
                                            v1330 = (TreasureDvcLvMaster_o *)sub_B0D974(
                                                                               TreasureDvcLvMaster_TypeInfo,
                                                                               v1328,
                                                                               v1329);
                                            TreasureDvcLvMaster___ctor(v1330, 0LL);
                                            if ( !v1330
                                              || (v482 = sub_B0D964(v1330, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                            {
                                              if ( *v489 <= 0x5Eu )
                                                goto LABEL_569;
                                              *(_QWORD *)(v478 + 784) = v1330;
                                              sub_B0D840(
                                                (BattleServantConfConponent_o *)(v478 + 784),
                                                (System_Int32_array **)v1330,
                                                v1331,
                                                v1332,
                                                v1333,
                                                v1334,
                                                v1335,
                                                v1336);
                                              v1339 = (TreasureDvcDetailMaster_o *)sub_B0D974(
                                                                                     TreasureDvcDetailMaster_TypeInfo,
                                                                                     v1337,
                                                                                     v1338);
                                              TreasureDvcDetailMaster___ctor(v1339, 0LL);
                                              if ( !v1339
                                                || (v482 = sub_B0D964(v1339, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                              {
                                                if ( *v489 <= 0x5Fu )
                                                  goto LABEL_569;
                                                *(_QWORD *)(v478 + 792) = v1339;
                                                sub_B0D840(
                                                  (BattleServantConfConponent_o *)(v478 + 792),
                                                  (System_Int32_array **)v1339,
                                                  v1340,
                                                  v1341,
                                                  v1342,
                                                  v1343,
                                                  v1344,
                                                  v1345);
                                                v1348 = (UserFollowerMaster_o *)sub_B0D974(
                                                                                  UserFollowerMaster_TypeInfo,
                                                                                  v1346,
                                                                                  v1347);
                                                UserFollowerMaster___ctor(v1348, 0LL);
                                                if ( !v1348
                                                  || (v482 = sub_B0D964(v1348, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                {
                                                  if ( *v489 <= 0x60u )
                                                    goto LABEL_569;
                                                  *(_QWORD *)(v478 + 800) = v1348;
                                                  sub_B0D840(
                                                    (BattleServantConfConponent_o *)(v478 + 800),
                                                    (System_Int32_array **)v1348,
                                                    v1349,
                                                    v1350,
                                                    v1351,
                                                    v1352,
                                                    v1353,
                                                    v1354);
                                                  v1357 = (NpcFollowerMaster_o *)sub_B0D974(
                                                                                   NpcFollowerMaster_TypeInfo,
                                                                                   v1355,
                                                                                   v1356);
                                                  NpcFollowerMaster___ctor(v1357, 0LL);
                                                  if ( !v1357
                                                    || (v482 = sub_B0D964(v1357, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                  {
                                                    if ( *v489 <= 0x61u )
                                                      goto LABEL_569;
                                                    *(_QWORD *)(v478 + 808) = v1357;
                                                    sub_B0D840(
                                                      (BattleServantConfConponent_o *)(v478 + 808),
                                                      (System_Int32_array **)v1357,
                                                      v1358,
                                                      v1359,
                                                      v1360,
                                                      v1361,
                                                      v1362,
                                                      v1363);
                                                    v1366 = (NpcServantFollowerMaster_o *)sub_B0D974(
                                                                                            NpcServantFollowerMaster_TypeInfo,
                                                                                            v1364,
                                                                                            v1365);
                                                    NpcServantFollowerMaster___ctor(v1366, 0LL);
                                                    if ( !v1366
                                                      || (v482 = sub_B0D964(v1366, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                    {
                                                      if ( *v489 <= 0x62u )
                                                        goto LABEL_569;
                                                      *(_QWORD *)(v478 + 816) = v1366;
                                                      sub_B0D840(
                                                        (BattleServantConfConponent_o *)(v478 + 816),
                                                        (System_Int32_array **)v1366,
                                                        v1367,
                                                        v1368,
                                                        v1369,
                                                        v1370,
                                                        v1371,
                                                        v1372);
                                                      v1375 = (UserEventMaster_o *)sub_B0D974(
                                                                                     UserEventMaster_TypeInfo,
                                                                                     v1373,
                                                                                     v1374);
                                                      UserEventMaster___ctor(v1375, 0LL);
                                                      if ( !v1375
                                                        || (v482 = sub_B0D964(
                                                                     v1375,
                                                                     *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                      {
                                                        if ( *v489 <= 0x63u )
                                                          goto LABEL_569;
                                                        *(_QWORD *)(v478 + 824) = v1375;
                                                        sub_B0D840(
                                                          (BattleServantConfConponent_o *)(v478 + 824),
                                                          (System_Int32_array **)v1375,
                                                          v1376,
                                                          v1377,
                                                          v1378,
                                                          v1379,
                                                          v1380,
                                                          v1381);
                                                        v1384 = (UserShopMaster_o *)sub_B0D974(
                                                                                      UserShopMaster_TypeInfo,
                                                                                      v1382,
                                                                                      v1383);
                                                        UserShopMaster___ctor(v1384, 0LL);
                                                        if ( !v1384
                                                          || (v482 = sub_B0D964(
                                                                       v1384,
                                                                       *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                        {
                                                          if ( *v489 <= 0x64u )
                                                            goto LABEL_569;
                                                          *(_QWORD *)(v478 + 832) = v1384;
                                                          sub_B0D840(
                                                            (BattleServantConfConponent_o *)(v478 + 832),
                                                            (System_Int32_array **)v1384,
                                                            v1385,
                                                            v1386,
                                                            v1387,
                                                            v1388,
                                                            v1389,
                                                            v1390);
                                                          v1393 = (UserContinueMaster_o *)sub_B0D974(
                                                                                            UserContinueMaster_TypeInfo,
                                                                                            v1391,
                                                                                            v1392);
                                                          UserContinueMaster___ctor(v1393, 0LL);
                                                          if ( !v1393
                                                            || (v482 = sub_B0D964(
                                                                         v1393,
                                                                         *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                          {
                                                            if ( *v489 <= 0x65u )
                                                              goto LABEL_569;
                                                            *(_QWORD *)(v478 + 840) = v1393;
                                                            sub_B0D840(
                                                              (BattleServantConfConponent_o *)(v478 + 840),
                                                              (System_Int32_array **)v1393,
                                                              v1394,
                                                              v1395,
                                                              v1396,
                                                              v1397,
                                                              v1398,
                                                              v1399);
                                                            v1402 = (ConstantMaster_o *)sub_B0D974(
                                                                                          ConstantMaster_TypeInfo,
                                                                                          v1400,
                                                                                          v1401);
                                                            ConstantMaster___ctor(v1402, 0LL);
                                                            if ( !v1402
                                                              || (v482 = sub_B0D964(
                                                                           v1402,
                                                                           *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                            {
                                                              if ( *v489 <= 0x66u )
                                                                goto LABEL_569;
                                                              *(_QWORD *)(v478 + 848) = v1402;
                                                              sub_B0D840(
                                                                (BattleServantConfConponent_o *)(v478 + 848),
                                                                (System_Int32_array **)v1402,
                                                                v1403,
                                                                v1404,
                                                                v1405,
                                                                v1406,
                                                                v1407,
                                                                v1408);
                                                              v1411 = (ConstantLongMaster_o *)sub_B0D974(
                                                                                                ConstantLongMaster_TypeInfo,
                                                                                                v1409,
                                                                                                v1410);
                                                              ConstantLongMaster___ctor(v1411, 0LL);
                                                              if ( !v1411
                                                                || (v482 = sub_B0D964(
                                                                             v1411,
                                                                             *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                              {
                                                                if ( *v489 <= 0x67u )
                                                                  goto LABEL_569;
                                                                *(_QWORD *)(v478 + 856) = v1411;
                                                                sub_B0D840(
                                                                  (BattleServantConfConponent_o *)(v478 + 856),
                                                                  (System_Int32_array **)v1411,
                                                                  v1412,
                                                                  v1413,
                                                                  v1414,
                                                                  v1415,
                                                                  v1416,
                                                                  v1417);
                                                                v1420 = (ConstantStrMaster_o *)sub_B0D974(
                                                                                                 ConstantStrMaster_TypeInfo,
                                                                                                 v1418,
                                                                                                 v1419);
                                                                ConstantStrMaster___ctor(v1420, 0LL);
                                                                if ( !v1420
                                                                  || (v482 = sub_B0D964(
                                                                               v1420,
                                                                               *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                {
                                                                  if ( *v489 <= 0x68u )
                                                                    goto LABEL_569;
                                                                  *(_QWORD *)(v478 + 864) = v1420;
                                                                  sub_B0D840(
                                                                    (BattleServantConfConponent_o *)(v478 + 864),
                                                                    (System_Int32_array **)v1420,
                                                                    v1421,
                                                                    v1422,
                                                                    v1423,
                                                                    v1424,
                                                                    v1425,
                                                                    v1426);
                                                                  v1429 = (AiMaster_o *)sub_B0D974(
                                                                                          AiMaster_TypeInfo,
                                                                                          v1427,
                                                                                          v1428);
                                                                  AiMaster___ctor(v1429, 0LL);
                                                                  if ( !v1429
                                                                    || (v482 = sub_B0D964(
                                                                                 v1429,
                                                                                 *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                  {
                                                                    if ( *v489 <= 0x69u )
                                                                      goto LABEL_569;
                                                                    *(_QWORD *)(v478 + 872) = v1429;
                                                                    sub_B0D840(
                                                                      (BattleServantConfConponent_o *)(v478 + 872),
                                                                      (System_Int32_array **)v1429,
                                                                      v1430,
                                                                      v1431,
                                                                      v1432,
                                                                      v1433,
                                                                      v1434,
                                                                      v1435);
                                                                    v1438 = (AiActMaster_o *)sub_B0D974(
                                                                                               AiActMaster_TypeInfo,
                                                                                               v1436,
                                                                                               v1437);
                                                                    AiActMaster___ctor(v1438, 0LL);
                                                                    if ( !v1438
                                                                      || (v482 = sub_B0D964(
                                                                                   v1438,
                                                                                   *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                    {
                                                                      if ( *v489 <= 0x6Au )
                                                                        goto LABEL_569;
                                                                      *(_QWORD *)(v478 + 880) = v1438;
                                                                      sub_B0D840(
                                                                        (BattleServantConfConponent_o *)(v478 + 880),
                                                                        (System_Int32_array **)v1438,
                                                                        v1439,
                                                                        v1440,
                                                                        v1441,
                                                                        v1442,
                                                                        v1443,
                                                                        v1444);
                                                                      v1447 = (AttriRelationMaster_o *)sub_B0D974(AttriRelationMaster_TypeInfo, v1445, v1446);
                                                                      AttriRelationMaster___ctor(v1447, 0LL);
                                                                      if ( !v1447
                                                                        || (v482 = sub_B0D964(
                                                                                     v1447,
                                                                                     *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                      {
                                                                        if ( *v489 <= 0x6Bu )
                                                                          goto LABEL_569;
                                                                        *(_QWORD *)(v478 + 888) = v1447;
                                                                        sub_B0D840(
                                                                          (BattleServantConfConponent_o *)(v478 + 888),
                                                                          (System_Int32_array **)v1447,
                                                                          v1448,
                                                                          v1449,
                                                                          v1450,
                                                                          v1451,
                                                                          v1452,
                                                                          v1453);
                                                                        v1456 = (ClassRelationMaster_o *)sub_B0D974(ClassRelationMaster_TypeInfo, v1454, v1455);
                                                                        ClassRelationMaster___ctor(v1456, 0LL);
                                                                        if ( !v1456
                                                                          || (v482 = sub_B0D964(
                                                                                       v1456,
                                                                                       *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                        {
                                                                          if ( *v489 <= 0x6Cu )
                                                                            goto LABEL_569;
                                                                          *(_QWORD *)(v478 + 896) = v1456;
                                                                          sub_B0D840(
                                                                            (BattleServantConfConponent_o *)(v478 + 896),
                                                                            (System_Int32_array **)v1456,
                                                                            v1457,
                                                                            v1458,
                                                                            v1459,
                                                                            v1460,
                                                                            v1461,
                                                                            v1462);
                                                                          v1465 = (EffectMaster_o *)sub_B0D974(EffectMaster_TypeInfo, v1463, v1464);
                                                                          EffectMaster___ctor(v1465, 0LL);
                                                                          if ( !v1465
                                                                            || (v482 = sub_B0D964(
                                                                                         v1465,
                                                                                         *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                          {
                                                                            if ( *v489 <= 0x6Du )
                                                                              goto LABEL_569;
                                                                            *(_QWORD *)(v478 + 904) = v1465;
                                                                            sub_B0D840(
                                                                              (BattleServantConfConponent_o *)(v478 + 904),
                                                                              (System_Int32_array **)v1465,
                                                                              v1466,
                                                                              v1467,
                                                                              v1468,
                                                                              v1469,
                                                                              v1470,
                                                                              v1471);
                                                                            v1474 = (EquipImageMaster_o *)sub_B0D974(EquipImageMaster_TypeInfo, v1472, v1473);
                                                                            EquipImageMaster___ctor(v1474, 0LL);
                                                                            if ( !v1474
                                                                              || (v482 = sub_B0D964(
                                                                                           v1474,
                                                                                           *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                            {
                                                                              if ( *v489 <= 0x6Eu )
                                                                                goto LABEL_569;
                                                                              *(_QWORD *)(v478 + 912) = v1474;
                                                                              sub_B0D840(
                                                                                (BattleServantConfConponent_o *)(v478 + 912),
                                                                                (System_Int32_array **)v1474,
                                                                                v1475,
                                                                                v1476,
                                                                                v1477,
                                                                                v1478,
                                                                                v1479,
                                                                                v1480);
                                                                              v1483 = (ServantVoiceMaster_o *)sub_B0D974(ServantVoiceMaster_TypeInfo, v1481, v1482);
                                                                              ServantVoiceMaster___ctor(v1483, 0LL);
                                                                              if ( !v1483
                                                                                || (v482 = sub_B0D964(
                                                                                             v1483,
                                                                                             *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                              {
                                                                                if ( *v489 <= 0x6Fu )
                                                                                  goto LABEL_569;
                                                                                *(_QWORD *)(v478 + 920) = v1483;
                                                                                sub_B0D840(
                                                                                  (BattleServantConfConponent_o *)(v478 + 920),
                                                                                  (System_Int32_array **)v1483,
                                                                                  v1484,
                                                                                  v1485,
                                                                                  v1486,
                                                                                  v1487,
                                                                                  v1488,
                                                                                  v1489);
                                                                                v1492 = (CombineLimitMaster_o *)sub_B0D974(CombineLimitMaster_TypeInfo, v1490, v1491);
                                                                                CombineLimitMaster___ctor(v1492, 0LL);
                                                                                if ( !v1492
                                                                                  || (v482 = sub_B0D964(
                                                                                               v1492,
                                                                                               *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                {
                                                                                  if ( *v489 <= 0x70u )
                                                                                    goto LABEL_569;
                                                                                  *(_QWORD *)(v478 + 928) = v1492;
                                                                                  sub_B0D840(
                                                                                    (BattleServantConfConponent_o *)(v478 + 928),
                                                                                    (System_Int32_array **)v1492,
                                                                                    v1493,
                                                                                    v1494,
                                                                                    v1495,
                                                                                    v1496,
                                                                                    v1497,
                                                                                    v1498);
                                                                                  v1501 = (CardMaster_o *)sub_B0D974(CardMaster_TypeInfo, v1499, v1500);
                                                                                  CardMaster___ctor(v1501, 0LL);
                                                                                  if ( !v1501
                                                                                    || (v482 = sub_B0D964(
                                                                                                 v1501,
                                                                                                 *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                  {
                                                                                    if ( *v489 <= 0x71u )
                                                                                      goto LABEL_569;
                                                                                    *(_QWORD *)(v478 + 936) = v1501;
                                                                                    sub_B0D840(
                                                                                      (BattleServantConfConponent_o *)(v478 + 936),
                                                                                      (System_Int32_array **)v1501,
                                                                                      v1502,
                                                                                      v1503,
                                                                                      v1504,
                                                                                      v1505,
                                                                                      v1506,
                                                                                      v1507);
                                                                                    v1510 = (CombineQpSvtEquipMaster_o *)sub_B0D974(CombineQpSvtEquipMaster_TypeInfo, v1508, v1509);
                                                                                    CombineQpSvtEquipMaster___ctor(
                                                                                      v1510,
                                                                                      0LL);
                                                                                    if ( !v1510
                                                                                      || (v482 = sub_B0D964(
                                                                                                   v1510,
                                                                                                   *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                    {
                                                                                      if ( *v489 <= 0x72u )
                                                                                        goto LABEL_569;
                                                                                      *(_QWORD *)(v478 + 944) = v1510;
                                                                                      sub_B0D840(
                                                                                        (BattleServantConfConponent_o *)(v478 + 944),
                                                                                        (System_Int32_array **)v1510,
                                                                                        v1511,
                                                                                        v1512,
                                                                                        v1513,
                                                                                        v1514,
                                                                                        v1515,
                                                                                        v1516);
                                                                                      v1519 = (ServantRarityMaster_o *)sub_B0D974(ServantRarityMaster_TypeInfo, v1517, v1518);
                                                                                      ServantRarityMaster___ctor(
                                                                                        v1519,
                                                                                        0LL);
                                                                                      if ( !v1519
                                                                                        || (v482 = sub_B0D964(
                                                                                                     v1519,
                                                                                                     *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                      {
                                                                                        if ( *v489 <= 0x73u )
                                                                                          goto LABEL_569;
                                                                                        *(_QWORD *)(v478 + 952) = v1519;
                                                                                        sub_B0D840(
                                                                                          (BattleServantConfConponent_o *)(v478 + 952),
                                                                                          (System_Int32_array **)v1519,
                                                                                          v1520,
                                                                                          v1521,
                                                                                          v1522,
                                                                                          v1523,
                                                                                          v1524,
                                                                                          v1525);
                                                                                        v1528 = (SetItemMaster_o *)sub_B0D974(SetItemMaster_TypeInfo, v1526, v1527);
                                                                                        SetItemMaster___ctor(v1528, 0LL);
                                                                                        if ( !v1528
                                                                                          || (v482 = sub_B0D964(v1528, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                        {
                                                                                          if ( *v489 <= 0x74u )
                                                                                            goto LABEL_569;
                                                                                          *(_QWORD *)(v478 + 960) = v1528;
                                                                                          sub_B0D840(
                                                                                            (BattleServantConfConponent_o *)(v478 + 960),
                                                                                            (System_Int32_array **)v1528,
                                                                                            v1529,
                                                                                            v1530,
                                                                                            v1531,
                                                                                            v1532,
                                                                                            v1533,
                                                                                            v1534);
                                                                                          v1537 = (RecoverMaster_o *)sub_B0D974(RecoverMaster_TypeInfo, v1535, v1536);
                                                                                          RecoverMaster___ctor(
                                                                                            v1537,
                                                                                            0LL);
                                                                                          if ( !v1537
                                                                                            || (v482 = sub_B0D964(v1537, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                          {
                                                                                            if ( *v489 <= 0x75u )
                                                                                              goto LABEL_569;
                                                                                            *(_QWORD *)(v478 + 968) = v1537;
                                                                                            sub_B0D840(
                                                                                              (BattleServantConfConponent_o *)(v478 + 968),
                                                                                              (System_Int32_array **)v1537,
                                                                                              v1538,
                                                                                              v1539,
                                                                                              v1540,
                                                                                              v1541,
                                                                                              v1542,
                                                                                              v1543);
                                                                                            v1546 = (BannerMaster_o *)sub_B0D974(BannerMaster_TypeInfo, v1544, v1545);
                                                                                            BannerMaster___ctor(
                                                                                              v1546,
                                                                                              0LL);
                                                                                            if ( !v1546
                                                                                              || (v482 = sub_B0D964(v1546, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                            {
                                                                                              if ( *v489 <= 0x76u )
                                                                                                goto LABEL_569;
                                                                                              *(_QWORD *)(v478 + 976) = v1546;
                                                                                              sub_B0D840(
                                                                                                (BattleServantConfConponent_o *)(v478 + 976),
                                                                                                (System_Int32_array **)v1546,
                                                                                                v1547,
                                                                                                v1548,
                                                                                                v1549,
                                                                                                v1550,
                                                                                                v1551,
                                                                                                v1552);
                                                                                              v1555 = (ShopReleaseMaster_o *)sub_B0D974(ShopReleaseMaster_TypeInfo, v1553, v1554);
                                                                                              ShopReleaseMaster___ctor(
                                                                                                v1555,
                                                                                                0LL);
                                                                                              if ( !v1555
                                                                                                || (v482 = sub_B0D964(v1555, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                              {
                                                                                                if ( *v489 <= 0x77u )
                                                                                                  goto LABEL_569;
                                                                                                *(_QWORD *)(v478 + 984) = v1555;
                                                                                                sub_B0D840(
                                                                                                  (BattleServantConfConponent_o *)(v478 + 984),
                                                                                                  (System_Int32_array **)v1555,
                                                                                                  v1556,
                                                                                                  v1557,
                                                                                                  v1558,
                                                                                                  v1559,
                                                                                                  v1560,
                                                                                                  v1561);
                                                                                                v1564 = (EventRewardMaster_o *)sub_B0D974(EventRewardMaster_TypeInfo, v1562, v1563);
                                                                                                EventRewardMaster___ctor(
                                                                                                  v1564,
                                                                                                  0LL);
                                                                                                if ( !v1564 || (v482 = sub_B0D964(v1564, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                {
                                                                                                  if ( *v489 <= 0x78u )
                                                                                                    goto LABEL_569;
                                                                                                  *(_QWORD *)(v478 + 992) = v1564;
                                                                                                  sub_B0D840(
                                                                                                    (BattleServantConfConponent_o *)(v478 + 992),
                                                                                                    (System_Int32_array **)v1564,
                                                                                                    v1565,
                                                                                                    v1566,
                                                                                                    v1567,
                                                                                                    v1568,
                                                                                                    v1569,
                                                                                                    v1570);
                                                                                                  v1573 = (EventDetailMaster_o *)sub_B0D974(EventDetailMaster_TypeInfo, v1571, v1572);
                                                                                                  EventDetailMaster___ctor(
                                                                                                    v1573,
                                                                                                    0LL);
                                                                                                  if ( !v1573 || (v482 = sub_B0D964(v1573, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                  {
                                                                                                    if ( *v489 <= 0x79u )
                                                                                                      goto LABEL_569;
                                                                                                    *(_QWORD *)(v478 + 1000) = v1573;
                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1000), (System_Int32_array **)v1573, v1574, v1575, v1576, v1577, v1578, v1579);
                                                                                                    v1582 = (EventServantMaster_o *)sub_B0D974(EventServantMaster_TypeInfo, v1580, v1581);
                                                                                                    EventServantMaster___ctor(v1582, 0LL);
                                                                                                    if ( !v1582 || (v482 = sub_B0D964(v1582, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                    {
                                                                                                      if ( *v489 <= 0x7Au )
                                                                                                        goto LABEL_569;
                                                                                                      *(_QWORD *)(v478 + 1008) = v1582;
                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1008), (System_Int32_array **)v1582, v1583, v1584, v1585, v1586, v1587, v1588);
                                                                                                      v1591 = (BoxGachaMaster_o *)sub_B0D974(BoxGachaMaster_TypeInfo, v1589, v1590);
                                                                                                      BoxGachaMaster___ctor(v1591, 0LL);
                                                                                                      if ( !v1591 || (v482 = sub_B0D964(v1591, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                      {
                                                                                                        if ( *v489 <= 0x7Bu )
                                                                                                          goto LABEL_569;
                                                                                                        *(_QWORD *)(v478 + 1016) = v1591;
                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1016), (System_Int32_array **)v1591, v1592, v1593, v1594, v1595, v1596, v1597);
                                                                                                        v1600 = (BoxGachaBaseMaster_o *)sub_B0D974(BoxGachaBaseMaster_TypeInfo, v1598, v1599);
                                                                                                        BoxGachaBaseMaster___ctor(v1600, 0LL);
                                                                                                        if ( !v1600 || (v482 = sub_B0D964(v1600, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                        {
                                                                                                          if ( *v489 <= 0x7Cu )
                                                                                                            goto LABEL_569;
                                                                                                          *(_QWORD *)(v478 + 1024) = v1600;
                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1024), (System_Int32_array **)v1600, v1601, v1602, v1603, v1604, v1605, v1606);
                                                                                                          v1609 = (BoxGachaTalkMaster_o *)sub_B0D974(BoxGachaTalkMaster_TypeInfo, v1607, v1608);
                                                                                                          BoxGachaTalkMaster___ctor(v1609, 0LL);
                                                                                                          if ( !v1609 || (v482 = sub_B0D964(v1609, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                          {
                                                                                                            if ( *v489 <= 0x7Du )
                                                                                                              goto LABEL_569;
                                                                                                            *(_QWORD *)(v478 + 1032) = v1609;
                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1032), (System_Int32_array **)v1609, v1610, v1611, v1612, v1613, v1614, v1615);
                                                                                                            v1618 = (UserBoxGachaMaster_o *)sub_B0D974(UserBoxGachaMaster_TypeInfo, v1616, v1617);
                                                                                                            UserBoxGachaMaster___ctor(v1618, 0LL);
                                                                                                            if ( !v1618 || (v482 = sub_B0D964(v1618, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                            {
                                                                                                              if ( *v489 <= 0x7Eu )
                                                                                                                goto LABEL_569;
                                                                                                              *(_QWORD *)(v478 + 1040) = v1618;
                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1040), (System_Int32_array **)v1618, v1619, v1620, v1621, v1622, v1623, v1624);
                                                                                                              v1627 = (BoxGachaHistoryMaster_o *)sub_B0D974(BoxGachaHistoryMaster_TypeInfo, v1625, v1626);
                                                                                                              BoxGachaHistoryMaster___ctor(v1627, 0LL);
                                                                                                              if ( !v1627 || (v482 = sub_B0D964(v1627, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                              {
                                                                                                                if ( *v489 <= 0x7Fu )
                                                                                                                  goto LABEL_569;
                                                                                                                *(_QWORD *)(v478 + 1048) = v1627;
                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1048), (System_Int32_array **)v1627, v1628, v1629, v1630, v1631, v1632, v1633);
                                                                                                                v1636 = (BattleBgMaster_o *)sub_B0D974(BattleBgMaster_TypeInfo, v1634, v1635);
                                                                                                                BattleBgMaster___ctor(v1636, 0LL);
                                                                                                                if ( !v1636 || (v482 = sub_B0D964(v1636, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                {
                                                                                                                  if ( *v489 <= 0x80u )
                                                                                                                    goto LABEL_569;
                                                                                                                  *(_QWORD *)(v478 + 1056) = v1636;
                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1056), (System_Int32_array **)v1636, v1637, v1638, v1639, v1640, v1641, v1642);
                                                                                                                  v1645 = (TipsBattleMaster_o *)sub_B0D974(TipsBattleMaster_TypeInfo, v1643, v1644);
                                                                                                                  TipsBattleMaster___ctor(v1645, 0LL);
                                                                                                                  if ( !v1645 || (v482 = sub_B0D964(v1645, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                  {
                                                                                                                    if ( *v489 <= 0x81u )
                                                                                                                      goto LABEL_569;
                                                                                                                    *(_QWORD *)(v478 + 1064) = v1645;
                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1064), (System_Int32_array **)v1645, v1646, v1647, v1648, v1649, v1650, v1651);
                                                                                                                    v1654 = (UserLoginMaster_o *)sub_B0D974(UserLoginMaster_TypeInfo, v1652, v1653);
                                                                                                                    UserLoginMaster___ctor(v1654, 0LL);
                                                                                                                    if ( !v1654 || (v482 = sub_B0D964(v1654, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                    {
                                                                                                                      if ( *v489 <= 0x82u )
                                                                                                                        goto LABEL_569;
                                                                                                                      *(_QWORD *)(v478 + 1072) = v1654;
                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1072), (System_Int32_array **)v1654, v1655, v1656, v1657, v1658, v1659, v1660);
                                                                                                                      v1663 = (VoiceMaster_o *)sub_B0D974(VoiceMaster_TypeInfo, v1661, v1662);
                                                                                                                      VoiceMaster___ctor(v1663, 0LL);
                                                                                                                      if ( !v1663 || (v482 = sub_B0D964(v1663, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                      {
                                                                                                                        if ( *v489 <= 0x83u )
                                                                                                                          goto LABEL_569;
                                                                                                                        *(_QWORD *)(v478 + 1080) = v1663;
                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1080), (System_Int32_array **)v1663, v1664, v1665, v1666, v1667, v1668, v1669);
                                                                                                                        v1672 = (EventRewardExtraMaster_o *)sub_B0D974(EventRewardExtraMaster_TypeInfo, v1670, v1671);
                                                                                                                        EventRewardExtraMaster___ctor(v1672, 0LL);
                                                                                                                        if ( !v1672 || (v482 = sub_B0D964(v1672, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                        {
                                                                                                                          if ( *v489 <= 0x84u )
                                                                                                                            goto LABEL_569;
                                                                                                                          *(_QWORD *)(v478 + 1088) = v1672;
                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1088), (System_Int32_array **)v1672, v1673, v1674, v1675, v1676, v1677, v1678);
                                                                                                                          v1681 = (EventMissionMaster_o *)sub_B0D974(EventMissionMaster_TypeInfo, v1679, v1680);
                                                                                                                          EventMissionMaster___ctor(v1681, 0LL);
                                                                                                                          if ( !v1681 || (v482 = sub_B0D964(v1681, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                          {
                                                                                                                            if ( *v489 <= 0x85u )
                                                                                                                              goto LABEL_569;
                                                                                                                            *(_QWORD *)(v478 + 1096) = v1681;
                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1096), (System_Int32_array **)v1681, v1682, v1683, v1684, v1685, v1686, v1687);
                                                                                                                            v1690 = (EventMissionActionMaster_o *)sub_B0D974(EventMissionActionMaster_TypeInfo, v1688, v1689);
                                                                                                                            EventMissionActionMaster___ctor(v1690, 0LL);
                                                                                                                            if ( !v1690 || (v482 = sub_B0D964(v1690, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                            {
                                                                                                                              if ( *v489 <= 0x86u )
                                                                                                                                goto LABEL_569;
                                                                                                                              *(_QWORD *)(v478 + 1104) = v1690;
                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1104), (System_Int32_array **)v1690, v1691, v1692, v1693, v1694, v1695, v1696);
                                                                                                                              v1699 = (EventMissionActionAddMaster_o *)sub_B0D974(EventMissionActionAddMaster_TypeInfo, v1697, v1698);
                                                                                                                              EventMissionActionAddMaster___ctor(v1699, 0LL);
                                                                                                                              if ( !v1699 || (v482 = sub_B0D964(v1699, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                              {
                                                                                                                                if ( *v489 <= 0x87u )
                                                                                                                                  goto LABEL_569;
                                                                                                                                *(_QWORD *)(v478 + 1112) = v1699;
                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1112), (System_Int32_array **)v1699, v1700, v1701, v1702, v1703, v1704, v1705);
                                                                                                                                v1708 = (EventMissionConditionMaster_o *)sub_B0D974(EventMissionConditionMaster_TypeInfo, v1706, v1707);
                                                                                                                                EventMissionConditionMaster___ctor(v1708, 0LL);
                                                                                                                                if ( !v1708 || (v482 = sub_B0D964(v1708, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                {
                                                                                                                                  if ( *v489 <= 0x88u )
                                                                                                                                    goto LABEL_569;
                                                                                                                                  *(_QWORD *)(v478 + 1120) = v1708;
                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1120), (System_Int32_array **)v1708, v1709, v1710, v1711, v1712, v1713, v1714);
                                                                                                                                  v1717 = (EventMissionCondDetailMaster_o *)sub_B0D974(EventMissionCondDetailMaster_TypeInfo, v1715, v1716);
                                                                                                                                  EventMissionCondDetailMaster___ctor(v1717, 0LL);
                                                                                                                                  if ( !v1717 || (v482 = sub_B0D964(v1717, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                  {
                                                                                                                                    if ( *v489 <= 0x89u )
                                                                                                                                      goto LABEL_569;
                                                                                                                                    *(_QWORD *)(v478 + 1128) = v1717;
                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1128), (System_Int32_array **)v1717, v1718, v1719, v1720, v1721, v1722, v1723);
                                                                                                                                    v1726 = (EventMissionAddMaster_o *)sub_B0D974(EventMissionAddMaster_TypeInfo, v1724, v1725);
                                                                                                                                    EventMissionAddMaster___ctor(v1726, 0LL);
                                                                                                                                    if ( !v1726 || (v482 = sub_B0D964(v1726, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                    {
                                                                                                                                      if ( *v489 <= 0x8Au )
                                                                                                                                        goto LABEL_569;
                                                                                                                                      *(_QWORD *)(v478 + 1136) = v1726;
                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1136), (System_Int32_array **)v1726, v1727, v1728, v1729, v1730, v1731, v1732);
                                                                                                                                      v1735 = (CompleteMissionMaster_o *)sub_B0D974(CompleteMissionMaster_TypeInfo, v1733, v1734);
                                                                                                                                      CompleteMissionMaster___ctor(v1735, 0LL);
                                                                                                                                      if ( !v1735 || (v482 = sub_B0D964(v1735, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                      {
                                                                                                                                        if ( *v489 <= 0x8Bu )
                                                                                                                                          goto LABEL_569;
                                                                                                                                        *(_QWORD *)(v478 + 1144) = v1735;
                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1144), (System_Int32_array **)v1735, v1736, v1737, v1738, v1739, v1740, v1741);
                                                                                                                                        v1744 = (EventRewardSetMaster_o *)sub_B0D974(EventRewardSetMaster_TypeInfo, v1742, v1743);
                                                                                                                                        EventRewardSetMaster___ctor(v1744, 0LL);
                                                                                                                                        if ( !v1744 || (v482 = sub_B0D964(v1744, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                        {
                                                                                                                                          if ( *v489 <= 0x8Cu )
                                                                                                                                            goto LABEL_569;
                                                                                                                                          *(_QWORD *)(v478 + 1152) = v1744;
                                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1152), (System_Int32_array **)v1744, v1745, v1746, v1747, v1748, v1749, v1750);
                                                                                                                                          v1753 = (UserEventMissionMaster_o *)sub_B0D974(UserEventMissionMaster_TypeInfo, v1751, v1752);
                                                                                                                                          UserEventMissionMaster___ctor(v1753, 0LL);
                                                                                                                                          if ( !v1753 || (v482 = sub_B0D964(v1753, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                          {
                                                                                                                                            if ( *v489 <= 0x8Du )
                                                                                                                                              goto LABEL_569;
                                                                                                                                            *(_QWORD *)(v478 + 1160) = v1753;
                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1160), (System_Int32_array **)v1753, v1754, v1755, v1756, v1757, v1758, v1759);
                                                                                                                                            v1762 = (UserEventMissionCondDetailMaster_o *)sub_B0D974(UserEventMissionCondDetailMaster_TypeInfo, v1760, v1761);
                                                                                                                                            UserEventMissionCondDetailMaster___ctor(v1762, 0LL);
                                                                                                                                            if ( !v1762 || (v482 = sub_B0D964(v1762, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                            {
                                                                                                                                              if ( *v489 <= 0x8Eu )
                                                                                                                                                goto LABEL_569;
                                                                                                                                              *(_QWORD *)(v478 + 1168) = v1762;
                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1168), (System_Int32_array **)v1762, v1763, v1764, v1765, v1766, v1767, v1768);
                                                                                                                                              v1771 = (BoxGachaBaseDetailMaster_o *)sub_B0D974(BoxGachaBaseDetailMaster_TypeInfo, v1769, v1770);
                                                                                                                                              BoxGachaBaseDetailMaster___ctor(v1771, 0LL);
                                                                                                                                              if ( !v1771 || (v482 = sub_B0D964(v1771, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                              {
                                                                                                                                                if ( *v489 <= 0x8Fu )
                                                                                                                                                  goto LABEL_569;
                                                                                                                                                *(_QWORD *)(v478 + 1176) = v1771;
                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1176), (System_Int32_array **)v1771, v1772, v1773, v1774, v1775, v1776, v1777);
                                                                                                                                                v1780 = (UserServantLeaderMaster_o *)sub_B0D974(UserServantLeaderMaster_TypeInfo, v1778, v1779);
                                                                                                                                                UserServantLeaderMaster___ctor(v1780, 0LL);
                                                                                                                                                if ( !v1780 || (v482 = sub_B0D964(v1780, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                {
                                                                                                                                                  if ( *v489 <= 0x90u )
                                                                                                                                                    goto LABEL_569;
                                                                                                                                                  *(_QWORD *)(v478 + 1184) = v1780;
                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1184), (System_Int32_array **)v1780, v1781, v1782, v1783, v1784, v1785, v1786);
                                                                                                                                                  v1789 = (ClosedMessageMaster_o *)sub_B0D974(ClosedMessageMaster_TypeInfo, v1787, v1788);
                                                                                                                                                  ClosedMessageMaster___ctor(v1789, 0LL);
                                                                                                                                                  if ( !v1789 || (v482 = sub_B0D964(v1789, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                  {
                                                                                                                                                    if ( *v489 <= 0x91u )
                                                                                                                                                      goto LABEL_569;
                                                                                                                                                    *(_QWORD *)(v478 + 1192) = v1789;
                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1192), (System_Int32_array **)v1789, v1790, v1791, v1792, v1793, v1794, v1795);
                                                                                                                                                    v1798 = (FunctionGroupMaster_o *)sub_B0D974(FunctionGroupMaster_TypeInfo, v1796, v1797);
                                                                                                                                                    FunctionGroupMaster___ctor(v1798, 0LL);
                                                                                                                                                    if ( !v1798 || (v482 = sub_B0D964(v1798, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                    {
                                                                                                                                                      if ( *v489 <= 0x92u )
                                                                                                                                                        goto LABEL_569;
                                                                                                                                                      *(_QWORD *)(v478 + 1200) = v1798;
                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1200), (System_Int32_array **)v1798, v1799, v1800, v1801, v1802, v1803, v1804);
                                                                                                                                                      v1807 = (EventRaidMaster_o *)sub_B0D974(EventRaidMaster_TypeInfo, v1805, v1806);
                                                                                                                                                      EventRaidMaster___ctor(v1807, 0LL);
                                                                                                                                                      if ( !v1807 || (v482 = sub_B0D964(v1807, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                      {
                                                                                                                                                        if ( *v489 <= 0x93u )
                                                                                                                                                          goto LABEL_569;
                                                                                                                                                        *(_QWORD *)(v478 + 1208) = v1807;
                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1208), (System_Int32_array **)v1807, v1808, v1809, v1810, v1811, v1812, v1813);
                                                                                                                                                        v1816 = (TotalEventRaidMaster_o *)sub_B0D974(TotalEventRaidMaster_TypeInfo, v1814, v1815);
                                                                                                                                                        TotalEventRaidMaster___ctor(v1816, 0LL);
                                                                                                                                                        if ( !v1816 || (v482 = sub_B0D964(v1816, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                        {
                                                                                                                                                          if ( *v489 > 0x94u )
                                                                                                                                                          {
                                                                                                                                                            *(_QWORD *)(v478 + 1216) = v1816;
                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1216), (System_Int32_array **)v1816, v1817, v1818, v1819, v1820, v1821, v1822);
                                                                                                                                                            v1825 = (UserEventRaidMaster_o *)sub_B0D974(UserEventRaidMaster_TypeInfo, v1823, v1824);
                                                                                                                                                            UserEventRaidMaster___ctor(v1825, 0LL);
                                                                                                                                                            if ( !v1825 || (v1826 = sub_B0D964(v1825, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                            {
                                                                                                                                                              if ( *v489 <= 0x95u )
                                                                                                                                                                goto LABEL_570;
                                                                                                                                                              *(_QWORD *)(v478 + 1224) = v1825;
                                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1224), (System_Int32_array **)v1825, v1827, v1828, v1829, v1830, v1831, v1832);
                                                                                                                                                              v1835 = (EventPointMaster_o *)sub_B0D974(EventPointMaster_TypeInfo, v1833, v1834);
                                                                                                                                                              EventPointMaster___ctor(v1835, 0LL);
                                                                                                                                                              if ( !v1835 || (v1826 = sub_B0D964(v1835, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                              {
                                                                                                                                                                if ( *v489 <= 0x96u )
                                                                                                                                                                  goto LABEL_570;
                                                                                                                                                                *(_QWORD *)(v478 + 1232) = v1835;
                                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1232), (System_Int32_array **)v1835, v1836, v1837, v1838, v1839, v1840, v1841);
                                                                                                                                                                v1844 = (EventPointGroupMaster_o *)sub_B0D974(EventPointGroupMaster_TypeInfo, v1842, v1843);
                                                                                                                                                                EventPointGroupMaster___ctor(v1844, 0LL);
                                                                                                                                                                if ( !v1844 || (v1826 = sub_B0D964(v1844, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                {
                                                                                                                                                                  if ( *v489 <= 0x97u )
                                                                                                                                                                    goto LABEL_570;
                                                                                                                                                                  *(_QWORD *)(v478 + 1240) = v1844;
                                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1240), (System_Int32_array **)v1844, v1845, v1846, v1847, v1848, v1849, v1850);
                                                                                                                                                                  v1853 = (TotalEventPointMaster_o *)sub_B0D974(TotalEventPointMaster_TypeInfo, v1851, v1852);
                                                                                                                                                                  TotalEventPointMaster___ctor(v1853, 0LL);
                                                                                                                                                                  if ( !v1853 || (v1826 = sub_B0D964(v1853, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                  {
                                                                                                                                                                    if ( *v489 <= 0x98u )
                                                                                                                                                                      goto LABEL_570;
                                                                                                                                                                    *(_QWORD *)(v478 + 1248) = v1853;
                                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1248), (System_Int32_array **)v1853, v1854, v1855, v1856, v1857, v1858, v1859);
                                                                                                                                                                    v1862 = (UserEventPointMaster_o *)sub_B0D974(UserEventPointMaster_TypeInfo, v1860, v1861);
                                                                                                                                                                    UserEventPointMaster___ctor(v1862, 0LL);
                                                                                                                                                                    if ( !v1862 || (v1826 = sub_B0D964(v1862, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                    {
                                                                                                                                                                      if ( *v489 <= 0x99u )
                                                                                                                                                                        goto LABEL_570;
                                                                                                                                                                      *(_QWORD *)(v478 + 1256) = v1862;
                                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1256), (System_Int32_array **)v1862, v1863, v1864, v1865, v1866, v1867, v1868);
                                                                                                                                                                      v1871 = (EventPointUpperMaster_o *)sub_B0D974(EventPointUpperMaster_TypeInfo, v1869, v1870);
                                                                                                                                                                      EventPointUpperMaster___ctor(v1871, 0LL);
                                                                                                                                                                      if ( !v1871 || (v1826 = sub_B0D964(v1871, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                      {
                                                                                                                                                                        if ( *v489 <= 0x9Au )
                                                                                                                                                                          goto LABEL_570;
                                                                                                                                                                        *(_QWORD *)(v478 + 1264) = v1871;
                                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1264), (System_Int32_array **)v1871, v1872, v1873, v1874, v1875, v1876, v1877);
                                                                                                                                                                        v1880 = (EventPointUpperReleaseMaster_o *)sub_B0D974(EventPointUpperReleaseMaster_TypeInfo, v1878, v1879);
                                                                                                                                                                        EventPointUpperReleaseMaster___ctor(v1880, 0LL);
                                                                                                                                                                        if ( !v1880 || (v1826 = sub_B0D964(v1880, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                        {
                                                                                                                                                                          if ( *v489 <= 0x9Bu )
                                                                                                                                                                            goto LABEL_570;
                                                                                                                                                                          *(_QWORD *)(v478 + 1272) = v1880;
                                                                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1272), (System_Int32_array **)v1880, v1881, v1882, v1883, v1884, v1885, v1886);
                                                                                                                                                                          v1889 = (EventRaceMaster_o *)sub_B0D974(EventRaceMaster_TypeInfo, v1887, v1888);
                                                                                                                                                                          EventRaceMaster___ctor(v1889, 0LL);
                                                                                                                                                                          if ( !v1889 || (v1826 = sub_B0D964(v1889, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                          {
                                                                                                                                                                            if ( *v489 <= 0x9Cu )
                                                                                                                                                                              goto LABEL_570;
                                                                                                                                                                            *(_QWORD *)(v478 + 1280) = v1889;
                                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1280), (System_Int32_array **)v1889, v1890, v1891, v1892, v1893, v1894, v1895);
                                                                                                                                                                            v1898 = (EventRaceResultMaster_o *)sub_B0D974(EventRaceResultMaster_TypeInfo, v1896, v1897);
                                                                                                                                                                            EventRaceResultMaster___ctor(v1898, 0LL);
                                                                                                                                                                            if ( !v1898 || (v1826 = sub_B0D964(v1898, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                            {
                                                                                                                                                                              if ( *v489 <= 0x9Du )
                                                                                                                                                                                goto LABEL_570;
                                                                                                                                                                              *(_QWORD *)(v478 + 1288) = v1898;
                                                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1288), (System_Int32_array **)v1898, v1899, v1900, v1901, v1902, v1903, v1904);
                                                                                                                                                                              v1907 = (QuestRacePointMaster_o *)sub_B0D974(QuestRacePointMaster_TypeInfo, v1905, v1906);
                                                                                                                                                                              QuestRacePointMaster___ctor(v1907, 0LL);
                                                                                                                                                                              if ( !v1907 || (v1826 = sub_B0D964(v1907, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                              {
                                                                                                                                                                                if ( *v489 <= 0x9Eu )
                                                                                                                                                                                  goto LABEL_570;
                                                                                                                                                                                *(_QWORD *)(v478 + 1296) = v1907;
                                                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1296), (System_Int32_array **)v1907, v1908, v1909, v1910, v1911, v1912, v1913);
                                                                                                                                                                                v1916 = (UserEventRaceMaster_o *)sub_B0D974(UserEventRaceMaster_TypeInfo, v1914, v1915);
                                                                                                                                                                                UserEventRaceMaster___ctor(v1916, 0LL);
                                                                                                                                                                                if ( !v1916 || (v1826 = sub_B0D964(v1916, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                {
                                                                                                                                                                                  if ( *v489 <= 0x9Fu )
                                                                                                                                                                                    goto LABEL_570;
                                                                                                                                                                                  *(_QWORD *)(v478 + 1304) = v1916;
                                                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1304), (System_Int32_array **)v1916, v1917, v1918, v1919, v1920, v1921, v1922);
                                                                                                                                                                                  v1925 = (EventScriptMaster_o *)sub_B0D974(EventScriptMaster_TypeInfo, v1923, v1924);
                                                                                                                                                                                  EventScriptMaster___ctor(v1925, 0LL);
                                                                                                                                                                                  if ( !v1925 || (v1826 = sub_B0D964(v1925, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                  {
                                                                                                                                                                                    if ( *v489 <= 0xA0u )
                                                                                                                                                                                      goto LABEL_570;
                                                                                                                                                                                    *(_QWORD *)(v478 + 1312) = v1925;
                                                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1312), (System_Int32_array **)v1925, v1926, v1927, v1928, v1929, v1930, v1931);
                                                                                                                                                                                    v1934 = (EventScriptReleaseMaster_o *)sub_B0D974(EventScriptReleaseMaster_TypeInfo, v1932, v1933);
                                                                                                                                                                                    EventScriptReleaseMaster___ctor(v1934, 0LL);
                                                                                                                                                                                    if ( !v1934 || (v1826 = sub_B0D964(v1934, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                    {
                                                                                                                                                                                      if ( *v489 <= 0xA1u )
                                                                                                                                                                                        goto LABEL_570;
                                                                                                                                                                                      *(_QWORD *)(v478 + 1320) = v1934;
                                                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1320), (System_Int32_array **)v1934, v1935, v1936, v1937, v1938, v1939, v1940);
                                                                                                                                                                                      v1943 = (UserPresentHistoryMaster_o *)sub_B0D974(UserPresentHistoryMaster_TypeInfo, v1941, v1942);
                                                                                                                                                                                      UserPresentHistoryMaster___ctor(v1943, 0LL);
                                                                                                                                                                                      if ( !v1943 || (v1826 = sub_B0D964(v1943, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                      {
                                                                                                                                                                                        if ( *v489 <= 0xA2u )
                                                                                                                                                                                          goto LABEL_570;
                                                                                                                                                                                        *(_QWORD *)(v478 + 1328) = v1943;
                                                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1328), (System_Int32_array **)v1943, v1944, v1945, v1946, v1947, v1948, v1949);
                                                                                                                                                                                        v1952 = (MstMissionMaster_o *)sub_B0D974(MstMissionMaster_TypeInfo, v1950, v1951);
                                                                                                                                                                                        MstMissionMaster___ctor(v1952, 0LL);
                                                                                                                                                                                        if ( !v1952 || (v1826 = sub_B0D964(v1952, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                        {
                                                                                                                                                                                          if ( *v489 <= 0xA3u )
                                                                                                                                                                                            goto LABEL_570;
                                                                                                                                                                                          *(_QWORD *)(v478 + 1336) = v1952;
                                                                                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1336), (System_Int32_array **)v1952, v1953, v1954, v1955, v1956, v1957, v1958);
                                                                                                                                                                                          v1961 = (ServantExceedMaster_o *)sub_B0D974(ServantExceedMaster_TypeInfo, v1959, v1960);
                                                                                                                                                                                          ServantExceedMaster___ctor(v1961, 0LL);
                                                                                                                                                                                          if ( !v1961 || (v1826 = sub_B0D964(v1961, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                          {
                                                                                                                                                                                            if ( *v489 <= 0xA4u )
                                                                                                                                                                                              goto LABEL_570;
                                                                                                                                                                                            *(_QWORD *)(v478 + 1344) = v1961;
                                                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1344), (System_Int32_array **)v1961, v1962, v1963, v1964, v1965, v1966, v1967);
                                                                                                                                                                                            v1970 = (PartialMaintenanceMaster_o *)sub_B0D974(PartialMaintenanceMaster_TypeInfo, v1968, v1969);
                                                                                                                                                                                            PartialMaintenanceMaster___ctor(v1970, 0LL);
                                                                                                                                                                                            if ( !v1970 || (v1826 = sub_B0D964(v1970, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                            {
                                                                                                                                                                                              if ( *v489 <= 0xA5u )
                                                                                                                                                                                                goto LABEL_570;
                                                                                                                                                                                              *(_QWORD *)(v478 + 1352) = v1970;
                                                                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1352), (System_Int32_array **)v1970, v1971, v1972, v1973, v1974, v1975, v1976);
                                                                                                                                                                                              v1979 = (GuideMaster_o *)sub_B0D974(GuideMaster_TypeInfo, v1977, v1978);
                                                                                                                                                                                              GuideMaster___ctor(v1979, 0LL);
                                                                                                                                                                                              if ( !v1979 || (v1826 = sub_B0D964(v1979, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                              {
                                                                                                                                                                                                if ( *v489 <= 0xA6u )
                                                                                                                                                                                                  goto LABEL_570;
                                                                                                                                                                                                *(_QWORD *)(v478 + 1360) = v1979;
                                                                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1360), (System_Int32_array **)v1979, v1980, v1981, v1982, v1983, v1984, v1985);
                                                                                                                                                                                                v1988 = (MstMissionDisplayInfoMaster_o *)sub_B0D974(MstMissionDisplayInfoMaster_TypeInfo, v1986, v1987);
                                                                                                                                                                                                MstMissionDisplayInfoMaster___ctor(v1988, 0LL);
                                                                                                                                                                                                if ( !v1988 || (v1826 = sub_B0D964(v1988, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                {
                                                                                                                                                                                                  if ( *v489 <= 0xA7u )
                                                                                                                                                                                                    goto LABEL_570;
                                                                                                                                                                                                  *(_QWORD *)(v478 + 1368) = v1988;
                                                                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1368), (System_Int32_array **)v1988, v1989, v1990, v1991, v1992, v1993, v1994);
                                                                                                                                                                                                  v1997 = (GachaGroupMaster_o *)sub_B0D974(GachaGroupMaster_TypeInfo, v1995, v1996);
                                                                                                                                                                                                  GachaGroupMaster___ctor(v1997, 0LL);
                                                                                                                                                                                                  if ( !v1997 || (v1826 = sub_B0D964(v1997, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if ( *v489 <= 0xA8u )
                                                                                                                                                                                                      goto LABEL_570;
                                                                                                                                                                                                    *(_QWORD *)(v478 + 1376) = v1997;
                                                                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1376), (System_Int32_array **)v1997, v1998, v1999, v2000, v2001, v2002, v2003);
                                                                                                                                                                                                    v2006 = (QuestResetMaster_o *)sub_B0D974(QuestResetMaster_TypeInfo, v2004, v2005);
                                                                                                                                                                                                    QuestResetMaster___ctor(v2006, 0LL);
                                                                                                                                                                                                    if ( !v2006 || (v1826 = sub_B0D964(v2006, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if ( *v489 <= 0xA9u )
                                                                                                                                                                                                        goto LABEL_570;
                                                                                                                                                                                                      *(_QWORD *)(v478 + 1384) = v2006;
                                                                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1384), (System_Int32_array **)v2006, v2007, v2008, v2009, v2010, v2011, v2012);
                                                                                                                                                                                                      v2015 = (WarAddMaster_o *)sub_B0D974(WarAddMaster_TypeInfo, v2013, v2014);
                                                                                                                                                                                                      WarAddMaster___ctor(v2015, 0LL);
                                                                                                                                                                                                      if ( !v2015 || (v1826 = sub_B0D964(v2015, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if ( *v489 <= 0xAAu )
                                                                                                                                                                                                          goto LABEL_570;
                                                                                                                                                                                                        *(_QWORD *)(v478 + 1392) = v2015;
                                                                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1392), (System_Int32_array **)v2015, v2016, v2017, v2018, v2019, v2020, v2021);
                                                                                                                                                                                                        v2024 = (EventItemDisplayMaster_o *)sub_B0D974(EventItemDisplayMaster_TypeInfo, v2022, v2023);
                                                                                                                                                                                                        EventItemDisplayMaster___ctor(v2024, 0LL);
                                                                                                                                                                                                        if ( !v2024 || (v1826 = sub_B0D964(v2024, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if ( *v489 <= 0xABu )
                                                                                                                                                                                                            goto LABEL_570;
                                                                                                                                                                                                          *(_QWORD *)(v478 + 1400) = v2024;
                                                                                                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1400), (System_Int32_array **)v2024, v2025, v2026, v2027, v2028, v2029, v2030);
                                                                                                                                                                                                          v2033 = (EventItemDisplayGroupMaster_o *)sub_B0D974(EventItemDisplayGroupMaster_TypeInfo, v2031, v2032);
                                                                                                                                                                                                          EventItemDisplayGroupMaster___ctor(v2033, 0LL);
                                                                                                                                                                                                          if ( !v2033 || (v1826 = sub_B0D964(v2033, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if ( *v489 <= 0xACu )
                                                                                                                                                                                                              goto LABEL_570;
                                                                                                                                                                                                            *(_QWORD *)(v478 + 1408) = v2033;
                                                                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1408), (System_Int32_array **)v2033, v2034, v2035, v2036, v2037, v2038, v2039);
                                                                                                                                                                                                            v2042 = (EventItemDisplayReleaseMaster_o *)sub_B0D974(EventItemDisplayReleaseMaster_TypeInfo, v2040, v2041);
                                                                                                                                                                                                            EventItemDisplayReleaseMaster___ctor(v2042, 0LL);
                                                                                                                                                                                                            if ( !v2042 || (v1826 = sub_B0D964(v2042, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if ( *v489 <= 0xADu )
                                                                                                                                                                                                                goto LABEL_570;
                                                                                                                                                                                                              *(_QWORD *)(v478 + 1416) = v2042;
                                                                                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1416), (System_Int32_array **)v2042, v2043, v2044, v2045, v2046, v2047, v2048);
                                                                                                                                                                                                              v2051 = (EventTutorialMaster_o *)sub_B0D974(EventTutorialMaster_TypeInfo, v2049, v2050);
                                                                                                                                                                                                              EventTutorialMaster___ctor(v2051, 0LL);
                                                                                                                                                                                                              if ( !v2051 || (v1826 = sub_B0D964(v2051, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                              {
                                                                                                                                                                                                                if ( *v489 <= 0xAEu )
                                                                                                                                                                                                                  goto LABEL_570;
                                                                                                                                                                                                                *(_QWORD *)(v478 + 1424) = v2051;
                                                                                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1424), (System_Int32_array **)v2051, v2052, v2053, v2054, v2055, v2056, v2057);
                                                                                                                                                                                                                v2060 = (EventTutorialCondMaster_o *)sub_B0D974(EventTutorialCondMaster_TypeInfo, v2058, v2059);
                                                                                                                                                                                                                EventTutorialCondMaster___ctor(v2060, 0LL);
                                                                                                                                                                                                                if ( !v2060 || (v1826 = sub_B0D964(v2060, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if ( *v489 <= 0xAFu )
                                                                                                                                                                                                                    goto LABEL_570;
                                                                                                                                                                                                                  *(_QWORD *)(v478 + 1432) = v2060;
                                                                                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1432), (System_Int32_array **)v2060, v2061, v2062, v2063, v2064, v2065, v2066);
                                                                                                                                                                                                                  v2069 = (VoiceReleaseMaster_o *)sub_B0D974(VoiceReleaseMaster_TypeInfo, v2067, v2068);
                                                                                                                                                                                                                  VoiceReleaseMaster___ctor(v2069, 0LL);
                                                                                                                                                                                                                  if ( !v2069 || (v1826 = sub_B0D964(v2069, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    if ( *v489 <= 0xB0u )
                                                                                                                                                                                                                      goto LABEL_570;
                                                                                                                                                                                                                    *(_QWORD *)(v478 + 1440) = v2069;
                                                                                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1440), (System_Int32_array **)v2069, v2070, v2071, v2072, v2073, v2074, v2075);
                                                                                                                                                                                                                    v2078 = (EventSuperBossMaster_o *)sub_B0D974(EventSuperBossMaster_TypeInfo, v2076, v2077);
                                                                                                                                                                                                                    EventSuperBossMaster___ctor(v2078, 0LL);
                                                                                                                                                                                                                    if ( !v2078 || (v1826 = sub_B0D964(v2078, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if ( *v489 <= 0xB1u )
                                                                                                                                                                                                                        goto LABEL_570;
                                                                                                                                                                                                                      *(_QWORD *)(v478 + 1448) = v2078;
                                                                                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1448), (System_Int32_array **)v2078, v2079, v2080, v2081, v2082, v2083, v2084);
                                                                                                                                                                                                                      v2087 = (UserSuperBossMaster_o *)sub_B0D974(UserSuperBossMaster_TypeInfo, v2085, v2086);
                                                                                                                                                                                                                      UserSuperBossMaster___ctor(v2087, 0LL);
                                                                                                                                                                                                                      if ( !v2087 || (v1826 = sub_B0D964(v2087, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        if ( *v489 <= 0xB2u )
                                                                                                                                                                                                                          goto LABEL_570;
                                                                                                                                                                                                                        *(_QWORD *)(v478 + 1456) = v2087;
                                                                                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1456), (System_Int32_array **)v2087, v2088, v2089, v2090, v2091, v2092, v2093);
                                                                                                                                                                                                                        v2096 = (QuestScriptMaster_o *)sub_B0D974(QuestScriptMaster_TypeInfo, v2094, v2095);
                                                                                                                                                                                                                        QuestScriptMaster___ctor(v2096, 0LL);
                                                                                                                                                                                                                        if ( !v2096 || (v1826 = sub_B0D964(v2096, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if ( *v489 <= 0xB3u )
                                                                                                                                                                                                                            goto LABEL_570;
                                                                                                                                                                                                                          *(_QWORD *)(v478 + 1464) = v2096;
                                                                                                                                                                                                                          sub_B0D840((BattleServantConfConponent_o *)(v478 + 1464), (System_Int32_array **)v2096, v2097, v2098, v2099, v2100, v2101, v2102);
                                                                                                                                                                                                                          v2105 = (QuestScriptReleaseMaster_o *)sub_B0D974(QuestScriptReleaseMaster_TypeInfo, v2103, v2104);
                                                                                                                                                                                                                          QuestScriptReleaseMaster___ctor(v2105, 0LL);
                                                                                                                                                                                                                          if ( !v2105 || (v1826 = sub_B0D964(v2105, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            if ( *v489 <= 0xB4u )
                                                                                                                                                                                                                              goto LABEL_570;
                                                                                                                                                                                                                            *(_QWORD *)(v478 + 1472) = v2105;
                                                                                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1472), (System_Int32_array **)v2105, v2106, v2107, v2108, v2109, v2110, v2111);
                                                                                                                                                                                                                            v2114 = (MaterialFolderMaster_o *)sub_B0D974(MaterialFolderMaster_TypeInfo, v2112, v2113);
                                                                                                                                                                                                                            MaterialFolderMaster___ctor(v2114, 0LL);
                                                                                                                                                                                                                            if ( !v2114 || (v1826 = sub_B0D964(v2114, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if ( *v489 <= 0xB5u )
                                                                                                                                                                                                                                goto LABEL_570;
                                                                                                                                                                                                                              *(_QWORD *)(v478 + 1480) = v2114;
                                                                                                                                                                                                                              sub_B0D840((BattleServantConfConponent_o *)(v478 + 1480), (System_Int32_array **)v2114, v2115, v2116, v2117, v2118, v2119, v2120);
                                                                                                                                                                                                                              v2123 = (RestrictionMaster_o *)sub_B0D974(RestrictionMaster_TypeInfo, v2121, v2122);
                                                                                                                                                                                                                              RestrictionMaster___ctor(v2123, 0LL);
                                                                                                                                                                                                                              if ( !v2123 || (v1826 = sub_B0D964(v2123, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                if ( *v489 <= 0xB6u )
                                                                                                                                                                                                                                  goto LABEL_570;
                                                                                                                                                                                                                                *(_QWORD *)(v478 + 1488) = v2123;
                                                                                                                                                                                                                                sub_B0D840((BattleServantConfConponent_o *)(v478 + 1488), (System_Int32_array **)v2123, v2124, v2125, v2126, v2127, v2128, v2129);
                                                                                                                                                                                                                                v2132 = (QuestRestrictionMaster_o *)sub_B0D974(QuestRestrictionMaster_TypeInfo, v2130, v2131);
                                                                                                                                                                                                                                QuestRestrictionMaster___ctor(v2132, 0LL);
                                                                                                                                                                                                                                if ( !v2132 || (v1826 = sub_B0D964(v2132, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if ( *v489 <= 0xB7u )
                                                                                                                                                                                                                                    goto LABEL_570;
                                                                                                                                                                                                                                  *(_QWORD *)(v478 + 1496) = v2132;
                                                                                                                                                                                                                                  sub_B0D840((BattleServantConfConponent_o *)(v478 + 1496), (System_Int32_array **)v2132, v2133, v2134, v2135, v2136, v2137, v2138);
                                                                                                                                                                                                                                  v2141 = (ServantVoiceRelationMaster_o *)sub_B0D974(ServantVoiceRelationMaster_TypeInfo, v2139, v2140);
                                                                                                                                                                                                                                  ServantVoiceRelationMaster___ctor(v2141, 0LL);
                                                                                                                                                                                                                                  if ( !v2141 || (v1826 = sub_B0D964(v2141, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    if ( *v489 <= 0xB8u )
                                                                                                                                                                                                                                      goto LABEL_570;
                                                                                                                                                                                                                                    *(_QWORD *)(v478 + 1504) = v2141;
                                                                                                                                                                                                                                    sub_B0D840((BattleServantConfConponent_o *)(v478 + 1504), (System_Int32_array **)v2141, v2142, v2143, v2144, v2145, v2146, v2147);
                                                                                                                                                                                                                                    v2150 = (ShopDetailMaster_o *)sub_B0D974(ShopDetailMaster_TypeInfo, v2148, v2149);
                                                                                                                                                                                                                                    ShopDetailMaster___ctor(v2150, 0LL);
                                                                                                                                                                                                                                    if ( !v2150 || (v1826 = sub_B0D964(v2150, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if ( *v489 <= 0xB9u )
                                                                                                                                                                                                                                        goto LABEL_570;
                                                                                                                                                                                                                                      *(_QWORD *)(v478 + 1512) = v2150;
                                                                                                                                                                                                                                      sub_B0D840((BattleServantConfConponent_o *)(v478 + 1512), (System_Int32_array **)v2150, v2151, v2152, v2153, v2154, v2155, v2156);
                                                                                                                                                                                                                                      v2159 = (ServantScriptAddMaster_o *)sub_B0D974(ServantScriptAddMaster_TypeInfo, v2157, v2158);
                                                                                                                                                                                                                                      ServantScriptAddMaster___ctor(v2159, 0LL);
                                                                                                                                                                                                                                      if ( !v2159 || (v1826 = sub_B0D964(v2159, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                        if ( *v489 <= 0xBAu )
                                                                                                                                                                                                                                          goto LABEL_570;
                                                                                                                                                                                                                                        *(_QWORD *)(v478 + 1520) = v2159;
                                                                                                                                                                                                                                        sub_B0D840((BattleServantConfConponent_o *)(v478 + 1520), (System_Int32_array **)v2159, v2160, v2161, v2162, v2163, v2164, v2165);
                                                                                                                                                                                                                                        v2168 = (CombineMaster_o *)sub_B0D974(CombineMaster_TypeInfo, v2166, v2167);
                                                                                                                                                                                                                                        CombineMaster___ctor(v2168, 0LL);
                                                                                                                                                                                                                                        if ( !v2168 || (v1826 = sub_B0D964(v2168, *(_QWORD *)(*(_QWORD *)v478 + 64LL))) != 0 )
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if ( *v489 > 0xBBu )
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            *(_QWORD *)(v478 + 1528) = v2168;
                                                                                                                                                                                                                                            sub_B0D840((BattleServantConfConponent_o *)(v478 + 1528), (System_Int32_array **)v2168, v2169, v2170, v2171, v2172, v2173, v2174);
                                                                                                                                                                                                                                            JUMPOUT(0x1A09CA4LL);
                                                                                                                                                                                                                                          }
LABEL_570:
                                                                                                                                                                                                                                          v2176 = sub_B0D9A8(v1826);
                                                                                                                                                                                                                                          sub_B0D948(v2176, 0LL);
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
                                                                                                                                                            v2179 = sub_B0D99C(v1826);
                                                                                                                                                            sub_B0D948(v2179, 0LL);
                                                                                                                                                          }
LABEL_569:
                                                                                                                                                          v2175 = sub_B0D9A8(v482);
                                                                                                                                                          sub_B0D948(v2175, 0LL);
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
      v2180 = sub_B0D99C(v482);
      sub_B0D948(v2180, 0LL);
    }
  }
LABEL_572:
  v2178 = sub_B0D99C(v482);
  sub_B0D948(v2178, 0LL);
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

  if ( (byte_421608C & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v2);
    byte_421608C = 1;
  }
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
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v6 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v8 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v8);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  Il2CppObject **p_lockCountObj; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  unsigned int i; // w22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  System_String_o *v20; // x21
  unsigned int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4216089 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_8652/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v8);
    byte_4216089 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.lockCountObj = (Il2CppObject *)v9;
  p_lockCountObj = &this->fields.lockCountObj;
  sub_B0D840((BattleServantConfConponent_o *)p_lockCountObj, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  for ( i = 0; i < 0x3E6; ++i )
  {
    v21 = i + 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v19 = System_String__Format((System_String_o *)StringLiteral_8652/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v18, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get(v19, 0LL);
    if ( System_String__op_Equality(v20, v19, 0LL) )
      break;
    if ( !*p_lockCountObj )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_lockCountObj,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  }
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMasterData_WarQuestSelectionMaster_(
        DataManager_o *this,
        const MethodInfo_17145A8 *method)
{
  const MethodInfo_17145A8 *_1_TMaster; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Type_o *TypeFromHandle; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *masterDataBytes; // x8
  WarBoardEvalValueSquare_CalcEval_o *v12; // x20
  WarQuestSelectionMaster_o *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v15; // x19
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x19
  __int64 v19[2]; // [xsp+0h] [xbp-40h] BYREF
  int v20; // [xsp+10h] [xbp-30h]
  int v21; // [xsp+1Ch] [xbp-24h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v23; // 0:w0.4

  _1_TMaster = method;
  if ( (byte_421436D & 1) == 0 )
  {
    sub_B0D8A4(&DataMasterBase_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Debug_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&DataNameKind_Kind_TypeInfo, v7);
    sub_B0D8A4(&System_Type_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_20474/*"master[{0}] is null[{1}:{2}]"*/, v9);
    byte_421436D = 1;
  }
  value = 0LL;
  if ( (BYTE3(DataMasterBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataMasterBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataMasterBase_TypeInfo);
  }
  TypeFromHandle = (System_Type_o *)((__int64 (*)(void))_1_TMaster->rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->methodPointer)();
  masterDataBytes = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.masterDataBytes;
  if ( !masterDataBytes )
    goto LABEL_23;
  LODWORD(v12) = (_DWORD)TypeFromHandle;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         masterDataBytes,
         (int32_t)TypeFromHandle,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v12 = value;
    _1_TMaster = (const MethodInfo_17145A8 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (_1_TMaster[3].token & 0x10000) == 0 )
      sub_AA65A4(_1_TMaster);
    if ( !v12 )
      return 0LL;
    result = (WarQuestSelectionMaster_o *)sub_B0D964(v12, _1_TMaster);
    if ( result )
      return result;
    sub_B0DC70(v12);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v23.fields.value = (int)_2_TMaster;
  TypeFromHandle = System_Type__GetTypeFromHandle(v23, 0LL);
  if ( !TypeFromHandle )
LABEL_23:
    sub_B0D97C(TypeFromHandle);
  v15 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))TypeFromHandle->klass->vtable._3_ToString.method)(
                          TypeFromHandle,
                          TypeFromHandle->klass->vtable._4_unknown.methodPtr);
  v21 = (int)v12;
  v20 = (int)v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v19[0] = (__int64)DataNameKind_Kind_TypeInfo;
  v19[1] = -1LL;
  v17 = (Il2CppObject *)((__int64 (__fastcall *)(__int64 *, Il2CppMethodPointer))DataNameKind_Kind_TypeInfo->vtable._3_ToString.method)(
                          v19,
                          DataNameKind_Kind_TypeInfo->vtable._4_CompareTo.methodPtr);
  v18 = (Il2CppObject *)System_String__Format_43850968((System_String_o *)StringLiteral_20474/*"master[{0}] is null[{1}:{2}]"*/, v15, v16, v17, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v18, 0LL);
  return 0LL;
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMaster_WarQuestSelectionMaster_(const MethodInfo_1714548 *method)
{
  __int64 v1; // x1

  if ( (byte_421436C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    byte_421436C = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    sub_B0D97C(0LL);
  return (WarQuestSelectionMaster_o *)((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMasterData_TMaster_->methodPointer)();
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Func_Task_ContingentProperties__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4216074 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_CreateMasterData__, method);
    sub_B0D8A4(&Method_System_Func_DataMasterBase_____ctor__, v4);
    sub_B0D8A4(&System_Func_DataMasterBase____TypeInfo, v5);
    byte_4216074 = 1;
  }
  v6 = (System_Func_Task_ContingentProperties__o *)sub_B0D974(System_Func_DataMasterBase____TypeInfo, method, v2);
  System_Func_Task_ContingentProperties____ctor(
    v6,
    0LL,
    Method_DataManager_CreateMasterData__,
    (const MethodInfo_2605E30 *)Method_System_Func_DataMasterBase_____ctor__);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v6, v7);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int entries; // w8
  __int64 v10; // x19
  Il2CppObject *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int monitor; // w8
  unsigned int v22; // w23
  __int64 v23; // x2
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0

  v4 = this;
  if ( (byte_4216075 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    this = (DataManager_o *)sub_B0D8A4(&Method_System_Func_DataMasterBase____Invoke__, v7);
    byte_4216075 = 1;
  }
  lookup = v4->fields.lookup;
  if ( lookup )
  {
    entries = (int)lookup->fields.entries;
    if ( entries >= 1 )
    {
      v10 = 0LL;
      while ( (unsigned int)v10 < entries )
      {
        this = (DataManager_o *)*((_QWORD *)&lookup->fields.count + v10);
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
                                  method);
        entries = (int)lookup->fields.entries;
        if ( (int)++v10 >= entries )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v11 = System_Func_object___Invoke(
                  (System_Func_object__o *)createMasterDataMethod,
                  (const MethodInfo_2605E44 *)Method_System_Func_DataMasterBase____Invoke__),
          v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v12, v13),
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
            v14,
            (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v11) )
    {
LABEL_19:
      sub_B0D97C(this);
    }
    monitor = (int)v11[1].monitor;
    if ( monitor >= 1 )
    {
      v22 = 0;
      while ( v22 < monitor )
      {
        v23 = *((_QWORD *)&v11[2].klass + (int)v22);
        if ( !v23 || !v14 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v14,
          *(_DWORD *)(v23 + 16),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v23,
          (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        monitor = (int)v11[1].monitor;
        if ( (int)++v22 >= monitor )
          goto LABEL_18;
      }
LABEL_20:
      v30 = sub_B0D9A8(this);
      sub_B0D948(v30, 0LL);
    }
LABEL_18:
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.lookup,
      (System_Int32_array **)v11,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v4->fields.masterDataBytes = (struct System_Byte_array *)v14;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v4->fields.masterDataBytes,
      (System_Int32_array **)v14,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
{
  DataManager_o *v4; // x19
  __int64 v5; // x1
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
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  int v19; // w28
  unsigned __int64 v20; // x25
  signed __int64 v21; // x26
  __int64 v22; // x22
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x23
  __int64 v31; // x21
  System_Int32_array **v32; // x1
  __int64 v33; // x0
  __int64 v34; // x24
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  WarBoardPieceData_array *lookup; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x24
  __int64 Index_WarBoardPieceData; // x0
  const MethodInfo_2980204 *v41; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v42; // x8
  DataMasterBase_o *v43; // x24
  Il2CppObject *saveNameList; // x22
  System_Threading_SynchronizationContext_o *writeMasterDataThread; // x23
  __int64 v46; // x0
  const MethodInfo_2980204 *v47; // x3
  __int64 v48; // x0
  Il2CppObject *v49; // x22
  int v50; // w8
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  void *v55; // x0
  int v56; // w1
  _QWORD **v57; // x20
  __int64 v58; // x0
  __int64 v59; // x0
  struct System_Threading_Thread_o *v60; // x19
  __int64 v61; // x0
  __int64 v62; // x0
  System_Threading_SendOrPostCallback_o *v63; // x20
  __int64 v64; // x0
  Il2CppObject *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  intptr_t v69; // w0
  __int64 v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v79; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v80[2]; // [xsp+28h] [xbp-78h] BYREF
  int v81; // [xsp+48h] [xbp-58h]
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF
  System_Nullable_long__o v83; // 0:x0.16
  System_Nullable_long__o v84; // 0:x0.16

  v4 = this;
  if ( (byte_4216086 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_B0D8A4(&byte___TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, v9);
    sub_B0D8A4(&Method_System_Predicate_DataMasterBase___ctor__, v10);
    sub_B0D8A4(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_B0D8A4(&DataManager___c__DisplayClass57_0_TypeInfo, v13);
    byte_4216086 = 1;
  }
  lockTaken = 0;
  v81 = 0;
  if ( !indexList )
    sub_B0D97C(this);
  v14 = sub_B0D964(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 24);
    work = (System_Byte_array *)sub_B0D8BC(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = (int)v16;
      do
      {
        v22 = sub_B0D974(DataManager___c__DisplayClass57_0_TypeInfo, v17, v18);
        DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v22, 0LL);
        if ( v20 >= *(unsigned int *)(v15 + 24) )
        {
          v51 = sub_B0D9A8(v23);
          sub_B0D948(v51, 0LL);
        }
        saveDataMapList = v4->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_B0D97C(v23);
        v31 = *(int *)(v15 + 32 + 4 * v20);
        if ( saveDataMapList->fields._size <= (unsigned int)v31 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v22 )
          sub_B0D97C(v23);
        v32 = (System_Int32_array **)saveDataMapList->fields._items->m_Items[v31];
        *(_QWORD *)(v22 + 16) = v32;
        sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), v32, v24, v25, v26, v27, v28, v29);
        v34 = *(_QWORD *)&v4->fields.lastFrameTime;
        if ( !v34 )
          sub_B0D97C(v33);
        if ( *(_DWORD *)(v34 + 24) <= (unsigned int)v31 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v35 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 8 * v31 + 32);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v22 + 16), 0LL) )
        {
          lookup = (WarBoardPieceData_array *)v4->fields.lookup;
          v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_DataMasterBase__TypeInfo,
                                                                           v36,
                                                                           v37);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v39,
            (Il2CppObject *)v22,
            Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_DataMasterBase___ctor__);
          Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                      lookup,
                                      (System_Predicate_T__o *)v39,
                                      (const MethodInfo_1F68E64 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
          {
            v42 = v4->fields.lookup;
            if ( !v42 )
              sub_B0D97C(Index_WarBoardPieceData);
            if ( (unsigned int)Index_WarBoardPieceData >= LODWORD(v42->fields.entries) )
            {
              v52 = sub_B0D9A8(Index_WarBoardPieceData);
              sub_B0D948(v52, 0LL);
            }
            if ( !v35 )
              sub_B0D97C(Index_WarBoardPieceData);
            if ( !*(_DWORD *)(v35 + 24) )
            {
              v54 = sub_B0D9A8(Index_WarBoardPieceData);
              sub_B0D948(v54, 0LL);
            }
            v43 = (DataMasterBase_o *)*((_QWORD *)&v42->fields.count + (int)Index_WarBoardPieceData);
            saveNameList = (Il2CppObject *)v4->fields.saveNameList;
            writeMasterDataThread = (System_Threading_SynchronizationContext_o *)v4->fields.writeMasterDataThread;
            *(_QWORD *)&v83.fields.has_value = *(_QWORD *)(v35 + 32);
            v80[0].fields.value = 0LL;
            *(_QWORD *)&v80[0].fields.has_value = 0LL;
            v83.fields.value = (int64_t)v80;
            System_Nullable_long____ctor(v83, Method_System_Nullable_long___ctor__, v41);
            if ( *(_DWORD *)(v35 + 24) <= 1u )
            {
              v53 = sub_B0D9A8(v46);
              sub_B0D948(v53, 0LL);
            }
            *(_QWORD *)&v84.fields.has_value = *(_QWORD *)(v35 + 40);
            v79.fields.value = 0LL;
            *(_QWORD *)&v79.fields.has_value = 0LL;
            v84.fields.value = (int64_t)&v79;
            System_Nullable_long____ctor(v84, Method_System_Nullable_long___ctor__, v47);
            if ( !v43 )
              sub_B0D97C(v48);
            DataMasterBase__ReplacedForThread(v43, saveNameList, writeMasterDataThread, v80[0], v79, work, 0LL);
          }
        }
        v49 = *(Il2CppObject **)&v4->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15144168(v49, &lockTaken, 0LL);
        ++LODWORD(v4->fields.masterLoadThreads);
        *((_DWORD *)&v80[1].fields.value + v19) = 215;
        v19 = ++v81;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v49, 0LL);
        if ( v19 )
        {
          v50 = v19 - 1;
          if ( *((_DWORD *)&v80[0].fields.has_value + v19 + 1) == 215 )
          {
            --v19;
            v81 = v50;
          }
        }
        ++v20;
      }
      while ( (__int64)v20 < v21 );
    }
  }
  else
  {
    v55 = (void *)sub_B0DC70(indexList);
    if ( v56 != 1 )
      _Unwind_Resume(v55);
    v57 = (_QWORD **)__cxa_begin_catch(v55);
    v58 = sub_B0D8A8(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v58, **v57) & 1) != 0 )
    {
      __cxa_end_catch();
    }
    else
    {
      v59 = sub_B0D8A8(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v59, **v57) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v57;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v60 = v4->fields.writeMasterDataThread;
      if ( (*(_BYTE *)(sub_B0D8A8(&DataManager___c_TypeInfo) + 307) & 4) != 0
        && !*(_DWORD *)(sub_B0D8A8(&DataManager___c_TypeInfo) + 224) )
      {
        v61 = sub_B0D8A8(&DataManager___c_TypeInfo);
        j_il2cpp_runtime_class_init_0(v61);
      }
      v62 = sub_B0D8A8(&DataManager___c_TypeInfo);
      v63 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v62 + 184) + 8LL);
      if ( !v63 )
      {
        if ( (*(_BYTE *)(sub_B0D8A8(&DataManager___c_TypeInfo) + 307) & 4) != 0
          && !*(_DWORD *)(sub_B0D8A8(&DataManager___c_TypeInfo) + 224) )
        {
          v64 = sub_B0D8A8(&DataManager___c_TypeInfo);
          j_il2cpp_runtime_class_init_0(v64);
        }
        v65 = **(Il2CppObject ***)(sub_B0D8A8(&DataManager___c_TypeInfo) + 184);
        v66 = sub_B0D8A8(&System_Threading_SendOrPostCallback_TypeInfo);
        v63 = (System_Threading_SendOrPostCallback_o *)sub_B0D974(v66, v67, v68);
        v69 = sub_B0D8A8(&Method_DataManager___c__LoadMasterDataThread_b__57_1__);
        System_Threading_SendOrPostCallback___ctor(v63, v65, v69, 0LL);
        v70 = *(_QWORD *)(sub_B0D8A8(&DataManager___c_TypeInfo) + 184);
        *(_QWORD *)(v70 + 8) = v63;
        sub_B0D840((BattleServantConfConponent_o *)(v70 + 8), (System_Int32_array **)v63, v71, v72, v73, v74, v75, v76);
      }
      if ( !v60 )
        sub_B0D97C(v62);
      ((void (__fastcall *)(struct System_Threading_Thread_o *, System_Threading_SendOrPostCallback_o *, _QWORD, void *))v60->klass[1]._1.namespaze)(
        v60,
        v63,
        0LL,
        v60->klass[1]._1.byval_arg.data);
    }
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
  __int64 v22; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Threading_SynchronizationContext_o *Current; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  struct System_Threading_SynchronizationContext_o **p_context; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Int32_array *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  System_Comparison_int__o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x23
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  System_Threading_ParameterizedThreadStart_o *v69; // x24
  __int64 v70; // x1
  __int64 v71; // x2
  System_Threading_Thread_o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  System_Func_int__bool__o *v75; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Int32_array *v77; // x0
  int v78; // w8
  bool v79; // nf

  if ( (byte_4216084 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_int____67949840, *(_QWORD *)&maxIndex);
    sub_B0D8A4(&Method_System_Comparison_int___ctor__, v6);
    sub_B0D8A4(&System_Comparison_int__TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Thread__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Thread___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_Thread__TypeInfo, v15);
    sub_B0D8A4(&System_Threading_ParameterizedThreadStart_TypeInfo, v16);
    sub_B0D8A4(&System_Threading_Thread_TypeInfo, v17);
    sub_B0D8A4(&Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__, v18);
    sub_B0D8A4(&DataManager___c__DisplayClass55_0_TypeInfo, v19);
    sub_B0D8A4(&Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__, v20);
    sub_B0D8A4(&DataManager___c__DisplayClass55_1_TypeInfo, v21);
    byte_4216084 = 1;
  }
  v22 = sub_B0D974(DataManager___c__DisplayClass55_0_TypeInfo, *(_QWORD *)&maxIndex, loadedIndices);
  DataManager___c__DisplayClass55_0___ctor((DataManager___c__DisplayClass55_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v22 + 24) = loadedIndices;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)loadedIndices,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)Current;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThread,
    (System_Int32_array **)Current,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Thread__TypeInfo,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Thread___ctor__);
  p_context = &this->fields.context;
  this->fields.context = (struct System_Threading_SynchronizationContext_o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.context,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v54 = System_Linq_Enumerable__ToArray_int_(
          v53,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v57 = (System_Comparison_int__o *)sub_B0D974(System_Comparison_int__TypeInfo, v55, v56);
  System_Comparison_int____ctor(
    v57,
    (Il2CppObject *)v22,
    Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__,
    (const MethodInfo_241155C *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__36935640(
    v54,
    (System_Comparison_T__o *)v57,
    (const MethodInfo_23397D8 *)Method_System_Array_Sort_int____67949840);
  v60 = sub_B0D974(DataManager___c__DisplayClass55_1_TypeInfo, v58, v59);
  DataManager___c__DisplayClass55_1___ctor((DataManager___c__DisplayClass55_1_o *)v60, 0LL);
  if ( !v60 )
LABEL_10:
    sub_B0D97C(v23);
  *(_QWORD *)(v60 + 24) = v22;
  sub_B0D840((BattleServantConfConponent_o *)(v60 + 24), (System_Int32_array **)v22, v61, v62, v63, v64, v65, v66);
  *(_DWORD *)(v60 + 16) = 0;
  do
  {
    v69 = (System_Threading_ParameterizedThreadStart_o *)sub_B0D974(
                                                           System_Threading_ParameterizedThreadStart_TypeInfo,
                                                           v67,
                                                           v68);
    System_Threading_ParameterizedThreadStart___ctor(
      v69,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v72 = (System_Threading_Thread_o *)sub_B0D974(System_Threading_Thread_TypeInfo, v70, v71);
    System_Threading_Thread___ctor_41481624(v72, v69, 0LL);
    if ( !v72 )
      goto LABEL_10;
    System_Threading_Thread__set_IsBackground(v72, 1, 0LL);
    v75 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v73, v74);
    System_Func_int__bool____ctor(
      v75,
      (Il2CppObject *)v60,
      Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v76 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v54,
            (System_Func_TSource__bool__o *)v75,
            (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
    v77 = System_Linq_Enumerable__ToArray_int_(
            v76,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_41482028(v72, &v77->obj, 0LL);
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_context;
    if ( !*p_context )
      goto LABEL_10;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Thread__Add__);
    v78 = *(_DWORD *)(v60 + 16) + 1;
    v79 = *(_DWORD *)(v60 + 16) - 4 < 0;
    *(_DWORD *)(v60 + 16) = v78;
  }
  while ( v79 != __OFSUB__(v78, 5) );
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Threading_ParameterizedThreadStart_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Threading_Thread_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Threading_Thread_o *v24; // x0

  if ( (byte_4216087 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_B0D8A4(&System_Threading_ParameterizedThreadStart_TypeInfo, v10);
    sub_B0D8A4(&System_Threading_Thread_TypeInfo, v11);
    byte_4216087 = 1;
  }
  LOBYTE(this->fields.writeMasterDataThreadException) = 0;
  this[1].klass = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v14 = (System_Threading_ParameterizedThreadStart_o *)sub_B0D974(
                                                         System_Threading_ParameterizedThreadStart_TypeInfo,
                                                         v12,
                                                         v13);
  System_Threading_ParameterizedThreadStart___ctor(
    v14,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v17 = (System_Threading_Thread_o *)sub_B0D974(System_Threading_Thread_TypeInfo, v15, v16);
  System_Threading_Thread___ctor_41481624(v17, v14, 0LL);
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( !v24 )
    sub_B0D97C(0LL);
  System_Threading_Thread__Start_41482028(v24, (Il2CppObject *)fileName, 0LL);
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
  if ( (byte_4216085 & 1) == 0 )
  {
    this = (DataManager_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4216085 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v7 = (__int64)&klass->_1.name[8 * v6];
      v8 = *(System_Threading_Thread_o **)(v7 + 32);
      if ( !v8 )
LABEL_12:
        sub_B0D97C(this);
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
    sub_B0D840(p_context, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *v2; // x0
  System_Threading_Thread_o **p_writeMasterDataThreadEnd; // x19
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  p_writeMasterDataThreadEnd = (System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  v2 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( v2 )
  {
    if ( System_Threading_Thread__get_IsAlive(v2, 0LL) )
    {
      if ( !*p_writeMasterDataThreadEnd )
        sub_B0D97C(0LL);
      System_Threading_Thread__Abort(*p_writeMasterDataThreadEnd, 0LL);
    }
    *p_writeMasterDataThreadEnd = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_writeMasterDataThreadEnd, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryWriter_o *v15; // x21
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x22
  int v24; // w24
  unsigned int v25; // w25
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x23
  __int64 v29; // x8
  __int64 v30; // x27
  __int64 v31; // x23
  __int64 v32; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  System_IO_Stream_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_4216088 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, param);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_B0D8A4(&string_TypeInfo, v9);
    byte_4216088 = 1;
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
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v12 = CatAndMouseGame__CatGameZ(v11, 0LL);
  v15 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v13, v14);
  System_IO_BinaryWriter___ctor_39036700(v15, v12, 0LL);
  v23 = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !v23 )
    sub_B0D97C(v16);
  v24 = *(_DWORD *)(v23 + 24);
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v23 + 24) <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 8LL * (int)v25 + 32);
      if ( !v26 )
        sub_B0D97C(v16);
      if ( *(_DWORD *)(v26 + 24) <= 1u )
      {
        v41 = sub_B0D9A8(v16);
        sub_B0D948(v41, 0LL);
      }
      if ( !v15 )
        sub_B0D97C(v16);
      v27 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
              v15,
              *(unsigned int *)(v26 + 40),
              v15->klass->vtable._18_Write.methodPtr);
      v28 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v28 )
        sub_B0D97C(v27);
      if ( *(_DWORD *)(v28 + 24) <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 8LL * (int)v25 + 32);
      if ( !v29 )
        sub_B0D97C(v27);
      if ( !*(_DWORD *)(v29 + 24) )
      {
        v43 = sub_B0D9A8(v27);
        sub_B0D948(v43, 0LL);
      }
      v30 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v30 )
        sub_B0D97C(v27);
      v31 = *(_QWORD *)(v29 + 32);
      if ( *(_DWORD *)(v30 + 24) <= v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v32 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 8LL * (int)v25 + 32);
      if ( !v32 )
        sub_B0D97C(v27);
      if ( *(_DWORD *)(v32 + 24) <= 1u )
      {
        v42 = sub_B0D9A8(v27);
        sub_B0D948(v42, 0LL);
      }
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Collections_Generic_List_string__o *, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._11_Write.method)(
              v15,
              this->fields.saveNameList,
              (unsigned int)v31,
              *(unsigned int *)(v32 + 40),
              v15->klass->vtable._12_Write.methodPtr);
      if ( (int)++v25 >= v24 )
        break;
      v23 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v23 )
        sub_B0D97C(v16);
    }
  }
  if ( v15 )
  {
    klass = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v36 = sub_AA67A0(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v15, *(_QWORD *)(v36 + 8));
  }
  if ( v11 )
  {
    v37 = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v39);
    }
    else
    {
LABEL_45:
      v40 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v11, *(_QWORD *)(v40 + 8));
  }
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = 0LL;
  LOBYTE(this->fields.writeMasterDataThreadException) = 1;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd, 0LL, v17, v18, v19, v20, v21, v22);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.writeMasterDataThreadException;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_421606F & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_421606F = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, v5);
  return System_String__Concat_43852188(CachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_421606E & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_421606E = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, v5);
  return System_String__Concat_43852188(CachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_421606C & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&CacheFolderName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_421606C = 1;
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
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  const MethodInfo *v5; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_421606D & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, v1);
    sub_B0D8A4(&DataManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_421606D = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, v5);
  return System_String__Concat_43852188(CachePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_QuestReleaseMaster_(
        DataManager_o *this,
        const MethodInfo_17147C4 *method)
{
  __int64 v3; // x0

  if ( (byte_421436E & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421436E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v3 = ((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)();
  if ( !v3 )
    sub_B0D97C(0LL);
  return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)(v3 + 32);
}


WarEntity_array *__fastcall DataManager__getEntitys_WarMaster__WarEntity_(
        DataManager_o *this,
        const MethodInfo_171483C *method)
{
  if ( (byte_421436F & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421436F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)() )
    sub_B0D97C(0LL);
  return (WarEntity_array *)((__int64 (*)(void))method->rgctx_data->_2_DataMasterBase_getEntitys_T_->methodPointer)();
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_421607A & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421607A = 1;
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

  if ( (byte_421607B & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421607B = 1;
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
  System_Byte_array *v7; // x20
  uint32_t v8; // w0
  int32_t v9; // w11
  unsigned __int8 v10; // w13
  unsigned int v11; // w14
  uint32_t v12; // w11
  unsigned __int8 v13; // w9
  unsigned __int8 v14; // w12
  unsigned __int8 v15; // w8
  int v16; // w10

  if ( (byte_421608A & 1) == 0 )
  {
    sub_B0D8A4(&Crc32_TypeInfo, name);
    byte_421608A = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B0D97C(0LL);
  v7 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._19_GetBytes.methodPtr);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  v8 = Crc32__Compute(v7, 0LL);
  v9 = version + 3;
  if ( version >= 0 )
    v9 = version;
  v10 = 3 * version + 1;
  v11 = version - (v9 & 0xFFFFFFFC);
  v12 = HIBYTE(v8);
  switch ( v11 )
  {
    case 1u:
      v15 = v8 - v10;
      v14 = BYTE2(v8) + v10;
      v13 = BYTE1(v8) * (v10 & 0xF);
      v16 = v12 ^ v10;
      break;
    case 2u:
      v15 = v8 ^ v10;
      v13 = BYTE1(v8) + v10;
      v14 = BYTE2(v8) * (v10 & 0xF);
      v16 = v12 - v10;
      break;
    case 3u:
      v13 = BYTE1(v8) - v10;
      v14 = BYTE2(v8) ^ v10;
      v15 = v8 * (v10 & 0xF);
      v16 = v12 + v10;
      break;
    default:
      v15 = v8 + v10;
      v13 = BYTE1(v8) ^ v10;
      v14 = BYTE2(v8) - v10;
      v16 = v12 * (v10 & 0xF);
      break;
  }
  return (v16 << 24) | (v14 << 16) | (v13 << 8) | (v15 << 8);
}


System_String_o *__fastcall DataManager__getOldEnvCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4216070 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&CacheFolderName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4216070 = 1;
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
  return System_String__Concat_43852188(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_879/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_421607F & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421607F = 1;
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

  if ( (byte_421607E & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_421607E = 1;
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
    sub_B0D97C(this);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4216077 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_4216077 = 1;
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

  if ( (byte_4216082 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    byte_4216082 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216081 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4216081 = 1;
  }
  v4 = sub_B0D974(DataManager__readMasterData_d__47_TypeInfo, method, v2);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 saveDataMapList; // x0
  ManagerConfig_c *v23; // x0
  DataManager_c *v24; // x0
  System_String_o *CacheListFileName; // x20
  const MethodInfo *v26; // x1
  System_String_o *AllText; // x21
  System_String_o *v28; // x21
  System_Char_array *v29; // x0
  System_String_o *v30; // x20
  System_Char_array *v31; // x0
  il2cpp_array_size_t max_length; // w8
  int v33; // w22
  __int64 *v34; // x8
  System_String_o *v35; // x0
  System_String_o *v36; // x21
  System_String_o *v37; // x21
  System_String_o *v38; // x20
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v40; // x22
  uint32_t v41; // w22
  System_Char_array *v42; // x0
  il2cpp_array_size_t v43; // w8
  __int64 v44; // x20
  __int64 v45; // x8
  System_String_o *v46; // x21
  __int64 v47; // x22
  System_String_o *v48; // x0
  ManagerConfig_c *v49; // x8
  System_Int32_array **v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array *v57; // x20
  System_Int32_array **v58; // x1
  int v60; // w23
  int64_t v61; // x0
  DataManager_c *v62; // x8
  int64_t v63; // x21
  struct DataManager_StaticFields *static_fields; // x9
  __int64 v65; // x22
  int v66; // w23
  System_String_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x21
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  BattleServantConfConponent_o *v102; // x0
  DataManager_c *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x21
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x21
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x21
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x1
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x21
  __int64 v153; // x0
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x0
  int64_t v160; // [xsp+20h] [xbp-60h] BYREF
  int v161; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_421608F & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    sub_B0D8A4(&char___TypeInfo, v3);
    sub_B0D8A4(&Crc32_TypeInfo, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v9);
    sub_B0D8A4(&string___TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_5104/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_B0D8A4(&StringLiteral_5107/*"DataManager version load error : list file parameter error"*/, v12);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v13);
    sub_B0D8A4(&StringLiteral_23776/*"~"*/, v14);
    sub_B0D8A4(&StringLiteral_666/*") -> ("*/, v15);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v16);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v17);
    sub_B0D8A4(&StringLiteral_20450/*"master versiton different ("*/, v18);
    sub_B0D8A4(&StringLiteral_5108/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_B0D8A4(&StringLiteral_5109/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    sub_B0D8A4(&StringLiteral_5106/*"DataManager version load error : list file break"*/, v21);
    byte_421608F = 1;
  }
  v161 = 0;
  v160 = 0LL;
  saveDataMapList = (__int64)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  saveDataMapList = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_long____Clear__);
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( v23->static_fields->UseMock )
    return 0;
  v24 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v24);
  if ( !System_IO_File__Exists(CacheListFileName, 0LL) )
  {
LABEL_60:
    DataManager__ClearSaveDataList(this, v26);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v28 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v28 )
  {
    v29 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v29 )
      sub_B0D97C(0LL);
    if ( !v29->max_length )
    {
      v153 = sub_B0D9A8(v29);
      sub_B0D948(v153, 0LL);
    }
    v29->m_Items[2] = -257;
    v30 = System_String__Trim(v28, v29, 0LL);
    v31 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 2LL);
    if ( !v31 )
      sub_B0D97C(0LL);
    max_length = v31->max_length;
    if ( !max_length )
    {
      v154 = sub_B0D9A8(v31);
      sub_B0D948(v154, 0LL);
    }
    v31->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v155 = sub_B0D9A8(v31);
      sub_B0D948(v155, 0LL);
    }
    v31->m_Items[3] = 10;
    if ( !v30 )
      sub_B0D97C(v31);
    v33 = System_String__IndexOfAny(v30, v31, 0LL);
    if ( v33 < 2 )
    {
      v34 = &StringLiteral_5108/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_59;
    }
    v35 = System_String__Substring_43913640(v30, 0, v33, 0LL);
    v36 = v35;
    if ( !v35 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v35, (System_String_o *)StringLiteral_23776/*"~"*/, 0LL) )
    {
      v37 = System_String__Substring(v36, 1, 0LL);
      v38 = System_String__Substring(v30, v33 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B0D97C(0LL);
      v40 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v38,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v41 = Crc32__Compute(v40, 0LL);
      if ( System_UInt32__Parse(v37, 0LL) == v41 )
      {
        v42 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 2LL);
        if ( !v42 )
          sub_B0D97C(0LL);
        v43 = v42->max_length;
        if ( !v43 )
        {
          v157 = sub_B0D9A8(v42);
          sub_B0D948(v157, 0LL);
        }
        v42->m_Items[2] = 13;
        if ( v43 == 1 )
        {
          v158 = sub_B0D9A8(v42);
          sub_B0D948(v158, 0LL);
        }
        v42->m_Items[3] = 10;
        if ( !v38 )
          sub_B0D97C(v42);
        saveDataMapList = (__int64)System_String__Split_43910688(v38, v42, 1, 0LL);
        v44 = saveDataMapList;
        if ( !saveDataMapList )
          return 1;
        v45 = *(_QWORD *)(saveDataMapList + 24);
        if ( !v45 )
          goto LABEL_58;
        if ( !(_DWORD)v45 )
          goto LABEL_157;
        saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
        if ( !saveDataMapList )
          goto LABEL_164;
        saveDataMapList = System_String__StartsWith(
                            (System_String_o *)saveDataMapList,
                            (System_String_o *)StringLiteral_1543/*"@"*/,
                            0LL);
        if ( (saveDataMapList & 1) != 0 )
        {
          if ( !*(_DWORD *)(v44 + 24) )
            goto LABEL_157;
          v46 = *(System_String_o **)(v44 + 32);
          saveDataMapList = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          *(_WORD *)(saveDataMapList + 32) = 44;
          if ( !v46 )
            goto LABEL_164;
          saveDataMapList = (__int64)System_String__Split(v46, (System_Char_array *)saveDataMapList, 0LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          v47 = saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
          if ( !saveDataMapList )
            goto LABEL_164;
          v48 = System_String__Substring((System_String_o *)saveDataMapList, 1, 0LL);
          v49 = ManagerConfig_TypeInfo;
          v50 = (System_Int32_array **)v48;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v49 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v49->static_fields->MasterDataCacheVer, (System_String_o *)v50, 0LL) )
          {
            saveDataMapList = sub_B0D8BC(string___TypeInfo, 5LL);
            if ( saveDataMapList )
            {
              v57 = (System_String_array *)saveDataMapList;
              saveDataMapList = StringLiteral_20450/*"master versiton different ("*/;
              if ( StringLiteral_20450/*"master versiton different ("*/ )
              {
                saveDataMapList = sub_B0D964(StringLiteral_20450/*"master versiton different ("*/, v57->obj.klass->_1.element_class);
                if ( !saveDataMapList )
                  goto LABEL_163;
                v58 = (System_Int32_array **)StringLiteral_20450/*"master versiton different ("*/;
              }
              else
              {
                v58 = 0LL;
              }
              if ( !v57->max_length )
                goto LABEL_157;
              v57->m_Items[0] = (System_String_o *)v58;
              sub_B0D840((BattleServantConfConponent_o *)v57->m_Items, v58, v51, v52, v53, v54, v55, v56);
              if ( !v50 || (saveDataMapList = sub_B0D964(v50, v57->obj.klass->_1.element_class)) != 0 )
              {
                if ( v57->max_length <= 1 )
                  goto LABEL_157;
                v57->m_Items[1] = (System_String_o *)v50;
                sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[1], v50, v68, v69, v70, v71, v72, v73);
                saveDataMapList = StringLiteral_666/*") -> ("*/;
                if ( StringLiteral_666/*") -> ("*/ )
                {
                  saveDataMapList = sub_B0D964(StringLiteral_666/*") -> ("*/, v57->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v80 = (System_Int32_array **)StringLiteral_666/*") -> ("*/;
                }
                else
                {
                  v80 = 0LL;
                }
                if ( v57->max_length <= 2 )
                  goto LABEL_157;
                v57->m_Items[2] = (System_String_o *)v80;
                sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[2], v80, v74, v75, v76, v77, v78, v79);
                saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                }
                v94 = *(System_Int32_array ***)(*(_QWORD *)(saveDataMapList + 184) + 32LL);
                if ( !v94 || (saveDataMapList = sub_B0D964(v94, v57->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v57->max_length <= 3 )
                    goto LABEL_157;
                  v57->m_Items[3] = (System_String_o *)v94;
                  sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[3], v94, v88, v89, v90, v91, v92, v93);
                  saveDataMapList = StringLiteral_658/*")"*/;
                  if ( !StringLiteral_658/*")"*/ )
                  {
                    v101 = 0LL;
LABEL_108:
                    if ( v57->max_length > 4 )
                    {
                      v57->m_Items[4] = (System_String_o *)v101;
                      v102 = (BattleServantConfConponent_o *)&v57->m_Items[4];
                      goto LABEL_148;
                    }
                    goto LABEL_157;
                  }
                  saveDataMapList = sub_B0D964(StringLiteral_658/*")"*/, v57->obj.klass->_1.element_class);
                  if ( saveDataMapList )
                  {
                    v101 = (System_Int32_array **)StringLiteral_658/*")"*/;
                    goto LABEL_108;
                  }
                }
              }
              goto LABEL_163;
            }
            goto LABEL_164;
          }
          if ( *(_DWORD *)(v47 + 24) == 3 )
          {
            saveDataMapList = System_Int32__Parse(*(System_String_o **)(v47 + 40), 0LL);
            v161 = saveDataMapList;
            if ( *(_DWORD *)(v47 + 24) <= 2u )
              goto LABEL_157;
            v60 = saveDataMapList;
            v61 = System_Int64__Parse(*(System_String_o **)(v47 + 48), 0LL);
            v62 = DataManager_TypeInfo;
            v160 = v61;
            v63 = v61;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v62 = DataManager_TypeInfo;
            }
            static_fields = v62->static_fields;
            if ( static_fields->readDataVersion != v60 )
              goto LABEL_92;
            if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v62);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v63 )
            {
              v65 = *(_QWORD *)(v44 + 24);
              if ( (int)v65 < 2 )
                return 1;
              v66 = 1;
              while ( 1 )
              {
                v67 = *(System_String_o **)(v44 + 8LL * v66 + 32);
                saveDataMapList = sub_B0D8BC(char___TypeInfo, 1LL);
                if ( !saveDataMapList )
                  break;
                if ( !*(_DWORD *)(saveDataMapList + 24) )
                  goto LABEL_157;
                *(_WORD *)(saveDataMapList + 32) = 44;
                if ( !v67 )
                  break;
                saveDataMapList = (__int64)System_String__Split(v67, (System_Char_array *)saveDataMapList, 0LL);
                if ( !saveDataMapList )
                  break;
                if ( *(_DWORD *)(saveDataMapList + 24) != 1 )
                  return 1;
                if ( !this->fields.saveDataMapList )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.saveDataMapList,
                  *(EventMissionProgressRequest_Argument_ProgressData_o **)(saveDataMapList + 32),
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                if ( ++v66 >= (int)v65 )
                  return 1;
                if ( (unsigned int)v66 >= *(_DWORD *)(v44 + 24) )
                  goto LABEL_157;
              }
            }
            else
            {
LABEL_92:
              saveDataMapList = sub_B0D8BC(string___TypeInfo, 9LL);
              if ( saveDataMapList )
              {
                v57 = (System_String_array *)saveDataMapList;
                saveDataMapList = StringLiteral_20450/*"master versiton different ("*/;
                if ( StringLiteral_20450/*"master versiton different ("*/ )
                {
                  saveDataMapList = sub_B0D964(StringLiteral_20450/*"master versiton different ("*/, v57->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v87 = (System_Int32_array **)StringLiteral_20450/*"master versiton different ("*/;
                }
                else
                {
                  v87 = 0LL;
                }
                if ( !v57->max_length )
                  goto LABEL_157;
                v57->m_Items[0] = (System_String_o *)v87;
                sub_B0D840((BattleServantConfConponent_o *)v57->m_Items, v87, v81, v82, v83, v84, v85, v86);
                v103 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v103 = DataManager_TypeInfo;
                }
                saveDataMapList = (__int64)System_Int32__ToString((int32_t)v103->static_fields, 0LL);
                v110 = (System_Int32_array **)saveDataMapList;
                if ( !saveDataMapList
                  || (saveDataMapList = sub_B0D964(saveDataMapList, v57->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v57->max_length <= 1 )
                    goto LABEL_157;
                  v57->m_Items[1] = (System_String_o *)v110;
                  sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[1], v110, v104, v105, v106, v107, v108, v109);
                  saveDataMapList = StringLiteral_80/*" "*/;
                  if ( StringLiteral_80/*" "*/ )
                  {
                    saveDataMapList = sub_B0D964(StringLiteral_80/*" "*/, v57->obj.klass->_1.element_class);
                    if ( !saveDataMapList )
                      goto LABEL_163;
                    v117 = (System_Int32_array **)StringLiteral_80/*" "*/;
                  }
                  else
                  {
                    v117 = 0LL;
                  }
                  if ( v57->max_length <= 2 )
                    goto LABEL_157;
                  v57->m_Items[2] = (System_String_o *)v117;
                  sub_B0D840((BattleServantConfConponent_o *)&v57->m_Items[2], v117, v111, v112, v113, v114, v115, v116);
                  saveDataMapList = (__int64)System_Int64__ToString(
                                               (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                               0LL);
                  v124 = (System_Int32_array **)saveDataMapList;
                  if ( !saveDataMapList
                    || (saveDataMapList = sub_B0D964(saveDataMapList, v57->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v57->max_length <= 3 )
                      goto LABEL_157;
                    v57->m_Items[3] = (System_String_o *)v124;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v57->m_Items[3],
                      v124,
                      v118,
                      v119,
                      v120,
                      v121,
                      v122,
                      v123);
                    saveDataMapList = StringLiteral_666/*") -> ("*/;
                    if ( StringLiteral_666/*") -> ("*/ )
                    {
                      saveDataMapList = sub_B0D964(StringLiteral_666/*") -> ("*/, v57->obj.klass->_1.element_class);
                      if ( !saveDataMapList )
                        goto LABEL_163;
                      v131 = (System_Int32_array **)StringLiteral_666/*") -> ("*/;
                    }
                    else
                    {
                      v131 = 0LL;
                    }
                    if ( v57->max_length <= 4 )
                      goto LABEL_157;
                    v57->m_Items[4] = (System_String_o *)v131;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v57->m_Items[4],
                      v131,
                      v125,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130);
                    saveDataMapList = (__int64)System_Int32__ToString((int32_t)&v161, 0LL);
                    v138 = (System_Int32_array **)saveDataMapList;
                    if ( !saveDataMapList
                      || (saveDataMapList = sub_B0D964(saveDataMapList, v57->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v57->max_length <= 5 )
                        goto LABEL_157;
                      v57->m_Items[5] = (System_String_o *)v138;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)&v57->m_Items[5],
                        v138,
                        v132,
                        v133,
                        v134,
                        v135,
                        v136,
                        v137);
                      saveDataMapList = StringLiteral_80/*" "*/;
                      if ( StringLiteral_80/*" "*/ )
                      {
                        saveDataMapList = sub_B0D964(StringLiteral_80/*" "*/, v57->obj.klass->_1.element_class);
                        if ( !saveDataMapList )
                          goto LABEL_163;
                        v145 = (System_Int32_array **)StringLiteral_80/*" "*/;
                      }
                      else
                      {
                        v145 = 0LL;
                      }
                      if ( v57->max_length <= 6 )
                        goto LABEL_157;
                      v57->m_Items[6] = (System_String_o *)v145;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)&v57->m_Items[6],
                        v145,
                        v139,
                        v140,
                        v141,
                        v142,
                        v143,
                        v144);
                      saveDataMapList = (__int64)System_Int64__ToString((int64_t)&v160, 0LL);
                      v152 = (System_Int32_array **)saveDataMapList;
                      if ( !saveDataMapList
                        || (saveDataMapList = sub_B0D964(saveDataMapList, v57->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( v57->max_length <= 7 )
                          goto LABEL_157;
                        v57->m_Items[7] = (System_String_o *)v152;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&v57->m_Items[7],
                          v152,
                          v146,
                          v147,
                          v148,
                          v149,
                          v150,
                          v151);
                        saveDataMapList = StringLiteral_658/*")"*/;
                        if ( StringLiteral_658/*")"*/ )
                        {
                          saveDataMapList = sub_B0D964(StringLiteral_658/*")"*/, v57->obj.klass->_1.element_class);
                          if ( !saveDataMapList )
                            goto LABEL_163;
                          v101 = (System_Int32_array **)StringLiteral_658/*")"*/;
                        }
                        else
                        {
                          v101 = 0LL;
                        }
                        if ( v57->max_length > 8 )
                        {
                          v57->m_Items[8] = (System_String_o *)v101;
                          v102 = (BattleServantConfConponent_o *)&v57->m_Items[8];
LABEL_148:
                          sub_B0D840(v102, v101, v95, v96, v97, v98, v99, v100);
                          if ( System_String__Concat_43930028(v57, 0LL) )
                            goto LABEL_60;
                          return 1;
                        }
LABEL_157:
                        v156 = sub_B0D9A8(saveDataMapList);
                        sub_B0D948(v156, 0LL);
                      }
                    }
                  }
                }
LABEL_163:
                v159 = sub_B0D99C(saveDataMapList);
                sub_B0D948(v159, 0LL);
              }
            }
LABEL_164:
            sub_B0D97C(saveDataMapList);
          }
          v34 = &StringLiteral_5107/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_58:
          v34 = &StringLiteral_5106/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v34 = &StringLiteral_5104/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v34 = &StringLiteral_5109/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_59:
    if ( *v34 )
      goto LABEL_60;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216080 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4216080 = 1;
  }
  v4 = sub_B0D974(DataManager__readMasterVersion_d__46_TypeInfo, method, v2);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  System_String_o *CacheVersionFileName; // x20
  const MethodInfo *v21; // x1
  System_String_o *AllText; // x21
  System_String_o *v23; // x21
  System_Char_array *v24; // x0
  System_String_o *v25; // x20
  System_Char_array *v26; // x0
  il2cpp_array_size_t max_length; // w8
  int v28; // w22
  __int64 *v29; // x8
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x21
  System_String_o *v33; // x20
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v35; // x22
  uint32_t v36; // w22
  System_Char_array *v37; // x0
  il2cpp_array_size_t v38; // w8
  __int64 v39; // x0
  __int64 v40; // x20
  __int64 v41; // x8
  System_String_o *v42; // x20
  __int64 v43; // x20
  System_String_o *v44; // x0
  ManagerConfig_c *v45; // x8
  System_Int32_array **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array *v53; // x20
  System_Int32_array **v54; // x1
  DataManager_c *v55; // x0
  DataManager_c *v57; // x8
  int32_t v58; // w19
  int64_t v59; // x0
  DataManager_c *v60; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0

  if ( (byte_421608D & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    sub_B0D8A4(&char___TypeInfo, v3);
    sub_B0D8A4(&Crc32_TypeInfo, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5103/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_B0D8A4(&StringLiteral_5100/*"DataManager boot load error : list file break"*/, v9);
    sub_B0D8A4(&StringLiteral_5102/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_B0D8A4(&StringLiteral_5098/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_B0D8A4(&StringLiteral_23776/*"~"*/, v12);
    sub_B0D8A4(&StringLiteral_20448/*"master data versiton different ("*/, v13);
    sub_B0D8A4(&StringLiteral_666/*") -> ("*/, v14);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v15);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v16);
    sub_B0D8A4(&StringLiteral_5101/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_421608D = 1;
  }
  v18 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v18 = ManagerConfig_TypeInfo;
  }
  if ( v18->static_fields->UseMock )
    return 0;
  v19 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v19);
  if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
    AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v23 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
    if ( !v23 )
      return 1;
    v24 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_B0D97C(0LL);
    if ( !v24->max_length )
    {
      v88 = sub_B0D9A8(v24);
      sub_B0D948(v88, 0LL);
    }
    v24->m_Items[2] = -257;
    v25 = System_String__Trim(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_B0D97C(0LL);
    max_length = v26->max_length;
    if ( !max_length )
    {
      v89 = sub_B0D9A8(v26);
      sub_B0D948(v89, 0LL);
    }
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v90 = sub_B0D9A8(v26);
      sub_B0D948(v90, 0LL);
    }
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_B0D97C(v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5102/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_57;
    }
    v30 = System_String__Substring_43913640(v25, 0, v28, 0LL);
    v31 = v30;
    if ( !v30 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v30, (System_String_o *)StringLiteral_23776/*"~"*/, 0LL) )
    {
      v32 = System_String__Substring(v31, 1, 0LL);
      v33 = System_String__Substring(v25, v28 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B0D97C(0LL);
      v35 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v33,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v36 = Crc32__Compute(v35, 0LL);
      if ( System_UInt32__Parse(v32, 0LL) == v36 )
      {
        v37 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 2LL);
        if ( !v37 )
          sub_B0D97C(0LL);
        v38 = v37->max_length;
        if ( !v38 )
        {
          v92 = sub_B0D9A8(v37);
          sub_B0D948(v92, 0LL);
        }
        v37->m_Items[2] = 13;
        if ( v38 == 1 )
        {
          v93 = sub_B0D9A8(v37);
          sub_B0D948(v93, 0LL);
        }
        v37->m_Items[3] = 10;
        if ( !v33 )
          sub_B0D97C(v37);
        v39 = (__int64)System_String__Split_43910688(v33, v37, 1, 0LL);
        v40 = v39;
        if ( !v39 )
          return 1;
        v41 = *(_QWORD *)(v39 + 24);
        if ( !v41 )
          goto LABEL_56;
        if ( !(_DWORD)v41 )
          goto LABEL_102;
        v39 = *(_QWORD *)(v39 + 32);
        if ( !v39 )
          goto LABEL_108;
        v39 = System_String__StartsWith((System_String_o *)v39, (System_String_o *)StringLiteral_1543/*"@"*/, 0LL);
        if ( (v39 & 1) != 0 )
        {
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_102;
          v42 = *(System_String_o **)(v40 + 32);
          v39 = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !v39 )
            goto LABEL_108;
          if ( !*(_DWORD *)(v39 + 24) )
            goto LABEL_102;
          *(_WORD *)(v39 + 32) = 44;
          if ( !v42 )
            goto LABEL_108;
          v39 = (__int64)System_String__Split(v42, (System_Char_array *)v39, 0LL);
          if ( !v39 )
            goto LABEL_108;
          v43 = v39;
          if ( !*(_DWORD *)(v39 + 24) )
            goto LABEL_102;
          v39 = *(_QWORD *)(v39 + 32);
          if ( !v39 )
            goto LABEL_108;
          v44 = System_String__Substring((System_String_o *)v39, 1, 0LL);
          v45 = ManagerConfig_TypeInfo;
          v46 = (System_Int32_array **)v44;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v45 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v45->static_fields->MasterDataCacheVer, (System_String_o *)v46, 0LL) )
          {
            v39 = sub_B0D8BC(string___TypeInfo, 5LL);
            if ( v39 )
            {
              v53 = (System_String_array *)v39;
              v39 = StringLiteral_20448/*"master data versiton different ("*/;
              if ( StringLiteral_20448/*"master data versiton different ("*/ )
              {
                v39 = sub_B0D964(StringLiteral_20448/*"master data versiton different ("*/, v53->obj.klass->_1.element_class);
                if ( !v39 )
                  goto LABEL_107;
                v54 = (System_Int32_array **)StringLiteral_20448/*"master data versiton different ("*/;
              }
              else
              {
                v54 = 0LL;
              }
              if ( !v53->max_length )
                goto LABEL_102;
              v53->m_Items[0] = (System_String_o *)v54;
              sub_B0D840((BattleServantConfConponent_o *)v53->m_Items, v54, v47, v48, v49, v50, v51, v52);
              if ( !v46 || (v39 = sub_B0D964(v46, v53->obj.klass->_1.element_class)) != 0 )
              {
                if ( v53->max_length <= 1 )
                  goto LABEL_102;
                v53->m_Items[1] = (System_String_o *)v46;
                sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[1], v46, v61, v62, v63, v64, v65, v66);
                v39 = StringLiteral_666/*") -> ("*/;
                if ( StringLiteral_666/*") -> ("*/ )
                {
                  v39 = sub_B0D964(StringLiteral_666/*") -> ("*/, v53->obj.klass->_1.element_class);
                  if ( !v39 )
                    goto LABEL_107;
                  v73 = (System_Int32_array **)StringLiteral_666/*") -> ("*/;
                }
                else
                {
                  v73 = 0LL;
                }
                if ( v53->max_length <= 2 )
                  goto LABEL_102;
                v53->m_Items[2] = (System_String_o *)v73;
                sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[2], v73, v67, v68, v69, v70, v71, v72);
                v39 = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v39 = (__int64)ManagerConfig_TypeInfo;
                }
                v80 = *(System_Int32_array ***)(*(_QWORD *)(v39 + 184) + 32LL);
                if ( !v80 || (v39 = sub_B0D964(v80, v53->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v53->max_length <= 3 )
                    goto LABEL_102;
                  v53->m_Items[3] = (System_String_o *)v80;
                  sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[3], v80, v74, v75, v76, v77, v78, v79);
                  v39 = StringLiteral_658/*")"*/;
                  if ( !StringLiteral_658/*")"*/ )
                  {
                    v87 = 0LL;
LABEL_91:
                    if ( v53->max_length > 4 )
                    {
                      v53->m_Items[4] = (System_String_o *)v87;
                      sub_B0D840((BattleServantConfConponent_o *)&v53->m_Items[4], v87, v81, v82, v83, v84, v85, v86);
                      if ( System_String__Concat_43930028(v53, 0LL) )
                        goto LABEL_58;
                      return 1;
                    }
LABEL_102:
                    v91 = sub_B0D9A8(v39);
                    sub_B0D948(v91, 0LL);
                  }
                  v39 = sub_B0D964(StringLiteral_658/*")"*/, v53->obj.klass->_1.element_class);
                  if ( v39 )
                  {
                    v87 = (System_Int32_array **)StringLiteral_658/*")"*/;
                    goto LABEL_91;
                  }
                }
              }
LABEL_107:
              v94 = sub_B0D99C(v39);
              sub_B0D948(v94, 0LL);
            }
LABEL_108:
            sub_B0D97C(v39);
          }
          if ( *(_DWORD *)(v43 + 24) == 3 )
          {
            v39 = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
            v57 = DataManager_TypeInfo;
            v58 = v39;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v57 = DataManager_TypeInfo;
            }
            v57->static_fields->dataVersion = v58;
            v57->static_fields->readDataVersion = v58;
            if ( *(_DWORD *)(v43 + 24) > 2u )
            {
              v59 = System_Int64__Parse(*(System_String_o **)(v43 + 48), 0LL);
              v60 = DataManager_TypeInfo;
              DataManager_TypeInfo->static_fields->dateVersion = v59;
              v60->static_fields->readDateVersion = v59;
              return 1;
            }
            goto LABEL_102;
          }
          v29 = &StringLiteral_5101/*"DataManager boot load error : list file parameter error"*/;
        }
        else
        {
LABEL_56:
          v29 = &StringLiteral_5100/*"DataManager boot load error : list file break"*/;
        }
      }
      else
      {
        v29 = &StringLiteral_5098/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v29 = &StringLiteral_5103/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_57:
    if ( *v29 )
      goto LABEL_58;
    return 1;
  }
LABEL_58:
  v55 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v55 = DataManager_TypeInfo;
  }
  v55->static_fields->dataVersion = 0;
  v55->static_fields->dateVersion = 0LL;
  DataManager__ClearSaveDataList(this, v21);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_421607D & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_421607D = 1;
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
  sub_B0D840(
    p_updateData,
    v14,
    (System_String_array **)dateVer,
    (System_String_array **)obj,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataManager__setMasterDataVersion(
        DataManager_o *this,
        int32_t dataVer,
        int64_t dateVer,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0

  if ( (byte_421607C & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_421607C = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_c *v11; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  System_String_o *v14; // x19
  _BOOL8 v15; // x0
  System_String_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x0
  DataManager_c *v24; // x8
  struct DataManager_StaticFields *v25; // x0
  DataManager_c *v26; // x0

  if ( (byte_4216076 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, obj);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4216076 = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->serverHash,
    v13,
    (System_String_array **)method,
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
        sub_B0D97C(v15);
      v16 = System_String__Substring(v14, v14->fields.m_stringLength - 1, 0LL);
      if ( System_String__op_Equality(v16, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
      {
        v23 = System_String__Substring_43913640(v14, 0, v14->fields.m_stringLength - 1, 0LL);
        v24 = DataManager_TypeInfo;
        v14 = v23;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v24 = DataManager_TypeInfo;
        }
        v25 = v24->static_fields;
      }
      else
      {
        v26 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v26 = DataManager_TypeInfo;
        }
        v25 = v26->static_fields;
      }
      v25->serverHash = v14;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v25->serverHash,
        (System_Int32_array **)v14,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
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

  if ( (byte_4216078 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, obj);
    byte_4216078 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_B0D840(
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

  if ( (byte_4216091 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4216091 = 1;
  }
  if ( obj
    && ((v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v5 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    v6 = (DataManager_o *)sub_B0DC70(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_27257376(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_27257376(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v3; // x20
  DataManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *v10; // x21
  __int64 v11; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int entries; // w26
  int v14; // w27
  int v15; // w9
  __int64 v16; // x23
  __int64 v17; // x8
  System_Xml_XmlQualifiedName_o *v18; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v19; // x8
  DataMasterBase_o *v20; // x23
  __int64 v21; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v22; // x8
  int v23; // w26
  int v24; // w27
  int v25; // w9
  __int64 v26; // x23
  __int64 v27; // x8
  System_Xml_XmlQualifiedName_o *v28; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v29; // x8
  DataMasterBase_o *v30; // x23
  __int64 v31; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v32; // x8
  int v33; // w25
  int v34; // w26
  int v35; // w9
  __int64 v36; // x22
  __int64 v37; // x8
  System_Xml_XmlQualifiedName_o *v38; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v39; // x8
  DataMasterBase_o *v40; // x22
  __int64 v41; // x0
  DataManager_o *v42; // x0
  const MethodInfo *v43; // x1
  System_Nullable_long__o v44; // 0:x2.16
  System_Nullable_long__o v45; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)data;
  v4 = this;
  if ( (byte_4216092 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23025/*"updated"*/, v7);
    sub_B0D8A4(&StringLiteral_18017/*"deleted"*/, v8);
    this = (DataManager_o *)sub_B0D8A4(&StringLiteral_21846/*"replaced"*/, v9);
    byte_4216092 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_B0D97C(this);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18017/*"deleted"*/,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              v3,
                              (System_Type_o *)StringLiteral_18017/*"deleted"*/,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = this;
    if ( this )
    {
      v11 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
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
      v14 = 1;
      while ( 1 )
      {
        v15 = v14 - 1;
        if ( (unsigned int)(v14 - 1) >= LODWORD(lookup->fields.entries) )
          break;
        v16 = v15;
        v17 = *((_QWORD *)&lookup->fields.count + v15);
        if ( !v17 || !v10 )
          goto LABEL_57;
        v18 = *(System_Xml_XmlQualifiedName_o **)(v17 + 24);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                                  v18,
                                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v19 = v4->fields.lookup;
          if ( !v19 )
            goto LABEL_57;
          if ( (unsigned int)v16 >= LODWORD(v19->fields.entries) )
            break;
          v20 = (DataMasterBase_o *)*((_QWORD *)&v19->fields.count + v16);
          this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                                    (System_Type_o *)v18,
                                    (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v20 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v20, (Il2CppObject *)this, 0LL);
        }
        if ( v14 >= entries )
          goto LABEL_22;
        lookup = v4->fields.lookup;
        ++v14;
        if ( !lookup )
          goto LABEL_57;
      }
LABEL_59:
      v41 = sub_B0D9A8(this);
      sub_B0D948(v41, 0LL);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23025/*"updated"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_23025/*"updated"*/,
                            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    v21 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_B0DC70(v10);
      goto LABEL_61;
    }
  }
  v22 = v4->fields.lookup;
  if ( !v22 )
    goto LABEL_57;
  v23 = (int)v22->fields.entries;
  if ( v23 >= 1 )
  {
    v24 = 1;
    while ( 1 )
    {
      v25 = v24 - 1;
      if ( (unsigned int)(v24 - 1) >= LODWORD(v22->fields.entries) )
        goto LABEL_59;
      v26 = v25;
      v27 = *((_QWORD *)&v22->fields.count + v25);
      if ( !v27 || !v10 )
        goto LABEL_57;
      v28 = *(System_Xml_XmlQualifiedName_o **)(v27 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                                v28,
                                (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = v4->fields.lookup;
        if ( !v29 )
          goto LABEL_57;
        if ( (unsigned int)v26 >= LODWORD(v29->fields.entries) )
          goto LABEL_59;
        v30 = (DataMasterBase_o *)*((_QWORD *)&v29->fields.count + v26);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                                  (System_Type_o *)v28,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v30 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v30, (Il2CppObject *)this, 0LL);
      }
      if ( v24 >= v23 )
        break;
      v22 = v4->fields.lookup;
      ++v24;
      if ( !v22 )
        goto LABEL_57;
    }
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21846/*"replaced"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_21846/*"replaced"*/,
                            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this;
  if ( this )
  {
    v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      v42 = (DataManager_o *)sub_B0DC70(v3);
      DataManager__getRevisionTotal(v42, v43);
      return;
    }
  }
  v32 = v4->fields.lookup;
  if ( !v32 )
    goto LABEL_57;
  v33 = (int)v32->fields.entries;
  if ( v33 >= 1 )
  {
    v34 = 1;
    while ( 1 )
    {
      v35 = v34 - 1;
      if ( (unsigned int)(v34 - 1) >= LODWORD(v32->fields.entries) )
        goto LABEL_59;
      v36 = v35;
      v37 = *((_QWORD *)&v32->fields.count + v35);
      if ( !v37 || !v3 )
        goto LABEL_57;
      v38 = *(System_Xml_XmlQualifiedName_o **)(v37 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
                                v38,
                                (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v39 = v4->fields.lookup;
        if ( !v39 )
          goto LABEL_57;
        if ( (unsigned int)v36 >= LODWORD(v39->fields.entries) )
          goto LABEL_59;
        v40 = (DataMasterBase_o *)*((_QWORD *)&v39->fields.count + v36);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  v3,
                                  (System_Type_o *)v38,
                                  (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v40 )
          goto LABEL_57;
        v44.fields.value = 0LL;
        *(_QWORD *)&v44.fields.has_value = 0LL;
        v45.fields.value = 0LL;
        *(_QWORD *)&v45.fields.has_value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v40, (Il2CppObject *)this, v44, v45, 0LL);
      }
      if ( v34 >= v33 )
        return;
      v32 = v4->fields.lookup;
      ++v34;
      if ( !v32 )
        goto LABEL_57;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216083 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4216083 = 1;
  }
  v5 = sub_B0D974(DataManager__updateMasterData_d__49_TypeInfo, isUseTips, method);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_BYTE *)(v5 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216079 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4216079 = 1;
  }
  v4 = sub_B0D974(DataManager__updateWebViewData_d__38_TypeInfo, method, v2);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  System_String_o *CacheListFileName; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t size; // w24
  System_String_o *v23; // x20
  System_Text_StringBuilder_o *v24; // x21
  ManagerConfig_c *v25; // x0
  struct System_Collections_Generic_List_long____o *v26; // x25
  signed __int64 v27; // x23
  unsigned __int64 v28; // x24
  Il2CppObject *v29; // x19
  System_Byte_array *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x19
  System_String_o *v33; // x21
  System_Text_Encoding_o *UTF8; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_IO_StreamWriter_o *v37; // x19
  __int64 v38; // x0
  System_IO_StreamWriter_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0
  uint32_t v43; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v44; // [xsp+18h] [xbp-38h]

  if ( (byte_4216090 & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    sub_B0D8A4(&Crc32_TypeInfo, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v8);
    sub_B0D8A4(&System_IO_StreamWriter_TypeInfo, v9);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B0D8A4(&uint_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v12);
    sub_B0D8A4(&StringLiteral_23779/*"~{0}\n{1}"*/, v13);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v14);
    sub_B0D8A4(&StringLiteral_705/*","*/, v15);
    byte_4216090 = 1;
  }
  HIDWORD(v44) = 0;
  v16 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( !v16->static_fields->UseMock )
  {
    v17 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v17);
    saveDataMapList = this->fields.saveDataMapList;
    if ( !saveDataMapList )
      goto LABEL_23;
    size = saveDataMapList->fields._size;
    v23 = CacheListFileName;
    v24 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v19, v20);
    System_Text_StringBuilder___ctor_42149428(v24, (size << 7) + 128, 0LL);
    if ( !v24 )
      goto LABEL_23;
    System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)StringLiteral_1543/*"@"*/, 0LL);
    v25 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v25 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_42155400(v24, v25->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)StringLiteral_705/*","*/, 0LL);
    System_Text_StringBuilder__Append_42158740(v24, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)StringLiteral_705/*","*/, 0LL);
    System_Text_StringBuilder__Append_42158880(v24, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                             v24,
                                             (System_String_o *)StringLiteral_26/*"\n"*/,
                                             0LL);
    v26 = this->fields.saveDataMapList;
    if ( !v26 )
      goto LABEL_23;
    v27 = v26->fields._size;
    if ( (int)v27 >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        System_Text_StringBuilder__Append_42155400(v24, (System_String_o *)v26->fields._items->m_Items[v28], 0LL);
        CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42155400(
                                                 v24,
                                                 (System_String_o *)StringLiteral_26/*"\n"*/,
                                                 0LL);
        if ( (__int64)++v28 >= v27 )
          break;
        v26 = this->fields.saveDataMapList;
        if ( !v26 )
          goto LABEL_23;
      }
    }
    v29 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                            v24,
                            v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_23:
      sub_B0D97C(CacheListFileName);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_String_o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_IConvertible_ToDouble.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._19_System_IConvertible_ToDecimal.methodPtr);
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v43 = Crc32__Compute(v30, 0LL);
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v43);
    v32 = System_String__Format_43845440((System_String_o *)StringLiteral_23779/*"~{0}\n{1}"*/, v31, v29, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v33 = CatAndMouseGame__CatGame3(v32, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v37 = (System_IO_StreamWriter_o *)sub_B0D974(System_IO_StreamWriter_TypeInfo, v35, v36);
    System_IO_StreamWriter___ctor_43900376(v37, v23, 0, UTF8, 0LL);
    if ( !v37 )
      sub_B0D97C(v38);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v37->klass->vtable._16_Write.method)(
      v37,
      v33,
      v37->klass->vtable._17_Write.methodPtr);
    v44 = 0x100000113LL;
    klass = v37->klass;
    if ( *(_WORD *)&v37->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v42 = sub_AA67A0(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v42)(v37, *(_QWORD *)(v42 + 8));
    if ( (_DWORD)v44 == 275 )
      HIDWORD(v44) = 0;
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
  System_Text_Encoding_o *UTF8; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x20
  System_Int32_array **v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_o *v66; // x20
  System_Byte_array *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x20
  System_String_o *v70; // x20
  System_Text_Encoding_o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  System_IO_StreamWriter_o *v74; // x21
  __int64 v75; // x0
  __int64 v76; // x0
  uint32_t v77; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421608E & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    sub_B0D8A4(&Crc32_TypeInfo, v2);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&System_IO_StreamWriter_TypeInfo, v5);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v7);
    sub_B0D8A4(&StringLiteral_23776/*"~"*/, v8);
    sub_B0D8A4(&StringLiteral_1543/*"@"*/, v9);
    sub_B0D8A4(&StringLiteral_705/*","*/, v10);
    byte_421608E = 1;
  }
  v77 = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( !v11->static_fields->UseMock )
  {
    v12 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v12);
    UTF8 = (System_Text_Encoding_o *)sub_B0D8BC(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_55;
    v21 = (System_String_array *)UTF8;
    v22 = (System_Int32_array **)StringLiteral_1543/*"@"*/;
    if ( StringLiteral_1543/*"@"*/ )
    {
      v22 = (System_Int32_array **)sub_B0D964(StringLiteral_1543/*"@"*/, v21->obj.klass->_1.element_class);
      if ( !v22 )
        goto LABEL_54;
      v23 = (System_Int32_array **)StringLiteral_1543/*"@"*/;
    }
    else
    {
      v23 = 0LL;
    }
    if ( !v21->max_length )
      goto LABEL_53;
    v21->m_Items[0] = (System_String_o *)v23;
    sub_B0D840((BattleServantConfConponent_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
    v22 = (System_Int32_array **)ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v22 = (System_Int32_array **)ManagerConfig_TypeInfo;
    }
    v30 = *(System_Int32_array ***)&v22[23]->m_Items[1];
    if ( !v30 || (v22 = (System_Int32_array **)sub_B0D964(v30, v21->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v21->max_length <= 1 )
        goto LABEL_53;
      v21->m_Items[1] = (System_String_o *)v30;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[1], v30, v24, v25, v26, v27, v28, v29);
      v22 = (System_Int32_array **)StringLiteral_705/*","*/;
      if ( StringLiteral_705/*","*/ )
      {
        v22 = (System_Int32_array **)sub_B0D964(StringLiteral_705/*","*/, v21->obj.klass->_1.element_class);
        if ( !v22 )
          goto LABEL_54;
        v37 = (System_Int32_array **)StringLiteral_705/*","*/;
      }
      else
      {
        v37 = 0LL;
      }
      if ( v21->max_length <= 2 )
        goto LABEL_53;
      v21->m_Items[2] = (System_String_o *)v37;
      sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
      v22 = (System_Int32_array **)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
      v44 = v22;
      if ( !v22 || (v22 = (System_Int32_array **)sub_B0D964(v22, v21->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v21->max_length <= 3 )
          goto LABEL_53;
        v21->m_Items[3] = (System_String_o *)v44;
        sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[3], v44, v38, v39, v40, v41, v42, v43);
        v22 = (System_Int32_array **)StringLiteral_705/*","*/;
        if ( StringLiteral_705/*","*/ )
        {
          v22 = (System_Int32_array **)sub_B0D964(StringLiteral_705/*","*/, v21->obj.klass->_1.element_class);
          if ( !v22 )
            goto LABEL_54;
          v51 = (System_Int32_array **)StringLiteral_705/*","*/;
        }
        else
        {
          v51 = 0LL;
        }
        if ( v21->max_length <= 4 )
          goto LABEL_53;
        v21->m_Items[4] = (System_String_o *)v51;
        sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
        v22 = (System_Int32_array **)System_Int64__ToString(
                                       (int64_t)&DataManager_TypeInfo->static_fields->dateVersion,
                                       0LL);
        v58 = v22;
        if ( !v22 || (v22 = (System_Int32_array **)sub_B0D964(v22, v21->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v21->max_length <= 5 )
            goto LABEL_53;
          v21->m_Items[5] = (System_String_o *)v58;
          sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
          v22 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
          if ( !StringLiteral_26/*"\n"*/ )
          {
            v65 = 0LL;
LABEL_42:
            if ( v21->max_length > 6 )
            {
              v21->m_Items[6] = (System_String_o *)v65;
              sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
              v66 = System_String__Concat_43930028(v21, 0LL);
              UTF8 = System_Text_Encoding__get_UTF8(0LL);
              if ( UTF8 )
              {
                v67 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                             UTF8,
                                             v66,
                                             UTF8->klass->vtable._19_GetBytes.methodPtr);
                if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
                v77 = Crc32__Compute(v67, 0LL);
                v68 = System_UInt32__ToString((uint32_t)&v77, 0LL);
                v69 = System_String__Concat_43853316(
                        (System_String_o *)StringLiteral_23776/*"~"*/,
                        v68,
                        (System_String_o *)StringLiteral_26/*"\n"*/,
                        v66,
                        0LL);
                if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
                }
                v70 = CatAndMouseGame__CatGame1(v69, 0, 0LL);
                v71 = System_Text_Encoding__get_UTF8(0LL);
                v74 = (System_IO_StreamWriter_o *)sub_B0D974(System_IO_StreamWriter_TypeInfo, v72, v73);
                System_IO_StreamWriter___ctor_43900376(v74, CacheVersionFileName, 0, v71, 0LL);
                if ( v74 )
                {
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v74->klass->vtable._16_Write.method)(
                    v74,
                    v70,
                    v74->klass->vtable._17_Write.methodPtr);
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v74->klass->vtable._8_Close.method)(
                    v74,
                    v74->klass->vtable._9_Dispose.methodPtr);
                  return;
                }
              }
LABEL_55:
              sub_B0D97C(UTF8);
            }
LABEL_53:
            v75 = sub_B0D9A8(v22);
            sub_B0D948(v75, 0LL);
          }
          v22 = (System_Int32_array **)sub_B0D964(StringLiteral_26/*"\n"*/, v21->obj.klass->_1.element_class);
          if ( v22 )
          {
            v65 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_54:
    v76 = sub_B0D99C(v22);
    sub_B0D948(v76, 0LL);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42131A4 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager___c_TypeInfo, v1);
    byte_42131A4 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DataManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_42131A5 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_0_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_42131A5 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v8 = *(_QWORD *)&_4__this->fields.lastFrameTime;
  if ( !v8 )
    goto LABEL_16;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)b )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * a + 32);
  if ( !v13 )
LABEL_16:
    sub_B0D97C(this);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
  {
LABEL_17:
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
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
  if ( (byte_42131A6 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_1_o *)sub_B0D8A4(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_42131A6 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass55_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_B0D97C(this);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B0D97C(this);
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
  struct DataManager_o *_4__this; // x26
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_WaitForEndOfFrame_o *v16; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool result; // w0
  DataManager_c *v25; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v27; // w9
  System_String_o *CacheFileName; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_IO_MemoryStream_o *v31; // x21
  System_IO_Stream_o *v32; // x22
  System_IO_Stream_o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x24
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_WaitForEndOfFrame_o *v39; // x20
  BattleServantConfConponent_o *v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w8
  DataManager_c *v48; // x8
  System_IO_Stream_c *klass; // x8
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  int v54; // w8
  System_IO_Stream_c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_IO_MemoryStream_c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  System_Byte_array *saveNameList; // x22
  System_IO_MemoryStream_o *v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  System_IO_BinaryReader_o *v76; // x22
  __int64 v77; // x0
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int size; // w26
  int i; // w27
  __int64 v81; // x0
  int v82; // w24
  __int64 v83; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x25
  __int64 v85; // x0
  int v86; // w8
  System_IO_BinaryReader_c *v87; // x8
  unsigned __int64 v88; // x10
  int32_t *v89; // x11
  __int64 v90; // x0
  int v91; // w8
  System_IO_MemoryStream_c *v92; // x8
  unsigned __int64 v93; // x10
  int32_t *v94; // x11
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x0
  __int64 v106; // x0
  DataManager_o *v107; // [xsp+8h] [xbp-78h]
  _DWORD v108[7]; // [xsp+10h] [xbp-70h]
  int v109; // [xsp+2Ch] [xbp-54h]

  v2 = this;
  if ( (byte_42131A7 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, method);
    sub_B0D8A4(&byte___TypeInfo, v3);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&System_GC_TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&long___TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_42131A7 = 1;
  }
  v109 = 0;
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
        v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v14, v15);
        UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v16;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B0D840(p__2__current, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
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
          v107 = _4__this;
          v31 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v29, v30);
          System_IO_MemoryStream___ctor(v31, 0LL);
          v32 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          }
          v33 = CatAndMouseGame__MouseGameZ(v32, 0LL);
          v34 = sub_B0D8BC(byte___TypeInfo, 0x4000LL);
          v35 = v34;
          if ( !v34 )
            sub_B0D97C(0LL);
          if ( !v33 )
            sub_B0D97C(v34);
          while ( 1 )
          {
            v36 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v33->klass->vtable._30_unknown.method)(
                    v33,
                    v35,
                    0LL,
                    *(unsigned int *)(v35 + 24),
                    v33->klass->vtable._31_ReadByte.methodPtr);
            if ( (int)v36 < 1 )
              break;
            if ( !v31 )
              sub_B0D97C(v36);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v31->klass->vtable._32_Write.method)(
              v31,
              v35,
              0LL,
              (unsigned int)v36,
              v31->klass->vtable._33_WriteByte.methodPtr);
          }
          v108[v109++] = 198;
          klass = v33->klass;
          if ( *(_WORD *)&v33->klass->_2.bitflags1 )
          {
            v50 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              ++v50;
              p_offset += 4;
              if ( v50 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v52 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_42:
            v52 = sub_AA67A0(v33, System_IDisposable_TypeInfo, 0LL);
          }
          v53 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v52)(v33, *(_QWORD *)(v52 + 8));
          v54 = v109;
          if ( v109 && v108[v109 - 1] == 198 )
            v54 = --v109;
          v108[v54] = 212;
          ++v109;
          if ( v32 )
          {
            v55 = v32->klass;
            if ( *(_WORD *)&v32->klass->_2.bitflags1 )
            {
              v56 = 0LL;
              v57 = &v55->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
              {
                ++v56;
                v57 += 4;
                if ( v56 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              v58 = (__int64)(&v55->vtable._0_Equals.method + 2 * *v57);
            }
            else
            {
LABEL_52:
              v58 = sub_AA67A0(v32, System_IDisposable_TypeInfo, 0LL);
            }
            v53 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v58)(v32, *(_QWORD *)(v58 + 8));
          }
          if ( v109 && v108[v109 - 1] == 212 )
            --v109;
          if ( !v31 )
            sub_B0D97C(v53);
          v59 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v31->klass->vtable._37_ToArray.method)(
                                         v31,
                                         v31->klass[1]._1.image);
          _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v59;
          sub_B0D840((BattleServantConfConponent_o *)&_4__this->fields.saveNameList, v59, v60, v61, v62, v63, v64, v65);
          v108[v109++] = 239;
          v66 = v31->klass;
          if ( *(_WORD *)&v31->klass->_2.bitflags1 )
          {
            v67 = 0LL;
            v68 = &v66->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
            {
              ++v67;
              v68 += 4;
              if ( v67 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
                goto LABEL_63;
            }
            v69 = (__int64)(&v66->vtable._0_Equals.method + 2 * *v68);
          }
          else
          {
LABEL_63:
            v69 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v69)(v31, *(_QWORD *)(v69 + 8));
          if ( v109 && v108[v109 - 1] == 239 )
            --v109;
          saveNameList = (System_Byte_array *)_4__this->fields.saveNameList;
          v73 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, v70, v71);
          System_IO_MemoryStream___ctor_44569216(v73, saveNameList, 0LL);
          v76 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v74, v75);
          System_IO_BinaryReader___ctor(v76, (System_IO_Stream_o *)v73, 0LL);
          saveDataMapList = _4__this->fields.saveDataMapList;
          if ( !saveDataMapList )
            sub_B0D97C(v77);
          size = saveDataMapList->fields._size;
          if ( size >= 1 )
          {
            if ( !v76 )
              sub_B0D97C(v77);
            for ( i = 0; i < size; ++i )
            {
              v81 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v76->klass->vtable._15_ReadInt32.method)(
                      v76,
                      v76->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v73 )
                sub_B0D97C(v81);
              v82 = v81;
              v83 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v73->klass->vtable._12_get_Position.method)(
                      v73,
                      v73->klass->vtable._13_set_Position.methodPtr);
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v73->klass->vtable._28_Seek.method)(
                v73,
                v82,
                1LL,
                v73->klass->vtable._29_SetLength.methodPtr);
              v84 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v107->fields.lastFrameTime;
              v85 = sub_B0D8BC(long___TypeInfo, 2LL);
              if ( !v85 )
                sub_B0D97C(0LL);
              v86 = *(_DWORD *)(v85 + 24);
              if ( !v86 )
              {
                v105 = sub_B0D9A8(v85);
                sub_B0D948(v105, 0LL);
              }
              *(_QWORD *)(v85 + 32) = v83;
              if ( v86 == 1 )
              {
                v106 = sub_B0D9A8(v85);
                sub_B0D948(v106, 0LL);
              }
              *(_QWORD *)(v85 + 40) = v82;
              if ( !v84 )
                sub_B0D97C(v85);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v84,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_long____Add__);
            }
          }
          v108[v109++] = 362;
          if ( v76 )
          {
            v87 = v76->klass;
            if ( *(_WORD *)&v76->klass->_2.bitflags1 )
            {
              v88 = 0LL;
              v89 = &v87->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
              {
                ++v88;
                v89 += 4;
                if ( v88 >= *(unsigned __int16 *)&v76->klass->_2.bitflags1 )
                  goto LABEL_83;
              }
              v90 = (__int64)(&v87->vtable._0_Equals.method + 2 * *v89);
            }
            else
            {
LABEL_83:
              v90 = sub_AA67A0(v76, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v90)(v76, *(_QWORD *)(v90 + 8));
          }
          v91 = v109;
          if ( v109 && v108[v109 - 1] == 362 )
            v91 = --v109;
          v108[v91] = 376;
          ++v109;
          if ( v73 )
          {
            v92 = v73->klass;
            if ( *(_WORD *)&v73->klass->_2.bitflags1 )
            {
              v93 = 0LL;
              v94 = &v92->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
              {
                ++v93;
                v94 += 4;
                if ( v93 >= *(unsigned __int16 *)&v73->klass->_2.bitflags1 )
                  goto LABEL_94;
              }
              v95 = (__int64)(&v92->vtable._0_Equals.method + 2 * *v94);
            }
            else
            {
LABEL_94:
              v95 = sub_AA67A0(v73, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v95)(v73, *(_QWORD *)(v95 + 8));
          }
          if ( v109 && v108[v109 - 1] == 376 )
            --v109;
          if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_GC_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
          }
          System_GC__Collect_43098652(0LL);
          v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v96, v97);
          UnityEngine_WaitForEndOfFrame___ctor(v98, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v98;
          v40 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B0D840(v40, (System_Int32_array **)v98, v99, v100, v101, v102, v103, v104);
          v47 = 2;
LABEL_104:
          *(_DWORD *)&v40[-1].fields.isOpenAfter = v47;
          return 1;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v39 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v37, v38);
        UnityEngine_WaitForEndOfFrame___ctor(v39, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v39;
        v40 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B0D840(v40, (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
        v47 = 3;
        goto LABEL_104;
      }
LABEL_32:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v48 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v48 = DataManager_TypeInfo;
      }
      static_fields = v48->static_fields;
      result = 0;
      v27 = 5;
LABEL_36:
      static_fields->readMasterDataResult = v27;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_112;
    case 2:
      v2->fields.__1__state = -1;
      v25 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v25 = DataManager_TypeInfo;
      }
      static_fields = v25->static_fields;
      result = 0;
      v27 = 1;
      goto LABEL_36;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_112:
        sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_WaitForEndOfFrame_o *v8; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  bool MasterVersionFile; // w0
  DataManager_c *v18; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v20; // w9

  v2 = this;
  if ( (byte_42131A8 & 1) == 0 )
  {
    sub_B0D8A4(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_42131A8 = 1;
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
        v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v6, v7);
        UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B0D840(p__2__current, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      goto LABEL_12;
    }
LABEL_23:
    sub_B0D97C(this);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
LABEL_12:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v18 = DataManager_TypeInfo;
  if ( MasterVersionFile )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = DataManager_TypeInfo;
    }
    static_fields = v18->static_fields;
    result = 0;
    v20 = 1;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v18 = DataManager_TypeInfo;
    }
    static_fields = v18->static_fields;
    result = 0;
    v20 = 5;
  }
  static_fields->readMasterVersionResult = v20;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  struct DataManager_o *_4__this; // x20
  DataManager_c *v78; // x0
  bool result; // w0
  int32_t *v80; // x21
  int v81; // w8
  MasterDataUnpakcer_o *v82; // x21
  __int64 v83; // x0
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  UnityEngine_WaitForEndOfFrame_o *v93; // x20
  BattleServantConfConponent_o *v94; // x19
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  int v101; // w8
  System_Int32_array **dataMapObject_5__7; // x8
  __int64 v103; // x11
  System_Int32_array **v104; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v106; // x8
  System_String_o *CachePath; // x21
  __int64 v108; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  DataManager_c *v127; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v129; // x21
  System_Int32_array **v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  DataManager_c *v143; // x0
  struct DataManager_StaticFields *static_fields; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  UnityEngine_WaitForEndOfFrame_o *v147; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Byte_array *cryptBytes_5__8; // x22
  System_Int32_array **v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  __int64 v169; // x1
  __int64 v170; // x2
  UnityEngine_WaitForEndOfFrame_o *v171; // x20
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  __int64 v178; // x1
  __int64 v179; // x2
  System_Func_bool__o *v180; // x21
  __int64 v181; // x1
  __int64 v182; // x2
  UnityEngine_WaitUntil_o *v183; // x20
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  __int64 v190; // x1
  __int64 v191; // x2
  UnityEngine_WaitForEndOfFrame_o *v192; // x20
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  UnityEngine_WaitForEndOfFrame_o *v199; // x20
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  int v206; // w8
  int32_t *p_i_5__9; // x23
  DataManager_c *v208; // x8
  struct DataManager_StaticFields *v209; // x8
  int v210; // w9
  Il2CppObject *v211; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v225; // x8
  __int64 i_5__9; // x9
  __int64 v227; // x8
  System_Int32_array **v228; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  __int64 v236; // x0
  struct DataManager___c__DisplayClass49_0_o *v237; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *dataMapDict_5__6; // x0
  System_Int32_array **Item; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  __int64 v246; // x1
  __int64 v247; // x2
  struct DataManager___c__DisplayClass49_0_o *v248; // x8
  __int64 v249; // x1
  __int64 v250; // x2
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *saveDataMapList; // x22
  DataManager__updateMasterData_d__49_o *v253; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v254; // x23
  int32_t v255; // w1
  BattleServantConfConponent_o *p_dataMap_5__10; // x22
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  __int64 v263; // x1
  UnityEngine_WaitForEndOfFrame_o *v264; // x20
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  ManagerConfig_c *v271; // x0
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  struct System_Collections_Generic_List_long____o *v284; // x8
  System_Collections_Generic_List_int__o *v285; // x22
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  ManagerConfig_c *v292; // x0
  __int64 v293; // x27
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_Int32_array **v300; // x23
  System_String_array **v301; // x2
  System_String_array **v302; // x3
  System_Boolean_array **v303; // x4
  System_Int32_array **v304; // x5
  System_Int32_array *v305; // x6
  System_Int32_array *v306; // x7
  System_Int32_array **v307; // x23
  System_String_array **v308; // x2
  System_String_array **v309; // x3
  System_Boolean_array **v310; // x4
  System_Int32_array **v311; // x5
  System_Int32_array *v312; // x6
  System_Int32_array *v313; // x7
  System_Int32_array **v314; // x23
  System_String_array **v315; // x2
  System_String_array **v316; // x3
  System_Boolean_array **v317; // x4
  System_Int32_array **v318; // x5
  System_Int32_array *v319; // x6
  System_Int32_array *v320; // x7
  System_Int32_array **v321; // x23
  System_String_array **v322; // x2
  System_String_array **v323; // x3
  System_Boolean_array **v324; // x4
  System_Int32_array **v325; // x5
  System_Int32_array *v326; // x6
  System_Int32_array *v327; // x7
  System_Int32_array **v328; // x23
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Int32_array **v335; // x23
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_Int32_array **v342; // x23
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  System_Int32_array **v349; // x23
  __int64 v350; // x1
  __int64 v351; // x2
  __int64 v352; // x8
  __int64 v353; // x28
  DataMasterBase_o *v354; // x23
  __int64 v355; // x24
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Int32_array **MasterName_k__BackingField; // x1
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v363; // x25
  __int64 v364; // x1
  __int64 v365; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v366; // x26
  const MethodInfo_2980204 *v367; // x3
  __int64 v368; // x26
  Il2CppObject *saveNameList; // x25
  int32_t v370; // w24
  __int64 v371; // x8
  const MethodInfo_2980204 *v372; // x3
  __int64 v373; // x26
  __int64 v374; // x8
  __int64 v375; // x1
  __int64 v376; // x2
  UnityEngine_WaitForEndOfFrame_o *v377; // x20
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  ManagerConfig_c *v384; // x0
  Il2CppObject *v385; // x22
  __int64 v386; // x1
  __int64 v387; // x2
  int v388; // w8
  System_String_array **v389; // x2
  System_String_array **v390; // x3
  System_Boolean_array **v391; // x4
  System_Int32_array **v392; // x5
  System_Int32_array *v393; // x6
  System_Int32_array *v394; // x7
  __int64 v395; // x1
  __int64 v396; // x2
  UnityEngine_WaitForEndOfFrame_o *v397; // x20
  System_String_array **v398; // x2
  System_String_array **v399; // x3
  System_Boolean_array **v400; // x4
  System_Int32_array **v401; // x5
  System_Int32_array *v402; // x6
  System_Int32_array *v403; // x7
  DataManager_c *v404; // x8
  UnityEngine_WaitForEndOfFrame_o *v405; // x20
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  __int64 v412; // x1
  __int64 v413; // x2
  UnityEngine_WaitForEndOfFrame_o *v414; // x20
  System_String_array **v415; // x2
  System_String_array **v416; // x3
  System_Boolean_array **v417; // x4
  System_Int32_array **v418; // x5
  System_Int32_array *v419; // x6
  System_Int32_array *v420; // x7
  UnityEngine_WaitForEndOfFrame_o *v421; // x20
  System_String_array **v422; // x2
  System_String_array **v423; // x3
  System_Boolean_array **v424; // x4
  System_Int32_array **v425; // x5
  System_Int32_array *v426; // x6
  System_Int32_array *v427; // x7
  __int64 v428; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v429; // x9
  __int64 v430; // x1
  __int64 v431; // x2
  DataManager_c *v432; // x8
  UnityEngine_WaitForEndOfFrame_o *v433; // x20
  System_String_array **v434; // x2
  System_String_array **v435; // x3
  System_Boolean_array **v436; // x4
  System_Int32_array **v437; // x5
  System_Int32_array *v438; // x6
  System_Int32_array *v439; // x7
  __int64 v440; // x0
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-F0h]
  System_Nullable_long__o v442; // [xsp+10h] [xbp-E0h] BYREF
  System_Nullable_long__o v443; // [xsp+20h] [xbp-D0h] BYREF
  int v444; // [xsp+30h] [xbp-C0h]
  int v445; // [xsp+78h] [xbp-78h]
  int v446; // [xsp+88h] [xbp-68h]
  bool lockTaken; // [xsp+94h] [xbp-5Ch] BYREF
  System_Nullable_long__o v448; // 0:x0.16
  System_Nullable_long__o v449; // 0:x0.16

  v8 = this;
  if ( (byte_42131A9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v9);
    sub_B0D8A4(&System_Convert_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantClassMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantCommentMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantProfileMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v19);
    sub_B0D8A4(&Method_DataManager__updateMasterData_b__49_0__, v20);
    sub_B0D8A4(&DataManager_TypeInfo, v21);
    sub_B0D8A4(&DataMasterBase___TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v25);
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v26);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v27);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v28);
    sub_B0D8A4(&System_GC_TypeInfo, v29);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v30);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____Add__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____Clear__, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__FindIndex__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____get_Count__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____get_Item__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long____set_Item__, v43);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v44);
    sub_B0D8A4(&LogoMain_TypeInfo, v45);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v46);
    sub_B0D8A4(&MasterDataUnpakcer_TypeInfo, v47);
    sub_B0D8A4(&MaterialBranchRouteManager_TypeInfo, v48);
    sub_B0D8A4(&MaterialGroupClearHistoryManager_TypeInfo, v49);
    sub_B0D8A4(&MaterialServantLimitCountManager_TypeInfo, v50);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v51);
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, v52);
    sub_B0D8A4(&OtherUserNewManager_TypeInfo, v53);
    sub_B0D8A4(&Method_System_Predicate_string___ctor__, v54);
    sub_B0D8A4(&System_Predicate_string__TypeInfo, v55);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v56);
    sub_B0D8A4(&ServantProfileEventJoinManager_TypeInfo, v57);
    sub_B0D8A4(&ServantProfileLimitCountManager_TypeInfo, v58);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v60);
    sub_B0D8A4(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v61);
    sub_B0D8A4(&DataManager___c__DisplayClass49_0_TypeInfo, v62);
    sub_B0D8A4(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__, v63);
    sub_B0D8A4(&DataManager___c__DisplayClass49_1_TypeInfo, v64);
    sub_B0D8A4(&UserCommandCodeCollectionManager_TypeInfo, v65);
    sub_B0D8A4(&UserCommandCodeNewManager_TypeInfo, v66);
    sub_B0D8A4(&UserEquipNewManager_TypeInfo, v67);
    sub_B0D8A4(&UserMissionProgressManager_TypeInfo, v68);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v69);
    sub_B0D8A4(&UserServantLockManager_TypeInfo, v70);
    sub_B0D8A4(&UserServantNewManager_TypeInfo, v71);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v72);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v73);
    sub_B0D8A4(&WarBoardMessageHistoryManager_TypeInfo, v74);
    sub_B0D8A4(&WarBoardMovieHistoryManager_TypeInfo, v75);
    this = (DataManager__updateMasterData_d__49_o *)sub_B0D8A4(&StringLiteral_11612/*"SCRIPT"*/, v76);
    byte_42131A9 = 1;
  }
  lockTaken = 0;
  v446 = 0;
  v445 = 0;
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
      v106 = *(_QWORD *)&_4__this->fields.lastFrameTime;
      if ( !v106 )
        goto LABEL_302;
      v8->fields._saveDataCount_5__3 = *(_DWORD *)(v106 + 24);
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
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v109, v110, v111, v112, v113, v114);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v121, v122, v123, v124, v125, v126);
      v127 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v127 = DataManager_TypeInfo;
      }
      updateData = v127->static_fields->updateData;
      if ( !updateData )
        sub_B0D97C(0LL);
      v129 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v130 = (System_Int32_array **)System_Convert__FromBase64String(v129, 0LL);
      v8->fields._cryptBytes_5__8 = (struct System_Byte_array *)v130;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, v130, v131, v132, v133, v134, v135, v136);
      v143 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v143 = DataManager_TypeInfo;
      }
      static_fields = v143->static_fields;
      static_fields->updateData = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v137, v138, v139, v140, v141, v142);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      v147 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v145, v146);
      UnityEngine_WaitForEndOfFrame___ctor(v147, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v147;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(p__2__current, (System_Int32_array **)v147, v149, v150, v151, v152, v153, v154);
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
      v156 = (System_Int32_array **)CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_B0D97C(v156);
      _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v156;
      sub_B0D840(
        (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
        v156,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v163, v164, v165, v166, v167, v168);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      v171 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v169, v170);
      UnityEngine_WaitForEndOfFrame___ctor(v171, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v171;
      v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(v94, (System_Int32_array **)v171, v172, v173, v174, v175, v176, v177);
      v101 = 2;
      goto LABEL_88;
    case 2:
      v8->fields.__1__state = -1;
      v82 = (MasterDataUnpakcer_o *)sub_B0D974(MasterDataUnpakcer_TypeInfo, method, v2);
      MasterDataUnpakcer___ctor(v82, 0LL);
      if ( !_4__this )
        sub_B0D97C(v83);
      if ( !v82 )
        sub_B0D97C(v83);
      v84 = (System_Int32_array **)MasterDataUnpakcer__Unpack_20980868(
                                     v82,
                                     (System_Byte_array *)_4__this->fields.saveNameList,
                                     0LL);
      v8->fields._dataMapObject_5__7 = (Il2CppObject *)v84;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7, v84, v85, v86, v87, v88, v89, v90);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43098652(0LL);
      v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v91, v92);
      UnityEngine_WaitForEndOfFrame___ctor(v93, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v93;
      v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B0D840(v94, (System_Int32_array **)v93, v95, v96, v97, v98, v99, v100);
      v101 = 3;
      goto LABEL_88;
    case 3:
      dataMapObject_5__7 = (System_Int32_array **)v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7
        && (v103 = *(&System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.bitflags2 + 1),
            LOBYTE((*dataMapObject_5__7)->m_Items[68]) >= (unsigned int)v103) )
      {
        if ( *(System_Collections_Generic_Dictionary_string__long____c **)(*(_QWORD *)&(*dataMapObject_5__7)->m_Items[43]
                                                                         + 8 * v103
                                                                         - 8) == System_Collections_Generic_Dictionary_string__long____TypeInfo )
          v104 = dataMapObject_5__7;
        else
          v104 = 0LL;
      }
      else
      {
        v104 = 0LL;
      }
      v8->fields._dataMapDict_5__6 = (struct System_Collections_Generic_Dictionary_string__long____o *)v104;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, v104, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_302;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v199 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v199, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v199;
        v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(v94, (System_Int32_array **)v199, v200, v201, v202, v203, v204, v205);
        v101 = 4;
        goto LABEL_88;
      }
LABEL_82:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_89;
      v206 = 0;
      v8->fields._i_5__9 = 0;
      p_i_5__9 = &v8->fields._i_5__9;
      while ( 2 )
      {
        if ( v206 < v8->fields._dataListCount_5__2 )
        {
          v211 = (Il2CppObject *)sub_B0D974(DataManager___c__DisplayClass49_0_TypeInfo, method, v2);
          System_Object___ctor(v211, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v211;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v8->fields.__8__1,
            (System_Int32_array **)v211,
            v213,
            v214,
            v215,
            v216,
            v217,
            v218);
          v225 = _4__this->fields.lookup;
          if ( !v225 )
            goto LABEL_302;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v225->fields.entries) )
            goto LABEL_303;
          v227 = *((_QWORD *)&v225->fields.count + i_5__9);
          if ( !v227 )
            goto LABEL_302;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_302;
          v228 = *(System_Int32_array ***)(v227 + 24);
          *(_QWORD *)&this->fields.__1__state = v228;
          sub_B0D840((BattleServantConfConponent_o *)&this->fields, v228, v219, v220, v221, v222, v223, v224);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_302;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                 (System_Xml_XmlQualifiedName_o *)_8__1->fields.masterName,
                 (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              0LL,
              v230,
              v231,
              v232,
              v233,
              v234,
              v235);
            v237 = v8->fields.__8__1;
            if ( !v237 )
              sub_B0D97C(v236);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_B0D97C(0LL);
            Item = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            dataMapDict_5__6,
                                            (System_Type_o *)v237->fields.masterName,
                                            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              Item,
              v240,
              v241,
              v242,
              v243,
              v244,
              v245);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v421 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v246, v247);
              UnityEngine_WaitForEndOfFrame___ctor(v421, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v421;
              v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B0D840(v94, (System_Int32_array **)v421, v422, v423, v424, v425, v426, v427);
              v101 = 5;
              goto LABEL_88;
            }
LABEL_103:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.lockCountObj;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v248 = v8->fields.__8__1;
            if ( !v248 || !this )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                              (WarBoardManager_TaskList_o *)v248->fields.masterName,
                                                              (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_302;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v404 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v404 = DataManager_TypeInfo;
                }
                v209 = v404->static_fields;
                result = 0;
                v210 = 6;
                goto LABEL_300;
              }
            }
            saveDataMapList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
            v253 = *p__8__1;
            v254 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                              System_Predicate_string__TypeInfo,
                                                                              v249,
                                                                              v250);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v254,
              (Il2CppObject *)v253,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
            if ( !saveDataMapList )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                              saveDataMapList,
                                                              (System_Predicate_T__o *)v254,
                                                              (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_long____Add__);
              ++v8->fields._saveDataCount_5__3;
            }
            else
            {
              v255 = (int)this;
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                v255,
                (WarBoardManager_TaskList_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._isAdd_5__4 = 1;
            v8->fields._dataMap_5__10 = 0LL;
            sub_B0D840(p_dataMap_5__10, 0LL, v257, v258, v259, v260, v261, v262);
            p_i_5__9 = &v8->fields._i_5__9;
          }
          *p__8__1 = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)p__8__1, 0LL, v230, v231, v232, v233, v234, v235);
          v206 = *p_i_5__9 + 1;
          *p_i_5__9 = v206;
          continue;
        }
        break;
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v263, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v264, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v264;
        v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(v94, (System_Int32_array **)v264, v265, v266, v267, v268, v269, v270);
        v101 = 6;
LABEL_88:
        *(_DWORD *)&v94[-1].fields.isOpenAfter = v101;
        return 1;
      }
LABEL_122:
      if ( !v8->fields._isAdd_5__4 )
      {
        v271 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v271 = ManagerConfig_TypeInfo;
        }
        if ( !v271->static_fields->UseMock )
          goto LABEL_89;
      }
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v272,
        v273,
        v274,
        v275,
        v276,
        v277);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v278, v279, v280, v281, v282, v283);
      if ( !_4__this )
        goto LABEL_302;
LABEL_128:
      v284 = _4__this->fields.saveDataMapList;
      if ( !v284 )
        goto LABEL_302;
      if ( v284->fields._size <= 0 )
      {
LABEL_89:
        v208 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v208 = DataManager_TypeInfo;
        }
        v209 = v208->static_fields;
        result = 0;
        v210 = 5;
        goto LABEL_300;
      }
      LODWORD(_4__this->fields.masterLoadThreads) = 0;
      v285 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v108,
                                                         v109);
      System_Collections_Generic_List_int____ctor(
        v285,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      v8->fields._loadedIndices_5__5 = v285;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v8->fields._loadedIndices_5__5,
        (System_Int32_array **)v285,
        v286,
        v287,
        v288,
        v289,
        v290,
        v291);
      p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
      if ( !v8->fields.isUseTips )
        goto LABEL_201;
      v292 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v292 = ManagerConfig_TypeInfo;
      }
      if ( !System_String__op_Inequality(
              v292->static_fields->ServerDefaultType,
              (System_String_o *)StringLiteral_11612/*"SCRIPT"*/,
              0LL) )
        goto LABEL_201;
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_302;
      if ( CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
        goto LABEL_201;
      v293 = sub_B0D8BC(DataMasterBase___TypeInfo, 8LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v293 )
        goto LABEL_302;
      v300 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( !*(_DWORD *)(v293 + 24) )
        goto LABEL_303;
      *(_QWORD *)(v293 + 32) = v300;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 32), v300, v294, v295, v296, v297, v298, v299);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantClassMaster___);
      v307 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 1u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 40) = v307;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 40), v307, v301, v302, v303, v304, v305, v306);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v314 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 2u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 48) = v314;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 48), v314, v308, v309, v310, v311, v312, v313);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
      v321 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 3u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 56) = v321;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 56), v321, v315, v316, v317, v318, v319, v320);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantProfileMaster___);
      v328 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 4u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 64) = v328;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 64), v328, v322, v323, v324, v325, v326, v327);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventServantMaster___);
      v335 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 5u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 72) = v335;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 72), v335, v329, v330, v331, v332, v333, v334);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v342 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v293 + 24) <= 6u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 80) = v342;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 80), v342, v336, v337, v338, v339, v340, v341);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
      v349 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B0D964(this, *(_QWORD *)(*(_QWORD *)v293 + 64LL));
        if ( !this )
        {
LABEL_233:
          v428 = sub_B0D99C();
          sub_B0D948(v428, 0LL);
        }
      }
      if ( *(_DWORD *)(v293 + 24) <= 7u )
        goto LABEL_303;
      *(_QWORD *)(v293 + 88) = v349;
      sub_B0D840((BattleServantConfConponent_o *)(v293 + 88), v349, v343, v344, v345, v346, v347, v348);
      v352 = *(_QWORD *)(v293 + 24);
      if ( (int)v352 >= 1 )
      {
        v353 = 0LL;
        while ( (unsigned int)v353 < (unsigned int)v352 )
        {
          v354 = *(DataMasterBase_o **)(v293 + 32 + 8 * v353);
          v355 = sub_B0D974(DataManager___c__DisplayClass49_1_TypeInfo, v350, v351);
          System_Object___ctor((Il2CppObject *)v355, 0LL);
          if ( !v354 )
            goto LABEL_302;
          if ( !v355 )
            goto LABEL_302;
          MasterName_k__BackingField = (System_Int32_array **)v354->fields._MasterName_k__BackingField;
          *(_QWORD *)(v355 + 16) = MasterName_k__BackingField;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v355 + 16),
            MasterName_k__BackingField,
            v356,
            v357,
            v358,
            v359,
            v360,
            v361);
          v363 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
          v366 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                            System_Predicate_string__TypeInfo,
                                                                            v364,
                                                                            v365);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v366,
            (Il2CppObject *)v355,
            Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_string___ctor__);
          if ( !v363 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                            v363,
                                                            (System_Predicate_T__o *)v366,
                                                            (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_string__FindIndex__);
          if ( ((unsigned int)this & 0x80000000) == 0 )
          {
            v368 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v368 )
              goto LABEL_302;
            saveNameList = (Il2CppObject *)_4__this->fields.saveNameList;
            v370 = (int)this;
            if ( *(_DWORD *)(v368 + 24) <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v371 = *(_QWORD *)(*(_QWORD *)(v368 + 16) + 8LL * (int)this + 32);
            if ( !v371 )
              goto LABEL_302;
            if ( !*(_DWORD *)(v371 + 24) )
              break;
            *(_QWORD *)&v448.fields.has_value = *(_QWORD *)(v371 + 32);
            v448.fields.value = (int64_t)&v443;
            v443.fields.value = 0LL;
            *(_QWORD *)&v443.fields.has_value = 0LL;
            System_Nullable_long____ctor(v448, Method_System_Nullable_long___ctor__, v367);
            v373 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v373 )
              goto LABEL_302;
            if ( *(_DWORD *)(v373 + 24) <= (unsigned int)v370 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v374 = *(_QWORD *)(*(_QWORD *)(v373 + 16) + 8LL * v370 + 32);
            if ( !v374 )
              goto LABEL_302;
            if ( *(_DWORD *)(v374 + 24) <= 1u )
              break;
            *(_QWORD *)&v449.fields.has_value = *(_QWORD *)(v374 + 40);
            v449.fields.value = (int64_t)&v442;
            v442.fields.value = 0LL;
            *(_QWORD *)&v442.fields.has_value = 0LL;
            System_Nullable_long____ctor(v449, Method_System_Nullable_long___ctor__, v372);
            DataMasterBase__Replaced(v354, saveNameList, v443, v442, 0LL);
            this = *p_loadedIndices_5__5;
            if ( !*p_loadedIndices_5__5 )
              goto LABEL_302;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v370,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            ++LODWORD(_4__this->fields.masterLoadThreads);
          }
          v352 = *(_QWORD *)(v293 + 24);
          if ( (int)++v353 >= (int)v352 )
            goto LABEL_185;
        }
LABEL_303:
        v440 = sub_B0D9A8(this);
        sub_B0D948(v440, 0LL);
      }
LABEL_185:
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_302;
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
        this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
          *(float *)&_4__this->fields.masterCheckName = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v377 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v375, v376);
          UnityEngine_WaitForEndOfFrame___ctor(v377, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v377;
          v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B0D840(v94, (System_Int32_array **)v377, v378, v379, v380, v381, v382, v383);
          v101 = 7;
          goto LABEL_88;
        }
LABEL_302:
        sub_B0D97C(this);
      }
LABEL_201:
      DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0LL);
      if ( v8->fields._isAdd_5__4 )
      {
        v384 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v384 = ManagerConfig_TypeInfo;
        }
        if ( !v384->static_fields->UseMock )
        {
          DataManager__DeleteCacheFile(_4__this, 0LL);
          if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
          {
            v414 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v412, v413);
            UnityEngine_WaitForEndOfFrame___ctor(v414, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v414;
            v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B0D840(v94, (System_Int32_array **)v414, v415, v416, v417, v418, v419, v420);
            v101 = 8;
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
            v180 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v178, v179);
            System_Func_bool____ctor(
              v180,
              (Il2CppObject *)_4__this,
              Method_DataManager__updateMasterData_b__49_0__,
              (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
            v183 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v181, v182);
            UnityEngine_WaitUntil___ctor(v183, v180, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v183;
            v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B0D840(v94, (System_Int32_array **)v183, v184, v185, v186, v187, v188, v189);
            v101 = 9;
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
          v192 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v190, v191);
          UnityEngine_WaitForEndOfFrame___ctor(v192, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v192;
          v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B0D840(v94, (System_Int32_array **)v192, v193, v194, v195, v196, v197, v198);
          v101 = 10;
          goto LABEL_88;
        }
LABEL_206:
        v385 = *(Il2CppObject **)&_4__this->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15144168(v385, &lockTaken, 0LL);
        if ( SLODWORD(_4__this->fields.masterLoadThreads) >= v8->fields._saveDataCount_5__3 )
          v388 = 1739;
        else
          v388 = 1709;
        v444 = v388;
        v445 = 1;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v385, 0LL);
        if ( v444 == 1709 )
        {
          v445 = 0;
        }
        else if ( v444 == 1739 )
        {
          v445 = 0;
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
              (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
            this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
            if ( this )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
                (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_long____Clear__);
              _4__this->fields.saveNameList = 0LL;
              sub_B0D840(
                (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
                0LL,
                v389,
                v390,
                v391,
                v392,
                v393,
                v394);
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_43098652(0LL);
              v397 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v395, v396);
              UnityEngine_WaitForEndOfFrame___ctor(v397, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v397;
              v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B0D840(v94, (System_Int32_array **)v397, v398, v399, v400, v401, v402, v403);
              v101 = 12;
              goto LABEL_88;
            }
          }
          goto LABEL_302;
        }
        v405 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v386, v387);
        UnityEngine_WaitForEndOfFrame___ctor(v405, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v405;
        v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B0D840(v94, (System_Int32_array **)v405, v406, v407, v408, v409, v410, v411);
        v101 = 11;
        goto LABEL_88;
      }
      v78 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v78 = DataManager_TypeInfo;
      }
      v78->static_fields->updateMasterDataResult = 4;
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
      v80 = &v8->fields._i_5__9;
      v81 = 0;
      v8->fields.__1__state = -1;
      goto LABEL_241;
    case 0xD:
      v80 = &v8->fields._i_5__9;
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v81 = *v80 + 1;
        *v80 = v81;
LABEL_241:
        if ( v81 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_302;
        v429 = _4__this->fields.lookup;
        if ( !v429 )
          goto LABEL_302;
        if ( (unsigned int)v81 >= LODWORD(v429->fields.entries) )
          goto LABEL_303;
        this = (DataManager__updateMasterData_d__49_o *)*((_QWORD *)&v429->fields.count + v81);
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
            v433 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v430, v431);
            UnityEngine_WaitForEndOfFrame___ctor(v433, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v433;
            v94 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B0D840(v94, (System_Int32_array **)v433, v434, v435, v436, v437, v438, v439);
            v101 = 13;
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
      v432 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v432 = DataManager_TypeInfo;
      }
      v209 = v432->static_fields;
      result = 0;
      v210 = 1;
LABEL_300:
      v209->updateMasterDataResult = v210;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  struct System_String_o **p_cryptString_5__3; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  DataManager_c *v36; // x0
  __int64 webViewData; // x0
  System_Int32_array **v38; // x0
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
  DataManager_c *v51; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Item; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  bool result; // w0
  Il2CppObject **p_dataObject_5__4; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **p_data_5__2; // x21
  System_String_o *v67; // x21
  System_Byte_array *v68; // x21
  Il2CppObject *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x1
  __int64 v77; // x2
  UnityEngine_WaitForEndOfFrame_o *v78; // x20
  Il2CppObject **v79; // x19
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v86; // w8
  Il2CppObject *v87; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_23639896; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x1
  UnityEngine_WaitForEndOfFrame_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_String_o *v103; // x20
  System_String_o *v104; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v105; // x0
  System_Collections_Generic_Dictionary_string__object__o *v106; // x23
  __int64 v107; // x9
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7

  if ( (byte_42131AA & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, method);
    sub_B0D8A4(&System_Convert_TypeInfo, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13);
    sub_B0D8A4(&JsonManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_17720/*"contactURL"*/, v17);
    sub_B0D8A4(&StringLiteral_18789/*"filePass"*/, v18);
    sub_B0D8A4(&StringLiteral_16668/*"baseURL"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_42131AA = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v22 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v22 = DataManager_TypeInfo;
      }
      if ( !v22->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      p_cryptString_5__3 = &this->fields._cryptString_5__3;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, 0LL, v24, v25, v26, v27, v28, v29);
      this->fields._dataObject_5__4 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields._dataObject_5__4, 0LL, v30, v31, v32, v33, v34, v35);
      v36 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v36 = DataManager_TypeInfo;
      }
      webViewData = (__int64)v36->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_61;
      v38 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)webViewData + 360LL))(
                                     webViewData,
                                     *(_QWORD *)(*(_QWORD *)webViewData + 368LL));
      *p_cryptString_5__3 = (struct System_String_o *)v38;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, v38, v39, v40, v41, v42, v43, v44);
      v51 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v51 = DataManager_TypeInfo;
      }
      static_fields = v51->static_fields;
      static_fields->webViewData = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&static_fields->webViewData, 0LL, v45, v46, v47, v48, v49, v50);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v54, v55);
        UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
        this->fields.__2__current = (Il2CppObject *)v56;
        p__2__current = &this->fields.__2__current;
        sub_B0D840(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v56,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_21:
      v67 = *p_cryptString_5__3;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v68 = System_Convert__FromBase64String(v67, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v69 = CatAndMouseGame__MouseGame2MsgPack(v68, 0, 0LL);
      this->fields._dataObject_5__4 = v69;
      p_dataObject_5__4 = &this->fields._dataObject_5__4;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        (System_Int32_array **)v69,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v78 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v76, v77);
        UnityEngine_WaitForEndOfFrame___ctor(v78, 0LL);
        this->fields.__2__current = (Il2CppObject *)v78;
        v79 = &this->fields.__2__current;
        sub_B0D840((BattleServantConfConponent_o *)v79, (System_Int32_array **)v78, v80, v81, v82, v83, v84, v85);
        v86 = 2;
LABEL_36:
        *((_DWORD *)v79 - 2) = v86;
        return 1;
      }
LABEL_30:
      v87 = *p_dataObject_5__4;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      Dictionary_23639896 = JsonManager__getDictionary_23639896(v87, 0LL);
      this->fields._data_5__2 = Dictionary_23639896;
      p_data_5__2 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields._data_5__2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._data_5__2,
        (System_Int32_array **)Dictionary_23639896,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v96 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v95, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v96, 0LL);
        this->fields.__2__current = (Il2CppObject *)v96;
        v79 = &this->fields.__2__current;
        sub_B0D840((BattleServantConfConponent_o *)v79, (System_Int32_array **)v96, v97, v98, v99, v100, v101, v102);
        v86 = 3;
        goto LABEL_36;
      }
LABEL_37:
      if ( !*p_data_5__2 )
        goto LABEL_57;
      v103 = (System_String_o *)StringLiteral_1/*""*/;
      v104 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              *p_data_5__2,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_16668/*"baseURL"*/,
              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_42;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_16668/*"baseURL"*/,
                                                                                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v104 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_42:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              Item,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_17720/*"contactURL"*/,
              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_47;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_17720/*"contactURL"*/,
                                                                                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v103 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_47:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             Item,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18789/*"filePass"*/,
             (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = *p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_59:
          sub_B0D97C(Item);
        v105 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                 (System_Type_o *)StringLiteral_18789/*"filePass"*/,
                 (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v106 = (System_Collections_Generic_Dictionary_string__object__o *)v105;
        if ( v105 )
        {
          v107 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v105->klass->_2.bitflags2 + 1) < (unsigned int)v107
            || (System_Collections_Generic_Dictionary_string__object__c *)v105->klass->_2.typeHierarchy[v107 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            webViewData = sub_B0DC70(v105);
LABEL_61:
            sub_B0D97C(webViewData);
          }
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__setupWebViewAddress(v104, v103, v106, 0LL);
      }
LABEL_57:
      this->fields._data_5__2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)p_data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._cryptString_5__3,
        0LL,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
      this->fields._dataObject_5__4 = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        0LL,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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